/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlread
// Address: 0x00000000000B9B9C

//----- (00000000000B9B9C) ----------------------------------------------------
size_t __fastcall qlread(__int64 a1, void *a2, size_t a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfread(*(FILE **)(a1 + 8), a2, a3);
  return sub_B9818((pthread_mutex_t *)a1, a2, a3);
}
