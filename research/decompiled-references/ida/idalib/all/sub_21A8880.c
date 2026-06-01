__int64 __fastcall sub_21A8880(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // rbp
  __m128i *v6; // rbx
  __int8 *v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int32 v10; // eax
  __m128i *v11; // r14
  __int64 v12; // rsi
  __m128i v13; // xmm5
  __int64 v14; // rax
  _BYTE *v15; // rsi
  _BYTE *v16; // rax
  __m128i v17; // xmm6
  unsigned __int64 v18; // r8
  char *v19; // rax
  char *v20; // r9
  size_t v21; // r10
  __m128i v22; // xmm0
  char *v23; // rax
  __int64 v24; // rdx
  const __m128i *v25; // rax
  __int32 v26; // esi
  __int32 v27; // esi
  __m128i v28; // xmm2
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // r14
  const __m128i *v36; // rdx
  __int64 v37; // rax
  __int32 v38; // esi
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __int32 v41; // esi
  __int32 v42; // esi
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rsi
  const __m128i *i; // r15
  void *v47; // rdi
  __int64 v48; // rax
  __int64 result; // rax
  __m128 v50; // xmm0
  __int64 v51; // [rsp+8h] [rbp-50h] BYREF
  __m128i v52; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xCCCCCCCCCCCCCCCDLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4)) )
  {
    v8 = 1;
    goto LABEL_30;
  }
  v8 = 0x999999999999999ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  if ( 0xCCCCCCCCCCCCCCCDLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4) > 0x999999999999999ALL
                                                                              * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4)
    || v8 > 0x333333333333333LL )
  {
    v8 = -16;
LABEL_4:
    v52.m128i_i64[0] = (__int64)a3;
    v9 = operator new(v8);
    a3 = (const __m128i *)v52.m128i_i64[0];
    v51 = v9;
    goto LABEL_5;
  }
  v51 = 0;
  if ( v8 )
  {
LABEL_30:
    v8 *= 80LL;
    goto LABEL_4;
  }
