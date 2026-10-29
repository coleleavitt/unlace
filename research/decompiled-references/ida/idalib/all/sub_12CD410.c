__int64 __fastcall sub_12CD410(char *s1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 i; // rbx
  unsigned int v3; // ebp

  v1 = 0xFBF0300905200900LL;
  for ( i = 0; i != 67; ++i )
  {
    while ( 1 )
    {
      v3 = i + 1;
      if ( i > 0x3F || !_bittest64((const __int64 *)&v1, i) )
        break;
      if ( ++i == 67 )
        return 8 * (unsigned int)(strcmp(s1, "cu") == 0);
    }
    if ( !strcmp(s1, (const char *)*(&off_2BAF280 + 3 * i)) )
      return v3;
  }
  return 8 * (unsigned int)(strcmp(s1, "cu") == 0);
}
