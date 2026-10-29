__int64 __fastcall sub_64C150(
        _BYTE *a1,
        __int64 *a2,
        char *a3,
        const char *a4,
        unsigned __int8 a5,
        char a6,
        int a7,
        _BYTE *a8,
        char *s)
{
  char v9; // r14
  const char *v10; // r9
  unsigned __int64 v11; // r15
  unsigned __int8 v13; // r13
  char v14; // r10
  unsigned int v15; // r15d
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  _BYTE *v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  char v24; // al
  char v26; // r15
  __int64 v27; // rax
  unsigned __int8 *v28; // r13
  unsigned __int8 v29; // al
  const char *v30; // r14
  __int64 v31; // r15
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  _BYTE *v36; // rsi
  __int64 v37; // r15
  size_t v38; // rax
  size_t v39; // r9
  size_t v40; // r8
  _BYTE *v41; // rsi
  size_t v42; // rdx
  __int64 v43; // r14
  unsigned __int64 v44; // r15
  _BYTE *v45; // rsi
  unsigned __int64 v46; // r15
  __int64 v47; // r14
  _BYTE *v48; // rsi
  __int64 v49; // r14
  unsigned __int64 v50; // r15
  _BYTE *v51; // rsi
  int v52; // r8d
  int v53; // r9d
  _BYTE *v54; // r10
  int v55; // eax
  int v56; // edx
  __int64 v57; // rax
  bool v58; // al
  __int16 v59; // cx
  __int64 v60; // r12
  unsigned __int64 v61; // r13
  _BYTE *v62; // rsi
  unsigned __int64 v63; // r12
  size_t v64; // r8
  __int64 v65; // r13
  size_t v66; // r9
  _BYTE *v67; // rsi
  __int64 v68; // r14
  char v69; // dl
  _BYTE *v70; // r10
  int v71; // r13d
  __int64 i; // r8
  __int64 v73; // r9
  _BYTE *v74; // r10
  unsigned __int64 v75; // rdx
  _BYTE *v76; // rsi
  __int64 v77; // r15
  __int64 v78; // r9
  unsigned __int64 v79; // rdx
  _BYTE *v80; // rsi
  _BYTE *v81; // r10
  __int64 v82; // r13
  __int64 v83; // rax
  __int64 v84; // r14
  char v85; // al
  void *v86; // r13
  char v87; // al
  const char *v88; // rsi
  __int64 tinfo_property; // rax
  __int64 v90; // r13
  __int64 v91; // r8
  __m128i si128; // xmm0
  char *v93; // r13
  char v94; // [rsp+0h] [rbp-160h]
  __int64 v95; // [rsp+8h] [rbp-158h]
  __int64 v96; // [rsp+8h] [rbp-158h]
  _BYTE *v97; // [rsp+10h] [rbp-150h]
  _BYTE *v98; // [rsp+10h] [rbp-150h]
  char v99; // [rsp+1Ch] [rbp-144h]
  size_t v100; // [rsp+20h] [rbp-140h]
  _BYTE *v101; // [rsp+20h] [rbp-140h]
  _BYTE *v102; // [rsp+20h] [rbp-140h]
  _BYTE *v103; // [rsp+20h] [rbp-140h]
  _BYTE *v104; // [rsp+20h] [rbp-140h]
  _BYTE *v105; // [rsp+20h] [rbp-140h]
  unsigned __int64 v106; // [rsp+20h] [rbp-140h]
  unsigned __int64 v107; // [rsp+20h] [rbp-140h]
  _BYTE *v108; // [rsp+20h] [rbp-140h]
  size_t v109; // [rsp+28h] [rbp-138h]
  int v110; // [rsp+28h] [rbp-138h]
  _BYTE *v111; // [rsp+28h] [rbp-138h]
  _BYTE *v112; // [rsp+28h] [rbp-138h]
  _BYTE *v113; // [rsp+28h] [rbp-138h]
  char v114; // [rsp+30h] [rbp-130h]
  unsigned __int64 v115; // [rsp+30h] [rbp-130h]
  unsigned __int64 v116; // [rsp+30h] [rbp-130h]
  size_t v117; // [rsp+30h] [rbp-130h]
  size_t v118; // [rsp+30h] [rbp-130h]
  __int64 *v119; // [rsp+30h] [rbp-130h]
  char v120; // [rsp+30h] [rbp-130h]
  _BYTE *v121; // [rsp+30h] [rbp-130h]
  const char *srca; // [rsp+38h] [rbp-128h]
  bool src; // [rsp+38h] [rbp-128h]
  char v124; // [rsp+40h] [rbp-120h]
  unsigned __int64 v125; // [rsp+40h] [rbp-120h]
  __int64 v126; // [rsp+48h] [rbp-118h]
  size_t n; // [rsp+50h] [rbp-110h]
  size_t na; // [rsp+50h] [rbp-110h]
  bool v129; // [rsp+63h] [rbp-FDh]
  char v132; // [rsp+68h] [rbp-F8h]
  size_t v133; // [rsp+68h] [rbp-F8h]
  void *v136; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v137; // [rsp+88h] [rbp-D8h]
  void *v138; // [rsp+A0h] [rbp-C0h] BYREF
  __int128 v139; // [rsp+A8h] [rbp-B8h]
  void *ptr; // [rsp+C0h] [rbp-A0h] BYREF
  __int128 v141; // [rsp+C8h] [rbp-98h]
  char v142[72]; // [rsp+E0h] [rbp-80h] BYREF
  unsigned __int64 v143; // [rsp+128h] [rbp-38h]

  v9 = a6;
  v10 = s;
  v143 = __readfsqword(0x28u);
  v11 = *a2;
  if ( !(unsigned __int8)*a2 )
    return 0;
  v13 = *a2;
  v126 = *(_QWORD *)(*(_QWORD *)a1 + 1632LL);
  if ( (a1[34] & 2) != 0 )
  {
    if ( (v11 & 0xF) == 0xC )
    {
      a4 = nullptr;
      goto LABEL_3;
    }
    if ( (v11 & 0xF) != 0xD )
      return 1;
    v57 = sub_51B8E0(v126, v11);
    if ( v57 )
    {
      v10 = s;
      if ( !*(_QWORD *)(v57 + 32) || (*(_BYTE *)(v57 + 68) & 0x40) == 0 && (*(_BYTE *)(v57 + 70) & 0xF) == 0xD )
        goto LABEL_3;
      return 1;
    }
    return 0;
  }
LABEL_3:
  v136 = nullptr;
  v137 = 0;
  if ( v10 )
  {
    srca = v10;
    n = strlen(v10);
    v136 = (void *)qvector_reserve(&v136, 0, n + 1, 1);
    *(_QWORD *)&v137 = n + 1;
    memmove(v136, srca, n);
    *((_BYTE *)v136 + n) = 0;
  }
  if ( !a3 || *a3 )
  {
    if ( (a1[32] & 2) != 0 )
    {
      if ( (v11 & 0xF) != 0xD
        || (v16 = *a2, (*a2 & 0x100) != 0)
        && (v17 = sub_51B8E0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), v16)) != 0
        && (*(_BYTE *)(v17 + 68) & 0x40) == 0
        && sub_51C490(v17) )
      {
        sub_640FE0((__int64 *)&v136, "typedef", 32);
        v18 = v137;
        v19 = 2;
        if ( (_QWORD)v137 )
        {
          v19 = v137 + 1;
          v18 = v137 - 1;
        }
        v20 = v136;
        if ( *((_QWORD *)&v137 + 1) < v19 )
        {
          v125 = v19;
          v136 = (void *)qvector_reserve(&v136, v136, v19, 1);
          v19 = v125;
          v20 = v136;
        }
        *(_QWORD *)&v137 = v19;
        v20[v18] = 32;
        *((_BYTE *)v136 + v18 + 1) = 0;
      }
    }
  }
  else
  {
    a3 = nullptr;
  }
  src = 0;
  v124 = 0;
  while ( 2 )
  {
    v14 = v13 & 0xF;
    switch ( v13 & 0xF )
    {
      case 0xA:
      case 0xB:
        v26 = 0;
        if ( !a6 )
          goto LABEL_32;
        v58 = sub_640990(a2);
        v14 = v13 & 0xF;
        if ( v58 )
          goto LABEL_32;
        goto LABEL_104;
      case 0xC:
        sub_644B90(v126, (__int64 *)&v136, (unsigned __int64 *)a2, 2055);
        v21 = (__int64 *)sub_51B8E0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), *a2);
        if ( !v21 )
          goto LABEL_26;
        v23 = *v21;
        ++*((_DWORD *)a1 + 10);
        v24 = sub_64ACD0((__int64)a1, (__int64 *)&v136, v23, (__int64)a3, v13, v22);
        --*((_DWORD *)a1 + 10);
        if ( !v24 )
          goto LABEL_26;
        goto LABEL_87;
      case 0xD:
        v54 = (_BYTE *)sub_51B8E0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), *a2);
        if ( !v54 )
          goto LABEL_26;
        v55 = *((_DWORD *)a1 + 8);
        if ( !*((_QWORD *)v54 + 4) )
          goto LABEL_128;
        if ( (v55 & 0x20) != 0 )
        {
          v55 &= ~0x20u;
          *((_DWORD *)a1 + 8) = v55;
          v13 = v54[70];
          if ( (v13 & 0xF) == 0xD )
          {
            v124 = 1;
LABEL_128:
            v110 = v55 & 0x20000;
            if ( (v55 & 0x20000) != 0 )
            {
              v129 = 1;
              if ( a3 )
                v129 = (v55 & 2) == 0;
              v114 = (v13 & 0x2F) == 0xD
                  && (v55 & 0x10) == 0
                  && !*((_DWORD *)a1 + 10)
                  && *(_BYTE *)(*(_QWORD *)v54 + 50LL) != 0;
              goto LABEL_135;
            }
            if ( (v13 & 0x3F) != 0x2D )
            {
              v68 = *(_QWORD *)v54;
              v114 = 0;
              v69 = *(_BYTE *)(*(_QWORD *)v54 + 50LL);
              if ( v69 )
              {
                if ( (v55 & 0x10) == 0 && !*((_DWORD *)a1 + 10) )
                {
                  na = (size_t)v54;
                  qsnprintf((int)v142, 64, (int)&unk_22B61E6, 1 << ((v69 & 7) - 1), v52, v53, v94);
                  v114 = sub_642A10((__int64)a1, v142, nullptr, 0, 0);
                  v54 = (_BYTE *)na;
                  if ( !v114 )
                    goto LABEL_26;
                }
              }
              v99 = v13;
              if ( v13 > 0x3Fu )
              {
                v108 = v54;
                sub_6415D0((__int64 *)&v136, v13, 1);
                v54 = v108;
              }
              v101 = v54;
              sub_642B80((__int64)a1, (__int64 *)&v136, v13, v54);
              sub_646580(
                v126,
                (__int64 *)&v136,
                (unsigned __int64 *)a2,
                *(_BYTE *)(v68 + 49),
                *(_DWORD *)(v68 + 44),
                *(_QWORD *)(v68 + 24),
                nullptr);
              v70 = v101;
              if ( a3 && (a1[32] & 2) != 0 )
              {
                if ( *a3 )
                {
                  sub_640FE0((__int64 *)&v136, a3, 37);
                  v70 = v101;
                }
                v102 = v70;
                sub_640A60((__int64 *)&v136, 32);
                v129 = 0;
                v70 = v102;
              }
              else
              {
                v129 = 1;
              }
              *((_DWORD *)a1 + 8) &= ~2u;
              v71 = 0;
              for ( i = 0; (unsigned __int64)v71 < *(_QWORD *)(v68 + 8); i = ++v71 )
              {
                v77 = *(_QWORD *)v68 + (i << 7);
                if ( (*(_BYTE *)(v77 + 116) & 0x20) != 0 )
                {
                  v105 = v70;
                  sub_641C10((__int64 *)&v136, v110 == 0 ? 58 : 44);
                  v78 = v137;
                  v74 = v105;
                  v79 = 2;
                  if ( (_QWORD)v137 )
                  {
                    v79 = v137 + 1;
                    v78 = v137 - 1;
                  }
                  v80 = v136;
                  if ( *((_QWORD *)&v137 + 1) < v79 )
                  {
                    v95 = v78;
                    v97 = v105;
                    v106 = v79;
                    v136 = (void *)qvector_reserve(&v136, v136, v79, 1);
                    v78 = v95;
                    v80 = v136;
                    v74 = v97;
                    v79 = v106;
                  }
                  *(_QWORD *)&v137 = v79;
                  v80[v78] = 32;
                  *((_BYTE *)v136 + v78 + 1) = 0;
                  if ( *(char *)(v77 + 116) < 0 )
                  {
                    v103 = v74;
                    sub_640D90((__int64 *)&v136, "virtual");
                    v73 = v137;
                    v74 = v103;
                    v75 = 2;
                    if ( (_QWORD)v137 )
                    {
                      v75 = v137 + 1;
                      v73 = v137 - 1;
                    }
                    v76 = v136;
                    if ( *((_QWORD *)&v137 + 1) < v75 )
                    {
                      v96 = v73;
                      v98 = v103;
                      v107 = v75;
                      v136 = (void *)qvector_reserve(&v136, v136, v75, 1);
                      v73 = v96;
                      v76 = v136;
                      v74 = v98;
                      v75 = v107;
                    }
                    *(_QWORD *)&v137 = v75;
                    v76[v73] = 32;
                    *((_BYTE *)v136 + v73 + 1) = 0;
                  }
                  v104 = v74;
                  if ( !(unsigned __int8)sub_6474E0(
                                           (__int64)a1,
                                           (__int64 *)&v136,
                                           (__int64 *)(v77 + 64),
                                           *(_BYTE *)(v77 + 64),
                                           0,
                                           nullptr,
                                           nullptr,
                                           0,
                                           0) )
                    goto LABEL_26;
                  ++v110;
                  v70 = v104;
                }
              }
              v111 = v70;
              sub_640C70((__int64 *)&v136);
              v81 = v111;
              if ( (a1[33] & 0x40) != 0 )
              {
                v82 = sub_5244C0(v111, *(_QWORD *)a1, nullptr, 0, v99);
                v83 = *(_QWORD *)(v68 + 8);
                v81 = v111;
                if ( !v83 )
                {
                  if ( v82 == -1 )
                    goto LABEL_172;
                  goto LABEL_171;
                }
                tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)v68 + (v83 << 7) - 64), 287);
                v81 = v111;
                if ( v82 != -1 )
                {
LABEL_171:
                  v112 = v81;
                  sub_357520((__int64 *)&v136);
                  v81 = v112;
                  goto LABEL_172;
                }
                if ( tinfo_property )
                {
                  v90 = ((_QWORD)v137 == 0) + (_QWORD)v137 - 1LL;
                  v91 = v90 + 21;
                  if ( *((_QWORD *)&v137 + 1) < (unsigned __int64)(v90 + 22) )
                  {
                    v136 = (void *)qvector_reserve(&v136, v136, v90 + 22, 1);
                    v91 = v90 + 21;
                    v81 = v111;
                  }
                  si128 = _mm_load_si128((const __m128i *)&xmmword_2383E40);
                  *(_QWORD *)&v137 = v90 + 22;
                  *((_BYTE *)v136 + v91) = 0;
                  v93 = (char *)v136 + v90;
                  *(__m128i *)v93 = si128;
                  *(_QWORD *)(v93 + 13) = 0x402657A69735F65LL;
                }
              }
