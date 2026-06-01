void __fastcall CoinMpsIO::releaseColumnNames(void **this)
{
  __int64 v2; // rbp
  int v3; // ebx
  void *v4; // rdi

  CoinMpsIO::releaseRedundantInformation((CoinMpsIO *)this);
  if ( *((int *)this + 45) > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = *(void **)((char *)*(this + 20) + v2);
      v2 += 8;
      free(v4);
    }
    while ( *((_DWORD *)this + 45) > v3 );
  }
  free(*(this + 20));
  *(this + 20) = nullptr;
  *((_DWORD *)this + 45) = 0;
}

