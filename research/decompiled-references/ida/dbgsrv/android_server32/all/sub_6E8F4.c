/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E8F4
// Address: 0x0006E8F4

//----- (0006E8F4) --------------------------------------------------------
int __fastcall sub_6E8F4(int *ptr)
{
  int v2; // r5
  unsigned int *v3; // r7
  const char *v4; // r1
  const char *v5; // r0
  int v6; // r6
  unsigned int *v8; // [sp+8h] [bp-Ch]
  struct addrinfo *pai; // [sp+Ch] [bp-8h] BYREF

  v2 = *ptr;
  v8 = (unsigned int *)ptr[1];
  if ( v8 )
  {
    _atomic_fetch_add_4(v8 + 1, 1);
    v3 = (unsigned int *)ptr[1];
    if ( v3 )
    {
      if ( !_atomic_fetch_add_4(v3 + 1, -1) )
      {
        (*(void (__fastcall **)(unsigned int *))(*v3 + 8))(v3);
        std::__shared_weak_count::__release_weak(v3);
      }
    }
  }
  operator delete(ptr);
  pai = nullptr;
  v4 = &byte_B3CBE;
  v5 = &byte_B3CBE;
  if ( *(_DWORD *)(v2 + 16) )
    v5 = *(const char **)(v2 + 12);
  if ( *(_DWORD *)(v2 + 28) )
    v4 = *(const char **)(v2 + 24);
  v6 = getaddrinfo(v5, v4, (const struct addrinfo *)(v2 + 36), &pai);
  qmutex_lock(*(pthread_mutex_t **)(v2 + 4));
  if ( *(_BYTE *)(v2 + 72) )
  {
    if ( pai )
    {
      freeaddrinfo(pai);
      pai = nullptr;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 68) = v6;
    *(_DWORD *)v2 = pai;
  }
  qmutex_unlock(*(pthread_mutex_t **)(v2 + 4));
  qsem_post(*(_DWORD *)(v2 + 8));
  if ( v8 && !_atomic_fetch_add_4(v8 + 1, -1) )
  {
    (*(void (__fastcall **)(unsigned int *))(*v8 + 8))(v8);
    std::__shared_weak_count::__release_weak(v8);
  }
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
