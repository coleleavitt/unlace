/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_369FC
// Address: 0x000369FC

//----- (000369FC) --------------------------------------------------------
int __fastcall sub_369FC(int a1, int a2)
{
  unsigned int v2; // r3

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 < dword_D39D0 && *(_DWORD *)(dword_D39CC + 4 * v2) )
  {
    *(_DWORD *)(a2 + 8) = sub_7771C(*(_DWORD *)(dword_D39CC + 4 * v2));
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
