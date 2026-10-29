/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97780
// Address: 0x00097780

//----- (00097780) --------------------------------------------------------
bool __cdecl sub_97780(_DWORD *a1, int a2)
{
  int v2; // edi
  char *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // edi
  unsigned __int8 (__cdecl *v9)(int); // esi
  volatile signed __int32 *v10; // edi
  int v11; // ecx
  bool result; // al
  volatile signed __int32 *v13; // edi
  bool v14; // si
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  char v18; // cl
  char *v19; // eax
  size_t v20; // edi
  char *v21; // eax
  unsigned int v22; // edi
  _BYTE *v23; // eax
  size_t v24; // esi
  unsigned int v25; // edi
  int v26; // eax
  unsigned __int8 *v27; // ecx
  char *v28; // eax
  void *v29; // eax
  int v30; // esi
  char *v31; // eax
  int v32; // esi
  unsigned int v33; // esi
  const char *v34; // edx
  const char *v35; // eax
  char v36; // si
  volatile signed __int32 *v37; // [esp+Ch] [ebp-4A0h]
  size_t v38; // [esp+10h] [ebp-49Ch]
  char v39; // [esp+10h] [ebp-49Ch]
  size_t v40; // [esp+10h] [ebp-49Ch]
  pthread_t v41; // [esp+14h] [ebp-498h]
  int v42; // [esp+14h] [ebp-498h]
  unsigned int v43; // [esp+1Ch] [ebp-490h]
  int v44; // [esp+20h] [ebp-48Ch] BYREF
  int v45; // [esp+24h] [ebp-488h]
  int v46; // [esp+28h] [ebp-484h]
  int v47; // [esp+2Ch] [ebp-480h]
  int v48[7]; // [esp+30h] [ebp-47Ch] BYREF
  int v49; // [esp+4Ch] [ebp-460h]
  char host[4]; // [esp+50h] [ebp-45Ch] BYREF
  size_t v51; // [esp+54h] [ebp-458h]
  unsigned int v52; // [esp+58h] [ebp-454h]
  char v53; // [esp+44Fh] [ebp-5Dh]
  void *serv; // [esp+450h] [ebp-5Ch] BYREF
  int v55; // [esp+454h] [ebp-58h]
  unsigned int v56; // [esp+458h] [ebp-54h]
  char v57[33]; // [esp+477h] [ebp-35h] BYREF
  unsigned int v58; // [esp+498h] [ebp-14h]

  v58 = __readgsdword(0x14u);
  bsd_signal(13, 1);
  v2 = a2 + 44;
  v43 = *(_DWORD *)(a2 + 48);
  if ( v43 < 2 )
    v2 = a2 + 4;
  memset(&v48[3], 0, 16);
  v49 = 0;
  v48[0] = 2;
  v48[1] = 0;
  v48[2] = 1;
  qsnprintf(v57, 33, "%d", *(unsigned __int16 *)(v2 + 12));
  if ( *(_DWORD *)(v2 + 4) )
    v3 = *(char **)v2;
  else
    v3 = byte_EF875;
  v4 = operator new(0x58u);
  v4[1] = 0;
  v4[2] = 0;
  *v4 = off_138BD8;
  v37 = v4;
  v5 = v4 + 3;
  sub_98CC0((int)(v4 + 3), v3, v57, (__int64 *)v48);
  v6 = operator new(8u);
  *v6 = v5;
  v6[1] = v37;
  _InterlockedIncrement(v37 + 1);
  v7 = qthread_create((void *(*)(void *))sub_980A0, v6);
  if ( !v7 )
  {
    a1[11] = "qthread_create";
    a1[12] = *(_DWORD *)__errno(0);
    v13 = (volatile signed __int32 *)v6[1];
    if ( v13 && !_InterlockedExchangeAdd(v13 + 1, 0xFFFFFFFF) )
    {
      (*(void (__cdecl **)(volatile signed __int32 *))(*v13 + 8))(v13);
      std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v13);
    }
    operator delete(v6);
    result = 0;
    v10 = v37;
    goto LABEL_19;
  }
  v41 = v7;
  v8 = *(_DWORD *)(a2 + 92);
  v9 = *(unsigned __int8 (__cdecl **)(int))(a2 + 84);
  v38 = *(_DWORD *)(a2 + 88);
  while ( !qsem_wait(*((_DWORD *)v37 + 5), v8) )
  {
    if ( !v9 || v9(v38) )
    {
      v10 = v37;
      qmutex_lock(*((pthread_mutex_t **)v37 + 4));
      *((_BYTE *)v37 + 84) = 1;
      qmutex_unlock(*((pthread_mutex_t **)v37 + 4));
      qthread_free(v41);
      a1[11] = "getaddrinfo";
      v11 = 125;
      if ( !v9 )
        v11 = 62;
      a1[12] = v11;
      goto LABEL_14;
    }
  }
  v10 = v37;
  qthread_join(v41);
  v15 = *((_DWORD *)v37 + 20);
  a1[12] = v15;
  v16 = *((_DWORD *)v37 + 3);
  *((_DWORD *)v37 + 3) = 0;
  if ( v15 == 11 )
  {
    a1[11] = "getaddrinfo";
    a1[12] = *(_DWORD *)__errno(a1);
LABEL_14:
    result = 0;
    goto LABEL_19;
  }
  if ( v15 )
  {
    a1[11] = "gai_strerror";
    goto LABEL_14;
  }
  if ( !v16 )
  {
    v39 = 0;
    goto LABEL_37;
  }
  v42 = v16;
  while ( getnameinfo(
            *(const struct sockaddr **)(v16 + 24),
            *(_DWORD *)(v16 + 16),
            host,
            0x2Fu,
            (char *)&serv,
            0x21u,
            0xAu) )
  {
    a1[11] = "getnameinfo";
    a1[12] = *(_DWORD *)__errno(v17);
LABEL_31:
    v16 = *(_DWORD *)(v16 + 28);
    if ( !v16 )
    {
      v39 = 0;
      goto LABEL_33;
    }
  }
  if ( !sub_973E0((int)a1, *(_DWORD *)(v16 + 4), *(_DWORD *)(v16 + 8), *(_DWORD *)(v16 + 12)) )
    goto LABEL_31;
  if ( !(unsigned __int8)sub_97550(a1, v16, a2 + 84) )
  {
    (*(void (__cdecl **)(_DWORD *, int))(*a1 + 36))(a1, -1);
    goto LABEL_31;
  }
  v39 = 1;
