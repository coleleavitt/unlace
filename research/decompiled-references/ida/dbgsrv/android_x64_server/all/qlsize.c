/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlsize
// Address: 0x00000000000BE7C0

//----- (00000000000BE7C0) ----------------------------------------------------
__int64 __fastcall qlsize(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfsize(*(FILE **)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}
