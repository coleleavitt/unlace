__int64 __fastcall sub_1808B0(
        __int64 *a1,
        size_t a2,
        int a3,
        unsigned int *a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        int a10,
        _BYTE *a11)
{
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int *v13; // rbx
  __int64 v14; // r12
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned __int8 v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int v24; // eax
  void *v26; // r12
  __m128i v27; // xmm1
  __m128i v28; // xmm1
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(); // rax
  int v33; // eax
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // r9
  __int64 v37; // rsi
  int v38; // eax
  unsigned int v39; // edx
  bool v40; // al
  _QWORD *v41; // rsi
  _QWORD *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // r12
  char v49; // r12
  __int64 v50; // rax
  size_t v51; // rcx
  __int64 *v52; // r12
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  __int64 v59; // r14
  int v60; // eax
  __int64 v61; // r12
  __int64 v62; // rdi
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // r12
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r9d
  __int64 v76; // r12
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  int v81; // r8d
  int v82; // r9d
  __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  __int64 v85; // rsi
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // eax
  int v89; // [rsp+0h] [rbp-3B0h]
  __int64 v90; // [rsp+8h] [rbp-3A8h]
  __int64 v91; // [rsp+10h] [rbp-3A0h]
  __int64 (__fastcall ***v92)(); // [rsp+20h] [rbp-390h]
  char v93; // [rsp+2Fh] [rbp-381h]
  __m128i v94; // [rsp+30h] [rbp-380h] BYREF
  __int64 v95; // [rsp+40h] [rbp-370h]
  unsigned __int8 *v96; // [rsp+48h] [rbp-368h]
  _BYTE *v97; // [rsp+50h] [rbp-360h]
  __int64 v98; // [rsp+58h] [rbp-358h]
  __int64 v99; // [rsp+60h] [rbp-350h]
  _QWORD *v100; // [rsp+68h] [rbp-348h]
  size_t n; // [rsp+70h] [rbp-340h]
  __int64 *v102; // [rsp+78h] [rbp-338h]
  __int64 v103; // [rsp+80h] [rbp-330h]
  __int64 *v104; // [rsp+88h] [rbp-328h]
  __int64 v105; // [rsp+90h] [rbp-320h]
  __int64 *v106; // [rsp+98h] [rbp-318h]
  __m128i v107; // [rsp+A0h] [rbp-310h] BYREF
  unsigned int *v108; // [rsp+B0h] [rbp-300h]
  __int64 v109; // [rsp+B8h] [rbp-2F8h]
  size_t v110; // [rsp+C0h] [rbp-2F0h]
  __int64 *v111; // [rsp+C8h] [rbp-2E8h]
  __int64 v112; // [rsp+D8h] [rbp-2D8h] BYREF
  __int64 v113[2]; // [rsp+E0h] [rbp-2D0h] BYREF
  __int64 v114; // [rsp+F0h] [rbp-2C0h] BYREF
  __m128i v115; // [rsp+F8h] [rbp-2B8h]
  __int64 v116[2]; // [rsp+110h] [rbp-2A0h] BYREF
  __int64 v117; // [rsp+120h] [rbp-290h] BYREF
  __int128 v118; // [rsp+128h] [rbp-288h]
  __int64 v119[2]; // [rsp+140h] [rbp-270h] BYREF
  void *src; // [rsp+150h] [rbp-260h] BYREF
  __m128i v121; // [rsp+158h] [rbp-258h]
  __int64 v122[2]; // [rsp+170h] [rbp-240h] BYREF
  void *v123; // [rsp+180h] [rbp-230h] BYREF
  __int64 v124; // [rsp+188h] [rbp-228h]
  __int64 v125[2]; // [rsp+1A0h] [rbp-210h] BYREF
  void *v126; // [rsp+1B0h] [rbp-200h] BYREF
  __int128 v127; // [rsp+1B8h] [rbp-1F8h]
  __int64 (__fastcall **v128)(); // [rsp+1D0h] [rbp-1E0h] BYREF
  __int64 v129; // [rsp+1D8h] [rbp-1D8h]
  __int64 v130; // [rsp+1E0h] [rbp-1D0h] BYREF
  __int128 v131; // [rsp+1E8h] [rbp-1C8h]
  char v132; // [rsp+1F8h] [rbp-1B8h]
  unsigned int *v133; // [rsp+200h] [rbp-1B0h]
  __m128i v134; // [rsp+210h] [rbp-1A0h] BYREF
  __int64 v135; // [rsp+220h] [rbp-190h]
  __m128i v136; // [rsp+228h] [rbp-188h] BYREF
  __int64 v137; // [rsp+250h] [rbp-160h]
  _BYTE v138[32]; // [rsp+258h] [rbp-158h] BYREF
  _BYTE v139[16]; // [rsp+278h] [rbp-138h] BYREF
  _BYTE v140[16]; // [rsp+288h] [rbp-128h] BYREF
  _BYTE v141[16]; // [rsp+298h] [rbp-118h] BYREF
  __int64 v142; // [rsp+2A8h] [rbp-108h]
  __int64 v143; // [rsp+2B8h] [rbp-F8h]
  __int64 v144; // [rsp+2C0h] [rbp-F0h]
  __int64 v145; // [rsp+2D0h] [rbp-E0h]
  __int64 v146; // [rsp+2E0h] [rbp-D0h]
  __int64 v147; // [rsp+2E8h] [rbp-C8h]
  __int64 v148; // [rsp+2F8h] [rbp-B8h]
  __int64 v149; // [rsp+308h] [rbp-A8h]
  __int64 v150; // [rsp+310h] [rbp-A0h]
  __int64 v151; // [rsp+320h] [rbp-90h]
  __int64 v152; // [rsp+330h] [rbp-80h]
  __int64 v153; // [rsp+338h] [rbp-78h]
  __int128 v154; // [rsp+350h] [rbp-60h]
  char v155; // [rsp+36Dh] [rbp-43h]
  char v156; // [rsp+36Eh] [rbp-42h]
  char v157; // [rsp+373h] [rbp-3Dh]
  unsigned __int64 v158; // [rsp+378h] [rbp-38h]

  LODWORD(v104) = a3;
  v106 = a1;
  v98 = a7;
  v110 = a2;
  v99 = a8;
  v108 = a4;
  v102 = a9;
  LODWORD(v103) = a5;
  v100 = a6;
  v97 = a11;
  v158 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1[5] + 528);
  v105 = *(_QWORD *)(v11 + 8LL * a3);
  v12 = *(_QWORD *)(v11 + 8LL * a5);
  n = a5;
  v113[0] = 0;
  v13 = *(unsigned int **)(v12 + 56);
  v109 = v12;
  v113[1] = 0;
  v114 = 0;
  v116[0] = 0;
  v116[1] = 0;
  v117 = 0;
  v115 = 0;
  v118 = 0;
  if ( !v13 )
  {
    LODWORD(v111) = 0;
    goto LABEL_21;
  }
  v111 = v116;
  while ( 1 )
  {
    sub_127A20((__int64)&v134, v109, (__int64)v13, 8449, a5, (int)a6);
    sub_648D0(v113, v134.m128i_i64);
    v14 = v135;
    v135 = 0;
    v15 = _mm_loadu_si128(&v136);
    v136 = 0;
    if ( v114 )
    {
      v107 = v15;
      v115.m128i_i64[0] = 0;
      qfree(v114);
      v16 = _mm_load_si128(&v107);
      v114 = v14;
      v115 = v16;
      if ( v135 )
      {
        v136.m128i_i64[0] = 0;
        qfree(v135);
      }
    }
    else
    {
      v114 = v14;
      v115 = v15;
    }
    qfree(v134.m128i_i64[0]);
    if ( (unsigned __int8)sub_64780(v113, (_QWORD *)v110) || (unsigned __int8)sub_318470(&v114, v110 + 16) )
      break;
    sub_64280(v111, v113);
    sub_316CB0(&v117, &v114);
    v13 = *((unsigned int **)v13 + 2);
    if ( !v13 )
      goto LABEL_17;
  }
  if ( v108 == v13 )
  {
    sub_3311F0(v106[5], *((_QWORD *)v108 + 3), 19, v17, v18, v19);
    goto LABEL_17;
  }
  v20 = 0;
  if ( (*((_BYTE *)v13 + 65) & 8) != 0 )
  {
    v21 = *((unsigned __int8 *)v13 + 64);
    if ( (unsigned __int8)v21 <= 9u )
    {
      v22 = 610;
      v20 = _bittest64(&v22, v21);
    }
  }
  v23 = *v13;
  if ( (_DWORD)v23 != 61 )
  {
    if ( (unsigned __int8)sub_32ED70(v23) )
    {
      LODWORD(v111) = v13[1] & 0x20000;
      if ( !(_DWORD)v111 )
        goto LABEL_13;
    }
LABEL_17:
    LODWORD(v111) = 0;
    goto LABEL_18;
  }
  LODWORD(v111) = v13[1] & 0x20000;
  if ( (_DWORD)v111 )
    goto LABEL_17;
