__int64 __fastcall sub_17A1F0(
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
  unsigned __int64 v14; // r12
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
  __int64 (*v32)(); // rax
  int v33; // eax
  __int64 v34; // r9
  int v35; // eax
  unsigned int v36; // edx
  bool v37; // al
  _QWORD *v38; // rsi
  _QWORD *v39; // rdi
  int v40; // eax
  __int64 v41; // r12
  char v42; // r12
  unsigned __int64 v43; // rax
  size_t v44; // rcx
  __int64 *v45; // r12
  __int64 v46; // rcx
  __int64 *v47; // rax
  __int64 v48; // rdx
  __int64 *v49; // rdi
  __int64 *v50; // rdi
  __int64 *v51; // rdi
  __int64 v52; // r14
  int v53; // eax
  __int64 v54; // r12
  __int64 v55; // rdi
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rbx
  int v62; // eax
  __int64 v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // r9d
  __int64 v68; // r12
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rdx
  unsigned __int64 v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // [rsp+8h] [rbp-3A8h]
  __int64 v80; // [rsp+10h] [rbp-3A0h]
  char v81; // [rsp+2Fh] [rbp-381h]
  __m128i v82; // [rsp+30h] [rbp-380h] BYREF
  __int64 v83; // [rsp+40h] [rbp-370h]
  unsigned __int8 *v84; // [rsp+48h] [rbp-368h]
  _BYTE *v85; // [rsp+50h] [rbp-360h]
  __int64 v86; // [rsp+58h] [rbp-358h]
  __int64 v87; // [rsp+60h] [rbp-350h]
  _QWORD *v88; // [rsp+68h] [rbp-348h]
  size_t n; // [rsp+70h] [rbp-340h]
  __int64 *v90; // [rsp+78h] [rbp-338h]
  __int64 v91; // [rsp+80h] [rbp-330h]
  __int64 *v92; // [rsp+88h] [rbp-328h]
  __int64 v93; // [rsp+90h] [rbp-320h]
  __int64 *v94; // [rsp+98h] [rbp-318h]
  __m128i v95; // [rsp+A0h] [rbp-310h] BYREF
  unsigned int *v96; // [rsp+B0h] [rbp-300h]
  __int64 v97; // [rsp+B8h] [rbp-2F8h]
  size_t v98; // [rsp+C0h] [rbp-2F0h]
  __int64 *v99; // [rsp+C8h] [rbp-2E8h]
  __int64 v100; // [rsp+D8h] [rbp-2D8h] BYREF
  __int64 v101[2]; // [rsp+E0h] [rbp-2D0h] BYREF
  unsigned __int64 v102; // [rsp+F0h] [rbp-2C0h] BYREF
  __m128i v103; // [rsp+F8h] [rbp-2B8h]
  __int64 v104[2]; // [rsp+110h] [rbp-2A0h] BYREF
  __int64 v105; // [rsp+120h] [rbp-290h] BYREF
  __int128 v106; // [rsp+128h] [rbp-288h]
  __int64 v107[2]; // [rsp+140h] [rbp-270h] BYREF
  void *src; // [rsp+150h] [rbp-260h] BYREF
  __m128i v109; // [rsp+158h] [rbp-258h]
  void *v110[2]; // [rsp+170h] [rbp-240h] BYREF
  void *v111; // [rsp+180h] [rbp-230h] BYREF
  __int64 v112; // [rsp+188h] [rbp-228h]
  __int64 v113[2]; // [rsp+1A0h] [rbp-210h] BYREF
  void *v114; // [rsp+1B0h] [rbp-200h] BYREF
  __int128 v115; // [rsp+1B8h] [rbp-1F8h]
  __int64 (__fastcall **v116)(); // [rsp+1D0h] [rbp-1E0h] BYREF
  __int64 v117; // [rsp+1D8h] [rbp-1D8h]
  __int64 v118; // [rsp+1E0h] [rbp-1D0h] BYREF
  __int128 v119; // [rsp+1E8h] [rbp-1C8h]
  char v120; // [rsp+1F8h] [rbp-1B8h]
  unsigned int *v121; // [rsp+200h] [rbp-1B0h]
  __m128i v122; // [rsp+210h] [rbp-1A0h] BYREF
  unsigned __int64 v123; // [rsp+220h] [rbp-190h]
  __m128i v124; // [rsp+228h] [rbp-188h] BYREF
  __int64 v125; // [rsp+250h] [rbp-160h]
  _BYTE v126[32]; // [rsp+258h] [rbp-158h] BYREF
  _BYTE v127[16]; // [rsp+278h] [rbp-138h] BYREF
  _BYTE v128[16]; // [rsp+288h] [rbp-128h] BYREF
  _BYTE v129[16]; // [rsp+298h] [rbp-118h] BYREF
  __int64 v130; // [rsp+2A8h] [rbp-108h]
  __int64 v131; // [rsp+2B8h] [rbp-F8h]
  __int64 v132; // [rsp+2C0h] [rbp-F0h]
  __int64 v133; // [rsp+2D0h] [rbp-E0h]
  __int64 v134; // [rsp+2E0h] [rbp-D0h]
  __int64 v135; // [rsp+2E8h] [rbp-C8h]
  __int64 v136; // [rsp+2F8h] [rbp-B8h]
  __int64 v137; // [rsp+308h] [rbp-A8h]
  __int64 v138; // [rsp+310h] [rbp-A0h]
  __int64 v139; // [rsp+320h] [rbp-90h]
  __int64 v140; // [rsp+330h] [rbp-80h]
  __int64 v141; // [rsp+338h] [rbp-78h]
  __int128 v142; // [rsp+350h] [rbp-60h]
  char v143; // [rsp+36Dh] [rbp-43h]
  char v144; // [rsp+36Eh] [rbp-42h]
  char v145; // [rsp+373h] [rbp-3Dh]
  unsigned __int64 v146; // [rsp+378h] [rbp-38h]

  LODWORD(v92) = a3;
  v94 = a1;
  v86 = a7;
  v98 = a2;
  v87 = a8;
  v96 = a4;
  v90 = a9;
  LODWORD(v91) = a5;
  v88 = a6;
  v85 = a11;
  v146 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1[5] + 528);
  v93 = *(_QWORD *)(v11 + 8LL * a3);
  v12 = *(_QWORD *)(v11 + 8LL * a5);
  n = a5;
  v101[0] = 0;
  v13 = *(unsigned int **)(v12 + 56);
  v97 = v12;
  v101[1] = 0;
  v102 = 0;
  v104[0] = 0;
  v104[1] = 0;
  v105 = 0;
  v103 = 0;
  v106 = 0;
  if ( !v13 )
  {
    LODWORD(v99) = 0;
    goto LABEL_21;
  }
  v99 = v104;
  while ( 1 )
  {
    sub_121360((__int64)&v122, v97, (__int64)v13, 0x2101u);
    sub_5E350(v101, v122.m128i_i64);
    v14 = v123;
    v123 = 0;
    v15 = _mm_loadu_si128(&v124);
    v124 = 0;
    if ( v102 )
    {
      v95 = v15;
      v103.m128i_i64[0] = 0;
      qfree(v102);
      v16 = _mm_load_si128(&v95);
      v102 = v14;
      v103 = v16;
      if ( v123 )
      {
        v124.m128i_i64[0] = 0;
        qfree(v123);
      }
    }
    else
    {
      v102 = v14;
      v103 = v15;
    }
    qfree(v122.m128i_i64[0]);
    if ( (unsigned __int8)sub_5E200(v101, (_QWORD *)v98) || (unsigned __int8)sub_3110F0(&v102, v98 + 16) )
      break;
    sub_5DD00(v99, v101);
    sub_30F930(&v105, &v102);
    v13 = *((unsigned int **)v13 + 2);
    if ( !v13 )
      goto LABEL_17;
  }
  if ( v96 == v13 )
  {
    sub_329B90(v94[5], *((_QWORD *)v96 + 3), 19, v17, v18, v19);
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
    if ( (unsigned __int8)sub_327830(v23) )
    {
      LODWORD(v99) = v13[1] & 0x20000;
      if ( !(_DWORD)v99 )
        goto LABEL_13;
    }
LABEL_17:
    LODWORD(v99) = 0;
    goto LABEL_18;
  }
  LODWORD(v99) = v13[1] & 0x20000;
  if ( (_DWORD)v99 )
    goto LABEL_17;
