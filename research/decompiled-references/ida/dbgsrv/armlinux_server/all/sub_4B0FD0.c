/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0FD0
// Address: 0x00000000004B0FD0

//----- (00000000004B0FD0) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B0FD0(unsigned __int64 *a1, size_t a2, char *src, size_t n)
{
  size_t v4; // x6

  v4 = a1[1];
  if ( a2 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v4);
  return sub_4B0B90(a1, a2, 0, src, n);
}
