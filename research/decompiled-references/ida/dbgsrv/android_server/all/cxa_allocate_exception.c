/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_exception
// Address: 0x00000000000D6250

//----- (00000000000D6250) ----------------------------------------------------
void *_cxa_allocate_exception(size_t thrown_size)
{
  size_t v1; // x19
  unsigned __int16 *v2; // x0
  unsigned __int16 *v3; // x20

  v1 = (thrown_size + 143) & 0xFFFFFFFFFFFFFFF0LL;
  v2 = sub_D7A6C(v1);
  v3 = v2;
  if ( !v2 )
    std::terminate();
  memset(v2, 0, v1);
  return v3 + 64;
}
