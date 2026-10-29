bool __fastcall ClpFactorization::timeToRefactorize(ClpFactorization *this)
{
  _DWORD *v1; // rax
  int v2; // esi
  int v3; // edx
  double v4; // xmm2_8
  double v5; // xmm0_8
  double v6; // xmm3_8
  int v7; // r8d
  int v8; // edx
  double v9; // xmm1_8
  int v10; // ecx
  int v11; // edx
  double v12; // xmm4_8
  int v13; // ecx
  double v14; // xmm6_8
  int v15; // ecx
  double v16; // xmm2_8
  double v17; // xmm0_8
  double v18; // xmm3_8
  bool result; // al

  v1 = *((_DWORD **)this + 1);
  if ( !v1 )
    return (double)*(int *)(*((_QWORD *)this + 2) + 52LL) > (double)*(int *)(*((_QWORD *)this + 2) + 36LL) / 2.45 + 20.0;
  v2 = v1[17];
  v3 = *((_DWORD *)this + 17);
  result = v3 < v2
        && (!v3
          ? (v6 = 1.797693134862316e308, v5 = 0.0, v4 = 0.0)
          : (v4 = *((double *)this + 6), v5 = *((double *)this + 7), v6 = *((double *)this + 5)),
            *((_DWORD *)this + 17) = v2,
            v7 = v1[8],
            v8 = v1[216],
            v9 = (double)(int)v1[198] + v4,
            v10 = v8 * v8,
            v11 = v1[147] - (v7 - v8) - *((_DWORD *)this + 18),
            v12 = (double)v10,
            v13 = v1[176],
            v14 = (double)v13,
            v15 = *((_DWORD *)this + 16) + v13,
            *((double *)this + 6) = v9,
            v16 = (double)v11 + v5,
            *((double *)this + 7) = v16,
            v17 = (30.0 * v14 + 0.1 * v12 + 10.0 * (double)v7 + v9 + v9 + v16 + v12 * 0.05 + v14) / (double)v2
                + (double)v15
                + (double)v7 * 3.0,
            v18 = fmin(v6, v17),
            *((double *)this + 5) = v18,
            v17 > v18 * 1.1)
        && v1[17] > 30;
  return result;
}

