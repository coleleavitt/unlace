/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::get_new_handler
// Address: 0x000906FC

//----- (000906FC) --------------------------------------------------------
int std::get_new_handler()
{
  int result; // r0

  result = _cxa_new_handler;
  __dmb(0xBu);
  return result;
}
// E05BC: using guessed type int _cxa_new_handler;
