void __fastcall sub_1EE81E0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  int v4; // ebp
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  _BYTE *v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-E0h]
  _QWORD v18[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-C0h]
  _BYTE v21[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = *(unsigned int *)(a2 + 16);
  v20 = 0x1000000000LL;
  v4 = v3;
  ptr = v21;
  if ( v3 <= 0x10 )
  {
    if ( (_DWORD)v3 )
      goto LABEL_3;
LABEL_11:
    v6 = (unsigned int)v20;
    goto LABEL_7;
  }
  sub_2237220(&ptr, v21, v3, 8);
  if ( !v4 )
    goto LABEL_11;
LABEL_3:
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v7 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v8 = (unsigned int)v20 + 1LL;
      if ( v8 > HIDWORD(v20) )
        break;
      ++v5;
      *((_QWORD *)ptr + (unsigned int)v20) = v7;
      v6 = (unsigned int)(v20 + 1);
      LODWORD(v20) = v20 + 1;
      if ( v5 == v4 )
        goto LABEL_7;
    }
    v17 = v7;
    sub_2237220(&ptr, v21, v8, 8);
    ++v5;
    *((_QWORD *)ptr + (unsigned int)v20) = v17;
    v6 = (unsigned int)(v20 + 1);
    LODWORD(v20) = v20 + 1;
  }
  while ( v4 != v5 );
LABEL_7:
  v18[1] = v6;
  v18[0] = ptr;
  sub_EB8020((__int64)v18, (char *)(a2 + 32));
  v9 = *a1;
  v10 = *(unsigned int *)(*a1 + 24);
  v11 = *(_QWORD *)(*a1 + 32);
  v12 = *(_DWORD *)(*a1 + 24);
  *(_BYTE *)(a2 + 24) = *(_QWORD *)(v11 + 8 * v10) != 0;
  *(_DWORD *)(v9 + 24) = v10 + 2;
  *(_BYTE *)(a2 + 25) = *(_QWORD *)(v11 + 8LL * (unsigned int)(v12 + 1)) != 0;
  v13 = sub_1EE7490(v9);
  v14 = *a1;
  *(_DWORD *)(a2 + 12) = v13;
  v15 = sub_1EE7490(v14);
  v16 = ptr;
  *(_DWORD *)(a2 + 20) = v15;
  if ( v16 != v21 )
    free(v16);
}
