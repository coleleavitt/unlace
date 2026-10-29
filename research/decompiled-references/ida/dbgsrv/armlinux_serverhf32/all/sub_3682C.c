/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3682C
// Address: 0x0003682C

//----- (0003682C) --------------------------------------------------------
int __fastcall sub_3682C(int a1, int a2)
{
  unsigned int v3; // r1
  FILE *v4; // r2
  int v6; // [sp+0h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 < dword_D39D0
    && (v4 = *(FILE **)(dword_D39CC + 4 * v3)) != nullptr
    && !sub_779F0(v4, &v6, 4, *(_DWORD *)(a1 + 32) != 0) )
  {
    *(_DWORD *)(a2 + 8) = v6;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
