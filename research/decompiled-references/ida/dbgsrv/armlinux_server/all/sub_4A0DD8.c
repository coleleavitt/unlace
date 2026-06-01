/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0DD8
// Address: 0x00000000004A0DD8

//----- (00000000004A0DD8) ----------------------------------------------------
__int64 __fastcall sub_4A0DD8(__int64 *a1, char *s, unsigned __int64 a3)
{
  size_t v6; // x0

  v6 = strlen(s);
  return sub_4A0CC8(a1, (unsigned __int8 *)s, a3, v6);
}
