/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::get_unexpected
// Address: 0x00000000000D6C58

//----- (00000000000D6C58) ----------------------------------------------------
unsigned __int64 __fastcall std::get_unexpected()
{
  return atomic_load((unsigned __int64 *)&_cxa_unexpected_handler);
}
// 1669B8: using guessed type void (__fastcall __noreturn *_cxa_unexpected_handler)();
