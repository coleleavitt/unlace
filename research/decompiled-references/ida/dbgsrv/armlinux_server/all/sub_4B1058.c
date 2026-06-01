/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1058
// Address: 0x00000000004B1058

//----- (00000000004B1058) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B1058(unsigned __int64 *a1, size_t a2, __int64 a3)
{
  size_t v3; // x6

  v3 = a1[1];
  if ( a2 > v3 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v3);
  return sub_4B0B90(a1, a2, 0, *(char **)a3, *(_QWORD *)(a3 + 8));
}
