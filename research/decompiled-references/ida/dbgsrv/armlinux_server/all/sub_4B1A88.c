/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1A88
// Address: 0x00000000004B1A88

//----- (00000000004B1A88) ----------------------------------------------------
__int64 __fastcall sub_4B1A88(__int64 *a1, char *s, unsigned __int64 a3)
{
  size_t v6; // x0

  v6 = strlen(s);
  return sub_4B1980(a1, (unsigned __int8 *)s, a3, v6);
}
