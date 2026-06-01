/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsscanf
// Address: 0x000B9C20

//----- (000B9C20) --------------------------------------------------------
int __cdecl qsscanf(int a1, char *s, int a3)
{
  return qvsscanf(a1, s, (int)&a3);
}
