void __fastcall sub_ADB0E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  __int64 v14; // rbx
  __m128 v15; // xmm4
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm3
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  float v23; // xmm0_4
  __int64 v24; // rax
  __m128i v25; // xmm5
  __int64 v26; // rdx
  __int64 v27; // rsi
  __m128i v28; // xmm0
  float v29; // xmm0_4

  v9 = sub_952C10(*(__int64 **)a1, a2);
  v10 = *(_QWORD *)(a1 + 984);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = v9;
  LODWORD(v9) = *(_DWORD *)(v9 + 4);
  v13.m128_f32[0] = (float)a6;
  v15 = 0;
  v15.m128_f32[0] = (float)a4;
  *(_DWORD *)(v10 + 56) = 0;
  *(float *)(v10 + 52) = (float)a5;
  v16 = 0;
  v16.m128_f32[0] = (float)(int)v9;
  v11.m128_f32[0] = (float)*(int *)v14;
  v12.m128_f32[0] = (float)*(int *)(v14 + 36);
  v17 = _mm_unpacklo_ps(v16, v11);
  v18 = 0;
  v19 = _mm_unpacklo_ps(v12, v13);
  v20 = 0;
  v21 = _mm_movelh_ps(v17, v19);
  v20.m128_f32[0] = (float)*(int *)(a2 + 44);
  v22 = 0;
  v22.m128_f32[0] = (float)*(int *)(a2 + 20);
  LODWORD(v9) = *(_DWORD *)(v14 + 8);
  *(__m128 *)(v10 + 36) = v21;
  v18.m128_f32[0] = (float)(int)v9;
  *(__m128 *)(v10 + 20) = _mm_movelh_ps(_mm_unpacklo_ps(v22, v20), _mm_unpacklo_ps(v18, v15));
  if ( a3 )
    v23 = (float)*(int *)(a3 + 24);
  else
    v23 = 1.0;
  v24 = *(_QWORD *)(a1 + 8);
  v25 = _mm_cvtsi32_si128(*(_DWORD *)(v14 + 32));
  *(float *)(v10 + 16) = v23;
  v26 = *(unsigned int *)(v10 - 4);
  v27 = *(_QWORD *)(a1 + 144);
  v28 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v14 + 12)), _mm_cvtsi32_si128(*(_DWORD *)(v14 + 16))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v24 + 9464)), v25));
  *(__m128 *)v10 = _mm_add_ps(
                     _mm_mul_ps(
                       _mm_cvtepi32_ps(_mm_srli_epi32(v28, 0x10u)),
                       _mm_shuffle_ps((__m128)0x47800000u, (__m128)0x47800000u, 0)),
                     _mm_cvtepi32_ps(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0), v28)));
  v29 = sub_15B8F00(a1 + 288, v27, v26);
  if ( v29 > *(float *)(v14 + 44) )
    *(float *)(v14 + 44) = v29;
}

