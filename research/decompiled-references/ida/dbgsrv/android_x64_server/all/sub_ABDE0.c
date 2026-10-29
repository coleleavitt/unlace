/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABDE0
// Address: 0x00000000000ABDE0

//----- (00000000000ABDE0) ----------------------------------------------------
__int64 __fastcall sub_ABDE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  const char *v5; // rbx
  std::__shared_weak_count *v6; // r13
  volatile signed __int64 *v7; // r14
  _QWORD *v8; // rbx
  pthread_t v9; // r12
  int v10; // ebx
  unsigned __int8 (__fastcall *v11)(__int64); // r14
  __int64 v12; // rbp
  int v13; // ecx
  void *v14; // rbx
  volatile signed __int64 *v15; // rbp
  int v17; // eax
  struct addrinfo *v18; // rdi
  __int64 v19; // r12
  const struct sockaddr *v20; // rdi
  const char *v21; // rdx
  size_t v22; // rbp
  char *v23; // rax
  __int64 v24; // rbp
  size_t v25; // r12
  __int64 v26; // rbx
  _BYTE *v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rdx
  unsigned __int8 *v30; // rsi
  const char *v31; // rdx
  __int64 v32; // rbp
  _BYTE *v33; // rax
  const char *v34; // rsi
  __int64 v35; // rbx
  char *v36; // rdi
  unsigned __int64 v37; // rbp
  const char *v38; // rdx
  const char *v39; // rax
  struct addrinfo *v41; // [rsp+18h] [rbp-500h]
  unsigned __int64 v42; // [rsp+28h] [rbp-4F0h]
  void *ptr[2]; // [rsp+30h] [rbp-4E8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-4D8h]
  int v45; // [rsp+4Ch] [rbp-4CCh] BYREF
  __int128 v46[2]; // [rsp+50h] [rbp-4C8h] BYREF
  __int128 v47; // [rsp+70h] [rbp-4A8h]
  char host[16]; // [rsp+80h] [rbp-498h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-488h]
  char v50; // [rsp+47Fh] [rbp-99h]
  char serv[16]; // [rsp+480h] [rbp-98h] BYREF
  unsigned __int64 v52; // [rsp+490h] [rbp-88h]
  char v53[48]; // [rsp+4B0h] [rbp-68h] BYREF
  unsigned __int64 v54; // [rsp+4E0h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  v3 = a2 + 88;
  v4 = *(_QWORD *)(a2 + 96);
  if ( v4 < 2 )
    v3 = a2 + 8;
  v47 = 0;
  v46[1] = 0;
  *(_QWORD *)&v46[0] = 2;
  *((_QWORD *)&v46[0] + 1) = 1;
  qsnprintf(v53, 33, "%d", *(unsigned __int16 *)(v3 + 24));
  v42 = v4;
  if ( *(_QWORD *)(v3 + 8) )
    v5 = *(const char **)v3;
  else
    v5 = s1;
  v6 = (std::__shared_weak_count *)operator new(0x98u);
  *(_OWORD *)((char *)v6 + 8) = 0;
  *(_QWORD *)v6 = off_14F788;
  sub_AD230((__int64)v6 + 24, v5, v53, v46);
  v7 = (volatile signed __int64 *)((char *)v6 + 8);
  v8 = operator new(0x10u);
  *v8 = (char *)v6 + 24;
  v8[1] = v6;
  _InterlockedAdd64((volatile signed __int64 *)v6 + 1, 1u);
  v9 = qthread_create((void *(*)(void *))sub_AC770, v8);
  if ( !v9 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(sub_AC770);
    v15 = (volatile signed __int64 *)v8[1];
    if ( v15 && !_InterlockedExchangeAdd64(v15 + 1, 0xFFFFFFFFFFFFFFFFLL) )
    {
      (*(void (__fastcall **)(volatile signed __int64 *))(*v15 + 16))(v15);
      std::__shared_weak_count::__release_weak((std::__shared_weak_count *)v15);
    }
    operator delete(v8);
    goto LABEL_19;
  }
  v10 = *(_DWORD *)(a2 + 184);
  v11 = *(unsigned __int8 (__fastcall **)(__int64))(a2 + 168);
  v12 = *(_QWORD *)(a2 + 176);
  while ( !qsem_wait(*((_QWORD *)v6 + 5), v10) )
  {
    if ( !v11 || v11(v12) )
    {
      qmutex_lock(*((pthread_mutex_t **)v6 + 4));
      *((_BYTE *)v6 + 148) = 1;
      qmutex_unlock(*((pthread_mutex_t **)v6 + 4));
      qthread_free(v9);
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      v13 = 125;
      if ( !v11 )
        v13 = 62;
      *(_DWORD *)(a1 + 96) = v13;
      goto LABEL_14;
    }
  }
  qthread_join(v9);
  v17 = *((_DWORD *)v6 + 36);
  *(_DWORD *)(a1 + 96) = v17;
  v18 = *((struct addrinfo **)v6 + 3);
  *((_QWORD *)v6 + 3) = 0;
  if ( v17 == 11 )
  {
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v18);
LABEL_14:
    LODWORD(v14) = 0;
    v7 = (volatile signed __int64 *)((char *)v6 + 8);
    goto LABEL_20;
  }
  v7 = (volatile signed __int64 *)((char *)v6 + 8);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 88) = "gai_strerror";
