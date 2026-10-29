/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A27D8
// Address: 0x00000000004A27D8

//----- (00000000004A27D8) ----------------------------------------------------
unsigned int **__fastcall sub_4A27D8(
        unsigned int **a1,
        size_t a2,
        __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // x2
  unsigned __int64 v6; // x5
  unsigned __int64 v7; // x5
  unsigned int *v8; // x2
  unsigned __int64 v9; // x3

  v5 = *a3;
  v6 = *(_QWORD *)(v5 - 24);
  if ( a4 > v6 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a4, v6);
  v7 = v6 - a4;
  v8 = (unsigned int *)(v5 + a4);
  if ( v7 > a5 )
    v9 = a5;
  else
    v9 = v7;
  return sub_4A25F0(a1, a2, v8, v9);
}
