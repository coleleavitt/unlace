__int64 __fastcall sub_669A50(
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
  char v13; // r13
  char v14; // r10
  unsigned int v15; // r15d
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  _BYTE *v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rdx
  char v23; // al
  char v25; // r15
  __int64 v26; // rax
  unsigned __int8 *v27; // r13
  unsigned __int8 v28; // al
  const char *v29; // r14
  __int64 v30; // r15
  unsigned __int64 v31; // rdx
  _BYTE *v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // r15
  _BYTE *v35; // rsi
  __int64 v36; // r15
  size_t v37; // rax
  size_t v38; // r9
  size_t v39; // r8
  _BYTE *v40; // rsi
  size_t v41; // rdx
  __int64 v42; // r14
  unsigned __int64 v43; // r15
  _BYTE *v44; // rsi
  unsigned __int64 v45; // r15
  __int64 v46; // r14
  _BYTE *v47; // rsi
  __int64 v48; // r14
  unsigned __int64 v49; // r15
  _BYTE *v50; // rsi
  int v51; // r8d
  int v52; // r9d
  _BYTE *v53; // r10
  int v54; // eax
  int v55; // edx
  __int64 v56; // rax
  bool v57; // al
  __int16 v58; // cx
  __int64 v59; // r12
  unsigned __int64 v60; // r13
  _BYTE *v61; // rsi
  unsigned __int64 v62; // r12
  size_t v63; // r8
  __int64 v64; // r13
  size_t v65; // r9
  _BYTE *v66; // rsi
  __int64 v67; // r14
  char v68; // dl
  _BYTE *v69; // r10
  int v70; // r13d
  __int64 i; // rax
  __int64 v72; // r9
  _BYTE *v73; // r10
  unsigned __int64 v74; // rdx
  _BYTE *v75; // rsi
  __int64 v76; // r15
  __int64 v77; // r9
  unsigned __int64 v78; // rdx
  _BYTE *v79; // rsi
  _BYTE *v80; // r10
  __int64 v81; // r13
  __int64 v82; // rax
  __int64 v83; // r14
  char v84; // al
  void *v85; // r13
  char v86; // al
  const char *v87; // rsi
  __int64 tinfo_property; // rax
  __int64 v89; // r13
  __int64 v90; // r8
  __m128i si128; // xmm0
  char *v92; // r13
  __int64 v93; // [rsp+8h] [rbp-158h]
  __int64 v94; // [rsp+8h] [rbp-158h]
  _BYTE *v95; // [rsp+10h] [rbp-150h]
  _BYTE *v96; // [rsp+10h] [rbp-150h]
  char v97; // [rsp+1Ch] [rbp-144h]
  size_t v98; // [rsp+20h] [rbp-140h]
  _BYTE *v99; // [rsp+20h] [rbp-140h]
  _BYTE *v100; // [rsp+20h] [rbp-140h]
  _BYTE *v101; // [rsp+20h] [rbp-140h]
  _BYTE *v102; // [rsp+20h] [rbp-140h]
  _BYTE *v103; // [rsp+20h] [rbp-140h]
  unsigned __int64 v104; // [rsp+20h] [rbp-140h]
  unsigned __int64 v105; // [rsp+20h] [rbp-140h]
  _BYTE *v106; // [rsp+20h] [rbp-140h]
  size_t v107; // [rsp+28h] [rbp-138h]
  int v108; // [rsp+28h] [rbp-138h]
  _BYTE *v109; // [rsp+28h] [rbp-138h]
  _BYTE *v110; // [rsp+28h] [rbp-138h]
  _BYTE *v111; // [rsp+28h] [rbp-138h]
  char v112; // [rsp+30h] [rbp-130h]
  unsigned __int64 v113; // [rsp+30h] [rbp-130h]
  unsigned __int64 v114; // [rsp+30h] [rbp-130h]
  size_t v115; // [rsp+30h] [rbp-130h]
  size_t v116; // [rsp+30h] [rbp-130h]
  __int64 *v117; // [rsp+30h] [rbp-130h]
  char v118; // [rsp+30h] [rbp-130h]
  _BYTE *v119; // [rsp+30h] [rbp-130h]
  const char *srca; // [rsp+38h] [rbp-128h]
  bool src; // [rsp+38h] [rbp-128h]
  char v122; // [rsp+40h] [rbp-120h]
  unsigned __int64 v123; // [rsp+40h] [rbp-120h]
  __int64 v124; // [rsp+48h] [rbp-118h]
  size_t n; // [rsp+50h] [rbp-110h]
  size_t na; // [rsp+50h] [rbp-110h]
  bool v127; // [rsp+63h] [rbp-FDh]
  char v130; // [rsp+68h] [rbp-F8h]
  size_t v131; // [rsp+68h] [rbp-F8h]
  void *v134; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v135; // [rsp+88h] [rbp-D8h]
  void *v136; // [rsp+A0h] [rbp-C0h] BYREF
  __int128 v137; // [rsp+A8h] [rbp-B8h]
  void *ptr; // [rsp+C0h] [rbp-A0h] BYREF
  __int128 v139; // [rsp+C8h] [rbp-98h]
  char v140[72]; // [rsp+E0h] [rbp-80h] BYREF
  unsigned __int64 v141; // [rsp+128h] [rbp-38h]

  v9 = a6;
  v10 = s;
  v141 = __readfsqword(0x28u);
  v11 = *a2;
  if ( !(unsigned __int8)*a2 )
    return 0;
  v13 = *a2;
  v124 = *(_QWORD *)(*(_QWORD *)a1 + 1824LL);
  if ( (a1[34] & 2) != 0 )
  {
    if ( (v11 & 0xF) == 0xC )
    {
      a4 = nullptr;
      goto LABEL_3;
    }
    if ( (v11 & 0xF) != 0xD )
      return 1;
    v56 = sub_534260(v124, v11);
    if ( v56 )
    {
      v10 = s;
      if ( !*(_QWORD *)(v56 + 32) || (*(_BYTE *)(v56 + 68) & 0x40) == 0 && (*(_BYTE *)(v56 + 70) & 0xF) == 0xD )
        goto LABEL_3;
      return 1;
    }
    return 0;
  }
LABEL_3:
  v134 = nullptr;
  v135 = 0;
  if ( v10 )
  {
    srca = v10;
    n = strlen(v10);
    v134 = (void *)qvector_reserve(&v134, 0, n + 1, 1);
    *(_QWORD *)&v135 = n + 1;
    memmove(v134, srca, n);
    *((_BYTE *)v134 + n) = 0;
  }
  if ( !a3 || *a3 )
  {
    if ( (a1[32] & 2) != 0 )
    {
      if ( (v11 & 0xF) != 0xD
        || (v16 = *a2, (*a2 & 0x100) != 0)
        && (v17 = sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), v16)) != 0
        && (*(_BYTE *)(v17 + 68) & 0x40) == 0
        && sub_534FC0(v17) )
      {
        sub_65E8C0((__int64 *)&v134, "typedef", 32);
        v18 = v135;
        v19 = 2;
        if ( (_QWORD)v135 )
        {
          v19 = v135 + 1;
          v18 = v135 - 1;
        }
        v20 = v134;
        if ( *((_QWORD *)&v135 + 1) < v19 )
        {
          v123 = v19;
          v134 = (void *)qvector_reserve(&v134, v134, v19, 1);
          v19 = v123;
          v20 = v134;
        }
        *(_QWORD *)&v135 = v19;
        v20[v18] = 32;
        *((_BYTE *)v134 + v18 + 1) = 0;
      }
    }
  }
  else
  {
    a3 = nullptr;
  }
  src = 0;
  v122 = 0;
  while ( 2 )
  {
    v14 = v13 & 0xF;
    switch ( v13 & 0xF )
    {
      case 0xA:
      case 0xB:
        v25 = 0;
        if ( !a6 )
          goto LABEL_32;
        v57 = sub_65E270(a2);
        v14 = v13 & 0xF;
        if ( v57 )
          goto LABEL_32;
        goto LABEL_104;
      case 0xC:
        sub_662480(v124, (__int64 *)&v134, (unsigned __int64 *)a2, 2055);
        v21 = (__int64 *)sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), *a2);
        if ( !v21 )
          goto LABEL_26;
        v22 = *v21;
        ++*((_DWORD *)a1 + 10);
        v23 = sub_6685D0((__int64)a1, (__int64 *)&v134, v22, a3, v13);
        --*((_DWORD *)a1 + 10);
        if ( !v23 )
          goto LABEL_26;
        goto LABEL_87;
      case 0xD:
        v53 = (_BYTE *)sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), *a2);
        if ( !v53 )
          goto LABEL_26;
        v54 = *((_DWORD *)a1 + 8);
        if ( !*((_QWORD *)v53 + 4) )
          goto LABEL_128;
        if ( (v54 & 0x20) != 0 )
        {
          v54 &= ~0x20u;
          *((_DWORD *)a1 + 8) = v54;
          v13 = v53[70];
          if ( (v13 & 0xF) == 0xD )
          {
            v122 = 1;
LABEL_128:
            v108 = v54 & 0x20000;
            if ( (v54 & 0x20000) != 0 )
            {
              v127 = 1;
              if ( a3 )
                v127 = (v54 & 2) == 0;
              v112 = (v13 & 0x2F) == 0xD
                  && (v54 & 0x10) == 0
                  && !*((_DWORD *)a1 + 10)
                  && *(_BYTE *)(*(_QWORD *)v53 + 50LL) != 0;
              goto LABEL_135;
            }
            if ( (v13 & 0x3F) != 0x2D )
            {
              v67 = *(_QWORD *)v53;
              v112 = 0;
              v68 = *(_BYTE *)(*(_QWORD *)v53 + 50LL);
              if ( v68 )
              {
                if ( (v54 & 0x10) == 0 && !*((_DWORD *)a1 + 10) )
                {
                  na = (size_t)v53;
                  qsnprintf((unsigned int)v140, 64, (unsigned int)&unk_22D968F, 1 << ((v68 & 7) - 1), v51, v52);
                  v112 = sub_6602F0((__int64)a1, v140, nullptr, 0, 0);
                  v53 = (_BYTE *)na;
                  if ( !v112 )
                    goto LABEL_26;
                }
              }
              v97 = v13;
              if ( (unsigned __int8)v13 > 0x3Fu )
              {
                v106 = v53;
                sub_65EEB0((__int64 *)&v134, v13, 1);
                v53 = v106;
              }
              v99 = v53;
              sub_660460((__int64)a1, (__int64 *)&v134, v13, v53);
              sub_663E80(
                v124,
                (__int64 *)&v134,
                (unsigned __int64 *)a2,
                *(_BYTE *)(v67 + 49),
                *(_DWORD *)(v67 + 44),
                *(_QWORD *)(v67 + 24),
                nullptr);
              v69 = v99;
              if ( a3 && (a1[32] & 2) != 0 )
              {
                if ( *a3 )
                {
                  sub_65E8C0((__int64 *)&v134, a3, 37);
                  v69 = v99;
                }
                v100 = v69;
                sub_65E340((__int64 *)&v134, 32);
                v127 = 0;
                v69 = v100;
              }
              else
              {
                v127 = 1;
              }
              *((_DWORD *)a1 + 8) &= ~2u;
              v70 = 0;
              for ( i = 0; (unsigned __int64)v70 < *(_QWORD *)(v67 + 8); i = ++v70 )
              {
                v76 = *(_QWORD *)v67 + 144 * i;
                if ( (*(_BYTE *)(v76 + 132) & 0x20) != 0 )
                {
                  v103 = v69;
                  sub_65F4F0((__int64 *)&v134, v108 == 0 ? 58 : 44);
                  v77 = v135;
                  v73 = v103;
                  v78 = 2;
                  if ( (_QWORD)v135 )
                  {
                    v78 = v135 + 1;
                    v77 = v135 - 1;
                  }
                  v79 = v134;
                  if ( *((_QWORD *)&v135 + 1) < v78 )
                  {
                    v93 = v77;
                    v95 = v103;
                    v104 = v78;
                    v134 = (void *)qvector_reserve(&v134, v134, v78, 1);
                    v77 = v93;
                    v79 = v134;
                    v73 = v95;
                    v78 = v104;
                  }
                  *(_QWORD *)&v135 = v78;
                  v79[v77] = 32;
                  *((_BYTE *)v134 + v77 + 1) = 0;
                  if ( *(char *)(v76 + 132) < 0 )
                  {
                    v101 = v73;
                    sub_65E670((__int64 *)&v134, "virtual");
                    v72 = v135;
                    v73 = v101;
                    v74 = 2;
                    if ( (_QWORD)v135 )
                    {
                      v74 = v135 + 1;
                      v72 = v135 - 1;
                    }
                    v75 = v134;
                    if ( *((_QWORD *)&v135 + 1) < v74 )
                    {
                      v94 = v72;
                      v96 = v101;
                      v105 = v74;
                      v134 = (void *)qvector_reserve(&v134, v134, v74, 1);
                      v72 = v94;
                      v75 = v134;
                      v73 = v96;
                      v74 = v105;
                    }
                    *(_QWORD *)&v135 = v74;
                    v75[v72] = 32;
                    *((_BYTE *)v134 + v72 + 1) = 0;
                  }
                  v102 = v73;
                  if ( !(unsigned __int8)sub_664DE0(
                                           (__int64)a1,
                                           (__int64 *)&v134,
                                           (__int64 *)(v76 + 64),
                                           *(_BYTE *)(v76 + 64),
                                           0,
                                           nullptr,
                                           nullptr,
                                           0,
                                           0) )
                    goto LABEL_26;
                  ++v108;
                  v69 = v102;
                }
              }
              v109 = v69;
              sub_65E550((__int64 *)&v134);
              v80 = v109;
              if ( (a1[33] & 0x40) != 0 )
              {
                v81 = sub_53D190(v109, *(_QWORD *)a1, nullptr, 0, v97);
                v82 = *(_QWORD *)(v67 + 8);
                v80 = v109;
                if ( !v82 )
                {
                  if ( v81 == -1 )
                    goto LABEL_172;
                  goto LABEL_171;
                }
                tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)v67 + 144 * v82 - 80), 287);
                v80 = v109;
                if ( v81 != -1 )
                {
LABEL_171:
                  v110 = v80;
                  sub_35A910((__int64 *)&v134);
                  v80 = v110;
                  goto LABEL_172;
                }
                if ( tinfo_property )
                {
                  v89 = ((_QWORD)v135 == 0) + (_QWORD)v135 - 1LL;
                  v90 = v89 + 21;
                  if ( *((_QWORD *)&v135 + 1) < (unsigned __int64)(v89 + 22) )
                  {
                    v134 = (void *)qvector_reserve(&v134, v134, v89 + 22, 1);
                    v90 = v89 + 21;
                    v80 = v109;
                  }
                  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7E60);
                  *(_QWORD *)&v135 = v89 + 22;
                  *((_BYTE *)v134 + v90) = 0;
                  v92 = (char *)v134 + v89;
                  *(__m128i *)v92 = si128;
                  *(_QWORD *)(v92 + 13) = 0x402657A69735F65LL;
                }
              }
