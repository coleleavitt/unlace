/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_terminate
// Address: 0x00000000000D2920

//----- (00000000000D2920) ----------------------------------------------------
__int64 __fastcall std::set_terminate(void (__noreturn *a1)())
{
  void (__noreturn *v1)(); // rax

  v1 = sub_D2940;
  if ( a1 )
    v1 = a1;
  return _InterlockedExchange64((volatile __int64 *)_cxa_terminate_handler, (__int64)v1);
}
// D2940: using guessed type void __noreturn sub_D2940();
// 1556D0: using guessed type void (__fastcall __noreturn *_cxa_terminate_handler[2])();
