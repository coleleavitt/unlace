/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vloader_failure
// Address: 0x0000000100068AC4

//----- (0000000100068AC4) ----------------------------------------------------
void __fastcall __noreturn vloader_failure(__int64 a1)
{
  _QWORD *exception; // x0

  if ( a1 )
    callui(24);
  exception = __cxa_allocate_exception(8u);
  *exception = &off_10009FFC0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'loader_failure_t,
    (void (__fastcall *)(void *))std::exception::~exception);
}
// 10009FF38: using guessed type _UNKNOWN *`typeinfo for'loader_failure_t;
// 10009FFC0: using guessed type void (__fastcall *off_10009FFC0)(std::exception *__hidden this);
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
