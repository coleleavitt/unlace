/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36A90
// Address: 0x00036A90

//----- (00036A90) --------------------------------------------------------
int __fastcall sub_36A90(int a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r3

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 < dword_D49F0 && (v3 = *(_DWORD *)(dword_D49EC + 4 * v2)) != 0 )
  {
    --*(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = sub_3CAA0((int)sub_36AD8, v3, a1 + 24, a2);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