LABEL_19:
    LODWORD(v14) = 0;
    goto LABEL_20;
  }
  if ( !v18 )
  {
    LODWORD(v14) = 0;
    goto LABEL_38;
  }
  v14 = serv;
  v41 = v18;
  v19 = (__int64)v18;
  while ( 1 )
  {
    v20 = *(const struct sockaddr **)(v19 + 32);
    if ( !getnameinfo(v20, *(_DWORD *)(v19 + 16), host, 0x2Fu, serv, 0x21u, 10) )
      break;
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v20);
LABEL_32:
    v19 = *(_QWORD *)(v19 + 40);
    if ( !v19 )
    {
      LODWORD(v14) = 0;
      goto LABEL_34;
    }
  }
  if ( !sub_ABA30(a1, *(_DWORD *)(v19 + 4), *(_DWORD *)(v19 + 8), *(_DWORD *)(v19 + 12)) )
    goto LABEL_32;
  if ( !(unsigned __int8)sub_ABBB0(a1, v19, a2 + 168) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
    goto LABEL_32;
  }
  LOBYTE(v14) = 1;
LABEL_34:
  v18 = v41;
LABEL_38:
  freeaddrinfo(v18);
  if ( v42 >= 2 && (_BYTE)v14 )
  {
    *(_OWORD *)serv = 0;
    v52 = 0;
    v45 = 0;
    if ( *(_QWORD *)(a2 + 16) )
      v21 = *(const char **)(a2 + 8);
    else
      v21 = s1;
    sub_3BBA0((__int64)serv, "CONNECT %s:%d HTTP/1.1\n", v21, *(unsigned __int16 *)(a2 + 32));
    v22 = *(_QWORD *)(a2 + 128);
    if ( v22 >= 2 )
    {
      *(_OWORD *)host = 0;
      v49 = 0;
      *(_QWORD *)host = qalloc_or_throw(v22);
      v49 = v22;
      memcpy(*(void **)host, *(const void **)(a2 + 120), v22);
      *(_QWORD *)&host[8] = v22;
      v23 = *(char **)host;
      if ( v49 < v22 + 1 )
      {
        v23 = (char *)qvector_reserve((__int64)host, *(char **)host, v22 + 1, 1u);
        *(_QWORD *)host = v23;
      }
      *(_QWORD *)&host[8] = v22 + 1;
      v23[v22 - 1] = 58;
      *(_BYTE *)(*(_QWORD *)host + v22) = 0;
      v24 = *(_QWORD *)(a2 + 152);
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v24 != 1 )
        {
          v26 = *(_QWORD *)&host[8] - 1LL;
          if ( !*(_QWORD *)&host[8] )
            v26 = 0;
          v27 = *(_BYTE **)host;
          v28 = v26 + v24;
          if ( v49 < v28 )
          {
            v27 = qvector_reserve((__int64)host, *(char **)host, v28, 1u);
            *(_QWORD *)host = v27;
          }
          *(_QWORD *)&host[8] = v28;
          v27[v26 + v25] = 0;
          memcpy((void *)(*(_QWORD *)host + v26), *(const void **)(a2 + 144), v25);
        }
      }
      *(_OWORD *)ptr = 0;
      v44 = 0;
      v29 = *(_QWORD *)&host[8];
      if ( *(_QWORD *)&host[8] )
      {
        v29 = *(_QWORD *)&host[8] - 1LL;
        v30 = *(unsigned __int8 **)host;
      }
      else
      {
        v30 = (unsigned __int8 *)s1;
      }
      base64_encode((__int64)ptr, v30, v29);
      if ( ptr[1] )
        v31 = (const char *)ptr[0];
      else
        v31 = s1;
      sub_4E030((__int64)serv, "Proxy-Authorization: Basic %s\n", v31);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v44 = 0;
      }
      if ( *(_QWORD *)host )
      {
        *(_QWORD *)&host[8] = 0;
        qfree(*(void **)host);
        *(_QWORD *)host = 0;
        v49 = 0;
      }
    }
    v32 = *(_QWORD *)&serv[8] - 1LL;
    if ( !*(_QWORD *)&serv[8] )
      v32 = 0;
    v33 = *(_BYTE **)serv;
    if ( v52 < v32 + 2 )
    {
      v33 = qvector_reserve((__int64)serv, *(char **)serv, v32 + 2, 1u);
      *(_QWORD *)serv = v33;
    }
    *(_QWORD *)&serv[8] = v32 + 2;
    v33[v32] = 10;
    *(_BYTE *)(*(_QWORD *)serv + v32 + 1) = 0;
    if ( (debug & 0x100000) != 0 )
    {
      v34 = s1;
      if ( *(_QWORD *)(a2 + 96) )
        v34 = *(const char **)(a2 + 88);
      sub_AB2A0(
        (int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v34,
        *(unsigned __int16 *)(a2 + 112));
    }
    v35 = *(_QWORD *)&serv[8] - 1LL;
    if ( !*(_QWORD *)&serv[8] )
      v35 = 0;
    v36 = (char *)a1;
    if ( sub_A97E0(a1, *(__int64 *)serv, v35) != v35 )
      goto LABEL_85;
    v37 = 1;
    v14 = ptr;
    do
    {
      v36 = (char *)a1;
      if ( sub_A96E0(a1, (__int64)ptr, 1, 10000) <= 0 )
      {
        v7 = (volatile signed __int64 *)((char *)v6 + 8);
        goto LABEL_85;
      }
      host[v37 - 1] = (char)ptr[0];
      host[v37] = 0;
      if ( v37 > 0x3FE )
        break;
      ++v37;
    }
    while ( !strstr(host, "\r\n\r\n") );
    v50 = 0;
    if ( (debug & 0x100000) != 0 )
      sub_AB2A0((int)"Received:\n---\n%s\n---\n", host);
    v36 = host;
    v7 = (volatile signed __int64 *)((char *)v6 + 8);
    if ( qsscanf(host, "HTTP/1.%d %d", ptr, &v45) != 2 || (LOBYTE(v14) = 1, v45 != 200) )
    {
LABEL_85:
      v38 = "connecting to proxy";
      if ( v45 == 407 )
        v38 = "connecting to proxy (authentication required)";
      v39 = "connecting to proxy (unauthorized)";
      if ( v45 != 401 )
        v39 = v38;
      *(_QWORD *)(a1 + 88) = v39;
      *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v36);
      LODWORD(v14) = 0;
    }
    if ( *(_QWORD *)serv )
    {
      *(_QWORD *)&serv[8] = 0;
      qfree(*(void **)serv);
      *(_QWORD *)serv = 0;
      v52 = 0;
    }
  }
  LOBYTE(v14) = (_BYTE)v14 != 0;
LABEL_20:
  if ( !_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFLL) )
  {
    (*(void (__fastcall **)(std::__shared_weak_count *))(*(_QWORD *)v6 + 16LL))(v6);
    std::__shared_weak_count::__release_weak(v6);
  }
  return (unsigned int)v14;
}
// 0: using guessed type int dword_0;
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 14F788: using guessed type __int64 (__fastcall *off_14F788[2])(std::__shared_weak_count *this);
// 158B2C: using guessed type int debug;
