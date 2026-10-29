/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464060
// Address: 0x0000000000464060

//----- (0000000000464060) ----------------------------------------------------
__int64 __fastcall sub_464060(
        __int64 *a1,
        __int64 a2,
        int a3,
        int *a4,
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
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r13
  const char *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // r12
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  const char *v37; // rsi
  unsigned int v38; // r13d
  char *v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rbp
  char *v42; // rbx
  void *v43; // rdi
  void *v44; // rdi
  const char *v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __m128 v59; // xmm4
  __m128 v60; // xmm5
  char v61; // r15
  bool v62; // r13
  __int64 v63; // rax
  void *v64; // rdi
  void *v65; // rdi
  int v66; // eax
  unsigned __int64 v67; // rax
  unsigned __int64 *v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  int v79; // eax
  const char *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __m128 v85; // xmm4
  __m128 v86; // xmm5
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __m128 v90; // xmm4
  __m128 v91; // xmm5
  const char *v92; // rdx
  unsigned __int64 v93; // r15
  unsigned __int64 v94; // r13
  __int64 v95; // rax
  unsigned __int64 v96; // r8
  unsigned __int64 v97; // rax
  __m128i *v98; // r11
  __int64 v99; // rsi
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  char v103; // [rsp+0h] [rbp-3B8h]
  __int64 v104; // [rsp+18h] [rbp-3A0h]
  void *v105; // [rsp+20h] [rbp-398h]
  unsigned __int64 v106; // [rsp+20h] [rbp-398h]
  _QWORD *v107; // [rsp+28h] [rbp-390h]
  unsigned __int64 v108; // [rsp+30h] [rbp-388h]
  int v109; // [rsp+30h] [rbp-388h]
  unsigned __int64 v110; // [rsp+38h] [rbp-380h]
  unsigned __int64 v111; // [rsp+38h] [rbp-380h]
  unsigned __int8 v112; // [rsp+40h] [rbp-378h]
  __int64 v113; // [rsp+40h] [rbp-378h]
  char v114; // [rsp+40h] [rbp-378h]
  unsigned int v115; // [rsp+50h] [rbp-368h]
  char v116; // [rsp+50h] [rbp-368h]
  int v117; // [rsp+50h] [rbp-368h]
  unsigned __int16 v118; // [rsp+5Ch] [rbp-35Ch]
  bool v119; // [rsp+5Eh] [rbp-35Ah]
  char v120; // [rsp+5Fh] [rbp-359h]
  __int64 v121; // [rsp+60h] [rbp-358h]
  unsigned __int64 v122; // [rsp+68h] [rbp-350h]
  unsigned int v123; // [rsp+70h] [rbp-348h]
  __m128i *v124; // [rsp+70h] [rbp-348h]
  __m128i *v125; // [rsp+78h] [rbp-340h]
  bool v126; // [rsp+8Fh] [rbp-329h] BYREF
  __m128i v127; // [rsp+90h] [rbp-328h] BYREF
  void *s; // [rsp+A0h] [rbp-318h] BYREF
  __int128 v129; // [rsp+A8h] [rbp-310h]
  void *v130; // [rsp+C0h] [rbp-2F8h] BYREF
  __int128 v131; // [rsp+C8h] [rbp-2F0h]
  void *v132; // [rsp+E0h] [rbp-2D8h] BYREF
  __int128 v133; // [rsp+E8h] [rbp-2D0h]
  _BYTE v134[32]; // [rsp+100h] [rbp-2B8h] BYREF
  void *v135; // [rsp+120h] [rbp-298h]
  __int64 v136; // [rsp+128h] [rbp-290h]
  __int64 v137[4]; // [rsp+150h] [rbp-268h] BYREF
  void *v138; // [rsp+170h] [rbp-248h]
  __int64 v139; // [rsp+178h] [rbp-240h]
  char v140; // [rsp+1F8h] [rbp-1C0h]
  void *v141; // [rsp+220h] [rbp-198h]
  __int64 v142; // [rsp+228h] [rbp-190h]
  __int64 v143; // [rsp+2D8h] [rbp-E0h]
  __int64 v144; // [rsp+2E0h] [rbp-D8h]
  char v145; // [rsp+2FCh] [rbp-BCh]
  char v146; // [rsp+2FDh] [rbp-BBh]
  __int16 v147; // [rsp+308h] [rbp-B0h]
  unsigned __int16 v148; // [rsp+30Ah] [rbp-AEh]
  void *v149; // [rsp+340h] [rbp-78h]
  __int64 v150; // [rsp+348h] [rbp-70h]
  __int64 v151; // [rsp+358h] [rbp-60h]
  unsigned __int64 v152; // [rsp+378h] [rbp-40h]

  v152 = __readfsqword(0x28u);
  if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"Relocating section %llu (%s).\n",
                               a2,
                               *(_QWORD *)(a1[13] + 120 * (a2 - 1) + 16),
                               (__int64)a4,
                               a5,
                               a1[13],
                               a7,
                               a8,
                               a9,
                               a10,
                               a11,
                               a12,
                               a13,
                               a14,
                               v103);
  v17 = a1[30];
  if ( !v17 )
    goto LABEL_145;
  v18 = a1[29];
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v21 = v18 + 72 * v19;
    if ( a2 == *(_QWORD *)(v21 + 64) )
      break;
    v20 = (unsigned int)(v20 + 1);
    v19 = (int)v20;
    if ( (int)v20 >= v17 )
      goto LABEL_145;
  }
  if ( !v21 )
  {
LABEL_145:
    if ( !byte_4C94E1 )
      sub_481AC0(721);
    BUG();
  }
  v22 = *a1;
  if ( !*a1 || *(_DWORD *)(v22 + 8) != 1 )
  {
    sub_410EA0((int)"Invalid input source.\n", v18, v20, v17, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, v103);
    return 1;
  }
  v23 = s1;
  if ( *(_QWORD *)(v22 + 24) )
    v23 = *(const char **)(v22 + 16);
  v28 = (void *)sub_47F560(v23, 0);
  if ( !v28 )
  {
    v46 = s1;
    if ( *(_QWORD *)(v22 + 24) )
      v46 = *(const char **)(v22 + 16);
    sub_410EA0(
      (int)"Couldn't open file: %s.\n",
      (__int64)v46,
      v24,
      v25,
      v26,
      v27,
      a7,
      a8,
      a9,
      a10,
      v29,
      v30,
      a13,
      a14,
      v103);
    return 1;
  }
  sub_428130((__int64)v134, (__int64)v28, 0);
  if ( !(unsigned __int8)sub_424C50((__int64)v134)
    || !(unsigned __int8)sub_4251B0((__int64)v134)
    || !(unsigned __int8)sub_4295E0(
                           (__int64)v134,
                           a7,
                           a8,
                           a9,
                           a10,
                           *(double *)v35.m128_u64,
                           *(double *)v36.m128_u64,
                           a13,
                           a14) )
  {
    v37 = s1;
    if ( *(_QWORD *)(v22 + 24) )
      v37 = *(const char **)(v22 + 16);
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"Invalid ELF file: %s.\n",
                               (__int64)v37,
                               v31,
                               v32,
                               v33,
                               v34,
                               a7,
                               a8,
                               a9,
                               a10,
                               v35,
                               v36,
                               a13,
                               a14,
                               v103);
    goto LABEL_18;
  }
  if ( !v140 || !v139 || v147 != 1 )
  {
    if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
      *(double *)a7.m128_u64 = sub_410EA0(
                                 (int)"File is not relocatable; skipping relocations.\n",
                                 (__int64)v28,
                                 v31,
                                 v32,
                                 v33,
                                 v34,
                                 a7,
                                 a8,
                                 a9,
                                 a10,
                                 v35,
                                 v36,
                                 a13,
                                 a14,
                                 v103);
    v38 = 0;
    goto LABEL_19;
  }
  v47 = sub_426490((__int64)v137, 14);
  v54 = v47;
  if ( !v47 || (v107 = (_QWORD *)sub_4264B0((__int64)v137, v47)) == nullptr )
  {
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"No symtab section.\n",
                               v54,
                               v48,
                               v49,
                               v50,
                               v51,
                               a7,
                               a8,
                               a9,
                               a10,
                               v52,
                               v53,
                               a13,
                               a14,
                               v103);
