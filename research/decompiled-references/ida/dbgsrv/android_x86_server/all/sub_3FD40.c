/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FD40
// Address: 0x0003FD40

//----- (0003FD40) --------------------------------------------------------
int __cdecl sub_3FD40(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20098);
    BUG();
  }
  return *(_DWORD *)(a1 + 8 * (a2 == 1) + 4);
}
// 13E34C: using guessed type int under_debugger;
