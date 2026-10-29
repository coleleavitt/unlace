/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2040
// Address: 0x00000000004A2040

//----- (00000000004A2040) ----------------------------------------------------
char *__fastcall sub_4A2040(unsigned int **a1, unsigned __int64 a2)
{
  unsigned int *v2; // x3
  unsigned __int64 v3; // x2

  v2 = *a1;
  v3 = *((_QWORD *)*a1 - 3);
  if ( a2 >= v3 )
    sub_4A0590("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v3);
  if ( (*(v2 - 2) & 0x80000000) == 0 )
  {
    sub_4A1DC8(a1);
    v2 = *a1;
  }
  return (char *)v2 + a2;
}
