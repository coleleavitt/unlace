/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481AC0
// Address: 0x0000000000481AC0

//----- (0000000000481AC0) ----------------------------------------------------
void __fastcall __noreturn sub_481AC0(int a1)
{
  _DWORD *exception; // rax

  if ( !(unsigned __int8)sub_47A1E0() )
    sub_410DF0("Oops! internal error %d occurred.", a1);
  exception = __cxa_allocate_exception(0x10u);
  *(_QWORD *)exception = &off_4C4D00;
  exception[2] = a1;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, (void (*)(void *))sub_481850);
}
// 4C4558: using guessed type _UNKNOWN *`typeinfo for'interr_exc_t;
// 4C4D00: using guessed type __int64 (__fastcall *off_4C4D00)();