LABEL_67:
    *a4 = 232;
LABEL_18:
    v38 = 1;
    goto LABEL_19;
  }
  v104 = sub_4264E0((__int64)v137, a2, &v126);
  if ( !v104 )
  {
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"No relsec section.\n",
                               (unsigned int)a2,
                               v55,
                               v56,
                               v57,
                               v58,
                               a7,
                               a8,
                               a9,
                               a10,
                               v59,
                               v60,
                               a13,
                               a14,
                               v103);
    goto LABEL_67;
  }
  s = nullptr;
  v61 = v145;
  v129 = 0;
  v62 = v126;
  v112 = (v146 != 2) + 1;
  v120 = v145;
  v118 = v148;
  sub_47F740(v143, *(_QWORD *)(v104 + 24) + v144, 0);
  a7.m128_u64[0] = 0;
  v132 = nullptr;
  v133 = 0;
  sub_429EA0(v137, (__int64)&v132, v104);
  if ( v61 == 2 )
  {
    v105 = sub_45B4C0;
    v63 = 16;
    if ( v62 )
    {
      v105 = sub_45B530;
      v63 = 24;
    }
  }
  else
  {
    v105 = sub_45B230;
    v63 = 8;
    if ( v62 )
    {
      v105 = sub_45B270;
      v63 = 12;
    }
  }
  v108 = v63;
  if ( v63 != *(_QWORD *)(v104 + 56) )
    goto LABEL_59;
  v110 = sub_426A90(v137, v104);
  if ( !v110 )
  {
    v65 = v132;
    if ( !v132 )
      goto LABEL_71;
    goto LABEL_70;
  }
  v93 = v110 / v108;
  v94 = v110 % v108;
  if ( v110 % v108 )
  {
LABEL_59:
    v64 = v132;
    *a4 = 216;
    if ( v64 )
    {
      *(_QWORD *)&v133 = 0;
      j__free(v64);
    }
    v38 = 1;
    goto LABEL_62;
  }
  v95 = v129;
  if ( (unsigned __int64)v129 < v93 )
  {
    if ( *((_QWORD *)&v129 + 1) < v93 )
    {
      s = sub_481540((__int64)&s, s, v110 / v108, 0x20u);
      v95 = v129;
    }
    memset((char *)s + 32 * v95, 0, 32 * (v93 - v95));
    *(_QWORD *)&v129 = v110 / v108;
  }
  else if ( v93 != (_QWORD)v129 )
  {
    *(_QWORD *)&v129 = v110 / v108;
  }
  memset(s, 0, 32 * v93);
  v65 = v132;
  if ( v110 >= v108 )
  {
    do
    {
      ((void (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, char *))v105)(
        v65,
        (unsigned int)v94,
        v112,
        v118,
        (char *)s + 32 * v94);
      ++v94;
    }
    while ( v94 < v93 );
    v65 = v132;
  }
  if ( v65 )
  {
LABEL_70:
    *(_QWORD *)&v133 = 0;
    j__free(v65);
  }
