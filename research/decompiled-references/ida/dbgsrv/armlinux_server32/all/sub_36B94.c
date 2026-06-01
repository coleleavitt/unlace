/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36B94
// Address: 0x00036B94

//----- (00036B94) --------------------------------------------------------
int __fastcall sub_36B94(int a1, int a2)
{
  unsigned int v2; // r3

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 < dword_D49F0 && *(_DWORD *)(dword_D49EC + 4 * v2) )
  {
    *(_DWORD *)(a2 + 8) = sub_77884(*(_DWORD *)(dword_D49EC + 4 * v2));
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
