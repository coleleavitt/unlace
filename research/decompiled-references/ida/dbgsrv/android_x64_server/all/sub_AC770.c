/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC770
// Address: 0x00000000000AC770

//----- (00000000000AC770) ----------------------------------------------------
__int64 __fastcall sub_AC770(__int64 *ptr)
{
  __int64 v1; // r12
  volatile signed __int64 *v2; // r14
  volatile signed __int64 *v3; // r15
  const char *v4; // rsi
  const char *v5; // rdi
  int v6; // ebx
  struct addrinfo *pai[6]; // [rsp+8h] [rbp-30h] BYREF

  pai[1] = (struct addrinfo *)__readfsqword(0x28u);
  v1 = *ptr;
  v2 = (volatile signed __int64 *)ptr[1];
  if ( v2 )
  {
    _InterlockedAdd64(v2 + 1, 1u);
    v3 = (volatile signed __int64 *)ptr[1];
    if ( v3 )
    {
      if ( !_InterlockedExchangeAdd64(v3 + 1, 0xFFFFFFFFFFFFFFFFLL) )
      {
        (*(void (__fastcall **)(volatile signed __int64 *))(*v3 + 16))(v3);
        std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v3);
      }
    }
  }
  operator delete(ptr);
  pai[0] = nullptr;
  v4 = s1;
  v5 = s1;
  if ( *(_QWORD *)(v1 + 32) )
    v5 = *(const char **)(v1 + 24);
  if ( *(_QWORD *)(v1 + 56) )
    v4 = *(const char **)(v1 + 48);
  v6 = getaddrinfo(v5, v4, (const struct addrinfo *)(v1 + 72), pai);
  qmutex_lock(*(pthread_mutex_t **)(v1 + 8));
  if ( *(_BYTE *)(v1 + 124) )
  {
    if ( pai[0] )
    {
      freeaddrinfo(pai[0]);
      pai[0] = nullptr;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 120) = v6;
    *(struct addrinfo **)v1 = pai[0];
  }
  qmutex_unlock(*(pthread_mutex_t **)(v1 + 8));
  qsem_post(*(_QWORD *)(v1 + 16));
  if ( v2 && !_InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFLL) )
  {
    (*(void (__fastcall **)(volatile signed __int64 *))(*v2 + 16))(v2);
    std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v2);
  }
  return 0;
}
