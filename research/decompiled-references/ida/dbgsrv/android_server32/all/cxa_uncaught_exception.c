/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_uncaught_exception
// Address: 0x000903E4

//----- (000903E4) --------------------------------------------------------
bool _cxa_uncaught_exception()
{
  return _cxa_uncaught_exceptions() != 0;
}
