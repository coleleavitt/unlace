/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1010
// Address: 0x00000000004B1010

//----- (00000000004B1010) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B1010(unsigned __int64 *a1, size_t a2, unsigned __int64 a3, __int64 a4)
{
  size_t v4; // x5
  size_t v5; // x4
  unsigned __int64 v6; // x5
  char *v7; // x3

  v4 = a1[1];
  v5 = *(_QWORD *)(a4 + 8);
  if ( a2 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v4);
  v6 = v4 - a2;
  v7 = *(char **)a4;
  if ( v6 <= a3 )
    a3 = v6;
  return sub_4B0B90(a1, a2, a3, v7, v5);
}
