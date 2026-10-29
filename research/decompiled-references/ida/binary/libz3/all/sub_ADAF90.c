int *__fastcall sub_ADAF90(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, float a7)
{
  int *result; // rax
  __m128 v12; // xmm1
  __int64 v13; // rdx
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 v17; // xmm0
  int v18; // ecx
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  int v26; // ecx
  float v27; // xmm0_4
  __int64 v28; // rcx
  __m128i v29; // xmm0

  result = (int *)sub_952C10(*(__int64 **)a1, a2);
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 984);
  v12.m128_f32[0] = (float)a5;
  v14 = 0;
  v15 = 0;
  v15.m128_f32[0] = (float)a6;
  v16 = 0;
  v16.m128_f32[0] = (float)a4;
  v17 = 0;
  v17.m128_f32[0] = (float)result[1];
  v18 = *result;
  _mm_storel_ps((double *)(v13 + 52), _mm_unpacklo_ps(v12, (__m128)LODWORD(a7)));
  v19 = 0;
  v14.m128_f32[0] = (float)v18;
  v19.m128_f32[0] = (float)result[9];
  v20 = _mm_unpacklo_ps(v17, v14);
  v21 = 0;
  v22 = _mm_unpacklo_ps(v19, v15);
  v23 = 0;
  v24 = _mm_movelh_ps(v20, v22);
  v23.m128_f32[0] = (float)*(int *)(a2 + 44);
  v25 = 0;
  v25.m128_f32[0] = (float)*(int *)(a2 + 20);
  v26 = result[2];
  *(__m128 *)(v13 + 36) = v24;
  v21.m128_f32[0] = (float)v26;
  *(__m128 *)(v13 + 20) = _mm_movelh_ps(_mm_unpacklo_ps(v25, v23), _mm_unpacklo_ps(v21, v16));
  if ( a3 )
    v27 = (float)*(int *)(a3 + 24);
  else
    v27 = 1.0;
  v28 = *(_QWORD *)(a1 + 8);
  *(float *)(v13 + 16) = v27;
  v29 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(result[3]), _mm_cvtsi32_si128(result[4])),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v28 + 9464)), _mm_cvtsi32_si128(result[8])));
  *(__m128 *)v13 = _mm_add_ps(
                     _mm_mul_ps(
                       _mm_cvtepi32_ps(_mm_srli_epi32(v29, 0x10u)),
                       _mm_shuffle_ps((__m128)0x47800000u, (__m128)0x47800000u, 0)),
                     _mm_cvtepi32_ps(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0), v29)));
  return result;
}

