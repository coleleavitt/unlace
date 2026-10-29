void __fastcall CoinPackedMatrix::reverseOrdering(__m128d *this)
{
  _OWORD v1[7]; // [rsp+0h] [rbp-78h] BYREF

  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v1);
  v1[1] = _mm_shuffle_pd(*(this + 1), *(this + 1), 1);
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v1, (const CoinPackedMatrix *)this);
  CoinPackedMatrix::swap((CoinPackedMatrix *)this, (CoinPackedMatrix *)v1);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v1);
}

