__int64 __fastcall sub_EE9C0(__int64 a1)
{
  __int64 debugger_plugins; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // r13
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r15
  const char *v15; // rbp
  const char *v16; // r15
  char v17; // al
  char *v18; // rbx
  unsigned int v19; // eax
  int v20; // r14d
  _QWORD *v21; // rax
  size_t v22; // rax
  size_t v23; // r14
  size_t v24; // rbx
  unsigned __int64 v25; // rbx
  size_t v26; // r8
  __int64 v27; // rbp
  void *v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rbp
  __int64 v37; // r12
  __m128i si128; // xmm0
  __int64 v39; // rbx
  _DWORD *v40; // rsi
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __m128i *v46; // rax
  __m128i v47; // xmm0
  bool v48; // zf
  const char *v49; // rdi
  _QWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // eax
  const char *v56; // r9
  unsigned __int64 v57; // rdx
  __int64 v58; // rbx
  _QWORD *v59; // rax
  unsigned __int64 v60; // rbp
  __int64 v61; // rbx
  char *v62; // rsi
  unsigned __int64 v63; // rdx
  char v64; // r8
  __int64 v65; // rbp
  _QWORD *v66; // rsi
  unsigned __int64 v67; // rdx
  __int64 v68; // rbp
  _QWORD *v69; // rsi
  size_t v70; // rax
  __int64 v71; // rbp
  size_t v72; // r8
  size_t v73; // r9
  _QWORD *v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rdx
  char *v77; // rax
  const char *v78; // rdi
  const char **v79; // r15
  int v80; // eax
  const char **v81; // r14
  __int64 v82; // r13
  __int64 v83; // rbx
  const char *v84; // rdi
  const char **v85; // rsi
  __int64 v86; // r9
  _QWORD *v87; // r13
  _QWORD *v88; // rdx
  __int64 v89; // r13
  char *v90; // rax
  const char *v91; // rdx
  char v92; // cl
  __int64 v93; // r12
  __int64 v94; // rbp
  _QWORD *v95; // rax
  __int64 i; // rbp
  _QWORD *v97; // rax
  _QWORD *dest; // [rsp+0h] [rbp-308h]
  _QWORD *desta; // [rsp+0h] [rbp-308h]
  void *v101; // [rsp+10h] [rbp-2F8h]
  void *v102; // [rsp+10h] [rbp-2F8h]
  void *v103; // [rsp+10h] [rbp-2F8h]
  void *v104; // [rsp+10h] [rbp-2F8h]
  void *v105; // [rsp+10h] [rbp-2F8h]
  void *v106; // [rsp+10h] [rbp-2F8h]
  __int64 v107; // [rsp+18h] [rbp-2F0h]
  _QWORD *v108; // [rsp+18h] [rbp-2F0h]
  size_t v109; // [rsp+20h] [rbp-2E8h]
  char v110; // [rsp+20h] [rbp-2E8h]
  size_t v111; // [rsp+20h] [rbp-2E8h]
  size_t v112; // [rsp+28h] [rbp-2E0h]
  __int16 v113; // [rsp+34h] [rbp-2D4h] BYREF
  __int16 v114; // [rsp+36h] [rbp-2D2h] BYREF
  __int64 v115; // [rsp+38h] [rbp-2D0h]
  char *s; // [rsp+40h] [rbp-2C8h]
  __int128 v117; // [rsp+48h] [rbp-2C0h]
  __int64 v118; // [rsp+60h] [rbp-2A8h]
  __int128 v119; // [rsp+68h] [rbp-2A0h]
  void *src; // [rsp+80h] [rbp-288h] BYREF
  __m128i v121; // [rsp+88h] [rbp-280h]
  _QWORD *v122; // [rsp+A0h] [rbp-268h] BYREF
  __m128i v123; // [rsp+A8h] [rbp-260h] BYREF
  char s2[511]; // [rsp+C0h] [rbp-248h] BYREF
  char v125; // [rsp+2BFh] [rbp-49h] BYREF
  char v126; // [rsp+2C0h] [rbp-48h] BYREF
  unsigned __int64 v127; // [rsp+2C8h] [rbp-40h]

  v127 = __readfsqword(0x28u);
  debugger_plugins = get_debugger_plugins();
  if ( !debugger_plugins )
  {
LABEL_2:
    sub_E7D10(nullptr, 1, v2, v3, v4, v5);
    goto LABEL_3;
  }
  v7 = debugger_plugins;
  v117 = 0;
  v8 = (char *)qvector_reserve();
  s = v8;
  *(_QWORD *)&v117 = 4;
  *(_WORD *)v8 = 17486;
  v8[2] = 75;
  s[3] = 0;
  v119 = 0;
  v9 = qvector_reserve();
  v118 = v9;
  v10 = 0;
  *(_QWORD *)&v119 = 60;
  *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_1D33D0);
  v11 = v118;
  *(__m128i *)(v9 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D33E0);
  *(__m128i *)(v9 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D33F0);
  *(__m128i *)(v9 + 43) = _mm_load_si128((const __m128i *)&xmmword_1D3400);
  *(_BYTE *)(v11 + 59) = 0;
  v113 = 0;
  do
  {
    if ( *(_QWORD *)(v115 + 16 * v10 + 8) == dbg )
      v113 = v10 + 1;
    v12 = v119;
    if ( (_QWORD)v119 )
    {
      v13 = v119 + 1;
      v14 = v119 + 2;
      v12 = v119 - 1;
      if ( *((_QWORD *)&v119 + 1) >= (unsigned __int64)(v119 + 2) )
        goto LABEL_10;
    }
    else
    {
      v14 = 3;
      v13 = 2;
      if ( *((_QWORD *)&v119 + 1) >= 3u )
        goto LABEL_10;
    }
    v118 = qvector_reserve();
    v11 = v118;
LABEL_10:
    *(_QWORD *)&v119 = v14;
    *(_BYTE *)(v11 + v13) = 0;
    *(_WORD *)(v118 + v12) = 15370;
    v15 = *(const char **)(*(_QWORD *)(v115 + 16 * v10) + 24LL);
    if ( !strncmp(v15, "Local ", 6u) )
    {
      v16 = v15 + 6;
    }
    else
    {
      v55 = strncmp(v15, "Remote ", 7u);
      v56 = v15 + 7;
      if ( v55 )
        v56 = v15;
      v16 = v56;
    }
    v17 = *v16;
    if ( *v16 )
    {
      v18 = (char *)s1;
      if ( (_QWORD)v117 )
        v18 = s;
      while ( 1 )
      {
        v19 = toupper(v17);
        v20 = v19;
        if ( v19 <= 0x7F )
        {
          if ( isalnum(v19) )
          {
            v21 = strchr(v18, v20);
            if ( !v21 )
              break;
          }
        }
        v17 = *++v16;
        if ( !v17 )
          goto LABEL_19;
      }
      v57 = 2;
      v122 = nullptr;
      v123 = 0;
      v58 = v16 - v15;
      if ( v16 == v15 )
        goto LABEL_64;
      v76 = v58 + 1;
      if ( v58 != -1 )
      {
        v21 = (_QWORD *)qvector_reserve();
        v122 = v21;
        v76 = v58 + 1;
      }
      v123.m128i_i64[0] = v76;
      memmove(v21, v15, v16 - v15);
      *((_BYTE *)v122 + v58) = 0;
      if ( v123.m128i_i64[0] )
      {
        v58 = v123.m128i_i64[0] - 1;
        v57 = v123.m128i_i64[0] + 1;
      }
      else
      {
        v58 = 0;
        v57 = 2;
      }
      v59 = v122;
      if ( v123.m128i_i64[1] < v57 )
      {
LABEL_64:
        v102 = (void *)v57;
        v59 = (_QWORD *)qvector_reserve();
        v122 = v59;
        v57 = (unsigned __int64)v102;
      }
      v123.m128i_i64[0] = v57;
      v60 = 2;
      *((_BYTE *)v59 + v58) = 126;
      *((_BYTE *)v122 + v58 + 1) = 0;
      v61 = v117;
      if ( (_QWORD)v117 )
      {
        v60 = v117 + 1;
        v61 = v117 - 1;
      }
      v62 = s;
      if ( *((_QWORD *)&v117 + 1) < v60 )
      {
        s = (char *)qvector_reserve();
        v62 = s;
      }
      *(_QWORD *)&v117 = v60;
      v63 = 2;
      v62[v61] = v20;
      s[v61 + 1] = 0;
      v64 = *v16;
      v65 = v123.m128i_i64[0];
      if ( v123.m128i_i64[0] )
      {
        v63 = v123.m128i_i64[0] + 1;
        v65 = v123.m128i_i64[0] - 1;
      }
      v66 = v122;
      if ( v123.m128i_i64[1] < v63 )
      {
        v110 = *v16;
        v105 = (void *)v63;
        v122 = (_QWORD *)qvector_reserve();
        v64 = v110;
        v66 = v122;
        v63 = (unsigned __int64)v105;
      }
      v123.m128i_i64[0] = v63;
      v67 = 2;
      *((_BYTE *)v66 + v65) = v64;
      *((_BYTE *)v122 + v65 + 1) = 0;
      v68 = v123.m128i_i64[0];
      if ( v123.m128i_i64[0] )
      {
        v67 = v123.m128i_i64[0] + 1;
        v68 = v123.m128i_i64[0] - 1;
      }
      v69 = v122;
      if ( v123.m128i_i64[1] < v67 )
      {
        v104 = (void *)v67;
        v122 = (_QWORD *)qvector_reserve();
        v67 = (unsigned __int64)v104;
        v69 = v122;
      }
      v123.m128i_i64[0] = v67;
      *((_BYTE *)v69 + v68) = 126;
      *((_BYTE *)v122 + v68 + 1) = 0;
      v70 = strlen(v16 + 1);
      v71 = v123.m128i_i64[0];
      v72 = v70;
      v73 = v70;
      if ( v123.m128i_i64[0] )
      {
        v71 = v123.m128i_i64[0] - 1;
        v73 = v70 + v123.m128i_i64[0] - 1;
      }
      v74 = v122;
      v75 = v73 + 1;
      if ( v123.m128i_i64[1] < v73 + 1 )
      {
        v112 = v70;
        v109 = v73;
        v103 = (void *)(v73 + 1);
        v122 = (_QWORD *)qvector_reserve();
        v72 = v112;
        v74 = v122;
        v73 = v109;
        v75 = (__int64)v103;
      }
      v123.m128i_i64[0] = v75;
      *((_BYTE *)v74 + v73) = 0;
      memmove((char *)v122 + v71, v16 + 1, v72);
      v25 = v123.m128i_i64[0];
      src = v122;
      v121 = _mm_loadu_si128(&v123);
    }
    else
    {
LABEL_19:
      src = nullptr;
      v121 = 0;
      if ( !v15 )
        goto LABEL_30;
      v22 = strlen(v15);
      v23 = v22 + 1;
      v24 = v22;
      src = (void *)qvector_reserve();
      v121.m128i_i64[0] = v23;
      memmove(src, v15, v24);
      *((_BYTE *)src + v24) = 0;
      v25 = v121.m128i_i64[0];
    }
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v25 != 1 )
      {
        v27 = v119;
        v28 = (void *)(v25 - 1);
        if ( (_QWORD)v119 )
        {
          v27 = v119 - 1;
          v28 = (void *)(v26 + v119 - 1);
          v25 += v119 - 1;
        }
        v29 = v118;
        if ( *((_QWORD *)&v119 + 1) < v25 )
        {
          v111 = v26;
          v106 = v28;
          v118 = qvector_reserve();
          v26 = v111;
          v29 = v118;
          v28 = v106;
        }
        *(_QWORD *)&v119 = v25;
        *((_BYTE *)v28 + v29) = 0;
        memcpy((void *)(v27 + v118), src, v26);
      }
    }
    if ( src )
    {
      v121.m128i_i64[0] = 0;
      qfree();
    }
