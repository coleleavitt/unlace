// Alternative name is '_ZN7CoinSetC2EiPKi'
void __fastcall CoinSet::CoinSet(CoinSet *this, int a2, const int *a3)
{
  void *v4; // rax
  __int64 v5; // rdx

  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = off_4D1908;
  if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v4 = (void *)operator new[](4LL * a2);
  v5 = *((int *)this + 2);
  *((_QWORD *)this + 2) = v4;
  *((_QWORD *)this + 3) = 0;
  memcpy(v4, a3, 4 * v5);
  *((_DWORD *)this + 3) = 1;
}

