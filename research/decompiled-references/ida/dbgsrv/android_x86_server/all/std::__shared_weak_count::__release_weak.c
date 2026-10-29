/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__release_weak
// Address: 0x000BC3D0

//----- (000BC3D0) --------------------------------------------------------
std::__shared_weak_count *__cdecl std::__shared_weak_count::__release_weak(std::__shared_weak_count *this)
{
  std::__shared_weak_count *result; // eax

  result = this;
  if ( !*((_DWORD *)this + 2) || !_InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) )
    return (std::__shared_weak_count *)(*(int (__cdecl **)(std::__shared_weak_count *))(*(_DWORD *)this + 16))(this);
  return result;
}
