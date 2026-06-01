/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4719C0
// Address: 0x00000000004719C0

//----- (00000000004719C0) ----------------------------------------------------
__int64 __fastcall sub_4719C0(
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
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ecx
  __int64 *v15; // rbx
  size_t v16; // r12
  void *v17; // rax
  size_t v18; // rax
  size_t v19; // r15
  size_t v20; // r12
  void *v21; // rax
  __m128i si128; // xmm0
  __m128i v23; // xmm0
  __m128 v24; // xmm0
  _QWORD *v25; // r13
  pthread_t v26; // r12
  int v27; // r15d
  unsigned __int8 (__fastcall *v28)(char *); // r13
  unsigned int v29; // r15d
  signed __int32 v30; // eax
  struct addrinfo *v32; // rsi
  int v33; // eax
  __int64 v34; // r12
  double v35; // xmm4_8
  double v36; // xmm5_8
  int (__fastcall *v37)(__int64, int); // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  volatile signed __int32 *v40; // rax
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // rdx
  signed __int32 v43; // eax
  __int64 v44; // rax
  __m128 v45; // xmm0
  const char *v46; // rdx
  bool v47; // zf
  int v48; // ecx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  size_t v53; // r12
  signed __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  char *v56; // rsi
  unsigned __int64 v57; // rdx
  size_t v58; // r8
  __int64 v59; // r12
  size_t v60; // r9
  __int64 v61; // rdx
  const char *v62; // rsi
  const char *v63; // rdx
  __int64 v64; // r12
  unsigned __int64 v65; // rdx
  _BYTE *v66; // rsi
  const char *v67; // rcx
  const char *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // r12
  const char *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __m128 v76; // xmm4
  __m128 v77; // xmm5
  struct addrinfo *ai; // [rsp+0h] [rbp-570h]
  unsigned __int64 v79; // [rsp+8h] [rbp-568h]
  size_t v80; // [rsp+8h] [rbp-568h]
  unsigned __int64 v81; // [rsp+10h] [rbp-560h]
  unsigned __int64 v82; // [rsp+10h] [rbp-560h]
  char *serv; // [rsp+28h] [rbp-548h]
  char *serva; // [rsp+28h] [rbp-548h]
  int v86; // [rsp+3Ch] [rbp-534h] BYREF
  void *v87; // [rsp+40h] [rbp-530h] BYREF
  __int128 v88; // [rsp+48h] [rbp-528h]
  void *v89; // [rsp+60h] [rbp-510h] BYREF
  __int128 v90; // [rsp+68h] [rbp-508h]
  void *ptr; // [rsp+80h] [rbp-4F0h] BYREF
  __int128 v92; // [rsp+88h] [rbp-4E8h]
  __m128i v93[3]; // [rsp+A0h] [rbp-4D0h] BYREF
  char s[48]; // [rsp+D0h] [rbp-4A0h] BYREF
  char v95[48]; // [rsp+100h] [rbp-470h] BYREF
  char host[1022]; // [rsp+130h] [rbp-440h] BYREF
  _BYTE v97[10]; // [rsp+52Eh] [rbp-42h] BYREF
  unsigned __int64 v98; // [rsp+538h] [rbp-38h]

  v10 = s1;
  v98 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)1);
  v12 = *(_QWORD *)(a2 + 96);
  v13 = a2 + 8;
  v93[0].m128i_i32[0] = 2;
  *(__m128i *)((char *)v93 + 4) = 0;
  if ( v12 >= 2 )
    v13 = a2 + 88;
  memset((char *)v93[1].m128i_i64 + 4, 0, 28);
  v14 = *(unsigned __int16 *)(v13 + 24);
  v79 = v12;
  v93[0].m128i_i32[2] = 1;
  sub_485490(s, 33, "%d", v14);
  if ( *(_QWORD *)(v13 + 8) )
    v10 = *(const char **)v13;
  v15 = (__int64 *)operator new(0x90u);
  v15[2] = 0;
  v15[1] = 0x100000001LL;
  *v15 = (__int64)off_4C3EC8;
  v15[5] = 0;
  *((_OWORD *)v15 + 3) = 0;
  if ( v10 )
  {
    v16 = strlen(v10);
    v17 = sub_481540((__int64)(v15 + 5), nullptr, v16 + 1, 1u);
    v15[5] = (__int64)v17;
    v15[6] = v16 + 1;
    memmove(v17, v10, v16);
    *(_BYTE *)(v15[5] + v16) = 0;
  }
  v15[8] = 0;
  *(_OWORD *)(v15 + 9) = 0;
  v18 = strlen(s);
  v19 = v18 + 1;
  v20 = v18;
  v21 = sub_481540((__int64)(v15 + 8), nullptr, v18 + 1, 1u);
  v15[8] = (__int64)v21;
  v15[9] = v19;
  memmove(v21, s, v20);
  *(_BYTE *)(v15[8] + v20) = 0;
  si128 = _mm_load_si128(v93);
  *((_DWORD *)v15 + 34) = 0;
  *(__m128i *)(v15 + 11) = si128;
  v23 = _mm_load_si128(&v93[1]);
  *((_BYTE *)v15 + 140) = 0;
  *(__m128i *)(v15 + 13) = v23;
  v24 = (__m128)_mm_load_si128(&v93[2]);
  *(__m128 *)(v15 + 15) = v24;
  v15[3] = (__int64)sub_482C40();
  v15[4] = (__int64)sub_4825A0(nullptr, 0);
  v25 = (_QWORD *)operator new(0x10u);
  v25[1] = v15;
  *v25 = v15 + 2;
  if ( v15 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)v15 + 2, 1u);
    else
      ++*((_DWORD *)v15 + 2);
  }
  v26 = sub_482E20((void *(*)(void *))sub_471670, v25);
  if ( !v26 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    if ( v25 )
    {
      v40 = (volatile signed __int32 *)v25[1];
      v41 = v40;
      if ( v40 )
      {
        v42 = v40 + 2;
        if ( *((_QWORD *)v40 + 1) == 0x100000001LL )
        {
          v44 = *(_QWORD *)v40;
          *((_QWORD *)v41 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD *, volatile signed __int32 *))(v44 + 16))(
            v41,
            v25,
            v42);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 24LL))(v41);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v43 = _InterlockedExchangeAdd(v42, 0xFFFFFFFF);
          }
          else
          {
            v43 = *((_DWORD *)v40 + 2);
            *((_DWORD *)v41 + 2) = v43 - 1;
          }
          if ( v43 == 1 )
            sub_4715A0(v41);
        }
      }
      operator delete(v25, 0x10u);
    }
    goto LABEL_15;
  }
  v27 = *(_DWORD *)(a2 + 184);
  v28 = *(unsigned __int8 (__fastcall **)(char *))(a2 + 168);
  serv = *(char **)(a2 + 176);
  if ( !(unsigned __int8)sub_482A00(v15[4], v27) )
  {
    if ( v28 )
    {
      while ( !v28(serv) )
      {
        if ( (unsigned __int8)sub_482A00(v15[4], v27) )
          goto LABEL_25;
      }
    }
    sub_482EC0((pthread_mutex_t *)v15[3]);
    *((_BYTE *)v15 + 140) = 1;
    sub_482F10((pthread_mutex_t *)v15[3]);
    j__pthread_detach(v26);
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    *(_DWORD *)(a1 + 96) = v28 == nullptr ? 62 : 125;
LABEL_15:
    v29 = 0;
    goto LABEL_16;
  }