LABEL_172:
              v113 = v81;
              if ( !(unsigned __int8)sub_642A10((__int64)a1, (const char *)v136, a4, a5, 1u) )
                goto LABEL_26;
              if ( (a1[33] & 0x40) != 0 )
              {
LABEL_43:
                v15 = 1;
                goto LABEL_27;
              }
              *(_QWORD *)&v137 = 0;
              sub_641C10((__int64 *)&v136, 123);
              if ( (unsigned __int8)sub_642A10((__int64)a1, (const char *)v136, nullptr, 0, 1u)
                && (unsigned __int8)sub_64D890((int)a1)
                && ((a1[33] & 0x10) == 0 || !*((_QWORD *)v113 + 1) || (unsigned __int8)sub_64DEB0((int)a1)) )
              {
LABEL_135:
                *(_QWORD *)&v137 = 0;
                sub_641C10((__int64 *)&v136, 125);
                if ( a3 )
                {
                  if ( v129 )
                  {
                    sub_640A60((__int64 *)&v136, 32);
                    if ( *a3 )
                      sub_640FE0((__int64 *)&v136, a3, 37);
                  }
                }
                v26 = a6;
                v9 = 0;
                a4 = nullptr;
                goto LABEL_34;
              }
LABEL_26:
              v15 = 0;
              goto LABEL_27;
            }
            if ( v13 > 0x3Fu )
            {
              v121 = v54;
              sub_6415D0((__int64 *)&v136, v13, 1);
              v54 = v121;
            }
            v119 = (__int64 *)v54;
            sub_642B80((__int64)a1, (__int64 *)&v136, v13, v54);
            v84 = *v119;
            sub_644B90(v126, (__int64 *)&v136, (unsigned __int64 *)a2, 6151);
            if ( (*(_BYTE *)(v84 + 52) & 0x10) != 0 )
            {
              sub_640D90((__int64 *)&v136, "__bitmask");
              sub_640A60((__int64 *)&v136, 32);
            }
            v138 = nullptr;
            v139 = 0;
            v85 = sub_643120(v84, (__int64)&v138);
            v86 = v138;
            if ( v85 )
            {
              if ( (_QWORD)v139 && *(_BYTE *)v138 )
                sub_640D90((__int64 *)&v136, (const char *)v138);
              sub_640A60((__int64 *)&v136, 32);
            }
            if ( a3 && (*((_DWORD *)a1 + 8) & 2) != 0 )
            {
              if ( *a3 )
                sub_640FE0((__int64 *)&v136, a3, 37);
              sub_640A60((__int64 *)&v136, 32);
              v129 = 0;
            }
            else
            {
              v129 = 1;
            }
            *((_DWORD *)a1 + 8) &= ~2u;
            if ( (*(_BYTE *)(v84 + 52) & 7) == 0 )
              getinf(61);
            if ( (*(_BYTE *)(v84 + 52) & 7) != 0 || (*(_DWORD *)(v84 + 48) & 0xC0) != 0 )
            {
              sub_357520((__int64 *)&v136);
              v87 = 1;
            }
            else
            {
              v87 = 0;
            }
            v120 = v87;
            sub_640C70((__int64 *)&v136);
            if ( (a1[33] & 0x40) != 0 && !v120 )
              sub_357520((__int64 *)&v136);
            v15 = sub_642A10((__int64)a1, (const char *)v136, a4, 1u, 1u);
            if ( (_BYTE)v15 )
            {
              if ( (a1[33] & 0x40) != 0 )
                goto LABEL_218;
              *(_QWORD *)&v137 = 0;
              sub_641C10((__int64 *)&v136, 123);
              if ( (unsigned __int8)sub_642A10((__int64)a1, (const char *)v136, nullptr, 0, 1u) )
              {
                LODWORD(v88) = (_DWORD)a3;
                ptr = nullptr;
                v141 = 0;
                if ( !a3 )
                {
                  if ( (*a2 & 0x100) != 0 && (get_tinfo_pdata(&ptr, *a2, 0), (_QWORD)v141) )
                    LODWORD(v88) = (_DWORD)ptr;
                  else
                    v88 = haystack;
                }
                if ( (unsigned __int8)sub_646420((__int64)a1, (int)v88, (_QWORD *)v84) )
                {
                  if ( ptr )
                  {
                    *(_QWORD *)&v141 = 0;
                    qfree(ptr);
                  }
                  if ( v86 )
                    qfree(v86);
                  v114 = 0;
                  goto LABEL_135;
                }
                if ( ptr )
                {
                  *(_QWORD *)&v141 = 0;
                  qfree(ptr);
                }
              }
            }
            v15 = 0;
