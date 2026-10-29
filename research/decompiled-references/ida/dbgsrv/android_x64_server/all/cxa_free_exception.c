/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_free_exception
// Address: 0x00000000000CF2C0

//----- (00000000000CF2C0) ----------------------------------------------------
void _cxa_free_exception(void *a1)
{
  _cxa_free_dependent_exception_0((__int64)a1 - 128);
}
