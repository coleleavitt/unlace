/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1D08
// Address: 0x00000000004B1D08

//----- (00000000004B1D08) ----------------------------------------------------
unsigned __int64 __fastcall sub_4B1D08(__int64 *a1, char *s, unsigned __int64 a3)
{
  size_t v6; // x0

  v6 = strlen(s);
  return sub_4B1C58(a1, s, a3, v6);
}
