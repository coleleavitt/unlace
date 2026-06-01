__int64 __fastcall sub_8931A0(char *s2)
{
  __int64 i; // rbx

  for ( i = 1; i != 32; ++i )
  {
    if ( !strcmp((const char *)*(&off_2B13360 + i), s2) )
      return (unsigned int)i;
  }
  return 0;
}

