/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_unexpected
// Address: 0x000C1150

//----- (000C1150) --------------------------------------------------------
__int32 __cdecl std::set_unexpected(void (*a1)())
{
  void (__noreturn *v1)(); // eax

  v1 = sub_C12D0;
  if ( a1 )
    v1 = (void (__noreturn *)())a1;
  return _InterlockedExchange((volatile __int32 *)&_cxa_unexpected_handler, (__int32)v1);
}
// 13BC78: using guessed type void (__noreturn *_cxa_unexpected_handler)();
