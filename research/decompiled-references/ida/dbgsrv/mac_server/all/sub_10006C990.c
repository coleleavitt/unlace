/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006C990
// Address: 0x000000010006C990

//----- (000000010006C990) ----------------------------------------------------
__int64 __fastcall sub_10006C990(_QWORD *__p)
{
  __int64 v1; // rax
  std::__shared_weak_count *v2; // rbx
  std::__shared_weak_count *v3; // r14
  const char *v4; // rsi
  const char *v5; // rdi
  int v6; // ebx
  std::__shared_weak_count *v7; // rbx
  addrinfo *v9; // [rsp+8h] [rbp-38h] BYREF
  std::__shared_weak_count *v10[2]; // [rsp+10h] [rbp-30h]

  v1 = __p[1];
  *(_OWORD *)v10 = *(_OWORD *)__p;
  if ( v1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v1 + 8));
    v2 = (std::__shared_weak_count *)__p[1];
    if ( v2 )
    {
      if ( !_InterlockedExchangeAdd64(&v2->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
      {
        ((void (__fastcall *)(std::__shared_weak_count *))v2->__on_zero_shared)(v2);
        std::__shared_weak_count::__release_weak(v2);
      }
    }
  }
  operator delete(__p);
  v9 = nullptr;
  v3 = v10[0];
  v4 = _s1;
  v5 = _s1;
  if ( v10[0][1].__shared_owners_ )
    v5 = (const char *)v10[0][1].__vftable;
  if ( v10[0][2].__shared_owners_ )
    v4 = (const char *)v10[0][2].__vftable;
  v6 = getaddrinfo(v5, v4, (const addrinfo *)&v10[0][3], &v9);
  qmutex_lock((pthread_mutex_t *)v3->__shared_owners_);
  if ( BYTE4(v3[5].__vftable) )
  {
    if ( v9 )
    {
      freeaddrinfo(v9);
      v9 = nullptr;
    }
  }
  else
  {
    LODWORD(v3[5].__vftable) = v6;
    v3->__vftable = (std::__shared_weak_count_vtbl *)v9;
  }
  qmutex_unlock((pthread_mutex_t *)v3->__shared_owners_);
  qsem_post(v3->__shared_weak_owners_);
  v7 = v10[1];
  if ( v10[1] && !_InterlockedExchangeAdd64(&v10[1]->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
  {
    ((void (__fastcall *)(std::__shared_weak_count *))v7->__on_zero_shared)(v7);
    std::__shared_weak_count::__release_weak(v7);
  }
  return 0;
}
