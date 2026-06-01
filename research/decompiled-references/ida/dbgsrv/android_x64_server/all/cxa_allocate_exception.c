/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_exception
// Address: 0x00000000000CF270

//----- (00000000000CF270) ----------------------------------------------------
void *_cxa_allocate_exception(size_t thrown_size)
{
  char *v1; // rax
  char *v2; // r14

  v1 = (char *)sub_D0A90((thrown_size + 143) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = v1;
  if ( !v1 )
    std::terminate();
  memset(v1, 0, (thrown_size + 143) & 0xFFFFFFFFFFFFFFF0LL);
  return v2 + 128;
}
