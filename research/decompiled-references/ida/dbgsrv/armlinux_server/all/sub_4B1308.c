/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1308
// Address: 0x00000000004B1308

//----- (00000000004B1308) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B1308(unsigned __int64 *a1, __int64 a2, __int64 a3, char *s)
{
  size_t v8; // x0
  size_t v9; // x5
  unsigned __int64 v10; // x20
  size_t v11; // x1
  unsigned __int64 v12; // x5
  unsigned __int64 v13; // x2

  v8 = strlen(s);
  v9 = a1[1];
  v10 = a3 - a2;
  v11 = a2 - *a1;
  if ( v11 > v9 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2 - *a1, a1[1]);
  v12 = v9 - v11;
  if ( v12 > v10 )
    v13 = v10;
  else
    v13 = v12;
  return sub_4B0B90(a1, v11, v13, s, v8);
}
