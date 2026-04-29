__int64 __fastcall sub_13EE0(char *s2)
{
  const char **v1; // rbx
  char **v2; // rbx

  if ( !strcmp("objc_msgSend", s2) || !strcmp("objc_msgSend$shim", s2) )
    return 71;
  if ( !strcmp("objc_msgSendSuper2", s2) || !strcmp("objc_msgSendSuper", s2) )
    return 115;
  v1 = (const char **)off_3C780;
  do
  {
    if ( !strcmp(*v1, s2) )
      return 70;
    ++v1;
  }
  while ( algn_3C7B8 != (_BYTE *)v1 );
  v2 = off_3C760;
  while ( strcmp(*v2, s2) )
  {
    if ( ++v2 == (char **)algn_3C778 )
      return 0;
  }
  return 105;
}
