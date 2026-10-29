__int64 __fastcall sub_90B620(unsigned __int64 a1)
{
  __int64 result; // rax

  result = -72;
  if ( a1 <= 0xFF00FF00FF00FEFFLL )
  {
    result = a1 + (a1 >> 8);
    if ( a1 <= 0x1FFFF )
      result += ((unsigned __int64)&stru_20000 - a1) >> 11;
    if ( !result )
      return -72;
  }
  return result;
}
