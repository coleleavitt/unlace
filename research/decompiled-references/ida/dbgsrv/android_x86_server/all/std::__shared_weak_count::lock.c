/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::lock
// Address: 0x000BC410

//----- (000BC410) --------------------------------------------------------
std::__shared_weak_count *__cdecl std::__shared_weak_count::lock(std::__shared_weak_count *this)
{
  signed __int32 v1; // eax
  int v2; // ecx
  signed __int32 v3; // ett

  v1 = *((_DWORD *)this + 1);
  v2 = 0;
  while ( v1 != -1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1, v1 + 1, v1);
    if ( v3 == v1 )
      return this;
  }
  return (std::__shared_weak_count *)v2;
}
