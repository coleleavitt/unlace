/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E2F0
// Address: 0x0006E2F0

//----- (0006E2F0) --------------------------------------------------------
int __fastcall sub_6E2F0(int *a1, int a2)
{
  unsigned int v3; // r1
  int v4; // r4
  int v5; // r6
  char *v6; // r6
  unsigned int *v7; // r0
  _DWORD *v8; // r4
  _DWORD *v9; // r5
  _DWORD *v10; // r6
  pthread_t v11; // r7
  int (__fastcall *v12)(int); // r4
  int v13; // r6
  int v14; // r5
  int v15; // r0
  int v16; // r5
  unsigned int *v17; // r5
  int v19; // r3
  struct addrinfo *v20; // r0
  int v21; // r7
  int v22; // r0
  const char *v23; // r2
  size_t v24; // r5
  void *v25; // r0
  _BYTE *v26; // r1
  unsigned int v27; // r0
  size_t v28; // r5
  size_t v29; // r4
  unsigned int v30; // r6
  size_t v31; // r2
  _BYTE *v32; // r1
  unsigned __int8 *v33; // r1
  int v34; // r2
  const char *v35; // r2
  int v36; // r4
  void *v37; // r1
  const char *v38; // r1
  const char *v39; // r3
  int v40; // r5
  unsigned int v41; // r5
  const char *v42; // r1
  struct addrinfo *ai; // [sp+14h] [bp-4B4h]
  unsigned int v44; // [sp+20h] [bp-4A8h]
  _DWORD *v45; // [sp+24h] [bp-4A4h]
  int v46; // [sp+28h] [bp-4A0h]
  int v47; // [sp+2Ch] [bp-49Ch]
  unsigned int *v49; // [sp+44h] [bp-484h]
  char *v50; // [sp+4Ch] [bp-47Ch] BYREF
  int v51; // [sp+50h] [bp-478h]
  int v52; // [sp+54h] [bp-474h]
  int v53; // [sp+58h] [bp-470h]
  int v54[8]; // [sp+5Ch] [bp-46Ch] BYREF
  char host[4]; // [sp+7Ch] [bp-44Ch] BYREF
  size_t v56; // [sp+80h] [bp-448h]
  unsigned int v57; // [sp+84h] [bp-444h]
  char v58; // [sp+47Bh] [bp-4Dh]
  void *serv; // [sp+47Ch] [bp-4Ch] BYREF
  int v60; // [sp+480h] [bp-48h]
  unsigned int v61; // [sp+484h] [bp-44h]
  char v62[40]; // [sp+4A0h] [bp-28h] BYREF

  bsd_signal(13, 1);
  v3 = *(_DWORD *)(a2 + 48);
  memset(&v54[3], 0, 20);
  v54[0] = 2;
  v54[1] = 0;
  v54[2] = 1;
  v4 = a2 + 4;
  v47 = a2;
  v5 = a2 + 44;
  v44 = v3;
  if ( v3 >= 2 )
    v4 = v5;
  qsnprintf(v62, 33, "%d");
  if ( *(_DWORD *)(v4 + 4) )
    v6 = *(char **)v4;
  else
    v6 = &byte_B3CBE;
  v7 = (unsigned int *)operator new(0x58u);
  *v7 = (unsigned int)&off_DAA24;
  v7[1] = 0;
  v7[2] = 0;
  v8 = v7 + 1;
  v49 = v7;
  v9 = v7 + 3;
  sub_6F0BA((int)(v7 + 3), v6, v62, v54);
  v10 = operator new(8u);
  *v10 = v9;
  v10[1] = v49;
  v46 = 0;
  _atomic_fetch_add_4(v8, 1);
  v11 = qthread_create((void *(*)(void *))sub_6E8F4, v10);
  if ( !v11 )
  {
    a1[11] = (int)"qthread_create";
    a1[12] = *(_DWORD *)_errno("qthread_create");
    v17 = (unsigned int *)v10[1];
    if ( v17 && !_atomic_fetch_add_4(v17 + 1, -1) )
    {
      (*(void (__fastcall **)(unsigned int *))(*v17 + 8))(v17);
      std::__shared_weak_count::__release_weak(v17);
    }
    operator delete(v10);
    v16 = 0;
    goto LABEL_19;
  }
  v45 = v8;
  v12 = *(int (__fastcall **)(int))(v47 + 84);
  v13 = *(_DWORD *)(v47 + 88);
  v14 = *(_DWORD *)(v47 + 92);
  while ( !qsem_wait(v49[5], v14) )
  {
    if ( !v12 || v12(v13) )
    {
      qmutex_lock((pthread_mutex_t *)v49[4]);
      *((_BYTE *)v49 + 84) = 1;
      qmutex_unlock((pthread_mutex_t *)v49[4]);
      qthread_free(v11);
      a1[11] = (int)"getaddrinfo";
      v15 = 62;
      if ( v12 )
        v15 = 125;
      a1[12] = v15;
      goto LABEL_14;
    }
  }
  qthread_join(v11);
  v19 = v49[20];
  a1[12] = v19;
  v20 = (struct addrinfo *)v49[3];
  v49[3] = 0;
  if ( v19 == 11 )
  {
    a1[11] = (int)"getaddrinfo";
    a1[12] = *(_DWORD *)_errno("getaddrinfo");
LABEL_14:
    v16 = 0;
    v8 = v45;
    goto LABEL_19;
  }
  v8 = v45;
  if ( v19 )
  {
    a1[11] = (int)"gai_strerror";
    v16 = 0;
    goto LABEL_19;
  }
  if ( !v20 )
    goto LABEL_34;
  ai = v20;
  v21 = (int)v20;
  while ( 1 )
  {
    v22 = getnameinfo(
            *(const struct sockaddr **)(v21 + 24),
            *(_DWORD *)(v21 + 16),
            host,
            0x2Fu,
            (char *)&serv,
            0x21u,
            0xAu);
    if ( !v22 )
      break;
    a1[11] = (int)"getnameinfo";
    a1[12] = *(_DWORD *)_errno(v22);
LABEL_32:
    v21 = *(_DWORD *)(v21 + 28);
    if ( !v21 )
      goto LABEL_33;
  }
  if ( !sub_6E03C((int)a1, *(_DWORD *)(v21 + 4), *(_DWORD *)(v21 + 8), *(_DWORD *)(v21 + 12)) )
    goto LABEL_32;
  if ( !sub_6E16C(a1, v21, v47 + 84) )
  {
    (*(void (__fastcall **)(int *, int))(*a1 + 36))(a1, -1);
    goto LABEL_32;
  }
  v46 = 1;
LABEL_33:
  v20 = ai;
LABEL_34:
  freeaddrinfo(v20);
  if ( v44 < 2 )
  {
    v16 = v46;
  }
  else
  {
    v16 = v46;
    if ( v46 == 1 )
    {
      v60 = 0;
      serv = nullptr;
      v61 = 0;
      v53 = 0;
      if ( *(_DWORD *)(v47 + 8) )
        v23 = *(const char **)(v47 + 4);
      else
        v23 = &byte_B3CBE;
      sub_1DA58((int)&serv, "CONNECT %s:%d HTTP/1.1\n", v23, *(unsigned __int16 *)(v47 + 16));
      v24 = *(_DWORD *)(v47 + 64);
      if ( v24 >= 2 )
      {
        v56 = 0;
        *(_DWORD *)host = 0;
        v57 = 0;
        v25 = qalloc_or_throw(v24);
        v57 = v24;
        *(_DWORD *)host = v25;
        qmemcpy(v25, *(const void **)(v47 + 60), v24);
        v56 = v24;
        v26 = *(_BYTE **)host;
        if ( v57 < v24 + 1 )
        {
          v26 = qvector_reserve((int)host, *(void **)host, v24 + 1, 1u);
          *(_DWORD *)host = v26;
        }
        v56 = v24 + 1;
        v26[v24 - 1] = 58;
        *(_BYTE *)(*(_DWORD *)host + v24) = 0;
        v27 = *(_DWORD *)(v47 + 76);
        v28 = v27 - 1;
        if ( v27 >= 2 )
        {
          v29 = v56 - 1;
          if ( !v56 )
            v29 = 0;
          v30 = v29 + v27;
          v31 = v29 + v28;
          v32 = *(_BYTE **)host;
          if ( v57 < v29 + v27 )
          {
            v32 = qvector_reserve((int)host, *(void **)host, v30, 1u);
            *(_DWORD *)host = v32;
            v31 = v29 + v28;
          }
          v56 = v30;
          v32[v31] = 0;
          qmemcpy((void *)(*(_DWORD *)host + v29), *(const void **)(v47 + 72), v28);
        }
        v51 = 0;
        v50 = nullptr;
        v52 = 0;
        if ( v56 )
          v33 = *(unsigned __int8 **)host;
        else
          v33 = (unsigned __int8 *)&byte_B3CBE;
        v34 = v56 - 1;
        if ( !v56 )
          v34 = 0;
        base64_encode(&v50, v33, v34);
        if ( v51 )
          v35 = v50;
        else
          v35 = &byte_B3CBE;
        sub_28C8C((int)&serv, "Proxy-Authorization: Basic %s\n", v35);
        if ( v50 )
        {
          v51 = 0;
          qfree(v50);
          v52 = 0;
          v50 = nullptr;
        }
        if ( *(_DWORD *)host )
        {
          v56 = 0;
          qfree(*(void **)host);
          v57 = 0;
          *(_DWORD *)host = 0;
        }
      }
      v36 = v60 - 1;
      if ( !v60 )
        v36 = 0;
      v37 = serv;
      if ( v61 < v36 + 2 )
      {
        v37 = qvector_reserve((int)&serv, serv, v36 + 2, 1u);
        serv = v37;
      }
      v60 = v36 + 2;
      *((_BYTE *)v37 + v36) = 10;
      *((_BYTE *)serv + v36 + 1) = 0;
      if ( (byte_E0546 & 0x10) != 0 )
      {
        v38 = &byte_B3CBE;
        v39 = &byte_B3CBE;
        if ( v60 )
          v39 = (const char *)serv;
        if ( *(_DWORD *)(v47 + 48) )
          v38 = *(const char **)(v47 + 44);
        sub_6DAE0(
          (int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
          v38,
          *(unsigned __int16 *)(v47 + 56),
          v39);
      }
      v40 = v60 - 1;
      if ( !v60 )
        v40 = 0;
      v8 = v45;
      if ( sub_6C868((int)a1, (int)serv, v40) != v40 )
        goto LABEL_86;
      v41 = 0;
      do
      {
        if ( sub_6C770((unsigned int)a1, (int)&v50, 1, 10000) < 1 )
        {
          v8 = v45;
          goto LABEL_86;
        }
        host[v41] = (char)v50;
        host[++v41] = 0;
      }
      while ( v41 < 0x3FF && !strstr(host, "\r\n\r\n") );
      v58 = 0;
      if ( (*(_DWORD *)debug & 0x100000) != 0 )
        sub_6DAE0((int)"Received:\n---\n%s\n---\n", host);
      v8 = v45;
      v16 = 1;
      if ( qsscanf((int)host, "HTTP/1.%d %d") != 2 || v53 != 200 )
      {
LABEL_86:
        if ( v53 == 407 )
        {
          v42 = "connecting to proxy (authentication required)";
        }
        else
        {
          v42 = "connecting to proxy";
          if ( v53 == 401 )
            v42 = "connecting to proxy (unauthorized)";
        }
        a1[11] = (int)v42;
        a1[12] = *(_DWORD *)_errno(401);
        v16 = 0;
      }
      if ( serv )
      {
        v60 = 0;
        qfree(serv);
        v61 = 0;
        serv = nullptr;
      }
    }
  }
LABEL_19:
  if ( !_atomic_fetch_add_4(v8, -1) )
  {
    (*(void (__fastcall **)(unsigned int *))(*v49 + 8))(v49);
    std::__shared_weak_count::__release_weak(v49);
  }
  return v16;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// 19574: using guessed type int __fastcall bsd_signal(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// DAA24: using guessed type _UNKNOWN *off_DAA24;
// E0546: using guessed type char byte_E0546;
