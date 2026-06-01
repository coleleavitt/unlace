__int64 __fastcall sub_893150(char *s2)
{
  __int64 i; // rbx

  for ( i = 1; i != 328; ++i )
  {
    if ( !strcmp((const char *)*(&off_2B13460 + i), s2) )
      return (unsigned int)i;
  }
  return 0;
}

