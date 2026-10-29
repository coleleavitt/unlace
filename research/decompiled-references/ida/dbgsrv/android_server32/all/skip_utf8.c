/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_utf8
// Address: 0x000751C8

//----- (000751C8) --------------------------------------------------------
int __fastcall skip_utf8(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v4; // r1
  int result; // r0
  int utf8_char; // r0
  unsigned __int8 *v7; // [sp+4h] [bp-8h] BYREF

  v4 = *a1;
  v7 = *a1;
  result = 0;
  if ( !a2 )
    goto LABEL_8;
  while ( 1 )
  {
    utf8_char = get_utf8_char(&v7);
    if ( utf8_char == -1 )
    {
      ++v7;
      goto LABEL_6;
    }
    if ( !utf8_char )
      break;
LABEL_6:
    --a2;
    result = 0;
    if ( !a2 )
      goto LABEL_7;
  }
  result = a2;
LABEL_7:
  v4 = v7;
LABEL_8:
  *a1 = v4;
  return result;
}
