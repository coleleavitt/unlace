__int64 __fastcall CoinFactorization::messageLevel(CoinFactorization *this, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 0xE )
    *((_DWORD *)this + 124) = a2;
  return result;
}

