/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BEB50
// Address: 0x080BEB50

//----- (080BEB50) --------------------------------------------------------
int __cdecl sub_80BEB50(int *a1, int a2)
{
  unsigned int v2; // edx
  int v3; // esi
  int v4; // esi
  void *v5; // eax
  void *v6; // eax
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  int v10; // eax
  signed __int32 v11; // eax
  struct addrinfo *v12; // edx
  int v13; // eax
  int (__cdecl *v14)(int, int); // eax
  volatile signed __int32 *v15; // ebx
  signed __int32 v16; // eax
  signed __int32 v17; // eax
  int *v18; // eax
  bool v19; // zf
  int v20; // ebx
  unsigned int v21; // edx
  size_t v22; // eax
  char *v23; // ecx
  void *v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // eax
  unsigned __int8 *v28; // ebx
  int *v29; // eax
  char *v30; // ecx
  void *v31; // eax
  int v32; // eax
  char v33; // al
  struct addrinfo *ai; // [esp+0h] [ebp-4E8h]
  unsigned int v35; // [esp+8h] [ebp-4E0h]
  char *needle; // [esp+Ch] [ebp-4DCh]
  char *needlea; // [esp+Ch] [ebp-4DCh]
  char *needleb; // [esp+Ch] [ebp-4DCh]
  size_t na; // [esp+10h] [ebp-4D8h]
  size_t n; // [esp+10h] [ebp-4D8h]
  char *serv; // [esp+1Ch] [ebp-4CCh]
  char *host; // [esp+20h] [ebp-4C8h]
  char *v43; // [esp+24h] [ebp-4C4h]
  unsigned __int8 v44; // [esp+24h] [ebp-4C4h]
  char *s; // [esp+2Ch] [ebp-4BCh]
  char *sh; // [esp+2Ch] [ebp-4BCh]
  char *sa; // [esp+2Ch] [ebp-4BCh]
  char *sb; // [esp+2Ch] [ebp-4BCh]
  char *sc; // [esp+2Ch] [ebp-4BCh]
  char *sd; // [esp+2Ch] [ebp-4BCh]
  char *se; // [esp+2Ch] [ebp-4BCh]
  unsigned int sf; // [esp+2Ch] [ebp-4BCh]
  char *sg; // [esp+2Ch] [ebp-4BCh]
  void *v54; // [esp+38h] [ebp-4B0h] BYREF
  unsigned int v55; // [esp+3Ch] [ebp-4ACh]
  unsigned int v56; // [esp+40h] [ebp-4A8h]
  void *v57; // [esp+48h] [ebp-4A0h] BYREF
  char *v58; // [esp+4Ch] [ebp-49Ch]
  unsigned int v59; // [esp+50h] [ebp-498h]
  void *ptr; // [esp+58h] [ebp-490h] BYREF
  int v61; // [esp+5Ch] [ebp-48Ch]
  int v62; // [esp+60h] [ebp-488h]
  int v63; // [esp+68h] [ebp-480h] BYREF
  _BYTE v64[28]; // [esp+6Ch] [ebp-47Ch] BYREF
  char v65[33]; // [esp+8Ah] [ebp-45Eh] BYREF
  char v66[33]; // [esp+ABh] [ebp-43Dh] BYREF
  char v67[1022]; // [esp+CCh] [ebp-41Ch] BYREF
  _BYTE v68[2]; // [esp+4CAh] [ebp-1Eh] BYREF
  unsigned int v69; // [esp+4CCh] [ebp-1Ch]

  v69 = __readgsdword(0x14u);
  signal(13, (__sighandler_t)1);
  v2 = *(_DWORD *)(a2 + 48);
  v3 = a2 + 4;
  v63 = 2;
  *(_OWORD *)v64 = 0;
  if ( v2 >= 2 )
    v3 = a2 + 44;
  needle = (char *)v2;
  *(_OWORD *)&v64[12] = 0;
  *(_DWORD *)&v64[4] = 1;
  sub_80D3B60(v65, 33, "%d", *(unsigned __int16 *)(v3 + 12));
  s = (char *)&dword_80DDFD8;
  if ( *(_DWORD *)(v3 + 4) )
    s = *(char **)v3;
  v4 = operator new(0x58u);
  *(_DWORD *)(v4 + 4) = 1;
  *(_DWORD *)(v4 + 8) = 1;
  *(_DWORD *)v4 = &off_811C724;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 0;
  if ( s )
  {
    na = strlen(s);
    v5 = sub_80CF920(v4 + 24, nullptr, na + 1, 1u);
    *(_DWORD *)(v4 + 24) = v5;
    *(_DWORD *)(v4 + 28) = na + 1;
    memmove(v5, s, na);
    *(_BYTE *)(*(_DWORD *)(v4 + 24) + na) = 0;
  }
  *(_DWORD *)(v4 + 36) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  sh = (char *)strlen(v65);
  v6 = sub_80CF920(v4 + 36, nullptr, (unsigned int)(sh + 1), 1u);
  *(_DWORD *)(v4 + 36) = v6;
  *(_DWORD *)(v4 + 40) = sh + 1;
  memmove(v6, v65, (size_t)sh);
  sh[*(_DWORD *)(v4 + 36)] = 0;
  v7 = _mm_loadu_si128((const __m128i *)&v63);
  *(_DWORD *)(v4 + 80) = 0;
  *(__m128i *)(v4 + 48) = v7;
  v8 = _mm_loadu_si128((const __m128i *)&v64[12]);
  *(_BYTE *)(v4 + 84) = 0;
  *(__m128i *)(v4 + 64) = v8;
  *(_DWORD *)(v4 + 16) = sub_80D1320();
  *(_DWORD *)(v4 + 20) = sub_80D0C00(nullptr, 0);
  sa = (char *)operator new(8u);
  *((_DWORD *)sa + 1) = v4;
  *(_DWORD *)sa = v4 + 12;
  if ( v4 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v4 + 4), 1u);
    else
      ++*(_DWORD *)(v4 + 4);
  }
  host = (char *)sub_80D1500((void *(*)(void *))sub_80BE110, sa);
  if ( !host )
  {
    a1[11] = (int)"qthread_create";
    a1[12] = *__errno_location();
    if ( sa )
    {
      v15 = *((volatile signed __int32 **)sa + 1);
      if ( v15 )
      {
        if ( &_pthread_key_create )
        {
          v16 = _InterlockedExchangeAdd(v15 + 1, 0xFFFFFFFF);
        }
        else
        {
          v16 = *((_DWORD *)v15 + 1);
          *((_DWORD *)v15 + 1) = v16 - 1;
        }
        if ( v16 == 1 )
        {
          (*(void (__cdecl **)(volatile signed __int32 *))(*v15 + 8))(v15);
          if ( &_pthread_key_create )
          {
            v17 = _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF);
          }
          else
          {
            v17 = *((_DWORD *)v15 + 2);
            *((_DWORD *)v15 + 2) = v17 - 1;
          }
          if ( v17 == 1 )
            (*(void (__cdecl **)(volatile signed __int32 *))(*v15 + 12))(v15);
        }
      }
      operator delete(sa, 8u);
    }
    goto LABEL_15;
  }
  v43 = *(char **)(a2 + 88);
  serv = *(char **)(a2 + 92);
  sb = *(char **)(a2 + 84);
  if ( !(unsigned __int8)sub_80D10D0(*(_DWORD *)(v4 + 20), (int)serv) )
  {
    if ( sb )
    {
      while ( !((unsigned __int8 (__cdecl *)(char *))sb)(v43) )
      {
        if ( (unsigned __int8)sub_80D10D0(*(_DWORD *)(v4 + 20), (int)serv) )
          goto LABEL_28;
      }
    }
    sub_80D15A0(*(pthread_mutex_t **)(v4 + 16));
    *(_BYTE *)(v4 + 84) = 1;
    sub_80D1600(*(pthread_mutex_t **)(v4 + 16));
    sub_80D0BB0((pthread_t)host);
    a1[11] = (int)"getaddrinfo";
    a1[12] = sb == nullptr ? 62 : 125;
LABEL_15:
    v44 = 0;
    goto LABEL_16;
  }