LABEL_172:
              v111 = v80;
              if ( !(unsigned __int8)sub_6602F0((__int64)a1, (const char *)v134, a4, a5, 1u) )
                goto LABEL_26;
              if ( (a1[33] & 0x40) != 0 )
              {
LABEL_43:
                v15 = 1;
                goto LABEL_27;
              }
              *(_QWORD *)&v135 = 0;
              sub_65F4F0((__int64 *)&v134, 123);
              if ( (unsigned __int8)sub_6602F0((__int64)a1, (const char *)v134, nullptr, 0, 1u)
                && (unsigned __int8)sub_66B1A0((int)a1)
                && ((a1[33] & 0x10) == 0 || !*((_QWORD *)v111 + 1) || (unsigned __int8)sub_66B7D0((int)a1)) )
              {
LABEL_135:
                *(_QWORD *)&v135 = 0;
                sub_65F4F0((__int64 *)&v134, 125);
                if ( a3 )
                {
                  if ( v127 )
                  {
                    sub_65E340((__int64 *)&v134, 32);
                    if ( *a3 )
                      sub_65E8C0((__int64 *)&v134, a3, 37);
                  }
                }
                v25 = a6;
                v9 = 0;
                a4 = nullptr;
                goto LABEL_34;
              }
LABEL_26:
              v15 = 0;
              goto LABEL_27;
            }
            if ( (unsigned __int8)v13 > 0x3Fu )
            {
              v119 = v53;
              sub_65EEB0((__int64 *)&v134, v13, 1);
              v53 = v119;
            }
            v117 = (__int64 *)v53;
            sub_660460((__int64)a1, (__int64 *)&v134, v13, v53);
            v83 = *v117;
            sub_662480(v124, (__int64 *)&v134, (unsigned __int64 *)a2, 6151);
            if ( (*(_BYTE *)(v83 + 52) & 0x10) != 0 )
            {
              sub_65E670((__int64 *)&v134, "__bitmask");
              sub_65E340((__int64 *)&v134, 32);
            }
            v136 = nullptr;
            v137 = 0;
            v84 = sub_660A00(v83, (__int64)&v136);
            v85 = v136;
            if ( v84 )
            {
              if ( (_QWORD)v137 && *(_BYTE *)v136 )
                sub_65E670((__int64 *)&v134, (const char *)v136);
              sub_65E340((__int64 *)&v134, 32);
            }
            if ( a3 && (*((_DWORD *)a1 + 8) & 2) != 0 )
            {
              if ( *a3 )
                sub_65E8C0((__int64 *)&v134, a3, 37);
              sub_65E340((__int64 *)&v134, 32);
              v127 = 0;
            }
            else
            {
              v127 = 1;
            }
            *((_DWORD *)a1 + 8) &= ~2u;
            if ( (*(_BYTE *)(v83 + 52) & 7) == 0 )
              getinf(61);
            if ( (*(_BYTE *)(v83 + 52) & 7) != 0 || (*(_DWORD *)(v83 + 48) & 0xC0) != 0 )
            {
              sub_35A910((__int64 *)&v134);
              v86 = 1;
            }
            else
            {
              v86 = 0;
            }
            v118 = v86;
            sub_65E550((__int64 *)&v134);
            if ( (a1[33] & 0x40) != 0 && !v118 )
              sub_35A910((__int64 *)&v134);
            v15 = sub_6602F0((__int64)a1, (const char *)v134, a4, 1u, 1u);
            if ( (_BYTE)v15 )
            {
              if ( (a1[33] & 0x40) != 0 )
                goto LABEL_218;
              *(_QWORD *)&v135 = 0;
              sub_65F4F0((__int64 *)&v134, 123);
              if ( (unsigned __int8)sub_6602F0((__int64)a1, (const char *)v134, nullptr, 0, 1u) )
              {
                LODWORD(v87) = (_DWORD)a3;
                ptr = nullptr;
                v139 = 0;
                if ( !a3 )
                {
                  if ( (*a2 & 0x100) != 0 && (get_tinfo_pdata(&ptr, *a2, 0), (_QWORD)v139) )
                    LODWORD(v87) = (_DWORD)ptr;
                  else
                    v87 = haystack;
                }
                if ( (unsigned __int8)sub_663D20((__int64)a1, (int)v87, (_QWORD *)v83) )
                {
                  if ( ptr )
                  {
                    *(_QWORD *)&v139 = 0;
                    qfree(ptr);
                  }
                  if ( v85 )
                    qfree(v85);
                  v112 = 0;
                  goto LABEL_135;
                }
                if ( ptr )
                {
                  *(_QWORD *)&v139 = 0;
                  qfree(ptr);
                }
              }
            }
            v15 = 0;
