/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74B94
// Address: 0x00074B94

//----- (00074B94) --------------------------------------------------------
size_t __fastcall sub_74B94(int a1, void *a2, signed int a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_77788(*(FILE **)(a1 + 8), a2, a3);
  return sub_74910(a1, a2, a3);
}
