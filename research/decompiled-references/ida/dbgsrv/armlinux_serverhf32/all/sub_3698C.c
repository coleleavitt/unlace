/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3698C
// Address: 0x0003698C

//----- (0003698C) --------------------------------------------------------
int __fastcall sub_3698C(int a1, int a2)
{
  unsigned int v3; // r3
  FILE *v4; // r0
  int v5; // r0

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 >= dword_D39D0 || (v4 = *(FILE **)(dword_D39CC + 4 * v3)) == nullptr || (v5 = sub_77B50(v4), v5 == -1) )
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = (unsigned __int8)v5;
    return 0;
  }
}
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
