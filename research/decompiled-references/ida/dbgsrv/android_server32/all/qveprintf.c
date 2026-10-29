/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qveprintf
// Address: 0x00084324

//----- (00084324) --------------------------------------------------------
int __fastcall qveprintf(char *s, void *a2)
{
  return qvfprintf((FILE *)((char *)&_sF + 168), s, a2);
}
// E0A90: using guessed type FILE _sF;
