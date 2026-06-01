/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_increment_exception_refcount
// Address: 0x000902CC

//----- (000902CC) --------------------------------------------------------
unsigned int *__fastcall _cxa_increment_exception_refcount(unsigned int *result)
{
  unsigned int v1; // r1

  if ( result )
  {
    result -= 32;
    __dmb(0xBu);
    do
      v1 = __ldrex(result);
    while ( __strex(v1 + 1, result) );
    __dmb(0xBu);
  }
  return result;
}
