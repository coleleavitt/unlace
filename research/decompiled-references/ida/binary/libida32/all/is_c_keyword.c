__int64 __fastcall is_c_keyword(char *s2)
{
  __int64 v1; // rbx

  v1 = 0;
  while ( 1 )
  {
    if ( v1 == 38 )
      v1 = 39;
    if ( !strcmp((const char *)*(&off_2B101A0 + v1), s2) )
      break;
    if ( ++v1 == 132 )
      return 0;
  }
  return 1;
}

