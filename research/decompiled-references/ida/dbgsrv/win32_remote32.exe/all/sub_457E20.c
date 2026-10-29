/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457E20
// Address: 0x00457E20

//----- (00457E20) --------------------------------------------------------
int __cdecl sub_457E20(UINT *a1, BYTE *a2, int a3)
{
  int result; // eax

  result = IsDBCSLeadByteEx(*a1, *a2) + 1;
  if ( a3 < result )
  {
    *sub_46B984() = 22;
    return -1;
  }
  return result;
}
