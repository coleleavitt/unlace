/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47883C
// Address: 0x0047883C

//----- (0047883C) --------------------------------------------------------
double __cdecl sub_47883C(double a1)
{
  __int16 v1; // bx
  double result; // st7
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v1 = sub_47E160();
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    if ( (unsigned int)(sub_47E071(SLODWORD(a1), SHIDWORD(a1)) - 1) > 2 )
    {
      return sub_477480((int)&savedregs, 8u, 12, SLODWORD(a1), SHIDWORD(a1), a1 + 1.0, v1);
    }
    else
    {
      sub_47E160();
      return a1;
    }
  }
  else
  {
    result = sub_47EF86(a1);
    if ( a1 == result || (v1 & 0x20) != 0 )
      sub_47E160();
    else
      return sub_477480((int)&savedregs, 0x10u, 12, SLODWORD(a1), SHIDWORD(a1), result, v1);
  }
  return result;
}
