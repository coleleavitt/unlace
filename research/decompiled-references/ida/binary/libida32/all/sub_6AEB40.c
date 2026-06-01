__int64 __fastcall sub_6AEB40(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        double a6,
        __m128i a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  char *v20; // rsi
  char v21; // al
  int v22; // edx
  const char *v23; // rbx
  size_t v24; // rax
  size_t v25; // r12
  unsigned __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  unsigned int *v31; // rbx
  unsigned __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // al
  __int64 v38; // rdi
  char *v39; // r12
  void *v40; // r13
  void *v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // r15
  int v45; // eax
  __int64 v46; // rsi
  void *v47; // rax
  __m128i v48; // xmm0
  __int64 *v49; // r15
  double v50; // xmm4_8
  double v51; // xmm5_8
  unsigned int v52; // eax
  double v53; // xmm4_8
  double v54; // xmm5_8
  unsigned int v55; // r13d
  __int64 v56; // r15
  unsigned int v57; // eax
  const char *v58; // r12
  void *v59; // rdi
  __int64 v60; // rsi
  unsigned int tinfo; // r15d
  char *v62; // rdi
  __int64 v63; // r13
  __int64 v64; // r12
  char *v65; // rbx
  void *v66; // rdi
  void *v67; // rdi
  size_t v69; // r12
  size_t v70; // r14
  const char *v71; // r15
  __int64 v72; // r8
  unsigned int v73; // ecx
  unsigned int v74; // edx
  __int64 v75; // r13
  char *v76; // r8
  __int64 v77; // rax
  char *v78; // rsi
  char *v79; // rsi
  __m128i v80; // xmm0
  __m128i *v81; // rax
  size_t v82; // r15
  int *v83; // r12
  char *v84; // rax
  __int64 v85; // r14
  char *v86; // rbx
  __int64 *v87; // rax
  char *v88; // r15
  __int64 *v89; // r13
  const char *v90; // rsi
  const char *v91; // rdi
  int v92; // eax
  __int64 *v93; // rcx
  __int64 v94; // rax
  __int64 *v95; // rcx
  __int64 v96; // rdx
  __int64 *v97; // r15
  __int64 v98; // r15
  __int64 v99; // rax
  unsigned int v100; // r15d
  _DWORD *v101; // rsi
  void *v102; // r15
  void *v103; // rdi
  __int64 v104; // rdx
  const char *v105; // r8
  const char *v106; // rsi
  __int64 v107; // r13
  char *v108; // r15
  int *v109; // rax
  __int64 v110; // rdx
  size_t v111; // rax
  size_t v112; // r13
  char *v113; // rdi
  char *v114; // r12
  const char *v115; // rax
  size_t v116; // r12
  const char *v117; // rax
  __int64 v118; // rax
  unsigned int v119; // r15d
  _DWORD *v120; // rsi
  unsigned __int64 tinfo_size; // rax
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // rt2
  unsigned int v124; // r15d
  char *v125; // r12
  unsigned int v126; // edi
  __int64 v127; // rcx
  char *v128; // rax
  unsigned __int64 v129; // r8
  _BYTE *v130; // r15
  size_t v131; // r8
  __int128 v132; // rax
  void *v133; // rdi
  size_t v134; // r15
  __int64 *v135; // r14
  unsigned int v136; // edx
  __int64 v137; // rsi
  char v138; // bl
  unsigned int v139; // eax
  int *v140; // rbx
  char *v141; // r12
  const char *v142; // rsi
  void *v143; // r12
  void *v144; // rdi
  __int64 v145; // rax
  _BYTE *v146; // rsi
  __int64 v147; // r12
  int v148; // [rsp-8h] [rbp-408h]
  int v149; // [rsp+0h] [rbp-400h]
  __int64 v150; // [rsp+8h] [rbp-3F8h]
  __int64 *v151; // [rsp+10h] [rbp-3F0h]
  unsigned int *v152; // [rsp+18h] [rbp-3E8h]
  __m128i v153; // [rsp+20h] [rbp-3E0h] BYREF
  __int64 v154; // [rsp+30h] [rbp-3D0h]
  int v155; // [rsp+38h] [rbp-3C8h]
  unsigned int v156; // [rsp+3Ch] [rbp-3C4h]
  int *v157; // [rsp+40h] [rbp-3C0h]
  int v158[2]; // [rsp+48h] [rbp-3B8h]
  __int64 *v159; // [rsp+50h] [rbp-3B0h]
  __int64 *v160; // [rsp+58h] [rbp-3A8h]
  __int64 v161; // [rsp+60h] [rbp-3A0h]
  __int64 *v162; // [rsp+68h] [rbp-398h]
  char *s1; // [rsp+70h] [rbp-390h]
  int v164; // [rsp+78h] [rbp-388h]
  unsigned int v165; // [rsp+7Ch] [rbp-384h]
  unsigned __int64 v166; // [rsp+80h] [rbp-380h]
  __m128i *v167; // [rsp+88h] [rbp-378h]
  int v168; // [rsp+94h] [rbp-36Ch] BYREF
  __int64 v169; // [rsp+98h] [rbp-368h] BYREF
  void *v170; // [rsp+A0h] [rbp-360h] BYREF
  __int128 v171; // [rsp+A8h] [rbp-358h]
  void *v172; // [rsp+C0h] [rbp-340h] BYREF
  __int128 v173; // [rsp+C8h] [rbp-338h]
  void *src; // [rsp+E0h] [rbp-320h] BYREF
  __int128 v175; // [rsp+E8h] [rbp-318h]
  void *v176; // [rsp+100h] [rbp-300h] BYREF
  __m128i v177; // [rsp+108h] [rbp-2F8h] BYREF
  void *v178; // [rsp+120h] [rbp-2E0h] BYREF
  __int128 v179; // [rsp+128h] [rbp-2D8h]
  __int128 v180; // [rsp+138h] [rbp-2C8h]
  __int64 v181; // [rsp+148h] [rbp-2B8h]
  __int16 v182; // [rsp+150h] [rbp-2B0h]
  char v183; // [rsp+152h] [rbp-2AEh]
  bool v184; // [rsp+153h] [rbp-2ADh]
  __int128 v185; // [rsp+160h] [rbp-2A0h] BYREF
  void *dest; // [rsp+170h] [rbp-290h] BYREF
  __int128 v187; // [rsp+178h] [rbp-288h]
  void *v188; // [rsp+188h] [rbp-278h]
  __m128i v189; // [rsp+190h] [rbp-270h] BYREF
  _OWORD v190[2]; // [rsp+1A0h] [rbp-260h] BYREF
  __int64 v191; // [rsp+1C0h] [rbp-240h]
  int v192; // [rsp+1C8h] [rbp-238h]
  __int64 v193; // [rsp+1D0h] [rbp-230h]
  char v194; // [rsp+1D8h] [rbp-228h]
  char *s2; // [rsp+1E0h] [rbp-220h] BYREF
  _BYTE v196[24]; // [rsp+1E8h] [rbp-218h] BYREF
  __int64 v197; // [rsp+200h] [rbp-200h]
  __int128 v198; // [rsp+208h] [rbp-1F8h]
  int v199; // [rsp+218h] [rbp-1E8h]
  int v200; // [rsp+21Ch] [rbp-1E4h]
  char v201; // [rsp+220h] [rbp-1E0h]
  __int64 v202; // [rsp+228h] [rbp-1D8h]
  __int128 v203; // [rsp+230h] [rbp-1D0h]
  __int64 v204; // [rsp+240h] [rbp-1C0h]
  __int128 v205; // [rsp+248h] [rbp-1B8h]
  __int64 v206; // [rsp+258h] [rbp-1A8h]
  __int128 v207; // [rsp+260h] [rbp-1A0h]
  __int64 v208; // [rsp+270h] [rbp-190h]
  __int128 v209; // [rsp+278h] [rbp-188h]
  __int64 *v210; // [rsp+290h] [rbp-170h] BYREF
  __int64 v211; // [rsp+298h] [rbp-168h] BYREF
  void *v212; // [rsp+2A0h] [rbp-160h]
  __int128 v213; // [rsp+2A8h] [rbp-158h]
  __int128 v214; // [rsp+2B8h] [rbp-148h]
  __int64 v215; // [rsp+2C8h] [rbp-138h] BYREF
  int v216; // [rsp+2D0h] [rbp-130h] BYREF
  void *v217; // [rsp+2D8h] [rbp-128h]
  const char *v218; // [rsp+2E0h] [rbp-120h]
  int *v219; // [rsp+2E8h] [rbp-118h]
  __int64 v220; // [rsp+2F0h] [rbp-110h]
  void *v221; // [rsp+2F8h] [rbp-108h] BYREF
  __int128 v222; // [rsp+300h] [rbp-100h]
  void *ptr; // [rsp+310h] [rbp-F0h] BYREF
  __int128 v224; // [rsp+318h] [rbp-E8h]
  __int64 v225; // [rsp+328h] [rbp-D8h]
  char v226; // [rsp+330h] [rbp-D0h]
  __m128i v227; // [rsp+340h] [rbp-C0h] BYREF
  __m128i v228; // [rsp+350h] [rbp-B0h] BYREF
  __m128i v229; // [rsp+360h] [rbp-A0h] BYREF
  __m128i v230; // [rsp+370h] [rbp-90h] BYREF
  __m128i v231; // [rsp+380h] [rbp-80h] BYREF
  __m128i v232; // [rsp+390h] [rbp-70h] BYREF
  __m128i v233; // [rsp+3A0h] [rbp-60h] BYREF
  __m128i v234; // [rsp+3B0h] [rbp-50h] BYREF
  unsigned __int64 v235; // [rsp+3C8h] [rbp-38h]

  v150 = a3;
  v160 = a1;
  v154 = a2;
  v164 = a5;
  v235 = __readfsqword(0x28u);
  v13 = *a1;
  v155 = a4 & 1;
  v162 = *(__int64 **)(v13 + 1480);
  v14 = *v162;
  v178 = nullptr;
  v15 = *(_QWORD *)(v14 + 1680);
  v179 = 0;
  v180 = 0;
  v159 = (__int64 *)v15;
  v16 = *(_DWORD *)(a2 + 20);
  v165 = v16 & 0x40;
  v181 = 0;
  v182 = 1;
  v156 = v165 >> 6;
  if ( (v16 & 0x40) != 0 )
    HIDWORD(v181) = 1024;
  v183 = 1;
  v17 = (v16 >> 7) & 0x1F;
  if ( v17 )
    HIBYTE(v182) = v17 + 1;
  v184 = (v16 & 2) != 0;
  v18 = sub_516700((__int64)v159, v154);
  v19 = *(_DWORD *)v154;
  *(_QWORD *)&v180 = v18;
  v170 = nullptr;
  *(_QWORD *)v158 = &v178;
  v171 = 0;
  sub_517DD0(v160, &v170, v19);
  v20 = (char *)haystack;
  if ( (_QWORD)v171 )
    v20 = (char *)v170;
  *(_QWORD *)v158 = &v178;
  v21 = sub_5CFEC0((__int64 *)&v178, v20);
  v22 = HIDWORD(v181);
  if ( v21 )
  {
    BYTE1(v22) = BYTE5(v181) | 1;
    HIDWORD(v181) = v22;
  }
  else
  {
    v21 = BYTE5(v181) & 1;
  }
  v172 = nullptr;
  v23 = haystack;
  v173 = 0;
  if ( (_QWORD)v171 )
    v23 = (const char *)v170;
  v212 = nullptr;
  v216 = 0;
  v210 = v162;
  v217 = nullptr;
  v211 = *(_QWORD *)v158;
  v157 = &v216;
  v218 = (const char *)&v216;
  v219 = &v216;
  v220 = 0;
  v221 = nullptr;
  ptr = nullptr;
  v226 = v21;
  v213 = 0;
  v214 = 0;
  v222 = 0;
  v224 = 0;
  if ( !v23 )
  {
    v25 = 0;
    v26 = 2;
    goto LABEL_14;
  }
  v24 = strlen(v23);
  v25 = v24;
  if ( !v24 )
  {
    v23 = nullptr;
    v26 = 2;
LABEL_14:
    v221 = (void *)qvector_reserve(&v221, v23, v26, 1);
    v23 = (const char *)v221;
    goto LABEL_15;
  }
  v69 = v24 + 1;
  v70 = v24;
  v221 = (void *)qvector_reserve(&v221, 0, v24 + 1, 1);
  *(_QWORD *)&v222 = v69;
  memmove(v221, v23, v70);
  *((_BYTE *)v221 + v70) = 0;
  v23 = (const char *)v221;
  if ( (_QWORD)v222 )
  {
    v25 = v222 - 1;
    v26 = v222 + 1;
  }
  else
  {
    v25 = 0;
    v26 = 2;
  }
  if ( *((_QWORD *)&v222 + 1) < v26 )
    goto LABEL_14;
LABEL_15:
  *(_QWORD *)&v222 = v26;
  v23[v25] = 46;
  *((_BYTE *)v221 + v25 + 1) = 0;
  v27 = v222;
  if ( (_QWORD)v222 )
  {
    if ( (_QWORD)v222 == 1 )
    {
      *(_QWORD *)&v224 = 0;
      v28 = 1;
LABEL_18:
      v29 = v28 - 1;
      goto LABEL_19;
    }
    v143 = v221;
    v144 = ptr;
    if ( *((_QWORD *)&v224 + 1) < (unsigned __int64)v222 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v222, 1);
      v144 = ptr;
    }
    *(_QWORD *)&v224 = v27;
    memmove(v144, v143, v27 - 1);
    *((char *)ptr + v27 - 1) = 0;
    v28 = v222;
    if ( (_QWORD)v222 )
      goto LABEL_18;
    v29 = 0;
  }
  else
  {
    *(_QWORD *)&v224 = 0;
    v29 = 0;
  }
