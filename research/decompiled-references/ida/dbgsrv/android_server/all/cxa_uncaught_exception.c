/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exception
// Address: 0x00000000000D6934

//----- (00000000000D6934) ----------------------------------------------------
_DWORD *_cxa_uncaught_exception()
{
  _DWORD *result; // x0

  result = _cxa_get_globals_fast();
  if ( result )
    return (_DWORD *)(result[2] != 0);
  return result;
}
