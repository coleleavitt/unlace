__int64 __fastcall ClpPrimalColumnSteepest::transposeTimes2(
        ClpPrimalColumnSteepest *this,
        const CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6,
        double a7,
        double a8)
{
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 result; // rax
  double v18; // xmm7_8
  int v19; // eax
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r9
  signed int v28; // esi
  double v29; // xmm1_8
  double v30; // xmm3_8
  double v31; // xmm1_8
  double *v32; // rdx
  double v33; // xmm5_8
  double v34; // xmm0_8
  double v35; // xmm5_8
  int v36; // ecx
  double v37; // xmm0_8
  double v38; // [rsp+8h] [rbp-50h]

  v14 = *((_QWORD *)this + 1);
  if ( *((_DWORD *)this + 19) == 1 )
  {
    v38 = -1.0;
  }
  else
  {
    v15 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (*(int *)(v14 + 1152) >> 5));
    if ( _bittest(&v15, *(_DWORD *)(v14 + 1152)) )
      v38 = 1.0;
    else
      v38 = 0.0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const CoinIndexedVector *))(**(_QWORD **)(v14 + 192) + 408LL))(
         *(_QWORD *)(v14 + 192),
         v14,
         a2) )
  {
    if ( a7 == 0.0 )
      v16 = 0;
    else
      v16 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const CoinIndexedVector *, CoinIndexedVector *, const CoinIndexedVector *, CoinIndexedVector *, double, double, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 416LL))(
               *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
               *((_QWORD *)this + 1),
               a2,
               a3,
               a4,
               a6,
               v38,
               *((double *)this + 3),
               v16,
               *(_QWORD *)(*((_QWORD *)this + 1) + 1192LL),
               *((_QWORD *)this + 8),
               *((_QWORD *)this + 4));
    if ( *(int *)(*((_QWORD *)this + 1) + 1736LL) >= -1 )
      result = 2;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, const CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
      *((_QWORD *)this + 1),
      a2,
      a5,
      a3,
      -1.0);
    (*(void (__fastcall **)(_QWORD, _QWORD, const CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double, double, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 400LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
      *((_QWORD *)this + 1),
      a4,
      a3,
      a5,
      -1.0,
      a8,
      a7);
    v18 = 1.0;
    if ( a7 != 0.0 )
      v18 = a7;
    v19 = *((_DWORD *)a3 + 4);
    v20 = *((_QWORD *)this + 4);
    v21 = *(_QWORD *)a3;
    v22 = *((_QWORD *)a3 + 1);
    v23 = *((_QWORD *)a5 + 1);
    if ( v19 > 0 )
    {
      v24 = (unsigned int)(v19 - 1);
      v25 = *((_QWORD *)this + 1);
      v26 = 0;
      v27 = v24 + 1;
      do
      {
        v28 = *(_DWORD *)(v21 + 4 * v26);
        v29 = *(double *)(v22 + 8 * v26);
        if ( a7 == 0.0 )
          *(_QWORD *)(v22 + 8 * v26) = 0;
        v30 = *(double *)(v23 + 8 * v26);
        *(_QWORD *)(v23 + 8 * v26) = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(v25 + 264) + v28) & 3) != 1 )
        {
          v31 = v29 * v18;
          v32 = (double *)(v20 + 8LL * v28);
          v33 = v31 * v31;
          v34 = *((double *)this + 3) * (v31 * v31) + v31 * v30 + *v32;
          if ( v34 < 0.0001 )
          {
            if ( v38 < 0.0 )
            {
              v34 = fmax(0.0001, v33 + 1.0);
            }
            else
            {
              v35 = v33 * v38;
              v36 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v28 >> 5));
              v37 = v35;
              if ( _bittest(&v36, v28) )
                v37 = v35 + 1.0;
              v34 = fmax(v37, 0.0001);
            }
          }
          *v32 = v34;
        }
        ++v26;
      }
      while ( v26 != v27 );
    }
    result = 0;
  }
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
  return result;
}