LABEL_71:
  v66 = 234;
  if ( !v107[7] )
  {
LABEL_100:
    *a4 = v66;
    v38 = 1;
    goto LABEL_62;
  }
  v119 = v126;
  v67 = sub_426A90(v137, (__int64)v107);
  v122 = v67 / v107[7];
  v106 = v67 % v107[7];
  if ( v106 )
  {
    v66 = 231;
    goto LABEL_100;
  }
  if ( !(_DWORD)v129 )
  {
    v38 = 0;
    goto LABEL_62;
  }
  v38 = 0;
  v121 = (unsigned int)v129;
  v109 = 0;
  do
  {
    v68 = (unsigned __int64 *)((char *)s + 32 * v106);
    if ( !v68[1] )
      goto LABEL_93;
    if ( v68[2] >= v122 )
      goto LABEL_86;
    a9 = 0;
    v132 = nullptr;
    v133 = 0;
    v69 = *v68;
    v70 = v68[3];
    v71 = v68[1];
    v72 = v68[2];
    v111 = v69;
    v127.m128i_i64[0] = v70;
    v115 = v72;
    if ( v118 == 243 && (unsigned int)(v71 - 60) <= 1 )
    {
      ++v109;
      goto LABEL_93;
    }
    v73 = sub_47F740(v143, 0, 1);
    v113 = v73 - v144;
    if ( v120 == 2 )
    {
      v74 = sub_426A90(v137, (__int64)v107);
      v75 = 24LL * v115;
      if ( v115 >= v74 / 0x18 )
        goto LABEL_161;
    }
    else
    {
      if ( v115 >= sub_426A90(v137, (__int64)v107) >> 4 )
      {
LABEL_161:
        v79 = 213;
        goto LABEL_85;
      }
      v75 = 16LL * v115;
    }
    sub_47F740(v143, v107[3] + v75 + v144, 0);
    if ( (int)sub_424E00((__int64)v134, &v132, v76, v77, v78) < 0 )
    {
      v79 = 211;
LABEL_85:
      *a4 = v79;
      sub_47F740(v143, v144 + v113, 0);
      goto LABEL_86;
    }
    sub_47F740(v143, v144 + v113, 0);
    if ( v118 <= 0x3Eu )
    {
      if ( v118 > 1u )
      {
        switch ( v118 )
        {
          case 2u:
          case 0x12u:
            if ( (_DWORD)v71 == 54 )
              goto LABEL_117;
            if ( (_DWORD)v71 == 23 )
              goto LABEL_136;
            break;
          case 3u:
            if ( (_DWORD)v71 == 1 || (_DWORD)v71 == 32 )
              goto LABEL_136;
            break;
          case 8u:
            if ( (_DWORD)v71 == 18 )
              goto LABEL_117;
            goto LABEL_135;
          case 0x14u:
            goto LABEL_152;
          case 0x15u:
            if ( (_DWORD)v71 == 38 )
              goto LABEL_117;
LABEL_152:
            if ( (_DWORD)v71 != 1 )
              break;
            goto LABEL_136;
          case 0x28u:
LABEL_135:
            if ( (_DWORD)v71 == 2 )
              goto LABEL_136;
            break;
          case 0x2Du:
            goto LABEL_166;
          case 0x32u:
            if ( (_DWORD)v71 == 39 )
              goto LABEL_117;
            if ( (_DWORD)v71 == 101 )
              goto LABEL_136;
            break;
          case 0x3Eu:
            if ( (_DWORD)v71 == 10 || (_DWORD)v71 == 21 )
              goto LABEL_136;
            if ( (_DWORD)v71 == 1 )
              goto LABEL_117;
            break;
          default:
            break;
        }
      }
LABEL_153:
      *a4 = 211;
      goto LABEL_86;
    }
    switch ( v118 )
    {
      case 0xC3u:
LABEL_166:
        if ( (_DWORD)v71 != 1 && (_DWORD)v71 != 4 )
          goto LABEL_153;
        break;
      case 0xF3u:
        switch ( (int)v71 )
        {
          case 1:
          case 35:
          case 39:
          case 56:
            goto LABEL_136;
          case 2:
          case 36:
          case 40:
            goto LABEL_117;
          case 33:
          case 37:
          case 54:
            v96 = 1;
            goto LABEL_118;
          case 34:
          case 38:
          case 55:
            v96 = 2;
            goto LABEL_118;
          default:
            goto LABEL_153;
        }
      case 0xB7u:
        if ( (_DWORD)v71 != 258 && (_DWORD)v71 != 283 )
        {
          if ( (_DWORD)v71 != 257 )
            goto LABEL_153;
LABEL_117:
          v96 = 8;
          goto LABEL_118;
        }
        break;
      default:
        goto LABEL_153;
    }
LABEL_136:
    v96 = 4;
LABEL_118:
    v97 = *(unsigned int *)(v21 + 48);
    if ( v111 >= v97 || v97 < v96 + v111 )
      goto LABEL_153;
    v98 = (__m128i *)(*(_QWORD *)(v21 + 56) + v111);
    v114 = v146;
    if ( !v119 )
    {
      qmemcpy(&v127, v98, v96);
      if ( v114 == 2 )
      {
        v124 = v98;
        v117 = v96;
        sub_484A10((unsigned __int64 *)&v127, &v127, (unsigned int)v96);
        v98 = v124;
        LODWORD(v96) = v117;
      }
    }
    v99 = 11;
    v125 = v98;
    v127.m128i_i64[1] = 0;
    v123 = v96;
    v116 = BYTE4(v132);
    if ( _bittest64(&v99, BYTE4(v132) & 0xF) )
    {
      if ( HIWORD(v132) )
      {
        v100 = (unsigned int)HIWORD(v132) - 1;
        if ( v100 < a1[14] )
        {
          v101 = a1[13] + 120 * v100;
          if ( *(_QWORD *)(v101 + 24) )
          {
            if ( !strncmp(*(const char **)(v101 + 16), ".debug_", 7u) )
            {
              v127.m128i_i64[1] = v127.m128i_i64[0];
              if ( (v116 & 0xE) == 0 )
                v127.m128i_i64[1] = v133 + v127.m128i_i64[0];
              if ( v118 == 243 )
              {
                v130 = nullptr;
                qmemcpy(&v130, v125, v123);
                if ( (unsigned int)v71 > 0x24 )
                {
                  if ( (unsigned int)(v71 - 37) <= 3 )
                    v127.m128i_i64[1] -= (__int64)v130;
                }
                else if ( (unsigned int)v71 > 0x20 )
                {
                  v127.m128i_i64[1] += (__int64)v130;
                }
              }
              qmemcpy(v125, &v127.m128i_u64[1], v123);
              if ( v114 == 2 )
                sub_484A10((unsigned __int64 *)v125, v125, v123);
              goto LABEL_93;
            }
          }
        }
      }
    }
    v102 = *(_QWORD *)(v21 + 8);
    if ( *(_QWORD *)(v21 + 16) < (unsigned __int64)(v102 + 1) )
    {
      *(_QWORD *)v21 = sub_481540(v21, *(void **)v21, v102 + 1, 8u);
      v102 = *(_QWORD *)(v21 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v21 + 8 * v102) = v111;
    ++*(_QWORD *)(v21 + 8);
    *a4 = 212;
LABEL_86:
    a8 = 0;
    v130 = nullptr;
    v132 = nullptr;
    v131 = 0;
    v133 = 0;
    sub_428F20(v137, (__int64)&v130, (unsigned int *)v104);
    v80 = s1;
    if ( (_QWORD)v131 )
      v80 = (const char *)v130;
    sub_4172B0(
      (__int64)&v132,
      "The DWARF plugin couldn't apply all DWARF relocation entries (#%d in section %s)",
      v106,
      v80);
    sub_423FE0(
      (int)"%s",
      (__int64)v132,
      v81,
      v82,
      v83,
      v84,
      (__m128)0LL,
      (__m128)0LL,
      a9,
      a10,
      v85,
      v86,
      a13,
      a14,
      v103);
    if ( v132 )
    {
      *(_QWORD *)&v133 = 0;
      j__free(v132);
    }
    if ( v130 )
    {
      *(_QWORD *)&v131 = 0;
      j__free(v130);
    }
    v38 = 1;
LABEL_93:
    ++v106;
  }
  while ( v121 != v106 );
  if ( v109 > 0 )
  {
    v132 = nullptr;
    v133 = 0;
    sub_428F20(v137, (__int64)&v132, (unsigned int *)v104);
    v92 = s1;
    if ( (_QWORD)v133 )
      v92 = (const char *)v132;
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"DWARF: Skipped %d relocation entries in %s (debug-only, not affecting code/data).\n",
                               (unsigned int)v109,
                               (__int64)v92,
                               v87,
                               v88,
                               v89,
                               (__m128)0LL,
                               a8,
                               a9,
                               a10,
                               v90,
                               v91,
                               a13,
                               a14,
                               v103);
    if ( v132 )
    {
      *(_QWORD *)&v133 = 0;
      j__free(v132);
    }
  }
