/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrlen
// Address: 0x00000000000B16F8

//----- (00000000000B16F8) ----------------------------------------------------
__int64 __fastcall qstrlen(__int64 a1)
{
  __int64 v1; // x8
  int v2; // t1

  v1 = a1 - 2;
  do
  {
    v2 = *(unsigned __int16 *)(v1 + 2);
    v1 += 2;
  }
  while ( v2 );
  return (v1 - a1) >> 1;
}
