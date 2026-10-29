/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B13D8
// Address: 0x00000000004B13D8

//----- (00000000004B13D8) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B13D8(unsigned __int64 *a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  size_t v5; // x5
  unsigned __int64 v6; // x2
  size_t v7; // x4
  size_t v8; // x1
  unsigned __int64 v9; // x5

  v5 = a1[1];
  v6 = a3 - a2;
  v7 = a5 - (_QWORD)a4;
  v8 = a2 - *a1;
  if ( v8 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v8, v5);
  v9 = v5 - v8;
  if ( v9 <= v6 )
    v6 = v9;
  return sub_4B0B90(a1, v8, v6, a4, v7);
}
