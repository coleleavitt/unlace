/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_695AC
// Address: 0x000695AC

//----- (000695AC) --------------------------------------------------------
int __fastcall sub_695AC(char *a1, int a2)
{
  FILE *v2; // r4
  int v3; // r5

  v2 = (FILE *)dword_D4B6C;
  if ( !dword_D4B6C )
    v2 = stdout;
  v3 = sub_7EAF4((int)v2, a1, a2);
  fflush(v2);
  return v3;
}
// D4B6C: using guessed type int dword_D4B6C;
