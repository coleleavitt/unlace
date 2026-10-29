/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C160
// Address: 0x000000000048C160

//----- (000000000048C160) ----------------------------------------------------
size_t __fastcall sub_48C160(__int64 a1, void *a2, size_t a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_4904B8(*(FILE **)(a1 + 8), a2, a3);
  return sub_48BD10(a1, a2, a3);
}
