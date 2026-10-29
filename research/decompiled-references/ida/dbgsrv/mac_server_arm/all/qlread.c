/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlread
// Address: 0x000000010006C7D8

//----- (000000010006C7D8) ----------------------------------------------------
size_t __fastcall qlread(__int64 a1, void *a2, size_t a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfread(*(FILE **)(a1 + 8), a2, a3);
  return sub_10006C498(a1, a2, a3);
}
