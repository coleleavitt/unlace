/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlread
// Address: 0x00000000000BE7A0

//----- (00000000000BE7A0) ----------------------------------------------------
size_t __fastcall qlread(__int64 a1, void *a2, signed __int64 a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfread(*(FILE **)(a1 + 8), a2, a3);
  return sub_BE3E0(a1, a2, a3);
}
