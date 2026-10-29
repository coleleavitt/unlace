/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4286C
// Address: 0x0004286C

//----- (0004286C) --------------------------------------------------------
int __fastcall sub_4286C(_DWORD *a1, int a2)
{
  int v2; // r1

  v2 = a2 + a1[12];
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(287);
  }
  return a1[3] + 24 * v2;
}
// D5C00: using guessed type char under_debugger;
