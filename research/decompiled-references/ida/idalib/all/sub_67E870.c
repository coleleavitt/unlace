unsigned __int64 sub_67E870()
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  bool v5; // zf
  __int64 v6; // rax
  unsigned int v7; // eax
  size_t v8; // rax
  size_t v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  int v13; // ebp
  __int64 j; // rax
  _QWORD *v15; // rbx
  void *v16; // rdi
  int v17; // eax
  void *v18; // rax
  int v19; // eax
  size_t v20; // [rsp+0h] [rbp-298h]
  __int64 v21; // [rsp+10h] [rbp-288h] BYREF
  __int64 v22; // [rsp+18h] [rbp-280h] BYREF
  void *ptr; // [rsp+20h] [rbp-278h] BYREF
  __int128 i; // [rsp+28h] [rbp-270h]
  __int64 v25; // [rsp+40h] [rbp-258h] BYREF
  int v26; // [rsp+4Ch] [rbp-24Ch]
  char v27; // [rsp+57h] [rbp-241h]
  _QWORD v28[35]; // [rsp+140h] [rbp-158h] BYREF
  unsigned __int64 v29; // [rsp+258h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  netnode_check(&v21, "$ debugger breakpoints", 0, 0);
  if ( !(unsigned __int8)netnode_exist(&v21) )
    return v29 - __readfsqword(0x28u);
  v1 = netnode_supfirst(v21, 83);
  ptr = nullptr;
  v2 = v1;
  for ( i = 0; v2 != -1; v2 = netnode_supnext(v21, v2, 83) )
  {
    do
    {
      memset(v28, 0, sizeof(v28));
      WORD2(v28[2]) = 257;
      v28[0] = -1;
      LODWORD(v28[2]) = 4;
    }
    while ( netnode_supval(v21, v2, v28, 280, 83) <= 0 );
    v3 = operator new(0x60u);
    *(_QWORD *)v3 = 96;
    v4 = v3;
    v5 = BYTE4(v28[2]) == 0;
    *(_QWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 40) = 0;
    *(_OWORD *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 48) = 0xFFFFFFFFLL;
    *(_QWORD *)(v3 + 88) = 0;
    *(_QWORD *)(v3 + 64) = 4;
    *(_QWORD *)(v3 + 80) = 0xFFFFFFFF00000000LL;
    v6 = v28[0];
    *(_QWORD *)(v4 + 32) = v28[0];
    *(_QWORD *)(v4 + 56) = v6;
    if ( v5 )
      v7 = SBYTE5(v28[2]) & 0xFFFFFFF7;
    else
      v7 = (char)(BYTE5(v28[2]) | 8);
    *(_DWORD *)(v4 + 72) = v7;
    v8 = strlen((const char *)&v28[3]);
    v9 = v8;
    if ( v8 )
    {
      v20 = v8 + 1;
      v18 = (void *)qvector_reserve(v4 + 8, 0, v8 + 1, 1);
      *(_QWORD *)(v4 + 8) = v18;
      *(_QWORD *)(v4 + 16) = v20;
      memmove(v18, &v28[3], v9);
      *(_BYTE *)(*(_QWORD *)(v4 + 8) + v9) = 0;
    }
    if ( BYTE4(v28[1]) )
    {
      *(_DWORD *)(v4 + 64) = v28[2];
      *(_DWORD *)(v4 + 80) = v28[1];
    }
    v10 = i;
    v11 = ptr;
    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, i + 1, 8);
      v11 = ptr;
      v10 = i;
    }
    v11[v10] = v4;
    *(_QWORD *)&i = i + 1;
  }
  netnode_kill((int)&v21);
  bpt_kernel_interface = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)(), void **))(*bpt_kernel_interface)[1])(bpt_kernel_interface, &ptr);
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
      operator delete(v15, 0x60u);
    }
    ++v13;
  }
  v17 = getinf(5);
  switch ( v17 )
  {
    case 18:
      netnode_check(&v25, "$ elfnode", 0, 0);
      if ( netnode_valobj(v25, v28, 64) == 64 && (v28[2] & 0xFFFD) == 1 )
        goto LABEL_31;
      break;
    case 25:
      netnode_check(&v22, "$ macho", 0, 0);
      if ( netnode_supval(v22, 0, &v25, 28, 83) == 28 && (v26 == 3 || (unsigned int)(v26 - 6) <= 3) )
        goto LABEL_31;
      break;
    case 11:
      v22 = -1;
      netnode_check(&v22, "$ PE header", 0, 1);
      if ( netnode_valobj(v22, &v25, 248) <= 0 || (v27 & 0x20) == 0 )
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
