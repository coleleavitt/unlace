void __fastcall sub_1EE9380(__int64 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  unsigned __int64 v6; // rdx
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-E0h]
  _QWORD v15[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-C0h]
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = sub_1EE7490(*a1);
  v4 = *a1;
  *(_DWORD *)(a2 + 12) = v3;
  v5 = sub_1EE7490(v4);
  v6 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 20) = v5;
  v7 = v6;
  ptr = v18;
  v17 = 0x1000000000LL;
  if ( v6 <= 0x10 )
  {
    if ( (_DWORD)v6 )
      goto LABEL_3;
LABEL_11:
    v9 = (unsigned int)v17;
    goto LABEL_7;
  }
  sub_2237220(&ptr, v18, v6, 8);
  if ( !v7 )
    goto LABEL_11;
LABEL_3:
  v8 = 0;
  do
  {
    while ( 1 )
    {
      v10 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v11 = (unsigned int)v17 + 1LL;
      if ( v11 > HIDWORD(v17) )
        break;
      ++v8;
      *((_QWORD *)ptr + (unsigned int)v17) = v10;
      v9 = (unsigned int)(v17 + 1);
      LODWORD(v17) = v17 + 1;
      if ( v8 == v7 )
        goto LABEL_7;
    }
    v14 = v10;
    sub_2237220(&ptr, v18, v11, 8);
    ++v8;
    *((_QWORD *)ptr + (unsigned int)v17) = v14;
    v9 = (unsigned int)(v17 + 1);
    LODWORD(v17) = v17 + 1;
  }
  while ( v7 != v8 );
LABEL_7:
  v15[1] = v9;
  v15[0] = ptr;
  sub_EB8020((__int64)v15, (char *)(a2 + 24));
  v12 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v13 = ptr;
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24) = v12;
  if ( v13 != v18 )
    free(v13);
}
