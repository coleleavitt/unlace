__int64 __fastcall sub_869000(_QWORD *a1, __int64 a2)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  __m128 v5; // xmm3
  __m128 v6; // xmm4
  __int64 v7; // rax
  __int64 v9; // rdx
  int *v10; // rbp
  __int64 v11; // rcx
  float v12; // xmm0_4
  __int64 v13; // rax
  int v14; // esi
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm3
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 (*v26)(void); // rax
  __int64 v27; // rax
  float v28; // xmm0_4
  int v29; // eax
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __int64 v32; // rdx
  __int64 v33; // rsi
  float v34; // xmm0_4
  __int64 result; // rax
  int v36; // eax

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(int **)(v7 + 40);
  v11 = a1[110];
  v12 = (float)*(int *)(a2 + 36);
  v13 = *(_QWORD *)(v7 + 16);
  v14 = v10[1];
  *(_DWORD *)(v11 + 56) = 0;
  *(float *)(v11 + 52) = v12;
  v15 = 0;
  v15.m128_f32[0] = (float)v14;
  v3.m128_f32[0] = (float)*v10;
  v4.m128_f32[0] = (float)v10[9];
  v5.m128_f32[0] = (float)*(int *)(a2 + 40);
  v16 = _mm_unpacklo_ps(v15, v3);
  v17 = 0;
  v18 = _mm_unpacklo_ps(v4, v5);
  v19 = 0;
  v19.m128_f32[0] = (float)*(int *)(v13 + 44);
  v20 = _mm_movelh_ps(v16, v18);
  v21 = 0;
  v21.m128_f32[0] = (float)*(int *)(v13 + 20);
  v17.m128_f32[0] = (float)v10[2];
  LODWORD(v13) = *(_DWORD *)(a2 + 32);
  *(__m128 *)(v11 + 36) = v20;
  v6.m128_f32[0] = (float)(int)v13;
  *(__m128 *)(v11 + 20) = _mm_movelh_ps(_mm_unpacklo_ps(v21, v19), _mm_unpacklo_ps(v17, v6));
  if ( v9 )
  {
    v22 = 0;
    v22.m128_f32[0] = (float)*(int *)(v9 + 24);
  }
  else
  {
    v22 = (__m128)0x3F800000u;
  }
  v23 = 0;
  v23.m128_f32[0] = (float)v10[8];
  v24 = *(__int64 **)(a1[1] + 24LL);
  v25 = *v24;
  _mm_storel_ps((double *)(v11 + 12), _mm_unpacklo_ps(v23, v22));
  v26 = *(__int64 (**)(void))(v25 + 80);
  if ( (char *)v26 == (char *)sub_7D3B90 )
  {
    v27 = v24[482];
    if ( v27 )
      v28 = (float)*(int *)(v27 - 4);
    else
      v28 = 0.0;
  }
  else
  {
    v36 = v26();
    v11 = a1[110];
    v28 = (float)v36;
  }
  v29 = v10[3];
  *(float *)(v11 + 8) = v28;
  v30 = 0;
  v31 = 0;
  v32 = *(unsigned int *)(v11 - 4);
  v33 = a1[5];
  v30.m128_f32[0] = (float)v29;
  v31.m128_f32[0] = (float)v10[4];
  _mm_storel_ps((double *)v11, _mm_unpacklo_ps(v30, v31));
  v34 = sub_15B8F00(a1 + 23, v33, v32);
  result = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  if ( v34 > *(float *)(result + 44) )
    *(float *)(result + 44) = v34;
  return result;
}

