__int64 __fastcall sub_FDB350(int a1)
{
  int v1; // edx
  __int64 result; // rax
  unsigned int v3; // eax

  v1 = a1 - 21;
  result = 1;
  if ( (unsigned int)(a1 - 21) > 1 )
  {
    result = (unsigned int)(a1 - 98);
    LOBYTE(result) = a1 == 84 || (unsigned int)result <= 1;
    if ( !(_BYTE)result )
    {
      v3 = a1 - 113;
      LOBYTE(v3) = (unsigned int)(a1 - 113) <= 1;
      LOBYTE(v1) = a1 == 85;
      return v1 | v3;
    }
  }
  return result;
}

