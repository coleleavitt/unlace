/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C454
// Address: 0x0006C454

//----- (0006C454) --------------------------------------------------------
int __fastcall sub_6C454(int result, int a2, int a3, int a4)
{
  char v4; // r2
  int v5; // r6
  unsigned int v6; // r2

  if ( a3 <= 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1112);
  }
  if ( a3 <= 7 )
  {
    v4 = 8 * a3;
    v5 = 1 << (v4 - 1);
    v6 = (1 << (v4 - 33)) | (1u >> (33 - v4));
    if ( a4 && result & v5 | a2 & v6 )
      return result | (-2 * v5);
    else
      return result & (2 * v5 - 1);
  }
  return result;
}
// D6C20: using guessed type char under_debugger;
