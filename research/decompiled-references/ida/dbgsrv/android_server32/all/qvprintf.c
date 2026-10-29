/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvprintf
// Address: 0x0008430C

//----- (0008430C) --------------------------------------------------------
int __fastcall qvprintf(char *s, void *a2)
{
  return qvfprintf((FILE *)((char *)&_sF._offset + 4), s, a2);
}
// E0A90: using guessed type FILE _sF;
