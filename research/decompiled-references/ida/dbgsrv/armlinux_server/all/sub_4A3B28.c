/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3B28
// Address: 0x00000000004A3B28

//----- (00000000004A3B28) ----------------------------------------------------
unsigned int **__fastcall sub_4A3B28(
        unsigned int **a1,
        size_t a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // x3
  unsigned __int64 v7; // x6
  unsigned __int64 v8; // x6
  unsigned int *v9; // x3
  unsigned __int64 v10; // x4

  v6 = *a4;
  v7 = *(_QWORD *)(v6 - 24);
  if ( a5 > v7 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a5, v7);
  v8 = v7 - a5;
  v9 = (unsigned int *)(v6 + a5);
  if ( v8 > a6 )
    v10 = a6;
  else
    v10 = v8;
  return sub_4A3948(a1, a2, a3, v9, v10);
}
