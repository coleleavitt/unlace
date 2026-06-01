/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::lock
// Address: 0x00000000000CEAF0

//----- (00000000000CEAF0) ----------------------------------------------------
std::__shared_weak_count *__fastcall std::__shared_weak_count::lock(std::__shared_weak_count *this)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rtt

  v1 = *((_QWORD *)this + 1);
  while ( v1 != -1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v1 + 1, v1);
    if ( v2 == v1 )
      return this;
  }
  return nullptr;
}
