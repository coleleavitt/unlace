/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_unexpected
// Address: 0x00000000000D2900

//----- (00000000000D2900) ----------------------------------------------------
__int64 __fastcall std::set_unexpected(void (__noreturn *a1)())
{
  void (__noreturn *v1)(); // rax

  v1 = sub_D2A50;
  if ( a1 )
    v1 = a1;
  return _InterlockedExchange64((volatile __int64 *)&_cxa_unexpected_handler, (__int64)v1);
}
// D2A50: using guessed type void __noreturn sub_D2A50();
// 1556D8: using guessed type void (__fastcall __noreturn *_cxa_unexpected_handler)();
