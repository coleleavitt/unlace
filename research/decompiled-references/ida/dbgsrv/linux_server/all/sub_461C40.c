/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461C40
// Address: 0x0000000000461C40

//----- (0000000000461C40) ----------------------------------------------------
__int64 __fastcall sub_461C40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rax
  const char *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  char *v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbp
  char *v32; // rbx
  void *v33; // rdi
  void *v34; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  __int64 v42; // rdx
  char *v43; // rsi
  char *v44; // rbx
  unsigned __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // rdx
  char v54; // r13
  const char *v55; // rsi
  __int64 v56; // rax
  void **v57; // rsi
  __int64 v58; // rbp
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __m128 v63; // xmm4
  __m128 v64; // xmm5
  __int64 v65; // r13
  unsigned __int64 v66; // r14
  __int64 v67; // r15
  void *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned int v71; // r14d
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __m128 v79; // xmm4
  __m128 v80; // xmm5
  unsigned int v81; // ebx
  bool v82; // al
  bool v83; // zf
  char *v84; // rdx
  __int64 v85; // rbp
  __int64 v86; // rbx
  char *v87; // rax
  void *v88; // rdi
  unsigned __int64 v89; // rbp
  const char *v90; // r14
  char *v91; // rax
  const char *v92; // rbp
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __m128 v96; // xmm4
  __m128 v97; // xmm5
  unsigned __int64 v98; // rax
  void *v99; // rdi
  unsigned __int64 v100; // rdx
  void *v101; // rbp
  __int64 v102; // rbx
  const void *v103; // r13
  char *v104; // r14
  void *v105; // rax
  __int64 v106; // rax
  const char *v107; // r15
  void *v108; // r13
  const char *v109; // r15
  __int64 v110; // r9
  unsigned __int64 v111; // rdx
  char *v112; // r15
  char *v113; // r8
  char *v114; // rax
  char *v115; // rbp
  size_t v116; // r10
  char *v117; // r9
  char *v118; // r11
  void *v119; // rdx
  void *v120; // rdi
  void *v121; // rax
  void *v122; // rdi
  __int64 v123; // r8
  __int64 v124; // rax
  char *v125; // rsi
  char *v126; // rax
  __m128 *v127; // rax
  __int64 v128; // r9
  char *v129; // rdi
  __int64 v130; // rdx
  unsigned __int64 v131; // rcx
  char *v133; // rbp
  size_t v134; // rax
  size_t v135; // r9
  char *v136; // r8
  void *v137; // rdx
  void *v138; // rax
  char v139; // [rsp+0h] [rbp-358h]
  void *v140; // [rsp+10h] [rbp-348h]
  int v141[2]; // [rsp+18h] [rbp-340h]
  int v142[2]; // [rsp+18h] [rbp-340h]
  int v143[2]; // [rsp+18h] [rbp-340h]
  int v144[2]; // [rsp+18h] [rbp-340h]
  __int64 v145; // [rsp+20h] [rbp-338h]
  char *v146; // [rsp+20h] [rbp-338h]
  __int64 v147; // [rsp+20h] [rbp-338h]
  char *v148; // [rsp+20h] [rbp-338h]
  unsigned int v149; // [rsp+30h] [rbp-328h]
  unsigned __int8 v150; // [rsp+36h] [rbp-322h]
  char v151; // [rsp+37h] [rbp-321h]
  const char *v152; // [rsp+38h] [rbp-320h]
  size_t v153; // [rsp+38h] [rbp-320h]
  char *v154; // [rsp+40h] [rbp-318h]
  size_t v155; // [rsp+48h] [rbp-310h]
  void *v156; // [rsp+50h] [rbp-308h] BYREF
  __int128 v157; // [rsp+58h] [rbp-300h]
  void *ptr[4]; // [rsp+70h] [rbp-2E8h] BYREF
  _BYTE v159[4]; // [rsp+94h] [rbp-2C4h] BYREF
  void *v160; // [rsp+98h] [rbp-2C0h] BYREF
  _BYTE v161[32]; // [rsp+A0h] [rbp-2B8h] BYREF
  void *v162; // [rsp+C0h] [rbp-298h]
  __int64 v163; // [rsp+C8h] [rbp-290h]
  __int64 v164[4]; // [rsp+F0h] [rbp-268h] BYREF
  void *v165; // [rsp+110h] [rbp-248h]
  __int64 v166; // [rsp+118h] [rbp-240h]
  void *v167; // [rsp+1C0h] [rbp-198h]
  __int64 v168; // [rsp+1C8h] [rbp-190h]
  __int64 v169; // [rsp+278h] [rbp-E0h]
  __int64 v170; // [rsp+280h] [rbp-D8h]
  __int64 v171; // [rsp+288h] [rbp-D0h]
  char v172; // [rsp+29Ch] [rbp-BCh]
  char v173; // [rsp+29Dh] [rbp-BBh]
  unsigned int v174; // [rsp+2D8h] [rbp-80h]
  void *v175; // [rsp+2E0h] [rbp-78h]
  __int64 v176; // [rsp+2E8h] [rbp-70h]
  __int64 v177; // [rsp+2F8h] [rbp-60h]
  char v178; // [rsp+308h] [rbp-50h]
  unsigned __int64 v179; // [rsp+318h] [rbp-40h]

  v179 = __readfsqword(0x28u);
  v14 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (a4 = *(unsigned int *)(v14 + 8), v149 = a4, (_DWORD)a4 != 1) )
  {
    sub_410EA0((int)"Input source is not local file.\n", a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, v139);
    return 0;
  }
  v16 = s1;
  if ( *(_QWORD *)(v14 + 24) )
    v16 = *(const char **)(v14 + 16);
  v140 = (void *)sub_47F560(v16, 0);
  if ( !v140 )
  {
    sub_410EA0(
      (int)"Cannot open file: %s.\n",
      (__int64)v16,
      v17,
      v18,
      v19,
      v20,
      a7,
      a8,
      a9,
      a10,
      v21,
      v22,
      a13,
      a14,
      v139);
    return 0;
  }
  sub_428130((__int64)v161, (__int64)v140, 0);
  sub_424C30((__int64)v161, nullptr);
  if ( !(unsigned __int8)sub_424C50((__int64)v161) || !(unsigned __int8)sub_4251B0((__int64)v161) )
  {
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"Failed to read ELF ident/header from: %s\n",
                               (__int64)v16,
                               v23,
                               v24,
                               v25,
                               v26,
                               a7,
                               a8,
                               a9,
                               a10,
                               v27,
                               v28,
                               a13,
                               a14,
                               v139);
