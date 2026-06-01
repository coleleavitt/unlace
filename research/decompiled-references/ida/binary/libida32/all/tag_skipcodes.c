_BYTE *__fastcall tag_skipcodes(_BYTE *a1)
{
  _BYTE *v1; // rdi

  if ( !a1 )
    return nullptr;
  if ( (unsigned __int8)(*a1 - 1) > 3u )
    return a1;
  if ( *a1 == 3 )
    return a1 + 1;
  do
  {
    v1 = (_BYTE *)tag_skipcode();
    if ( (unsigned __int8)(*v1 - 1) > 3u )
      return v1;
  }
  while ( *v1 != 3 );
  return v1 + 1;
}

