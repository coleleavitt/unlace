_UNKNOWN **__fastcall sub_83020(unsigned int a1)
{
  if ( a1 == 25 )
    return &off_C98C0;
  if ( a1 > 0x19 )
  {
    if ( a1 == 1000 )
      return &off_C9980;
  }
  else
  {
    if ( a1 == 11 )
      return &off_C9920;
    if ( a1 == 18 )
      return &off_C9860;
  }
  if ( under_debugger )
    BUG();
  interr(30214);
  return (_UNKNOWN **)sub_83090(30214);
}