LABEL_19:
  v225 = v29;
  v30 = 0;
  v161 = 0;
  v31 = *(unsigned int **)(v154 + 8);
  v166 = *(unsigned int *)(v154 + 4);
  if ( !v166 )
    goto LABEL_67;
  while ( 1 )
  {
    if ( v165 )
    {
      while ( 1 )
      {
        if ( *v31 != -1 )
        {
          s2 = nullptr;
          getinf_buf(26, &s2, 8);
          if ( *v31 >= (unsigned int)s2 && *v31 < HIDWORD(s2) )
            break;
        }
        ++v30;
        v31 += 5;
        if ( v30 == v166 )
          goto LABEL_67;
      }
    }
    src = nullptr;
    v175 = 0;
    sub_516900(v160, (__int64)&src, *v31);
    dest = nullptr;
    v188 = nullptr;
    v191 = 1;
    v192 = -1;
    v193 = 0;
    v194 = 0;
    v185 = 0;
    v187 = 0;
    v189 = 0;
    v190[0] = 0;
    if ( (_QWORD)v175 )
    {
      v71 = (const char *)src;
      if ( !strcmp((const char *)src, "__return_address") || *v71 == 32 && v71[1] == 114 && !v71[2] )
      {
        v72 = 4096;
LABEL_103:
        v73 = v31[2];
        v74 = v31[1];
        if ( (v31[4] & 2) == 0 )
          v73 = v31[2] - v74;
        v167 = (__m128i *)&v185;
        sub_59CF30((__int64)v162, (__int64)&v185, v74, v73, v72);
        v75 = v187;
        if ( (_QWORD)v187 && (v76 = (char *)(v187 - 1), (_QWORD)v187 != 1) )
        {
          v102 = dest;
          v103 = src;
          if ( *((_QWORD *)&v175 + 1) < (unsigned __int64)v187 )
          {
            s1 = (char *)(v187 - 1);
            src = (void *)qvector_reserve(&src, src, v187, 1);
            v76 = s1;
            v103 = src;
          }
          *(_QWORD *)&v175 = v75;
          memmove(v103, v102, (size_t)v76);
          *((char *)src + v75 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v175 = 0;
        }
        goto LABEL_44;
      }
      if ( !strcmp(v71, "__saved_registers") || !strcmp(v71, " s") )
      {
        v72 = 0x2000;
        goto LABEL_103;
      }
    }
    LODWORD(s1) = v31[2];
    if ( (v31[4] & 2) == 0 )
      LODWORD(s1) = (_DWORD)s1 - v31[1];
    v169 = 0;
    v167 = (__m128i *)&v169;
    v32 = (unsigned int)s1;
    if ( v165 )
    {
      if ( (*((_BYTE *)v31 + 14) & 0xF0) == 0 && !(unsigned __int8)get_tinfo(&v169, *v31) )
      {
        if ( (unsigned __int8)sub_5EFCC0((__int64)v162, v167->m128i_i64, v31[3], 1, 0, 0) )
        {
          tinfo_size = get_tinfo_size(0, v169, 0);
          v123 = v32 % tinfo_size;
          v122 = v32 / tinfo_size;
          if ( !v123 )
          {
            if ( v122 != 1 )
            {
              *(_DWORD *)v196 = 0;
              *(_DWORD *)&v196[4] = v122;
              s2 = nullptr;
              copy_tinfo_t(&s2);
              create_tinfo(v167, 11, 11, &s2);
              clear_tinfo_t(&s2);
            }
LABEL_27:
            if ( !(unsigned int)verify_tinfo(v169) )
              goto LABEL_32;
            goto LABEL_28;
          }
        }
      }
    }
    if ( (unsigned __int8)sub_6AA340((__int64)v160, v167->m128i_i64, (int *)v31, v156) )
      goto LABEL_27;
LABEL_28:
    if ( !v155 )
    {
      if ( sub_517EC0(v160, &src, *v31) < 0 )
      {
        v146 = src;
        if ( *((_QWORD *)&v175 + 1) <= 1u )
        {
          src = (void *)qvector_reserve(&src, src, 2, 1);
          v146 = src;
        }
        *(_QWORD *)&v175 = 2;
        *v146 = 63;
        *((_BYTE *)src + 1) = 0;
      }
      sub_365330();
    }
    if ( !v32 )
    {
      v118 = v173;
      v119 = *v31;
      v120 = v172;
      if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 1) )
      {
        v172 = (void *)qvector_reserve(&v172, v172, v173 + 1, 4);
        v120 = v172;
        v118 = v173;
      }
      v120[v118] = v119;
      *(_QWORD *)&v173 = v173 + 1;
      clear_tinfo_t(v167);
LABEL_143:
      clear_tinfo_t(v190);
      if ( v188 )
      {
        v189.m128i_i64[0] = 0;
        qfree(v188);
      }
      if ( dest )
      {
        *(_QWORD *)&v187 = 0;
        qfree(dest);
      }
      v59 = src;
      if ( src )
        goto LABEL_63;
      goto LABEL_64;
    }
    v37 = sub_689BF0(v162, (int)s1, v33, v34, v35, v36);
    if ( v37 )
    {
      s2 = (char *)v37;
      copy_tinfo_t(v167);
      clear_tinfo_t(&s2);
    }
    else
    {
      *(_DWORD *)v196 = 0;
      v176 = &word_10 + 1;
      s2 = nullptr;
      *(_DWORD *)&v196[4] = (_DWORD)s1;
      copy_tinfo_t(&s2);
      create_tinfo(v167, 11, 11, &s2);
      clear_tinfo_t(&s2);
      clear_tinfo_t(&v176);
    }
