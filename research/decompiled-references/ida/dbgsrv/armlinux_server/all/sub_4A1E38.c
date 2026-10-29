/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1E38
// Address: 0x00000000004A1E38

//----- (00000000004A1E38) ----------------------------------------------------
unsigned int **__fastcall sub_4A1E38(unsigned int **result)
{
  if ( (*(*result - 2) & 0x80000000) == 0 )
    return sub_4A1DC8(result);
  return result;
}
