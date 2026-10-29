/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58D08
// Address: 0x00058D08

//----- (00058D08) --------------------------------------------------------
bool __fastcall sub_58D08(const char *a1)
{
  return strncmp(a1, ".debug_", 7u) == 0;
}
