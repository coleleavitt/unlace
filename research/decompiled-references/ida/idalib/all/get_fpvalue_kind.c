__int64 __fastcall get_fpvalue_kind(_WORD *a1)
{
  __int64 result; // rax
  _WORD *v2; // rdx

  result = 1;
  if ( (~a1[7] & 0x7FFF) == 0 )
  {
    v2 = a1 + 6;
    result = 2;
    if ( (a1[6] & 0x7FFF) == 0 )
    {
      while ( !*--v2 )
      {
        if ( a1 == v2 )
          return ((unsigned int)(__int16)a1[7] >> 31) + 3;
      }
      return 2;
    }
  }
  return result;
}
