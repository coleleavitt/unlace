/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36958
// Address: 0x00036958

//----- (00036958) --------------------------------------------------------
int __fastcall sub_36958(int a1, int a2)
{
  unsigned int v2; // r3
  FILE *v3; // r3

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 < dword_D39D0 && (v3 = *(FILE **)(dword_D39CC + 4 * v2)) != nullptr )
  {
    *(_DWORD *)(a2 + 8) = sub_77B2C(*(unsigned __int8 *)(a1 + 8), v3);
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