LABEL_25:
  sub_482580(v26);
  v32 = (struct addrinfo *)v15[2];
  v33 = *((_DWORD *)v15 + 34);
  v15[2] = 0;
  *(_DWORD *)(a1 + 96) = v33;
  LOBYTE(ai) = (_BYTE)v32;
  if ( v33 )
  {
    if ( v33 == -11 )
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
  v34 = (__int64)v32;
  if ( !v32 )
  {
    freeaddrinfo(nullptr);
    goto LABEL_15;
  }
  while ( getnameinfo(*(const struct sockaddr **)(v34 + 24), *(_DWORD *)(v34 + 16), host, 0x2Fu, v95, 0x21u, 3) )
  {
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_29:
    v34 = *(_QWORD *)(v34 + 40);
    if ( !v34 )
    {
      freeaddrinfo(v32);
      goto LABEL_15;
    }
  }
  if ( !(unsigned __int8)sub_470ED0(
                           a1,
                           *(_DWORD *)(v34 + 4),
                           *(_DWORD *)(v34 + 8),
                           *(_DWORD *)(v34 + 12),
                           v24,
                           a4,
                           a5,
                           a6,
                           v35,
                           v36,
                           a9,
                           a10) )
    goto LABEL_29;
  v29 = sub_471340(a1, v34, a2 + 168);
  if ( !(_BYTE)v29 )
  {
    v37 = *(int (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
    if ( v37 == sub_4705D0 )
    {
      v38 = *(_QWORD *)(a1 + 56);
      if ( v38 != -1 )
      {
        close(v38);
        *(_QWORD *)(a1 + 56) = -1;
      }
    }
    else
    {
      v37(a1, -1);
    }
    goto LABEL_29;
  }
  freeaddrinfo(v32);
  if ( v79 > 1 )
  {
    v45 = 0;
    v87 = nullptr;
    v46 = s1;
    v86 = 0;
    v47 = *(_QWORD *)(a2 + 16) == 0;
    v48 = *(unsigned __int16 *)(a2 + 32);
    v88 = 0;
    if ( !v47 )
      v46 = *(const char **)(a2 + 8);
    sub_4172B0((__int64)&v87, "CONNECT %s:%d HTTP/1.1\n", v46, v48);
    v53 = *(_QWORD *)(a2 + 128);
    if ( v53 > 1 )
    {
      v54 = *(_QWORD *)(a2 + 128);
      v89 = nullptr;
      v90 = 0;
      v89 = sub_4814F0(v54);
      *((_QWORD *)&v90 + 1) = v53;
      memcpy(v89, *(const void **)(a2 + 120), v53);
      *(_QWORD *)&v90 = v53;
      v55 = v53 + 1;
      v56 = (char *)v89;
      if ( *((_QWORD *)&v90 + 1) < v53 + 1 )
      {
        v89 = sub_481540((__int64)&v89, v89, v55, 1u);
        v55 = v53 + 1;
        v56 = (char *)v89;
      }
      *(_QWORD *)&v90 = v55;
      v56[v53 - 1] = 58;
      *((_BYTE *)v89 + v53) = 0;
      v57 = *(_QWORD *)(a2 + 152);
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v57 != 1 )
        {
          v59 = v90;
          v60 = v57 - 1;
          if ( (_QWORD)v90 )
          {
            v59 = v90 - 1;
            v60 = v58 + v90 - 1;
            v57 += v90 - 1;
          }
          if ( *((_QWORD *)&v90 + 1) < v57 )
          {
            ai = (struct addrinfo *)v58;
            v80 = v60;
            v82 = v57;
            v89 = sub_481540((__int64)&v89, v89, v57, 1u);
            v58 = (size_t)ai;
            v60 = v80;
            v57 = v82;
          }
          *(_QWORD *)&v90 = v57;
          *((_BYTE *)v89 + v60) = 0;
          memcpy((char *)v89 + v59, *(const void **)(a2 + 144), v58);
        }
      }
      v61 = v90;
      v45 = 0;
      ptr = nullptr;
      v62 = s1;
      v92 = 0;
      if ( (_QWORD)v90 )
      {
        v62 = (const char *)v89;
        v61 = v90 - 1;
      }
      sub_476970(&ptr, (__int64)v62, v61);
      v63 = s1;
      if ( (_QWORD)v92 )
        v63 = (const char *)ptr;
      sub_42A760(&v87, "Proxy-Authorization: Basic %s\n", v63);
      if ( ptr )
      {
        *(_QWORD *)&v92 = 0;
        j__free(ptr);
      }
      if ( v89 )
      {
        *(_QWORD *)&v90 = 0;
        j__free(v89);
      }
    }
    v64 = v88;
    v65 = 2;
    if ( (_QWORD)v88 )
    {
      v65 = v88 + 1;
      v64 = v88 - 1;
    }
    v66 = v87;
    if ( *((_QWORD *)&v88 + 1) < v65 )
    {
      v81 = v65;
      v87 = sub_481540((__int64)&v87, v87, v65, 1u);
      v65 = v81;
      v66 = v87;
    }
    *(_QWORD *)&v88 = v65;
    v66[v64] = 10;
    *((_BYTE *)v87 + v64 + 1) = 0;
    if ( (dword_4C94E4 & 0x100000) != 0 )
    {
      v67 = s1;
      if ( (_QWORD)v88 )
        v67 = (const char *)v87;
      v68 = s1;
      if ( *(_QWORD *)(a2 + 96) )
        v68 = *(const char **)(a2 + 88);
      *(double *)v45.m128_u64 = sub_470E00(
                                  (int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
                                  (__int64)v68,
                                  *(unsigned __int16 *)(a2 + 112),
                                  (__int64)v67,
                                  v49,
                                  v50,
                                  v45,
                                  a4,
                                  a5,
                                  a6,
                                  v51,
                                  v52,
                                  a9,
                                  a10,
                                  (char)ai);
    }
    v69 = v88;
    v70 = 0;
    if ( (_QWORD)v88 )
    {
      v69 = v88 - 1;
      v70 = v88 - 1;
    }
    if ( sub_46F1E0(a1, (__int64)v87, v69) == v70 )
    {
      serva = host;
      while ( sub_46F0E0(a1, (__int64)&ptr, 1, 10000) > 0 )
      {
        *(_WORD *)serva = (unsigned __int8)ptr;
        if ( v97 != serva )
        {
          ++serva;
          if ( !strstr(host, "\r\n\r\n") )
            continue;
        }
        v97[1] = 0;
        if ( (dword_4C94E4 & 0x100000) != 0 )
          sub_470E00(
            (int)"Received:\n---\n%s\n---\n",
            (__int64)host,
            v72,
            v73,
            v74,
            v75,
            v45,
            a4,
            a5,
            a6,
            v76,
            v77,
            a9,
            a10,
            (char)ai);
        if ( sub_485540(host, "HTTP/1.%d %d", (unsigned int)&ptr, (unsigned int)&v86) != 2 || v86 != 200 )
          break;
        goto LABEL_89;
      }
    }
    v71 = "connecting to proxy (unauthorized)";
    if ( v86 != 401 )
    {
      v71 = "connecting to proxy (authentication required)";
      if ( v86 != 407 )
        v71 = "connecting to proxy";
    }
    *(_QWORD *)(a1 + 88) = v71;
    v29 = 0;
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_89:
    if ( v87 )
    {
      *(_QWORD *)&v88 = 0;
      j__free(v87);
    }
  }
LABEL_16:
  if ( v15 )
  {
    if ( v15[1] == 0x100000001LL )
    {
      v39 = *v15;
      v15[1] = 0;
      (*(void (__fastcall **)(__int64 *))(v39 + 16))(v15);
      (*(void (__fastcall **)(__int64 *))(*v15 + 24))(v15);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v30 = _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 2, 0xFFFFFFFF);
      }
      else
      {
        v30 = *((_DWORD *)v15 + 2);
        *((_DWORD *)v15 + 2) = v30 - 1;
      }
      if ( v30 == 1 )
        sub_4715A0((volatile signed __int32 *)v15);
    }
  }
  return v29;
}
// 471DF6: variable 'v35' is possibly undefined
// 471DF6: variable 'v36' is possibly undefined
// 472239: variable 'v49' is possibly undefined
// 472239: variable 'v50' is possibly undefined
// 472239: variable 'v51' is possibly undefined
// 472239: variable 'v52' is possibly undefined
// 4723BA: variable 'v72' is possibly undefined
// 4723BA: variable 'v73' is possibly undefined
// 4723BA: variable 'v74' is possibly undefined
// 4723BA: variable 'v75' is possibly undefined
// 4723BA: variable 'v76' is possibly undefined
// 4723BA: variable 'v77' is possibly undefined
// 4723BA: variable 'ai' is possibly undefined
// 4C3EC8: using guessed type __int64 (__fastcall *off_4C3EC8[5])();
// 4C94E4: using guessed type int dword_4C94E4;
