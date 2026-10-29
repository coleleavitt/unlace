/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B12B8
// Address: 0x00000000004B12B8

//----- (00000000004B12B8) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B12B8(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v4; // x5
  unsigned __int64 v5; // x2
  size_t v6; // x4
  size_t v7; // x1
  unsigned __int64 v8; // x5
  char *v9; // x3

  v4 = a1[1];
  v5 = a3 - a2;
  v6 = *(_QWORD *)(a4 + 8);
  v7 = a2 - *a1;
  if ( v7 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v7, v4);
  v8 = v4 - v7;
  v9 = *(char **)a4;
  if ( v8 <= v5 )
    v5 = v8;
  return sub_4B0B90(a1, v7, v5, v9, v6);
}
