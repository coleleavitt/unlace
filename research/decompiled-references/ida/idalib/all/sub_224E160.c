__int64 __fastcall sub_224E160(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  double v4; // xmm0_8
  double v5; // xmm2_8
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm1_8
  __m128d v9; // xmm2
  __m128d v10; // xmm0
  _WORD *v11; // rdx
  __int64 result; // rax
  __m128i *v13; // rdx
  __m128i *v14; // rdx
  __m128i *v15; // rdx
  __m128i *v16; // rdx
  double v17; // xmm1_8
  __m128d v18; // xmm4
  __m128d v19; // xmm3
  __m128d v20; // xmm4
  __m128d v21; // xmm3
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i si128; // xmm0
  __m128i v25; // xmm0
  double v26; // [rsp+0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+8h] [rbp-40h]
  __m128 v28; // [rsp+10h] [rbp-38h] BYREF
  __m128d v29; // [rsp+20h] [rbp-28h]

  v4 = *(double *)(a2 + 8);
  v5 = 0.0000001;
  if ( v4 != 0.0 )
  {
    if ( v4 >= 0.0000001 )
    {
      v18 = (__m128d)a1[1];
      *(double *)&v27 = 0.0000001;
      v26 = COERCE_DOUBLE("  %7.4f (%5.1f%%)");
      v28 = _mm_loadh_ps(&v26);
      v19 = (__m128d)0x4059000000000000uLL;
      v19.m128d_f64[0] = 100.0 * v18.m128d_f64[0] / v4;
      v29 = _mm_unpacklo_pd(v19, v18);
      sub_227C560(a3, &v28);
      v5 = *(double *)&v27;
    }
    else
    {
      v15 = *(__m128i **)(a3 + 32);
      if ( *(_QWORD *)(a3 + 24) - (_QWORD)v15 > 0x11u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23ABC30);
        v15[1].m128i_i16[0] = 8224;
        *v15 = si128;
        *(_QWORD *)(a3 + 32) += 18LL;
      }
      else
      {
        v26 = 0.0000001;
        sub_227BF10(a3, "        -----     ", 18);
        v5 = 0.0000001;
      }
    }
  }
  v6 = *(double *)(a2 + 16);
  if ( v6 != 0.0 )
  {
    if ( v5 <= v6 )
    {
      v20 = (__m128d)a1[2];
      *(double *)&v27 = v5;
      v26 = COERCE_DOUBLE("  %7.4f (%5.1f%%)");
      v28 = _mm_loadh_ps(&v26);
      v21 = (__m128d)0x4059000000000000uLL;
      v21.m128d_f64[0] = 100.0 * v20.m128d_f64[0] / v6;
      v29 = _mm_unpacklo_pd(v21, v20);
      sub_227C560(a3, &v28);
      v6 = *(double *)(a2 + 16);
      v5 = *(double *)&v27;
    }
    else
    {
      v14 = *(__m128i **)(a3 + 32);
      if ( *(_QWORD *)(a3 + 24) - (_QWORD)v14 > 0x11u )
      {
        v23 = _mm_load_si128((const __m128i *)&xmmword_23ABC30);
        v14[1].m128i_i16[0] = 8224;
        *v14 = v23;
        *(_QWORD *)(a3 + 32) += 18LL;
      }
      else
      {
        v26 = v5;
        sub_227BF10(a3, "        -----     ", 18);
        v5 = v26;
      }
      v6 = *(double *)(a2 + 16);
    }
  }
  v7 = v6 + *(double *)(a2 + 8);
  if ( v7 != 0.0 )
  {
    if ( v5 <= v7 )
    {
      v17 = *((double *)a1 + 1) + *((double *)a1 + 2);
      *(double *)&v27 = v5;
      v26 = COERCE_DOUBLE("  %7.4f (%5.1f%%)");
      v29.m128d_f64[1] = v17;
      v28 = _mm_loadh_ps(&v26);
      v29.m128d_f64[0] = 100.0 * v17 / v7;
      sub_227C560(a3, &v28);
      v5 = *(double *)&v27;
    }
    else
    {
      v16 = *(__m128i **)(a3 + 32);
      if ( *(_QWORD *)(a3 + 24) - (_QWORD)v16 > 0x11u )
      {
        v25 = _mm_load_si128((const __m128i *)&xmmword_23ABC30);
        v16[1].m128i_i16[0] = 8224;
        *v16 = v25;
        *(_QWORD *)(a3 + 32) += 18LL;
      }
      else
      {
        v26 = v5;
        sub_227BF10(a3, "        -----     ", 18);
        v5 = v26;
      }
    }
  }
  v8 = *(double *)a2;
  if ( v5 <= *(double *)a2 )
  {
    v9 = (__m128d)*a1;
    v26 = COERCE_DOUBLE("  %7.4f (%5.1f%%)");
    v28 = _mm_loadh_ps(&v26);
    v10 = (__m128d)0x4059000000000000uLL;
    v10.m128d_f64[0] = 100.0 * v9.m128d_f64[0] / v8;
    v29 = _mm_unpacklo_pd(v10, v9);
    sub_227C560(a3, &v28);
    v11 = *(_WORD **)(a3 + 32);
    goto LABEL_6;
  }
  v13 = *(__m128i **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v13 > 0x11u )
  {
    v22 = _mm_load_si128((const __m128i *)&xmmword_23ABC30);
    v13[1].m128i_i16[0] = 8224;
    *v13 = v22;
    v11 = (_WORD *)(*(_QWORD *)(a3 + 32) + 18LL);
    *(_QWORD *)(a3 + 32) = v11;
LABEL_6:
    if ( *(_QWORD *)(a3 + 24) - (_QWORD)v11 <= 1u )
      goto LABEL_7;
    goto LABEL_12;
  }
  sub_227BF10(a3, "        -----     ", 18);
  v11 = *(_WORD **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v11 <= 1u )
  {
LABEL_7:
    result = sub_227BF10(a3, "  ", 2);
    if ( !*(_QWORD *)(a2 + 24) )
      goto LABEL_8;
    goto LABEL_13;
  }
LABEL_12:
  result = 8224;
  *v11 = 8224;
  *(_QWORD *)(a3 + 32) += 2LL;
  if ( !*(_QWORD *)(a2 + 24) )
  {
LABEL_8:
    if ( !*(_QWORD *)(a2 + 32) )
      return result;
LABEL_14:
    *(_QWORD *)&v29.m128d_f64[0] = a1[4];
    v26 = COERCE_DOUBLE("%9ld  ");
    v28 = _mm_loadh_ps(&v26);
    return sub_227C560(a3, &v28);
  }
LABEL_13:
  *(_QWORD *)&v29.m128d_f64[0] = a1[3];
  v26 = COERCE_DOUBLE("%9ld  ");
  v28 = _mm_loadh_ps(&v26);
  result = sub_227C560(a3, &v28);
  if ( *(_QWORD *)(a2 + 32) )
    goto LABEL_14;
  return result;
}
