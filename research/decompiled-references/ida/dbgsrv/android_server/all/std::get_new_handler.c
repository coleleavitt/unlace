/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::get_new_handler
// Address: 0x00000000000D6D54

//----- (00000000000D6D54) ----------------------------------------------------
unsigned __int64 __fastcall std::get_new_handler()
{
  return atomic_load((unsigned __int64 *)&_cxa_new_handler);
}
// 169108: using guessed type __int64 _cxa_new_handler;
