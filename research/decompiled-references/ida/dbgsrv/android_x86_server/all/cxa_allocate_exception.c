/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_exception
// Address: 0x000BCF00

//----- (000BCF00) --------------------------------------------------------
void *_cxa_allocate_exception(size_t thrown_size)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_BEBA0((thrown_size + 95) & 0xFFFFFFF0);
  v2 = v1;
  if ( !v1 )
    std::terminate();
  memset(v1, 0, (thrown_size + 95) & 0xFFFFFFF0);
  return v2 + 80;
}