LABEL_32:
    s1 = (char *)v175;
    if ( (unsigned __int64)v175 <= 1 )
      break;
    v38 = v169;
    v169 = *(_QWORD *)&v190[0];
    *(_QWORD *)&v190[0] = v38;
    if ( (v31[4] & 0x20) == 0 || (v38 & 0x100) == 0 )
    {
      v39 = s1 - 1;
LABEL_36:
      v40 = src;
      v41 = dest;
      if ( *((_QWORD *)&v187 + 1) < (unsigned __int64)s1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, s1, 1);
        v41 = dest;
      }
      *(_QWORD *)&v187 = s1;
      memmove(v41, v40, (size_t)v39);
      v39[(_QWORD)dest] = 0;
      v42 = v187;
      goto LABEL_39;
    }
    if ( (get_tinfo_property(v38, 2) & 0x3F) != 0xD )
    {
      s1 = (char *)v175;
      if ( !(_QWORD)v175 || (v39 = (char *)(v175 - 1), (_QWORD)v175 == 1) )
      {
        *(_QWORD *)&v187 = 0;
        if ( (v31[4] & 2) != 0 )
          *(_QWORD *)&v185 = 0;
        else
          *(_QWORD *)&v185 = 8LL * v31[1];
        *((_QWORD *)&v185 + 1) = 8 * v32;
        goto LABEL_43;
      }
      goto LABEL_36;
    }
    HIDWORD(v193) |= 0x20u;
    v42 = v187;
