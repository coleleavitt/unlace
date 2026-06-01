/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrlen
// Address: 0x000A2850

//----- (000A2850) --------------------------------------------------------
int __cdecl qstrlen(int a1)
{
  int v1; // eax
  bool v2; // zf

  v1 = a1 - 2;
  do
  {
    v2 = *(_WORD *)(v1 + 2) == 0;
    v1 += 2;
  }
  while ( !v2 );
  return (v1 - a1) >> 1;
}