LABEL_218:
            if ( v86 )
              qfree(v86);
            goto LABEL_27;
          }
          if ( sub_51C490((__int64)v54) )
          {
            v56 = *((_DWORD *)a1 + 8);
            *((_DWORD *)a1 + 8) = v56 & 0xFFFFFFF7;
            src = (v56 & 8) != 0;
          }
          v124 = 1;
          continue;
        }
        if ( !(unsigned __int8)sub_6474E0((__int64)a1, (__int64 *)&v136, a2, v13, (a7 & 0x10) == 0, a3, nullptr, 0, 0) )
          goto LABEL_26;
LABEL_87:
        v114 = 0;
        v26 = a6;
        v9 = 0;
LABEL_34:
        if ( src )
          *((_DWORD *)a1 + 8) |= 8u;
        sub_646580(v126, (__int64 *)&v136, (unsigned __int64 *)a2, v26, a7, -1, a8);
        if ( v9 )
          sub_641290((__int64)&v136, v9, 1);
        if ( *((_DWORD *)a1 + 9) || (a1[32] & 8) != 0 && !*((_DWORD *)a1 + 10) )
        {
          sub_640C70((__int64 *)&v136);
          sub_641C10((__int64 *)&v136, 59);
        }
        if ( !(unsigned __int8)sub_642A10((__int64)a1, (const char *)v136, a4, a5, v124 & 1) )
          goto LABEL_26;
        if ( !v114 )
          goto LABEL_43;
        v15 = sub_642A10((__int64)a1, byte_22B6226, nullptr, 0, 0);