LABEL_30:
    v30 = v119;
    if ( (_QWORD)v119 )
    {
      v31 = v119 + 2;
      v32 = v119 + 3;
      v33 = v118;
      v30 = v119 - 1;
      if ( *((_QWORD *)&v119 + 1) >= (unsigned __int64)(v119 + 3) )
        goto LABEL_32;
    }
    else
    {
      v33 = v118;
      v32 = 4;
      v31 = 3;
      if ( *((_QWORD *)&v119 + 1) >= 4u )
        goto LABEL_32;
    }
    v101 = (void *)v32;
    v118 = qvector_reserve();
    v32 = (__int64)v101;
    v33 = v118;
LABEL_32:
    *(_QWORD *)&v119 = v32;
    ++v10;
    *(_BYTE *)(v33 + v31) = 0;
    v34 = v118 + v30;
    *(_WORD *)v34 = 21050;
    *(_BYTE *)(v34 + 2) = 62;
    v11 = v118;
  }
  while ( v7 != v10 );
  v35 = v119;
  if ( (_QWORD)v119 )
  {
    v37 = v119 + 56;
    v36 = v119 + 57;
    v35 = v119 - 1;
    if ( *((_QWORD *)&v119 + 1) < (unsigned __int64)(v119 + 57) )
      goto LABEL_89;
  }
  else
  {
    v36 = 58;
    v37 = 57;
    if ( *((_QWORD *)&v119 + 1) >= 0x3Au )
      goto LABEL_35;
LABEL_89:
    v118 = qvector_reserve();
    v11 = v118;
  }
