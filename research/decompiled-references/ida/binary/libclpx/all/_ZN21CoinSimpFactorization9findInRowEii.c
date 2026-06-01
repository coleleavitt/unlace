__int64 __fastcall CoinSimpFactorization::findInRow(CoinSimpFactorization *this, int a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi

  result = *(unsigned int *)(*((_QWORD *)this + 33) + 4LL * a2);
  v4 = result + *(_DWORD *)(*((_QWORD *)this + 34) + 4LL * a2);
  if ( (int)result < v4 )
  {
    v5 = *((_QWORD *)this + 36);
    if ( a3 == *(_DWORD *)(v5 + 4LL * (int)result) )
      return result;
    v6 = (int)result + 1;
    v7 = v6 + (unsigned int)(v4 - result - 1);
    v8 = 4LL * (int)result - 4 * v6 + v5;
    while ( 1 )
    {
      result = (unsigned int)v6;
      if ( v6 == v7 )
        break;
      ++v6;
      if ( *(_DWORD *)(v8 + 4 * v6) == a3 )
        return result;
    }
  }
  return 0xFFFFFFFFLL;
}

