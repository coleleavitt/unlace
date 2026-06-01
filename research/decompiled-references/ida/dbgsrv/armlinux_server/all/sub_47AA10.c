/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47AA10
// Address: 0x000000000047AA10

//----- (000000000047AA10) ----------------------------------------------------
__int64 __fastcall sub_47AA10(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  unsigned __int64 v5; // x28
  int v6; // w3
  const char *v7; // x25
  void *v8; // x19
  size_t v9; // x26
  void *v10; // x0
  size_t v11; // x0
  size_t v12; // x26
  size_t v13; // x25
  void *v14; // x0
  __int64 v15; // x3
  __int64 v16; // x5
  __int64 v17; // x3
  char *v18; // x20
  _QWORD *v19; // x0
  _QWORD *v20; // x24
  pthread_t v21; // x25
  unsigned __int8 (__fastcall *v22)(struct addrinfo *); // x24
  unsigned int v23; // w26
  pthread_mutex_t *v24; // x0
  int v25; // w0
  unsigned int *v26; // x0
  unsigned int v27; // w1
  unsigned int *v29; // x0
  unsigned int v30; // w1
  int v31; // w0
  unsigned int v32; // w0
  unsigned int *v33; // x19
  unsigned int *v34; // x0
  unsigned int v35; // w1
  unsigned int *v36; // x1
  unsigned int v37; // w0
  unsigned int v38; // w0
  unsigned int *v39; // x1
  int v40; // w0
  struct addrinfo *v41; // x1
  __int64 v42; // x19
  int v43; // w4
  int v44; // w5
  int v45; // w6
  int v46; // w7
  __int64 v47; // x0
  const char *v48; // x2
  size_t v49; // x25
  signed __int64 v50; // x0
  void *v51; // x0
  const void *v52; // x1
  void *v53; // x0
  __int64 v54; // x25
  size_t v55; // x0
  size_t v56; // x25
  size_t v57; // x28
  void *v58; // x0
  unsigned __int8 *v59; // x1
  unsigned __int64 v60; // x2
  const char *v61; // x2
  unsigned __int64 v62; // x27
  unsigned __int64 v63; // x25
  void *v64; // x0
  __int64 *v65; // x1
  __int64 *v66; // x3
  __int64 v67; // x2
  unsigned __int64 v68; // x19
  int v69; // w1
  const char *v70; // x0
  char *v71; // x19
  int v72; // w0
  char v73; // [xsp+0h] [xbp-550h]
  int v74; // [xsp+60h] [xbp-4F0h]
  size_t v75; // [xsp+60h] [xbp-4F0h]
  struct addrinfo *ai; // [xsp+68h] [xbp-4E8h]
  struct addrinfo *aia; // [xsp+68h] [xbp-4E8h]
  int v78; // [xsp+7Ch] [xbp-4D4h] BYREF
  void *v79; // [xsp+80h] [xbp-4D0h] BYREF
  unsigned __int64 v80; // [xsp+88h] [xbp-4C8h]
  unsigned __int64 v81; // [xsp+90h] [xbp-4C0h]
  void *v82; // [xsp+98h] [xbp-4B8h] BYREF
  size_t v83; // [xsp+A0h] [xbp-4B0h]
  unsigned __int64 v84; // [xsp+A8h] [xbp-4A8h]
  void *ptr; // [xsp+B0h] [xbp-4A0h] BYREF
  __int64 v86; // [xsp+B8h] [xbp-498h]
  __int64 v87; // [xsp+C0h] [xbp-490h]
  _BYTE v88[48]; // [xsp+C8h] [xbp-488h] BYREF
  char v89[40]; // [xsp+F8h] [xbp-458h] BYREF
  char serv[40]; // [xsp+120h] [xbp-430h] BYREF
  char host; // [xsp+148h] [xbp-408h] BYREF
  _BYTE v92[7]; // [xsp+149h] [xbp-407h] BYREF
  char v93; // [xsp+547h] [xbp-9h] BYREF

  v4 = a2 + 8;
  signal(13, (__sighandler_t)1);
  v5 = *(_QWORD *)(a2 + 96);
  if ( v5 >= 2 )
    v4 = a2 + 88;
  memset(&v88[4], 0, 44);
  *(_DWORD *)v88 = 2;
  v6 = *(unsigned __int16 *)(v4 + 24);
  *(_DWORD *)&v88[8] = 1;
  sub_49B748(v89, 0x21u, "%d", v6);
  if ( *(_QWORD *)(v4 + 8) )
    v7 = *(const char **)v4;
  else
    v7 = (const char *)&qword_4B2D48;
  v8 = sub_49E050(0x80u);
  *(_QWORD *)v8 = 0;
  *((_QWORD *)v8 + 3) = 0;
  *((_QWORD *)v8 + 4) = 0;
  *((_QWORD *)v8 + 5) = 0;
  if ( v7 )
  {
    v9 = strlen(v7);
    v10 = sub_491288((__int64)v8 + 24, nullptr, v9 + 1, 1u);
    *((_QWORD *)v8 + 3) = v10;
    *((_QWORD *)v8 + 4) = v9 + 1;
    memmove(v10, v7, v9);
    *(_BYTE *)(*((_QWORD *)v8 + 3) + v9) = 0;
  }
  *((_QWORD *)v8 + 6) = 0;
  *((_QWORD *)v8 + 7) = 0;
  *((_QWORD *)v8 + 8) = 0;
  v11 = strlen(v89);
  v12 = v11 + 1;
  v13 = v11;
  v14 = sub_491288((__int64)v8 + 48, nullptr, v11 + 1, 1u);
  *((_QWORD *)v8 + 6) = v14;
  *((_QWORD *)v8 + 7) = v12;
  memmove(v14, v89, v13);
  *(_BYTE *)(*((_QWORD *)v8 + 6) + v13) = 0;
  v15 = *(_QWORD *)&v88[8];
  *((_QWORD *)v8 + 9) = *(_QWORD *)v88;
  *((_QWORD *)v8 + 10) = v15;
  v16 = *(_QWORD *)&v88[24];
  *((_QWORD *)v8 + 11) = *(_QWORD *)&v88[16];
  *((_QWORD *)v8 + 12) = v16;
  v17 = *(_QWORD *)&v88[40];
  *((_QWORD *)v8 + 13) = *(_QWORD *)&v88[32];
  *((_QWORD *)v8 + 14) = v17;
  *((_DWORD *)v8 + 30) = 0;
  *((_BYTE *)v8 + 124) = 0;
  *((_QWORD *)v8 + 1) = sub_494418();
  *((_QWORD *)v8 + 2) = sub_493CB0(nullptr, 0);
  v18 = (char *)sub_49E050(0x20u);
  *((_QWORD *)v18 + 1) = 0x100000001LL;
  *(_QWORD *)v18 = off_51BB28;
  *((_QWORD *)v18 + 3) = v8;
  v19 = sub_49E050(0x10u);
  *v19 = v8;
  v19[1] = v18;
  v20 = v19;
  if ( v18 )
  {
    if ( &_pthread_key_create )
    {
      v29 = (unsigned int *)(v18 + 8);
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 + 1, v29) );
    }
    else
    {
      ++*((_DWORD *)v18 + 2);
    }
  }
  v21 = sub_494528((void *(*)(void *))sub_47A790, v20);
  if ( !v21 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    v23 = 0;
    *(_DWORD *)(a1 + 96) = *__errno_location();
    if ( !v20 )
      goto LABEL_19;
    v33 = (unsigned int *)v20[1];
    if ( !v33 )
      goto LABEL_37;
    if ( &_pthread_key_create )
    {
      v34 = v33 + 2;
      do
        v35 = __ldaxr(v34);
      while ( __stlxr(v35 - 1, v34) );
      if ( v35 != 1 )
        goto LABEL_37;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v33 + 16LL))(v33);
      v39 = v33 + 3;
      do
        v38 = __ldaxr(v39);
      while ( __stlxr(v38 - 1, v39) );
    }
    else
    {
      v37 = v33[2];
      v33[2] = v37 - 1;
      if ( v37 != 1 )
      {
LABEL_37:
        v23 = 0;
        j_j__free_0(v20);
        goto LABEL_19;
      }
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v33 + 16LL))(v33);
      v38 = v33[3];
      v33[3] = v38 - 1;
    }
    if ( v38 == 1 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v33 + 24LL))(v33);
    goto LABEL_37;
  }
  v22 = *(unsigned __int8 (__fastcall **)(struct addrinfo *))(a2 + 168);
  ai = *(struct addrinfo **)(a2 + 176);
  v74 = *(_DWORD *)(a2 + 184);
  while ( 1 )
  {
    v23 = sub_4941A8(*((_QWORD *)v8 + 2), v74);
    if ( v23 )
      break;
    if ( !v22 || v22(ai) )
    {
      sub_494720(*((pthread_mutex_t **)v8 + 1));
      v24 = *((pthread_mutex_t **)v8 + 1);
      *((_BYTE *)v8 + 124) = 1;
      sub_494760(v24);
      j__pthread_detach(v21);
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      if ( v22 )
        v25 = 125;
      else
        v25 = 62;
      *(_DWORD *)(a1 + 96) = v25;
      goto LABEL_19;
    }
  }
  sub_493C90(v21);
  v40 = *((_DWORD *)v8 + 30);
  v41 = *(struct addrinfo **)v8;
  *(_DWORD *)(a1 + 96) = v40;
  *(_QWORD *)v8 = 0;
  aia = v41;
  if ( v40 )
  {
    if ( v40 == -11 )
    {
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      v23 = 0;
      *(_DWORD *)(a1 + 96) = *__errno_location();
    }
    else
    {
      v23 = 0;
      *(_QWORD *)(a1 + 88) = "gai_strerror";
    }
    goto LABEL_19;
  }
  v42 = (__int64)v41;
  if ( !v41 )
  {
LABEL_59:
    v23 = 0;
    freeaddrinfo(aia);
    goto LABEL_19;
  }
  while ( getnameinfo(*(const struct sockaddr **)(v42 + 24), *(_DWORD *)(v42 + 16), &host, 0x2Fu, serv, 0x21u, 3) )
  {
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_54:
    v42 = *(_QWORD *)(v42 + 40);
    if ( !v42 )
      goto LABEL_59;
  }
  if ( !(unsigned __int8)sub_479F48(
                           a1,
                           *(_DWORD *)(v42 + 4),
                           *(_DWORD *)(v42 + 8),
                           *(_DWORD *)(v42 + 12),
                           v43,
                           v44,
                           v45,
                           v46,
                           v73) )
    goto LABEL_54;
  v23 = (unsigned __int8)sub_47A330(a1, v42, a2 + 168);
  if ( !v23 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
    goto LABEL_54;
  }
  freeaddrinfo(aia);
  if ( v5 > 1 )
  {
    v47 = *(_QWORD *)(a2 + 16);
    v78 = 0;
    v79 = nullptr;
    v80 = 0;
    v81 = 0;
    if ( v47 )
      v48 = *(const char **)(a2 + 8);
    else
      v48 = (const char *)&qword_4B2D48;
    sub_40CD68((__int64)&v79, "CONNECT %s:%d HTTP/1.1\n", v48, *(unsigned __int16 *)(a2 + 32));
    v49 = *(_QWORD *)(a2 + 128);
    if ( v49 > 1 )
    {
      v50 = *(_QWORD *)(a2 + 128);
      v82 = nullptr;
      v83 = 0;
      v84 = 0;
      v51 = sub_491248(v50);
      v52 = *(const void **)(a2 + 120);
      v82 = v51;
      v84 = v49;
      memcpy(v51, v52, v49);
      v83 = v49;
      v53 = v82;
      if ( v49 + 1 > v84 )
      {
        v53 = sub_491288((__int64)&v82, v82, v49 + 1, 1u);
        v82 = v53;
      }
      v83 = v49 + 1;
      *((_BYTE *)v53 + v49 - 1) = 58;
      *((_BYTE *)v82 + v49) = 0;
      v54 = *(_QWORD *)(a2 + 152);
      v55 = v83;
      if ( v54 )
      {
        v56 = v54 - 1;
        if ( v56 )
        {
          if ( v83 )
          {
            v75 = v83 - 1;
            v57 = v56 + v83 - 1;
          }
          else
          {
            v57 = v56;
            v75 = 0;
          }
          v58 = v82;
          if ( v57 + 1 > v84 )
          {
            v58 = sub_491288((__int64)&v82, v82, v57 + 1, 1u);
            v82 = v58;
          }
          v83 = v57 + 1;
          *((_BYTE *)v58 + v57) = 0;
          memcpy((char *)v82 + v75, *(const void **)(a2 + 144), v56);
          v55 = v83;
        }
      }
      ptr = nullptr;
      v86 = 0;
      v87 = 0;
      if ( v55 )
      {
        v59 = (unsigned __int8 *)v82;
        v60 = v55 - 1;
      }
      else
      {
        v60 = 0;
        v59 = (unsigned __int8 *)&qword_4B2D48;
      }
      sub_47FA70((__int64)&ptr, v59, v60);
      v61 = (const char *)ptr;
      if ( !v86 )
        v61 = (const char *)&qword_4B2D48;
      sub_42D148((__int64)&v79, "Proxy-Authorization: Basic %s\n", v61);
      if ( ptr )
      {
        v86 = 0;
        j__free(ptr);
      }
      if ( v82 )
      {
        v83 = 0;
        j__free(v82);
      }
    }
    if ( v80 )
    {
      v62 = v80 - 1;
      v63 = v80 + 1;
    }
    else
    {
      v63 = 2;
      v62 = 0;
    }
    v64 = v79;
    if ( v63 > v81 )
    {
      v64 = sub_491288((__int64)&v79, v79, v63, 1u);
      v79 = v64;
    }
    v80 = v63;
    *((_BYTE *)v64 + v62) = 10;
    *((_BYTE *)v79 + v62 + 1) = 0;
    if ( (debug & 0x100000) != 0 )
    {
      if ( *(_QWORD *)(a2 + 96) )
        v65 = *(__int64 **)(a2 + 88);
      else
        v65 = &qword_4B2D48;
      v66 = &qword_4B2D48;
      if ( v80 )
        v66 = (__int64 *)v79;
      sub_479E10(
        (int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v65,
        *(unsigned __int16 *)(a2 + 112),
        v66);
    }
    v67 = v80;
    v68 = 0;
    if ( v80 )
    {
      v67 = v80 - 1;
      v68 = v80 - 1;
    }
    if ( sub_477240(a1, (__int64)v79, v67) == v68 )
    {
      v71 = v92;
      while ( sub_477120(a1, (__int64)&ptr, 1, 10000) > 0 )
      {
        *(v71 - 1) = (char)ptr;
        *v71 = 0;
        if ( &v93 != v71 )
        {
          ++v71;
          if ( !strstr(&host, "\r\n\r\n") )
            continue;
        }
        v93 = 0;
        if ( (debug & 0x100000) != 0 )
          sub_479E10((int)"Received:\n---\n%s\n---\n", &host);
        v72 = sub_49B8B8(&host, "HTTP/1.%d %d", (unsigned int)&ptr, (unsigned int)&v78);
        v69 = v78;
        if ( v72 != 2 || v78 != 200 )
          goto LABEL_96;
        goto LABEL_100;
      }
    }
    v69 = v78;
LABEL_96:
    if ( v69 == 401 )
    {
      v70 = "connecting to proxy (unauthorized)";
    }
    else
    {
      v70 = "connecting to proxy (authentication required)";
      if ( v69 != 407 )
        v70 = "connecting to proxy";
    }
    *(_QWORD *)(a1 + 88) = v70;
    v23 = 0;
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_100:
    if ( v79 )
    {
      v80 = 0;
      j__free(v79);
    }
  }
LABEL_19:
  if ( v18 )
  {
    if ( &_pthread_key_create )
    {
      v26 = (unsigned int *)(v18 + 8);
      do
        v27 = __ldaxr(v26);
      while ( __stlxr(v27 - 1, v26) );
      if ( v27 != 1 )
        return v23;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
      v36 = (unsigned int *)(v18 + 12);
      do
        v32 = __ldaxr(v36);
      while ( __stlxr(v32 - 1, v36) );
    }
    else
    {
      v31 = *((_DWORD *)v18 + 2);
      *((_DWORD *)v18 + 2) = v31 - 1;
      if ( v31 != 1 )
        return v23;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
      v32 = *((_DWORD *)v18 + 3);
      *((_DWORD *)v18 + 3) = v32 - 1;
    }
    if ( v32 == 1 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 24LL))(v18);
  }
  return v23;
}
// 47AEFC: variable 'v43' is possibly undefined
// 47AEFC: variable 'v44' is possibly undefined
// 47AEFC: variable 'v45' is possibly undefined
// 47AEFC: variable 'v46' is possibly undefined
// 47AEFC: variable 'v73' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
// 51BB28: using guessed type __int64 (__fastcall *off_51BB28[5])();
// 524514: using guessed type int debug;
