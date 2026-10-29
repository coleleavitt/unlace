/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4820F0
// Address: 0x004820F0

//----- (004820F0) --------------------------------------------------------
double __usercall sub_4820F0@<st0>(int a1@<ebp>, double a2@<st0>)
{
  double result; // st7

  *(double *)(a1 - 158) = a2;
  result = *(double *)(a1 - 158);
  if ( (*(_BYTE *)(a1 - 151) & 0x40) != 0 )
  {
    *(_BYTE *)(a1 - 144) = 0;
  }
  else
  {
    *(_BYTE *)(a1 - 144) = 0;
    return result + 1.0;
  }
  return result;
}