LABEL_39:
    v43 = 0;
    if ( (v31[4] & 2) == 0 )
      v43 = 8LL * v31[1];
    *(_QWORD *)&v185 = v43;
    *((_QWORD *)&v185 + 1) = 8 * v32;
    if ( v42 <= 1 )
      goto LABEL_43;
    validate_name(&dest, 8, 1);
    if ( (v31[4] & 0xC0) == 0 )
      goto LABEL_43;
    if ( !(_QWORD)v187 )
      goto LABEL_43;
    v124 = v187 - 2;
    if ( (int)v187 - 2 < 0 )
      goto LABEL_43;
    v153.m128i_i64[0] = v187;
    s1 = (char *)dest;
    v125 = (char *)dest + v124;
    while ( 1 )
    {
      v126 = *v125;
      if ( v126 > 0x7F || !isxdigit(v126) )
        break;
      --v124;
      --v125;
      if ( v124 == -1 )
        goto LABEL_43;
    }
    v127 = v153.m128i_i64[0];
    if ( !v124 )
      goto LABEL_43;
    v128 = &s1[v124];
    if ( *v128 != 95 )
      goto LABEL_43;
    v129 = (int)v124 + 1LL;
    if ( v153.m128i_i64[0] < v129 )
    {
      if ( *((_QWORD *)&v187 + 1) < v129 )
      {
        v153.m128i_i64[0] = (int)v124 + 1LL;
        s1 = (char *)qvector_reserve(&dest, s1, v153.m128i_i64[0], 1);
        v127 = v187;
        dest = s1;
        v129 = v153.m128i_i64[0];
      }
      v153.m128i_i64[0] = v129;
      memset(&s1[v127], 0, v129 - v127);
      *(_QWORD *)&v187 = v153.m128i_i64[0];
      v128 = (char *)dest + (int)v124;
    }
    else if ( v153.m128i_i64[0] != (int)v124 + 1LL )
    {
      *(_QWORD *)&v187 = (int)v124 + 1LL;
    }
    *v128 = 0;
    if ( (v31[4] & 0x40) == 0 )
      goto LABEL_43;
    v130 = (_BYTE *)v187;
    if ( !(_QWORD)v187 )
      goto LABEL_43;
    v153.m128i_i64[0] = v187 - 1;
    if ( (unsigned __int64)(v187 - 1) <= 4 )
      goto LABEL_43;
    s1 = (char *)dest;
    if ( strncmp((char *)dest + v187 - 6, "_dtor", 5u) )
      goto LABEL_43;
    v131 = v153.m128i_i64[0];
    if ( (__int64)(v130 - 5) <= 1 )
    {
      if ( s1 )
      {
        *(_QWORD *)&v187 = 0;
        qfree(s1);
        *(_QWORD *)&v132 = v187;
        dest = nullptr;
        *((_QWORD *)&v187 + 1) = 0;
        if ( (_QWORD)v187 )
        {
          *((_QWORD *)&v132 + 1) = 0;
          s1 = nullptr;
LABEL_255:
          v147 = v132 + 1;
          v131 = v132 - 1;
          if ( *((_QWORD *)&v132 + 1) >= (unsigned __int64)(v132 + 1) )
            goto LABEL_256;
          goto LABEL_261;
        }
        v131 = 0;
        v147 = 2;
        s1 = nullptr;
      }
      else
      {
        v147 = (__int64)(v130 + 1);
        if ( *((_QWORD *)&v187 + 1) >= (unsigned __int64)(v130 + 1) )
        {
          *(_QWORD *)&v187 = v130 + 1;
          *v130 = 0;
LABEL_257:
          memmove((char *)dest + 1, dest, v131);
          goto LABEL_202;
        }
      }
    }
    else
    {
      if ( *((_QWORD *)&v187 + 1) < (unsigned __int64)(v130 - 5) )
      {
        s1 = (char *)qvector_reserve(&dest, s1, v130 - 5, 1);
        dest = s1;
      }
      *(_QWORD *)&v187 = v130 - 5;
      v130[(_QWORD)s1 - 6] = 0;
      s1 = (char *)dest;
      v132 = v187;
      if ( (_QWORD)v187 )
        goto LABEL_255;
      if ( *((_QWORD *)&v187 + 1) > 1u )
      {
        *(_QWORD *)&v187 = 2;
        s1[1] = 0;
        goto LABEL_202;
      }
      v131 = 0;
      v147 = 2;
    }
