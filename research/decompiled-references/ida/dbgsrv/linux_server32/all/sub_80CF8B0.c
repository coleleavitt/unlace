/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF8B0
// Address: 0x080CF8B0

//----- (080CF8B0) --------------------------------------------------------
void *__cdecl sub_80CF8B0(size_t size)
{
  void *result; // eax

  result = sub_80CF710(size);
  if ( !result )
    std::__throw_bad_alloc();
  return result;
}
