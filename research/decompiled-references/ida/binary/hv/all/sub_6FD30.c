__int64 __fastcall sub_6FD30(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // r15
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // ecx
  __int64 v17; // rbx
  size_t v18; // r12
  void *v19; // rax
  size_t v20; // rax
  size_t v21; // r15
  size_t v22; // r12
  void *v23; // rax
  __m128i si128; // xmm0
  __m128i v25; // xmm0
  __m128 v26; // xmm0
  _QWORD *v27; // r13
  pthread_t v28; // r12
  unsigned int v29; // r15d
  unsigned __int8 (__fastcall *v30)(char *); // r13
  unsigned int v31; // r15d
  signed __int32 v32; // eax
  struct addrinfo *v34; // rsi
  int v35; // eax
  __int64 v36; // r12
  double v37; // xmm4_8
  double v38; // xmm5_8
  int (__fastcall *v39)(__int64, int); // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  volatile signed __int32 *v42; // rax
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rdx
  signed __int32 v45; // eax
  __int64 v46; // rax
  __m128 v47; // xmm0
  __int64 v48; // r8
  __int64 v49; // r9
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  size_t v52; // r12
  __int64 v53; // rdi
  __int64 v54; // rcx
  size_t v55; // r8
  size_t v56; // rdx
  char *v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // r12
  size_t v60; // r9
  __int64 v61; // rdx
  const char *v62; // rsi
  __int64 v63; // r12
  unsigned __int64 v64; // rdx
  _BYTE *v65; // rsi
  const char *v66; // rcx
  const char *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // r12
  const char *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __m128 v75; // xmm4
  __m128 v76; // xmm5
  struct addrinfo *ai; // [rsp+0h] [rbp-570h]
  unsigned __int64 v78; // [rsp+8h] [rbp-568h]
  size_t v79; // [rsp+8h] [rbp-568h]
  unsigned __int64 v80; // [rsp+10h] [rbp-560h]
  unsigned __int64 v81; // [rsp+10h] [rbp-560h]
  char *serv; // [rsp+28h] [rbp-548h]
  char *serva; // [rsp+28h] [rbp-548h]
  int v85; // [rsp+3Ch] [rbp-534h] BYREF
  void *v86; // [rsp+40h] [rbp-530h] BYREF
  __int128 v87; // [rsp+48h] [rbp-528h]
  void *v88; // [rsp+60h] [rbp-510h] BYREF
  __int128 v89; // [rsp+68h] [rbp-508h]
  void *ptr; // [rsp+80h] [rbp-4F0h] BYREF
  __int128 v91; // [rsp+88h] [rbp-4E8h]
  __m128i v92[3]; // [rsp+A0h] [rbp-4D0h] BYREF
  char s[48]; // [rsp+D0h] [rbp-4A0h] BYREF
  char v94[48]; // [rsp+100h] [rbp-470h] BYREF
  char host[1022]; // [rsp+130h] [rbp-440h] BYREF
  _BYTE v96[10]; // [rsp+52Eh] [rbp-42h] BYREF
  unsigned __int64 v97; // [rsp+538h] [rbp-38h]

  v10 = haystack;
  v97 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  v14 = *(_QWORD *)(a2 + 96);
  v15 = a2 + 8;
  v92[0].m128i_i32[0] = 2;
  *(__m128i *)((char *)v92 + 4) = 0;
  if ( v14 >= 2 )
    v15 = a2 + 88;
  memset((char *)v92[1].m128i_i64 + 4, 0, 28);
  v16 = *(unsigned __int16 *)(v15 + 24);
  v78 = v14;
  v92[0].m128i_i32[2] = 1;
  sub_9A810((unsigned int)s, 33, (unsigned int)"%d", v16, v12, v13);
  if ( *(_QWORD *)(v15 + 8) )
    v10 = *(const char **)v15;
  v17 = operator new(0x90u);
  *(_QWORD *)(v17 + 16) = 0;
  *(_QWORD *)(v17 + 8) = 0x100000001LL;
  *(_QWORD *)v17 = off_163518;
  *(_QWORD *)(v17 + 40) = 0;
  *(_OWORD *)(v17 + 48) = 0;
  if ( v10 )
  {
    v18 = strlen(v10);
    v19 = (void *)sub_96080(v17 + 40, 0, v18 + 1, 1);
    *(_QWORD *)(v17 + 40) = v19;
    *(_QWORD *)(v17 + 48) = v18 + 1;
    memmove(v19, v10, v18);
    *(_BYTE *)(*(_QWORD *)(v17 + 40) + v18) = 0;
  }
  *(_QWORD *)(v17 + 64) = 0;
  *(_OWORD *)(v17 + 72) = 0;
  v20 = strlen(s);
  v21 = v20 + 1;
  v22 = v20;
  v23 = (void *)sub_96080(v17 + 64, 0, v20 + 1, 1);
  *(_QWORD *)(v17 + 64) = v23;
  *(_QWORD *)(v17 + 72) = v21;
  memmove(v23, s, v22);
  *(_BYTE *)(*(_QWORD *)(v17 + 64) + v22) = 0;
  si128 = _mm_load_si128(v92);
  *(_DWORD *)(v17 + 136) = 0;
  *(__m128i *)(v17 + 88) = si128;
  v25 = _mm_load_si128(&v92[1]);
  *(_BYTE *)(v17 + 140) = 0;
  *(__m128i *)(v17 + 104) = v25;
  v26 = (__m128)_mm_load_si128(&v92[2]);
  *(__m128 *)(v17 + 120) = v26;
  *(_QWORD *)(v17 + 24) = sub_98180();
  *(_QWORD *)(v17 + 32) = sub_97AE0(nullptr, 0);
  v27 = (_QWORD *)operator new(0x10u);
  v27[1] = v17;
  *v27 = v17 + 16;
  if ( v17 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
    else
      ++*(_DWORD *)(v17 + 8);
  }
  v28 = sub_98360((void *(*)(void *))sub_6F9E0, v27);
  if ( !v28 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    if ( v27 )
    {
      v42 = (volatile signed __int32 *)v27[1];
      v43 = v42;
      if ( v42 )
      {
        v44 = v42 + 2;
        if ( *((_QWORD *)v42 + 1) == 0x100000001LL )
        {
          v46 = *(_QWORD *)v42;
          *((_QWORD *)v43 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD *, volatile signed __int32 *))(v46 + 16))(
            v43,
            v27,
            v44);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 24LL))(v43);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v45 = _InterlockedExchangeAdd(v44, 0xFFFFFFFF);
          }
          else
          {
            v45 = *((_DWORD *)v42 + 2);
            *((_DWORD *)v43 + 2) = v45 - 1;
          }
          if ( v45 == 1 )
            sub_6F910(v43);
        }
      }
      operator delete(v27, 0x10u);
    }
    goto LABEL_15;
  }
  v29 = *(_DWORD *)(a2 + 184);
  v30 = *(unsigned __int8 (__fastcall **)(char *))(a2 + 168);
  serv = *(char **)(a2 + 176);
  if ( !(unsigned __int8)sub_97F40(*(_QWORD *)(v17 + 32), v29) )
  {
    if ( v30 )
    {
      while ( !v30(serv) )
      {
        if ( (unsigned __int8)sub_97F40(*(_QWORD *)(v17 + 32), v29) )
          goto LABEL_25;
      }
    }
    sub_98400(*(_QWORD *)(v17 + 24));
    *(_BYTE *)(v17 + 140) = 1;
    sub_98450(*(_QWORD *)(v17 + 24));
    j__pthread_detach(v28);
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    *(_DWORD *)(a1 + 96) = v30 == nullptr ? 62 : 125;
LABEL_15:
    v31 = 0;
    goto LABEL_16;
  }
