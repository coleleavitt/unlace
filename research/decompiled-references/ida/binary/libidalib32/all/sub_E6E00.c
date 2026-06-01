__int64 __fastcall sub_E6E00(_BYTE *a1, _BYTE *a2, __int64 *a3, _BYTE *a4, _BYTE *a5, _BYTE *a6, int a7)
{
  __int64 result; // rax

  if ( a1 )
    sub_E6750(a1, "Path", 0);
  if ( a2 )
    sub_E6750(a2, "Parameters", 0);
  if ( a3 )
    sub_C4460(a3);
  if ( a4 )
    sub_E6750(a4, "StartDir", 1);
  sub_E6D40(a5, a6, a7);
  result = (unsigned int)dword_2515A4;
  if ( !dword_2515A4 )
  {
    result = dbg;
    if ( dbg )
    {
      if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0 )
      {
        if ( byte_2515AA )
          return sub_C3090(a5, a6);
      }
    }
  }
  return result;
}

