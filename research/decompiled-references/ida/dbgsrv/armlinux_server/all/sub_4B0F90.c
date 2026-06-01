/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0F90
// Address: 0x00000000004B0F90

//----- (00000000004B0F90) ----------------------------------------------------
unsigned __int64 *__fastcall sub_4B0F90(unsigned __int64 *a1, char *s)
{
  size_t v4; // x0

  v4 = strlen(s);
  return sub_4B0B90(a1, 0, a1[1], s, v4);
}
