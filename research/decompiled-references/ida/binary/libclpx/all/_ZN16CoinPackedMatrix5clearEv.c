void __fastcall CoinPackedMatrix::clear(CoinPackedMatrix *this)
{
  *((_QWORD *)this + 8) = 0;
  *((_DWORD *)this + 18) = 0;
}

