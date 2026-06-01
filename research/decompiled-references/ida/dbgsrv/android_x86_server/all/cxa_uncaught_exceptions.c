/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exceptions
// Address: 0x000BD7A0

//----- (000BD7A0) --------------------------------------------------------
int _cxa_uncaught_exceptions()
{
  _DWORD *globals_fast; // eax
  int *v2; // [esp+0h] [ebp-14h]

  globals_fast = _cxa_get_globals_fast(v2);
  if ( globals_fast )
    return globals_fast[1];
  else
    return 0;
}
// BD7B6: variable 'v2' is possibly undefined
