__int64 __fastcall sub_21A5310(__int64 a1, const __m128i *a2, const __m128i *a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  const __m128i *v9; // rsi
  __m128i *v10; // r15
  __int8 *v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  __m128i *v17; // rax
  __int64 v18; // r11
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __m128i v23; // xmm7
  __m128i v24; // xmm2
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdx
  const __m128i *v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm1
  void *v31; // rdi
  size_t v32; // rdx
  __int64 result; // rax
  __int64 v34; // [rsp+0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+8h] [rbp-60h]
  const __m128i *v36; // [rsp+10h] [rbp-58h]
  _QWORD *v37; // [rsp+18h] [rbp-50h]
  _QWORD *v38; // [rsp+20h] [rbp-48h]
  _QWORD *v39; // [rsp+28h] [rbp-40h]

  v9 = *(const __m128i **)(a1 + 8);
  v10 = *(__m128i **)a1;
  v11 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0x8E38E38E38E38E39LL * (((__int64)v9->m128i_i64 - *(_QWORD *)a1) >> 4)) )
  {
    v12 = 1;
    goto LABEL_17;
  }
  v12 = 0x1C71C71C71C71C72LL * (v9 - v10);
  v13 = -16;
  if ( 0x8E38E38E38E38E39LL * (v9 - v10) > v12 || v12 > 0x1C71C71C71C71C7LL )
    goto LABEL_3;
  if ( v12 )
  {
LABEL_17:
    v13 = 144 * v12;
LABEL_3:
    v39 = a6;
    v38 = a5;
    v37 = a4;
    v36 = a3;
    v34 = (__int64)v9;
    v14 = operator new(v13);
    a3 = v36;
    v15 = v14;
    a4 = v37;
    a5 = v38;
    v35 = v14 + v13;
    a6 = v39;
    v16 = v14 + 144;
    goto LABEL_4;
  }
  v16 = 144;
  v15 = 0;
  v35 = 0;
LABEL_4:
  v17 = (__m128i *)&v11[v15];
  v18 = *a4;
  v19 = _mm_loadu_si128(a3 + 1);
  v20 = _mm_loadu_si128(a3 + 2);
  v21 = _mm_loadu_si128(a3 + 3);
  v22 = _mm_loadu_si128(a3 + 4);
  *v17 = _mm_loadu_si128(a3);
  v23 = _mm_loadu_si128(a3 + 5);
  v24 = _mm_loadu_si128(a3 + 6);
  v17[1] = v19;
  v25 = *a5;
  v26 = *a6;
  v17[2] = v20;
  v27 = a3[7].m128i_i64[0];
  v17[3] = v21;
  v17[4] = v22;
  v17[5] = v23;
  v17[6] = v24;
  v17[7].m128i_i64[0] = v27;
  v17[7].m128i_i64[1] = v18;
  v17[8].m128i_i64[0] = v25;
  v17[8].m128i_i64[1] = v26;
  if ( a2 != v10 )
  {
    v28 = v10;
    v29 = v15;
    do
    {
      v30 = _mm_loadu_si128(v28);
      v28 += 9;
      v29 += 144;
      *(__m128i *)(v29 - 144) = v30;
      *(__m128i *)(v29 - 128) = _mm_loadu_si128(v28 - 8);
      *(__m128i *)(v29 - 112) = _mm_loadu_si128(v28 - 7);
      *(__m128i *)(v29 - 96) = _mm_loadu_si128(v28 - 6);
      *(__m128i *)(v29 - 80) = _mm_loadu_si128(v28 - 5);
      *(__m128i *)(v29 - 64) = _mm_loadu_si128(v28 - 4);
      *(__m128i *)(v29 - 48) = _mm_loadu_si128(v28 - 3);
      *(__m128i *)(v29 - 32) = _mm_loadu_si128(v28 - 2);
      *(__m128i *)(v29 - 16) = _mm_loadu_si128(v28 - 1);
    }
    while ( a2 != v28 );
    v16 = v15
        + 16
        * (9 * ((0xE38E38E38E38E39LL * ((unsigned __int64)((char *)&a2[-9] - (char *)v10) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 18);
  }
  if ( a2 != v9 )
  {
    v31 = (void *)v16;
    v32 = 16
        * (9 * ((0xE38E38E38E38E39LL * ((unsigned __int64)((char *)v9 - (char *)a2 - 144) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 9);
    v16 += v32;
    memcpy(v31, a2, v32);
  }
  if ( v10 )
    operator delete(v10);
  v34 = v16;
  result = v35;
  *(_QWORD *)(a1 + 16) = v35;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v34);
  return result;
}
