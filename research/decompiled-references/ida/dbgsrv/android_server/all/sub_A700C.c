/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A700C
// Address: 0x00000000000A700C

//----- (00000000000A700C) ----------------------------------------------------
__int64 __fastcall sub_A700C(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x29
  __int64 v5; // x19
  char *v6; // x22
  unsigned __int64 *v7; // x19
  unsigned __int64 *v8; // x26
  _QWORD *v9; // x22
  unsigned __int64 v10; // x8
  pthread_t v11; // x23
  __int64 (__fastcall *v12)(__int64); // x28
  int v13; // w24
  __int64 v14; // x25
  pthread_mutex_t *v15; // x0
  unsigned int v16; // w22
  int v17; // w8
  unsigned __int64 *v18; // x20
  unsigned __int64 *v19; // x8
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x8
  _BOOL8 v23; // x0
  int v24; // w8
  struct addrinfo *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x0
  const char *v28; // x2
  unsigned __int64 v29; // x22
  __int64 align; // x1
  __int64 v31; // x8
  size_t v32; // x22
  __int64 v33; // x1
  __int64 v34; // x24
  __int64 v35; // x23
  unsigned __int8 *v36; // x1
  unsigned __int64 v37; // x2
  const char *v38; // x2
  __int64 v39; // x1
  __int64 v40; // x23
  const char *v41; // x1
  const char *v42; // x3
  __int64 v43; // x21
  __int64 v44; // x0
  __int64 v45; // x24
  char *v46; // x9
  void *v47; // x0
  const char *v48; // x9
  const char *v49; // x8
  void *ptr; // [xsp+10h] [xbp-500h] BYREF
  __int64 v51; // [xsp+18h] [xbp-4F8h]
  __int64 v52; // [xsp+20h] [xbp-4F0h]
  int v53; // [xsp+2Ch] [xbp-4E4h] BYREF
  __int128 v54[3]; // [xsp+30h] [xbp-4E0h] BYREF
  pthread_mutex_t host[25]; // [xsp+60h] [xbp-4B0h] BYREF
  char v56; // [xsp+45Fh] [xbp-B1h]
  pthread_mutex_t serv; // [xsp+460h] [xbp-B0h] BYREF
  __int64 v58; // [xsp+4A8h] [xbp-68h]

  v58 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  v4 = *(_QWORD *)(a2 + 96);
  memset(v54, 0, sizeof(v54));
  if ( v4 >= 2 )
    v5 = a2 + 88;
  else
    v5 = a2 + 8;
  *(_QWORD *)&v54[0] = 2;
  DWORD2(v54[0]) = 1;
  qsnprintf((pthread_mutex_t *)((char *)&serv.__align + 36), 33, "%d", *(unsigned __int16 *)(v5 + 24));
  if ( *(_QWORD *)(v5 + 8) )
    v6 = *(char **)v5;
  else
    v6 = &byte_F154B;
  v7 = (unsigned __int64 *)operator new(0x98u);
  v7[1] = 0;
  v8 = v7 + 1;
  v7[2] = 0;
  *v7 = (unsigned __int64)off_15F388;
  sub_A82B0((__int64)(v7 + 3), v6, &serv.__size[36], v54);
  v9 = operator new(0x10u);
  *v9 = v7 + 3;
  v9[1] = v7;
  do
    v10 = __ldxr(v8);
  while ( __stxr(v10 + 1, v8) );
  v11 = qthread_create((void *(*)(void *))sub_A77C0, v9);
  if ( !v11 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(0);
    v18 = (unsigned __int64 *)v9[1];
    if ( v18 )
    {
      v19 = v18 + 1;
      do
        v20 = __ldaxr(v19);
      while ( __stlxr(v20 - 1, v19) );
      if ( !v20 )
      {
        (*(void (__fastcall **)(unsigned __int64 *))(*v18 + 16))(v18);
        std::__shared_weak_count::__release_weak(v18);
      }
    }
    operator delete(v9);
    v16 = 0;
    goto LABEL_24;
  }
  v12 = *(__int64 (__fastcall **)(__int64))(a2 + 168);
  v13 = *(_DWORD *)(a2 + 184);
  v14 = *(_QWORD *)(a2 + 176);
  while ( !qsem_wait(v7[5], v13) )
  {
    if ( !v12 || (v12(v14) & 1) != 0 )
    {
      qmutex_lock((pthread_mutex_t *)v7[4]);
      v15 = (pthread_mutex_t *)v7[4];
      *((_BYTE *)v7 + 148) = 1;
      qmutex_unlock(v15);
      qthread_free(v11);
      v16 = 0;
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      if ( v12 )
        v17 = 125;
      else
        v17 = 62;
      goto LABEL_17;
    }
  }
  v23 = qthread_join(v11);
  v24 = *((_DWORD *)v7 + 36);
  *(_DWORD *)(a1 + 96) = v24;
  v25 = (struct addrinfo *)v7[3];
  v7[3] = 0;
  if ( v24 == 11 )
  {
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    v17 = *(_DWORD *)__errno(v23);
    v16 = 0;
LABEL_17:
    *(_DWORD *)(a1 + 96) = v17;
    goto LABEL_24;
  }
  if ( v24 )
  {
    v16 = 0;
    *(_QWORD *)(a1 + 88) = "gai_strerror";
    goto LABEL_24;
  }
  if ( !v25 )
  {
LABEL_39:
    v16 = 0;
    goto LABEL_40;
  }
  v26 = (__int64)v25;
  while ( 1 )
  {
    while ( 1 )
    {
      v27 = getnameinfo(
              *(const struct sockaddr **)(v26 + 32),
              *(_DWORD *)(v26 + 16),
              (char *)host,
              0x2Fu,
              (char *)&serv,
              0x21u,
              10);
      if ( !(_DWORD)v27 )
        break;
      *(_QWORD *)(a1 + 88) = "getnameinfo";
      *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v27);
      v26 = *(_QWORD *)(v26 + 40);
      if ( !v26 )
        goto LABEL_39;
    }
    if ( (sub_A6C1C(a1, *(_DWORD *)(v26 + 4), *(_DWORD *)(v26 + 8), *(_DWORD *)(v26 + 12)) & 1) == 0 )
      goto LABEL_38;
    if ( (sub_A6DC0(a1, v26, a2 + 168) & 1) != 0 )
      break;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
LABEL_38:
    v26 = *(_QWORD *)(v26 + 40);
    if ( !v26 )
      goto LABEL_39;
  }
  v16 = 1;
