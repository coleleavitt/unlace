/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1098
// Address: 0x00000000004B1098

//----- (00000000004B1098) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B1098(unsigned __int64 *a1, size_t a2, unsigned __int64 a3, char *s)
{
  size_t v8; // x0
  size_t v9; // x5
  unsigned __int64 v10; // x5
  unsigned __int64 v11; // x2

  v8 = strlen(s);
  v9 = a1[1];
  if ( a2 > v9 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  v10 = v9 - a2;
  if ( v10 > a3 )
    v11 = a3;
  else
    v11 = v10;
  return sub_4B0B90(a1, a2, v11, s, v8);
}