LABEL_218:
            if ( v85 )
              qfree(v85);
            goto LABEL_27;
          }
          if ( sub_534FC0((__int64)v53) )
          {
            v55 = *((_DWORD *)a1 + 8);
            *((_DWORD *)a1 + 8) = v55 & 0xFFFFFFF7;
            src = (v55 & 8) != 0;
          }
          v122 = 1;
          continue;
        }
        if ( !(unsigned __int8)sub_664DE0((__int64)a1, (__int64 *)&v134, a2, v13, (a7 & 0x10) == 0, a3, nullptr, 0, 0) )
          goto LABEL_26;
LABEL_87:
        v112 = 0;
        v25 = a6;
        v9 = 0;
LABEL_34:
        if ( src )
          *((_DWORD *)a1 + 8) |= 8u;
        sub_663E80(v124, (__int64 *)&v134, (unsigned __int64 *)a2, v25, a7, -1, a8);
        if ( v9 )
          sub_65EB70((__int64)&v134, v9, 1);
        if ( *((_DWORD *)a1 + 9) || (a1[32] & 8) != 0 && !*((_DWORD *)a1 + 10) )
        {
          sub_65E550((__int64 *)&v134);
          sub_65F4F0((__int64 *)&v134, 59);
        }
        if ( !(unsigned __int8)sub_6602F0((__int64)a1, (const char *)v134, a4, a5, v122 & 1) )
          goto LABEL_26;
        if ( !v112 )
          goto LABEL_43;
        v15 = sub_6602F0((__int64)a1, byte_22D96CF, nullptr, 0, 0);
