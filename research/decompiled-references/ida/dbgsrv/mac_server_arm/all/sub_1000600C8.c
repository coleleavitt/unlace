/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000600C8
// Address: 0x00000001000600C8

//----- (00000001000600C8) ----------------------------------------------------
__int64 __fastcall sub_1000600C8(_QWORD *a1)
{
  std::__shared_weak_count *v1; // x8
  std::__shared_weak_count *v2; // x19
  _QWORD *v3; // x20
  __int64 v4; // x20
  const char *v5; // x0
  const char *v6; // x1
  int v7; // w19
  std::__shared_weak_count *v8; // x19
  addrinfo *v10; // [xsp+0h] [xbp-30h] BYREF
  __int64 v11; // [xsp+8h] [xbp-28h]
  std::__shared_weak_count *v12; // [xsp+10h] [xbp-20h]

  v1 = (std::__shared_weak_count *)a1[1];
  v11 = *a1;
  v12 = v1;
  if ( v1 )
  {
    atomic_fetch_add_explicit(&v1->__shared_owners_, 1u, memory_order_relaxed);
    v2 = (std::__shared_weak_count *)a1[1];
    if ( v2 )
    {
      if ( !atomic_fetch_add(&v2->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
      {
        v3 = a1;
        ((void (__fastcall *)(std::__shared_weak_count *))v2->__on_zero_shared)(v2);
        std::__shared_weak_count::__release_weak(v2);
        a1 = v3;
      }
    }
  }
  operator delete(a1);
  v10 = nullptr;
  v4 = v11;
  if ( *(_QWORD *)(v11 + 32) )
  {
    v5 = *(const char **)(v11 + 24);
    if ( *(_QWORD *)(v11 + 56) )
    {
LABEL_7:
      v6 = *(const char **)(v11 + 48);
      goto LABEL_10;
    }
  }
  else
  {
    v5 = &byte_100075A30;
    if ( *(_QWORD *)(v11 + 56) )
      goto LABEL_7;
  }
  v6 = &byte_100075A30;
LABEL_10:
  v7 = getaddrinfo(v5, v6, (const addrinfo *)(v11 + 72), &v10);
  qmutex_lock(*(pthread_mutex_t **)(v4 + 8));
  if ( (*(_BYTE *)(v4 + 124) & 1) != 0 )
  {
    if ( v10 )
    {
      freeaddrinfo(v10);
      v10 = nullptr;
    }
  }
  else
  {
    *(_DWORD *)(v4 + 120) = v7;
    *(_QWORD *)v4 = v10;
  }
  qmutex_unlock(*(pthread_mutex_t **)(v4 + 8));
  qsem_post(*(_QWORD *)(v4 + 16));
  v8 = v12;
  if ( v12 && !atomic_fetch_add(&v12->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
  {
    ((void (__fastcall *)(std::__shared_weak_count *))v8->__on_zero_shared)(v8);
    std::__shared_weak_count::__release_weak(v8);
  }
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
