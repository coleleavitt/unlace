/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1428
// Address: 0x00000000004B1428

//----- (00000000004B1428) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B1428(unsigned __int64 *a1, __int64 a2, char *src, size_t n)
{
  size_t v4; // x6
  size_t v5; // x1

  v4 = a1[1];
  v5 = a2 - *a1;
  if ( v5 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v5, v4);
  return sub_4B0B90(a1, v5, 0, src, n);
}
