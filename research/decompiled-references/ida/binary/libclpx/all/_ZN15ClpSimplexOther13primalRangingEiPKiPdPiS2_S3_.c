int *__fastcall ClpSimplexOther::primalRanging(
        CoinIndexedVector **this,
        int a2,
        const int *a3,
        double *a4,
        int *a5,
        double *a6,
        int *a7)
{
  int *result; // rax
  double *v11; // r9
  int *v12; // r8
  double v13; // xmm5_8
  double *v14; // r14
  unsigned __int64 v15; // rbp
  const int *v16; // r13
  __int64 v17; // r10
  int v18; // r12d
  unsigned __int8 v19; // cl
  int v20; // esi
  int v21; // ecx
  double v22; // xmm2_8
  double v23; // xmm0_8
  double v24; // xmm2_8
  double v25; // xmm0_8
  __int64 v26; // rdx
  double v27; // xmm4_8
  int v28; // eax
  double v29; // xmm1_8
  double v30; // xmm2_8
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-88h]
  __int64 v36; // [rsp+8h] [rbp-80h]
  int v37; // [rsp+10h] [rbp-78h]
  double v38; // [rsp+18h] [rbp-70h]
  int *v39; // [rsp+20h] [rbp-68h]
  double *v40; // [rsp+28h] [rbp-60h]

  CoinIndexedVector::clear(*(this + 132));
  CoinIndexedVector::clear(*(this + 133));
  result = (int *)0xFFEFFFFFFFFFFFFFLL;
  *(this + 102) = nullptr;
  *(this + 103) = (CoinIndexedVector *)0x7FEFFFFFFFFFFFFFLL;
  *(this + 101) = (CoinIndexedVector *)0xFFEFFFFFFFFFFFFFLL;
  if ( a2 > 0 )
  {
    v11 = a6;
    v12 = a5;
    v13 = 1.0e30;
    v14 = a4;
    v15 = 0;
    v16 = a3;
    v34 = 4LL * (unsigned int)(a2 - 1) + 4;
    while ( 1 )
    {
      v17 = v16[v15 / 4];
      v18 = v16[v15 / 4];
      v19 = *((_BYTE *)*(this + 33) + v17) & 7;
      if ( v19 <= 5u )
      {
        if ( ((1LL << v19) & 0x2C) != 0 )
        {
          v40 = v11;
          v39 = v12;
          v38 = v13;
          v36 = v16[v15 / 4];
          ClpSimplex::unpackPacked((ClpSimplex *)this, *(this + 133), v17);
          ClpFactorization::updateColumn(*(this + 158), *(this + 134), *(this + 133), 0);
          (*(void (__fastcall **)(_QWORD, CoinIndexedVector **, _QWORD, _QWORD))(*(_QWORD *)*(this + 24) + 296LL))(
            *(this + 24),
            this,
            *(this + 133),
            0);
          ClpSimplexOther::checkPrimalRatios((ClpSimplexOther *)this, *(this + 133), 1);
          v31 = *((int *)this + 292);
          if ( (int)v31 < 0 )
          {
            v32 = -1;
            v24 = 1.797693134862316e308;
          }
          else
          {
            v24 = *((double *)this + 100);
            v32 = *((_DWORD *)*(this + 157) + v31);
          }
          v37 = v32;
          ClpSimplexOther::checkPrimalRatios((ClpSimplexOther *)this, *(this + 133), -1);
          v33 = *((int *)this + 292);
          if ( (int)v33 < 0 )
          {
            v20 = -1;
            v25 = 1.797693134862316e308;
          }
          else
          {
            v25 = *((double *)this + 100);
            v20 = *((_DWORD *)*(this + 157) + v33);
          }
          CoinIndexedVector::clear(*(this + 133));
          v21 = v37;
          v17 = v36;
          v12 = v39;
          v13 = v38;
          v11 = v40;
          goto LABEL_8;
        }
        if ( ((1LL << v19) & 0x13) != 0 )
        {
          v20 = v16[v15 / 4];
          v21 = v20;
          v22 = *((double *)*(this + 150) + v17);
          v23 = *((double *)*(this + 126) + v17) - v22;
          v24 = v22 - *((double *)*(this + 123) + v17);
          v25 = fmax(0.0, v23);
          if ( v24 < 0.0 )
            v24 = 0.0;
          goto LABEL_8;
        }
      }
      v20 = -1;
      v21 = -1;
      v25 = 1.797693134862316e308;
      v24 = 1.797693134862316e308;
LABEL_8:
      v26 = (__int64)*(this + 28);
      v27 = *((double *)this + 12);
      if ( v26 )
      {
        v28 = *((_DWORD *)this + 27);
        if ( v28 <= v18 )
          v29 = 1.0 / (v27 * *(double *)(v26 + 8LL * (v18 - v28)));
        else
          v29 = *((double *)*(this + 29) + v17) / v27;
      }
      else
      {
        v29 = 1.0 / v27;
      }
      if ( v13 <= v24 )
        v30 = 1.797693134862316e308;
      else
        v30 = v24 * v29;
      v14[v15 / 4] = v30;
      v12[v15 / 4] = v21;
      if ( v13 <= v25 )
      {
        result = a7;
        v11[v15 / 4] = 1.797693134862316e308;
        a7[v15 / 4] = v20;
        v15 += 4LL;
        if ( v34 == v15 )
          return result;
      }
      else
      {
        result = a7;
        v11[v15 / 4] = v25 * v29;
        a7[v15 / 4] = v20;
        v15 += 4LL;
        if ( v15 == v34 )
          return result;
      }
    }
  }
  return result;
}

