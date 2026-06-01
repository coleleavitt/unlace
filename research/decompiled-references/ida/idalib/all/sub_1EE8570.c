void __fastcall sub_1EE8570(__int64 *a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  int v4; // ebx
  char *v5; // r14
  int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-E8h]
  __int64 v15; // [rsp+8h] [rbp-E0h]
  void *v16; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-C0h]
  _BYTE v20[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = sub_1EE7490(*a1);
  v3 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v2;
  v4 = v3;
  ptr = v20;
  v19 = 0x1000000000LL;
  if ( v3 <= 0x10 )
  {
    v5 = (char *)(a2 + 24);
    if ( (_DWORD)v3 )
      goto LABEL_3;
LABEL_15:
    v16 = ptr;
    v17 = (unsigned int)v19;
    sub_EB8020((__int64)&v16, v5);
    LODWORD(v19) = 0;
    v11 = 0;
    goto LABEL_11;
  }
  v5 = (char *)(a2 + 24);
  sub_2237220(&ptr, v20, v3, 8);
  if ( !v4 )
    goto LABEL_15;
LABEL_3:
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v8 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v9 = (unsigned int)v19 + 1LL;
      if ( v9 > HIDWORD(v19) )
        break;
      ++v6;
      *((_QWORD *)ptr + (unsigned int)v19) = v8;
      v7 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v19 + 1;
      if ( v6 == v4 )
        goto LABEL_7;
    }
    ++v6;
    v15 = v8;
    sub_2237220(&ptr, v20, v9, 8);
    *((_QWORD *)ptr + (unsigned int)v19) = v15;
    v7 = (unsigned int)(v19 + 1);
    LODWORD(v19) = v19 + 1;
  }
  while ( v4 != v6 );
LABEL_7:
  v10 = 0;
  v17 = v7;
  v16 = ptr;
  sub_EB8020((__int64)&v16, v5);
  LODWORD(v19) = 0;
  do
  {
    while ( 1 )
    {
      v12 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v13 = (unsigned int)v19 + 1LL;
      if ( v13 > HIDWORD(v19) )
        break;
      ++v10;
      *((_QWORD *)ptr + (unsigned int)v19) = v12;
      v11 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v19 + 1;
      if ( v10 == v4 )
        goto LABEL_11;
    }
    v14 = v12;
    sub_2237220(&ptr, v20, v13, 8);
    ++v10;
    *((_QWORD *)ptr + (unsigned int)v19) = v14;
    v11 = (unsigned int)(v19 + 1);
    LODWORD(v19) = v19 + 1;
  }
  while ( v4 != v10 );
LABEL_11:
  sub_EB81A0(a2, (__int64)ptr, v11);
  if ( ptr != v20 )
    free(ptr);
}
