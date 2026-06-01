/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1F18
// Address: 0x00000000004A1F18

//----- (00000000004A1F18) ----------------------------------------------------
char *__fastcall sub_4A1F18(unsigned int **a1, __int64 a2)
{
  unsigned int *v2; // x2

  v2 = *a1;
  if ( (*(*a1 - 2) & 0x80000000) == 0 )
  {
    sub_4A1DC8(a1);
    v2 = *a1;
  }
  return (char *)v2 + a2;
}
