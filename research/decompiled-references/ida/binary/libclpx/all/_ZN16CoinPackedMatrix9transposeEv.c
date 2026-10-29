void __fastcall CoinPackedMatrix::transpose(CoinPackedMatrix *this)
{
  *((_BYTE *)this + 8) ^= 1u;
}