LABEL_25:
  sub_97AC0(v28);
  v34 = *(struct addrinfo **)(v17 + 16);
  v35 = *(_DWORD *)(v17 + 136);
  *(_QWORD *)(v17 + 16) = 0;
  *(_DWORD *)(a1 + 96) = v35;
  LOBYTE(ai) = (_BYTE)v34;
  if ( v35 )
  {
    if ( v35 == -11 )
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
  v36 = (__int64)v34;
  if ( !v34 )
  {
    freeaddrinfo(nullptr);
    goto LABEL_15;
  }
  while ( getnameinfo(*(const struct sockaddr **)(v36 + 24), *(_DWORD *)(v36 + 16), host, 0x2Fu, v94, 0x21u, 3) )
  {
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_29:
    v36 = *(_QWORD *)(v36 + 40);
    if ( !v36 )
    {
      freeaddrinfo(v34);
      goto LABEL_15;
    }
  }
  if ( !(unsigned __int8)sub_6F240(
                           a1,
                           *(_DWORD *)(v36 + 4),
                           *(_DWORD *)(v36 + 8),
                           *(_DWORD *)(v36 + 12),
                           v26,
                           a4,
                           a5,
                           a6,
                           v37,
                           v38,
                           a9,
                           a10) )
    goto LABEL_29;
  v31 = sub_6F6B0(a1, v36, a2 + 168);
  if ( !(_BYTE)v31 )
  {
    v39 = *(int (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
    if ( v39 == sub_6EA10 )
    {
      v40 = *(_QWORD *)(a1 + 56);
      if ( v40 != -1 )
      {
        close(v40);
        *(_QWORD *)(a1 + 56) = -1;
      }
    }
    else
    {
      v39(a1, -1);
    }
    goto LABEL_29;
  }
  freeaddrinfo(v34);
  if ( v78 > 1 )
  {
    v47 = 0;
    v86 = nullptr;
    v85 = 0;
    v87 = 0;
    sub_17D80((char **)&v86);
    v52 = *(_QWORD *)(a2 + 128);
    if ( v52 > 1 )
    {
      v53 = *(_QWORD *)(a2 + 128);
      v88 = nullptr;
      v89 = 0;
      v88 = (void *)sub_96030(v53);
      *((_QWORD *)&v89 + 1) = v52;
      memcpy(v88, *(const void **)(a2 + 120), v52);
      *(_QWORD *)&v89 = v52;
      v56 = v52 + 1;
      v57 = (char *)v88;
      if ( *((_QWORD *)&v89 + 1) < v52 + 1 )
      {
        v88 = (void *)sub_96080(&v88, v88, v56, 1);
        v56 = v52 + 1;
        v57 = (char *)v88;
      }
      *(_QWORD *)&v89 = v56;
      v57[v52 - 1] = 58;
      *((_BYTE *)v88 + v52) = 0;
      v58 = *(_QWORD *)(a2 + 152);
      if ( v58 )
      {
        v55 = v58 - 1;
        if ( v58 != 1 )
        {
          v59 = v89;
          v60 = v58 - 1;
          if ( (_QWORD)v89 )
          {
            v59 = v89 - 1;
            v60 = v55 + v89 - 1;
            v58 += v89 - 1;
          }
          if ( *((_QWORD *)&v89 + 1) < v58 )
          {
            ai = (struct addrinfo *)v55;
            v79 = v60;
            v81 = v58;
            v88 = (void *)sub_96080(&v88, v88, v58, 1);
            v55 = (size_t)ai;
            v60 = v79;
            v58 = v81;
          }
          *(_QWORD *)&v89 = v58;
          *((_BYTE *)v88 + v60) = 0;
          memcpy((char *)v88 + v59, *(const void **)(a2 + 144), v55);
        }
      }
      v61 = v89;
      v47 = 0;
      ptr = nullptr;
      v62 = haystack;
      v91 = 0;
      if ( (_QWORD)v89 )
      {
        v62 = (const char *)v88;
        v61 = v89 - 1;
      }
      sub_8E370(&ptr, v62, v61, v54, v55);
      sub_21D30((__int64 *)&v86);
      if ( ptr )
      {
        *(_QWORD *)&v91 = 0;
        j__free(ptr);
      }
      if ( v88 )
      {
        *(_QWORD *)&v89 = 0;
        j__free(v88);
      }
    }
    v63 = v87;
    v64 = 2;
    if ( (_QWORD)v87 )
    {
      v64 = v87 + 1;
      v63 = v87 - 1;
    }
    v65 = v86;
    if ( *((_QWORD *)&v87 + 1) < v64 )
    {
      v80 = v64;
      v86 = (void *)sub_96080(&v86, v86, v64, 1);
      v64 = v80;
      v65 = v86;
    }
    *(_QWORD *)&v87 = v64;
    v65[v63] = 10;
    *((_BYTE *)v86 + v63 + 1) = 0;
    if ( (dword_1671A4 & 0x100000) != 0 )
    {
      v66 = haystack;
      if ( (_QWORD)v87 )
        v66 = (const char *)v86;
      v67 = haystack;
      if ( *(_QWORD *)(a2 + 96) )
        v67 = *(const char **)(a2 + 88);
      sub_2A380(
        (int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        (__int64)v67,
        *(unsigned __int16 *)(a2 + 112),
        (__int64)v66,
        v48,
        v49,
        v47,
        a4,
        a5,
        a6,
        v50,
        v51,
        a9,
        a10,
        (char)ai);
    }
    v68 = v87;
    v69 = 0;
    if ( (_QWORD)v87 )
    {
      v68 = v87 - 1;
      v69 = v87 - 1;
    }
    if ( sub_6CD00(a1, (__int64)v86, v68) == v69 )
    {
      serva = host;
      while ( sub_6CC00(a1, (__int64)&ptr, 1, 10000) > 0 )
      {
        *(_WORD *)serva = (unsigned __int8)ptr;
        if ( v96 != serva )
        {
          ++serva;
          if ( !strstr(host, "\r\n\r\n") )
            continue;
        }
        v96[1] = 0;
        if ( (dword_1671A4 & 0x100000) != 0 )
          sub_2A380(
            (int)"Received:\n---\n%s\n---\n",
            (__int64)host,
            v71,
            v72,
            v73,
            v74,
            v47,
            a4,
            a5,
            a6,
            v75,
            v76,
            a9,
            a10,
            (char)ai);
        if ( (unsigned int)sub_9A8C0(
                             (unsigned int)host,
                             (unsigned int)"HTTP/1.%d %d",
                             (unsigned int)&ptr,
                             (unsigned int)&v85,
                             v73,
                             v74) != 2
          || v85 != 200 )
        {
          break;
        }
        goto LABEL_85;
      }
    }
    v70 = "connecting to proxy (unauthorized)";
    if ( v85 != 401 )
    {
      v70 = "connecting to proxy (authentication required)";
      if ( v85 != 407 )
        v70 = "connecting to proxy";
    }
    *(_QWORD *)(a1 + 88) = v70;
    v31 = 0;
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_85:
    if ( v86 )
    {
      *(_QWORD *)&v87 = 0;
      j__free(v86);
    }
  }
LABEL_16:
  if ( v17 )
  {
    if ( *(_QWORD *)(v17 + 8) == 0x100000001LL )
    {
      v41 = *(_QWORD *)v17;
      *(_QWORD *)(v17 + 8) = 0;
      (*(void (__fastcall **)(__int64))(v41 + 16))(v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF);
      }
      else
      {
        v32 = *(_DWORD *)(v17 + 8);
        *(_DWORD *)(v17 + 8) = v32 - 1;
      }
      if ( v32 == 1 )
        sub_6F910((volatile signed __int32 *)v17);
    }
  }
  return v31;
}

