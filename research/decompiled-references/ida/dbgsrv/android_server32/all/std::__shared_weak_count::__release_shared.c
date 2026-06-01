/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__release_shared
// Address: 0x0008FA00

//----- (0008FA00) --------------------------------------------------------
unsigned int *__fastcall std::__shared_weak_count::__release_shared(std::__shared_weak_count *this)
{
  unsigned int *result; // r0
  unsigned int v3; // r1

  result = (unsigned int *)((char *)this + 4);
  __dmb(0xBu);
  do
    v3 = __ldrex(result);
  while ( __strex(v3 - 1, result) );
  __dmb(0xBu);
  if ( !v3 )
  {
    (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)this + 8))(this);
    return std::__shared_weak_count::__release_weak((unsigned int *)this);
  }
  return result;
}
