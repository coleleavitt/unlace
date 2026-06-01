/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A508
// Address: 0x000000000008A508

//----- (000000000008A508) ----------------------------------------------------
bool __fastcall sub_8A508(const char *a1)
{
  return strncmp(a1, ".debug_", 7u) == 0;
}
