/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2E10
// Address: 0x00000000004A2E10

//----- (00000000004A2E10) ----------------------------------------------------
__int64 *__fastcall sub_4A2E10(__int64 *a1, char *s)
{
  size_t v4; // x0

  v4 = strlen(s);
  return sub_4A2CA8(a1, s, v4);
}
