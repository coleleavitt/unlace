__int64 __fastcall CoinOslFactorization::factor(CoinOslFactorization *this)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // ecx

  result = c_ekklfct((char *)this + 104);
  v2 = *((_DWORD *)this + 120);
  v3 = *((_DWORD *)this + 121);
  *((_DWORD *)this + 14) = 0;
  if ( v2 > v3 )
    *((double *)this + 17) = (double)v2 * *((double *)this + 17) / (double)v3;
  if ( (_DWORD)result == 5 )
  {
    *((_DWORD *)this + 14) = -99;
    return 4294967197LL;
  }
  else if ( (_DWORD)result )
  {
    *((_DWORD *)this + 14) = -1;
    return 0xFFFFFFFFLL;
  }
  return result;
}

