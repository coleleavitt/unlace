/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::get_unexpected
// Address: 0x000905FC

//----- (000905FC) --------------------------------------------------------
void *std::get_unexpected()
{
  void *result; // r0

  result = _cxa_unexpected_handler;
  __dmb(0xBu);
  return result;
}
// DE2C0: using guessed type _UNKNOWN *_cxa_unexpected_handler;
