/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlsize
// Address: 0x00000000000B9BC0

//----- (00000000000B9BC0) ----------------------------------------------------
__int64 __fastcall qlsize(__int64 a1, int a2, int8x16x2_t a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfsize(*(FILE **)(a1 + 8), a2, a3);
  return *(_QWORD *)(a1 + 16);
}
