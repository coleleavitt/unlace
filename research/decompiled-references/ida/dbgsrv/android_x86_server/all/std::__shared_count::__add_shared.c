/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_count::__add_shared
// Address: 0x000BC2D0

//----- (000BC2D0) --------------------------------------------------------
std::__shared_count *__cdecl std::__shared_count::__add_shared(std::__shared_count *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 1);
  return this;
}
