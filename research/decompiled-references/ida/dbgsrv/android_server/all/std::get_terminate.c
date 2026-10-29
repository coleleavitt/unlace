/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::get_terminate
// Address: 0x00000000000D6CE8

//----- (00000000000D6CE8) ----------------------------------------------------
unsigned __int64 __fastcall std::get_terminate()
{
  return atomic_load((unsigned __int64 *)&_cxa_terminate_handler);
}
// 1669B0: using guessed type __int64 (__fastcall *_cxa_terminate_handler)();
