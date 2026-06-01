void __fastcall CoinOtherFactorization::maximumPivots(CoinOtherFactorization *this, int a2)
{
  void *v3; // rdi
  unsigned __int64 v4; // rdi

  if ( *((_DWORD *)this + 12) < a2 )
  {
    v3 = *((void **)this + 9);
    if ( v3 )
      operator delete[](v3);
    v4 = a2 + 2 * *((_DWORD *)this + 15);
    if ( v4 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    *((_QWORD *)this + 9) = operator new[](4 * v4);
  }
  *((_DWORD *)this + 12) = a2;
}