LABEL_35:
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3410);
  *(_QWORD *)&v119 = v36;
  *(_BYTE *)(v11 + v37) = 0;
  v39 = v118 + v35;
  *(__m128i *)v39 = si128;
  *(__m128i *)(v39 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D3420);
  *(__m128i *)(v39 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D3430);
  *(__m128i *)(v39 + 41) = _mm_load_si128((const __m128i *)&xmmword_1D3440);
  v121 = 0;
  src = nullptr;
  if ( !(unsigned __int8)reg_str_get() )
  {
    v40 = src;
    if ( v121.m128i_i64[1] <= 4uLL )
    {
      src = (void *)qvector_reserve();
      v40 = src;
    }
    v121.m128i_i64[0] = 5;
    *v40 = 1162760014;
    *((_BYTE *)src + 4) = 0;
  }
  v41 = v119;
  if ( (_QWORD)v119 )
  {
    v42 = v119 + 81;
    v43 = v119 + 82;
    v44 = v118;
    v41 = v119 - 1;
    if ( *((_QWORD *)&v119 + 1) >= (unsigned __int64)(v119 + 82) )
      goto LABEL_41;
LABEL_91:
    v118 = qvector_reserve();
    v44 = v118;
  }
  else
  {
    v44 = v118;
    v43 = 83;
    v42 = 82;
    if ( *((_QWORD *)&v119 + 1) < 0x53u )
      goto LABEL_91;
  }