LABEL_13:
  v24 = *v96;
  if ( *v96 == 62 || *v13 == 61 && v24 != 4 && (v24 != 67 || v96[17] != v96[9]) )
    goto LABEL_17;
  if ( *((_BYTE *)v13 + 64) == 8 && !v13[17] )
    goto LABEL_17;
  v84 = (unsigned __int8 *)(v13 + 16);
  if ( (unsigned __int8)sub_329830(v97, v13 + 16) )
    goto LABEL_17;
  v107[0] = 0;
  v107[1] = 0;
  src = nullptr;
  v109 = 0;
  if ( *v13 != 4
    || (v30 = v94[5], v31 = *(_QWORD *)(v30 + 920), v32 = *(__int64 (**)())(*(_QWORD *)v31 + 32LL), v32 == sub_73E50)
    || (v95.m128i_i64[0] = (__int64)v107,
        v33 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, _QWORD))v32)(v31, v30, v13 + 8, 0, 0),
        v95.m128i_i64[0] = (__int64)v107,
        v33 != 2) )
  {
    v95.m128i_i64[0] = (__int64)v107;
    sub_11DFC0((__int64)&v122, v97, (__int64)v13, 1u);
    v95.m128i_i64[0] = (__int64)v107;
    sub_5E350(v107, v122.m128i_i64);
    v26 = (void *)v123;
    v123 = 0;
    v27 = _mm_loadu_si128(&v124);
    v124 = 0;
    if ( src )
    {
      v82 = v27;
      v109.m128i_i64[0] = 0;
      qfree(src);
      v28 = _mm_load_si128(&v82);
      src = v26;
      v109 = v28;
      if ( v123 )
      {
        v124.m128i_i64[0] = 0;
        qfree(v123);
      }
    }
    else
    {
      src = v26;
      v109 = v27;
    }
    qfree(v122.m128i_i64[0]);
  }
  v29 = *(_QWORD *)(v94[5] + 1504);
  if ( !(unsigned __int8)sub_5E200((_QWORD *)(v29 + 104), v95.m128i_i64[0]) )
  {
    v81 = sub_3110F0(v29 + 120, &src);
    if ( !v81 )
    {
      v82.m128i_i64[0] = (__int64)v110;
      sub_121360((__int64)v110, v97, (__int64)v13, 1u);
      LOBYTE(v83) = sub_16C8F0(v13);
      if ( (_BYTE)v83 )
      {
        if ( (*(_BYTE *)(v93 + 25) & 8) == 0
          || (*(_BYTE *)(v97 + 25) & 8) == 0
          || a10 == 1
          || !(unsigned __int8)sub_171B70(
                                 v97,
                                 *((_QWORD *)v13 + 1),
                                 v82.m128i_i64[0],
                                 (_QWORD *)(*v88 + 24 * n),
                                 v91,
                                 (unsigned int)v92)
          || !sub_1726D0(v94, v91, (int)v92) )
        {
          goto LABEL_80;
        }
        v116 = nullptr;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v118 = qvector_reserve(&v118, 0, 1, 16);
        *(__m128i *)(v118 + 16 * v119) = _mm_load_si128((const __m128i *)&xmmword_3FA120);
        *(_QWORD *)&v119 = v119 + 1;
        v34 = *((_QWORD *)v13 + 1);
        v122.m128i_i64[0] = (__int64)&off_4AA7E0;
        v122.m128i_i64[1] = 0;
        v123 = 0;
        v124 = 0u;
        if ( (unsigned int)sub_173800(
                             v94,
                             v122.m128i_i64,
                             (__int64)&v116,
                             v91,
                             (unsigned int)v92,
                             v34,
                             (__int64)v96,
                             2,
                             1u) )
          goto LABEL_134;
        v83 = *((_QWORD *)v13 + 1);
        sub_5DA80(v122.m128i_i64, v82.m128i_i64[0]);
        v123 = 0;
        v124 = 0;
        if ( v112 )
        {
          v80 = v112;
          v79 = 16 * v112;
          v123 = qalloc_or_throw(16 * v112);
          v124.m128i_i64[1] = v80;
          memcpy((void *)v123, v111, v79);
          v124.m128i_i64[0] = v80;
        }
        LOBYTE(v83) = sub_1723B0(v94, v122.m128i_i64, v91, (unsigned int)v92, v83, (__int64)v96);
        if ( v123 )
        {
          v124.m128i_i64[0] = 0;
          qfree(v123);
        }
        qfree(v122.m128i_i64[0]);
        if ( !(_BYTE)v83 )
        {
LABEL_134:
          if ( v118 )
          {
            *(_QWORD *)&v119 = 0;
            qfree(v118);
          }
          qfree(v116);
          goto LABEL_80;
        }
        sub_8D480(&v116);
      }
      if ( ((unsigned __int8)sub_3110F0(&v111, v94[5] + 232) || (unsigned __int8)sub_3110F0(&src, v94[5] + 232))
        && (unsigned __int8)sub_172850(v94, v91, *((_QWORD *)v13 + 1), (int)v92, (__int64)v96) )
      {
        goto LABEL_80;
      }
      v35 = *v13;
      if ( *v13 != 4 )
      {
        if ( v35 != 67 )
        {
          v36 = v35 - 8;
          v37 = 1;
          if ( v36 <= 1 )
            goto LABEL_69;
          goto LABEL_131;
        }
        if ( v13[17] != v13[9] )
        {
LABEL_131:
          v37 = 0;
          if ( *((_BYTE *)v13 + 64) == 8 )
          {
            if ( (_BYTE)v83 )
              goto LABEL_89;
            v37 = *(_DWORD *)(*((_QWORD *)v13 + 9) + 284LL) == 5;
LABEL_71:
            if ( *((_BYTE *)v13 + 32) != 4 && *((_BYTE *)v13 + 48) != 4 && v37 )
            {
              LOBYTE(v83) = 0;
              goto LABEL_75;
            }
            if ( a10 == 1 )
              goto LABEL_80;
            v81 = sub_171B70(
                    v97,
                    *((_QWORD *)v13 + 1),
                    v82.m128i_i64[0],
                    (_QWORD *)(*v88 + 24 * n),
                    v91,
                    (unsigned int)v92);
            LOBYTE(v83) = 1;
            if ( !v81 )
            {
LABEL_75:
              v38 = (_QWORD *)v98;
              v39 = (_QWORD *)v82.m128i_i64[0];
              ++*(_DWORD *)(v94[5] + 888);
              if ( !(unsigned __int8)sub_5E2A0(v39, v38) || !(unsigned __int8)sub_310BC0(v98 + 16, &v111) )
              {
                v40 = *v13;
                if ( *v13 != 4 )
                {
                  if ( v40 == 67 )
                  {
                    if ( v13[9] != v13[17]
                      && (*((_BYTE *)v13 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v13 + 9) + 284LL) != 5) )
                    {
                      goto LABEL_80;
                    }
                  }
                  else if ( *((_BYTE *)v13 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v13 + 9) + 284LL) != 5 )
                  {
                    if ( v40 != 9 )
                      goto LABEL_80;
                    sub_11D380((__int64)&v116, v84);
                    if ( (unsigned __int8)sub_121190((unsigned __int64)&v116, v29, v13[17] - v13[9], 0) )
                    {
                      v122 = 0u;
                      v123 = 0;
                      v124 = 0;
                      sub_121920(v97, v122.m128i_i64, (__int64)&v116, 1u);
                      if ( (unsigned __int8)sub_9BC50(&v122, (_QWORD *)v98) )
                      {
                        sub_8D480(&v122);
                        sub_1166E0((__int64)&v116);
                        goto LABEL_93;
                      }
                      sub_8D480(&v122);
                    }
                    sub_1166E0((__int64)&v116);
                    goto LABEL_80;
                  }
                }
              }
LABEL_93:
              v98 = (size_t)v13;
              if ( v81 )
                v98 = *((_QWORD *)v13 + 1);
              sub_5DA80(v122.m128i_i64, v95.m128i_i64[0]);
              v41 = v109.m128i_i64[0];
              v123 = 0;
              v124 = 0;
              if ( v109.m128i_i64[0] )
              {
                n = 16 * v109.m128i_i64[0];
                v123 = qalloc_or_throw(16 * v109.m128i_i64[0]);
                v124.m128i_i64[1] = v41;
                memcpy((void *)v123, src, n);
                v124.m128i_i64[0] = v41;
              }
              v42 = sub_1723B0(v94, v122.m128i_i64, v91, (unsigned int)v92, v98, (__int64)v96);
              if ( v123 )
              {
                v124.m128i_i64[0] = 0;
                qfree(v123);
              }
              qfree(v122.m128i_i64[0]);
              if ( !v42 )
                goto LABEL_80;
              if ( *v13 == 61 )
              {
                v61 = v93;
                if ( sub_9DFC0(v93, (__int64)v96, v82.m128i_i64[0]) )
                {
                  v62 = *(_DWORD *)(v61 + 24);
                  BYTE1(v62) &= ~2u;
                  LOBYTE(v62) = v62 | 0x80;
                  *(_DWORD *)(v61 + 24) = v62;
LABEL_141:
                  LODWORD(v99) = 1;
                  goto LABEL_80;
                }
                goto LABEL_80;
              }
              v122.m128i_i64[0] = 0;
              v123 = 0;
              v122.m128i_i64[1] = v86;
              v124.m128i_i64[0] = 0;
              if ( (*(_BYTE *)(*(_QWORD *)(v97 + 480) + 607LL) & 2) != 0 )
                goto LABEL_124;
              LOBYTE(v92) = sub_1770B0(v97, v13, &v122);
              if ( v122.m128i_i64[0] )
                sub_FE750(v122.m128i_i64[0]);
              v43 = v123;
              if ( !v123 )
              {
LABEL_123:
                if ( !(_BYTE)v92 )
                {
LABEL_124:
                  if ( v81 )
                  {
                    v52 = v97;
                    sub_9CD00(v97, (__int64)v13);
                    v53 = *(_DWORD *)(v52 + 24);
                    v54 = v93;
                    BYTE1(v53) &= ~2u;
                    v55 = v93;
                    LOBYTE(v53) = v53 | 0x80;
                    *(_DWORD *)(v52 + 24) = v53;
                    v56 = *(_DWORD *)(v55 + 24);
                    LODWORD(v99) = v56;
                    BYTE1(v56) &= ~2u;
                    LOBYTE(v56) = v56 | 0x80;
                    *(_DWORD *)(v55 + 24) = v56;
                    sub_9CAA0(v55, v13, *((_QWORD *)v96 + 2));
                    sub_9BE60(v52, (__int64)"moved insn from");
                    sub_9BE60(v54, (__int64)"moved insn to");
                    *v85 = 1;
                    v57 = sub_329780(v52);
                    v60 = v94[5];
                    if ( v57 != 1
                      || (v73 = *(_QWORD *)(v97 + 56), *(_DWORD *)v73 != 55)
                      || *(_BYTE *)(v73 + 32) != 7
                      || (v74 = 0, v75 = v97, !*(_QWORD *)(v97 + 352)) )
                    {
                      LODWORD(v99) = 1;
                      *(_DWORD *)(v60 + 4) &= ~8u;
                      *(_DWORD *)(v93 + 24) |= 0x40u;
LABEL_127:
                      if ( v20 )
                        sub_16EB60((unsigned __int8 *)v96 + 64);
                      goto LABEL_80;
                    }
                    do
                    {
                      v76 = *(unsigned int *)(*(_QWORD *)(v75 + 344) + 4 * v74);
                      if ( (unsigned int)v76 >= *(_DWORD *)(v60 + 64) )
                        sub_16CD00(v52, v75, v74, v76, v58, v59);
                      ++v74;
                      v77 = *(_QWORD *)(*(_QWORD *)(v60 + 528) + 8 * v76);
                      v78 = *(_DWORD *)(v77 + 24);
                      BYTE1(v78) &= ~2u;
                      LOBYTE(v78) = v78 | 0x80;
                      *(_DWORD *)(v77 + 24) = v78;
                      v60 = v94[5];
                    }
                    while ( v74 < *(_QWORD *)(v75 + 352) );
                    *(_DWORD *)(v60 + 4) &= ~8u;
                    LODWORD(v98) = 1;
LABEL_197:
                    *(_DWORD *)(v93 + 24) |= 0x40u;
                    if ( !v81 && sub_A36D0(v97, (__int64 *)v82.m128i_i64[0], *((_QWORD *)v13 + 1), 0, 0) )
                      *(_DWORD *)(v97 + 24) |= 0x80u;
                    LODWORD(v99) = v98;
                    goto LABEL_127;
                  }
                  v63 = v87;
                  v92 = v113;
                  sub_5DA80(v113, v87);
                  v68 = *(_QWORD *)(v63 + 24);
                  v114 = nullptr;
                  v115 = 0;
                  if ( v68 )
                  {
                    v98 = 16 * v68;
                    v114 = (void *)qalloc_or_throw(16 * v68);
                    *((_QWORD *)&v115 + 1) = v68;
                    memcpy(v114, *(const void **)(v87 + 16), v98);
                    *(_QWORD *)&v115 = v68;
                  }
                  sub_5E0C0(v92, v90, v64, v65, v66, v67);
                  v98 = (size_t)&v114;
                  sub_3108E0(&v114, v90 + 2);
                  sub_5E0C0(v92, v104, v69, v70, v71, v72);
                  sub_3108E0(v98, &v105);
                  sub_16EC00((__int64)&v122, (__int64)v92, (__int64)v13, v96, v97, v93, 0, 0, v95.m128i_i64[0]);
                  LODWORD(v98) = sub_16F510((__int64)&v122, (__int64)v96);
                  if ( (unsigned int)(v98 + 4) <= 1 )
                  {
                    if ( (_DWORD)v98 != -3 )
                    {
                      LODWORD(v98) = -4;
                      goto LABEL_156;
                    }
                  }
                  else
                  {
                    if ( (int)v98 <= 0 )
                    {
                      if ( !(_DWORD)v98 )
                      {
                        if ( v143 )
                          LODWORD(v98) = -2;
                        if ( v144 )
                          LODWORD(v98) = -1;
                      }
LABEL_156:
                      v122.m128i_i64[0] = (__int64)off_4AA680;
                      if ( v145 && !v144 )
                        sub_1171D0(v125, (__int64)v126);
                      v125 = 0;
                      v142 = 0;
                      if ( v140 )
                      {
                        v141 = 0;
                        qfree(v140);
                      }
                      qfree(v139);
                      if ( v137 )
                      {
                        v138 = 0;
                        qfree(v137);
                      }
                      qfree(v136);
                      if ( v134 )
                      {
                        v135 = 0;
                        qfree(v134);
                      }
                      qfree(v133);
                      if ( v131 )
                      {
                        v132 = 0;
                        qfree(v131);
                      }
                      qfree(v130);
                      sub_1166E0((__int64)v129);
                      sub_1166E0((__int64)v128);
                      sub_1166E0((__int64)v127);
                      if ( v114 )
                      {
                        *(_QWORD *)&v115 = 0;
                        qfree(v114);
                      }
                      qfree(v113[0]);
                      if ( !(_DWORD)v98 )
                        goto LABEL_80;
                      *(_DWORD *)(v94[5] + 4) &= ~8u;
                      if ( (int)v98 > 0 )
                        goto LABEL_197;
                      if ( (_DWORD)v98 != -1 && (_DWORD)v98 != -4 )
                      {
                        LODWORD(v99) = v98;
                        goto LABEL_80;
                      }
                      goto LABEL_141;
                    }
                    if ( sub_16D2D0(v13, v96, v98, 128) )
                    {
                      if ( (unsigned int)sub_161150(v93, v96, 12)
                        || !(_BYTE)v83
                        || *v13 == 14
                        && (v91 = v94[5], sub_1161E0((__int64)v13, &v100))
                        && (*(_BYTE *)v100 != 4 || (unsigned int)(**(_DWORD **)(v100 + 8) - 8) <= 2)
                        && (v118 = 0,
                            v119 = 0u,
                            v120 = 0,
                            v116 = &off_4AA830,
                            v121 = v13,
                            v117 = v91,
                            (unsigned int)sub_118240(v96, (__int64)&v116)) )
                      {
                        v145 = 0;
                        goto LABEL_156;
                      }
                    }
                  }
                  LODWORD(v98) = 0;
                  goto LABEL_156;
                }
LABEL_80:
                if ( v111 )
                {
                  v112 = 0;
                  qfree(v111);
                }
                qfree(v110[0]);
                goto LABEL_41;
              }
              v44 = *(_QWORD *)v123;
              v98 = *(_QWORD *)v123;
              if ( !v124.m128i_i64[0] )
              {
                *(_QWORD *)v123 = v44 & 3 | v123 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(v123 + 8) = _mm_unpacklo_epi64((__m128i)v123, (__m128i)v123);
                *(_QWORD *)v123 &= ~1uLL;
                *(_QWORD *)v123 |= 2uLL;
LABEL_121:
                if ( v123 )
                  qfree(v123);
                goto LABEL_123;
              }
              v45 = (__int64 *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
              v46 = *(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v46 & 2) != 0 )
              {
LABEL_120:
                *(_QWORD *)v43 = v43 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v43 & 3LL;
                *(__m128i *)(v123 + 8) = _mm_unpacklo_epi64((__m128i)v123, (__m128i)v123);
                *(_QWORD *)v123 &= ~1uLL;
                *(_QWORD *)v123 |= 2uLL;
                v124.m128i_i64[0] = 0;
                goto LABEL_121;
              }
              v47 = (__int64 *)v45[1];
              v48 = *v47;
              if ( (*v47 & 2) != 0 )
              {
                v51 = (__int64 *)v45[2];
                if ( (*(_BYTE *)v51 & 2) != 0 )
                  goto LABEL_207;
                goto LABEL_115;
              }
              v49 = (__int64 *)v47[1];
              if ( (*(_BYTE *)v49 & 2) != 0 )
              {
                v50 = (__int64 *)v47[2];
                if ( (*(_BYTE *)v50 & 2) != 0 )
                {
LABEL_209:
                  *v47 = v48 | 2;
LABEL_112:
                  if ( v47 )
                    qfree(v47);
                  v51 = (__int64 *)v45[2];
                  if ( (*(_BYTE *)v51 & 2) != 0 )
                  {
LABEL_116:
                    v46 = *v45;
                    if ( (*v45 & 2) != 0 )
                    {
LABEL_117:
                      if ( v98 > 3 )
                        qfree(v45);
                      v43 = v123;
                      goto LABEL_120;
                    }
LABEL_207:
                    *v45 = v46 | 2;
                    goto LABEL_117;
                  }
LABEL_115:
                  sub_16CEE0(v51);
                  goto LABEL_116;
                }
              }
              else
              {
                v91 = v45[1];
                sub_16CEE0(v49);
                v47 = (__int64 *)v91;
                v50 = *(__int64 **)(v91 + 16);
                if ( (*(_BYTE *)v50 & 2) != 0 )
                  goto LABEL_111;
              }
              v91 = (__int64)v47;
              sub_16CEE0(v50);
              v47 = (__int64 *)v91;
LABEL_111:
              v48 = *v47;
              if ( (*v47 & 2) != 0 )
                goto LABEL_112;
              goto LABEL_209;
            }
            if ( ((unsigned __int8)sub_5E200(v95.m128i_i64[0], v82.m128i_i64[0])
               || (unsigned __int8)sub_3110F0(&src, &v111))
              && !sub_1726D0(v94, v91, (int)v92) )
            {
              goto LABEL_80;
            }
LABEL_89:
            if ( (unsigned __int8)sub_5E200(v90, v101) )
              goto LABEL_80;
            LOBYTE(v83) = sub_3110F0(v90 + 2, &v102);
            if ( (_BYTE)v83 )
              goto LABEL_80;
            v81 = 1;
            goto LABEL_75;
          }
LABEL_69:
          if ( (_BYTE)v83 )
            goto LABEL_89;
          if ( *((_BYTE *)v13 + 64) == 1 && v13[18] <= 7 )
          {
            v81 = 0;
            goto LABEL_75;
          }
          goto LABEL_71;
        }
      }
      v37 = 1;
      goto LABEL_69;
    }
  }
LABEL_41:
  if ( src )
  {
    v109.m128i_i64[0] = 0;
    qfree(src);
  }
  qfree(v107[0]);
LABEL_18:
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105);
  }
  v13 = (unsigned int *)v104[0];
LABEL_21:
  qfree(v13);
  if ( v102 )
  {
    v103.m128i_i64[0] = 0;
    qfree(v102);
  }
  qfree(v101[0]);
  return (unsigned int)v99;
}