LABEL_9:
    v150 = 0;
    goto LABEL_10;
  }
  v151 = sub_4295E0((__int64)v161, a7, a8, a9, a10, *(double *)v27.m128_u64, *(double *)v28.m128_u64, a13, a14);
  if ( !v151 )
  {
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"Failed to read ELF sections from: %s\n",
                               (__int64)v16,
                               v36,
                               v37,
                               v38,
                               v39,
                               a7,
                               a8,
                               a9,
                               a10,
                               v40,
                               v41,
                               a13,
                               a14,
                               v139);
    goto LABEL_9;
  }
  a7 = 0;
  v150 = 0;
  v156 = nullptr;
  v157 = 0;
  if ( v174 <= 1 )
  {
    v83 = v172 == 2;
    *(_BYTE *)(a1 + 169) = v173 == 2;
    *(_BYTE *)(a1 + 168) = v83;
    goto LABEL_61;
  }
  do
  {
    v42 = *(_QWORD *)(a1 + 112);
    v43 = *(char **)(a1 + 104);
    if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v42 + 1) )
    {
      v91 = (char *)sub_481540(a1 + 104, v43, v42 + 1, 0x78u);
      *(_QWORD *)(a1 + 104) = v91;
      v42 = *(_QWORD *)(a1 + 112);
      v43 = v91;
    }
    v44 = &v43[120 * v42];
    *(_QWORD *)v44 = 0;
    *((_QWORD *)v44 + 14) = 0;
    memset(
      (void *)((unsigned __int64)(v44 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)v43 + 120 * (_DWORD)v42 - (((_DWORD)v44 + 8) & 0xFFFFFFF8) + 120) >> 3));
    ++*(_QWORD *)(a1 + 112);
    v45 = sub_4264B0((__int64)v164, v149);
    *(_QWORD *)v44 = *(_QWORD *)(v45 + 16);
    *((_DWORD *)v44 + 2) = *(_QWORD *)(v45 + 32);
    *((_DWORD *)v44 + 10) = *(_DWORD *)(v45 + 40);
    *((_DWORD *)v44 + 11) = *(_QWORD *)(v45 + 56);
    *((_QWORD *)v44 + 6) = *(_QWORD *)(v45 + 24);
    *((_QWORD *)v44 + 7) = *(unsigned int *)(v45 + 4);
    *((_QWORD *)v44 + 8) = *(unsigned int *)(v45 + 44);
    sub_428F20(v164, (__int64)(v44 + 16), (unsigned int *)v45);
    v51 = *((_QWORD *)v44 + 3);
    if ( !v51 )
    {
      v52 = *(_QWORD *)(v45 + 8);
      if ( (v52 & 0x800) == 0 )
        goto LABEL_58;
      v53 = qword_4C8250;
      if ( qword_4C8250 )
      {
        v54 = *(_BYTE *)(qword_4C8250 + 184);
        if ( !v54 )
        {
LABEL_42:
          BYTE1(v52) |= 8u;
          a7 = 0;
          *((_QWORD *)v44 + 9) = v52;
          *((_QWORD *)v44 + 11) = *((unsigned int *)v44 + 2);
          memset(ptr, 0, 24);
          v56 = sub_47F740(v169, 0, 1);
          v57 = (void **)(*(_QWORD *)(v45 + 24) + v170);
          v58 = v56 - v170;
          if ( sub_47F740(v169, (__off64_t)v57, 0) == -1 )
            goto LABEL_74;
          if ( v54 )
          {
            v57 = (void **)v159;
            if ( (unsigned int)sub_424D70((__int64)v161, v159, 12, 0, v61) )
              goto LABEL_74;
            if ( !v178 )
              sub_482080(&v160, 8);
            LODWORD(ptr[0]) = 1;
            ptr[2] = (void *)1;
            ptr[1] = v160;
            v65 = *((_QWORD *)v44 + 3);
            if ( v65 && (v66 = v65 - 1, (unsigned __int64)(v65 - 1) > 1) )
            {
              v67 = 1;
              if ( v65 != 3 )
              {
                v67 = v65 - 2;
                memmove((void *)(*((_QWORD *)v44 + 2) + 1LL), (const void *)(*((_QWORD *)v44 + 2) + 2LL), v65 - 3);
              }
              v68 = *((void **)v44 + 2);
              if ( *((_QWORD *)v44 + 4) < v66 )
              {
                v138 = sub_481540((__int64)(v44 + 16), v68, v65 - 1, 1u);
                *((_QWORD *)v44 + 2) = v138;
                v68 = v138;
              }
              *((_QWORD *)v44 + 3) = v66;
              *((_BYTE *)v68 + v67) = 0;
              v69 = LODWORD(ptr[0]);
              v70 = (__int64)ptr[2];
            }
            else
            {
              v70 = 1;
              v69 = 1;
            }
            goto LABEL_88;
          }
          v57 = ptr;
          if ( sub_4259B0((__int64)v161, ptr, v59, v60, v61) )
          {
            v69 = LODWORD(ptr[0]);
            v70 = (__int64)ptr[2];
LABEL_88:
            *((_QWORD *)v44 + 10) = v69;
            *((_QWORD *)v44 + 12) = v70;
            v106 = sub_47F740(v169, 0, 1);
            *((_QWORD *)v44 + 13) = v106 - v170;
            *((_DWORD *)v44 + 2) = ptr[1];
            sub_47F740(v169, v58 + v170, 0);
            v51 = *((_QWORD *)v44 + 3);
            if ( !v51 )
              goto LABEL_58;
            v90 = *((const char **)v44 + 2);
            v89 = v51 - 1;
            goto LABEL_90;
          }
LABEL_74:
          *(double *)a7.m128_u64 = sub_410EA0(
                                     (int)"Truncated file.\n",
                                     (__int64)v57,
                                     v59,
                                     v60,
                                     v61,
                                     v62,
                                     (__m128)0LL,
                                     a8,
                                     a9,
                                     a10,
                                     v63,
                                     v64,
                                     a13,
                                     a14,
                                     v139);
          sub_47F740(v169, v58 + v170, 0);
          v51 = *((_QWORD *)v44 + 3);
LABEL_75:
          if ( v51 )
          {
            v92 = *((const char **)v44 + 2);
            if ( !strcmp(v92, ".note.iar") )
            {
              v71 = *((_DWORD *)v44 + 2);
              *(double *)a7.m128_u64 = sub_410EA0(
                                         (int)"Spotted %u bytes-long section: '%s'.\n",
                                         v71,
                                         (__int64)v92,
                                         v93,
                                         v94,
                                         v95,
                                         a7,
                                         a8,
                                         a9,
                                         a10,
                                         v96,
                                         v97,
                                         a13,
                                         a14,
                                         v139);
              v72 = sub_47F740(v169, 0, 1);
              v73 = *((_QWORD *)v44 + 6) + v170;
              v74 = v72 - v170;
              if ( sub_47F740(v169, v73, 0) == -1 )
              {
                *(double *)a7.m128_u64 = sub_410EA0(
                                           (int)"Truncated file.\n",
                                           v73,
                                           v75,
                                           v76,
                                           v77,
                                           v78,
                                           a7,
                                           a8,
                                           a9,
                                           a10,
                                           v79,
                                           v80,
                                           a13,
                                           a14,
                                           v139);
                sub_47F740(v169, v74 + v170, 0);
              }
              else
              {
                v81 = v71 % 0x14;
                if ( v71 == 20 * (v71 / 0x14) )
                {
                  if ( v71 > 0x13 )
                  {
                    do
                    {
                      a8 = 0;
                      memset(ptr, 0, 24);
                      ptr[0] = sub_481540((__int64)ptr, nullptr, 0x14u, 1u);
                      memset((char *)ptr[0] + (unsigned __int64)ptr[1], 0, 20 - (unsigned __int64)ptr[1]);
                      ptr[1] = (void *)20;
                      if ( (unsigned int)sub_424D70((__int64)v161, (_BYTE *)ptr[0], 20, 1, v123) )
                      {
                        v122 = ptr[0];
                      }
                      else
                      {
                        v124 = v157;
                        if ( *((_QWORD *)&v157 + 1) < (unsigned __int64)(v157 + 1) )
                        {
                          *(_QWORD *)v143 = *((_QWORD *)&v157 + 1);
                          v127 = (__m128 *)sub_481540((__int64)&v156, nullptr, v157 + 1, 0x18u);
                          v125 = (char *)v127;
                          v128 = *((_QWORD *)&v157 + 1);
                          v129 = (char *)v156;
                          *((_QWORD *)&v157 + 1) = *(_QWORD *)v143;
                          v130 = v157 - 1;
                          if ( (__int64)v157 - 1 >= 0 )
                          {
                            do
                            {
                              v131 = *(_QWORD *)v129;
                              a7 = (__m128)_mm_loadu_si128((const __m128i *)(v129 + 8));
                              v127 = (__m128 *)((char *)v127 + 24);
                              v129 += 24;
                              *((_QWORD *)v129 - 3) = 0;
                              v127[-2].m128_u64[1] = v131;
                              v127[-1] = a7;
                              *((_QWORD *)v129 - 1) = 0;
                            }
                            while ( v130-- != 0 );
                            v129 = (char *)v156;
                          }
                          v147 = v128;
                          j__free(v129);
                          v124 = v157;
                          v156 = v125;
                          *((_QWORD *)&v157 + 1) = v147;
                        }
                        else
                        {
                          v125 = (char *)v156;
                        }
                        a9 = 0;
                        v126 = &v125[24 * v124];
                        *(_QWORD *)v126 = 0;
                        *(_OWORD *)(v126 + 8) = 0;
                        *(_QWORD *)&v157 = v157 + 1;
                        v122 = *(void **)v126;
                        *(void **)v126 = ptr[0];
                        *((void **)v126 + 1) = ptr[1];
                        *((void **)v126 + 2) = ptr[2];
                        ptr[0] = v122;
                        ptr[2] = nullptr;
                      }
                      if ( v122 )
                      {
                        ptr[1] = nullptr;
                        j__free(v122);
                      }
                      ++v81;
                    }
                    while ( v81 < v71 / 0x14 );
                  }
                }
                else
                {
                  *(double *)a7.m128_u64 = sub_410EA0(
                                             (int)"Section is odd-sized. Ignoring.\n",
                                             v73,
                                             v75,
                                             v76,
                                             v77,
                                             v78,
                                             a7,
                                             a8,
                                             a9,
                                             a10,
                                             v79,
                                             v80,
                                             a13,
                                             a14,
                                             v139);
                }
                sub_47F740(v169, v74 + v170, 0);
              }
            }
            else if ( !strcmp(v92, ".gnu_debugaltlink") )
            {
              v98 = sub_4264B0((__int64)v164, v149);
              a7 = 0;
              memset(ptr, 0, 24);
              sub_429EA0(v164, (__int64)ptr, v98);
              v99 = *(void **)(a1 + 192);
              if ( v99 )
              {
                *(_QWORD *)(a1 + 200) = 0;
                j__free(v99);
                *(_QWORD *)(a1 + 192) = 0;
                v100 = 0;
                *(_QWORD *)(a1 + 208) = 0;
              }
              else
              {
                v100 = *(_QWORD *)(a1 + 208);
              }
              v101 = ptr[1];
              v102 = *(_QWORD *)(a1 + 200);
              v103 = ptr[0];
              v104 = (char *)ptr[1];
              if ( v102 )
              {
                --v102;
                v104 = (char *)ptr[1] + v102;
              }
              v105 = nullptr;
              if ( v100 < (unsigned __int64)(v104 + 1) )
              {
                v105 = sub_481540(a1 + 192, nullptr, (unsigned __int64)(v104 + 1), 1u);
                *(_QWORD *)(a1 + 192) = v105;
              }
              *(_QWORD *)(a1 + 200) = v104 + 1;
              v104[(_QWORD)v105] = 0;
              memmove((void *)(*(_QWORD *)(a1 + 192) + v102), v103, (size_t)v101);
              if ( ptr[0] )
              {
                ptr[1] = nullptr;
                j__free(ptr[0]);
              }
            }
          }
          goto LABEL_58;
        }
        v54 = 0;
        v55 = s1;
        goto LABEL_40;
      }
LABEL_137:
      v54 = 0;
      goto LABEL_42;
    }
    v89 = v51 - 1;
    if ( (unsigned __int64)(v51 - 1) <= 7 )
    {
      v52 = *(_QWORD *)(v45 + 8);
      if ( (v52 & 0x800) == 0 )
      {
        v107 = *((const char **)v44 + 2);
LABEL_92:
        v150 |= strncmp(v107, ".debug_", 7u) == 0;
        goto LABEL_75;
      }
      v53 = qword_4C8250;
      if ( !qword_4C8250 )
        goto LABEL_137;
      v54 = *(_BYTE *)(qword_4C8250 + 184);
      if ( !v54 )
        goto LABEL_42;
      v90 = *((const char **)v44 + 2);
      v54 = 0;
      goto LABEL_72;
    }
    v90 = *((const char **)v44 + 2);
    if ( !strncmp(v90, ".zdebug_", 8u) )
    {
      if ( !qword_4C8250 || (v54 = *(_BYTE *)(qword_4C8250 + 184)) == 0 )
      {
        v54 = v151;
        goto LABEL_41;
      }
      goto LABEL_72;
    }
    v52 = *(_QWORD *)(v45 + 8);
    if ( (v52 & 0x800) != 0 )
    {
      v53 = qword_4C8250;
      if ( !qword_4C8250 )
        goto LABEL_137;
      v54 = *(_BYTE *)(qword_4C8250 + 184);
      if ( !v54 )
        goto LABEL_42;
      v54 = 0;
LABEL_72:
      v55 = v90;
LABEL_40:
      sub_410EA0(
        (int)"Section '%s' is compressed.\n",
        (__int64)v55,
        v53,
        v46,
        v47,
        v48,
        a7,
        a8,
        a9,
        a10,
        v49,
        v50,
        a13,
        a14,
        v139);
LABEL_41:
      v52 = *(_QWORD *)(v45 + 8);
      goto LABEL_42;
    }
