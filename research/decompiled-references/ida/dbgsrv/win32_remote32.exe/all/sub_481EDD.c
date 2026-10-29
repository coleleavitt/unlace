/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481EDD
// Address: 0x00481EDD

//----- (00481EDD) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int __usercall sub_481EDD@<eax>(char a1@<ch>, int _EBP@<ebp>)
{
  int result; // eax
  int v3; // [esp-4h] [ebp-4h]

  __asm
  {
    fld     st
    fabs
    fld     ds:tbyte_4AA54E
    fcompp
    fstsw   word ptr [ebp-0A0h]
  }
  if ( (*(_BYTE *)(_EBP - 159) & 0x41) != 0 )
  {
    result = v3;
    __asm
    {
      ftst
      fstsw   word ptr [ebp-0A0h]
    }
    if ( (*(_BYTE *)(_EBP - 159) & 1) != 0 )
    {
      *(_BYTE *)(_EBP - 144) = 4;
      __asm
      {
        fstp    st
        fldz
      }
    }
    else
    {
      __asm
      {
        fstp    st
        fld     ds:tbyte_4AA530
      }
      if ( a1 )
        __asm { fchs }
    }
  }
  else
  {
    __asm
    {
      fld     st
      frndint
      ftst
      fstsw   word ptr [ebp-0A0h]
    }
    __asm
    {
      fxch    st(1)
      fsub    st, st(1)
      ftst
      fstsw   word ptr [ebp-0A0h]
      fabs
      f2xm1
    }
  }
  return result;
}
// 481E90: positive sp value 4 has been found
// 481EDD: inconsistent fpu stack
// 481E8F: variable 'v3' is possibly undefined
