/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2290
// Address: 0x00000000004A2290

//----- (00000000004A2290) ----------------------------------------------------
unsigned int **__fastcall sub_4A2290(unsigned int **a1, size_t a2, unsigned __int64 a3, unsigned __int8 a4)
{
  size_t v5; // x3

  v5 = *((_QWORD *)*a1 - 3);
  if ( a2 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v5);
  return sub_4A2198(a1, a2, 0, a3, a4);
}
