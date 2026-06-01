__int64 __fastcall ClpSimplex::checkPrimalSolution(ClpSimplex *this, const double *a2, const double *a3, double a4)
{
  int v5; // eax
  __int64 v6; // rdx
  double v7; // xmm2_8
  double v8; // xmm3_8
  double v9; // xmm3_8
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  double v13; // xmm1_8
  __int64 v14; // rax
  double v15; // xmm0_8
  double v16; // xmm4_8
  double v17; // xmm4_8
  const double *v18; // rbp
  double v19; // xmm0_8
  int v20; // eax
  int *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  int *v24; // rax
  __int64 v25; // rcx
  double v26; // xmm1_8
  __int64 v27; // rdx
  double v28; // xmm1_8
  double v29; // xmm4_8
  double v30; // xmm4_8
  __int64 result; // rax
  int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  double v37; // xmm1_8
  double v38; // xmm1_8
  double v39; // xmm4_8
  double v40; // xmm4_8

  v5 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 9) = 0;
  v6 = *((_QWORD *)this + 151);
  v7 = *((double *)this + 110);
  *((_QWORD *)this + 112) = 0;
  v8 = fmin(0.01, *((double *)this + 95));
  *((_DWORD *)this + 308) = 0;
  *((_QWORD *)this + 115) = 0;
  v9 = v8 + v7;
  if ( v5 > 0 )
  {
    v10 = *((_QWORD *)this + 130);
    v11 = *((_QWORD *)this + 127);
    v12 = 8LL * (unsigned int)(v5 - 1) + 8;
    v13 = 0.0;
    v14 = 0;
    do
    {
      v13 = v13 + *(double *)(v6 + v14) * *(double *)(v10 + v14);
      *((double *)this + 9) = v13;
      v15 = *(double *)(v6 + v14);
      v16 = *(double *)(v11 + v14);
      if ( v15 > v16 )
      {
        a4 = v15 - v16;
      }
      else
      {
        v17 = *(double *)(*((_QWORD *)this + 124) + v14);
        if ( v17 <= v15 )
          a4 = 0.0;
        else
          a4 = v17 - v15;
      }
      if ( a4 > v7 )
      {
        *((double *)this + 112) = a4 - v7 + *((double *)this + 112);
        if ( a4 > v9 )
        {
          a4 = a4 - v9 + *((double *)this + 115);
          *((double *)this + 115) = a4;
        }
        ++*((_DWORD *)this + 308);
      }
      v14 += 8;
    }
    while ( v12 != v14 );
  }
  (*(void (__fastcall **)(_QWORD, ClpSimplex *, __int64))(**((_QWORD **)this + 24) + 304LL))(
    *((_QWORD *)this + 24),
    this,
    2);
  v18 = *((const double **)this + 152);
  if ( (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 464LL))(
         *((_QWORD *)this + 24),
         this,
         0,
         0) )
  {
    innerProduct(*((const double **)this + 131), *((_DWORD *)this + 27), v18);
    v19 = a4 + *((double *)this + 9);
    v20 = *((_DWORD *)this + 26);
    *((double *)this + 9) = v19;
    if ( v20 > 0 )
    {
      v21 = *((int **)this + 157);
      v22 = (unsigned int)(v20 - 1);
      v23 = *((_QWORD *)this + 128);
      v24 = v21 + 1;
      v25 = (__int64)&v21[v22 + 1];
      while ( 1 )
      {
        v27 = *v21;
        v28 = v18[v27];
        v29 = *(double *)(v23 + 8 * v27);
        if ( v28 > v29 )
        {
          v26 = v28 - v29;
        }
        else
        {
          v30 = *(double *)(*((_QWORD *)this + 125) + 8 * v27);
          if ( v30 <= v28 )
            v26 = 0.0;
          else
            v26 = v30 - v28;
        }
        if ( v26 > v7 )
        {
          *((double *)this + 112) = v26 - *((double *)this + 110) + *((double *)this + 112);
          if ( v26 > v9 )
            *((double *)this + 115) = v26 - v9 + *((double *)this + 115);
          ++*((_DWORD *)this + 308);
        }
        v21 = v24;
        if ( (int *)v25 == v24 )
          break;
        ++v24;
      }
    }
  }
  else
  {
    v32 = *((_DWORD *)this + 27);
    v19 = *((double *)this + 9);
    if ( v32 > 0 )
    {
      v33 = *((_QWORD *)this + 131);
      v34 = *((_QWORD *)this + 128);
      v35 = 8LL * (unsigned int)(v32 - 1) + 8;
      v36 = 0;
      do
      {
        v19 = v19 + *(double *)(v33 + v36) * v18[v36 / 8];
        *((double *)this + 9) = v19;
        v38 = v18[v36 / 8];
        v39 = *(double *)(v34 + v36);
        if ( v38 > v39 )
        {
          v37 = v38 - v39;
        }
        else
        {
          v40 = *(double *)(*((_QWORD *)this + 125) + v36);
          if ( v40 <= v38 )
            v37 = 0.0;
          else
            v37 = v40 - v38;
        }
        if ( v37 > v7 )
        {
          *((double *)this + 112) = v37 - *((double *)this + 110) + *((double *)this + 112);
          if ( v37 > v9 )
            *((double *)this + 115) = v37 - v9 + *((double *)this + 115);
          ++*((_DWORD *)this + 308);
        }
        v36 += 8LL;
      }
      while ( v35 != v36 );
    }
  }
  result = *((_QWORD *)this + 20);
  *((double *)this + 9) = (v19 + *(double *)(result + 8)) / (*((double *)this + 11) * *((double *)this + 12));
  return result;
}

