void __fastcall CoinSimpFactorization::increaseLsize(CoinSimpFactorization *this)
{
  int v1; // r12d
  void *v3; // rax
  void *v4; // r14
  void *v5; // r13
  void *v6; // rax
  void *v7; // r13
  void *v8; // rbp

  v1 = *((_DWORD *)this + 65) + *((_DWORD *)this + 128);
  if ( (unsigned __int64)v1 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v3 = (void *)operator new[](8LL * v1);
  v4 = *((void **)this + 30);
  v5 = v3;
  memcpy(v3, *((const void **)this + 30), 8LL * *((int *)this + 65));
  operator delete[](v4);
  *((_QWORD *)this + 30) = v5;
  v6 = (void *)operator new[](4LL * v1);
  v7 = *((void **)this + 31);
  v8 = v6;
  memcpy(v6, *((const void **)this + 31), 4LL * *((int *)this + 65));
  operator delete[](v7);
  *((_QWORD *)this + 31) = v8;
  *((_DWORD *)this + 65) = v1;
}

