void __fastcall CoinArrayWithLength::reallyFreeArray(CoinArrayWithLength *this)
{
  __int64 v2; // rdi
  void *v3; // rdi

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    v3 = (void *)(v2 - *((int *)this + 3));
    if ( v3 )
      operator delete[](v3);
  }
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = -1;
}

