/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_exception
// Address: 0x0008FF60

//----- (0008FF60) --------------------------------------------------------
void *_cxa_allocate_exception(size_t thrown_size)
{
  size_t v1; // r4
  int *v2; // r0
  int *v3; // r5

  v1 = (thrown_size + 135) & 0xFFFFFFF8;
  v2 = sub_90FA0(v1);
  v3 = v2;
  if ( !v2 )
    std::terminate();
  memset(v2, 0, v1);
  return v3 + 32;
}
