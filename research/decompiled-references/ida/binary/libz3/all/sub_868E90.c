__int64 __fastcall sub_868E90(__int64 a1, __int64 a2, __m128 a3)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __int64 v10; // rdx
  __int64 v11; // rcx
  int *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // edi
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  int v20; // edi
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm1
  __m128 v27; // xmm0
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 (*v30)(void); // rax
  __int64 v31; // rax
  float v32; // xmm0_4
  int v33; // eax
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __int64 result; // rax
  int v37; // eax

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(_QWORD *)(a2 + 24);
  v12 = *(int **)(v10 + 40);
  v13 = *(_QWORD *)(v10 + 16);
  v14 = *(_QWORD *)(a1 + 880);
  v6.m128_f32[0] = (float)*(int *)(a2 + 36);
  v15 = v12[1];
  v16 = _mm_unpacklo_ps(v6, a3);
  v17 = 0;
  _mm_storel_ps((double *)(v14 + 52), v16);
  v18 = 0;
  v18.m128_f32[0] = (float)v15;
  v7.m128_f32[0] = (float)*v12;
  v17.m128_f32[0] = (float)v12[9];
  v8.m128_f32[0] = (float)*(int *)(a2 + 40);
  v19 = _mm_unpacklo_ps(v18, v7);
  v20 = *(_DWORD *)(v13 + 20);
  v21 = 0;
  v9.m128_f32[0] = (float)*(int *)(a2 + 32);
  v22 = _mm_unpacklo_ps(v17, v8);
  v23 = 0;
  v23.m128_f32[0] = (float)*(int *)(v13 + 44);
  LODWORD(v13) = v12[2];
  v24 = _mm_movelh_ps(v19, v22);
  v25 = 0;
  v25.m128_f32[0] = (float)v20;
  *(__m128 *)(v14 + 36) = v24;
  v21.m128_f32[0] = (float)(int)v13;
  *(__m128 *)(v14 + 20) = _mm_movelh_ps(_mm_unpacklo_ps(v25, v23), _mm_unpacklo_ps(v21, v9));
  if ( v11 )
  {
    v26 = 0;
    v26.m128_f32[0] = (float)*(int *)(v11 + 24);
  }
  else
  {
    v26 = (__m128)0x3F800000u;
  }
  v27 = 0;
  v27.m128_f32[0] = (float)v12[8];
  v28 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 24LL);
  v29 = *v28;
  _mm_storel_ps((double *)(v14 + 12), _mm_unpacklo_ps(v27, v26));
  v30 = *(__int64 (**)(void))(v29 + 80);
  if ( (char *)v30 == (char *)sub_7D3B90 )
  {
    v31 = v28[482];
    if ( v31 )
      v32 = (float)*(int *)(v31 - 4);
    else
      v32 = 0.0;
  }
  else
  {
    v37 = v30();
    v14 = *(_QWORD *)(a1 + 880);
    v32 = (float)v37;
  }
  v33 = v12[3];
  *(float *)(v14 + 8) = v32;
  v34 = 0;
  v35 = 0;
  v34.m128_f32[0] = (float)v33;
  result = (unsigned int)v12[4];
  v35.m128_f32[0] = (float)(int)result;
  _mm_storel_ps((double *)v14, _mm_unpacklo_ps(v34, v35));
  return result;
}

