/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35370
// Address: 0x00035370

//----- (00035370) --------------------------------------------------------
int __cdecl sub_35370(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) >= 0x19 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20054);
    BUG();
  }
  return *(_DWORD *)(a1 + 4 * a2 + 28);
}
// 13E34C: using guessed type int under_debugger;
