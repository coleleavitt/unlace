__m128d __fastcall ClpNonLinearCost::nearest(ClpNonLinearCost *this, int a2, __m128d a3)
{
  int v3; // r10d
  __m128d result; // xmm0
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rax
  double v15; // xmm2_8
  __int64 v16; // r8
  double v17; // xmm1_8
  bool v18; // cc
  double v19; // xmm1_8
  __int64 v20; // rdx
  __m128d v21; // xmm0
  __m128d v22; // xmm2
  __m128d v23; // xmm1
  __m128d v24; // xmm4
  __m128d v25; // xmm1
  __int64 v26; // rdx

  v3 = *((_DWORD *)this + 36);
  result = 0;
  if ( (v3 & 1) != 0 )
  {
    v6 = *((_QWORD *)this + 7);
    v7 = *((_QWORD *)this + 10);
    v8 = -8;
    v9 = *(_DWORD *)(v6 + 4LL * a2);
    v10 = *(_DWORD *)(v6 + 4LL * a2 + 4);
    if ( v9 < v10 )
    {
      v11 = v9;
      v12 = -1;
      v13 = (unsigned int)(v10 - v9 - 1);
      v14 = v11 + 1;
      v15 = 1.797693134862316e308;
      v16 = v11 + 1 + v13;
      while ( 1 )
      {
        v17 = fabs(a3.m128d_f64[0] - *(double *)(v7 + 8 * v11));
        v18 = v15 <= v17;
        v19 = fmin(v17, v15);
        if ( !v18 )
          v12 = v11;
        v11 = v14;
        v15 = v19;
        if ( v16 == v14 )
          break;
        ++v14;
      }
      v8 = 8LL * v12;
    }
    result = (__m128d)*(unsigned __int64 *)(v7 + v8);
  }
  if ( (v3 & 2) != 0 )
  {
    v20 = *((_QWORD *)this + 12);
    v21 = (__m128d)*(unsigned __int64 *)(*(_QWORD *)(v20 + 1008) + 8LL * a2);
    if ( (*(_BYTE *)(*((_QWORD *)this + 15) + a2) & 0xF) != 0 )
    {
      v26 = *(_QWORD *)(v20 + 984);
      v22 = (__m128d)*(unsigned __int64 *)(v26 + 8LL * a2);
      if ( (*(_BYTE *)(*((_QWORD *)this + 15) + a2) & 0xF) == 2 )
      {
        v21 = (__m128d)*(unsigned __int64 *)(v26 + 8LL * a2);
        v22 = (__m128d)*(unsigned __int64 *)(*((_QWORD *)this + 16) + 8LL * a2);
      }
    }
    else
    {
      v22 = (__m128d)*(unsigned __int64 *)(*(_QWORD *)(v20 + 1008) + 8LL * a2);
      v21 = (__m128d)*(unsigned __int64 *)(*((_QWORD *)this + 16) + 8LL * a2);
    }
    v23 = a3;
    v24 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    a3.m128d_f64[0] = a3.m128d_f64[0] - v21.m128d_f64[0];
    v23.m128d_f64[0] = v23.m128d_f64[0] - v22.m128d_f64[0];
    v25 = _mm_cmpge_sd(_mm_and_pd(v23, v24), _mm_and_pd(a3, v24));
    return _mm_or_pd(_mm_and_pd(v21, v25), _mm_andn_pd(v25, v22));
  }
  return result;
}

