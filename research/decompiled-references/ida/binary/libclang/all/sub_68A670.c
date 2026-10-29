void __fastcall sub_68A670(_QWORD *a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbp
  void *v4; // rdi
  void *v5; // rdi
  __m128i *v6; // rbx
  void (__fastcall *v7)(__m128i *); // rax
  __int64 v8; // rbx
  void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbp
  char *v12; // rbp
  char *v13; // r13
  void *v14; // rdi

  v2 = (_QWORD *)a1[4];
  *a1 = &off_47D0230;
  v3 = &v2[*((unsigned int *)a1 + 10)];
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (__m128i *)*--v3;
        if ( v6 )
          break;
LABEL_8:
        *v3 = 0;
        if ( v2 == v3 )
          goto LABEL_12;
      }
      v7 = *(void (__fastcall **)(__m128i *))(v6->m128i_i64[0] + 8);
      if ( v7 == sub_689960 )
      {
        v4 = (void *)v6[6].m128i_i64[1];
        v6->m128i_i64[0] = (__int64)&off_47D01C0;
        if ( v4 )
          operator delete(v4, v6[7].m128i_i64[1] - (_QWORD)v4);
        v5 = (void *)v6[5].m128i_i64[0];
        if ( v5 )
          operator delete(v5, v6[6].m128i_i64[0] - (_QWORD)v5);
        sub_62FED0(v6);
        operator delete(v6, 0xB0u);
        goto LABEL_8;
      }
      v7(v6);
      *v3 = 0;
      if ( v2 == v3 )
      {
LABEL_12:
        v3 = (_QWORD *)a1[4];
        break;
      }
    }
  }
  if ( v3 != a1 + 6 )
    free(v3);
  v8 = a1[3];
  if ( v8 )
  {
    *(_QWORD *)v8 = &off_47D01A0;
    operator delete();
    sub_C78B50(v8 + 240);
    v9 = *(void **)(v8 + 208);
    if ( v9 != (void *)(v8 + 224) )
      operator delete(v9, *(_QWORD *)(v8 + 224) + 1LL);
    operator delete();
    operator delete();
    operator delete();
    v10 = *(_QWORD *)(v8 + 56);
    v11 = v10 + 8LL * *(unsigned int *)(v8 + 64);
    while ( v11 != v10 )
    {
      v10 += 8;
      operator delete();
    }
    v12 = *(char **)(v8 + 104);
    v13 = &v12[16 * *(unsigned int *)(v8 + 112)];
    if ( v12 != v13 )
    {
      do
      {
        v12 += 16;
        operator delete();
      }
      while ( v13 != v12 );
      v13 = *(char **)(v8 + 104);
    }
    if ( v13 != (char *)(v8 + 120) )
      free(v13);
    v14 = *(void **)(v8 + 56);
    if ( v14 != (void *)(v8 + 72) )
      free(v14);
    sub_62FC10((_QWORD *)v8);
    operator delete((void *)v8, 0x430u);
  }
  a1[3] = 0;
  *a1 = off_47D0138;
  operator delete(a1, 0x70u);
}

