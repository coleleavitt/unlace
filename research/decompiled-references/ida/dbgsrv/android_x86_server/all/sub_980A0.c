/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_980A0
// Address: 0x000980A0

//----- (000980A0) --------------------------------------------------------
int __cdecl sub_980A0(int *ptr)
{
  int *v1; // ecx
  int v2; // edi
  volatile signed __int32 *v3; // eax
  volatile signed __int32 *v4; // esi
  const char *v5; // eax
  const char *v6; // ecx
  int v7; // esi
  volatile signed __int32 *v9; // [esp+10h] [ebp-1Ch]
  struct addrinfo *pai[6]; // [esp+14h] [ebp-18h] BYREF

  v1 = ptr;
  pai[1] = (struct addrinfo *)__readgsdword(0x14u);
  v2 = *ptr;
  v3 = (volatile signed __int32 *)ptr[1];
  v9 = v3;
  if ( v3 )
  {
    _InterlockedIncrement(v3 + 1);
    v4 = (volatile signed __int32 *)ptr[1];
    if ( v4 )
    {
      if ( !_InterlockedExchangeAdd(v4 + 1, 0xFFFFFFFF) )
      {
        (*(void (__cdecl **)(volatile signed __int32 *))(*v4 + 8))(v4);
        std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v4);
        v1 = ptr;
      }
    }
  }
  operator delete(v1);
  pai[0] = nullptr;
  v5 = byte_EF875;
  v6 = byte_EF875;
  if ( *(_DWORD *)(v2 + 16) )
    v6 = *(const char **)(v2 + 12);
  if ( *(_DWORD *)(v2 + 28) )
    v5 = *(const char **)(v2 + 24);
  v7 = getaddrinfo(v6, v5, (const struct addrinfo *)(v2 + 36), pai);
  qmutex_lock(*(pthread_mutex_t **)(v2 + 4));
  if ( *(_BYTE *)(v2 + 72) )
  {
    if ( pai[0] )
    {
      freeaddrinfo(pai[0]);
      pai[0] = nullptr;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 68) = v7;
    *(struct addrinfo **)v2 = pai[0];
  }
  qmutex_unlock(*(pthread_mutex_t **)(v2 + 4));
  qsem_post(*(_DWORD *)(v2 + 8));
  if ( v9 && !_InterlockedExchangeAdd(v9 + 1, 0xFFFFFFFF) )
  {
    (*(void (__cdecl **)(volatile signed __int32 *))(*v9 + 8))(v9);
    std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v9);
  }
  return 0;
}
