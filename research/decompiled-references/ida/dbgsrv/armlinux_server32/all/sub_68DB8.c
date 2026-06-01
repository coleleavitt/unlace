/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68DB8
// Address: 0x00068DB8

//----- (00068DB8) --------------------------------------------------------
_DWORD *__fastcall sub_68DB8(int *a1, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r2
  unsigned int v4; // r3
  bool v5; // cc
  int v6; // r3
  const char *v7; // r8
  __int64 v8; // r4
  size_t v9; // r9
  void *v10; // r0
  size_t v11; // r8
  void *v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _QWORD *v19; // r0
  _DWORD *v20; // r6
  pthread_t v21; // r9
  __int64 v22; // kr00_8
  int (__fastcall *v23)(_DWORD); // r8
  pthread_mutex_t *v24; // r0
  int v25; // r2
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int *v29; // r3
  unsigned int v30; // r2
  int v31; // r3
  unsigned int v32; // r3
  unsigned int *v33; // r4
  unsigned int *v34; // r3
  unsigned int v35; // r2
  unsigned int *v36; // r2
  unsigned int v37; // r3
  unsigned int v38; // r3
  unsigned int *v39; // r2
  struct addrinfo *v40; // r2
  int v41; // r3
  int *v42; // r2
  int v43; // r4
  int v44; // r2
  const char *v45; // r2
  size_t v46; // r4
  char *v47; // r1
  unsigned int v48; // r2
  int v49; // r4
  size_t v50; // r4
  char *v51; // r1
  unsigned __int8 *v52; // r1
  const char *v53; // r2
  unsigned int v54; // r8
  unsigned int v55; // r4
  void *v56; // r1
  const char *v57; // r1
  const char *v58; // r3
  unsigned int v59; // r4
  int v60; // r2
  int v61; // r3
  const char *v62; // r3
  char *v63; // r4
  int v64; // r0
  unsigned int v67; // [sp+1Ch] [bp-4A8h]
  size_t v68; // [sp+20h] [bp-4A4h]
  struct addrinfo *ai; // [sp+24h] [bp-4A0h]
  struct addrinfo *aia; // [sp+24h] [bp-4A0h]
  int v71; // [sp+2Ch] [bp-498h] BYREF
  void *v72; // [sp+30h] [bp-494h] BYREF
  unsigned int v73; // [sp+34h] [bp-490h]
  unsigned int v74; // [sp+38h] [bp-48Ch]
  char *v75; // [sp+3Ch] [bp-488h] BYREF
  size_t v76; // [sp+40h] [bp-484h]
  unsigned int v77; // [sp+44h] [bp-480h]
  char *v78; // [sp+48h] [bp-47Ch] BYREF
  int v79; // [sp+4Ch] [bp-478h]
  int v80; // [sp+50h] [bp-474h]
  int v81; // [sp+54h] [bp-470h]
  int v82; // [sp+58h] [bp-46Ch]
  int v83; // [sp+5Ch] [bp-468h]
  int v84; // [sp+60h] [bp-464h]
  int v85; // [sp+64h] [bp-460h]
  int v86; // [sp+68h] [bp-45Ch]
  int v87; // [sp+6Ch] [bp-458h]
  int v88; // [sp+70h] [bp-454h]
  char v89[36]; // [sp+74h] [bp-450h] BYREF
  char serv[36]; // [sp+98h] [bp-42Ch] BYREF
  char host[1023]; // [sp+BCh] [bp-408h] BYREF
  char v92; // [sp+4BBh] [bp-9h] BYREF

  v2 = a2;
  signal(13, (__sighandler_t)1);
  v4 = *(_DWORD *)(v2 + 48);
  v5 = v4 > 1;
  v67 = v4;
  if ( v4 <= 1 )
    v4 = a2;
  else
    v3 = v2;
  if ( v5 )
    v2 = v3 + 44;
  v83 = 1;
  if ( !v5 )
    v2 = v4 + 4;
  v81 = 2;
  v6 = *(unsigned __int16 *)(v2 + 12);
  v82 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  sub_7EBB4(v89, 33, "%d", v6);
  if ( *(_DWORD *)(v2 + 4) )
    v7 = *(const char **)v2;
  else
    v7 = (const char *)&dword_8DB98;
  LODWORD(v8) = sub_808A4(0x4Cu);
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  if ( v7 )
  {
    v9 = strlen(v7);
    v10 = sub_78018(v8 + 12, nullptr, v9 + 1, 1u);
    *(_DWORD *)(v8 + 12) = v10;
    *(_DWORD *)(v8 + 16) = v9 + 1;
    memmove(v10, v7, v9);
    *(_BYTE *)(*(_DWORD *)(v8 + 12) + v9) = 0;
  }
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 28) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  v11 = strlen(v89);
  v12 = sub_78018(v8 + 24, nullptr, v11 + 1, 1u);
  *(_DWORD *)(v8 + 24) = v12;
  *(_DWORD *)(v8 + 28) = v11 + 1;
  memmove(v12, v89, v11);
  *(_BYTE *)(*(_DWORD *)(v8 + 24) + v11) = 0;
  v13 = v82;
  v14 = v83;
  v15 = v84;
  *(_DWORD *)(v8 + 36) = v81;
  *(_DWORD *)(v8 + 40) = v13;
  *(_DWORD *)(v8 + 44) = v14;
  *(_DWORD *)(v8 + 48) = v15;
  v16 = v86;
  v17 = v87;
  v18 = v88;
  *(_DWORD *)(v8 + 52) = v85;
  *(_DWORD *)(v8 + 56) = v16;
  *(_DWORD *)(v8 + 60) = v17;
  *(_DWORD *)(v8 + 64) = v18;
  *(_DWORD *)(v8 + 68) = 0;
  *(_BYTE *)(v8 + 72) = 0;
  *(_DWORD *)(v8 + 4) = sub_7A070();
  *(_DWORD *)(v8 + 8) = sub_79C38(nullptr, 0);
  HIDWORD(v8) = sub_808A4(0x14u);
  *(_DWORD *)(HIDWORD(v8) + 4) = 1;
  *(_DWORD *)(HIDWORD(v8) + 8) = 1;
  *(_DWORD *)(HIDWORD(v8) + 16) = v8;
  *(_DWORD *)HIDWORD(v8) = &off_D154C;
  v19 = sub_808A4(8u);
  v20 = v19;
  *v19 = v8;
  if ( HIDWORD(v8) )
  {
    if ( &_pthread_key_create )
    {
      v29 = (unsigned int *)(HIDWORD(v8) + 4);
      __dmb(0xBu);
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 + 1, v29) );
      __dmb(0xBu);
    }
    else
    {
      ++*(_DWORD *)(HIDWORD(v8) + 4);
    }
  }
  v21 = sub_7A128((void *(*)(void *))sub_68BD0, v19);
  if ( !v21 )
  {
    a1[11] = (int)"qthread_create";
    a1[12] = *_errno_location();
    if ( !v20 )
      goto LABEL_24;
    v33 = (unsigned int *)v20[1];
    if ( !v33 )
      goto LABEL_42;
    if ( &_pthread_key_create )
    {
      v34 = v33 + 1;
      __dmb(0xBu);
      do
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      __dmb(0xBu);
      if ( v35 != 1 )
        goto LABEL_42;
      (*(void (__fastcall **)(unsigned int *))(*v33 + 8))(v33);
      __dmb(0xBu);
      v39 = v33 + 2;
      do
        v38 = __ldrex(v39);
      while ( __strex(v38 - 1, v39) );
      __dmb(0xBu);
    }
    else
    {
      v37 = v33[1];
      v33[1] = v37 - 1;
      if ( v37 != 1 )
      {
LABEL_42:
        sub_808A0(v20);
        v20 = nullptr;
        goto LABEL_24;
      }
      (*(void (__fastcall **)(unsigned int *))(*v33 + 8))(v33);
      v38 = v33[2];
      v33[2] = v38 - 1;
    }
    if ( v38 == 1 )
      (*(void (__fastcall **)(unsigned int *))(*v33 + 12))(v33);
    goto LABEL_42;
  }
  v22 = *(_QWORD *)(a2 + 88);
  v23 = *(int (__fastcall **)(_DWORD))(a2 + 84);
  while ( 1 )
  {
    v20 = (_DWORD *)sub_79EE8(*(_DWORD *)(v8 + 8), SHIDWORD(v22));
    if ( v20 )
      break;
    if ( !v23 || v23(v22) )
    {
      sub_7A268(*(pthread_mutex_t **)(v8 + 4));
      v24 = *(pthread_mutex_t **)(v8 + 4);
      *(_BYTE *)(v8 + 72) = 1;
      sub_7A290(v24);
      sub_79C14(v21);
      if ( v23 )
        v25 = 125;
      else
        v25 = 62;
      a1[12] = v25;
      a1[11] = (int)"getaddrinfo";
      goto LABEL_24;
    }
  }
  sub_79C28(v21);
  v40 = *(struct addrinfo **)v8;
  v20 = nullptr;
  v41 = *(_DWORD *)(v8 + 68);
  *(_DWORD *)v8 = 0;
  ai = v40;
  v42 = a1;
  a1[12] = v41;
  if ( v41 )
  {
    if ( v41 == -11 )
    {
      a1[11] = (int)"getaddrinfo";
      v42[12] = *_errno_location();
    }
    else
    {
      a1[11] = (int)"gai_strerror";
    }
    goto LABEL_24;
  }
  v43 = (int)ai;
  if ( !ai )
  {
LABEL_66:
    v20 = nullptr;
    freeaddrinfo(ai);
    goto LABEL_24;
  }
  while ( getnameinfo(*(const struct sockaddr **)(v43 + 20), *(_DWORD *)(v43 + 16), host, 0x2Fu, serv, 0x21u, 3u) )
  {
    a1[11] = (int)"getnameinfo";
    a1[12] = *_errno_location();
LABEL_61:
    v43 = *(_DWORD *)(v43 + 28);
    if ( !v43 )
      goto LABEL_66;
  }
  if ( !sub_68650((int)a1, *(_DWORD *)(v43 + 4), *(_DWORD *)(v43 + 8), *(_DWORD *)(v43 + 12)) )
    goto LABEL_61;
  v20 = (_DWORD *)sub_688E8(a1, v43, (__int64 *)(a2 + 84));
  if ( !v20 )
  {
    (*(void (__fastcall **)(int *, int))(*a1 + 36))(a1, -1);
    goto LABEL_61;
  }
  freeaddrinfo(ai);
  if ( v67 > 1 )
  {
    v44 = *(_DWORD *)(a2 + 8);
    v72 = nullptr;
    v73 = 0;
    v74 = 0;
    v71 = 0;
    if ( v44 )
      v45 = *(const char **)(a2 + 4);
    else
      v45 = (const char *)&dword_8DB98;
    sub_188E0((int)&v72, "CONNECT %s:%d HTTP/1.1\n", v45, *(unsigned __int16 *)(a2 + 16));
    v46 = *(_DWORD *)(a2 + 64);
    if ( v46 > 1 )
    {
      v75 = nullptr;
      v76 = 0;
      v77 = 0;
      v75 = (char *)sub_77FEC(v46);
      v77 = v46;
      memcpy(v75, *(const void **)(a2 + 60), v46);
      v76 = v46;
      v47 = v75;
      if ( v46 + 1 > v77 )
      {
        v47 = (char *)sub_78018((int)&v75, v75, v46 + 1, 1u);
        v75 = v47;
      }
      v76 = v46 + 1;
      v47[v46 - 1] = 58;
      v75[v46] = 0;
      v48 = v76;
      v49 = *(_DWORD *)(a2 + 76);
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( v50 )
        {
          if ( v76 )
          {
            aia = (struct addrinfo *)(v76 - 1);
            v68 = v50 + v76 - 1;
          }
          else
          {
            v68 = v50;
            aia = nullptr;
          }
          v51 = v75;
          if ( v68 + 1 > v77 )
          {
            v51 = (char *)sub_78018((int)&v75, v75, v68 + 1, 1u);
            v75 = v51;
          }
          v76 = v68 + 1;
          v51[v68] = 0;
          memcpy((char *)aia + (_DWORD)v75, *(const void **)(a2 + 72), v50);
          v48 = v76;
        }
      }
      v78 = nullptr;
      v79 = 0;
      v80 = 0;
      if ( v48 )
      {
        v52 = (unsigned __int8 *)v75;
        --v48;
      }
      else
      {
        v52 = (unsigned __int8 *)&dword_8DB98;
      }
      sub_6C158((void **)&v78, v52, v48);
      if ( v79 )
        v53 = v78;
      else
        v53 = (const char *)&dword_8DB98;
      sub_34260((int)&v72, "Proxy-Authorization: Basic %s\n", v53);
      if ( v78 )
      {
        v79 = 0;
        sub_77F70(v78);
      }
      if ( v75 )
      {
        v76 = 0;
        sub_77F70(v75);
      }
    }
    if ( v73 )
    {
      v54 = v73 - 1;
      v55 = v73 + 1;
    }
    else
    {
      v54 = 0;
      v55 = 2;
    }
    v56 = v72;
    if ( v55 > v74 )
    {
      v56 = sub_78018((int)&v72, v72, v55, 1u);
      v72 = v56;
    }
    v73 = v55;
    *((_BYTE *)v56 + v54) = 10;
    *((_BYTE *)v72 + v54 + 1) = 0;
    if ( (debug & 0x100000) != 0 )
    {
      if ( *(_DWORD *)(a2 + 48) )
        v57 = *(const char **)(a2 + 44);
      else
        v57 = (const char *)&dword_8DB98;
      if ( v73 )
        v58 = (const char *)v72;
      else
        v58 = (const char *)&dword_8DB98;
      sub_685AC(
        (int)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v57,
        *(unsigned __int16 *)(a2 + 56),
        v58);
    }
    v59 = v73;
    v60 = v73;
    if ( v73 )
    {
      v60 = v73 - 1;
      v59 = v73 - 1;
    }
    if ( sub_66858((int)a1, (int)v72, v60) == v59 )
    {
      v63 = host;
      while ( sub_66724((int)a1, (int)&v78, 0x271000000001LL) > 0 )
      {
        *(_WORD *)v63++ = (unsigned __int8)v78;
        if ( v63 == &v92 || strstr(host, "\r\n\r\n") )
        {
          v92 = 0;
          if ( (debug & 0x100000) != 0 )
            sub_685AC((int)"Received:\n---\n%s\n---\n", host);
          v64 = sub_7EC4C((int)host, "HTTP/1.%d %d", &v78, &v71);
          v61 = v71;
          if ( v64 != 2 || v71 != 200 )
            goto LABEL_103;
          goto LABEL_107;
        }
      }
    }
    v61 = v71;
