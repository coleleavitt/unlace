/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_utf8
// Address: 0x000A2C30

//----- (000A2C30) --------------------------------------------------------
int __cdecl skip_utf8(char **a1, int a2)
{
  int v2; // esi
  char **v3; // ecx
  char *v4; // eax
  int utf8_char; // eax
  char *v7[6]; // [esp+4h] [ebp-18h] BYREF

  v2 = a2;
  v3 = a1;
  v7[1] = (char *)__readgsdword(0x14u);
  v4 = *a1;
  v7[0] = *a1;
  if ( a2 )
  {
    do
    {
      while ( 1 )
      {
        utf8_char = get_utf8_char(v7);
        if ( utf8_char != -1 )
          break;
        ++v7[0];
        if ( !--v2 )
          goto LABEL_7;
      }
      if ( !utf8_char )
        goto LABEL_8;
      --v2;
    }
    while ( v2 );
LABEL_7:
    v2 = 0;
LABEL_8:
    v4 = v7[0];
    v3 = a1;
  }
  else
  {
    v2 = 0;
  }
  *v3 = v4;
  return v2;
}