LABEL_28:
  sub_80D0BD0((pthread_t)host);
  v12 = *(struct addrinfo **)(v4 + 12);
  v13 = *(_DWORD *)(v4 + 80);
  *(_DWORD *)(v4 + 12) = 0;
  ai = v12;
  a1[12] = v13;
  if ( v13 )
  {
    if ( v13 == -11 )
    {
      a1[11] = (int)"getaddrinfo";
      a1[12] = *__errno_location();
    }
    else
    {
      a1[11] = (int)"gai_strerror";
    }
    goto LABEL_15;
  }
  sc = (char *)v12;
  if ( !v12 )
  {
    freeaddrinfo(nullptr);
    goto LABEL_15;
  }
  while ( getnameinfo(*((const struct sockaddr **)sc + 5), *((_DWORD *)sc + 4), v67, 0x2Fu, v66, 0x21u, 3u) )
  {
    a1[11] = (int)"getnameinfo";
    a1[12] = *__errno_location();
LABEL_32:
    sc = *((char **)sc + 7);
    if ( !sc )
    {
      freeaddrinfo(ai);
      goto LABEL_15;
    }
  }
  if ( !(unsigned __int8)sub_80BE3B0((int)a1, *((_DWORD *)sc + 1), *((_DWORD *)sc + 2), *((_DWORD *)sc + 3)) )
    goto LABEL_32;
  v44 = sub_80BE7F0(a1, (int)sc, a2 + 84);
  if ( !v44 )
  {
    v14 = *(int (__cdecl **)(int, int))(*a1 + 36);
    if ( v14 == sub_80BD6E0 )
    {
      if ( a1[7] != -1 )
      {
        close(a1[7]);
        a1[7] = -1;
      }
    }
    else
    {
      v14((int)a1, -1);
    }
    goto LABEL_32;
  }
  freeaddrinfo(ai);
  if ( (unsigned int)needle > 1 )
  {
    v18 = &dword_80DDFD8;
    v54 = nullptr;
    v55 = 0;
    v19 = *(_DWORD *)(a2 + 8) == 0;
    v20 = *(unsigned __int16 *)(a2 + 16);
    v56 = 0;
    if ( !v19 )
      v18 = *(int **)(a2 + 4);
    sub_805ED10(&v54, "CONNECT %s:%d HTTP/1.1\n", v18, v20);
    v21 = 0;
    v22 = *(_DWORD *)(a2 + 64);
    if ( v22 > 1 )
    {
      v57 = nullptr;
      v58 = nullptr;
      v59 = 0;
      sd = (char *)v22;
      v57 = sub_80CF8B0(v22);
      v59 = (unsigned int)sd;
      memcpy(v57, *(const void **)(a2 + 60), (size_t)sd);
      v23 = sd + 1;
      v58 = sd;
      v24 = v57;
      if ( v59 < (unsigned int)(sd + 1) )
      {
        v24 = sub_80CF920((int)&v57, v57, (unsigned int)(sd + 1), 1u);
        v57 = v24;
        v23 = sd + 1;
      }
      v58 = v23;
      sd[(_DWORD)v24 - 1] = 58;
      sd[(_DWORD)v57] = 0;
      v25 = *(_DWORD *)(a2 + 76);
      if ( v25 )
      {
        v26 = v25 - 1;
        se = (char *)(v25 - 1);
        if ( v25 != 1 )
        {
          n = v25 - 1;
          needlea = v58;
          if ( v58 )
          {
            needlea = v58 - 1;
            n = (size_t)&v58[v26 - 1];
            v25 = (unsigned int)&v58[v26];
          }
          if ( v59 < v25 )
          {
            v35 = v25;
            v57 = sub_80CF920((int)&v57, v57, v25, 1u);
            v25 = v35;
          }
          v58 = (char *)v25;
          *((_BYTE *)v57 + n) = 0;
          memcpy(&needlea[(_DWORD)v57], *(const void **)(a2 + 72), (size_t)se);
        }
      }
      v27 = (int)v58;
      v28 = (unsigned __int8 *)&dword_80DDFD8;
      ptr = nullptr;
      v61 = 0;
      v62 = 0;
      if ( v58 )
      {
        v28 = (unsigned __int8 *)v57;
        v27 = (int)(v58 - 1);
      }
      sub_80C4280(&ptr, v28, v27);
      v29 = &dword_80DDFD8;
      if ( v61 )
        v29 = (int *)ptr;
      sub_8070240(&v54, "Proxy-Authorization: Basic %s\n", v29);
      v21 = 0;
      if ( ptr )
      {
        v61 = 0;
        sub_80CF780(ptr);
        v21 = 0;
      }
      if ( v57 )
      {
        v58 = nullptr;
        sub_80CF780(v57);
        v21 = 0;
      }
    }
    sf = 2;
    v30 = (char *)v55;
    if ( v55 )
    {
      v30 = (char *)(v55 - 1);
      sf = v55 + 1;
    }
    v31 = v54;
    if ( v56 < sf )
    {
      needleb = v30;
      v31 = sub_80CF920((int)&v54, v54, sf, 1u);
      v30 = needleb;
      v54 = v31;
      v21 = 0;
    }
    v55 = sf;
    v30[(_DWORD)v31] = 10;
    v30[(_DWORD)v54 + 1] = 0;
    if ( (dword_811F8A4 & 0x100000) != 0 )
    {
      sub_80BE360();
      v21 = 0;
    }
    v32 = v55;
    if ( v55 )
    {
      v32 = v55 - 1;
      v21 = v55 - 1;
    }
    if ( sub_80BC1B0((int)a1, (int)v54, v32) == v21 )
    {
      sg = v67;
      while ( sub_80BC050((int)a1, (int)&ptr, 1, 10000) > 0 )
      {
        v33 = (char)ptr;
        sg[1] = 0;
        *sg = v33;
        if ( v68 != sg )
        {
          ++sg;
          if ( !strstr(v67, "\r\n\r\n") )
            continue;
        }
        v68[1] = 0;
        if ( (dword_811F8A4 & 0x100000) != 0 )
          sub_80BE360();
        sub_80D3B90((int)v67, "HTTP/1.%d %d", (int)&ptr);
        break;
      }
    }
    a1[11] = (int)"connecting to proxy";
    v44 = 0;
    a1[12] = *__errno_location();
    if ( v54 )
    {
      v55 = 0;
      sub_80CF780(v54);
    }
  }
LABEL_16:
  if ( v4 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 4), 0xFFFFFFFF) != 1 )
        goto LABEL_19;
LABEL_22:
      (*(void (__cdecl **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &_pthread_key_create )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF);
      }
      else
      {
        v11 = *(_DWORD *)(v4 + 8);
        *(_DWORD *)(v4 + 8) = v11 - 1;
      }
      if ( v11 == 1 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v4 + 12))(v4);
    }
    else
    {
      v10 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)(v4 + 4) = v10 - 1;
      if ( v10 == 1 )
        goto LABEL_22;
    }
  }
LABEL_19:
  if ( v69 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v44;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811C724: using guessed type int (*off_811C724)();
// 811F8A4: using guessed type int dword_811F8A4;
