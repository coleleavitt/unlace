/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36890
// Address: 0x00036890

//----- (00036890) --------------------------------------------------------
int __fastcall sub_36890(int a1, int a2)
{
  unsigned int v3; // r1
  unsigned __int16 v5; // [sp+2h] [bp-6h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 < dword_D39D0
    && *(_DWORD *)(dword_D39CC + 4 * v3)
    && !sub_779F0(*(FILE **)(dword_D39CC + 4 * v3), &v5, 2, *(_DWORD *)(a1 + 32) != 0) )
  {
    *(_DWORD *)(a2 + 8) = v5;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
