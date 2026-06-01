/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A77C0
// Address: 0x00000000000A77C0

//----- (00000000000A77C0) ----------------------------------------------------
__int64 __fastcall sub_A77C0(__int64 *ptr)
{
  unsigned __int64 *v2; // x19
  __int64 v3; // x23
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x9
  unsigned __int64 *v6; // x21
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x9
  const char *v9; // x0
  const char *v10; // x1
  int v11; // w20
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x9
  struct addrinfo *ai[2]; // [xsp+0h] [xbp-40h] BYREF

  ai[1] = *(struct addrinfo **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *ptr;
  v2 = (unsigned __int64 *)ptr[1];
  if ( v2 )
  {
    v4 = v2 + 1;
    do
      v5 = __ldxr(v4);
    while ( __stxr(v5 + 1, v4) );
    v6 = (unsigned __int64 *)ptr[1];
    if ( v6 )
    {
      v7 = v6 + 1;
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
      if ( !v8 )
      {
        (*(void (__fastcall **)(unsigned __int64 *))(*v6 + 16))(v6);
        std::__shared_weak_count::__release_weak(v6);
      }
    }
  }
  operator delete(ptr);
  ai[0] = nullptr;
  if ( *(_QWORD *)(v3 + 32) )
  {
    v9 = *(const char **)(v3 + 24);
    if ( *(_QWORD *)(v3 + 56) )
    {
LABEL_11:
      v10 = *(const char **)(v3 + 48);
      goto LABEL_14;
    }
  }
  else
  {
    v9 = &byte_F154B;
    if ( *(_QWORD *)(v3 + 56) )
      goto LABEL_11;
  }
  v10 = &byte_F154B;
LABEL_14:
  v11 = getaddrinfo(v9, v10, (const struct addrinfo *)(v3 + 72), ai);
  qmutex_lock(*(pthread_mutex_t **)(v3 + 8));
  if ( *(_BYTE *)(v3 + 124) )
  {
    if ( ai[0] )
    {
      freeaddrinfo(ai[0]);
      ai[0] = nullptr;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 120) = v11;
    *(struct addrinfo **)v3 = ai[0];
  }
  qmutex_unlock(*(pthread_mutex_t **)(v3 + 8));
  qsem_post(*(_QWORD *)(v3 + 16));
  if ( v2 )
  {
    v12 = v2 + 1;
    do
      v13 = __ldaxr(v12);
    while ( __stlxr(v13 - 1, v12) );
    if ( !v13 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v2 + 16))(v2);
      std::__shared_weak_count::__release_weak(v2);
    }
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
