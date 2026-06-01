void __fastcall sub_1EE9870(__int64 *a1, __int64 a2)
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
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-E8h]
  __int64 v23; // [rsp+0h] [rbp-E8h]
  __int64 v24; // [rsp+0h] [rbp-E8h]
  __int64 v25; // [rsp+8h] [rbp-E0h]
  void *v26; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-C0h]
  _BYTE v30[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = sub_1EE7490(*a1);
  v3 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v2;
  v4 = v3;
  ptr = v30;
  v29 = 0x1000000000LL;
  if ( v3 <= 0x10 )
  {
    v5 = (char *)(a2 + 24);
    if ( (_DWORD)v3 )
      goto LABEL_3;
LABEL_23:
    v26 = ptr;
    v27 = (unsigned int)v29;
    sub_EB8020((__int64)&v26, v5);
    LODWORD(v29) = 0;
    sub_EB85F0(a2, (__int64)ptr, 0);
    LODWORD(v29) = 0;
    sub_EB8620(a2, (__int64)ptr, 0);
    LODWORD(v29) = 0;
    v19 = 0;
    goto LABEL_19;
  }
  v5 = (char *)(a2 + 24);
  sub_2237220(&ptr, v30, v3, 8);
  if ( !v4 )
    goto LABEL_23;
LABEL_3:
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v8 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v9 = (unsigned int)v29 + 1LL;
      if ( v9 > HIDWORD(v29) )
        break;
      ++v6;
      *((_QWORD *)ptr + (unsigned int)v29) = v8;
      v7 = (unsigned int)(v29 + 1);
      LODWORD(v29) = v29 + 1;
      if ( v6 == v4 )
        goto LABEL_7;
    }
    ++v6;
    v25 = v8;
    sub_2237220(&ptr, v30, v9, 8);
    *((_QWORD *)ptr + (unsigned int)v29) = v25;
    v7 = (unsigned int)(v29 + 1);
    LODWORD(v29) = v29 + 1;
  }
  while ( v4 != v6 );
LABEL_7:
  v10 = 0;
  v27 = v7;
  v26 = ptr;
  sub_EB8020((__int64)&v26, v5);
  LODWORD(v29) = 0;
  do
  {
    while ( 1 )
    {
      v12 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v13 = (unsigned int)v29 + 1LL;
      if ( v13 > HIDWORD(v29) )
        break;
      ++v10;
      *((_QWORD *)ptr + (unsigned int)v29) = v12;
      v11 = (unsigned int)(v29 + 1);
      LODWORD(v29) = v29 + 1;
      if ( v10 == v4 )
        goto LABEL_11;
    }
    v22 = v12;
    sub_2237220(&ptr, v30, v13, 8);
    ++v10;
    *((_QWORD *)ptr + (unsigned int)v29) = v22;
    v11 = (unsigned int)(v29 + 1);
    LODWORD(v29) = v29 + 1;
  }
  while ( v4 != v10 );
LABEL_11:
  v14 = 0;
  sub_EB85F0(a2, (__int64)ptr, v11);
  LODWORD(v29) = 0;
  do
  {
    while ( 1 )
    {
      v16 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v17 = (unsigned int)v29 + 1LL;
      if ( v17 > HIDWORD(v29) )
        break;
      ++v14;
      *((_QWORD *)ptr + (unsigned int)v29) = v16;
      v15 = (unsigned int)(v29 + 1);
      LODWORD(v29) = v29 + 1;
      if ( v14 == v4 )
        goto LABEL_15;
    }
    v23 = v16;
    sub_2237220(&ptr, v30, v17, 8);
    ++v14;
    *((_QWORD *)ptr + (unsigned int)v29) = v23;
    v15 = (unsigned int)(v29 + 1);
    LODWORD(v29) = v29 + 1;
  }
  while ( v4 != v14 );
LABEL_15:
  v18 = 0;
  sub_EB8620(a2, (__int64)ptr, v15);
  LODWORD(v29) = 0;
  do
  {
    while ( 1 )
    {
      v20 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v21 = (unsigned int)v29 + 1LL;
      if ( v21 > HIDWORD(v29) )
        break;
      ++v18;
      *((_QWORD *)ptr + (unsigned int)v29) = v20;
      v19 = (unsigned int)(v29 + 1);
      LODWORD(v29) = v29 + 1;
      if ( v18 == v4 )
        goto LABEL_19;
    }
    v24 = v20;
    sub_2237220(&ptr, v30, v21, 8);
    ++v18;
    *((_QWORD *)ptr + (unsigned int)v29) = v24;
    v19 = (unsigned int)(v29 + 1);
    LODWORD(v29) = v29 + 1;
  }
  while ( v4 != v18 );
LABEL_19:
  sub_EB8650(a2, (__int64)ptr, v19);
  if ( ptr != v30 )
    free(ptr);
}