LABEL_5:
  v10 = a3->m128i_i32[2];
  v11 = (__m128i *)&v7[v51];
  v12 = a3->m128i_i64[0];
  v13 = _mm_loadu_si128(a3 + 1);
  v11[3].m128i_i64[1] = 0;
  v11->m128i_i32[2] = v10;
  v14 = a3[3].m128i_i64[0];
  v11->m128i_i64[0] = v12;
  v15 = (_BYTE *)a3[3].m128i_i64[1];
  v11[3].m128i_i64[0] = v14;
  v16 = (_BYTE *)a3[4].m128i_i64[0];
  v17 = _mm_loadu_si128(a3 + 2);
  v11[1] = v13;
  v11[4].m128i_i64[0] = 0;
  v18 = v16 - v15;
  v11[2] = v17;
  v11[4].m128i_i64[1] = 0;
  if ( (v16 - v15) >> 2 )
  {
    if ( (unsigned __int64)((v16 - v15) >> 2) > 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v52.m128i_i64[1] = (__int64)a3;
    v52.m128i_i64[0] = v16 - v15;
    v19 = (char *)operator new(v18);
    v18 = v52.m128i_i64[0];
    v20 = v19;
    v16 = *(_BYTE **)(v52.m128i_i64[1] + 64);
    v15 = *(_BYTE **)(v52.m128i_i64[1] + 56);
    v21 = v16 - v15;
  }
  else
  {
    v21 = v16 - v15;
    v20 = nullptr;
  }
  v52.m128i_i64[0] = (__int64)v20;
  v22 = _mm_loadl_epi64(&v52);
  v11[4].m128i_i64[1] = (__int64)&v20[v18];
  *(__m128i *)((char *)v11 + 56) = _mm_unpacklo_epi64(v22, v22);
  if ( v16 != v15 )
  {
    v52.m128i_i64[0] = v21;
    v23 = (char *)memmove(v20, v15, v21);
    v21 = v52.m128i_i64[0];
    v20 = v23;
  }
  v11[4].m128i_i64[0] = (__int64)&v20[v21];
  if ( a2 == v6 )
  {
    v34 = v51;
  }
  else
  {
    v24 = v51;
    v25 = v6;
    do
    {
      v26 = v25->m128i_i32[0];
      v25 += 5;
      v24 += 80;
      *(_DWORD *)(v24 - 80) = v26;
      *(_DWORD *)(v24 - 76) = v25[-5].m128i_i32[1];
      v27 = v25[-5].m128i_i32[2];
      *(__m128i *)(v24 - 64) = _mm_loadu_si128(v25 - 4);
      v28 = _mm_loadu_si128(v25 - 3);
      *(_DWORD *)(v24 - 72) = v27;
      *(__m128i *)(v24 - 48) = v28;
      v29 = v25[-2].m128i_i64[0];
      *(_QWORD *)(v24 - 16) = 0;
      *(_QWORD *)(v24 - 8) = 0;
      *(_QWORD *)(v24 - 24) = 0;
      *(_QWORD *)(v24 - 32) = v29;
      *(_QWORD *)(v24 - 24) = v25[-2].m128i_i64[1];
      v30 = v25[-1].m128i_i64[0];
      v25[-2].m128i_i64[1] = 0;
      v31 = *(_QWORD *)(v24 - 16);
      *(_QWORD *)(v24 - 16) = v30;
      v32 = v25[-1].m128i_i64[1];
      v25[-1].m128i_i64[0] = v31;
      v33 = *(_QWORD *)(v24 - 8);
      *(_QWORD *)(v24 - 8) = v32;
      v25[-1].m128i_i64[1] = v33;
    }
    while ( a2 != v25 );
    v34 = v51
        + 16
        * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)&a2[-5] - (char *)v6) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 5);
  }
  v35 = v34 + 80;
  if ( a2 != v5 )
  {
    v36 = a2;
    v37 = v35;
    do
    {
      v38 = v36->m128i_i32[0];
      v39 = _mm_loadu_si128(v36 + 1);
      v36 += 5;
      v37 += 80;
      v40 = _mm_loadu_si128(v36 - 3);
      *(_DWORD *)(v37 - 80) = v38;
      v41 = v36[-5].m128i_i32[1];
      *(__m128i *)(v37 - 64) = v39;
      *(_DWORD *)(v37 - 76) = v41;
      v42 = v36[-5].m128i_i32[2];
      *(__m128i *)(v37 - 48) = v40;
      *(_DWORD *)(v37 - 72) = v42;
      *(_QWORD *)(v37 - 32) = v36[-2].m128i_i64[0];
      v43 = v36[-2].m128i_i64[1];
      v36[-2].m128i_i64[1] = 0;
      *(_QWORD *)(v37 - 24) = v43;
      v44 = v36[-1].m128i_i64[0];
      v36[-1].m128i_i64[0] = 0;
      *(_QWORD *)(v37 - 16) = v44;
      v45 = v36[-1].m128i_i64[1];
      v36[-1].m128i_i64[1] = 0;
      *(_QWORD *)(v37 - 8) = v45;
    }
    while ( v5 != v36 );
    v35 += 16
         * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)v5 - (char *)a2 - 80) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
          + 5);
  }
  for ( i = v6; i != v5; i += 5 )
  {
    while ( 1 )
    {
      v47 = (void *)i[3].m128i_i64[1];
      if ( !v47 )
        break;
      operator delete(v47);
      i += 5;
      if ( v5 == i )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v6 )
    operator delete(v6);
  v48 = v51;
  v51 = v35;
  result = v8 + v48;
  v50 = _mm_loadh_ps((const double *)&v51);
  *(_QWORD *)(a1 + 16) = result;
  *(__m128 *)a1 = v50;
  return result;
}
