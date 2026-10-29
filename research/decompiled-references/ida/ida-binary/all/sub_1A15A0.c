char sub_1A15A0()
{
  char result; // al
  unsigned __int8 v1; // al

  if ( dword_8BA480 < 0 )
  {
    v1 = qgetenv("TVHEADLESS", 0);
    dword_8BA480 = v1;
    if ( !v1 && callui(7, 0, 0, 0, 0, (unsigned int)&callui) > 0 )
      dword_8BA480 = 1;
  }
  result = getinf_flag(45, 16);
  if ( !result )
    return dword_8BA480 != 0;
  return result;
}
