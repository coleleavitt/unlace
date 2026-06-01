CoinPackedMatrix *__fastcall CoinPackedMatrix::operator=(CoinPackedMatrix *this, __int64 a2)
{
  __int128 v3; // xmm0
  char v4; // si
  int v5; // ecx

  if ( this != (CoinPackedMatrix *)a2 )
  {
    CoinPackedMatrix::gutsOfDestructor(this);
    v3 = *(_OWORD *)(a2 + 16);
    v4 = *(_BYTE *)(a2 + 8);
    v5 = *(_DWORD *)(a2 + 64);
    *((_OWORD *)this + 1) = v3;
    CoinPackedMatrix::gutsOfOpEqual(
      this,
      v4,
      *(_DWORD *)(a2 + 68),
      v5,
      *(_DWORD *)(a2 + 72),
      *(const double **)(a2 + 32),
      *(const int **)(a2 + 40),
      *(const int **)(a2 + 48),
      *(const int **)(a2 + 56));
  }
  return this;
}

