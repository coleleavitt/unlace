/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1118
// Address: 0x00000000004B1118

//----- (00000000004B1118) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B1118(unsigned __int64 *a1, size_t a2, char *s)
{
  size_t v6; // x0
  size_t v7; // x3

  v6 = strlen(s);
  v7 = a1[1];
  if ( a2 > v7 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v7);
  return sub_4B0B90(a1, a2, 0, s, v6);
}
