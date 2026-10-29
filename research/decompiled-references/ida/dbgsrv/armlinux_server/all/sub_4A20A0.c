/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A20A0
// Address: 0x00000000004A20A0

//----- (00000000004A20A0) ----------------------------------------------------
unsigned int **__fastcall sub_4A20A0(unsigned int **a1, size_t a2, unsigned __int64 a3)
{
  size_t v3; // x3

  v3 = *((_QWORD *)*a1 - 3);
  if ( a2 > v3 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, v3);
  if ( v3 - a2 <= a3 )
    a3 = v3 - a2;
  sub_4A1BB8(a1, a2, a3, 0);
  return a1;
}