LABEL_40:
  freeaddrinfo(v25);
  if ( v4 >= 2 && ((v16 ^ 1) & 1) == 0 )
  {
    memset(&serv, 0, 24);
    v53 = 0;
    if ( *(_QWORD *)(a2 + 16) )
      v28 = *(const char **)(a2 + 8);
    else
      v28 = &byte_F154B;
    sub_3C748((__int64)&serv, "CONNECT %s:%d HTTP/1.1\n", v28, *(unsigned __int16 *)(a2 + 32));
    v29 = *(_QWORD *)(a2 + 128);
    if ( v29 >= 2 )
    {
      memset(host, 0, 24);
      host[0].__align = (__int64)qalloc_or_throw(v29);
      *(&host[0].__align + 2) = v29;
      memcpy((void *)host[0].__align, *(const void **)(a2 + 120), v29);
      align = host[0].__align;
      *(&host[0].__align + 1) = v29;
      if ( *(&host[0].__align + 2) < v29 + 1 )
      {
        align = (__int64)qvector_reserve(host, (void *)host[0].__align, v29 + 1, 1u);
        host[0].__align = align;
      }
      *(&host[0].__align + 1) = v29 + 1;
      *(_BYTE *)(align + v29 - 1) = 58;
      *(_BYTE *)(host[0].__align + v29) = 0;
      v31 = *(_QWORD *)(a2 + 152);
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v31 != 1 )
        {
          v33 = host[0].__align;
          if ( *(&host[0].__align + 1) )
            v34 = *(&host[0].__align + 1) - 1;
          else
            v34 = 0;
          v35 = v34 + v31;
          if ( *(&host[0].__align + 2) < (unsigned __int64)(v34 + v31) )
          {
            v33 = (__int64)qvector_reserve(host, (void *)host[0].__align, v34 + v31, 1u);
            host[0].__align = v33;
          }
          *(&host[0].__align + 1) = v35;
          *(_BYTE *)(v33 + v34 + v32) = 0;
          memcpy((void *)(host[0].__align + v34), *(const void **)(a2 + 144), v32);
        }
      }
      ptr = nullptr;
      v51 = 0;
      v52 = 0;
      if ( *(&host[0].__align + 1) )
        v36 = (unsigned __int8 *)host[0].__align;
      else
        v36 = (unsigned __int8 *)&byte_F154B;
      if ( *(&host[0].__align + 1) )
        v37 = *(&host[0].__align + 1) - 1;
      else
        v37 = 0;
      base64_encode((pthread_mutex_t *)&ptr, v36, v37);
      if ( v51 )
        v38 = (const char *)ptr;
      else
        v38 = &byte_F154B;
      sub_4C730(&serv, "Proxy-Authorization: Basic %s\n", v38);
      if ( ptr )
      {
        v51 = 0;
        qfree(ptr);
        ptr = nullptr;
        v52 = 0;
      }
      if ( host[0].__align )
      {
        *(&host[0].__align + 1) = 0;
        qfree((void *)host[0].__align);
        host[0].__align = 0;
        *(&host[0].__align + 2) = 0;
      }
    }
    v39 = serv.__align;
    if ( *(&serv.__align + 1) )
      v40 = *(&serv.__align + 1) - 1;
    else
      v40 = 0;
    if ( *(&serv.__align + 2) < (unsigned __int64)(v40 + 2) )
    {
      v39 = (__int64)qvector_reserve(&serv, (void *)serv.__align, v40 + 2, 1u);
      serv.__align = v39;
    }
    *(&serv.__align + 1) = v40 + 2;
    *(_BYTE *)(v39 + v40) = 10;
    *(_BYTE *)(serv.__align + v40 + 1) = 0;
    if ( (byte_168DDE & 0x10) != 0 )
    {
      if ( *(_QWORD *)(a2 + 96) )
        v41 = *(const char **)(a2 + 88);
      else
        v41 = &byte_F154B;
      if ( *(&serv.__align + 1) )
        v42 = (const char *)serv.__align;
      else
        v42 = &byte_F154B;
      sub_A64CC(
        (__int64)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v41,
        *(unsigned __int16 *)(a2 + 112),
        v42);
    }
    if ( *(&serv.__align + 1) )
      v43 = *(&serv.__align + 1) - 1;
    else
      v43 = 0;
    v44 = sub_A4AE8(a1, serv.__align, v43);
    if ( v44 == v43 )
    {
      v45 = 0;
      while ( 1 )
      {
        v44 = sub_A49E4(a1, (__int64)&ptr, 1, 10000);
        if ( v44 < 1 )
          break;
        v46 = (char *)host + v45;
        *v46 = (char)ptr;
        v46[1] = 0;
        if ( (unsigned __int64)(v45 + 1) <= 0x3FE )
        {
          ++v45;
          if ( !strstr((const char *)host, "\r\n\r\n") )
            continue;
        }
        v56 = 0;
        if ( (byte_168DDE & 0x10) != 0 )
          sub_A64CC((__int64)"Received:\n---\n%s\n---\n", (const char *)host);
        v44 = qsscanf((const char *)host, "HTTP/1.%d %d", &ptr, &v53);
        if ( (_DWORD)v44 != 2 || v53 != 200 )
          break;
        v16 = 1;
        v47 = (void *)serv.__align;
        if ( serv.__align )
          goto LABEL_104;
        goto LABEL_24;
      }
    }
    v48 = "connecting to proxy";
    if ( v53 == 407 )
      v48 = "connecting to proxy (authentication required)";
    if ( v53 == 401 )
      v49 = "connecting to proxy (unauthorized)";
    else
      v49 = v48;
    *(_QWORD *)(a1 + 88) = v49;
    v16 = 0;
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v44);
    v47 = (void *)serv.__align;
    if ( serv.__align )
    {
LABEL_104:
      *(&serv.__align + 1) = 0;
      qfree(v47);
      serv.__align = 0;
      *(&serv.__align + 2) = 0;
    }
  }
  do
LABEL_24:
    v21 = __ldaxr(v8);
  while ( __stlxr(v21 - 1, v8) );
  if ( !v21 )
  {
    (*(void (__fastcall **)(unsigned __int64 *))(*v7 + 16))(v7);
    std::__shared_weak_count::__release_weak(v7);
  }
  return v16;
}
// 0: using guessed type int dword_0;
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// F154B: using guessed type char byte_F154B;
// 15F388: using guessed type __int64 (__fastcall *off_15F388[3])();
// 168DDE: using guessed type char byte_168DDE;
