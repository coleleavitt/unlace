// Alternative name is '_ZN19CoinArrayWithLengthC1Eii'
void __fastcall CoinArrayWithLength::CoinArrayWithLength(CoinArrayWithLength *this, int a2, int a3)
{
  void *v5; // rdi

  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 4) = a3 ^ (a3 >> 31);
  *((_DWORD *)this + 4) -= a3 >> 31;
  CoinArrayWithLength::getArray(this, a2);
  if ( a3 > 0 )
  {
    v5 = *(void **)this;
    if ( *(_QWORD *)this )
      memset(v5, 0, a2);
  }
}

