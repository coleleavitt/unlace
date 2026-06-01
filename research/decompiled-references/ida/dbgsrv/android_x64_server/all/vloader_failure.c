/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vloader_failure
// Address: 0x00000000000AF610

//----- (00000000000AF610) ----------------------------------------------------
void __fastcall __noreturn vloader_failure(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // al
  _QWORD *exception; // rax

  if ( a1 )
    callui(24, 2, a1, a2, (unsigned int)&callui, a6, v6);
  exception = _cxa_allocate_exception(8u);
  *exception = &off_14FA40;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'loader_failure_t, std::exception::~exception);
}
// AF62F: variable 'v6' is possibly undefined
// 14F9B0: using guessed type __int64 *`typeinfo for'loader_failure_t;
// 14FA40: using guessed type void (__fastcall *off_14FA40)(std::exception *__hidden this);
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
