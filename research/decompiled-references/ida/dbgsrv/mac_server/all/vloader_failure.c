/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vloader_failure
// Address: 0x0000000100070AE0

//----- (0000000100070AE0) ----------------------------------------------------
void __fastcall __noreturn vloader_failure(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *exception; // rax

  if ( a1 )
    ((void (__fastcall *)(int, int, _DWORD, int, int, int))callui)(24, 2, a1, a2, a5, a6);
  exception = __cxa_allocate_exception(8u);
  *exception = &off_1000AAA80;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'loader_failure_t,
    (void (__fastcall *)(void *))sub_100070B30);
}
// 1000AAA58: using guessed type _UNKNOWN *`typeinfo for'loader_failure_t;
// 1000AAA80: using guessed type __int64 (__fastcall *off_1000AAA80)();
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
