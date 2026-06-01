/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vloader_failure
// Address: 0x00000000000AB27C

//----- (00000000000AB27C) ----------------------------------------------------
void __fastcall __noreturn vloader_failure(__int64 a1)
{
  _QWORD *exception; // x0

  if ( a1 )
    callui(24, 2, a1);
  exception = _cxa_allocate_exception(8u);
  *exception = &off_15F638;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'loader_failure_t,
    (void (*)(void *))std::bad_alloc::~bad_alloc);
}
// 15F5B0: using guessed type __int64 *`typeinfo for'loader_failure_t;
// 15F638: using guessed type void (__fastcall *off_15F638)(std::bad_alloc *__hidden this);
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
