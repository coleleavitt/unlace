/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F1B0
// Address: 0x0006F1B0

//----- (0006F1B0) --------------------------------------------------------
int __fastcall sub_6F1B0(void *ptr, size_t n)
{
  FILE *v4; // r0

  v4 = (FILE *)((char *)&_sF._offset + 4);
  if ( dword_DE4B4 )
    v4 = (FILE *)dword_DE4B4;
  return qfwrite(v4, ptr, n);
}
// DE4B4: using guessed type int dword_DE4B4;
// E0A90: using guessed type FILE _sF;
