__int64 __fastcall sub_7A1560(__int64 a1, __int64 a2)
{
  const char *v2; // r15
  int v4; // r8d
  int v5; // r9d
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rbx
  size_t v10; // r12
  void *v11; // rax
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // r12
  void *v15; // rax
  __m128i si128; // xmm0
  __m128i v17; // xmm0
  _QWORD *v18; // r13
  pthread_t v19; // r12
  unsigned int v20; // r15d
  unsigned __int8 (__fastcall *v21)(char *); // r13
  unsigned int v22; // r15d
  signed __int32 v23; // eax
  struct addrinfo *v25; // rsi
  int v26; // eax
  __int64 v27; // r12
  int (__fastcall *v28)(__int64, int); // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  volatile signed __int32 *v31; // rax
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdx
  signed __int32 v34; // eax
  __int64 v35; // rax
  const char *v36; // rdx
  int v37; // ecx
  size_t v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rcx
  size_t v41; // r8
  size_t v42; // rdx
  char *v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // r12
  size_t v46; // r9
  __int64 v47; // rdx
  const char *v48; // rsi
  __int64 v49; // r12
  unsigned __int64 v50; // rdx
  _BYTE *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // r12
  const char *v54; // rax
  int v55; // r8d
  int v56; // r9d
  char ai; // [rsp+0h] [rbp-570h]
  struct addrinfo *aia; // [rsp+0h] [rbp-570h]
  unsigned __int64 v59; // [rsp+8h] [rbp-568h]
  size_t v60; // [rsp+8h] [rbp-568h]
  unsigned __int64 v61; // [rsp+10h] [rbp-560h]
  unsigned __int64 v62; // [rsp+10h] [rbp-560h]
  char *serv; // [rsp+28h] [rbp-548h]
  char *serva; // [rsp+28h] [rbp-548h]
  int v66; // [rsp+3Ch] [rbp-534h] BYREF
  void *v67; // [rsp+40h] [rbp-530h] BYREF
  __int128 v68; // [rsp+48h] [rbp-528h]
  void *v69; // [rsp+60h] [rbp-510h] BYREF
  __int128 v70; // [rsp+68h] [rbp-508h]
  void *ptr; // [rsp+80h] [rbp-4F0h] BYREF
  __int128 v72; // [rsp+88h] [rbp-4E8h]
  __m128i v73[3]; // [rsp+A0h] [rbp-4D0h] BYREF
  char s[48]; // [rsp+D0h] [rbp-4A0h] BYREF
  char v75[48]; // [rsp+100h] [rbp-470h] BYREF
  char host[1022]; // [rsp+130h] [rbp-440h] BYREF
  _BYTE v77[10]; // [rsp+52Eh] [rbp-42h] BYREF
  unsigned __int64 v78; // [rsp+538h] [rbp-38h]

  v2 = haystack;
  v78 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  v6 = *(_QWORD *)(a2 + 96);
  v7 = a2 + 8;
  v73[0].m128i_i32[0] = 2;
  *(__m128i *)((char *)v73 + 4) = 0;
  if ( v6 >= 2 )
    v7 = a2 + 88;
  memset((char *)v73[1].m128i_i64 + 4, 0, 28);
  v8 = *(unsigned __int16 *)(v7 + 24);
  v59 = v6;
  v73[0].m128i_i32[2] = 1;
  qsnprintf((int)s, 33, (int)"%d", v8, v4, v5, ai);
  if ( *(_QWORD *)(v7 + 8) )
    v2 = *(const char **)v7;
  v9 = operator new(0x90u);
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 8) = 0x100000001LL;
  *(_QWORD *)v9 = off_2B108B8;
  *(_QWORD *)(v9 + 40) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  if ( v2 )
  {
    v10 = strlen(v2);
    v11 = (void *)qvector_reserve(v9 + 40, 0, v10 + 1, 1);
    *(_QWORD *)(v9 + 40) = v11;
    *(_QWORD *)(v9 + 48) = v10 + 1;
    memmove(v11, v2, v10);
    *(_BYTE *)(*(_QWORD *)(v9 + 40) + v10) = 0;
  }
  *(_QWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 72) = 0;
  v12 = strlen(s);
  v13 = v12 + 1;
  v14 = v12;
  v15 = (void *)qvector_reserve(v9 + 64, 0, v12 + 1, 1);
  *(_QWORD *)(v9 + 64) = v15;
  *(_QWORD *)(v9 + 72) = v13;
  memmove(v15, s, v14);
  *(_BYTE *)(*(_QWORD *)(v9 + 64) + v14) = 0;
  si128 = _mm_load_si128(v73);
  *(_DWORD *)(v9 + 136) = 0;
  *(__m128i *)(v9 + 88) = si128;
  v17 = _mm_load_si128(&v73[1]);
  *(_BYTE *)(v9 + 140) = 0;
  *(__m128i *)(v9 + 104) = v17;
  *(__m128i *)(v9 + 120) = _mm_load_si128(&v73[2]);
  *(_QWORD *)(v9 + 24) = qmutex_create();
  *(_QWORD *)(v9 + 32) = qsem_create(nullptr, 0);
  v18 = (_QWORD *)operator new(0x10u);
  v18[1] = v9;
  *v18 = v9 + 16;
  if ( v9 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    else
      ++*(_DWORD *)(v9 + 8);
  }
  v19 = qthread_create((void *(*)(void *))sub_7A1210, v18);
  if ( !v19 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    if ( v18 )
    {
      v31 = (volatile signed __int32 *)v18[1];
      v32 = v31;
      if ( v31 )
      {
        v33 = v31 + 2;
        if ( *((_QWORD *)v31 + 1) == 0x100000001LL )
        {
          v35 = *(_QWORD *)v31;
          *((_QWORD *)v32 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD *, volatile signed __int32 *))(v35 + 16))(
            v32,
            v18,
            v33);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 24LL))(v32);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v34 = _InterlockedExchangeAdd(v33, 0xFFFFFFFF);
          }
          else
          {
            v34 = *((_DWORD *)v31 + 2);
            *((_DWORD *)v32 + 2) = v34 - 1;
          }
          if ( v34 == 1 )
            sub_420480(v32);
        }
      }
      operator delete(v18, 0x10u);
    }
    goto LABEL_15;
  }
  v20 = *(_DWORD *)(a2 + 184);
  v21 = *(unsigned __int8 (__fastcall **)(char *))(a2 + 168);
  serv = *(char **)(a2 + 176);
  if ( !(unsigned __int8)qsem_wait(*(_QWORD *)(v9 + 32), v20) )
  {
    if ( v21 )
    {
      while ( !v21(serv) )
      {
        if ( (unsigned __int8)qsem_wait(*(_QWORD *)(v9 + 32), v20) )
          goto LABEL_25;
      }
    }
    qmutex_lock(*(_QWORD *)(v9 + 24));
    *(_BYTE *)(v9 + 140) = 1;
    qmutex_unlock(*(_QWORD *)(v9 + 24));
    qthread_free(v19);
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    *(_DWORD *)(a1 + 96) = v21 == nullptr ? 62 : 125;
LABEL_15:
    v22 = 0;
    goto LABEL_16;
  }
