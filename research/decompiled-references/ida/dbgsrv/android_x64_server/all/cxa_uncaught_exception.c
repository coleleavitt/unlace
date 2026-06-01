/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exception
// Address: 0x00000000000CF880

//----- (00000000000CF880) ----------------------------------------------------
bool _cxa_uncaught_exception()
{
  _DWORD *globals_fast; // rax

  globals_fast = _cxa_get_globals_fast();
  return globals_fast && globals_fast[2] != 0;
}
