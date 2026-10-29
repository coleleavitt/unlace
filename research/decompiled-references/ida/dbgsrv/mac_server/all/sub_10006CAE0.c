/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006CAE0
// Address: 0x000000010006CAE0

//----- (000000010006CAE0) ----------------------------------------------------
void __fastcall sub_10006CAE0(__int64 a1)
{
  std::__shared_weak_count *v1; // rbx

  v1 = *(std::__shared_weak_count **)(a1 + 8);
  if ( v1 )
  {
    if ( !_InterlockedExchangeAdd64(&v1->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
    {
      ((void (__fastcall *)(std::__shared_weak_count *))v1->__on_zero_shared)(v1);
      std::__shared_weak_count::__release_weak(v1);
    }
  }
}
