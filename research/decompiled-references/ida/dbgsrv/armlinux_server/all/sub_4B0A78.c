/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0A78
// Address: 0x00000000004B0A78

//----- (00000000004B0A78) ----------------------------------------------------
_QWORD *__fastcall sub_4B0A78(_QWORD *a1, size_t a2, size_t n, unsigned __int8 a4)
{
  size_t v4; // x6

  v4 = a1[1];
  if ( a2 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v4);
  return sub_4B0898(a1, a2, 0, n, a4);
}
