/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF8E0
// Address: 0x080CF8E0

//----- (080CF8E0) --------------------------------------------------------
void *__cdecl sub_80CF8E0(void *ptr, size_t size)
{
  void *result; // eax

  if ( size > 0x7FFFFFFE || (result = sub_80CF7A0(ptr, size)) == nullptr )
    std::__throw_bad_alloc();
  return result;
}
