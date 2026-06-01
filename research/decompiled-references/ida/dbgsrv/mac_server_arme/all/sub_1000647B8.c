/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000647B8
// Address: 0x00000001000647B8

//----- (00000001000647B8) ----------------------------------------------------
__int64 __fastcall sub_1000647B8(__int64 result)
{
  std::__shared_weak_count *v1; // x19
  __int64 v2; // x20

  v1 = *(std::__shared_weak_count **)(result + 8);
  if ( v1 )
  {
    if ( !atomic_fetch_add(&v1->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
    {
      v2 = result;
      ((void (__fastcall *)(std::__shared_weak_count *))v1->__on_zero_shared)(v1);
      std::__shared_weak_count::__release_weak(v1);
      return v2;
    }
  }
  return result;
}
