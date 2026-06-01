/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1E50
// Address: 0x00000000004A1E50

//----- (00000000004A1E50) ----------------------------------------------------
unsigned int *__fastcall sub_4A1E50(unsigned int **a1)
{
  if ( (*(*a1 - 2) & 0x80000000) != 0 )
    return *a1;
  sub_4A1DC8(a1);
  return *a1;
}
