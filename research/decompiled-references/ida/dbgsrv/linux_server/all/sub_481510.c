/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481510
// Address: 0x0000000000481510

//----- (0000000000481510) ----------------------------------------------------
void *__fastcall sub_481510(void *a1, unsigned __int64 a2)
{
  void *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFELL || (result = sub_481420(a1, a2)) == nullptr )
    std::__throw_bad_alloc();
  return result;
}
