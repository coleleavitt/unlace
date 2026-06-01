/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__add_weak
// Address: 0x000BC350

//----- (000BC350) --------------------------------------------------------
std::__shared_weak_count *__cdecl std::__shared_weak_count::__add_weak(std::__shared_weak_count *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return this;
}
