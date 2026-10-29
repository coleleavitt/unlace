__int64 __fastcall CoinSimpFactorization::replaceColumn(
        CoinSimpFactorization *this,
        CoinIndexedVector *a2,
        int a3,
        double a4,
        double a5)
{
  __int64 result; // rax
  int v6; // ebp

  if ( *((_DWORD *)this + 13) == *((_DWORD *)this + 12) )
    return 3;
  result = 2;
  if ( *((double *)this + 2) <= fabs(a4) )
  {
    v6 = *(_DWORD *)(*((_QWORD *)this + 9) + 4LL * a3);
    CoinSimpFactorization::LUupdate(this, a3);
    *(_DWORD *)(*((_QWORD *)this + 9) + 4LL * (*((_DWORD *)this + 13) + 2 * *((_DWORD *)this + 9))) = v6;
    ++*((_DWORD *)this + 13);
    return 0;
  }
  return result;
}

