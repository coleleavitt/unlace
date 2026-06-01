__int64 __fastcall drop_zero_coefficients(CoinPresolveMatrix *this, const CoinPresolveAction *a2)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // r13d
  const CoinPresolveAction *v6; // r8
  CoinPresolveMatrix *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbx

  v3 = *(int *)this;
  if ( v3 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v4 = v3;
  v5 = (int)a2;
  v7 = (CoinPresolveMatrix *)operator new[](4 * v3);
  if ( *((_BYTE *)this + 440) )
  {
    if ( *(int *)this <= 0 )
    {
      v4 = 0;
    }
    else
    {
      v8 = *((_QWORD *)this + 45);
      v9 = 0;
      v4 = 0;
      v10 = (unsigned int)(*(_DWORD *)this - 1) + 1LL;
      do
      {
        if ( (*(_BYTE *)(v8 + v9) & 2) == 0 )
        {
          v11 = (int)v4++;
          *((_DWORD *)v7 + v11) = v9;
        }
        ++v9;
      }
      while ( v10 != v9 );
    }
  }
  v12 = drop_zero_coefficients_action::presolve(this, v7, (int *)v4, v5, v6);
  operator delete[](v7);
  return v12;
}

