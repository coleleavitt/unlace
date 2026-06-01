__int64 __fastcall sub_215E0A0(_QWORD *a1)
{
  unsigned __int16 *v1; // rax
  unsigned __int16 v2; // dx
  __int64 result; // rax

  v1 = (unsigned __int16 *)a1[6];
  if ( v1 )
  {
    v2 = *v1;
    if ( a1[27] )
    {
      result = 3;
      if ( v2 == 0x8664 || v2 == 0xAA64 )
        return result;
    }
  }
  else
  {
    v2 = *(_WORD *)(a1[7] + 6LL);
  }
  if ( v2 == 0x8664 )
    return 38;
  if ( v2 > 0x8664u )
  {
    result = 3;
    if ( v2 != 0xA64E && v2 != 0xAA64 )
      return 3 * (unsigned int)(v2 == 0xA641);
  }
  else
  {
    result = 17;
    if ( v2 != 358 )
    {
      result = 35;
      if ( v2 != 452 )
      {
        result = 37;
        if ( v2 != 332 )
          return 0;
      }
    }
  }
  return result;
}
