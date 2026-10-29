/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_count::__release_shared
// Address: 0x000BC2F0

//----- (000BC2F0) --------------------------------------------------------
char __cdecl std::__shared_count::__release_shared(std::__shared_count *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) )
    return 0;
  (*(void (__cdecl **)(std::__shared_count *))(*(_DWORD *)this + 8))(this);
  return 1;
}
