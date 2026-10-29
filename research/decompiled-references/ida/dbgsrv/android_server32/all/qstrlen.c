/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrlen
// Address: 0x00074F08

//----- (00074F08) --------------------------------------------------------
int __fastcall qstrlen(int a1)
{
  int v1; // r1
  int v2; // r2

  v1 = a1 - 2;
  do
  {
    v2 = *(unsigned __int16 *)(v1 + 2);
    v1 += 2;
  }
  while ( v2 );
  return (v1 - a1) >> 1;
}
