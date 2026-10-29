/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_dependent_exception
// Address: 0x0008FF9A

//----- (0008FF9A) --------------------------------------------------------
int *_cxa_allocate_dependent_exception()
{
  int *v0; // r0
  int *v1; // r4

  v0 = sub_90FA0(0x80u);
  if ( !v0 )
    std::terminate();
  v1 = v0;
  memset(v0, 0, 0x80u);
  return v1;
}
