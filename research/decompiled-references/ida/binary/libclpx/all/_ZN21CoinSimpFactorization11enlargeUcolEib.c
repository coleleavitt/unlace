void __fastcall CoinSimpFactorization::enlargeUcol(CoinSimpFactorization *this, int a2, char a3)
{
  unsigned __int64 v4; // rdi
  void *v6; // rax
  void *v7; // r13
  void *v8; // r12
  unsigned __int64 v9; // rdi
  void *v10; // rax
  void *v11; // r13
  void *v12; // r12

  v4 = a2 + *((_DWORD *)this + 96);
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_6;
  v6 = (void *)operator new[](4 * v4);
  v7 = *((void **)this + 44);
  v8 = v6;
  memcpy(v6, v7, 4LL * *((int *)this + 96));
  operator delete[](v7);
  *((_QWORD *)this + 44) = v8;
  if ( a3 )
  {
    v9 = a2 + *((_DWORD *)this + 96);
    if ( v9 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v10 = (void *)operator new[](8 * v9);
      v11 = *((void **)this + 43);
      v12 = v10;
      memcpy(v10, v11, 8LL * *((int *)this + 96));
      operator delete[](v11);
      *((_QWORD *)this + 43) = v12;
      goto LABEL_5;
    }
LABEL_6:
    __cxa_throw_bad_array_new_length();
  }
LABEL_5:
  *((_DWORD *)this + 96) += a2;
}

