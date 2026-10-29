/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1FF8
// Address: 0x00000000004A1FF8

//----- (00000000004A1FF8) ----------------------------------------------------
char *__fastcall sub_4A1FF8(unsigned int **a1)
{
  unsigned int *v1; // x1
  __int64 v2; // x19

  v1 = *a1;
  v2 = *((_QWORD *)*a1 - 3) - 1LL;
  if ( (*(*a1 - 2) & 0x80000000) == 0 )
  {
    sub_4A1DC8(a1);
    v1 = *a1;
  }
  return (char *)v1 + v2;
}
