/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_allocate_dependent_exception
// Address: 0x00000000000CF2E0

//----- (00000000000CF2E0) ----------------------------------------------------
_OWORD *_cxa_allocate_dependent_exception()
{
  _OWORD *result; // rax

  result = sub_D0A90(0x80u);
  if ( !result )
    std::terminate();
  result[7] = 0;
  result[6] = 0;
  result[5] = 0;
  result[4] = 0;
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  *result = 0;
  return result;
}
