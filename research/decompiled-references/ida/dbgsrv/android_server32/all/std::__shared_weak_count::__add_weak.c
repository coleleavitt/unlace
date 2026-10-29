/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__add_weak
// Address: 0x0008F9EE

//----- (0008F9EE) --------------------------------------------------------
unsigned int *__fastcall std::__shared_weak_count::__add_weak(std::__shared_weak_count *this)
{
  unsigned int *result; // r0
  unsigned int v2; // r1

  result = (unsigned int *)((char *)this + 8);
  do
    v2 = __ldrex(result);
  while ( __strex(v2 + 1, result) );
  return result;
}
