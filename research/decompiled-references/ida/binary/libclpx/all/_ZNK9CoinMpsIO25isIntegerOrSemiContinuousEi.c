__int64 __fastcall CoinMpsIO::isIntegerOrSemiContinuous(CoinMpsIO *this, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 18);
  result = 0;
  if ( v2 )
    return (unsigned int)*(char *)(v2 + a2);
  return result;
}

