/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23DFA
// Address: 0x00023DFA

//----- (00023DFA) --------------------------------------------------------
int __fastcall sub_23DFA(int a1)
{
  int v2; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 40);
  result = 0;
  if ( v2 << 30 )
  {
    *(_BYTE *)(a1 + 384) = v2 & 1;
    *(_BYTE *)(a1 + 385) = (v2 & 2) != 0;
    return 1;
  }
  return result;
}
