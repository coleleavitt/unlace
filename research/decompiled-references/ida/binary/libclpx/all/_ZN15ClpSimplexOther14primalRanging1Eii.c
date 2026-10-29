double __fastcall ClpSimplexOther::primalRanging1(CoinIndexedVector **this, int a2, int a3)
{
  __int64 v3; // r13
  double v6; // xmm0_8
  unsigned __int8 v7; // cl
  __int64 v8; // rax
  double v9; // xmm2_8
  int v10; // edx
  double v11; // xmm1_8
  int v13; // r14d
  __int64 v14; // rdi
  int v15; // eax
  double v16; // xmm2_8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  double v20; // xmm5_8
  __m128d v21; // xmm9
  double v22; // xmm8_8
  double v23; // xmm3_8
  double v24; // xmm3_8
  double v25; // xmm1_8
  __int64 v26; // rdx
  double v27; // xmm4_8
  double v28; // [rsp+8h] [rbp-30h]

  v3 = a3;
  CoinIndexedVector::clear(*(this + 132));
  CoinIndexedVector::clear(*(this + 133));
  v6 = *((double *)*(this + 150) + v3);
  v7 = *((_BYTE *)*(this + 33) + a2) & 7;
  if ( v7 == 3 )
  {
    v13 = 1;
  }
  else
  {
    if ( v7 > 5u )
      goto LABEL_3;
    if ( ((1LL << v7) & 0x2C) == 0 )
    {
      if ( ((1LL << v7) & 0x13) != 0 )
        v6 = *((double *)*(this + 123) + a2);
      goto LABEL_3;
    }
    v13 = -1;
  }
  v28 = *((double *)*(this + 150) + v3);
  ClpSimplex::unpackPacked((ClpSimplex *)this, *(this + 133), a2);
  ClpFactorization::updateColumn(*(this + 158), *(this + 134), *(this + 133), 0);
  (*(void (__fastcall **)(_QWORD, CoinIndexedVector **, _QWORD, _QWORD, double))(*(_QWORD *)*(this + 24) + 296LL))(
    *(this + 24),
    this,
    *(this + 133),
    0,
    v6);
  v14 = (__int64)*(this + 133);
  v15 = *(_DWORD *)(v14 + 16);
  v16 = (double)v13;
  if ( v15 <= 0 )
  {
    v20 = 1.0e30;
    if ( a2 != a3 )
    {
      v6 = 1.0e30;
      goto LABEL_23;
    }
LABEL_31:
    v6 = v28 + v16 * v20;
    goto LABEL_23;
  }
  v17 = (unsigned int)(v15 - 1);
  v18 = 0;
  v19 = v17 + 1;
  v20 = 1.0e30;
  v21.m128d_f64[0] = 0.0;
  do
  {
    while ( 1 )
    {
      v25 = *(double *)(*(_QWORD *)(v14 + 8) + 8 * v18) * v16;
      v26 = *((int *)*(this + 157) + *(int *)(*(_QWORD *)v14 + 4 * v18));
      if ( a3 == (_DWORD)v26 )
        break;
      if ( fabs(v25) > 0.0000001 )
      {
        v22 = v25 * v20;
        v23 = *((double *)*(this + 150) + v26);
        if ( v25 <= 0.0 )
        {
          v24 = v23 - *((double *)*(this + 126) + v26);
          if ( v24 - v22 > 0.0 )
LABEL_27:
            v20 = fmax(0.0, v24 / v25);
        }
        else
        {
          v24 = v23 - *((double *)*(this + 123) + v26);
          if ( v24 - v22 < 0.0 )
            goto LABEL_27;
        }
      }
      if ( v19 == ++v18 )
        goto LABEL_20;
    }
    ++v18;
    v21.m128d_f64[0] = v25;
  }
  while ( v19 != v18 );
LABEL_20:
  if ( a2 == a3 )
    goto LABEL_31;
  if ( v20 >= 1.0e30 )
  {
    v27 = _mm_cmplt_sd((__m128d)0LL, v21).m128d_f64[0];
    *(_QWORD *)&v6 = *(_QWORD *)&v27 & 0xC6293E5939A08CEALL | ~*(_QWORD *)&v27 & 0x46293E5939A08CEALL;
  }
  else
  {
    v6 = v28 - v21.m128d_f64[0] * v20;
  }
LABEL_23:
  CoinIndexedVector::clear((CoinIndexedVector *)v14);
LABEL_3:
  v8 = (__int64)*(this + 28);
  v9 = *((double *)this + 12);
  if ( v8 )
  {
    v10 = *((_DWORD *)this + 27);
    if ( v10 <= a3 )
    {
      v11 = 1.0 / (v9 * *(double *)(v8 + 8LL * (a3 - v10)));
      goto LABEL_6;
    }
    v11 = *((double *)*(this + 29) + v3) / v9;
    if ( v6 >= 9.999999999999999e28 )
      return 1.797693134862316e308;
  }
  else
  {
    v11 = 1.0 / v9;
LABEL_6:
    if ( v6 >= 9.999999999999999e28 )
      return 1.797693134862316e308;
  }
  if ( v6 <= -9.999999999999999e28 )
    return -1.797693134862316e308;
  else
    return v6 * v11;
}

