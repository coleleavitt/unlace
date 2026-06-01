__int64 __fastcall sub_2195BD0(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 52);
  if ( v1 == (_DWORD)&loc_1000007 )
    return 38;
  if ( v1 > (unsigned int)&loc_1000007 )
  {
    result = 23;
    if ( v1 != (_DWORD)&loc_1000012 )
    {
      result = 5;
      if ( v1 != 33554444 )
        return 3 * (unsigned int)(v1 == 16777228);
    }
  }
  else
  {
    result = 1;
    if ( v1 != 12 )
    {
      result = 21;
      if ( v1 != 18 )
      {
        result = 37;
        if ( v1 != 7 )
          return 0;
      }
    }
  }
  return result;
}
