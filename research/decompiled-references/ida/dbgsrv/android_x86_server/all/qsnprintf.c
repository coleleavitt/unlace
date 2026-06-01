/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsnprintf
// Address: 0x000B9B40

//----- (000B9B40) --------------------------------------------------------
unsigned int __cdecl qsnprintf(_BYTE *a1, int a2, char *s, int a4)
{
  return qvsnprintf(a1, a2, s, (int)&a4);
}
