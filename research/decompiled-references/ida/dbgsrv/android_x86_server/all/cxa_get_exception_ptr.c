/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_exception_ptr
// Address: 0x000BD1C0

//----- (000BD1C0) --------------------------------------------------------
void *_cxa_get_exception_ptr(void *a1)
{
  return *((void **)a1 - 2);
}
