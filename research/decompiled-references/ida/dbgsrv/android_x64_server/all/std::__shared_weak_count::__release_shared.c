/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__release_shared
// Address: 0x00000000000CEA70

//----- (00000000000CEA70) ----------------------------------------------------
__int64 __fastcall std::__shared_weak_count::__release_shared(std::__shared_weak_count *this)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFLL);
  if ( !result )
  {
    (*(void (__fastcall **)(std::__shared_weak_count *))(*(_QWORD *)this + 16LL))(this);
    if ( !*((_QWORD *)this + 2) )
      return (*(__int64 (__fastcall **)(std::__shared_weak_count *))(*(_QWORD *)this + 32LL))(this);
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 2, 0xFFFFFFFFFFFFFFFFLL);
    if ( !result )
      return (*(__int64 (__fastcall **)(std::__shared_weak_count *))(*(_QWORD *)this + 32LL))(this);
  }
  return result;
}
