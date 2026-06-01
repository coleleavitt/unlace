/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: clzdi2
// Address: 0x0009BDD8

//----- (0009BDD8) --------------------------------------------------------
unsigned int __fastcall _clzdi2(unsigned int a1, unsigned int a2)
{
  unsigned int result; // r0

  if ( a2 )
    result = __clz(a2);
  else
    result = __clz(a1);
  if ( !a2 )
    result += 32;
  return result;
}
