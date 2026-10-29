/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429C4
// Address: 0x000429C4

//----- (000429C4) --------------------------------------------------------
int __fastcall sub_429C4(_DWORD *a1, int a2)
{
  int v2; // r1

  v2 = a2 + a1[13];
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(286);
  }
  return a1[3] + 24 * v2;
}
// D6C20: using guessed type char under_debugger;
