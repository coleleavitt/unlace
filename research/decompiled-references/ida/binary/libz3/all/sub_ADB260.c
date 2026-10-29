__int64 __fastcall sub_ADB260(__int64 a1, __int64 a2, int a3, float a4)
{
  int *v6; // rax
  __m128 *v7; // rcx
  int v8; // edx
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  float v11; // xmm0_4
  int v12; // edx
  __int64 v13; // rsi
  float v14; // xmm0_4
  int v15; // edx
  int v16; // edx
  float v17; // xmm0_4
  int v18; // edx
  float v19; // xmm0_4
  float v20; // xmm0_4
  __m128i v21; // xmm1
  __int64 v22; // rdx
  __m128i v23; // xmm0
  float v24; // xmm0_4
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ebp

  v6 = (int *)sub_952C10(*(__int64 **)a1, a2);
  v7 = *(__m128 **)(a1 + 984);
  v8 = v6[9];
  v9 = _mm_cvtsi32_si128(v6[8]);
  v7[3].m128_f32[2] = a4;
  v10 = _mm_cvtsi32_si128(v6[4]);
  v11 = (float)v8;
  v12 = *v6;
  v7[3].m128_u64[0] = 0;
  v13 = *(_QWORD *)(a1 + 160);
  v7[2].m128_f32[3] = v11;
  v14 = (float)v12;
  v15 = v6[1];
  v7[2].m128_f32[2] = v14;
  v7[2].m128_f32[1] = (float)v15;
  v16 = v6[2];
  v7[2].m128_f32[0] = (float)a3;
  v17 = (float)v16;
  v18 = *(_DWORD *)(a2 + 20);
  v7[1].m128_f32[3] = v17;
  v19 = (float)*(int *)(a2 + 44);
  v7[1].m128_i32[0] = 1065353216;
  v7[1].m128_f32[2] = v19;
  v20 = (float)v18;
  v21 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 9464LL));
  v22 = v7[-1].m128_u32[3];
  v7[1].m128_f32[1] = v20;
  v23 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6[3]), v10), _mm_unpacklo_epi32(v21, v9));
  *v7 = _mm_add_ps(
          _mm_mul_ps(
            _mm_cvtepi32_ps(_mm_srli_epi32(v23, 0x10u)),
            _mm_shuffle_ps((__m128)0x47800000u, (__m128)0x47800000u, 0)),
          _mm_cvtepi32_ps(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0), v23)));
  v24 = sub_15B8F00(a1 + 288, v13, v22);
  v25 = (int)v24;
  v26 = (int)v24;
  if ( *(int *)(a2 + 44) <= 0 && v24 <= 0.0 )
  {
    v27 = a3 + 1;
    if ( v27 >= v25 )
      return v27;
    return v25;
  }
  return v26;
}

