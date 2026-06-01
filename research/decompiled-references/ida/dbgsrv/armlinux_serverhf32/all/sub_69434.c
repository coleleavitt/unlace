/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69434
// Address: 0x00069434

//----- (00069434) --------------------------------------------------------
int __fastcall sub_69434(char *a1, int a2)
{
  FILE *v2; // r4
  int v3; // r5

  v2 = (FILE *)dword_D3B4C;
  if ( !dword_D3B4C )
    v2 = stdout;
  v3 = sub_7E98C((int)v2, a1, a2);
  fflush(v2);
  return v3;
}
// D3B4C: using guessed type int dword_D3B4C;