LABEL_27:
        if ( v136 )
        {
          *(_QWORD *)&v137 = 0;
          qfree(v136);
        }
        return v15;
      case 0xE:
        if ( v13 > 0x3Fu )
          sub_6415D0((__int64 *)&v136, v13, 1);
        sub_644B90(v126, (__int64 *)&v136, (unsigned __int64 *)a2, 2055);
        v27 = sub_51B8E0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), *a2);
        v28 = (unsigned __int8 *)v27;
        if ( !v27 )
          goto LABEL_26;
        if ( *(_BYTE *)(v27 + 2) && aUnsigned[0] )
          sub_640D90((__int64 *)&v136, "unsigned ");
        v29 = *v28;
        if ( *v28 == 4 )
        {
          v30 = "__int32";
          goto LABEL_55;
        }
        if ( v29 > 4u )
        {
          if ( v29 == 8 )
          {
            v30 = "__int64";
            goto LABEL_55;
          }
        }
        else
        {
          if ( v29 == 1 )
          {
            v30 = "__int8";
            goto LABEL_55;
          }
          if ( v29 == 2 )
          {
            v30 = "__int16";
            goto LABEL_55;
          }
        }
        v30 = nullptr;
LABEL_55:
        if ( *v30 )
        {
          v31 = v137;
          v32 = 2;
          if ( (_QWORD)v137 )
          {
            v32 = v137 + 1;
            v31 = v137 - 1;
          }
          v33 = v136;
          if ( *((_QWORD *)&v137 + 1) < v32 )
          {
            v116 = v32;
            v136 = (void *)qvector_reserve(&v136, v136, v32, 1);
            v32 = v116;
            v33 = v136;
          }
          *(_QWORD *)&v137 = v32;
          v34 = 2;
          v33[v31] = 1;
          *((_BYTE *)v136 + v31 + 1) = 0;
          v35 = v137;
          if ( (_QWORD)v137 )
          {
            v34 = v137 + 1;
            v35 = v137 - 1;
          }
          v36 = v136;
          if ( *((_QWORD *)&v137 + 1) < v34 )
          {
            v115 = v34;
            v136 = (void *)qvector_reserve(&v136, v136, v34, 1);
            v34 = v115;
            v36 = v136;
          }
          *(_QWORD *)&v137 = v34;
          v36[v35] = 32;
          *((_BYTE *)v136 + v35 + 1) = 0;
          if ( v30 )
          {
            v37 = v137;
            v38 = strlen(v30);
            v39 = v38;
            v40 = v38;
            if ( v37 )
            {
              --v37;
              v40 = v38 + v37;
            }
            v41 = v136;
            v42 = v40 + 1;
            if ( *((_QWORD *)&v137 + 1) < v40 + 1 )
            {
              v100 = v38;
              v109 = v40;
              v117 = v40 + 1;
              v136 = (void *)qvector_reserve(&v136, v136, v42, 1);
              v39 = v100;
              v41 = v136;
              v40 = v109;
              v42 = v117;
            }
            *(_QWORD *)&v137 = v42;
            v41[v40] = 0;
            memmove((char *)v136 + v37, v30, v39);
          }
          v43 = v137;
          v44 = 2;
          if ( (_QWORD)v137 )
          {
            v44 = v137 + 1;
            v43 = v137 - 1;
          }
          v45 = v136;
          if ( *((_QWORD *)&v137 + 1) < v44 )
          {
            v136 = (void *)qvector_reserve(&v136, v136, v44, 1);
            v45 = v136;
          }
          *(_QWORD *)&v137 = v44;
          v46 = 2;
          v45[v43] = 2;
          *((_BYTE *)v136 + v43 + 1) = 0;
          v47 = v137;
          if ( (_QWORD)v137 )
          {
            v46 = v137 + 1;
            v47 = v137 - 1;
          }
          v48 = v136;
          if ( *((_QWORD *)&v137 + 1) < v46 )
          {
            v136 = (void *)qvector_reserve(&v136, v136, v46, 1);
            v48 = v136;
          }
          *(_QWORD *)&v137 = v46;
          v48[v47] = 32;
          *((_BYTE *)v136 + v47 + 1) = 0;
        }
        if ( a3 )
        {
          v49 = v137;
          v50 = 2;
          if ( (_QWORD)v137 )
          {
            v50 = v137 + 1;
            v49 = v137 - 1;
          }
          v51 = v136;
          if ( *((_QWORD *)&v137 + 1) < v50 )
          {
            v136 = (void *)qvector_reserve(&v136, v136, v50, 1);
            v51 = v136;
          }
          *(_QWORD *)&v137 = v50;
          v51[v49] = 32;
          *((_BYTE *)v136 + v49 + 1) = 0;
          if ( *a3 )
            sub_640FE0((__int64 *)&v136, a3, 37);
        }
        sub_357520((__int64 *)&v136);
        goto LABEL_87;
      case 0xF:
        goto LABEL_26;
      default:
