/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58CB4
// Address: 0x00058CB4

//----- (00058CB4) --------------------------------------------------------
bool __fastcall sub_58CB4(const char *a1)
{
  return strncmp(a1, ".debug_", 7u) == 0;
}