LABEL_90:
    v107 = v90;
    if ( v89 <= 0xA || strncmp(v90, ".rel.debug_", 0xBu) )
      goto LABEL_92;
    memset(ptr, 0, 24);
    a7 = 0;
    v108 = nullptr;
    v152 = *((const char **)v44 + 2);
    v109 = v152;
    while ( 1 )
    {
      v114 = strstr(v109, ".rel.debug_");
      v115 = v114;
      if ( !v114 )
        break;
      v116 = v114 - v109;
      if ( v114 != v109 )
      {
        v117 = (char *)ptr[1];
        v118 = (char *)(v114 - v109);
        if ( ptr[1] )
        {
          v117 = (char *)ptr[1] - 1;
          v118 = (char *)ptr[1] + v116 - 1;
        }
        v119 = v118 + 1;
        if ( ptr[2] < v118 + 1 )
        {
          v155 = v114 - v109;
          v154 = v117;
          v146 = v118;
          *(_QWORD *)v142 = v118 + 1;
          ptr[0] = sub_481540((__int64)ptr, v108, (unsigned __int64)v119, 1u);
          v116 = v155;
          v108 = ptr[0];
          v117 = v154;
          v118 = v146;
          v119 = *(void **)v142;
        }
        ptr[1] = v119;
        v118[(_QWORD)v108] = 0;
        memmove(&v117[(unsigned __int64)ptr[0]], v109, v116);
        v108 = ptr[0];
      }
      v112 = (char *)ptr[1];
      if ( ptr[1] )
      {
        v110 = (__int64)ptr[1] + 11;
        v111 = (unsigned __int64)ptr[1] + 12;
        v112 = (char *)ptr[1] - 1;
        if ( ptr[2] >= (char *)ptr[1] + 12 )
          goto LABEL_95;
      }
      else
      {
        v111 = 13;
        v110 = 12;
        if ( ptr[2] >= (void *)0xD )
          goto LABEL_95;
      }
      v145 = v110;
      *(_QWORD *)v141 = v111;
      ptr[0] = sub_481540((__int64)ptr, v108, v111, 1u);
      v110 = v145;
      v108 = ptr[0];
      v111 = *(_QWORD *)v141;
LABEL_95:
      ptr[1] = (void *)v111;
      *((_BYTE *)v108 + v110) = 0;
      v113 = &v112[(unsigned __int64)ptr[0]];
      v109 = v115 + 11;
      qmemcpy(v113, ".rela.debug_", 12);
      v108 = ptr[0];
    }
    if ( v152 == v109 )
    {
      v120 = v108;
    }
    else
    {
      if ( *v109 && v109 )
      {
        v133 = (char *)ptr[1];
        v134 = strlen(v109);
        v135 = v134;
        v136 = (char *)v134;
        if ( v133 )
        {
          --v133;
          v136 = &v133[v134];
        }
        v137 = v136 + 1;
        if ( ptr[2] < v136 + 1 )
        {
          v153 = v134;
          v148 = v136;
          *(_QWORD *)v144 = v136 + 1;
          ptr[0] = sub_481540((__int64)ptr, v108, (unsigned __int64)v137, 1u);
          v135 = v153;
          v108 = ptr[0];
          v136 = v148;
          v137 = *(void **)v144;
        }
        ptr[1] = v137;
        v136[(_QWORD)v108] = 0;
        memmove(&v133[(unsigned __int64)ptr[0]], v109, v135);
        v108 = ptr[0];
      }
      v120 = *((void **)v44 + 2);
      v121 = *((void **)v44 + 4);
      *((_QWORD *)v44 + 2) = v108;
      a7 = (__m128)_mm_loadu_si128((const __m128i *)&ptr[1]);
      *(__m128 *)(v44 + 24) = a7;
      ptr[0] = v120;
      ptr[2] = v121;
    }
    if ( v120 )
    {
      ptr[1] = nullptr;
      j__free(v120);
    }
    if ( *((_QWORD *)v44 + 7) == 9 )
      *((_QWORD *)v44 + 7) = 4;
    if ( *((_QWORD *)v44 + 3) )
    {
      v107 = *((const char **)v44 + 2);
      v51 = *((_QWORD *)v44 + 3);
      goto LABEL_92;
    }