LABEL_104:
        v26 = a6;
        v9 = 0;
LABEL_32:
        v132 = v14;
        if ( !(unsigned __int8)sub_6474E0((__int64)a1, (__int64 *)&v136, a2, v13, 0, a3, nullptr, 0, 0) )
          goto LABEL_26;
        v114 = !sub_640990(a2) && v132 != 10;
        if ( v114 )
        {
          v59 = 2 * (v132 != 11) + 2061;
          ptr = nullptr;
          if ( (a7 & 0x10) == 0 )
            v59 = 6159;
          v141 = 0;
          sub_644B90(v126, (__int64 *)&ptr, (unsigned __int64 *)a2, v59);
          if ( (unsigned __int64)v141 > 1 )
          {
            v60 = v137;
            v61 = 2;
            if ( (_QWORD)v137 )
            {
              v61 = v137 + 1;
              v60 = v137 - 1;
            }
            v62 = v136;
            if ( *((_QWORD *)&v137 + 1) < v61 )
            {
              v136 = (void *)qvector_reserve(&v136, v136, v61, 1);
              v62 = v136;
            }
            *(_QWORD *)&v137 = v61;
            v62[v60] = 32;
            *((_BYTE *)v136 + v60 + 1) = 0;
            v63 = v141;
            if ( (_QWORD)v141 )
            {
              v64 = v141 - 1;
              if ( (_QWORD)v141 != 1 )
              {
                v65 = v137;
                v66 = v141 - 1;
                if ( (_QWORD)v137 )
                {
                  v65 = v137 - 1;
                  v66 = v64 + v137 - 1;
                  v63 = v141 + v137 - 1;
                }
                v67 = v136;
                if ( *((_QWORD *)&v137 + 1) < v63 )
                {
                  v118 = v66;
                  v133 = v141 - 1;
                  v136 = (void *)qvector_reserve(&v136, v136, v63, 1);
                  v66 = v118;
                  v67 = v136;
                  v64 = v133;
                }
                *(_QWORD *)&v137 = v63;
                v67[v66] = 0;
                memcpy((char *)v136 + v65, ptr, v64);
              }
            }
          }
          if ( ptr )
          {
            *(_QWORD *)&v141 = 0;
            qfree(ptr);
          }
          v114 = 0;
        }
        goto LABEL_34;
    }
  }
}

