__int64 __fastcall sub_E100(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // cx

  result = sub_E0A0(a1);
  if ( result )
  {
    v2 = *(_WORD *)(result + 16);
    if ( v2 > 0xDFu )
    {
      return 0;
    }
    else if ( v2 > 0xA8u )
    {
      if ( ((0x60008000000003uLL >> ((unsigned __int8)v2 + 87)) & 1) == 0 )
        return 0;
    }
    else if ( v2 != 58 && v2 != 157 && v2 != 22 )
    {
      return 0;
    }
  }
  return result;
}
