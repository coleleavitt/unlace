__int64 __fastcall ClpSimplexDual::dualRow(CoinIndexedVector **this, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  double v5; // xmm0_8
  __int64 v6; // rdx
  double v7; // xmm1_8
  __int64 v8; // rdx
  double v9; // xmm2_8
  __int64 v10; // rdx
  int SuperBasic; // eax
  int **v12; // rdi
  int v13; // edx
  int *v14; // rax
  double v15; // xmm6_8
  __m128d v16; // xmm3
  int v17; // r10d
  __int64 v18; // r8
  __m128d v19; // xmm5
  int v20; // r11d
  __m128d v21; // xmm9
  __int64 v22; // rdx
  __m128d v23; // xmm0
  __int64 v24; // rdx
  double v25; // xmm1_8
  double v26; // xmm10_8
  __m128d v27; // xmm2
  double v28; // xmm1_8
  double v29; // xmm1_8
  bool v30; // cc
  __m128d v31; // xmm2
  __m128d v32; // xmm3
  __m128d v33; // xmm2

  if ( a2 < 0 )
  {
    SuperBasic = ClpSimplexDual::nextSuperBasic((ClpSimplexDual *)this);
    if ( SuperBasic < 0 )
    {
LABEL_10:
      result = (**(__int64 (__fastcall ***)(_QWORD))*(this + 155))(*(this + 155));
      *((_DWORD *)this + 292) = result;
      goto LABEL_11;
    }
    ClpSimplex::unpack((ClpSimplex *)this, *(this + 133), SuperBasic);
    ClpFactorization::updateColumn(*(this + 158), *(this + 134), *(this + 133), 0);
    v12 = (int **)*(this + 133);
    v13 = *((_DWORD *)v12 + 4);
    v14 = *v12;
    if ( v13 > 0 )
    {
      v15 = 0.0;
      v16 = 0;
      v17 = -1;
      v18 = (__int64)&v14[v13 - 1 + 1];
      v19 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
      v20 = -1;
      v21.m128d_f64[0] = 1.0e20;
      do
      {
        v22 = *v14;
        v23 = _mm_and_pd((__m128d)*(unsigned __int64 *)&v12[1][2 * v22], v19);
        if ( v23.m128d_f64[0] > 0.001 )
        {
          v24 = *((int *)*(this + 157) + v22);
          v25 = *((double *)*(this + 150) + v24);
          v26 = *((double *)*(this + 123) + v24);
          v27 = (__m128d)*((unsigned __int64 *)*(this + 126) + v24);
          if ( v25 <= v27.m128d_f64[0] )
          {
            if ( v26 <= v25 )
              v28 = 0.0;
            else
              v28 = v26 - v25;
          }
          else
          {
            v28 = v25 - v27.m128d_f64[0];
          }
          v29 = v28 * v23.m128d_f64[0];
          if ( v29 > v15 && v23.m128d_f64[0] > 0.1 && (*((_BYTE *)*(this + 33) + v24) & 0x40) == 0 )
          {
            v17 = *v14;
            v15 = v29;
          }
          if ( v23.m128d_f64[0] > v16.m128d_f64[0] )
          {
            if ( v26 > -1.0e20 )
            {
              v20 = *v14;
              v16 = v23;
            }
            else
            {
              v30 = v27.m128d_f64[0] >= 1.0e20;
              v31 = _mm_cmpge_sd(v27, v21);
              v32 = _mm_and_pd(v16, v31);
              v33 = _mm_andn_pd(v31, v23);
              if ( !v30 )
                v20 = *v14;
              v16 = _mm_or_pd(v32, v33);
            }
          }
        }
        ++v14;
      }
      while ( (int *)v18 != v14 );
      if ( v17 >= 0 )
        goto LABEL_30;
      if ( v16.m128d_f64[0] > 0.01 && v20 >= 0 )
      {
        v17 = v20;
LABEL_30:
        *((_DWORD *)this + 292) = v17;
        CoinIndexedVector::clear((CoinIndexedVector *)v12);
        result = *((unsigned int *)this + 292);
LABEL_11:
        if ( (int)result < 0 )
          return result;
        goto LABEL_3;
      }
    }
    CoinIndexedVector::clear((CoinIndexedVector *)v12);
    goto LABEL_10;
  }
  *((_DWORD *)this + 292) = a2;
  LODWORD(result) = a2;
LABEL_3:
  result = *((int *)*(this + 157) + (int)result);
  v4 = (__int64)*(this + 150);
  *((_DWORD *)this + 290) = result;
  v5 = *(double *)(v4 + 8 * result);
  v6 = (__int64)*(this + 123);
  *((double *)this + 106) = v5;
  v7 = *(double *)(v6 + 8 * result);
  v8 = (__int64)*(this + 126);
  *((double *)this + 105) = v7;
  v9 = *(double *)(v8 + 8 * result);
  *((double *)this + 107) = v9;
  if ( a2 < 0 )
  {
    if ( v5 > v9 || v7 <= v5 && v9 - v5 <= v5 - v7 )
    {
      *((_DWORD *)this + 291) = -1;
      *((double *)this + 108) = v5 - v9;
    }
    else
    {
      *((_DWORD *)this + 291) = 1;
      *((double *)this + 108) = v7 - v5;
    }
  }
  else
  {
    v10 = (__int64)*(this + 147);
    *(this + 108) = (CoinIndexedVector *)0x3EB0C6F7A0B5ED8DLL;
    result = 2 * (unsigned int)(*(double *)(v10 + 8 * result) > 0.0) - 1;
    *((_DWORD *)this + 291) = result;
  }
  return result;
}

