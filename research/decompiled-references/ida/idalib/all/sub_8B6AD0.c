__int64 __fastcall sub_8B6AD0(char *s2)
{
  __int64 i; // rbx

  for ( i = 1; i != 328; ++i )
  {
    if ( !strcmp((const char *)*(&off_2B3D400 + i), s2) )
      return (unsigned int)i;
  }
  return 0;
}
