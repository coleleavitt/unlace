void __fastcall sub_1EE8790(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // ebx
  char *v7; // r14
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-E8h]
  __int64 v23; // [rsp+0h] [rbp-E8h]
  __int64 v24; // [rsp+8h] [rbp-E0h]
  void *v25; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-C0h]
  _BYTE v29[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a2 + 24;
  if ( !a2 )
    v3 = 0;
  sub_1EACA60(a1, v3);
  v4 = sub_1EE7490(*a1);
  v5 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v4;
  v6 = v5;
  ptr = v29;
  v28 = 0x1000000000LL;
  if ( v5 <= 0x10 )
  {
    v7 = (char *)(a2 + 40);
    if ( (_DWORD)v5 )
      goto LABEL_5;
LABEL_22:
    v25 = ptr;
    v26 = (unsigned int)v28;
    sub_EB8020((__int64)&v25, v7);
    LODWORD(v28) = 0;
    sub_EB81D0(a2, (__int64)ptr, 0);
    LODWORD(v28) = 0;
    v19 = 0;
    goto LABEL_17;
  }
  v7 = (char *)(a2 + 40);
  sub_2237220(&ptr, v29, v5, 8);
  if ( !v6 )
    goto LABEL_22;
LABEL_5:
  v8 = 0;
  do
  {
    while ( 1 )
    {
      v10 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v11 = (unsigned int)v28 + 1LL;
      if ( v11 > HIDWORD(v28) )
        break;
      ++v8;
      *((_QWORD *)ptr + (unsigned int)v28) = v10;
      v9 = (unsigned int)(v28 + 1);
      LODWORD(v28) = v28 + 1;
      if ( v8 == v6 )
        goto LABEL_9;
    }
    ++v8;
    v24 = v10;
    sub_2237220(&ptr, v29, v11, 8);
    *((_QWORD *)ptr + (unsigned int)v28) = v24;
    v9 = (unsigned int)(v28 + 1);
    LODWORD(v28) = v28 + 1;
  }
  while ( v6 != v8 );
LABEL_9:
  v12 = 0;
  v26 = v9;
  v25 = ptr;
  sub_EB8020((__int64)&v25, v7);
  LODWORD(v28) = 0;
  do
  {
    v13 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v14 = (unsigned int)v28;
    v15 = (unsigned int)v28 + 1LL;
    if ( v15 > HIDWORD(v28) )
    {
      v23 = v13;
      sub_2237220(&ptr, v29, v15, 8);
      v14 = (unsigned int)v28;
      v16 = ptr;
      v13 = v23;
    }
    else
    {
      v16 = ptr;
    }
    v16[v14] = v13;
    ++v12;
    v17 = (unsigned int)(v28 + 1);
    LODWORD(v28) = v28 + 1;
  }
  while ( v12 != v6 );
  v18 = 0;
  sub_EB81D0(a2, (__int64)ptr, v17);
  LODWORD(v28) = 0;
  do
  {
    while ( 1 )
    {
      v20 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v21 = (unsigned int)v28 + 1LL;
      if ( v21 > HIDWORD(v28) )
        break;
      ++v18;
      *((_QWORD *)ptr + (unsigned int)v28) = v20;
      v19 = (unsigned int)(v28 + 1);
      LODWORD(v28) = v28 + 1;
      if ( v18 == v6 )
        goto LABEL_17;
    }
    v22 = v20;
    sub_2237220(&ptr, v29, v21, 8);
    ++v18;
    *((_QWORD *)ptr + (unsigned int)v28) = v22;
    v19 = (unsigned int)(v28 + 1);
    LODWORD(v28) = v28 + 1;
  }
  while ( v6 != v18 );
LABEL_17:
  sub_EB8200(a2, (__int64)ptr, v19);
  if ( ptr != v29 )
    free(ptr);
}
