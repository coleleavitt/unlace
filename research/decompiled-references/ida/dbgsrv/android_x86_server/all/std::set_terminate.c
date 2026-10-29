/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_terminate
// Address: 0x000C1180

//----- (000C1180) --------------------------------------------------------
__int32 __cdecl std::set_terminate(void (*a1)())
{
  void (__noreturn *v1)(); // eax

  v1 = sub_C11B0;
  if ( a1 )
    v1 = (void (__noreturn *)())a1;
  return _InterlockedExchange((volatile __int32 *)_cxa_terminate_handler, (__int32)v1);
}
// C11B0: using guessed type void __noreturn sub_C11B0();
// 13BC74: using guessed type void (__noreturn *_cxa_terminate_handler[2])();