LABEL_261:
    v153.m128i_i64[0] = v131;
    *(_QWORD *)&v132 = qvector_reserve(&dest, s1, v147, 1);
    v131 = v153.m128i_i64[0];
    s1 = (char *)v132;
    dest = (void *)v132;
    *(_QWORD *)&v132 = v153.m128i_i64[0] + 1;
LABEL_256:
    *(_QWORD *)&v187 = v147;
    s1[v132] = 0;
    if ( v131 )
      goto LABEL_257;
LABEL_202:
    *(_BYTE *)dest = 126;
LABEL_43:
    clear_tinfo_t(v167);
    v167 = (__m128i *)&v185;
LABEL_44:
    v44 = v159;
    v176 = nullptr;
    v177 = 0;
    v45 = sub_3B90A0(*(_QWORD **)(*v159 + 1480), *v31);
    v46 = *v44;
    v168 = v45;
    if ( sub_79B6F0(&v168, v46, &v176, 0, 83) > 0
      || (v97 = v159,
          LODWORD(v169) = sub_3B90A0(*(_QWORD **)(*v159 + 1480), *v31),
          sub_79B6F0(&v169, *v97, &v176, 1, 83) > 0) )
    {
      v47 = v188;
      v48 = _mm_load_si128(&v189);
      a7 = _mm_loadu_si128(&v177);
      v188 = v176;
      v176 = v47;
      v189 = a7;
      v177 = v48;
    }
    if ( (unsigned __int8)sub_5CF320(0, (__int64)v167) )
      HIDWORD(v193) |= 0x100u;
    v49 = (__int64 *)v167;
    sub_69DC80(v162, (__int64)v167, v31[3], *v31, nullptr);
    if ( v165 )
    {
      LODWORD(s2) = 0;
      v201 = 0;
      memset(v196, 0, sizeof(v196));
      v197 = 0;
      v200 = 0;
      v202 = 0;
      v204 = 0;
      v206 = 0;
      v208 = 0;
      v199 = v164;
      v198 = 0;
      v203 = 0;
      v205 = 0;
      v207 = 0;
      v209 = 0;
      v52 = sub_6A3F70(
              *(__int64 *)v158,
              (const char *)&s2,
              0,
              (__int64)v49,
              1u,
              0x80000040,
              0.0,
              a7,
              a8,
              a9,
              v50,
              v51,
              a12,
              a13,
              0xFFFFFFFFFFFFFFFFLL);
      if ( v52 == -3 )
      {
        *(_QWORD *)&v187 = 0;
        v52 = sub_6A3F70(
                *(__int64 *)v158,
                (const char *)&s2,
                0,
                (__int64)v167,
                1u,
                0x80000040,
                0.0,
                a7,
                a8,
                a9,
                v53,
                v54,
                a12,
                a13,
                0xFFFFFFFFFFFFFFFFLL);
      }
      if ( v52 )
      {
        v98 = tinfo_errstr(v52);
        v153.m128i_i64[0] = *((_QWORD *)&v185 + 1) >> 3;
        s1 = (char *)((unsigned __int64)v185 >> 3);
        dstr_tinfo(v190);
        sub_82BC50(
          "struc_to_til udm '%s.%s' type '%s' offset %lld size %lld: %s\n",
          v98,
          v148,
          v149,
          v150,
          (int)v151,
          (int)v152,
          v153.m128i_i32[0],
          v153.m128i_i32[2],
          v154,
          v155,
          (__int64)v157);
        v99 = v173;
        v100 = *v31;
        v101 = v172;
        if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 1) )
        {
          v172 = (void *)qvector_reserve(&v172, v172, v173 + 1, 4);
          v101 = v172;
          v99 = v173;
        }
        v101[v99] = v100;
        *(_QWORD *)&v173 = v173 + 1;
        sub_529FB0(&s2);
        if ( v176 )
        {
          v177.m128i_i64[0] = 0;
          qfree(v176);
        }
        goto LABEL_143;
      }
      sub_529FB0(&s2);
    }
    else
    {
      v77 = v179;
      v78 = (char *)v178;
      if ( *((_QWORD *)&v179 + 1) < (unsigned __int64)(v179 + 1) )
      {
        v178 = (void *)qvector_reserve(*(_QWORD *)v158, v178, v179 + 1, 128);
        v78 = (char *)v178;
        v77 = v179;
      }
      v79 = &v78[128 * v77];
      *(_OWORD *)v79 = 0;
      *(_OWORD *)(v79 + 24) = 0;
      *((_OWORD *)v79 + 3) = 0;
      *((_OWORD *)v79 + 4) = 0;
      *(_QWORD *)&v179 = v179 + 1;
      v80 = _mm_loadu_si128((const __m128i *)v79);
      *((_QWORD *)v79 + 12) = 1;
      v81 = v167;
      *((_QWORD *)v79 + 2) = 0;
      *((_QWORD *)v79 + 5) = 0;
      *((_DWORD *)v79 + 26) = -1;
      *((_QWORD *)v79 + 14) = 0;
      v79[120] = 0;
      v227 = v80;
      v228 = _mm_loadu_si128((const __m128i *)v79 + 1);
      v229 = _mm_loadu_si128((const __m128i *)v79 + 2);
      v230 = _mm_loadu_si128((const __m128i *)v79 + 3);
      v231 = _mm_loadu_si128((const __m128i *)v79 + 4);
      v232 = _mm_loadu_si128((const __m128i *)v79 + 5);
      v233 = _mm_loadu_si128((const __m128i *)v79 + 6);
      v234 = _mm_loadu_si128((const __m128i *)v79 + 7);
      *(__m128i *)v79 = _mm_load_si128(v81);
      *((__m128i *)v79 + 1) = _mm_load_si128(v81 + 1);
      *((__m128i *)v79 + 2) = _mm_load_si128(v81 + 2);
      *((__m128i *)v79 + 3) = _mm_load_si128(v81 + 3);
      *((__m128i *)v79 + 4) = _mm_load_si128(v81 + 4);
      *((__m128i *)v79 + 5) = _mm_load_si128(v81 + 5);
      *((__m128i *)v79 + 6) = _mm_load_si128(v81 + 6);
      *((__m128i *)v79 + 7) = _mm_load_si128(v81 + 7);
      *v81 = _mm_load_si128(&v227);
      v81[1] = _mm_load_si128(&v228);
      v81[2] = _mm_load_si128(&v229);
      v81[3] = _mm_load_si128(&v230);
      v81[4] = _mm_load_si128(&v231);
      v81[5] = _mm_load_si128(&v232);
      v81[6] = _mm_load_si128(&v233);
      v81[7] = _mm_load_si128(&v234);
    }
    v55 = *v31;
    s1 = (char *)haystack;
    if ( (_QWORD)v175 )
      s1 = (char *)src;
    v56 = v161;
    v57 = sub_51C290(&v211, v161, v226);
    v58 = sub_51F500((__int64)&v211, v57, v56);
    if ( !strcmp(s1, v58) )
      goto LABEL_56;
    v153.m128i_i64[0] = (__int64)sub_6A9430((__int64)&v210, v58, 0);
    if ( (unsigned int)sub_698F20(v210, (const char *)v153.m128i_i64[0], 0, 0) == -1 )
    {
      v114 = s1;
      v115 = sub_6A9430((__int64)&v210, s1, 1);
      sub_69E970(v210, v115, (const char *)v153.m128i_i64[0], v55);
      s2 = nullptr;
      *(_OWORD *)v196 = 0;
      if ( v114 )
      {
        v116 = strlen(s1);
        v153.m128i_i64[0] = v116 + 1;
        s2 = (char *)qvector_reserve(&s2, 0, v116 + 1, 1);
        *(_QWORD *)v196 = v153.m128i_i64[0];
        memmove(s2, s1, v116);
        s2[v116] = 0;
      }
      v117 = (const char *)sub_6ADF10((__int64)&v215, (__int64)&s2);
      sub_6AE020((__int64)&v210, v117);
      v113 = s2;
      if ( s2 )
        goto LABEL_166;
      goto LABEL_56;
    }
    s2 = nullptr;
    *(_OWORD *)v196 = 0;
    if ( v58 )
    {
      v82 = strlen(v58);
      v153.m128i_i64[0] = v82 + 1;
      s2 = (char *)qvector_reserve(&s2, 0, v82 + 1, 1);
      *(_QWORD *)v196 = v153.m128i_i64[0];
      memmove(s2, v58, v82);
      s2[v82] = 0;
    }
    v83 = v157;
    if ( !v217 )
      goto LABEL_158;
    v84 = (char *)haystack;
    v152 = v31;
    v153.m128i_i64[0] = v30;
    v83 = v157;
    v85 = *(_QWORD *)v196;
    if ( *(_QWORD *)v196 )
      v84 = s2;
    v86 = v84;
    v87 = (__int64 *)v167;
    v167 = (__m128i *)v217;
    v88 = s2;
    v151 = v87;
    while ( 1 )
    {
      v89 = (__int64 *)v167;
      v94 = v167[2].m128i_i64[1];
      if ( !v85 )
        break;
      if ( v94 )
        goto LABEL_133;
      v89 = (__int64 *)v167;
      v90 = v88;
      v91 = haystack;
LABEL_125:
      v92 = strcmp(v91, v90);
      v93 = (__int64 *)v167[1].m128i_i64[0];
      v167 = (__m128i *)v167[1].m128i_i64[1];
      if ( v92 >= 0 )
      {
        v167 = (__m128i *)v93;
        v83 = (int *)v89;
      }
      if ( !v167 )
      {
        v104 = v85;
        v31 = v152;
        v105 = v88;
        v30 = v153.m128i_i64[0];
        v167 = (__m128i *)v151;
        goto LABEL_153;
      }
    }
    v95 = (__int64 *)v167;
    if ( v94 )
    {
LABEL_132:
      v167 = (__m128i *)v95;
      v89 = v95;
LABEL_133:
      v90 = v86;
      v91 = (const char *)v167[2].m128i_i64[0];
      goto LABEL_125;
    }
    while ( 1 )
    {
      v96 = v95[2];
      v83 = (int *)v95;
      if ( !v96 )
        break;
      v95 = (__int64 *)v95[2];
      if ( *(_QWORD *)(v96 + 40) )
        goto LABEL_132;
    }
    v104 = 0;
    v105 = v88;
    v83 = (int *)v95;
    v31 = v152;
    v30 = v153.m128i_i64[0];
    v167 = (__m128i *)v151;