LABEL_27:
        if ( v134 )
        {
          *(_QWORD *)&v135 = 0;
          qfree(v134);
        }
        return v15;
      case 0xE:
        if ( (unsigned __int8)v13 > 0x3Fu )
          sub_65EEB0((__int64 *)&v134, v13, 1);
        sub_662480(v124, (__int64 *)&v134, (unsigned __int64 *)a2, 2055);
        v26 = sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), *a2);
        v27 = (unsigned __int8 *)v26;
        if ( !v26 )
          goto LABEL_26;
        if ( *(_BYTE *)(v26 + 2) && aUnsigned[0] )
          sub_65E670((__int64 *)&v134, "unsigned ");
        v28 = *v27;
        if ( *v27 == 4 )
        {
          v29 = "__int32";
          goto LABEL_55;
        }
        if ( v28 > 4u )
        {
          if ( v28 == 8 )
          {
            v29 = "__int64";
            goto LABEL_55;
          }
        }
        else
        {
          if ( v28 == 1 )
          {
            v29 = "__int8";
            goto LABEL_55;
          }
          if ( v28 == 2 )
          {
            v29 = "__int16";
            goto LABEL_55;
          }
        }
        v29 = nullptr;
LABEL_55:
        if ( *v29 )
        {
          v30 = v135;
          v31 = 2;
          if ( (_QWORD)v135 )
          {
            v31 = v135 + 1;
            v30 = v135 - 1;
          }
          v32 = v134;
          if ( *((_QWORD *)&v135 + 1) < v31 )
          {
            v114 = v31;
            v134 = (void *)qvector_reserve(&v134, v134, v31, 1);
            v31 = v114;
            v32 = v134;
          }
          *(_QWORD *)&v135 = v31;
          v33 = 2;
          v32[v30] = 1;
          *((_BYTE *)v134 + v30 + 1) = 0;
          v34 = v135;
          if ( (_QWORD)v135 )
          {
            v33 = v135 + 1;
            v34 = v135 - 1;
          }
          v35 = v134;
          if ( *((_QWORD *)&v135 + 1) < v33 )
          {
            v113 = v33;
            v134 = (void *)qvector_reserve(&v134, v134, v33, 1);
            v33 = v113;
            v35 = v134;
          }
          *(_QWORD *)&v135 = v33;
          v35[v34] = 32;
          *((_BYTE *)v134 + v34 + 1) = 0;
          if ( v29 )
          {
            v36 = v135;
            v37 = strlen(v29);
            v38 = v37;
            v39 = v37;
            if ( v36 )
            {
              --v36;
              v39 = v37 + v36;
            }
            v40 = v134;
            v41 = v39 + 1;
            if ( *((_QWORD *)&v135 + 1) < v39 + 1 )
            {
              v98 = v37;
              v107 = v39;
              v115 = v39 + 1;
              v134 = (void *)qvector_reserve(&v134, v134, v41, 1);
              v38 = v98;
              v40 = v134;
              v39 = v107;
              v41 = v115;
            }
            *(_QWORD *)&v135 = v41;
            v40[v39] = 0;
            memmove((char *)v134 + v36, v29, v38);
          }
          v42 = v135;
          v43 = 2;
          if ( (_QWORD)v135 )
          {
            v43 = v135 + 1;
            v42 = v135 - 1;
          }
          v44 = v134;
          if ( *((_QWORD *)&v135 + 1) < v43 )
          {
            v134 = (void *)qvector_reserve(&v134, v134, v43, 1);
            v44 = v134;
          }
          *(_QWORD *)&v135 = v43;
          v45 = 2;
          v44[v42] = 2;
          *((_BYTE *)v134 + v42 + 1) = 0;
          v46 = v135;
          if ( (_QWORD)v135 )
          {
            v45 = v135 + 1;
            v46 = v135 - 1;
          }
          v47 = v134;
          if ( *((_QWORD *)&v135 + 1) < v45 )
          {
            v134 = (void *)qvector_reserve(&v134, v134, v45, 1);
            v47 = v134;
          }
          *(_QWORD *)&v135 = v45;
          v47[v46] = 32;
          *((_BYTE *)v134 + v46 + 1) = 0;
        }
        if ( a3 )
        {
          v48 = v135;
          v49 = 2;
          if ( (_QWORD)v135 )
          {
            v49 = v135 + 1;
            v48 = v135 - 1;
          }
          v50 = v134;
          if ( *((_QWORD *)&v135 + 1) < v49 )
          {
            v134 = (void *)qvector_reserve(&v134, v134, v49, 1);
            v50 = v134;
          }
          *(_QWORD *)&v135 = v49;
          v50[v48] = 32;
          *((_BYTE *)v134 + v48 + 1) = 0;
          if ( *a3 )
            sub_65E8C0((__int64 *)&v134, a3, 37);
        }
        sub_35A910((__int64 *)&v134);
        goto LABEL_87;
      case 0xF:
        goto LABEL_26;
      default:
