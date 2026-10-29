int *__fastcall CoinPackedMatrix::countOrthoLength(CoinPackedMatrix *this)
{
  unsigned __int64 v2; // rdi
  int *v3; // rbp

  v2 = *((int *)this + 17);
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v3 = (int *)operator new[](4 * v2);
  CoinPackedMatrix::countOrthoLength(this, v3);
  return v3;
}

