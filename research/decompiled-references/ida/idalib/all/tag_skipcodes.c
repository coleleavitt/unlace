char *__fastcall tag_skipcodes(char *a1)
{
  if ( !a1 )
    return nullptr;
  if ( (unsigned __int8)(*a1 - 1) > 3u )
    return a1;
  if ( *a1 == 3 )
    return a1 + 1;
  do
  {
    a1 = tag_skipcode(a1);
    if ( (unsigned __int8)(*a1 - 1) > 3u )
      return a1;
  }
  while ( *a1 != 3 );
  return a1 + 1;
}