LABEL_153:
    if ( v83 == v157 )
      goto LABEL_158;
    if ( *((_QWORD *)v83 + 5) )
    {
      v106 = *((const char **)v83 + 4);
      if ( !v104 )
        v105 = haystack;
LABEL_157:
      if ( strcmp(v105, v106) < 0 )
      {
LABEL_158:
        v107 = operator new(0x50u);
        v108 = s2;
        a7 = _mm_loadu_si128((const __m128i *)v196);
        *(_OWORD *)(v107 + 64) = 0;
        *(_QWORD *)(v107 + 56) = 0;
        *(_QWORD *)(v107 + 32) = v108;
        *(__m128i *)(v107 + 40) = a7;
        s2 = nullptr;
        v153 = a7;
        *(_OWORD *)v196 = 0;
        v109 = (int *)sub_4D3870(&v215, v83, v107 + 32);
        v83 = v109;
        if ( v110 )
        {
          if ( v157 != (int *)v110 )
          {
            a7 = _mm_load_si128(&v153);
            if ( !v109 )
            {
              v142 = haystack;
              if ( *(_QWORD *)(v110 + 40) )
                v142 = *(const char **)(v110 + 32);
              v153.m128i_i64[0] = v110;
              if ( !a7.m128i_i64[0] )
                v108 = (char *)haystack;
              strcmp(v108, v142);
            }
          }
          v83 = (int *)v107;
          std::_Rb_tree_insert_and_rebalance();
          ++v220;
        }
        else if ( v107 )
        {
          if ( v108 )
          {
            *(_QWORD *)(v107 + 40) = 0;
            qfree(v108);
          }
          operator delete((void *)v107, 0x50u);
        }
      }
    }
    else
    {
      v106 = haystack;
      if ( v104 )
        goto LABEL_157;
    }
    if ( s1 && (v111 = strlen(s1), (v112 = v111) != 0) )
    {
      v133 = *((void **)v83 + 7);
      v134 = v111 + 1;
      if ( *((_QWORD *)v83 + 9) < v111 + 1 )
      {
        v145 = qvector_reserve(v83 + 14, *((_QWORD *)v83 + 7), v134, 1);
        *((_QWORD *)v83 + 7) = v145;
        v133 = (void *)v145;
      }
      *((_QWORD *)v83 + 8) = v134;
      memmove(v133, s1, v112);
      *(_BYTE *)(*((_QWORD *)v83 + 7) + v112) = 0;
    }
    else
    {
      *((_QWORD *)v83 + 8) = 0;
    }
    v113 = s2;
    if ( s2 )
    {
LABEL_166:
      *(_QWORD *)v196 = 0;
      qfree(v113);
    }
