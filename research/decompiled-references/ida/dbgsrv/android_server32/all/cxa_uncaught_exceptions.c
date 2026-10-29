/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exceptions
// Address: 0x000903F4

//----- (000903F4) --------------------------------------------------------
int _cxa_uncaught_exceptions()
{
  int v0; // r0

  v0 = ((int (*)(void))_cxa_get_globals_fast)();
  if ( v0 )
    return *(_DWORD *)(v0 + 4);
  else
    return 0;
}
