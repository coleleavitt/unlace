/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::get_terminate
// Address: 0x00090690

//----- (00090690) --------------------------------------------------------
void *std::get_terminate()
{
  void *result; // r0

  result = _cxa_terminate_handler;
  __dmb(0xBu);
  return result;
}
// DE2BC: using guessed type _UNKNOWN *_cxa_terminate_handler;
