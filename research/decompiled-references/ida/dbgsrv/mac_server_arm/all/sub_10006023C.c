/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006023C
// Address: 0x000000010006023C

//----- (000000010006023C) ----------------------------------------------------
__int64 __fastcall sub_10006023C(__int64 result)
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
