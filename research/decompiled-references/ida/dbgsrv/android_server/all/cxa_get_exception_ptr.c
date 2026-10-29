/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_exception_ptr
// Address: 0x00000000000D63EC

//----- (00000000000D63EC) ----------------------------------------------------
void *_cxa_get_exception_ptr(void *a1)
{
  return *((void **)a1 - 2);
}