LABEL_103:
    if ( v61 == 401 )
    {
      v62 = "connecting to proxy (unauthorized)";
    }
    else if ( v61 == 407 )
    {
      v62 = "connecting to proxy (authentication required)";
    }
    else
    {
      v62 = "connecting to proxy";
    }
    v20 = nullptr;
    a1[11] = (int)v62;
    a1[12] = *_errno_location();
LABEL_107:
    if ( v72 )
    {
      v73 = 0;
      sub_77F70(v72);
    }
  }
LABEL_24:
  if ( HIDWORD(v8) )
  {
    if ( &_pthread_key_create )
    {
      v26 = (unsigned int *)(HIDWORD(v8) + 4);
      __dmb(0xBu);
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      __dmb(0xBu);
      if ( v27 != 1 )
        return v20;
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 8))(HIDWORD(v8));
      __dmb(0xBu);
      v36 = (unsigned int *)(HIDWORD(v8) + 8);
      do
        v32 = __ldrex(v36);
      while ( __strex(v32 - 1, v36) );
      __dmb(0xBu);
    }
    else
    {
      v31 = *(_DWORD *)(HIDWORD(v8) + 4);
      *(_DWORD *)(HIDWORD(v8) + 4) = v31 - 1;
      if ( v31 != 1 )
        return v20;
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 8))(HIDWORD(v8));
      v32 = *(_DWORD *)(HIDWORD(v8) + 8);
      *(_DWORD *)(HIDWORD(v8) + 8) = v32 - 1;
    }
    if ( v32 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
  }
  return v20;
}
// 68DFA: variable 'v3' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D154C: using guessed type _UNKNOWN *off_D154C;
// D6C18: using guessed type int debug;
