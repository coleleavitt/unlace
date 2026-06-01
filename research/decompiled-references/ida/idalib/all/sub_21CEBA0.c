__int64 __fastcall sub_21CEBA0(__int64 a1, void **a2, __int64 a3)
{
  void **v6; // rbx
  void **v7; // r12
  char *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __m128i si128; // xmm0
  bool v13; // zf
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  void **v17; // r13
  const void **v18; // rsi
  void **v19; // rdi
  unsigned __int64 v20; // r14
  void **v21; // r13
  const void **v22; // rsi
  void **v23; // rdi
  void **i; // rbp
  __int64 result; // rax
  __m128 v26; // xmm0
  unsigned __int64 v27; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  char *v30; // [rsp+18h] [rbp-40h]

  v6 = *(void ***)(a1 + 8);
  v7 = *(void ***)a1;
  v8 = (char *)a2 - *(_QWORD *)a1;
  if ( !(0xCCCCCCCCCCCCCCCDLL * (((__int64)v6 - *(_QWORD *)a1) >> 3)) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 0x999999999999999ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v10 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * (((__int64)v6 - *(_QWORD *)a1) >> 3) > 0x999999999999999ALL
                                                                   * (((__int64)v6 - *(_QWORD *)a1) >> 3)
    || v9 > 0x666666666666666LL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_30:
    v10 = 40 * v9;
LABEL_3:
    v30 = v8;
    v11 = operator new(v10);
    v8 = v30;
    v28 = v11;
    v29 = v11 + v10;
    v27 = v11 + 40;
    goto LABEL_4;
  }
  v27 = 40;
  v29 = 0;
  v28 = 0;
LABEL_4:
  si128 = _mm_load_si128(xmmword_23A8F10);
  v13 = *(_QWORD *)(a3 + 8) == 0;
  v14 = &v8[v28];
  v15 = (__int64)&v8[v28 + 24];
  *(__m128i *)(v14 + 8) = si128;
  *(_QWORD *)v14 = v15;
  if ( !v13 )
  {
    sub_20177C0((char **)v14, (char **)a3);
    si128 = _mm_load_si128(xmmword_23A8F10);
  }
  if ( a2 != v7 )
  {
    v16 = v28;
    v17 = v7;
    do
    {
      while ( 1 )
      {
        *(__m128i *)(v16 + 8) = si128;
        v13 = v17[1] == nullptr;
        *(_QWORD *)v16 = v16 + 24;
        if ( !v13 )
          break;
        v17 += 5;
        v16 += 40;
        if ( a2 == v17 )
          goto LABEL_11;
      }
      v18 = (const void **)v17;
      v19 = (void **)v16;
      v17 += 5;
      v16 += 40;
      sub_2018880(v19, v18);
      si128 = _mm_load_si128(xmmword_23A8F10);
    }
    while ( a2 != v17 );
LABEL_11:
    v27 = v28 + 8 * ((unsigned __int64)((char *)(a2 - 5) - (char *)v7) >> 3) + 80;
  }
  v20 = v27;
  v21 = a2;
  if ( a2 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v13 = v21[1] == nullptr;
        *(__m128i *)(v20 + 8) = si128;
        *(_QWORD *)v20 = v20 + 24;
        if ( !v13 )
          break;
        v21 += 5;
        v20 += 40LL;
        if ( v6 == v21 )
          goto LABEL_17;
      }
      v22 = (const void **)v21;
      v23 = (void **)v20;
      v21 += 5;
      v20 += 40LL;
      sub_2018880(v23, v22);
      si128 = _mm_load_si128(xmmword_23A8F10);
    }
    while ( v6 != v21 );
LABEL_17:
    v27 += 8 * ((unsigned __int64)((char *)v6 - (char *)a2 - 40) >> 3) + 40;
  }
  for ( i = v7; i != v6; i += 5 )
  {
    while ( *i != i + 3 )
    {
      free(*i);
      i += 5;
      if ( v6 == i )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v7 )
    operator delete(v7);
  result = v29;
  v26 = _mm_loadh_ps((const double *)&v27);
  *(_QWORD *)(a1 + 16) = v29;
  *(__m128 *)a1 = v26;
  return result;
}
