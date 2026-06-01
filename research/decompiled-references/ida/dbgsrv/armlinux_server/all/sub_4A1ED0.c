/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1ED0
// Address: 0x00000000004A1ED0

//----- (00000000004A1ED0) ----------------------------------------------------
unsigned int **__usercall sub_4A1ED0@<X0>(unsigned int **a1@<X0>, unsigned int **a2@<X8>)
{
  unsigned int *v2; // x1

  v2 = *a1;
  if ( (*(*a1 - 2) & 0x80000000) == 0 )
  {
    sub_4A1DC8(a1);
    v2 = *a1;
  }
  *a2 = v2;
  return a2;
}
