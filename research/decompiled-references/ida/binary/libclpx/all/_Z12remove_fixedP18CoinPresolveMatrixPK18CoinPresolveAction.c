const CoinPresolveAction *__fastcall remove_fixed(CoinPresolveMatrix *this, const CoinPresolveAction *a2)
{
  unsigned __int64 v3; // rdi
  int v4; // r13d
  CoinPresolveMatrix *v6; // r12
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  const CoinPresolveAction *v10; // rdi
  int *v11; // rdx
  const CoinPresolveAction *v12; // r8
  __int64 v13; // rsi

  v3 = *(int *)this;
  if ( v3 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v4 = v3;
  v6 = (CoinPresolveMatrix *)operator new[](4 * v3);
  v7 = *((_QWORD *)this + 6);
  v8 = *((_QWORD *)this + 11);
  v9 = *((_QWORD *)this + 12);
  if ( (int)v3 > 0 )
  {
    v10 = nullptr;
    v11 = nullptr;
    v12 = (const CoinPresolveAction *)((unsigned int)(v4 - 1) + 1LL);
    do
    {
      if ( *(int *)(v7 + 4LL * (_QWORD)v10) > 0
        && *(double *)(v8 + 8LL * (_QWORD)v10) == *(double *)(v9 + 8LL * (_QWORD)v10)
        && (!*((_BYTE *)this + 440) || (*((_BYTE *)v10 + *((_QWORD *)this + 45)) & 2) == 0) )
      {
        v13 = (int)v11;
        v11 = (int *)(unsigned int)((_DWORD)v11 + 1);
        *((_DWORD *)v6 + v13) = (_DWORD)v10;
      }
      v10 = (const CoinPresolveAction *)((char *)v10 + 1);
    }
    while ( v10 != v12 );
    if ( (_DWORD)v11 )
      a2 = (const CoinPresolveAction *)remove_fixed_action::presolve(this, v6, v11, (int)a2, v12);
  }
  operator delete[](v6);
  return a2;
}

