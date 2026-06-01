__int64 __fastcall sub_8691B0(_QWORD *a1, __int64 a2, __m128 a3)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __int64 v9; // rax
  __int64 v11; // rcx
  int *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // esi
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  __int64 *v27; // rdi
  __int64 v28; // rax
  __int64 (*v29)(void); // rax
  __int64 v30; // rax
  float v31; // xmm0_4
  int v32; // eax
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  __int64 v35; // rdx
  __int64 v36; // rsi
  float v37; // xmm0_4
  __int64 result; // rax
  int v39; // eax

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(a2 + 16);
  v11 = a1[110];
  v12 = *(int **)(v9 + 40);
  v13 = *(_QWORD *)(v9 + 16);
  v14 = *(_QWORD *)(a2 + 24);
  v5.m128_f32[0] = (float)*(int *)(a2 + 36);
  v15 = v12[1];
  v16 = _mm_unpacklo_ps(v5, a3);
  v17 = 0;
  _mm_storel_ps((double *)(v11 + 52), v16);
  v18 = 0;
  v18.m128_f32[0] = (float)v15;
  v6.m128_f32[0] = (float)*v12;
  v17.m128_f32[0] = (float)v12[9];
  v7.m128_f32[0] = (float)*(int *)(a2 + 40);
  v19 = _mm_unpacklo_ps(v18, v6);
  v20 = 0;
  v21 = _mm_unpacklo_ps(v17, v7);
  v22 = 0;
  v22.m128_f32[0] = (float)*(int *)(v13 + 44);
  v23 = _mm_movelh_ps(v19, v21);
  v24 = 0;
  v24.m128_f32[0] = (float)*(int *)(v13 + 20);
  v20.m128_f32[0] = (float)v12[2];
  LODWORD(v13) = *(_DWORD *)(a2 + 32);
  *(__m128 *)(v11 + 36) = v23;
  v8.m128_f32[0] = (float)(int)v13;
  *(__m128 *)(v11 + 20) = _mm_movelh_ps(_mm_unpacklo_ps(v24, v22), _mm_unpacklo_ps(v20, v8));
  if ( v14 )
  {
    v25 = 0;
    v25.m128_f32[0] = (float)*(int *)(v14 + 24);
  }
  else
  {
    v25 = (__m128)0x3F800000u;
  }
  v26 = 0;
  v26.m128_f32[0] = (float)v12[8];
  v27 = *(__int64 **)(a1[1] + 24LL);
  v28 = *v27;
  _mm_storel_ps((double *)(v11 + 12), _mm_unpacklo_ps(v26, v25));
  v29 = *(__int64 (**)(void))(v28 + 80);
  if ( (char *)v29 == (char *)sub_7D3B90 )
  {
    v30 = v27[482];
    if ( v30 )
      v31 = (float)*(int *)(v30 - 4);
    else
      v31 = 0.0;
  }
  else
  {
    v39 = v29();
    v11 = a1[110];
    v31 = (float)v39;
  }
  v32 = v12[3];
  *(float *)(v11 + 8) = v31;
  v33 = 0;
  v34 = 0;
  v35 = *(unsigned int *)(v11 - 4);
  v36 = a1[7];
  v33.m128_f32[0] = (float)v32;
  v34.m128_f32[0] = (float)v12[4];
  _mm_storel_ps((double *)v11, _mm_unpacklo_ps(v33, v34));
  v37 = sub_15B8F00(a1 + 23, v36, v35);
  result = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
  if ( (unsigned int)result < (int)v37 )
    return (unsigned int)(int)v37;
  return result;
}

