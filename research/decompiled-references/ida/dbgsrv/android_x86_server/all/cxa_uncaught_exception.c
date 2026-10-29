/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exception
// Address: 0x000BD760

//----- (000BD760) --------------------------------------------------------
bool _cxa_uncaught_exception()
{
  _DWORD *globals_fast; // eax
  int *v2; // [esp+0h] [ebp-14h]

  globals_fast = _cxa_get_globals_fast(v2);
  return globals_fast && globals_fast[1] != 0;
}
// BD776: variable 'v2' is possibly undefined
