/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36B24
// Address: 0x00036B24

//----- (00036B24) --------------------------------------------------------
int __fastcall sub_36B24(int a1, int a2)
{
  unsigned int v3; // r3
  FILE *v4; // r0
  int v5; // r0

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 >= dword_D49F0 || (v4 = *(FILE **)(dword_D49EC + 4 * v3)) == nullptr || (v5 = sub_77CB8(v4), v5 == -1) )
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
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
