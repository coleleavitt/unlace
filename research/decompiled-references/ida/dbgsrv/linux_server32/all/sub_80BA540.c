/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BA540
// Address: 0x080BA540

//----- (080BA540) --------------------------------------------------------
int __cdecl sub_80BA540(char *nptr, int a2)
{
  int result; // eax

  result = strtol(nptr, nullptr, 10);
  *(_WORD *)(a2 + 56) = result;
  return result;
}
