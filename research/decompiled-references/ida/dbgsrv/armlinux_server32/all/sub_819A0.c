/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_819A0
// Address: 0x000819A0

//----- (000819A0) --------------------------------------------------------
int __fastcall sub_819A0(_DWORD *a1, int a2, unsigned int a3, const char *a4)
{
  int result; // r0

  result = *(_DWORD *)(*a1 - 12);
  if ( a2 + 1073741820 - result < a3 )
    sub_83DCC(a4);
  return result;
}
