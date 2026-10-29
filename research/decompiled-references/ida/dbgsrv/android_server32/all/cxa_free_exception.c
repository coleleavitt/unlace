/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_free_exception
// Address: 0x0008FF8A

//----- (0008FF8A) --------------------------------------------------------
void _cxa_free_exception(void *a1)
{
  _cxa_free_dependent_exception_0((int *)a1 - 32);
}
