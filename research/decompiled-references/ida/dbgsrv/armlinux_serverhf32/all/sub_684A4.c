/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_684A4
// Address: 0x000684A4

//----- (000684A4) --------------------------------------------------------
int __fastcall sub_684A4(int a1, int a2)
{
  *(_DWORD *)(a1 + 44) = a2;
  if ( (debug & 0x100000) != 0 )
    return sub_68478(a1);
  return a1;
}
// D5BF8: using guessed type int debug;
