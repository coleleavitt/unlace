void __fastcall CoinLpIO::stopHash(CoinLpIO *this, int a2)
{
  _QWORD *v3; // r12
  _DWORD *v4; // rbp
  void *v5; // rdi
  int v6; // eax
  void *v7; // rdi
  void *v8; // rdi

  CoinLpIO::freePreviousNames(this, a2);
  v3 = (_QWORD *)((char *)this + 8 * a2);
  v4 = (_DWORD *)((char *)this + 4 * a2);
  v3[33] = v3[36];
  v4[70] = v4[78];
  v5 = (void *)v3[40];
  if ( v5 )
    operator delete[](v5);
  v3[40] = 0;
  v4[76] = 0;
  v4[78] = 0;
  if ( !a2 )
  {
    v6 = *((_DWORD *)this + 40);
    if ( v6 > 0 )
    {
      v7 = *((void **)this + 30);
      if ( v7 )
      {
        free(v7);
        v6 = *((_DWORD *)this + 40);
        *((_QWORD *)this + 30) = 0;
      }
      if ( v6 > 1 )
      {
        v8 = *((void **)this + 31);
        if ( v8 )
        {
          free(v8);
          *((_QWORD *)this + 31) = 0;
        }
      }
    }
  }
}

