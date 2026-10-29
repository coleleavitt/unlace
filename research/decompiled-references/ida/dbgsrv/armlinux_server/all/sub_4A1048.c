/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1048
// Address: 0x00000000004A1048

//----- (00000000004A1048) ----------------------------------------------------
unsigned __int64 __fastcall sub_4A1048(__int64 *a1, char *s, unsigned __int64 a3)
{
  size_t v6; // x0

  v6 = strlen(s);
  return sub_4A0FA8(a1, s, a3, v6);
}
