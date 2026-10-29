/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48221C
// Address: 0x0048221C

//----- (0048221C) --------------------------------------------------------
double __usercall sub_48221C@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}
