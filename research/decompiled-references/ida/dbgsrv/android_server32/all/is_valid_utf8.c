/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_valid_utf8
// Address: 0x00074F18

//----- (00074F18) --------------------------------------------------------
int __fastcall is_valid_utf8(unsigned __int8 *a1)
{
  int utf8_char; // r1
  int result; // r0
  unsigned __int8 *v3; // [sp+0h] [bp-8h] BYREF

  v3 = a1;
  if ( !*a1 )
    return 1;
  while ( 1 )
  {
    utf8_char = get_utf8_char(&v3);
    result = 0;
    if ( utf8_char == -1 )
      break;
    if ( !*v3 )
      return 1;
  }
  return result;
}
