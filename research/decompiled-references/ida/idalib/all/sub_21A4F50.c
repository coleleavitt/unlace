__int64 __fastcall sub_21A4F50(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r8
  char *v6; // rbp
  char *v7; // rbx
  char *v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  _BYTE *v11; // rdi
  char *v12; // r14
  _BYTE *v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  size_t v18; // r10
  unsigned __int64 v19; // rax
  char *v20; // r9
  char *v21; // rax
  __m128i v22; // xmm0
  char *v23; // rax
  __int16 v24; // ax
  __int64 v25; // rdx
  char *v26; // rax
  int v27; // esi
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  int v30; // esi
  int v31; // esi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // r14
  char *v39; // rdx
  __int64 v40; // rax
  int v41; // esi
  __m128i v42; // xmm3
  __m128i v43; // xmm4
  int v44; // esi
  int v45; // esi
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // rsi
  char *i; // r15
  void *v50; // rdi
  __int64 v51; // rax
  __int64 result; // rax
  __m128 v53; // xmm0
  __int64 v54; // [rsp+8h] [rbp-50h] BYREF
  __m128i v55; // [rsp+10h] [rbp-48h] BYREF

  v3 = a3;
  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = &a2[-*(_QWORD *)a1];
  if ( !(0xCCCCCCCCCCCCCCCDLL * ((__int64)&v6[-*(_QWORD *)a1] >> 4)) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 0x999999999999999ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  if ( 0xCCCCCCCCCCCCCCCDLL * ((__int64)&v6[-*(_QWORD *)a1] >> 4) > 0x999999999999999ALL
                                                                  * ((__int64)&v6[-*(_QWORD *)a1] >> 4)
    || v9 > 0x333333333333333LL )
  {
    v9 = -16;
LABEL_4:
    v55.m128i_i64[0] = a3;
    v10 = operator new(v9);
    v3 = v55.m128i_i64[0];
    v54 = v10;
    goto LABEL_5;
  }
  v54 = 0;
  if ( v9 )
  {
LABEL_30:
    v9 *= 80LL;
    goto LABEL_4;
  }
LABEL_5:
  v11 = *(_BYTE **)(v3 + 56);
  v12 = &v8[v54];
  v13 = *(_BYTE **)(v3 + 48);
  *(_QWORD *)v12 = *(_QWORD *)v3;
  v14 = *(_DWORD *)(v3 + 24);
  v15 = v11 - v13;
  v16 = _mm_loadu_si128((const __m128i *)(v3 + 8));
  v17 = _mm_loadu_si128((const __m128i *)(v3 + 32));
  *((_QWORD *)v12 + 6) = 0;
  *((_DWORD *)v12 + 6) = v14;
  v18 = v11 - v13;
  *(__m128i *)(v12 + 8) = v16;
  v19 = 0xAAAAAAAAAAAAAAABLL * ((v11 - v13) >> 3);
  *((__m128i *)v12 + 2) = v17;
  v20 = nullptr;
  *((_QWORD *)v12 + 7) = 0;
  *((_QWORD *)v12 + 8) = 0;
  if ( v19 )
  {
    if ( v19 > 0xAAAAAAAAAAAAAAALL )
      std::__throw_bad_alloc();
    v55.m128i_i64[1] = v3;
    v55.m128i_i64[0] = v11 - v13;
    v21 = (char *)operator new(v15);
    v3 = v55.m128i_i64[1];
    v15 = v11 - v13;
    v20 = v21;
    v11 = *(_BYTE **)(v55.m128i_i64[1] + 56);
    v13 = *(_BYTE **)(v55.m128i_i64[1] + 48);
    v18 = v11 - v13;
  }
  v55.m128i_i64[0] = (__int64)v20;
  v22 = _mm_loadl_epi64(&v55);
  *((_QWORD *)v12 + 8) = &v20[v15];
  *((__m128i *)v12 + 3) = _mm_unpacklo_epi64(v22, v22);
  if ( v11 != v13 )
  {
    v55.m128i_i64[1] = v3;
    v55.m128i_i64[0] = v18;
    v23 = (char *)memmove(v20, v13, v18);
    v3 = v55.m128i_i64[1];
    v18 = v55.m128i_i64[0];
    v20 = v23;
  }
  v24 = *(_WORD *)(v3 + 72);
  *((_QWORD *)v12 + 7) = &v20[v18];
  *((_WORD *)v12 + 36) = v24;
  if ( a2 == v7 )
  {
    v37 = v54;
  }
  else
  {
    v25 = v54;
    v26 = v7;
    do
    {
      v27 = *(_DWORD *)v26;
      v28 = _mm_loadu_si128((const __m128i *)(v26 + 8));
      v26 += 80;
      v25 += 80;
      v29 = _mm_loadu_si128((const __m128i *)v26 - 3);
      *(_DWORD *)(v25 - 80) = v27;
      v30 = *((_DWORD *)v26 - 19);
      *(__m128i *)(v25 - 72) = v28;
      *(_DWORD *)(v25 - 76) = v30;
      v31 = *((_DWORD *)v26 - 14);
      *(_QWORD *)(v25 - 24) = 0;
      *(_QWORD *)(v25 - 16) = 0;
      *(_QWORD *)(v25 - 32) = 0;
      *(_DWORD *)(v25 - 56) = v31;
      v32 = *((_QWORD *)v26 - 4);
      *(__m128i *)(v25 - 48) = v29;
      *(_QWORD *)(v25 - 32) = v32;
      v33 = *((_QWORD *)v26 - 3);
      *((_QWORD *)v26 - 4) = 0;
      v34 = *(_QWORD *)(v25 - 24);
      *(_QWORD *)(v25 - 24) = v33;
      v35 = *((_QWORD *)v26 - 2);
      *((_QWORD *)v26 - 3) = v34;
      v36 = *(_QWORD *)(v25 - 16);
      *(_QWORD *)(v25 - 16) = v35;
      *((_QWORD *)v26 - 2) = v36;
      *(_WORD *)(v25 - 8) = *((_WORD *)v26 - 4);
    }
    while ( a2 != v26 );
    v37 = v54 + 16 * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(a2 - 80 - v7) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 5);
  }
  v38 = v37 + 80;
  if ( a2 != v6 )
  {
    v39 = a2;
    v40 = v38;
    do
    {
      v41 = *(_DWORD *)v39;
      v42 = _mm_loadu_si128((const __m128i *)(v39 + 8));
      v39 += 80;
      v40 += 80;
      v43 = _mm_loadu_si128((const __m128i *)v39 - 3);
      *(_DWORD *)(v40 - 80) = v41;
      v44 = *((_DWORD *)v39 - 19);
      *(__m128i *)(v40 - 72) = v42;
      *(_DWORD *)(v40 - 76) = v44;
      v45 = *((_DWORD *)v39 - 14);
      *(__m128i *)(v40 - 48) = v43;
      *(_DWORD *)(v40 - 56) = v45;
      v46 = *((_QWORD *)v39 - 4);
      *((_QWORD *)v39 - 4) = 0;
      *(_QWORD *)(v40 - 32) = v46;
      v47 = *((_QWORD *)v39 - 3);
      *((_QWORD *)v39 - 3) = 0;
      *(_QWORD *)(v40 - 24) = v47;
      v48 = *((_QWORD *)v39 - 2);
      *((_QWORD *)v39 - 2) = 0;
      *(_QWORD *)(v40 - 16) = v48;
      *(_WORD *)(v40 - 8) = *((_WORD *)v39 - 4);
    }
    while ( v6 != v39 );
    v38 += 16 * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v6 - a2 - 80) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 5);
  }
  for ( i = v7; i != v6; i += 80 )
  {
    while ( 1 )
    {
      v50 = *((void **)i + 6);
      if ( !v50 )
        break;
      operator delete(v50);
      i += 80;
      if ( i == v6 )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v7 )
    operator delete(v7);
  v51 = v54;
  v54 = v38;
  result = v9 + v51;
  v53 = _mm_loadh_ps((const double *)&v54);
  *(_QWORD *)(a1 + 16) = result;
  *(__m128 *)a1 = v53;
  return result;
}