LABEL_13:
  v24 = *v108;
  if ( *v108 == 62 || *v13 == 61 && v24 != 4 && (v24 != 67 || v108[17] != v108[9]) )
    goto LABEL_17;
  if ( *((_BYTE *)v13 + 64) == 8 && !v13[17] )
    goto LABEL_17;
  v96 = (unsigned __int8 *)(v13 + 16);
  if ( (unsigned __int8)sub_330E90(v109, v13 + 16) )
    goto LABEL_17;
  v119[0] = 0;
  v119[1] = 0;
  src = nullptr;
  v121 = 0;
  if ( *v13 != 4
    || (v30 = v106[5],
        v31 = *(_QWORD *)(v30 + 920),
        v32 = *(__int64 (__fastcall **)())(*(_QWORD *)v31 + 32LL),
        v32 == sub_7A3D0)
    || (v107.m128i_i64[0] = (__int64)v119,
        v33 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, _QWORD))v32)(v31, v30, v13 + 8, 0, 0),
        v107.m128i_i64[0] = (__int64)v119,
        v33 != 2) )
  {
    v107.m128i_i64[0] = (__int64)v119;
    sub_124680((__int64)&v134, v109, (__int64)v13, 1u);
    v107.m128i_i64[0] = (__int64)v119;
    sub_648D0(v119, v134.m128i_i64);
    v26 = (void *)v135;
    v135 = 0;
    v27 = _mm_loadu_si128(&v136);
    v136 = 0;
    if ( src )
    {
      v94 = v27;
      v121.m128i_i64[0] = 0;
      qfree((__int64)src);
      v28 = _mm_load_si128(&v94);
      src = v26;
      v121 = v28;
      if ( v135 )
      {
        v136.m128i_i64[0] = 0;
        qfree(v135);
      }
    }
    else
    {
      src = v26;
      v121 = v27;
    }
    qfree(v134.m128i_i64[0]);
  }
  v29 = *(_QWORD *)(v106[5] + 1504);
  if ( !(unsigned __int8)sub_64780((_QWORD *)(v29 + 104), v107.m128i_i64[0]) )
  {
    v93 = sub_318470(v29 + 120, &src);
    if ( !v93 )
    {
      v94.m128i_i64[0] = (__int64)v122;
      sub_127A20((__int64)v122, v109, (__int64)v13, 1, v34, v35);
      LOBYTE(v95) = sub_172FB0(v13);
      if ( (_BYTE)v95 )
      {
        if ( (*(_BYTE *)(v105 + 25) & 8) == 0
          || (*(_BYTE *)(v109 + 25) & 8) == 0
          || a10 == 1
          || !(unsigned __int8)sub_178230(
                                 v109,
                                 *((_QWORD *)v13 + 1),
                                 v94.m128i_i64[0],
                                 (_QWORD *)(*v100 + 24 * n),
                                 v103,
                                 (unsigned int)v104)
          || !sub_178D90(v106, v103, (int)v104) )
        {
          goto LABEL_80;
        }
        v128 = nullptr;
        v129 = 0;
        v130 = 0;
        v131 = 0;
        v130 = qvector_reserve((__int64)&v130, 0, 1, 16);
        *(__m128i *)(v130 + 16 * v131) = _mm_load_si128((const __m128i *)&xmmword_424800);
        *(_QWORD *)&v131 = v131 + 1;
        v36 = *((_QWORD *)v13 + 1);
        v134.m128i_i64[0] = (__int64)&off_4DDFA0;
        v134.m128i_i64[1] = 0;
        v135 = 0;
        v136 = 0u;
        if ( (unsigned int)sub_179EC0(
                             v106,
                             v134.m128i_i64,
                             (__int64)&v128,
                             v103,
                             (unsigned int)v104,
                             v36,
                             (__int64)v108,
                             2,
                             1u) )
          goto LABEL_134;
        v37 = v94.m128i_i64[0];
        v95 = *((_QWORD *)v13 + 1);
        sub_64000(v134.m128i_i64, v94.m128i_i64[0]);
        v135 = 0;
        v136 = 0;
        if ( v124 )
        {
          v91 = v124;
          v90 = 16 * v124;
          v135 = qalloc_or_throw(16 * v124, v37, 16 * v124, v124);
          v136.m128i_i64[1] = v91;
          memcpy((void *)v135, v123, v90);
          v136.m128i_i64[0] = v91;
        }
        LOBYTE(v95) = sub_178A70(v106, v134.m128i_i64, v103, (unsigned int)v104, v95, (__int64)v108);
        if ( v135 )
        {
          v136.m128i_i64[0] = 0;
          qfree(v135);
        }
        qfree(v134.m128i_i64[0]);
        if ( !(_BYTE)v95 )
        {
LABEL_134:
          if ( v130 )
          {
            *(_QWORD *)&v131 = 0;
            qfree(v130);
          }
          qfree((__int64)v128);
          goto LABEL_80;
        }
        sub_93B40((__int64 *)&v128);
      }
      if ( (unsigned __int8)sub_318470(&v123, v106[5] + 232)
        || (v91 = v106[5], (unsigned __int8)sub_318470(&src, v91 + 232)) )
      {
        if ( (unsigned __int8)sub_178F10(v106, v103, *((_QWORD *)v13 + 1), (int)v104, (__int64)v108) )
          goto LABEL_80;
      }
      v38 = *v13;
      if ( *v13 != 4 )
      {
        if ( v38 != 67 )
        {
          v39 = v38 - 8;
          v40 = 1;
          if ( v39 <= 1 )
            goto LABEL_69;
          goto LABEL_131;
        }
        if ( v13[17] != v13[9] )
        {
LABEL_131:
          v40 = 0;
          if ( *((_BYTE *)v13 + 64) == 8 )
          {
            if ( (_BYTE)v95 )
              goto LABEL_89;
            v40 = *(_DWORD *)(*((_QWORD *)v13 + 9) + 284LL) == 5;
LABEL_71:
            if ( *((_BYTE *)v13 + 32) != 4 && *((_BYTE *)v13 + 48) != 4 && v40 )
            {
              LOBYTE(v95) = 0;
              goto LABEL_75;
            }
            if ( a10 == 1 )
              goto LABEL_80;
            v93 = sub_178230(
                    v109,
                    *((_QWORD *)v13 + 1),
                    v94.m128i_i64[0],
                    (_QWORD *)(*v100 + 24 * n),
                    v103,
                    (unsigned int)v104);
            LOBYTE(v95) = 1;
            if ( !v93 )
            {
LABEL_75:
              v41 = (_QWORD *)v110;
              v42 = (_QWORD *)v94.m128i_i64[0];
              ++*(_DWORD *)(v106[5] + 888);
              if ( !(unsigned __int8)sub_64820(v42, v41) || !(unsigned __int8)sub_317F40(v110 + 16, &v123) )
              {
                v45 = *v13;
                if ( *v13 != 4 )
                {
                  if ( v45 == 67 )
                  {
                    if ( v13[9] != v13[17]
                      && (*((_BYTE *)v13 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v13 + 9) + 284LL) != 5) )
                    {
                      goto LABEL_80;
                    }
                  }
                  else if ( *((_BYTE *)v13 + 64) != 8 || (v43 = *((_QWORD *)v13 + 9), *(_DWORD *)(v43 + 284) != 5) )
                  {
                    if ( v45 != 9 )
                      goto LABEL_80;
                    v92 = &v128;
                    sub_123A40((__int64)&v128, v96, v43, v44);
                    if ( (unsigned __int8)sub_127850((unsigned __int64)&v128, v29, v13[17] - v13[9], 0) )
                    {
                      v134 = 0u;
                      v135 = 0;
                      v136 = 0;
                      sub_127FE0(
                        v109,
                        (__int64)&v134,
                        (__int64)&v128,
                        1u,
                        v81,
                        v82,
                        v89,
                        v90,
                        v91,
                        (int)&src,
                        (__int64)&v128);
                      if ( (unsigned __int8)sub_A2310(&v134, (_QWORD *)v110) )
                      {
                        sub_93B40(v134.m128i_i64);
                        sub_11CDA0((__int64)v92);
                        goto LABEL_93;
                      }
                      sub_93B40(v134.m128i_i64);
                    }
                    sub_11CDA0((__int64)v92);
                    goto LABEL_80;
                  }
                }
              }
LABEL_93:
              v110 = (size_t)v13;
              if ( v93 )
                v110 = *((_QWORD *)v13 + 1);
              v46 = v107.m128i_i64[0];
              sub_64000(v134.m128i_i64, v107.m128i_i64[0]);
              v48 = v121.m128i_i64[0];
              v135 = 0;
              v136 = 0;
              if ( v121.m128i_i64[0] )
              {
                n = 16 * v121.m128i_i64[0];
                v135 = qalloc_or_throw(16 * v121.m128i_i64[0], v46, 16 * v121.m128i_i64[0], v47);
                v136.m128i_i64[1] = v48;
                memcpy((void *)v135, src, n);
                v136.m128i_i64[0] = v48;
              }
              v49 = sub_178A70(v106, v134.m128i_i64, v103, (unsigned int)v104, v110, (__int64)v108);
              if ( v135 )
              {
                v136.m128i_i64[0] = 0;
                qfree(v135);
              }
              qfree(v134.m128i_i64[0]);
              if ( !v49 )
                goto LABEL_80;
              if ( *v13 == 61 )
              {
                v68 = v105;
                if ( sub_A4680(v105, (__int64)v108, v94.m128i_i64[0]) )
                {
                  v69 = *(_DWORD *)(v68 + 24);
                  BYTE1(v69) &= ~2u;
                  LOBYTE(v69) = v69 | 0x80;
                  *(_DWORD *)(v68 + 24) = v69;
LABEL_141:
                  LODWORD(v111) = 1;
                  goto LABEL_80;
                }
                goto LABEL_80;
              }
              v134.m128i_i64[0] = 0;
              v135 = 0;
              v134.m128i_i64[1] = v98;
              v136.m128i_i64[0] = 0;
              if ( (*(_BYTE *)(*(_QWORD *)(v109 + 480) + 607LL) & 2) != 0 )
                goto LABEL_124;
              LOBYTE(v104) = sub_17D770(v109, v13, &v134);
              if ( v134.m128i_i64[0] )
                sub_104E10(v134.m128i_i64[0]);
              v50 = v135;
              if ( !v135 )
              {
LABEL_123:
                if ( !(_BYTE)v104 )
                {
LABEL_124:
                  if ( v93 )
                  {
                    v59 = v109;
                    sub_A33C0(v109, (__int64)v13);
                    v60 = *(_DWORD *)(v59 + 24);
                    v61 = v105;
                    BYTE1(v60) &= ~2u;
                    v62 = v105;
                    LOBYTE(v60) = v60 | 0x80;
                    *(_DWORD *)(v59 + 24) = v60;
                    v63 = *(_DWORD *)(v62 + 24);
                    LODWORD(v111) = v63;
                    BYTE1(v63) &= ~2u;
                    LOBYTE(v63) = v63 | 0x80;
                    *(_DWORD *)(v62 + 24) = v63;
                    sub_A3160(v62, v13, *((_QWORD *)v108 + 2));
                    sub_A2520(v59, (__int64)"moved insn from");
                    sub_A2520(v61, (__int64)"moved insn to");
                    *v97 = 1;
                    v64 = sub_330DE0(v59);
                    v67 = v106[5];
                    if ( v64 != 1
                      || (v83 = *(_QWORD *)(v109 + 56), *(_DWORD *)v83 != 55)
                      || *(_BYTE *)(v83 + 32) != 7
                      || (v84 = 0, v85 = v109, !*(_QWORD *)(v109 + 352)) )
                    {
                      LODWORD(v111) = 1;
                      *(_DWORD *)(v67 + 4) &= ~8u;
                      *(_DWORD *)(v105 + 24) |= 0x40u;
LABEL_127:
                      if ( v20 )
                        sub_175220((unsigned __int8 *)v108 + 64);
                      goto LABEL_80;
                    }
                    do
                    {
                      v86 = *(unsigned int *)(*(_QWORD *)(v85 + 344) + 4 * v84);
                      if ( (unsigned int)v86 >= *(_DWORD *)(v67 + 64) )
                        sub_1733C0(v59, v85, v84, v86, v65, v66);
                      ++v84;
                      v87 = *(_QWORD *)(*(_QWORD *)(v67 + 528) + 8 * v86);
                      v88 = *(_DWORD *)(v87 + 24);
                      BYTE1(v88) &= ~2u;
                      LOBYTE(v88) = v88 | 0x80;
                      *(_DWORD *)(v87 + 24) = v88;
                      v67 = v106[5];
                    }
                    while ( v84 < *(_QWORD *)(v85 + 352) );
                    *(_DWORD *)(v67 + 4) &= ~8u;
                    LODWORD(v110) = 1;
LABEL_197:
                    *(_DWORD *)(v105 + 24) |= 0x40u;
                    if ( !v93 && sub_A9D90(v109, (__int64 *)v94.m128i_i64[0], *((_QWORD *)v13 + 1), 0, 0) )
                      *(_DWORD *)(v109 + 24) |= 0x80u;
                    LODWORD(v111) = v110;
                    goto LABEL_127;
                  }
                  v70 = v99;
                  v104 = v125;
                  v71 = v99;
                  sub_64000(v125, v99);
                  v76 = *(_QWORD *)(v70 + 24);
                  v126 = nullptr;
                  v127 = 0;
                  if ( v76 )
                  {
                    v110 = 16 * v76;
                    v126 = (void *)qalloc_or_throw(16 * v76, v71, 16 * v76, v73);
                    *((_QWORD *)&v127 + 1) = v76;
                    memcpy(v126, *(const void **)(v99 + 16), v110);
                    *(_QWORD *)&v127 = v76;
                  }
                  sub_64640(v104, v102, v72, v73, v74, v75);
                  v110 = (size_t)&v126;
                  sub_317C60(&v126, v102 + 2);
                  sub_64640(v104, v116, v77, v78, v79, v80);
                  sub_317C60(v110, &v117);
                  sub_1752C0((__int64)&v134, (__int64)v104, (__int64)v13, v108, v109, v105, 0, 0, v107.m128i_i64[0]);
                  LODWORD(v110) = sub_175BD0((__int64)&v134, (__int64)v108);
                  if ( (unsigned int)(v110 + 4) <= 1 )
                  {
                    if ( (_DWORD)v110 != -3 )
                    {
                      LODWORD(v110) = -4;
                      goto LABEL_156;
                    }
                  }
                  else
                  {
                    if ( (int)v110 <= 0 )
                    {
                      if ( !(_DWORD)v110 )
                      {
                        if ( v155 )
                          LODWORD(v110) = -2;
                        if ( v156 )
                          LODWORD(v110) = -1;
                      }
LABEL_156:
                      v134.m128i_i64[0] = (__int64)off_4DDE40;
                      if ( v157 && !v156 )
                        sub_11D890(v137, (__int64)v138);
                      v137 = 0;
                      v154 = 0;
                      if ( v152 )
                      {
                        v153 = 0;
                        qfree(v152);
                      }
                      qfree(v151);
                      if ( v149 )
                      {
                        v150 = 0;
                        qfree(v149);
                      }
                      qfree(v148);
                      if ( v146 )
                      {
                        v147 = 0;
                        qfree(v146);
                      }
                      qfree(v145);
                      if ( v143 )
                      {
                        v144 = 0;
                        qfree(v143);
                      }
                      qfree(v142);
                      sub_11CDA0((__int64)v141);
                      sub_11CDA0((__int64)v140);
                      sub_11CDA0((__int64)v139);
                      if ( v126 )
                      {
                        *(_QWORD *)&v127 = 0;
                        qfree((__int64)v126);
                      }
                      qfree(v125[0]);
                      if ( !(_DWORD)v110 )
                        goto LABEL_80;
                      *(_DWORD *)(v106[5] + 4) &= ~8u;
                      if ( (int)v110 > 0 )
                        goto LABEL_197;
                      if ( (_DWORD)v110 != -1 && (_DWORD)v110 != -4 )
                      {
                        LODWORD(v111) = v110;
                        goto LABEL_80;
                      }
                      goto LABEL_141;
                    }
                    if ( sub_173990(v13, v108, v110, 128) )
                    {
                      if ( (unsigned int)sub_167810(v105, v108, 12)
                        || !(_BYTE)v95
                        || *v13 == 14
                        && (v103 = v106[5], sub_11C8A0((__int64)v13, &v112))
                        && (*(_BYTE *)v112 != 4 || (unsigned int)(**(_DWORD **)(v112 + 8) - 8) <= 2)
                        && (v130 = 0,
                            v131 = 0u,
                            v132 = 0,
                            v128 = &off_4DDFF0,
                            v133 = v13,
                            v129 = v103,
                            (unsigned int)sub_11E900(v108, (__int64)&v128)) )
                      {
                        v157 = 0;
                        goto LABEL_156;
                      }
                    }
                  }
                  LODWORD(v110) = 0;
                  goto LABEL_156;
                }
LABEL_80:
                if ( v123 )
                {
                  v124 = 0;
                  qfree((__int64)v123);
                }
                qfree(v122[0]);
                goto LABEL_41;
              }
              v51 = *(_QWORD *)v135;
              v110 = *(_QWORD *)v135;
              if ( !v136.m128i_i64[0] )
              {
                *(_QWORD *)v135 = v51 & 3 | v135 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(v135 + 8) = _mm_unpacklo_epi64(
                                           (__m128i)(unsigned __int64)v135,
                                           (__m128i)(unsigned __int64)v135);
                *(_QWORD *)v135 &= ~1uLL;
                *(_QWORD *)v135 |= 2uLL;
LABEL_121:
                if ( v135 )
                  qfree(v135);
                goto LABEL_123;
              }
              v52 = (__int64 *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
              v53 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v53 & 2) != 0 )
              {
LABEL_120:
                *(_QWORD *)v50 = v50 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v50 & 3LL;
                *(__m128i *)(v135 + 8) = _mm_unpacklo_epi64(
                                           (__m128i)(unsigned __int64)v135,
                                           (__m128i)(unsigned __int64)v135);
                *(_QWORD *)v135 &= ~1uLL;
                *(_QWORD *)v135 |= 2uLL;
                v136.m128i_i64[0] = 0;
                goto LABEL_121;
              }
              v54 = (__int64 *)v52[1];
              v55 = *v54;
              if ( (*v54 & 2) != 0 )
              {
                v58 = (__int64 *)v52[2];
                if ( (*(_BYTE *)v58 & 2) != 0 )
                  goto LABEL_207;
                goto LABEL_115;
              }
              v56 = (__int64 *)v54[1];
              if ( (*(_BYTE *)v56 & 2) != 0 )
              {
                v57 = (__int64 *)v54[2];
                if ( (*(_BYTE *)v57 & 2) != 0 )
                {
LABEL_209:
                  *v54 = v55 | 2;
LABEL_112:
                  if ( v54 )
                    qfree((__int64)v54);
                  v58 = (__int64 *)v52[2];
                  if ( (*(_BYTE *)v58 & 2) != 0 )
                  {
LABEL_116:
                    v53 = *v52;
                    if ( (*v52 & 2) != 0 )
                    {
LABEL_117:
                      if ( v110 > 3 )
                        qfree((__int64)v52);
                      v50 = v135;
                      goto LABEL_120;
                    }
LABEL_207:
                    *v52 = v53 | 2;
                    goto LABEL_117;
                  }
LABEL_115:
                  sub_1735A0(v58);
                  goto LABEL_116;
                }
              }
              else
              {
                v103 = v52[1];
                sub_1735A0(v56);
                v54 = (__int64 *)v103;
                v57 = *(__int64 **)(v103 + 16);
                if ( (*(_BYTE *)v57 & 2) != 0 )
                  goto LABEL_111;
              }
              v103 = (__int64)v54;
              sub_1735A0(v57);
              v54 = (__int64 *)v103;
LABEL_111:
              v55 = *v54;
              if ( (*v54 & 2) != 0 )
                goto LABEL_112;
              goto LABEL_209;
            }
            if ( ((unsigned __int8)sub_64780(v107.m128i_i64[0], v94.m128i_i64[0])
               || (unsigned __int8)sub_318470(&src, &v123))
              && !sub_178D90(v106, v103, (int)v104) )
            {
              goto LABEL_80;
            }
LABEL_89:
            if ( (unsigned __int8)sub_64780(v102, v113) )
              goto LABEL_80;
            LOBYTE(v95) = sub_318470(v102 + 2, &v114);
            if ( (_BYTE)v95 )
              goto LABEL_80;
            v93 = 1;
            goto LABEL_75;
          }
LABEL_69:
          if ( (_BYTE)v95 )
            goto LABEL_89;
          if ( *((_BYTE *)v13 + 64) == 1 && v13[18] <= 7 )
          {
            v93 = 0;
            goto LABEL_75;
          }
          goto LABEL_71;
        }
      }
      v40 = 1;
      goto LABEL_69;
    }
  }
LABEL_41:
  if ( src )
  {
    v121.m128i_i64[0] = 0;
    qfree((__int64)src);
  }
  qfree(v119[0]);
LABEL_18:
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree(v117);
  }
  v13 = (unsigned int *)v116[0];
LABEL_21:
  qfree((__int64)v13);
  if ( v114 )
  {
    v115.m128i_i64[0] = 0;
    qfree(v114);
  }
  qfree(v113[0]);
  return (unsigned int)v111;
}
