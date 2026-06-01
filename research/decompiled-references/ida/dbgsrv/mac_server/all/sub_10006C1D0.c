/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006C1D0
// Address: 0x000000010006C1D0

//----- (000000010006C1D0) ----------------------------------------------------
__int64 __fastcall sub_10006C1D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // rbx
  const char *v5; // r14
  std::__shared_weak_count *v6; // rbx
  _QWORD *v7; // r13
  _opaque_pthread_t *v8; // r12
  unsigned int v9; // r13d
  unsigned __int8 (__fastcall *v10)(__int64); // r15
  __int64 v11; // r14
  int v12; // ecx
  char *v13; // r12
  std::__shared_weak_count *v14; // rbx
  int v16; // eax
  addrinfo *v17; // rdi
  __int64 v18; // r13
  const char *v19; // rdx
  size_t v20; // r14
  unsigned __int8 *v21; // rsi
  signed __int64 v22; // rdx
  const char *v23; // rdx
  __int64 v24; // r15
  _BYTE *v25; // rax
  const char *v26; // rsi
  __int64 v27; // r14
  const char *v28; // r15
  __int64 v29; // r14
  int v30; // eax
  const char *v31; // rdx
  unsigned __int64 v32; // [rsp+8h] [rbp-518h]
  __int128 v35; // [rsp+30h] [rbp-4F0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-4E0h]
  int v37; // [rsp+4Ch] [rbp-4D4h] BYREF
  std::__shared_weak_count *v38; // [rsp+50h] [rbp-4D0h]
  std::__shared_weak_count *v39; // [rsp+58h] [rbp-4C8h]
  __int64 v40; // [rsp+60h] [rbp-4C0h] BYREF
  __int128 v41; // [rsp+68h] [rbp-4B8h]
  __int128 v42; // [rsp+78h] [rbp-4A8h]
  __int64 v43; // [rsp+88h] [rbp-498h]
  char __s1[16]; // [rsp+90h] [rbp-490h] BYREF
  size_t v45; // [rsp+A0h] [rbp-480h]
  char v46; // [rsp+48Fh] [rbp-91h]
  char v47[16]; // [rsp+490h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+4A0h] [rbp-80h]
  char v49[48]; // [rsp+4C0h] [rbp-60h] BYREF

  signal(13, (void (__cdecl *)(int))1);
  v2 = *(_QWORD *)(a2 + 96);
  v3 = a2 + 8;
  v4 = 8;
  if ( v2 >= 2 )
  {
    v4 = 88;
    v3 = a2 + 88;
  }
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v40 = 2;
  LODWORD(v41) = 1;
  qsnprintf(v49, 33, "%d", *(unsigned __int16 *)(v3 + 24));
  if ( *(_QWORD *)(v3 + 8) )
    v5 = *(const char **)(a2 + v4);
  else
    v5 = _s1;
  v6 = (std::__shared_weak_count *)operator new(0x98u);
  v32 = v2;
  *(_OWORD *)&v6->__shared_owners_ = 0;
  v6->__vftable = (std::__shared_weak_count_vtbl *)&off_1000AA7B0;
  sub_10006D5D0((__int64)&v6[1], v5, v49, (__int128 *)&v40);
  v38 = v6 + 1;
  v39 = v6;
  v7 = operator new(0x10u);
  *v7 = v6 + 1;
  v7[1] = v6;
  _InterlockedIncrement64(&v6->__shared_owners_);
  v8 = qthread_create((void *(__cdecl *)(void *))sub_10006C990, v7);
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *__error();
    v14 = (std::__shared_weak_count *)v7[1];
    if ( v14 && !_InterlockedExchangeAdd64(&v14->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
    {
      ((void (__fastcall *)(std::__shared_weak_count *))v14->__on_zero_shared)(v14);
      std::__shared_weak_count::__release_weak(v14);
    }
    operator delete(v7);
    v6 = v39;
    LODWORD(v13) = 0;
    if ( v39 )
      goto LABEL_19;
    return (unsigned int)v13;
  }
  v9 = *(_DWORD *)(a2 + 184);
  v10 = *(unsigned __int8 (__fastcall **)(__int64))(a2 + 168);
  v11 = *(_QWORD *)(a2 + 176);
  while ( !(unsigned __int8)qsem_wait(v6[1].__shared_weak_owners_, (__int64 *)v9) )
  {
    if ( !v10 || v10(v11) )
    {
      qmutex_lock((pthread_mutex_t *)v6[1].__shared_owners_);
      BYTE4(v6[6].__vftable) = 1;
      qmutex_unlock((pthread_mutex_t *)v6[1].__shared_owners_);
      qthread_free(v8);
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      v12 = 89;
      if ( !v10 )
        v12 = 101;
      *(_DWORD *)(a1 + 96) = v12;
      goto LABEL_14;
    }
  }
  qthread_join(v8);
  v16 = (int)v6[6].__vftable;
  *(_DWORD *)(a1 + 96) = v16;
  v17 = (addrinfo *)v6[1].__vftable;
  v6[1].__vftable = nullptr;
  if ( v16 == 11 )
  {
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    *(_DWORD *)(a1 + 96) = *__error();
LABEL_14:
    LODWORD(v13) = 0;
    goto LABEL_19;
  }
  if ( v16 )
  {
    *(_QWORD *)(a1 + 88) = "gai_strerror";
    goto LABEL_14;
  }
  if ( !v17 )
  {
    LODWORD(v13) = 0;
    goto LABEL_36;
  }
  v13 = v47;
  v18 = (__int64)v17;
  while ( getnameinfo(*(const sockaddr **)(v18 + 32), *(_DWORD *)(v18 + 16), __s1, 0x2Fu, v47, 0x21u, 10) )
  {
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__error();
LABEL_27:
    v18 = *(_QWORD *)(v18 + 40);
    if ( !v18 )
    {
      LODWORD(v13) = 0;
      goto LABEL_36;
    }
  }
  if ( !sub_10006BE30(a1, *(_DWORD *)(v18 + 4), *(_DWORD *)(v18 + 8), *(_DWORD *)(v18 + 12)) )
    goto LABEL_27;
  if ( !(unsigned __int8)sub_10006BFC0(a1, v18, a2 + 168) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
    goto LABEL_27;
  }
  LOBYTE(v13) = 1;
LABEL_36:
  freeaddrinfo(v17);
  if ( !((v32 < 2) | (unsigned __int8)v13 ^ 1) )
  {
    *(_OWORD *)v47 = 0;
    v48 = 0;
    v37 = 0;
    if ( *(_QWORD *)(a2 + 16) )
      v19 = *(const char **)(a2 + 8);
    else
      v19 = _s1;
    sub_100002D00((__int64)v47, "CONNECT %s:%d HTTP/1.1\n", v19, *(unsigned __int16 *)(a2 + 32));
    v20 = *(_QWORD *)(a2 + 128);
    if ( v20 >= 2 )
    {
      *(_OWORD *)__s1 = 0;
      v45 = 0;
      *(_QWORD *)__s1 = qalloc_or_throw(v20);
      v45 = v20;
      memcpy(*(void **)__s1, *(const void **)(a2 + 120), v20);
      *(_QWORD *)&__s1[8] = v20;
      sub_10006CB20((__int64)__s1, 58);
      sub_10003E280((void **)__s1, a2 + 144);
      v35 = 0;
      v36 = 0;
      if ( *(_QWORD *)&__s1[8] )
        v21 = *(unsigned __int8 **)__s1;
      else
        v21 = (unsigned __int8 *)_s1;
      v22 = 0;
      if ( *(_QWORD *)&__s1[8] )
        v22 = *(_QWORD *)&__s1[8] - 1LL;
      base64_encode((__int64)&v35, v21, v22);
      if ( *((_QWORD *)&v35 + 1) )
        v23 = (const char *)v35;
      else
        v23 = _s1;
      sub_10002DCA0((__int64)v47, "Proxy-Authorization: Basic %s\n", v23);
      sub_100006E30((void **)&v35);
      sub_100006E30((void **)__s1);
    }
    v24 = 0;
    if ( *(_QWORD *)&v47[8] )
      v24 = *(_QWORD *)&v47[8] - 1LL;
    v25 = *(_BYTE **)v47;
    if ( v48 < v24 + 2 )
    {
      v25 = qvector_reserve((__int64)v47, *(void **)v47, v24 + 2, 1u);
      *(_QWORD *)v47 = v25;
    }
    *(_QWORD *)&v47[8] = v24 + 2;
    v25[v24] = 10;
    *(_BYTE *)(*(_QWORD *)v47 + v24 + 1) = 0;
    v13 = debug;
    if ( (debug[2] & 0x10) != 0 )
    {
      v26 = _s1;
      if ( *(_QWORD *)(a2 + 96) )
        v26 = *(const char **)(a2 + 88);
      sub_1000139E0(
        (int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v26,
        *(unsigned __int16 *)(a2 + 112));
    }
    v27 = 0;
    if ( *(_QWORD *)&v47[8] )
      v27 = *(_QWORD *)&v47[8] - 1LL;
    v28 = "connecting to proxy";
    if ( sub_10006AC70(a1, *(__int64 *)v47, v27) != v27 )
    {
      v29 = a1;
      goto LABEL_71;
    }
    v29 = a1;
    if ( sub_10006CB90(__s1, a1) <= 0 )
      goto LABEL_71;
    v46 = 0;
    if ( (debug[2] & 0x10) != 0 )
      sub_1000139E0((int)"Received:\n---\n%s\n---\n", __s1);
    v30 = qsscanf(__s1, "HTTP/1.%d %d", &v35, &v37) ^ 2;
    LOBYTE(v13) = 1;
    if ( v30 | v37 ^ 0xC8 )
    {
      v31 = "connecting to proxy";
      if ( v37 == 407 )
        v31 = "connecting to proxy (authentication required)";
      v28 = "connecting to proxy (unauthorized)";
      if ( v37 != 401 )
        v28 = v31;
LABEL_71:
      *(_QWORD *)(v29 + 88) = v28;
      *(_DWORD *)(v29 + 96) = *__error();
      LODWORD(v13) = 0;
    }
    if ( *(_QWORD *)v47 )
    {
      *(_QWORD *)&v47[8] = 0;
      qfree(*(void **)v47);
    }
  }
LABEL_19:
  if ( !_InterlockedExchangeAdd64(&v6->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
  {
    ((void (__fastcall *)(std::__shared_weak_count *))v6->__on_zero_shared)(v6);
    std::__shared_weak_count::__release_weak(v6);
  }
  return (unsigned int)v13;
}
// 1000AA7B0: using guessed type __int64 (__fastcall *off_1000AA7B0)();
