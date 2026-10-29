/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58B30
// Address: 0x00058B30

//----- (00058B30) --------------------------------------------------------
bool __fastcall sub_58B30(const char *a1)
{
  return strncmp(a1, ".debug_", 7u) == 0;
}
