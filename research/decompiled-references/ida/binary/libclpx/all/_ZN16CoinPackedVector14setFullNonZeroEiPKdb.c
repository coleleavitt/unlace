__int64 __fastcall CoinPackedVector::setFullNonZero(CoinPackedVector *this, int a2, const double *a3, bool a4)
{
  __int64 v8; // rax
  double v9; // xmm0_8
  __int64 v10; // rcx
  __int64 v11; // rsi

  CoinPackedVector::clear(this);
  if ( a2 )
  {
    CoinPackedVector::reserve(this, a2);
    *((_DWORD *)this + 12) = 0;
    if ( a2 > 0 )
    {
      v8 = 0;
      do
      {
        v9 = a3[v8];
        if ( v9 != 0.0 )
        {
          *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * *((int *)this + 12)) = v8;
          *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * *((int *)this + 12)) = v8;
          v10 = *((int *)this + 12);
          v11 = *((_QWORD *)this + 5);
          *((_DWORD *)this + 12) = v10 + 1;
          *(double *)(v11 + 8 * v10) = v9;
        }
        ++v8;
      }
      while ( (unsigned int)(a2 - 1) + 1LL != v8 );
    }
  }
  return CoinPackedVectorBase::setTestForDuplicateIndexWhenTrue(this, a4);
}

