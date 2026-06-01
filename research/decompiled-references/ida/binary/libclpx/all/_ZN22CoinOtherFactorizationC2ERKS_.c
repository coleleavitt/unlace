// Alternative name is '_ZN22CoinOtherFactorizationC1ERKS_'
void __fastcall CoinOtherFactorization::CoinOtherFactorization(
        CoinOtherFactorization *this,
        const CoinOtherFactorization *a2)
{
  __int64 v2; // xmm0_8

  *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
  v2 = *((_QWORD *)a2 + 3);
  *(_QWORD *)this = algn_4D14D0;
  *((_QWORD *)this + 3) = v2;
  *((__m128i *)this + 2) = _mm_loadu_si128((const __m128i *)a2 + 2);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
}

