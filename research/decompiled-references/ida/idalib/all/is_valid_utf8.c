__int64 __fastcall is_valid_utf8(_BYTE *a1)
{
  _BYTE *v2; // [rsp+8h] [rbp-10h] BYREF

  v2 = a1;
  do
  {
    if ( !*v2 )
      return 1;
  }
  while ( (unsigned int)get_utf8_char(&v2) != -1 );
  return 0;
}
