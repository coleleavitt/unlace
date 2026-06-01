/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_368F8
// Address: 0x000368F8

//----- (000368F8) --------------------------------------------------------
int __fastcall sub_368F8(int a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r3

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 < dword_D39D0 && (v3 = *(_DWORD *)(dword_D39CC + 4 * v2)) != 0 )
  {
    --*(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = sub_3C908((int)sub_36940, v3, a1 + 24, a2);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
