/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_register_common
// Address: 0x0009BB98

//----- (0009BB98) --------------------------------------------------------
unsigned int *__fastcall _emutls_register_common(
        unsigned int *result,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( *result < a2 )
  {
    *result = a2;
    result[3] = 0;
  }
  if ( result[1] < a3 )
    result[1] = a3;
  if ( a4 )
  {
    if ( a2 == *result )
      result[3] = a4;
  }
  return result;
}