LABEL_41:
  *(_QWORD *)&v119 = v43;
  v45 = _mm_load_si128((const __m128i *)&xmmword_1D3450);
  *(_BYTE *)(v44 + v42) = 0;
  v114 = 0;
  v46 = (__m128i *)(v41 + v118);
  *v46 = v45;
  v47 = _mm_load_si128((const __m128i *)&xmmword_1D3460);
  v48 = (_QWORD)v119 == 0;
  v46[5].m128i_i16[0] = 2570;
  v49 = s1;
  v46[1] = v47;
  v46[2] = _mm_load_si128((const __m128i *)&xmmword_1D3470);
  v46[3] = _mm_load_si128((const __m128i *)&xmmword_1D3480);
  v46[4] = _mm_load_si128((const __m128i *)&xmmword_1D3490);
  if ( !v48 )
    v49 = (const char *)v118;
  if ( (unsigned int)sub_8F810((__int64)v49, &v113, &src, &v114) )
  {
    if ( v113 <= 0 )
    {
      if ( !v113 && v114 )
        reg_delete();
      v50 = nullptr;
    }
    else
    {
      v50 = (_QWORD *)(v115 + 16LL * (v113 - 1));
      if ( !v114 )
        goto LABEL_46;
      v122 = nullptr;
      v123 = 0;
      sub_BE490((__int64 *)&v122);
      qbasename();
      qstrncpy();
      v77 = strrchr(s2, 95);
      if ( v77 )
        *v77 = 0;
      if ( !v123.m128i_i64[0] )
        goto LABEL_128;
      v78 = s1;
      v79 = (const char **)v122;
      if ( v122[1] )
        v78 = (const char *)*v122;
      v107 = v123.m128i_i64[0];
      dest = v122;
      v80 = strcmp(v78, s2);
      v2 = (__int64)dest;
      v5 = v107;
      if ( v80 )
      {
        v81 = (const char **)&dest[3 * v107];
        if ( 24 * v107 )
        {
          desta = v50;
          v82 = v107;
          v83 = v2;
          v108 = (_QWORD *)v2;
          while ( 1 )
          {
            v84 = s1;
            if ( *(_QWORD *)(v83 + 8) )
              v84 = *(const char **)v83;
            v85 = (const char **)(v83 + 24);
            if ( !strcmp(v84, s2) )
              break;
            if ( v81 == v85 )
            {
              v50 = desta;
              v90 = &s2[strlen(s2)];
              goto LABEL_118;
            }
            v83 += 24;
          }
          v86 = v82;
          v87 = (_QWORD *)v83;
          v88 = v108;
          v50 = desta;
          if ( *v87 )
          {
            v87[1] = 0;
            qfree();
            v86 = v123.m128i_i64[0];
            v88 = v122;
          }
          memmove(v87, v85, (char *)&v88[3 * v86] - (char *)v87 - 24);
          v79 = (const char **)v122;
          v89 = 3 * --v123.m128i_i64[0];
          v89 *= 8;
          v85 = (const char **)((char *)v122 + v89);
          v90 = &s2[strlen(s2)];
          if ( v89 )
          {
            while ( 1 )
            {
LABEL_118:
              if ( v90 >= &v126 )
              {
                if ( !under_debugger )
                  interr();
                BUG();
              }
              *v90 = 44;
              if ( v90 + 1 >= &v126 )
                break;
              ++v90;
              v91 = s1;
              if ( v79[1] )
                goto LABEL_122;
LABEL_123:
              if ( v90 != &v125 )
              {
                do
                {
                  v92 = *v91++;
                  *v90 = v92;
                  if ( !v92 )
                    goto LABEL_127;
                }
                while ( ++v90 != &v125 );
              }
LABEL_135:
              v125 = 0;
              v90 = &v125;
LABEL_127:
              v79 += 3;
              if ( v79 == v85 )
                goto LABEL_128;
            }
            v125 = 0;
            if ( !v79[1] )
              goto LABEL_135;
            v90 = &v125;
LABEL_122:
            v91 = *v79;
            goto LABEL_123;
          }
        }
LABEL_128:
        reg_str_set();
        v2 = (__int64)v122;
        if ( v122 )
        {
          v93 = v123.m128i_i64[0];
          if ( v123.m128i_i64[0] )
          {
            v94 = 0;
            do
            {
              v95 = (_QWORD *)(v2 + 24 * v94);
              if ( *v95 )
              {
                v95[1] = 0;
                qfree();
                v2 = (__int64)v122;
              }
              ++v94;
            }
            while ( v93 != v94 );
          }
          goto LABEL_144;
        }
      }
      else if ( dest )
      {
        for ( i = 0; i != v107; ++i )
        {
          v97 = (_QWORD *)(v2 + 24 * i);
          if ( *v97 )
          {
            v97[1] = 0;
            qfree();
            v2 = (__int64)v122;
          }
        }
LABEL_144:
        v123.m128i_i64[0] = 0;
        qfree();
      }
    }
LABEL_46:
    if ( src )
    {
      v121.m128i_i64[0] = 0;
      qfree();
    }
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree();
    }
    if ( s )
    {
      *(_QWORD *)&v117 = 0;
      qfree();
    }
    if ( !v50 )
      goto LABEL_2;
    if ( v50[1] != dbg )
    {
      sub_E7D10(nullptr, 1, v2, v3, v4, v5);
      sub_E7D10(v50, 0, v51, v52, v53, v54);
      if ( (*(_BYTE *)(a1 + 280) & 1) == 0 )
        return 1;
LABEL_55:
      sub_EE920();
      return 1;
    }
  }
  else
  {
    if ( src )
    {
      v121.m128i_i64[0] = 0;
      qfree();
    }
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree();
    }
    if ( s )
    {
      *(_QWORD *)&v117 = 0;
      qfree();
    }
  }
LABEL_3:
  if ( (*(_BYTE *)(a1 + 280) & 1) != 0 )
    goto LABEL_55;
  return 1;
}

