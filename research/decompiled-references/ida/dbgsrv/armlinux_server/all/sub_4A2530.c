/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2530
// Address: 0x00000000004A2530

//----- (00000000004A2530) ----------------------------------------------------
unsigned int **__fastcall sub_4A2530(unsigned int **a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x5
  unsigned __int64 v5; // x4
  size_t v7; // x2
  unsigned int *v8; // x1

  v4 = *a2;
  v5 = *(_QWORD *)(*a2 - 24);
  if ( a3 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::assign", a3, v5);
  v7 = v5 - a3;
  v8 = (unsigned int *)(v4 + a3);
  if ( v7 > a4 )
    v7 = a4;
  return sub_4A2400(a1, v8, v7);
}
