/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8180C
// Address: 0x0008180C

//----- (0008180C) --------------------------------------------------------
unsigned int __fastcall sub_8180C(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int result; // r0

  result = *(_DWORD *)(*a1 - 12) - a2;
  if ( result >= a3 )
    return a3;
  return result;
}
