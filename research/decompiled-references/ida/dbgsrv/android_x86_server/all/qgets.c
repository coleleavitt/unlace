/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgets
// Address: 0x000B08B0

//----- (000B08B0) --------------------------------------------------------
char *__cdecl qgets(char *s, int n)
{
  return qfgets(s, n, &_sF);
}
// 13E950: using guessed type FILE _sF;
