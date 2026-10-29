/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow_primary_exception
// Address: 0x00090348

//----- (00090348) --------------------------------------------------------
_DWORD *__fastcall _cxa_rethrow_primary_exception(_DWORD *result)
{
  _DWORD *v1; // r5
  int *dependent_exception; // r0
  int *v3; // r4
  unsigned int *v4; // r0
  unsigned int v5; // r1
  void *terminate; // r0
  int *v7; // r4
  int v8; // r0
  int v9; // r1
  int v10; // r3

  if ( result )
  {
    v1 = result;
    dependent_exception = _cxa_allocate_dependent_exception();
    *dependent_exception = (int)v1;
    v3 = dependent_exception;
    v4 = v1 - 32;
    __dmb(0xBu);
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 + 1, v4) );
    __dmb(0xBu);
    v3[1] = *(v1 - 31);
    v3[3] = (int)std::get_unexpected();
    terminate = std::get_terminate();
    v3[10] = 1126902529;
    v7 = v3 + 10;
    v7[1] = 1129074247;
    *(v7 - 6) = (int)terminate;
    v8 = ((int (*)(void))_cxa_get_globals)();
    v9 = *(_DWORD *)(v8 + 4) + 1;
    *(_DWORD *)(v8 + 4) = v9;
    v7[2] = (int)sub_903C0;
    Unwind_RaiseException(v7, v9, (int)sub_903C0, v10);
    return _cxa_begin_catch(v7);
  }
  return result;
}
// 903A2: variable 'v10' is possibly undefined
