/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2878
// Address: 0x00000000004A2878

//----- (00000000004A2878) ----------------------------------------------------
unsigned int *__fastcall sub_4A2878(unsigned int **a1)
{
  __int64 v1; // x2

  v1 = *((_QWORD *)*a1 - 3);
  if ( !v1 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", 0xFFFFFFFFFFFFFFFFLL, 0);
  return sub_4A1BB8(a1, v1 - 1, 1, 0);
}
