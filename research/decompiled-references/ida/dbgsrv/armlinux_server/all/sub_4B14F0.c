/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B14F0
// Address: 0x00000000004B14F0

//----- (00000000004B14F0) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B14F0(
        unsigned __int64 *a1,
        size_t a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        size_t a6)
{
  unsigned __int64 v6; // x6
  __int64 v7; // x3
  size_t v8; // x6
  size_t v9; // x7
  char *v10; // x3
  size_t v11; // x4
  unsigned __int64 v12; // x7

  v6 = a4[1];
  v7 = *a4;
  if ( a5 > v6 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a5, v6);
  v8 = v6 - a5;
  v9 = a1[1];
  v10 = (char *)(v7 + a5);
  if ( v8 > a6 )
    v11 = a6;
  else
    v11 = v8;
  if ( a2 > v9 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  v12 = v9 - a2;
  if ( v12 <= a3 )
    a3 = v12;
  return sub_4B0B90(a1, a2, a3, v10, v11);
}
