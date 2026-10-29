/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exceptions
// Address: 0x00000000000D695C

//----- (00000000000D695C) ----------------------------------------------------
unsigned int *_cxa_uncaught_exceptions()
{
  unsigned int *result; // x0

  result = (unsigned int *)_cxa_get_globals_fast();
  if ( result )
    return (unsigned int *)result[2];
  return result;
}
