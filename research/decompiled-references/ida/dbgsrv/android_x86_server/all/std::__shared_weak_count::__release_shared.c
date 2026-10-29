/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__release_shared
// Address: 0x000BC370

//----- (000BC370) --------------------------------------------------------
signed __int32 __cdecl std::__shared_weak_count::__release_shared(std::__shared_weak_count *this)
{
  signed __int32 result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF);
  if ( !result )
  {
    (*(void (__cdecl **)(std::__shared_weak_count *))(*(_DWORD *)this + 8))(this);
    if ( !*((_DWORD *)this + 2) )
      return (*(int (__cdecl **)(std::__shared_weak_count *))(*(_DWORD *)this + 16))(this);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
    if ( !result )
      return (*(int (__cdecl **)(std::__shared_weak_count *))(*(_DWORD *)this + 16))(this);
  }
  return result;
}
