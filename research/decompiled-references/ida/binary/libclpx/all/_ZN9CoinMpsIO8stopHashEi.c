void __fastcall CoinMpsIO::stopHash(CoinMpsIO *this, int a2)
{
  char *v2; // rbx
  void *v3; // rdi

  v2 = (char *)this + 8 * a2;
  v3 = *((void **)v2 + 23);
  if ( v3 )
    operator delete[](v3);
  *((_QWORD *)v2 + 23) = 0;
}

