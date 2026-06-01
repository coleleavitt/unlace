/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_count::__release_shared
// Address: 0x00000000000CEA20

//----- (00000000000CEA20) ----------------------------------------------------
char __fastcall std::__shared_count::__release_shared(std::__shared_count *this)
{
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFLL) )
    return 0;
  (*(void (__fastcall **)(std::__shared_count *))(*(_QWORD *)this + 16LL))(this);
  return 1;
}
