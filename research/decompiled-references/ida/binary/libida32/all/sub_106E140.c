__int64 __fastcall sub_106E140(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // eax

  result = 1;
  if ( a2 != a3 )
  {
    if ( !a2 || (result = 0, a2 == 25) )
    {
      result = 0;
      if ( a3 > 0x18 )
      {
        v4 = a3 - 25;
        LOBYTE(v4) = a3 - 25 <= 5;
        LOBYTE(a3) = a3 != 27;
        return a3 & v4;
      }
    }
  }
  return result;
}

