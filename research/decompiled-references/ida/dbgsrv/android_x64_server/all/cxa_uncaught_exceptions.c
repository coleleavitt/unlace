/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exceptions
// Address: 0x00000000000CF8A0

//----- (00000000000CF8A0) ----------------------------------------------------
__int64 _cxa_uncaught_exceptions()
{
  unsigned int *globals_fast; // rax

  globals_fast = (unsigned int *)_cxa_get_globals_fast();
  if ( globals_fast )
    return globals_fast[2];
  else
    return 0;
}
// CF8A0: using guessed type __int64 _cxa_uncaught_exceptions();
