/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35070
// Address: 0x00035070

//----- (00035070) --------------------------------------------------------
int __cdecl sub_35070(int a1, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( (unsigned int)(a2 - 1) >= 0x19 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20055);
    BUG();
  }
  *(_DWORD *)(a1 + 4 * a2 + 28) = a3;
  return result;
}
// 13E34C: using guessed type int under_debugger;