LABEL_25:
  qthread_join(v19);
  v25 = *(struct addrinfo **)(v9 + 16);
  v26 = *(_DWORD *)(v9 + 136);
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(a1 + 96) = v26;
  LOBYTE(aia) = (_BYTE)v25;
  if ( v26 )
  {
    if ( v26 == -11 )
    {
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      *(_DWORD *)(a1 + 96) = *__errno_location();
    }
    else
    {
      *(_QWORD *)(a1 + 88) = "gai_strerror";
    }
    goto LABEL_15;
  }
  v27 = (__int64)v25;
  if ( !v25 )
  {
    freeaddrinfo(nullptr);
    goto LABEL_15;
  }
  while ( getnameinfo(*(const struct sockaddr **)(v27 + 24), *(_DWORD *)(v27 + 16), host, 0x2Fu, v75, 0x21u, 3) )
  {
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_29:
    v27 = *(_QWORD *)(v27 + 40);
    if ( !v27 )
    {
      freeaddrinfo(v25);
      goto LABEL_15;
    }
  }
  if ( !(unsigned __int8)sub_7A0B40(a1, *(_DWORD *)(v27 + 4), *(_DWORD *)(v27 + 8), *(_DWORD *)(v27 + 12)) )
    goto LABEL_29;
  v22 = sub_7A0FB0(a1, v27, a2 + 168);
  if ( !(_BYTE)v22 )
  {
    v28 = *(int (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
    if ( v28 == sub_7A0310 )
    {
      v29 = *(_QWORD *)(a1 + 56);
      if ( v29 != -1 )
      {
        close(v29);
        *(_QWORD *)(a1 + 56) = -1;
      }
    }
    else
    {
      v28(a1, -1);
    }
    goto LABEL_29;
  }
  freeaddrinfo(v25);
  if ( v59 > 1 )
  {
    v67 = nullptr;
    v66 = 0;
    v68 = 0;
    sub_3573A0((char **)&v67);
    v38 = *(_QWORD *)(a2 + 128);
    if ( v38 > 1 )
    {
      v39 = *(_QWORD *)(a2 + 128);
      v69 = nullptr;
      v70 = 0;
      v69 = (void *)qalloc_or_throw(v39, "CONNECT %s:%d HTTP/1.1\n", v36, v37);
      *((_QWORD *)&v70 + 1) = v38;
      memcpy(v69, *(const void **)(a2 + 120), v38);
      *(_QWORD *)&v70 = v38;
      v42 = v38 + 1;
      v43 = (char *)v69;
      if ( *((_QWORD *)&v70 + 1) < v38 + 1 )
      {
        v69 = (void *)qvector_reserve(&v69, v69, v42, 1);
        v42 = v38 + 1;
        v43 = (char *)v69;
      }
      *(_QWORD *)&v70 = v42;
      v43[v38 - 1] = 58;
      *((_BYTE *)v69 + v38) = 0;
      v44 = *(_QWORD *)(a2 + 152);
      if ( v44 )
      {
        v41 = v44 - 1;
        if ( v44 != 1 )
        {
          v45 = v70;
          v46 = v44 - 1;
          if ( (_QWORD)v70 )
          {
            v45 = v70 - 1;
            v46 = v41 + v70 - 1;
            v44 += v70 - 1;
          }
          if ( *((_QWORD *)&v70 + 1) < v44 )
          {
            aia = (struct addrinfo *)v41;
            v60 = v46;
            v62 = v44;
            v69 = (void *)qvector_reserve(&v69, v69, v44, 1);
            v41 = (size_t)aia;
            v46 = v60;
            v44 = v62;
          }
          *(_QWORD *)&v70 = v44;
          *((_BYTE *)v69 + v46) = 0;
          memcpy((char *)v69 + v45, *(const void **)(a2 + 144), v41);
        }
      }
      v47 = v70;
      ptr = nullptr;
      v48 = haystack;
      v72 = 0;
      if ( (_QWORD)v70 )
      {
        v48 = (const char *)v69;
        v47 = v70 - 1;
      }
      base64_encode(&ptr, v48, v47, v40, v41);
      sub_357520((__int64 *)&v67);
      if ( ptr )
      {
        *(_QWORD *)&v72 = 0;
        qfree(ptr);
      }
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(v69);
      }
    }
    v49 = v68;
    v50 = 2;
    if ( (_QWORD)v68 )
    {
      v50 = v68 + 1;
      v49 = v68 - 1;
    }
    v51 = v67;
    if ( *((_QWORD *)&v68 + 1) < v50 )
    {
      v61 = v50;
      v67 = (void *)qvector_reserve(&v67, v67, v50, 1);
      v50 = v61;
      v51 = v67;
    }
    *(_QWORD *)&v68 = v50;
    v51[v49] = 10;
    *((_BYTE *)v67 + v49 + 1) = 0;
    if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      sub_383DA0();
    v52 = v68;
    v53 = 0;
    if ( (_QWORD)v68 )
    {
      v52 = v68 - 1;
      v53 = v68 - 1;
    }
    if ( sub_79DC40(a1, (__int64)v67, v52) == v53 )
    {
      serva = host;
      while ( sub_79DB40(a1, (__int64)&ptr, 1, 10000) > 0 )
      {
        *(_WORD *)serva = (unsigned __int8)ptr;
        if ( v77 != serva )
        {
          ++serva;
          if ( !strstr(host, "\r\n\r\n") )
            continue;
        }
        v77[1] = 0;
        if ( (*(_DWORD *)&debug & 0x100000) != 0 )
          sub_383DA0();
        if ( (unsigned int)qsscanf((int)host, (int)"HTTP/1.%d %d", (int)&ptr, (int)&v66, v55, v56, (char)aia) != 2
          || v66 != 200 )
        {
          break;
        }
        goto LABEL_81;
      }
    }
    v54 = "connecting to proxy (unauthorized)";
    if ( v66 != 401 )
    {
      v54 = "connecting to proxy (authentication required)";
      if ( v66 != 407 )
        v54 = "connecting to proxy";
    }
    *(_QWORD *)(a1 + 88) = v54;
    v22 = 0;
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_81:
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
  }
LABEL_16:
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 8) == 0x100000001LL )
    {
      v30 = *(_QWORD *)v9;
      *(_QWORD *)(v9 + 8) = 0;
      (*(void (__fastcall **)(__int64))(v30 + 16))(v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF);
      }
      else
      {
        v23 = *(_DWORD *)(v9 + 8);
        *(_DWORD *)(v9 + 8) = v23 - 1;
      }
      if ( v23 == 1 )
        sub_420480((volatile signed __int32 *)v9);
    }
  }
  return v22;
}

