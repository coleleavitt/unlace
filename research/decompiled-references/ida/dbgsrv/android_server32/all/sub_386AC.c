/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_386AC
// Address: 0x000386AC

//----- (000386AC) --------------------------------------------------------
int __fastcall sub_386AC(int a1, int a2)
{
  unsigned int v2; // r0
  FILE *v3; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( dword_DE33C > v2 && (v3 = *(FILE **)(dword_DE338 + 4 * v2)) != nullptr )
  {
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = qftell(v3);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
