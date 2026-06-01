/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1470
// Address: 0x00000000004B1470

//----- (00000000004B1470) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B1470(unsigned __int64 *a1, size_t a2, _QWORD *a3, unsigned __int64 a4, size_t a5)
{
  unsigned __int64 v5; // x5
  size_t v6; // x5

  v5 = a3[1];
  if ( a4 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a4, a3[1]);
  v6 = v5 - a4;
  if ( v6 <= a5 )
    a5 = v6;
  if ( a2 > a1[1] )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  return sub_4B0B90(a1, a2, 0, (char *)(*a3 + a4), a5);
}