LABEL_56:
    ++v161;
    if ( v176 )
    {
      v177.m128i_i64[0] = 0;
      qfree(v176);
    }
    clear_tinfo_t(v190);
    if ( v188 )
    {
      v189.m128i_i64[0] = 0;
      qfree(v188);
    }
    if ( dest )
    {
      *(_QWORD *)&v187 = 0;
      qfree(dest);
    }
    v59 = src;
    if ( src )
    {
LABEL_63:
      *(_QWORD *)&v175 = 0;
      qfree(v59);
    }
LABEL_64:
    ++v30;
    v31 += 5;
    if ( v166 == v30 )
    {
LABEL_67:
      while ( v220 )
        sub_6AE020((__int64)&v210, v218);
      v60 = 13;
      if ( v184 )
        v60 = 29;
      tinfo = create_tinfo(v150, v60, 13, *(_QWORD *)v158);
      if ( !(_BYTE)tinfo )
        sub_365330();
      if ( !set_tinfo_property(v150, 2, 4) )
        sub_365330();
      v135 = v162;
      v136 = *(_DWORD *)v154;
      v137 = v162[1];
      LOBYTE(v167) = *(_BYTE *)(v154 + 20);
      v138 = ((unsigned __int8)v167 & 8) == 0;
      v139 = sub_69AA70(v162, v137, v136);
      sub_69BF00(v135, v139, v138);
      v140 = (int *)v172;
      v141 = (char *)v172 + 4 * v173;
      if ( v141 != v172 )
      {
        do
        {
          LODWORD(s2) = sub_3B90A0(v162, *v140);
          sub_79BCF0((int)&s2);
          ++v140;
        }
        while ( v141 != (char *)v140 );
      }
      goto LABEL_73;
    }
  }
  clear_tinfo_t(v167);
  clear_tinfo_t(v190);
  if ( v188 )
  {
    v189.m128i_i64[0] = 0;
    qfree(v188);
  }
  if ( dest )
  {
    *(_QWORD *)&v187 = 0;
    qfree(dest);
  }
  if ( src )
  {
    *(_QWORD *)&v175 = 0;
    qfree(src);
  }
  if ( v30 >= v166 )
    goto LABEL_67;
  tinfo = 0;
