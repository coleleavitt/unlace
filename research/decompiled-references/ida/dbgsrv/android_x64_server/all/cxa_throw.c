/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_throw
// Address: 0x00000000000CF330

//----- (00000000000CF330) ----------------------------------------------------
void __noreturn _cxa_throw(void *a1, struct type_info *lptinfo, void (*a3)(void *))
{
  char v3; // al
  _DWORD *globals; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // [rsp-8h] [rbp-28h]

  v10 = v3;
  globals = _cxa_get_globals();
  *((_QWORD *)a1 - 13) = std::get_unexpected();
  *((_QWORD *)a1 - 12) = std::get_terminate();
  *((_QWORD *)a1 - 15) = lptinfo;
  *((_QWORD *)a1 - 14) = a3;
  *((_QWORD *)a1 - 4) = 0x434C4E47432B2B00LL;
  *((_QWORD *)a1 - 16) = 1;
  ++globals[2];
  *((_QWORD *)a1 - 3) = sub_CF3A0;
  Unwind_RaiseException((_QWORD *)a1 - 4, (__int64)lptinfo, v6, v7, v8, v9, v10);
  sub_CF3F0((__int64)a1 - 128);
}
// CF337: variable 'v3' is possibly undefined
// CF392: variable 'v6' is possibly undefined
// CF392: variable 'v7' is possibly undefined
// CF392: variable 'v8' is possibly undefined
// CF392: variable 'v9' is possibly undefined
