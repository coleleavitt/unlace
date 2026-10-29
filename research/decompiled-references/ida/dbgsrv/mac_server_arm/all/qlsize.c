/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlsize
// Address: 0x000000010006C7FC

//----- (000000010006C7FC) ----------------------------------------------------
__int64 __fastcall qlsize(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfsize(*(FILE **)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}
