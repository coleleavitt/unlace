__int64 __fastcall sub_390A20(__int64 *a1, __int64 a2, const char *a3)
{
  __int64 *v3; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // rax
  _BYTE *v8; // r13
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // rbx
  char *v12; // rax
  _BYTE *v13; // rbx
  const char *v14; // rsi
  char v15; // al
  char *v16; // rdx
  char *j; // r15
  size_t v18; // rax
  char *v19; // rax
  int v20; // r8d
  int v21; // r9d
  size_t v23; // r13
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  char *v28; // r15
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __int64 v31; // rax
  char *v32; // rdi
  __m128i v33; // xmm0
  __int64 v34; // rax
  int v35; // r8d
  int v36; // r9d
  const char *v37; // rcx
  __int64 v38; // r15
  int v39; // r8d
  int v40; // r9d
  const char *v41; // rcx
  char *v42; // rdi
  __int64 v43; // r13
  __int64 v44; // r15
  char *v45; // rbx
  void *v46; // rdi
  char *v47; // rsi
  __int64 v48; // r14
  __int64 i; // r12
  char *v50; // rax
  void *v51; // rdi
  void *v52; // rdi
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  char *v56; // rax
  char *v57; // rdx
  int v58; // r8d
  int v59; // r9d
  const char *v60; // rcx
  int v61; // r9d
  char *v62; // r8
  char *v63; // r15
  int v64; // eax
  void *v65; // rsi
  const char *v66; // [rsp+0h] [rbp-9F0h]
  __int64 *v67; // [rsp+8h] [rbp-9E8h]
  int v68; // [rsp+8h] [rbp-9E8h]
  __m128i v70; // [rsp+18h] [rbp-9D8h] BYREF
  __m128i v71; // [rsp+28h] [rbp-9C8h] BYREF
  __int64 v72; // [rsp+38h] [rbp-9B8h] BYREF
  void *v73; // [rsp+40h] [rbp-9B0h] BYREF
  __int128 v74; // [rsp+48h] [rbp-9A8h]
  void *v75; // [rsp+60h] [rbp-990h] BYREF
  __int128 v76; // [rsp+68h] [rbp-988h]
  void *src; // [rsp+80h] [rbp-970h] BYREF
  __int128 v78; // [rsp+88h] [rbp-968h]
  void *v79; // [rsp+A0h] [rbp-950h] BYREF
  __int128 v80; // [rsp+A8h] [rbp-948h]
  void *v81; // [rsp+C0h] [rbp-930h] BYREF
  __int128 v82; // [rsp+C8h] [rbp-928h]
  void *ptr; // [rsp+E0h] [rbp-910h] BYREF
  __int128 v84; // [rsp+E8h] [rbp-908h]
  char *s1; // [rsp+100h] [rbp-8F0h] BYREF
  __m128i v86; // [rsp+108h] [rbp-8E8h] BYREF
  char *s2; // [rsp+118h] [rbp-8D8h]
  __int128 v88; // [rsp+120h] [rbp-8D0h]
  int dest; // [rsp+130h] [rbp-8C0h] BYREF
  __int16 v90; // [rsp+134h] [rbp-8BCh]
  int v91; // [rsp+14Ch] [rbp-8A4h]
  __int16 v92; // [rsp+150h] [rbp-8A0h]
  char s[15]; // [rsp+152h] [rbp-89Eh] BYREF
  char v94; // [rsp+161h] [rbp-88Fh]
  char v95[78]; // [rsp+162h] [rbp-88Eh] BYREF
  _BYTE v96[1024]; // [rsp+1B0h] [rbp-840h] BYREF
  char v97[1032]; // [rsp+5B0h] [rbp-440h] BYREF
  unsigned __int64 v98; // [rsp+9B8h] [rbp-38h]

  v3 = a1;
  v98 = __readfsqword(0x28u);
  v70.m128i_i64[1] = closing_comment(a1, a2);
  v7 = (const char *)itext(1458, a2, v5, v6);
  v73 = nullptr;
  v8 = v7;
  v74 = 0;
  if ( v7 )
  {
    v9 = strlen(v7);
    v10 = v9 + 1;
    v11 = v9;
    v73 = (void *)qvector_reserve(&v73, 0, v9 + 1, 1);
    *(_QWORD *)&v74 = v10;
    memmove(v73, v8, v11);
    *((_BYTE *)v73 + v11) = 0;
    v8 = v73;
  }
  while ( 1 )
  {
    v12 = strchr(v8, 10);
    if ( v12 )
    {
      *v12 = 0;
      v13 = v12 + 1;
    }
    else
    {
      v13 = &v8[strlen(v8)];
    }
    if ( strchr(v8, 37) )
      break;
    v71.m128i_i64[0] = (__int64)v97;
    qsnprintf((unsigned int)v97, 1024, (unsigned int)"%s%s%s", (_DWORD)a3, (_DWORD)v8, v70.m128i_i32[2]);
    if ( !*v8 && !strcmp(a3, *(const char **)(a2 + 48)) && *(_QWORD *)(a2 + 336) )
      v97[0] = 0;
    s1 = nullptr;
    v86 = 0;
    v23 = strlen((const char *)v71.m128i_i64[0]);
    v70.m128i_i64[0] = v23 + 1;
    s1 = (char *)qvector_reserve(&s1, 0, v23 + 1, 1);
    v86.m128i_i64[0] = v70.m128i_i64[0];
    memmove(s1, (const void *)v71.m128i_i64[0], v23);
    s1[v23] = 0;
    v24 = v3[1];
    v25 = *v3;
    v26 = v3[2];
    v27 = v24 + 1;
    if ( (unsigned __int64)&s1 < *v3 || (unsigned __int64)&s1 >= v25 + 24 * v26 )
    {
      if ( v26 < v27 )
      {
        v54 = qvector_reserve(v3, v25, v24 + 1, 24);
        *v3 = v54;
        v25 = v54;
        v24 = v3[1];
      }
      v33 = _mm_loadu_si128(&v86);
      v34 = v25 + 24 * v24;
      *(_QWORD *)v34 = s1;
      *(__m128i *)(v34 + 8) = v33;
      ++v3[1];
    }
    else
    {
      v28 = s1;
      v29 = _mm_loadl_epi64(&v86);
      s1 = nullptr;
      v30 = _mm_loadl_epi64((const __m128i *)&v86.m128i_u64[1]);
      v86 = 0;
      if ( v26 < v27 )
      {
        v70.m128i_i64[0] = v30.m128i_i64[0];
        v71.m128i_i64[0] = v29.m128i_i64[0];
        v55 = qvector_reserve(v3, v25, v24 + 1, 24);
        v30 = _mm_loadl_epi64(&v70);
        *v3 = v55;
        v25 = v55;
        v29 = _mm_loadl_epi64(&v71);
        v24 = v3[1];
      }
      v31 = v25 + 24 * v24;
      *(_QWORD *)v31 = v28;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v29, v30);
      v32 = s1;
      ++v3[1];
      if ( v32 )
      {
        v86.m128i_i64[0] = 0;
        qfree(v32);
      }
    }
LABEL_22:
    if ( !*v13 )
      goto LABEL_31;
LABEL_23:
    v8 = v13;
  }
  if ( (unsigned __int8)getinf_flag(45, 16) )
    goto LABEL_7;
  netnode_check(&v72, "$ original user", 0, 0);
  v75 = nullptr;
  src = nullptr;
  v71.m128i_i64[0] = (__int64)&v75;
  v76 = 0;
  v78 = 0;
  if ( netnode_qgetblob(v72, &v75, 1, 16, 83) > 0 && netnode_qgetblob(v72, &src, 1, 1, 83) == 6 )
  {
    v90 = 0;
    dest = 0;
    memmove(&dest, src, 6u);
    v79 = nullptr;
    v81 = nullptr;
    s1 = nullptr;
    s2 = nullptr;
    v70.m128i_i64[0] = (__int64)&v81;
    v80 = 0;
    v82 = 0;
    v86 = 0;
    v88 = 0;
    if ( (unsigned int)sub_8ABC00((char)&v81) )
      goto LABEL_55;
    v56 = (char *)v81;
    v57 = (char *)v81 + 152 * v82;
    if ( v81 == v57 )
      goto LABEL_55;
    while ( *(_DWORD *)v56 != dest || *((_WORD *)v56 + 2) != v90 )
    {
      v56 += 152;
      if ( v57 == v56 )
        goto LABEL_55;
    }
    if ( !v56 )
    {
LABEL_55:
      if ( (unsigned __int64)v80 <= 1 )
      {
        v65 = v79;
        if ( *((_QWORD *)&v80 + 1) <= 0xBu )
        {
          v79 = (void *)qvector_reserve(&v79, v79, 12, 1);
          v65 = v79;
        }
        *(_QWORD *)&v80 = 12;
        qmemcpy(v65, "invalid key", 11);
        LODWORD(v41) = (_DWORD)v79;
        *((_BYTE *)v79 + 11) = 0;
        if ( !(_QWORD)v80 )
          v41 = haystack;
      }
      else
      {
        LODWORD(v41) = (_DWORD)v79;
      }
      qsnprintf((unsigned int)v97, 1024, (unsigned int)"<error retrieving user info: %s>", (_DWORD)v41, v39, v40);
      sub_390980(v3, (__int64)a3, v70.m128i_i64[1], v97);
      goto LABEL_58;
    }
    ptr = nullptr;
    v84 = 0;
    sub_35A790((char **)&ptr);
    v60 = haystack;
    if ( (_QWORD)v84 )
      LODWORD(v60) = (_DWORD)ptr;
    v71.m128i_i64[0] = (__int64)v97;
    qsnprintf((unsigned int)v97, 1024, (unsigned int)"License info: %s", (_DWORD)v60, v58, v59);
    if ( ptr )
    {
      *(_QWORD *)&v84 = 0;
      qfree(ptr);
    }
    sub_390980(v3, (__int64)a3, v70.m128i_i64[1], (char *)v71.m128i_i64[0]);
    if ( (_QWORD)v88 )
    {
      v62 = s2;
      if ( !v86.m128i_i64[0] )
      {
        v63 = (char *)haystack;
        if ( *s2 )
        {
LABEL_103:
          qsnprintf(v71.m128i_i32[0], 1024, (unsigned int)"%s <%s>", (_DWORD)v63, (_DWORD)v62, v61);
LABEL_104:
          sub_390980(v3, (__int64)a3, v70.m128i_i64[1], (char *)v71.m128i_i64[0]);
LABEL_58:
          if ( s2 )
          {
            *(_QWORD *)&v88 = 0;
            qfree(s2);
          }
          if ( s1 )
          {
            v86.m128i_i64[0] = 0;
            qfree(s1);
          }
          v42 = (char *)v81;
          if ( v81 )
          {
            if ( (_QWORD)v82 )
            {
              v70.m128i_i64[0] = (__int64)v13;
              v43 = 0;
              v44 = v82;
              v71.m128i_i64[0] = 0;
              v67 = v3;
              v66 = a3;
              do
              {
                v45 = &v42[v43];
                v46 = *(void **)&v42[v43 + 128];
                if ( v46 )
                {
                  *((_QWORD *)v45 + 17) = 0;
                  qfree(v46);
                }
                v47 = *((char **)v45 + 10);
                if ( v47 )
                {
                  v48 = *((_QWORD *)v45 + 11);
                  if ( v48 )
                  {
                    for ( i = 0; i != v48; ++i )
                    {
                      v50 = &v47[24 * i];
                      v51 = *(void **)v50;
                      if ( *(_QWORD *)v50 )
                      {
                        *((_QWORD *)v50 + 1) = 0;
                        qfree(v51);
                        v47 = *((char **)v45 + 10);
                      }
                    }
                  }
                  *((_QWORD *)v45 + 11) = 0;
                  qfree(v47);
                }
                v52 = *((void **)v45 + 7);
                if ( v52 )
                {
                  *((_QWORD *)v45 + 8) = 0;
                  qfree(v52);
                }
                v53 = *((void **)v45 + 4);
                if ( v53 )
                {
                  *((_QWORD *)v45 + 5) = 0;
                  qfree(v53);
                }
                ++v71.m128i_i64[0];
                v43 += 152;
                v42 = (char *)v81;
              }
              while ( v44 != v71.m128i_i64[0] );
              v13 = (_BYTE *)v70.m128i_i64[0];
              v3 = v67;
              a3 = v66;
            }
            *(_QWORD *)&v82 = 0;
            qfree(v42);
          }
          if ( v79 )
          {
            *(_QWORD *)&v80 = 0;
            qfree(v79);
          }
          if ( src )
          {
            *(_QWORD *)&v78 = 0;
            qfree(src);
          }
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree(v75);
          }
          goto LABEL_22;
        }
LABEL_107:
        qstrncpy(v71.m128i_i64[0], v63, 1024);
        goto LABEL_104;
      }
    }
    else
    {
      v63 = (char *)haystack;
      v62 = (char *)haystack;
      if ( !v86.m128i_i64[0] )
        goto LABEL_107;
    }
    v63 = s1;
    v68 = (int)v62;
    v64 = strcmp(s1, v62);
    LODWORD(v62) = v68;
    if ( v64 )
      goto LABEL_103;
    goto LABEL_107;
  }
  if ( src )
  {
    *(_QWORD *)&v78 = 0;
    qfree(src);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  netnode_check(&s1, "$ original user", 0, 0);
  if ( netnode_supval(s1, 0, v96, 1024, 83) > 0 )
  {
LABEL_7:
    v91 = 0;
    v92 = 0;
    v14 = v96;
    if ( !(unsigned __int8)sub_8B62F0(&dest, v96) )
    {
      v14 = "<error retrieving user info>";
      qstrncpy(s, "<error retrieving user info>", 69);
    }
    v15 = s[0];
    if ( s[0] )
    {
      v16 = s;
      do
      {
        if ( (unsigned __int8)v15 <= 0x1Fu && v15 != 10 )
          sub_378C70((__int64)"Wrong user credentials", v14, v16);
        v15 = *++v16;
      }
      while ( v15 );
    }
    strrpl(s, 10, 32);
    for ( j = s; ; memmove(j, j + 1, v18) )
    {
      v19 = strchr(j, 3);
      j = v19;
      if ( !v19 )
        break;
      v18 = strlen(v19);
    }
    if ( (_BYTE)v91 )
    {
      s1 = nullptr;
      v86 = 0;
      sub_35A790(&s1);
      v37 = haystack;
      if ( v86.m128i_i64[0] )
        LODWORD(v37) = (_DWORD)s1;
      v71.m128i_i64[0] = (__int64)v97;
      qsnprintf((unsigned int)v97, 1024, (unsigned int)"License info: %s", (_DWORD)v37, v35, v36);
      if ( s1 )
      {
        v86.m128i_i64[0] = 0;
        qfree(s1);
      }
      v38 = v71.m128i_i64[0];
      sub_390980(v3, (__int64)a3, v70.m128i_i64[1], (char *)v71.m128i_i64[0]);
      qstrncpy(v38, s, 1024);
    }
    else if ( s[2] == 45 && s[7] == 45 && s[12] == 45 && v94 == 32 )
    {
      v71.m128i_i64[0] = (__int64)v97;
      v94 = 0;
      qsnprintf((unsigned int)v97, 1024, (unsigned int)"License info: %s", (unsigned int)s, v20, v21);
      sub_390980(v3, (__int64)a3, v70.m128i_i64[1], v97);
      qstrncpy(v97, v95, 1024);
    }
    else
    {
      v71.m128i_i64[0] = (__int64)v97;
      qsnprintf((unsigned int)v97, 1024, (unsigned int)"Licensed to: %s", (unsigned int)s, v20, v21);
    }
    sub_390980(v3, (__int64)a3, v70.m128i_i64[1], (char *)v71.m128i_i64[0]);
    goto LABEL_22;
  }
  if ( *v13 )
    goto LABEL_23;
LABEL_31:
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  return 1;
}