LABEL_73:
  if ( ptr )
  {
    *(_QWORD *)&v224 = 0;
    qfree(ptr);
  }
  if ( v221 )
  {
    *(_QWORD *)&v222 = 0;
    qfree(v221);
  }
  sub_6A9060(v217);
  if ( v212 )
  {
    *(_QWORD *)&v213 = 0;
    qfree(v212);
  }
  if ( v172 )
  {
    *(_QWORD *)&v173 = 0;
    qfree(v172);
  }
  if ( v170 )
  {
    *(_QWORD *)&v171 = 0;
    qfree(v170);
  }
  v62 = (char *)v178;
  if ( v178 )
  {
    v63 = v179;
    if ( (_QWORD)v179 )
    {
      v64 = 0;
      do
      {
        v65 = &v62[128 * v64];
        clear_tinfo_t(v65 + 64);
        v66 = *((void **)v65 + 5);
        if ( v66 )
        {
          *((_QWORD *)v65 + 6) = 0;
          qfree(v66);
        }
        v67 = *((void **)v65 + 2);
        if ( v67 )
        {
          *((_QWORD *)v65 + 3) = 0;
          qfree(v67);
        }
        ++v64;
        v62 = (char *)v178;
      }
      while ( v63 != v64 );
    }
    *(_QWORD *)&v179 = 0;
    qfree(v62);
  }
  return tinfo;
}

