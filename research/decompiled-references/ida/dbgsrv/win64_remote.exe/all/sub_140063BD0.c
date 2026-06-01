/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063BD0
// Address: 0x0000000140063BD0

//----- (0000000140063BD0) ----------------------------------------------------
size_t __fastcall sub_140063BD0(__int64 a1, void *a2, __int64 a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 >= 2 )
    return sub_1400637A0(a1, a2, a3);
  return sub_140064450(*(FILE **)(a1 + 8), a2, a3);
}
