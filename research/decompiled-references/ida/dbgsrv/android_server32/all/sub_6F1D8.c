/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F1D8
// Address: 0x0006F1D8

//----- (0006F1D8) --------------------------------------------------------
int __fastcall sub_6F1D8(char *a1, void *a2)
{
  FILE *v2; // r4
  int v3; // r5

  v2 = (FILE *)((char *)&_sF._offset + 4);
  if ( dword_DE4B4 )
    v2 = (FILE *)dword_DE4B4;
  v3 = qvfprintf(v2, a1, a2);
  fflush(v2);
  return v3;
}
// DE4B4: using guessed type int dword_DE4B4;
// E0A90: using guessed type FILE _sF;
