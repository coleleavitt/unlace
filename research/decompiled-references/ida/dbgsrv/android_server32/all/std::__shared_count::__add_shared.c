/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_count::__add_shared
// Address: 0x0008F99A

//----- (0008F99A) --------------------------------------------------------
unsigned int *__fastcall std::__shared_count::__add_shared(std::__shared_count *this)
{
  unsigned int *result; // r0
  unsigned int v2; // r1

  result = (unsigned int *)((char *)this + 4);
  do
    v2 = __ldrex(result);
  while ( __strex(v2 + 1, result) );
  return result;
}
