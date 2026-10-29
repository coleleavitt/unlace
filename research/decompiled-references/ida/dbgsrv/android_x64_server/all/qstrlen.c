/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrlen
// Address: 0x00000000000B6290

//----- (00000000000B6290) ----------------------------------------------------
__int64 __fastcall qstrlen(__int64 a1)
{
  __int64 v1; // rax
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
