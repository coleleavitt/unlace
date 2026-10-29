__int64 __fastcall CoinPackedMatrix::appendMajorVectors(
        CoinPackedMatrix *this,
        int a2,
        __int64 (__fastcall ****a3)(CoinShallowPackedVector *this))
{
  __int64 (__fastcall ****v4)(CoinShallowPackedVector *); // rbx
  const CoinPackedVectorBase *const *v5; // rdx
  int v7; // r14d
  double v8; // xmm3_8
  double v9; // xmm4_8
  __int64 (__fastcall *v10)(CoinShallowPackedVector *); // rax
  __m128d v11; // xmm0
  __m128d v12; // xmm1
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rbx
  const CoinPackedVectorBase *v16; // rsi
  __int64 result; // rax
  int v18; // eax
  __m128d v19; // xmm0
  __m128d v20; // xmm1
  __int64 v21; // rax
  int v22; // esi
  const CoinPackedVectorBase *const *v23; // [rsp+0h] [rbp-68h]
  double v24; // [rsp+8h] [rbp-60h]

  if ( a2 <= 0 )
  {
    v21 = *((int *)this + 16);
    v22 = v21 + a2;
    if ( (_DWORD)v21 )
      return CoinPackedMatrix::reserve(this, v22, *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v21), 0);
    else
      return CoinPackedMatrix::reserve(this, v22, 0, 0);
  }
  else
  {
    v4 = a3;
    v5 = (const CoinPackedVectorBase *const *)&a3[(unsigned int)(a2 - 1) + 1];
    v7 = 0;
    v8 = *((double *)this + 2);
    v9 = 1.0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = ***v4;
        if ( v10 != CoinShallowPackedVector::getNumElements )
          break;
        v11 = 0;
        v11.m128d_f64[0] = (double)*((int *)*v4 + 12) * (v8 + v9);
        if ( fabs(v11.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v12.m128d_f64[0] = (double)(int)v11.m128d_f64[0];
          *(_QWORD *)&v11.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v11, v12).m128d_f64[0] & *(_QWORD *)&v9)
                                         + v12.m128d_f64[0])
                                       | *(_QWORD *)&v11.m128d_f64[0] & 0x8000000000000000LL;
        }
        ++v4;
        v7 += (int)v11.m128d_f64[0];
        if ( v5 == (const CoinPackedVectorBase *const *)v4 )
          goto LABEL_7;
      }
      v23 = v5;
      v24 = v9;
      v18 = ((__int64 (*)(void))v10)();
      v19 = 0;
      v5 = v23;
      v9 = v24;
      v19.m128d_f64[0] = (double)v18 * (v8 + v24);
      if ( fabs(v19.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v20.m128d_f64[0] = (double)(int)v19.m128d_f64[0];
        *(_QWORD *)&v19.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v19, v20).m128d_f64[0] & *(_QWORD *)&v24)
                                       + v20.m128d_f64[0])
                                     | *(_QWORD *)&v19.m128d_f64[0] & 0x8000000000000000LL;
      }
      ++v4;
      v7 += (int)v19.m128d_f64[0];
      if ( v4 == (__int64 (__fastcall ****)(CoinShallowPackedVector *))v23 )
        break;
      v8 = *((double *)this + 2);
    }
LABEL_7:
    v13 = *((int *)this + 16);
    v14 = a2 + v13;
    if ( (_DWORD)v13 )
      CoinPackedMatrix::reserve(this, v14, *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v13) + v7, 0);
    else
      CoinPackedMatrix::reserve(this, v14, v7, 0);
    v15 = 0;
    do
    {
      v16 = (const CoinPackedVectorBase *)a3[v15++];
      result = CoinPackedMatrix::appendMajorVector(this, v16);
    }
    while ( a2 > (int)v15 );
  }
  return result;
}

