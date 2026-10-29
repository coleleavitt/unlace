/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_utf8
// Address: 0x000000010006B93C

//----- (000000010006B93C) ----------------------------------------------------
__int64 __fastcall skip_utf8(char **a1, __int64 a2)
{
  __int64 v2; // x20
  char *v4; // x8
  int utf8_char; // w0
  char *v7; // [xsp+0h] [xbp-20h] BYREF

  v2 = a2;
  v4 = *a1;
  v7 = *a1;
  if ( a2 )
  {
    while ( 1 )
    {
      utf8_char = get_utf8_char(&v7);
      if ( utf8_char == -1 )
      {
        ++v7;
      }
      else if ( !utf8_char )
      {
LABEL_7:
        v4 = v7;
        break;
      }
      if ( !--v2 )
        goto LABEL_7;
    }
  }
  *a1 = v4;
  return v2;
}
