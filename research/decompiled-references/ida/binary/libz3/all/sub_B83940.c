__int64 (__fastcall **__fastcall sub_B83940(__int64 a1))()
{
  void *v2; // rdi
  void *v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  void *v7; // r12
  __int64 v8; // rsi
  void *v9; // rbp
  char *v10; // r15
  __int64 v11; // rax
  char *v12; // rbp
  char *v13; // r14
  void *v14; // r12
  char *v15; // rsi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  void *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  void *v27; // rdi
  void *v28; // rbp
  __int64 v29; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v31; // rdi

  *(_QWORD *)a1 = off_1C72EB0;
  sub_B83550(a1);
  v2 = *(void **)(a1 + 1632);
  if ( v2 )
    sub_186B220(v2);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 1584);
  sub_182CBA0(v3, a1 + 1600);
  v4 = *(_QWORD *)(a1 + 1568);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 40 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 8);
        v8 = v4 + 24;
        v4 += 40;
        sub_182CBA0(v7, v8);
      }
      while ( v6 != v4 );
      v4 = *(_QWORD *)(a1 + 1568);
    }
    sub_186B220((void *)(v4 - 8));
  }
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 1536);
  sub_182CBA0(v9, a1 + 1552);
  v10 = *(char **)(a1 + 1512);
  if ( v10 )
  {
    v11 = *(unsigned int *)(a1 + 1520);
    if ( (_DWORD)v11 )
    {
      v12 = *(char **)(a1 + 1512);
      v13 = &v10[40 * v11];
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12 + 8);
        v15 = v12 + 24;
        v12 += 40;
        sub_182CBA0(v14, v15);
      }
      while ( v13 != v12 );
    }
    sub_186B220(v10);
  }
  v16 = *(void **)(a1 + 1504);
  *(_QWORD *)(a1 + 1456) = &off_1C62200;
  if ( v16 )
    sub_186B220(v16);
  v17 = *(void **)(a1 + 1480);
  if ( v17 )
    sub_186B220(v17);
  v18 = *(_QWORD *)(a1 + 1448);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(_QWORD *)(a1 + 1400);
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = *(void **)(a1 + 1376);
  if ( v20 )
    sub_186B220(v20);
  v21 = *(_QWORD *)(a1 + 1360);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(_QWORD *)(a1 + 1352);
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = *(_QWORD *)(a1 + 1336);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = *(_QWORD *)(a1 + 1328);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  sub_B82650((_QWORD *)(a1 + 960));
  v25 = *(_QWORD *)(a1 + 936);
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = *(_QWORD *)(a1 + 928);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = *(void **)(a1 + 904);
  if ( v27 )
    sub_186B220(v27);
  sub_233E40(a1 + 240);
  sub_233E40(a1 + 208);
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 56);
  sub_182CBA0(v28, a1 + 72);
  v29 = *(_QWORD *)(a1 + 40);
  result = off_1C70148;
  *(_QWORD *)a1 = off_1C70148;
  if ( v29 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v29 - 8));
  v31 = *(_QWORD *)(a1 + 32);
  if ( v31 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v31 - 8));
  return result;
}

