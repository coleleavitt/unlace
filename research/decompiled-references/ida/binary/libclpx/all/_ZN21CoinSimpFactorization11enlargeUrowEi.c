void __fastcall CoinSimpFactorization::enlargeUrow(CoinSimpFactorization *this, int a2)
{
  unsigned __int64 v3; // rdi
  void *v4; // rax
  void *v5; // r13
  void *v6; // r12
  int v7; // edi
  unsigned __int64 v8; // rdi
  void *v9; // rax
  void *v10; // r13
  void *v11; // r12

  v3 = a2 + *((_DWORD *)this + 74);
  if ( v3 > 0x1FFFFFFFFFFFFFFELL
    || (v4 = (void *)operator new[](4 * v3),
        v5 = *((void **)this + 36),
        v6 = v4,
        memcpy(v4, v5, 4LL * *((int *)this + 74)),
        operator delete[](v5),
        v7 = *((_DWORD *)this + 74),
        *((_QWORD *)this + 36) = v6,
        v8 = a2 + v7,
        v8 > 0xFFFFFFFFFFFFFFFLL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v9 = (void *)operator new[](8 * v8);
  v10 = *((void **)this + 35);
  v11 = v9;
  memcpy(v9, v10, 8LL * *((int *)this + 74));
  operator delete[](v10);
  *((_QWORD *)this + 35) = v11;
  *((_DWORD *)this + 74) += a2;
}

