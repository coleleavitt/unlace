/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4814F0
// Address: 0x00000000004814F0

//----- (00000000004814F0) ----------------------------------------------------
void *__fastcall sub_4814F0(signed __int64 a1)
{
  void *result; // rax

  result = sub_4813B0(a1);
  if ( !result )
    std::__throw_bad_alloc();
  return result;
}
