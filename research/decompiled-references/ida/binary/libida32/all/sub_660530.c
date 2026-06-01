unsigned __int64 sub_660530()
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r14
  bool v6; // zf
  unsigned int v7; // eax
  size_t v8; // rax
  size_t v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 bpt_kernel_interface; // rax
  int v13; // ebp
  __int64 j; // rax
  _QWORD *v15; // rbx
  void *v16; // rdi
  int v17; // eax
  void *v18; // rax
  int v19; // eax
  size_t v20; // [rsp+0h] [rbp-298h]
  unsigned int v21; // [rsp+18h] [rbp-280h] BYREF
  unsigned int v22; // [rsp+1Ch] [rbp-27Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-278h] BYREF
  __int128 i; // [rsp+28h] [rbp-270h]
  _DWORD v25[3]; // [rsp+40h] [rbp-258h] BYREF
  int v26; // [rsp+4Ch] [rbp-24Ch]
  char v27; // [rsp+57h] [rbp-241h]
  _DWORD v28[70]; // [rsp+140h] [rbp-158h] BYREF
  unsigned __int64 v29; // [rsp+258h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  netnode_check(&v21, "$ debugger breakpoints", 0, 0);
  if ( !(unsigned __int8)netnode_exist(&v21) )
    return v29 - __readfsqword(0x28u);
  v1 = 83;
  v2 = netnode_supfirst(v21, 83);
  ptr = nullptr;
  v3 = v2;
  for ( i = 0; v3 != -1; v3 = netnode_supnext(v21, v3, 83) )
  {
    do
    {
      memset(v28, 0, 276);
      LOWORD(v28[4]) = 257;
      v28[0] = -1;
      v28[3] = 4;
    }
    while ( netnode_supval(v21, v3, v28, 276, 83) <= 0 );
    v4 = operator new(0x58u);
    *(_QWORD *)v4 = 88;
    v5 = v4;
    v6 = LOBYTE(v28[4]) == 0;
    *(_QWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 32) = 0;
    *(_OWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 40) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v4 + 48) = 0;
    *(_QWORD *)(v4 + 56) = 4;
    *(_QWORD *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 72) = 0xFFFFFFFF00000000LL;
    LODWORD(v4) = v28[0];
    *(_DWORD *)(v5 + 80) = 0;
    *(_DWORD *)(v5 + 32) = v4;
    *(_DWORD *)(v5 + 52) = v4;
    if ( v6 )
      v7 = SBYTE1(v28[4]) & 0xFFFFFFF7;
    else
      v7 = (char)(BYTE1(v28[4]) | 8);
    *(_DWORD *)(v5 + 64) = v7;
    v8 = strlen((const char *)&v28[5]);
    v9 = v8;
    if ( v8 )
    {
      v20 = v8 + 1;
      v18 = (void *)qvector_reserve(v5 + 8, 0, v8 + 1, 1);
      *(_QWORD *)(v5 + 8) = v18;
      *(_QWORD *)(v5 + 16) = v20;
      memmove(v18, &v28[5], v9);
      *(_BYTE *)(*(_QWORD *)(v5 + 8) + v9) = 0;
    }
    if ( LOBYTE(v28[2]) )
    {
      *(_DWORD *)(v5 + 56) = v28[3];
      *(_DWORD *)(v5 + 72) = v28[1];
    }
    v10 = i;
    v11 = ptr;
    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, i + 1, 8);
      v11 = ptr;
      v10 = i;
    }
    v11[v10] = v5;
    v1 = v3;
    *(_QWORD *)&i = i + 1;
  }
  netnode_kill((int)&v21);
  bpt_kernel_interface = get_bpt_kernel_interface(&v21, (const char *)v1);
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)bpt_kernel_interface + 8LL))(bpt_kernel_interface, &ptr);
  v13 = 0;
  for ( j = 0; v13 < (unsigned __int64)i; j = v13 )
  {
    v15 = *((_QWORD **)ptr + j);
    if ( v15 )
    {
      v16 = (void *)v15[1];
      if ( v16 )
      {
        v15[2] = 0;
        qfree(v16);
      }
      operator delete(v15, 0x58u);
    }
    ++v13;
  }
  v17 = getinf(5);
  switch ( v17 )
  {
    case 18:
      netnode_check(v25, "$ elfnode", 0, 0);
      if ( netnode_valobj(v25[0], v28, 64) == 64 && (v28[4] & 0xFFFD) == 1 )
        goto LABEL_31;
      break;
    case 25:
      netnode_check(&v22, "$ macho", 0, 0);
      if ( netnode_supval(v22, 0, v25, 28, 83) == 28 && (v26 == 3 || (unsigned int)(v26 - 6) <= 3) )
        goto LABEL_31;
      break;
    case 11:
      v22 = -1;
      netnode_check(&v22, "$ PE header", 0, 1);
      if ( netnode_valobj(v22, v25, 248) <= 0 || (v27 & 0x20) == 0 )
        break;
LABEL_31:
      v19 = getinf(3);
      setinf(3, v19 | 8u);
      break;
    default:
      break;
  }
  if ( ptr )
  {
    *(_QWORD *)&i = 0;
    qfree(ptr);
  }
  return v29 - __readfsqword(0x28u);
}

