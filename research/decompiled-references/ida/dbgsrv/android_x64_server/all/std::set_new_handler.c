/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_new_handler
// Address: 0x00000000000CFC60

//----- (00000000000CFC60) ----------------------------------------------------
__int64 __fastcall std::set_new_handler(void (*a1)())
{
  return _InterlockedExchange64(&_cxa_new_handler, (__int64)a1);
}
// 158E60: using guessed type __int64 _cxa_new_handler;
