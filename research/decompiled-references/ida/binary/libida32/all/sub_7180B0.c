__int64 __fastcall sub_7180B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 result; // rax

  v2 = a2 - *(unsigned __int16 *)(a1 + 588);
  v3 = *(unsigned __int8 *)(v2 + 41);
  if ( (char)v3 <= 0 )
  {
    if ( !under_debugger )
      interr(829);
    BUG();
  }
  result = (unsigned int)(v3 - 1);
  *(_BYTE *)(v2 + 41) = result;
  return result;
}

