/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F20C
// Address: 0x0006F20C

//----- (0006F20C) --------------------------------------------------------
int sub_6F20C(char *a1, ...)
{
  FILE *v1; // r4
  int v2; // r5
  va_list va; // [sp+20h] [bp-Ch] BYREF

  va_start(va, a1);
  v1 = (FILE *)((char *)&_sF._offset + 4);
  if ( dword_DE4B4 )
    v1 = (FILE *)dword_DE4B4;
  v2 = qvfprintf(v1, a1, va);
  fflush(v1);
  return v2;
}
// DE4B4: using guessed type int dword_DE4B4;
// E0A90: using guessed type FILE _sF;
