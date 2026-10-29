/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0E58
// Address: 0x00000000004B0E58

//----- (00000000004B0E58) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B0E58(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  size_t v4; // x4
  unsigned __int64 v5; // x5
  size_t v6; // x5

  v4 = a4;
  v5 = a2[1];
  if ( a3 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::assign", a3, v5);
  v6 = v5 - a3;
  if ( v6 <= a4 )
    v4 = v6;
  return sub_4B0B90(a1, 0, a1[1], (char *)(*a2 + a3), v4);
}
