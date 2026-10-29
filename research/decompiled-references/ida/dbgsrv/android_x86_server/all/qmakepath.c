/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakepath
// Address: 0x000AE210

//----- (000AE210) --------------------------------------------------------
char *__cdecl qmakepath(char *s, int a2, const char *a3, int a4)
{
  return vqmakepath(s, a2, a3, (const char **)&a4);
}
