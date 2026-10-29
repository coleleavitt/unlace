/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79910
// Address: 0x00079910

//----- (00079910) --------------------------------------------------------
bool __cdecl sub_79910(char *s1)
{
  return strncmp(s1, ".debug_", 7u) == 0;
}
