/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_new_handler
// Address: 0x000BDCD0

//----- (000BDCD0) --------------------------------------------------------
__int32 __cdecl std::set_new_handler(void (*a1)())
{
  return _InterlockedExchange(&_cxa_new_handler, (__int32)a1);
}
// 13E3BC: using guessed type int _cxa_new_handler;
