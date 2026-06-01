/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68620
// Address: 0x00068620

//----- (00068620) --------------------------------------------------------
int __fastcall sub_68620(int a1, int a2)
{
  *(_DWORD *)(a1 + 44) = a2;
  if ( (debug & 0x100000) != 0 )
    return sub_685F4(a1);
  return a1;
}
// D6C18: using guessed type int debug;
