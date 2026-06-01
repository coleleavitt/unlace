/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_819BC
// Address: 0x000819BC

//----- (000819BC) --------------------------------------------------------
unsigned int __fastcall sub_819BC(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int result; // r0

  result = *(_DWORD *)(*a1 - 12) - a2;
  if ( result >= a3 )
    return a3;
  return result;
}