LABEL_62:
  if ( s )
  {
    *(_QWORD *)&v129 = 0;
    j__free(s);
  }
LABEL_19:
  if ( v151 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v151 + 8LL))(v151, *(double *)a7.m128_u64);
  if ( v149 )
  {
    v150 = 0;
    j__free(v149);
  }
  v39 = (char *)v141;
  if ( v141 )
  {
    v40 = v142;
    if ( v142 )
    {
      v41 = 0;
      do
      {
        v42 = &v39[96 * v41];
        v43 = *((void **)v42 + 3);
        if ( v43 )
        {
          *((_QWORD *)v42 + 4) = 0;
          j__free(v43);
        }
        v44 = *(void **)v42;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          j__free(v44);
        }
        ++v41;
        v39 = (char *)v141;
      }
      while ( v40 != v41 );
    }
    v142 = 0;
    j__free(v39);
  }
  if ( v138 )
  {
    v139 = 0;
    j__free(v138);
  }
  if ( v135 )
  {
    v136 = 0;
    j__free(v135);
  }
  sub_47F680(v28);
  return v38;
}
// 4642F3: variable 'v103' is possibly undefined
// 464189: variable 'v31' is possibly undefined
// 464189: variable 'v32' is possibly undefined
// 464189: variable 'v33' is possibly undefined
// 464189: variable 'v34' is possibly undefined
// 464189: variable 'v35' is possibly undefined
// 464189: variable 'v36' is possibly undefined
// 464299: variable 'a5' is possibly undefined
// 464299: variable 'a6' is possibly undefined
// 464299: variable 'a11' is possibly undefined
// 464299: variable 'a12' is possibly undefined
// 464393: variable 'v24' is possibly undefined
// 464393: variable 'v25' is possibly undefined
// 464393: variable 'v26' is possibly undefined
// 464393: variable 'v27' is possibly undefined
// 464393: variable 'v29' is possibly undefined
// 464393: variable 'v30' is possibly undefined
// 46457B: variable 'v48' is possibly undefined
// 46457B: variable 'v49' is possibly undefined
// 46457B: variable 'v50' is possibly undefined
// 46457B: variable 'v51' is possibly undefined
// 46457B: variable 'v52' is possibly undefined
// 46457B: variable 'v53' is possibly undefined
// 46471F: variable 'v76' is possibly undefined
// 46471F: variable 'v77' is possibly undefined
// 46471F: variable 'v78' is possibly undefined
// 464826: variable 'v81' is possibly undefined
// 464826: variable 'v82' is possibly undefined
// 464826: variable 'v83' is possibly undefined
// 464826: variable 'v84' is possibly undefined
// 464826: variable 'v85' is possibly undefined
// 464826: variable 'v86' is possibly undefined
// 4648DE: variable 'v87' is possibly undefined
// 4648DE: variable 'v88' is possibly undefined
// 4648DE: variable 'v89' is possibly undefined
// 4648DE: variable 'v90' is possibly undefined
// 4648DE: variable 'v91' is possibly undefined
// 464A19: variable 'v55' is possibly undefined
// 464A19: variable 'v56' is possibly undefined
// 464A19: variable 'v57' is possibly undefined
// 464A19: variable 'v58' is possibly undefined
// 464A19: variable 'v59' is possibly undefined
// 464A19: variable 'v60' is possibly undefined
// 4C8250: using guessed type __int64 qword_4C8250;
// 4C94E1: using guessed type char byte_4C94E1;
