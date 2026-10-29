__int64 __fastcall CoinFinite(double a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax

  LOBYTE(v4) = 0;
  if ( a1 != 1.797693134862316e308 )
    v4 = 1;
  LOBYTE(a4) = 0;
  if ( a1 != -1.797693134862316e308 )
    a4 = 1;
  return a4 & (unsigned int)v4;
}