LABEL_58:
    ++v149;
  }
  while ( v149 < v174 );
  v82 = v173 == 2;
  *(_BYTE *)(a1 + 168) = v172 == 2;
  v83 = (_QWORD)v157 == 0;
  *(_BYTE *)(a1 + 169) = v82;
  if ( !v83 )
    sub_45C580(a1, (__int64 *)&v156);
LABEL_61:
  v84 = (char *)v156;
  *(_QWORD *)(a1 + 184) = v171 - v170;
  if ( v84 )
  {
    v85 = v157;
    if ( (_QWORD)v157 )
    {
      v86 = 0;
      do
      {
        v87 = &v84[24 * v86];
        v88 = *(void **)v87;
        if ( *(_QWORD *)v87 )
        {
          *((_QWORD *)v87 + 1) = 0;
          j__free(v88);
          v84 = (char *)v156;
        }
        ++v86;
      }
      while ( v85 != v86 );
    }
    *(_QWORD *)&v157 = 0;
    j__free(v84);
  }
LABEL_10:
  if ( v177 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v177 + 8LL))(v177, *(double *)a7.m128_u64);
  if ( v175 )
  {
    v176 = 0;
    j__free(v175);
  }
  v29 = (char *)v167;
  if ( v167 )
  {
    v30 = v168;
    if ( v168 )
    {
      v31 = 0;
      do
      {
        v32 = &v29[96 * v31];
        v33 = *((void **)v32 + 3);
        if ( v33 )
        {
          *((_QWORD *)v32 + 4) = 0;
          j__free(v33);
        }
        v34 = *(void **)v32;
        if ( *(_QWORD *)v32 )
        {
          *((_QWORD *)v32 + 1) = 0;
          j__free(v34);
        }
        ++v31;
        v29 = (char *)v167;
      }
      while ( v30 != v31 );
    }
    v168 = 0;
    j__free(v29);
  }
  if ( v165 )
  {
    v166 = 0;
    j__free(v165);
  }
  if ( v162 )
  {
    v163 = 0;
    j__free(v162);
  }
  sub_47F680(v140);
  return v150;
}
// 461CFC: variable 'v23' is possibly undefined
// 461CFC: variable 'v24' is possibly undefined
// 461CFC: variable 'v25' is possibly undefined
// 461CFC: variable 'v26' is possibly undefined
// 461CFC: variable 'v27' is possibly undefined
// 461CFC: variable 'v28' is possibly undefined
// 461CFC: variable 'v139' is possibly undefined
// 461FA3: variable 'v53' is possibly undefined
// 461FA3: variable 'v46' is possibly undefined
// 461FA3: variable 'v47' is possibly undefined
// 461FA3: variable 'v48' is possibly undefined
// 461FA3: variable 'v49' is possibly undefined
// 461FA3: variable 'v50' is possibly undefined
// 462035: variable 'v61' is possibly undefined
// 4620EE: variable 'v93' is possibly undefined
// 4620EE: variable 'v94' is possibly undefined
// 4620EE: variable 'v95' is possibly undefined
// 4620EE: variable 'v96' is possibly undefined
// 4620EE: variable 'v97' is possibly undefined
// 46215F: variable 'v75' is possibly undefined
// 46215F: variable 'v76' is possibly undefined
// 46215F: variable 'v77' is possibly undefined
// 46215F: variable 'v78' is possibly undefined
// 46215F: variable 'v79' is possibly undefined
// 46215F: variable 'v80' is possibly undefined
// 4622F9: variable 'v59' is possibly undefined
// 4622F9: variable 'v60' is possibly undefined
// 4622F9: variable 'v62' is possibly undefined
// 4622F9: variable 'v63' is possibly undefined
// 4622F9: variable 'v64' is possibly undefined
// 4627C1: variable 'v123' is possibly undefined
// 462922: variable 'v17' is possibly undefined
// 462922: variable 'v18' is possibly undefined
// 462922: variable 'v19' is possibly undefined
// 462922: variable 'v20' is possibly undefined
// 462922: variable 'v21' is possibly undefined
// 462922: variable 'v22' is possibly undefined
// 462A6C: variable 'v36' is possibly undefined
// 462A6C: variable 'v37' is possibly undefined
// 462A6C: variable 'v38' is possibly undefined
// 462A6C: variable 'v39' is possibly undefined
// 462A6C: variable 'v40' is possibly undefined
// 462A6C: variable 'v41' is possibly undefined
// 4C8250: using guessed type __int64 qword_4C8250;
