void __fastcall CoinLpIO::freePreviousNames(CoinLpIO *this, int a2)
{
  char *v3; // r12
  char *v4; // rdi
  char *v5; // r14
  __int64 v6; // rbp
  int v7; // ebx
  void *v8; // rdi

  v3 = (char *)this + 8 * a2;
  v4 = *((char **)v3 + 33);
  if ( v4 )
  {
    v5 = (char *)this + 4 * a2;
    if ( *((int *)v5 + 70) > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *(void **)&v4[v6];
        ++v7;
        v6 += 8;
        free(v8);
        v4 = *((char **)v3 + 33);
      }
      while ( *((_DWORD *)v5 + 70) > v7 );
    }
    free(v4);
  }
  *((_QWORD *)v3 + 33) = 0;
  *((_DWORD *)this + a2 + 70) = 0;
}

