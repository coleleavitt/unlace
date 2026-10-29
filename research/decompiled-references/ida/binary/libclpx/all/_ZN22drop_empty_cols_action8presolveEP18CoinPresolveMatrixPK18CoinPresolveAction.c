CoinPresolveMatrix *__fastcall drop_empty_cols_action::presolve(
        drop_empty_cols_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  CoinPresolveMatrix *v7; // r12
  __int64 v8; // rax
  int v9; // esi
  const int *v10; // rdx
  __int64 v11; // rdi
  int v12; // ecx
  const CoinPresolveAction *v13; // r8
  __int64 v14; // rcx

  v4 = *((_QWORD *)this + 6);
  v5 = *(int *)this;
  if ( v5 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v7 = (CoinPresolveMatrix *)operator new[](4 * v5);
  if ( (int)v5 <= 0 )
  {
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    v10 = nullptr;
    v11 = (unsigned int)(v5 - 1) + 1LL;
    do
    {
      v12 = *(_DWORD *)(v4 + 4 * v8);
      v13 = (const CoinPresolveAction *)(unsigned int)v8;
      v9 += v12;
      if ( !v12 && (!*((_BYTE *)this + 440) || (*(_BYTE *)(*((_QWORD *)this + 45) + v8) & 2) == 0) )
      {
        v14 = (int)v10;
        v10 = (const int *)(unsigned int)((_DWORD)v10 + 1);
        *((_DWORD *)v7 + v14) = v8;
      }
      ++v8;
    }
    while ( v8 != v11 );
    *((_DWORD *)this + 2) = v9;
    if ( (_DWORD)v10 )
      a2 = (CoinPresolveMatrix *)drop_empty_cols_action::presolve(this, v7, v10, (int)a2, v13);
  }
  operator delete[](v7);
  return a2;
}

