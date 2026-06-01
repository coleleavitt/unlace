/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481F20
// Address: 0x00481F20

//----- (00481F20) --------------------------------------------------------
double __usercall sub_481F20@<st0>(double result@<st0>)
{
  _ST6 = result;
  __asm { frndint }
  if ( _ST6 == result )
  {
    _ST5 = result * 0.5;
    __asm { frndint }
  }
  return result;
}
