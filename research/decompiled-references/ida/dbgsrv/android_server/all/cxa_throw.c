/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_throw
// Address: 0x00000000000D62F0

//----- (00000000000D62F0) ----------------------------------------------------
void __noreturn _cxa_throw(void *a1, struct type_info *lptinfo, void (*a3)(void *))
{
  _DWORD *globals; // x22
  unsigned __int64 terminate; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  char v15; // [xsp+20h] [xbp-20h]

  globals = _cxa_get_globals();
  *((_QWORD *)a1 - 13) = std::get_unexpected();
  terminate = std::get_terminate();
  *((_QWORD *)a1 - 16) = 1;
  a1 = (char *)a1 - 128;
  *((_QWORD *)a1 + 4) = terminate;
  *((_QWORD *)a1 + 1) = lptinfo;
  *((_QWORD *)a1 + 2) = a3;
  *((_QWORD *)a1 + 12) = 0x434C4E47432B2B00LL;
  ++globals[2];
  *((_QWORD *)a1 + 13) = &loc_D636C;
  Unwind_RaiseException((_QWORD *)a1 + 12, v8, v9, v10, v11, v12, v13, v14, v15);
  sub_D63CC((__int64)a1);
}
// D6360: variable 'v8' is possibly undefined
// D6360: variable 'v9' is possibly undefined
// D6360: variable 'v10' is possibly undefined
// D6360: variable 'v11' is possibly undefined
// D6360: variable 'v12' is possibly undefined
// D6360: variable 'v13' is possibly undefined
// D6360: variable 'v14' is possibly undefined
// D6360: variable 'v15' is possibly undefined