LABEL_33:
  v10 = v37;
  v16 = v42;
LABEL_37:
  freeaddrinfo((struct addrinfo *)v16);
  v18 = v39;
  if ( v43 >= 2 && v39 )
  {
    serv = nullptr;
    v55 = 0;
    v56 = 0;
    v47 = 0;
    if ( *(_DWORD *)(a2 + 8) )
      v19 = *(char **)(a2 + 4);
    else
      v19 = byte_EF875;
    sub_1F400((int)&serv, "CONNECT %s:%d HTTP/1.1\n", v19, *(unsigned __int16 *)(a2 + 16));
    v20 = *(_DWORD *)(a2 + 64);
    if ( v20 >= 2 )
    {
      *(_DWORD *)host = 0;
      v51 = 0;
      v52 = 0;
      *(_DWORD *)host = qalloc_or_throw(v20);
      v52 = v20;
      memcpy(*(void **)host, *(const void **)(a2 + 60), v20);
      v51 = v20;
      v21 = *(char **)host;
      if ( v52 < v20 + 1 )
      {
        v21 = (char *)qvector_reserve((int)host, *(void **)host, v20 + 1, 1u);
        *(_DWORD *)host = v21;
      }
      v51 = v20 + 1;
      v21[v20 - 1] = 58;
      *(_BYTE *)(*(_DWORD *)host + v20) = 0;
      v22 = *(_DWORD *)(a2 + 76);
      if ( v22 >= 2 )
      {
        v40 = v22 - 1;
        v23 = *(_BYTE **)host;
        v24 = v51 - 1;
        if ( !v51 )
          v24 = 0;
        v25 = v24 + v22;
        if ( v52 < v25 )
        {
          v23 = qvector_reserve((int)host, *(void **)host, v25, 1u);
          *(_DWORD *)host = v23;
        }
        v51 = v25;
        v23[v24 + v40] = 0;
        memcpy((void *)(*(_DWORD *)host + v24), *(const void **)(a2 + 72), v40);
      }
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v26 = v51;
      if ( v51 )
      {
        v26 = v51 - 1;
        v27 = *(unsigned __int8 **)host;
      }
      else
      {
        v27 = (unsigned __int8 *)byte_EF875;
      }
      base64_encode(&v44, v27, v26);
      if ( v45 )
        v28 = (char *)v44;
      else
        v28 = byte_EF875;
      sub_31370((int)&serv, "Proxy-Authorization: Basic %s\n", v28);
      if ( v44 )
      {
        v45 = 0;
        qfree((void *)v44);
        v44 = 0;
        v46 = 0;
      }
      if ( *(_DWORD *)host )
      {
        v51 = 0;
        qfree(*(void **)host);
        *(_DWORD *)host = 0;
        v52 = 0;
      }
    }
    v29 = serv;
    v30 = v55 - 1;
    if ( !v55 )
      v30 = 0;
    if ( v56 < v30 + 2 )
    {
      v29 = qvector_reserve((int)&serv, serv, v30 + 2, 1u);
      serv = v29;
    }
    v55 = v30 + 2;
    *((_BYTE *)v29 + v30) = 10;
    *((_BYTE *)serv + v30 + 1) = 0;
    if ( (debug & 0x100000) != 0 )
    {
      v31 = byte_EF875;
      if ( *(_DWORD *)(a2 + 48) )
        v31 = *(char **)(a2 + 44);
      sub_96C50((int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n", (char)v31);
    }
    v32 = v55 - 1;
    if ( !v55 )
      v32 = 0;
    v10 = v37;
    if ( sub_94F20((int)a1, (int)serv, v32) != v32 )
      goto LABEL_83;
    v33 = 1;
    do
    {
      if ( sub_94DD0((int)a1, (int)&v44, 1, 10000) <= 0 )
      {
        v10 = v37;
        goto LABEL_83;
      }
      host[v33 - 1] = v44;
      host[v33] = 0;
      if ( v33 > 0x3FE )
        break;
      ++v33;
    }
    while ( !strstr(host, "\r\n\r\n") );
    v53 = 0;
    if ( (debug & 0x100000) != 0 )
      sub_96C50((int)"Received:\n---\n%s\n---\n", (char)host);
    v10 = v37;
    if ( qsscanf((int)host, "HTTP/1.%d %d", (int)&v44) != 2 || (v18 = 1, v47 != 200) )
    {
LABEL_83:
      v34 = "connecting to proxy";
      if ( v47 == 407 )
        v34 = "connecting to proxy (authentication required)";
      v35 = "connecting to proxy (unauthorized)";
      if ( v47 != 401 )
        v35 = v34;
      a1[11] = v35;
      a1[12] = *(_DWORD *)__errno(a1);
      v18 = 0;
    }
    if ( serv )
    {
      v36 = v18;
      v55 = 0;
      qfree(serv);
      serv = nullptr;
      v56 = 0;
      v18 = v36;
    }
  }
  result = v18 != 0;
LABEL_19:
  if ( !_InterlockedExchangeAdd(v10 + 1, 0xFFFFFFFF) )
  {
    v14 = result;
    (*(void (__cdecl **)(volatile signed __int32 *))(*v10 + 8))(v10);
    std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v10);
    return v14;
  }
  return result;
}
// 97A82: variable 'v17' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 17DB0: using guessed type int __cdecl bsd_signal(_DWORD, _DWORD);
// 138BD8: using guessed type int (__cdecl *off_138BD8[2])(std::__shared_weak_count *);
// 13E340: using guessed type int debug;