LABEL_104:
        v25 = a6;
        v9 = 0;
LABEL_32:
        v130 = v14;
        if ( !(unsigned __int8)sub_664DE0((__int64)a1, (__int64 *)&v134, a2, v13, 0, a3, nullptr, 0, 0) )
          goto LABEL_26;
        v112 = !sub_65E270(a2) && v130 != 10;
        if ( v112 )
        {
          v58 = 2 * (v130 != 11) + 2061;
          ptr = nullptr;
          if ( (a7 & 0x10) == 0 )
            v58 = 6159;
          v139 = 0;
          sub_662480(v124, (__int64 *)&ptr, (unsigned __int64 *)a2, v58);
          if ( (unsigned __int64)v139 > 1 )
          {
            v59 = v135;
            v60 = 2;
            if ( (_QWORD)v135 )
            {
              v60 = v135 + 1;
              v59 = v135 - 1;
            }
            v61 = v134;
            if ( *((_QWORD *)&v135 + 1) < v60 )
            {
              v134 = (void *)qvector_reserve(&v134, v134, v60, 1);
              v61 = v134;
            }
            *(_QWORD *)&v135 = v60;
            v61[v59] = 32;
            *((_BYTE *)v134 + v59 + 1) = 0;
            v62 = v139;
            if ( (_QWORD)v139 )
            {
              v63 = v139 - 1;
              if ( (_QWORD)v139 != 1 )
              {
                v64 = v135;
                v65 = v139 - 1;
                if ( (_QWORD)v135 )
                {
                  v64 = v135 - 1;
                  v65 = v63 + v135 - 1;
                  v62 = v139 + v135 - 1;
                }
                v66 = v134;
                if ( *((_QWORD *)&v135 + 1) < v62 )
                {
                  v116 = v65;
                  v131 = v139 - 1;
                  v134 = (void *)qvector_reserve(&v134, v134, v62, 1);
                  v65 = v116;
                  v66 = v134;
                  v63 = v131;
                }
                *(_QWORD *)&v135 = v62;
                v66[v65] = 0;
                memcpy((char *)v134 + v64, ptr, v63);
              }
            }
          }
          if ( ptr )
          {
            *(_QWORD *)&v139 = 0;
            qfree(ptr);
          }
          v112 = 0;
        }
        goto LABEL_34;
    }
  }
}
