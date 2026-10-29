/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__add_shared
// Address: 0x000BC330

//----- (000BC330) --------------------------------------------------------
std::__shared_weak_count *__cdecl std::__shared_weak_count::__add_shared(std::__shared_weak_count *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 1);
  return this;
}
