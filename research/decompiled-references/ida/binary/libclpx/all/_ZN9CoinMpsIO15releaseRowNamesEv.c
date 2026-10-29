void __fastcall CoinMpsIO::releaseRowNames(void **this)
{
  __int64 v2; // rbp
  int v3; // ebx
  void *v4; // rdi

  CoinMpsIO::releaseRedundantInformation((CoinMpsIO *)this);
  if ( *((int *)this + 44) > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = *(void **)((char *)*(this + 19) + v2);
      v2 += 8;
      free(v4);
    }
    while ( *((_DWORD *)this + 44) > v3 );
  }
  free(*(this + 19));
  *(this + 19) = nullptr;
  *((_DWORD *)this + 44) = 0;
}

