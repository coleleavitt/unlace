/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_exception_ptr
// Address: 0x00090042

//----- (00090042) --------------------------------------------------------
void *_cxa_get_exception_ptr(void *a1)
{
  return *((void **)a1 + 9);
}
