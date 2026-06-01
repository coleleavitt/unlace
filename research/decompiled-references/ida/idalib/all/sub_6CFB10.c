__int64 __fastcall sub_6CFB10(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        char a4,
        __int64 a5,
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
  unsigned int v15; // eax
  int v16; // edx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rsi
  char v20; // al
  int v21; // edx
  const char *v22; // rbx
  size_t v23; // rax
  size_t v24; // r12
  unsigned __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int8 v35; // al
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rdi
  size_t v38; // r13
  void *v39; // r15
  void *v40; // rdi
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD *v43; // r15
  void *v44; // rax
  __m128i v45; // xmm0
  __int64 *v46; // r15
  double v47; // xmm4_8
  double v48; // xmm5_8
  unsigned int v49; // eax
  double v50; // xmm4_8
  double v51; // xmm5_8
  unsigned __int64 v52; // r13
  __int64 v53; // r15
  unsigned int v54; // eax
  const char *v55; // r12
  void *v56; // rdi
  __int64 v57; // rsi
  unsigned int tinfo; // r15d
  char *v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r12
  char *v62; // rbx
  void *v63; // rdi
  void *v64; // rdi
  size_t v66; // r12
  size_t v67; // r14
  const char *v68; // r15
  __int64 v69; // r8
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r13
  char *v73; // r8
  __int64 v74; // rax
  char *v75; // rsi
  char *v76; // rsi
  __m128i v77; // xmm0
  __m128i *v78; // rax
  size_t v79; // r15
  __int64 *v80; // r12
  const char *v81; // rax
  __int64 v82; // r14
  const char *v83; // rbx
  __int64 *v84; // rax
  const char *v85; // r15
  __int64 *v86; // r13
  const char *v87; // rsi
  const char *v88; // rdi
  int v89; // eax
  __int64 *v90; // rcx
  __int64 v91; // rax
  __int64 *v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // r15
  __int64 v95; // r15
  __int64 v96; // rax
  __int64 v97; // r15
  _QWORD *v98; // rsi
  void *v99; // r15
  void *v100; // rdi
  __int64 v101; // rdx
  const char *v102; // r8
  const char *v103; // rsi
  __int64 v104; // r13
  char *v105; // r15
  __int64 *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdi
  size_t v109; // rax
  size_t v110; // r13
  void *v111; // rdi
  char *v112; // r12
  const char *v113; // rax
  size_t v114; // r12
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // r15
  _QWORD *v118; // rsi
  unsigned __int64 tinfo_size; // rax
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rt2
  __int64 *v122; // r15
  unsigned int v123; // r15d
  char *v124; // r12
  unsigned int v125; // edi
  __int64 v126; // rcx
  char *v127; // rax
  unsigned __int64 v128; // r8
  _BYTE *v129; // r15
  size_t v130; // r8
  __int128 v131; // rax
  void *v132; // rdi
  size_t v133; // r15
  __int64 *v134; // r14
  __int64 v135; // rsi
  unsigned int v136; // edx
  char v137; // bl
  unsigned __int64 v138; // rax
  __int64 *v139; // rbx
  char *v140; // r12
  const char *v141; // rsi
  unsigned int v142; // eax
  void *v143; // r12
  void *v144; // rdi
  __int64 v145; // rax
  _BYTE *v146; // rsi
  __int64 v147; // r12
  int v148; // [rsp-8h] [rbp-428h]
  unsigned __int64 *v149; // [rsp+0h] [rbp-420h]
  int v150; // [rsp+8h] [rbp-418h]
  int v151; // [rsp+Ch] [rbp-414h]
  __int64 *v152; // [rsp+10h] [rbp-410h]
  _QWORD *v153; // [rsp+18h] [rbp-408h]
  __m128i v154; // [rsp+20h] [rbp-400h] BYREF
  __int64 v155; // [rsp+30h] [rbp-3F0h]
  __int64 *v156; // [rsp+38h] [rbp-3E8h]
  __int64 v157; // [rsp+40h] [rbp-3E0h]
  int v158[2]; // [rsp+48h] [rbp-3D8h]
  _QWORD *v159; // [rsp+50h] [rbp-3D0h]
  __int64 *v160; // [rsp+58h] [rbp-3C8h]
  __int64 v161; // [rsp+60h] [rbp-3C0h]
  __int64 *v162; // [rsp+68h] [rbp-3B8h]
  char *s1; // [rsp+70h] [rbp-3B0h]
  unsigned int v164; // [rsp+78h] [rbp-3A8h]
  unsigned int v165; // [rsp+7Ch] [rbp-3A4h]
  unsigned __int64 v166; // [rsp+80h] [rbp-3A0h]
  __m128i *v167; // [rsp+88h] [rbp-398h]
  unsigned __int64 v168; // [rsp+90h] [rbp-390h] BYREF
  unsigned __int64 v169; // [rsp+98h] [rbp-388h] BYREF
  void *v170; // [rsp+A0h] [rbp-380h] BYREF
  __int128 v171; // [rsp+A8h] [rbp-378h]
  void *v172; // [rsp+C0h] [rbp-360h] BYREF
  __int128 v173; // [rsp+C8h] [rbp-358h]
  void *src; // [rsp+E0h] [rbp-340h] BYREF
  __int128 v175; // [rsp+E8h] [rbp-338h]
  void *ptr; // [rsp+100h] [rbp-320h] BYREF
  __m128i v177; // [rsp+108h] [rbp-318h] BYREF
  void *v178; // [rsp+120h] [rbp-300h] BYREF
  __int128 v179; // [rsp+128h] [rbp-2F8h]
  __int128 v180; // [rsp+138h] [rbp-2E8h]
  __int64 v181; // [rsp+148h] [rbp-2D8h]
  __int16 v182; // [rsp+150h] [rbp-2D0h]
  char v183; // [rsp+152h] [rbp-2CEh]
  bool v184; // [rsp+153h] [rbp-2CDh]
  __int128 v185; // [rsp+160h] [rbp-2C0h] BYREF
  void *dest; // [rsp+170h] [rbp-2B0h] BYREF
  __int128 v187; // [rsp+178h] [rbp-2A8h]
  void *v188; // [rsp+188h] [rbp-298h]
  __m128i v189; // [rsp+190h] [rbp-290h] BYREF
  _OWORD v190[3]; // [rsp+1A0h] [rbp-280h] BYREF
  char *v191; // [rsp+1D0h] [rbp-250h]
  int v192; // [rsp+1D8h] [rbp-248h]
  __int64 v193; // [rsp+1E0h] [rbp-240h]
  char v194; // [rsp+1E8h] [rbp-238h]
  _BYTE s2[40]; // [rsp+1F0h] [rbp-230h] BYREF
  __int128 v196; // [rsp+218h] [rbp-208h]
  __int64 v197; // [rsp+228h] [rbp-1F8h]
  int v198; // [rsp+230h] [rbp-1F0h]
  char v199; // [rsp+234h] [rbp-1ECh]
  __int64 v200; // [rsp+238h] [rbp-1E8h]
  __int128 v201; // [rsp+240h] [rbp-1E0h]
  __int64 v202; // [rsp+250h] [rbp-1D0h]
  __int128 v203; // [rsp+258h] [rbp-1C8h]
  __int64 v204; // [rsp+268h] [rbp-1B8h]
  __int128 v205; // [rsp+270h] [rbp-1B0h]
  __int64 v206; // [rsp+280h] [rbp-1A0h]
  __int128 v207; // [rsp+288h] [rbp-198h]
  __int64 *v208; // [rsp+2A0h] [rbp-180h] BYREF
  __int64 *v209; // [rsp+2A8h] [rbp-178h] BYREF
  void *v210; // [rsp+2B0h] [rbp-170h]
  __int128 v211; // [rsp+2B8h] [rbp-168h]
  __int128 v212; // [rsp+2C8h] [rbp-158h]
  __int64 v213; // [rsp+2D8h] [rbp-148h] BYREF
  int v214; // [rsp+2E0h] [rbp-140h] BYREF
  void *v215; // [rsp+2E8h] [rbp-138h]
  int *v216; // [rsp+2F0h] [rbp-130h]
  int *v217; // [rsp+2F8h] [rbp-128h]
  __int64 v218; // [rsp+300h] [rbp-120h]
  void *v219; // [rsp+308h] [rbp-118h] BYREF
  __int128 v220; // [rsp+310h] [rbp-110h]
  void *v221; // [rsp+320h] [rbp-100h] BYREF
  __int128 v222; // [rsp+328h] [rbp-F8h]
  __int64 v223; // [rsp+338h] [rbp-E8h]
  char v224; // [rsp+340h] [rbp-E0h]
  __m128i v225; // [rsp+350h] [rbp-D0h] BYREF
  __m128i v226; // [rsp+360h] [rbp-C0h] BYREF
  __m128i v227; // [rsp+370h] [rbp-B0h] BYREF
  __m128i v228; // [rsp+380h] [rbp-A0h] BYREF
  __m128i v229; // [rsp+390h] [rbp-90h] BYREF
  __m128i v230; // [rsp+3A0h] [rbp-80h] BYREF
  __m128i v231; // [rsp+3B0h] [rbp-70h] BYREF
  __m128i v232; // [rsp+3C0h] [rbp-60h] BYREF
  __m128i v233; // [rsp+3D0h] [rbp-50h] BYREF
  unsigned __int64 v234; // [rsp+3E8h] [rbp-38h]

  v149 = a3;
  v160 = a1;
  v155 = a2;
  v157 = a5;
  v234 = __readfsqword(0x28u);
  v151 = a4 & 1;
  v162 = *(__int64 **)(*a1 + 1672);
  v13 = *v162;
  v178 = nullptr;
  v14 = *(_QWORD *)(v13 + 1872);
  v179 = 0;
  v180 = 0;
  v159 = (_QWORD *)v14;
  v15 = *(_DWORD *)(a2 + 28);
  v165 = v15 & 0x40;
  v181 = 0;
  v182 = 1;
  v164 = v165 >> 6;
  if ( (v15 & 0x40) != 0 )
    HIDWORD(v181) = 1024;
  v183 = 1;
  v16 = (v15 >> 7) & 0x1F;
  if ( v16 )
    HIBYTE(v182) = v16 + 1;
  v184 = (v15 & 2) != 0;
  v17 = sub_52EB40((__int64)v159, v155);
  v18 = *(_QWORD *)v155;
  *(_QWORD *)&v180 = v17;
  v170 = nullptr;
  *(_QWORD *)v158 = &v178;
  v171 = 0;
  sub_5301C0(v160, &v170, v18);
  v19 = (char *)haystack;
  if ( (_QWORD)v171 )
    v19 = (char *)v170;
  *(_QWORD *)v158 = &v178;
  v20 = sub_5EBCA0((__int64 *)&v178, v19);
  v21 = HIDWORD(v181);
  if ( v20 )
  {
    BYTE1(v21) = BYTE5(v181) | 1;
    HIDWORD(v181) = v21;
  }
  else
  {
    v20 = BYTE5(v181) & 1;
  }
  v172 = nullptr;
  v22 = haystack;
  v173 = 0;
  if ( (_QWORD)v171 )
    v22 = (const char *)v170;
  v210 = nullptr;
  v214 = 0;
  v208 = v162;
  v215 = nullptr;
  v209 = *(__int64 **)v158;
  v156 = (__int64 *)&v214;
  v216 = &v214;
  v217 = &v214;
  v218 = 0;
  v219 = nullptr;
  v221 = nullptr;
  v224 = v20;
  v211 = 0;
  v212 = 0;
  v220 = 0;
  v222 = 0;
  if ( !v22 )
  {
    v24 = 0;
    v25 = 2;
    goto LABEL_14;
  }
  v23 = strlen(v22);
  v24 = v23;
  if ( !v23 )
  {
    v22 = nullptr;
    v25 = 2;
LABEL_14:
    v219 = (void *)qvector_reserve(&v219, v22, v25, 1);
    v22 = (const char *)v219;
    goto LABEL_15;
  }
  v66 = v23 + 1;
  v67 = v23;
  v219 = (void *)qvector_reserve(&v219, 0, v23 + 1, 1);
  *(_QWORD *)&v220 = v66;
  memmove(v219, v22, v67);
  *((_BYTE *)v219 + v67) = 0;
  v22 = (const char *)v219;
  if ( (_QWORD)v220 )
  {
    v24 = v220 - 1;
    v25 = v220 + 1;
  }
  else
  {
    v24 = 0;
    v25 = 2;
  }
  if ( *((_QWORD *)&v220 + 1) < v25 )
    goto LABEL_14;
LABEL_15:
  *(_QWORD *)&v220 = v25;
  v22[v24] = 46;
  *((_BYTE *)v219 + v24 + 1) = 0;
  v26 = v220;
  if ( (_QWORD)v220 )
  {
    if ( (_QWORD)v220 == 1 )
    {
      *(_QWORD *)&v222 = 0;
      v27 = 1;
LABEL_18:
      v28 = v27 - 1;
      goto LABEL_19;
    }
    v143 = v219;
    v144 = v221;
    if ( *((_QWORD *)&v222 + 1) < (unsigned __int64)v220 )
    {
      v221 = (void *)qvector_reserve(&v221, v221, v220, 1);
      v144 = v221;
    }
    *(_QWORD *)&v222 = v26;
    memmove(v144, v143, v26 - 1);
    *((char *)v221 + v26 - 1) = 0;
    v27 = v220;
    if ( (_QWORD)v220 )
      goto LABEL_18;
    v28 = 0;
  }
  else
  {
    *(_QWORD *)&v222 = 0;
    v28 = 0;
  }
LABEL_19:
  v223 = v28;
  v29 = 0;
  v161 = 0;
  v30 = *(_QWORD **)(v155 + 16);
  v166 = *(unsigned int *)(v155 + 8);
  if ( !v166 )
    goto LABEL_67;
  while ( 1 )
  {
    if ( v165 )
    {
      while ( 1 )
      {
        if ( *v30 != -1 )
        {
          a8 = 0.0;
          *(_OWORD *)s2 = 0;
          getinf_buf(26, s2, 16);
          if ( *v30 >= *(_QWORD *)s2 && *v30 < *(_QWORD *)&s2[8] )
            break;
        }
        ++v29;
        v30 += 4;
        if ( v29 == v166 )
          goto LABEL_67;
      }
    }
    src = nullptr;
    v175 = 0;
    sub_52ED50(v160, (__int64)&src, *v30);
    dest = nullptr;
    v188 = nullptr;
    v191 = (char *)&dword_0 + 1;
    v192 = -1;
    v193 = 0;
    v194 = 0;
    v185 = 0;
    v187 = 0;
    v189 = 0;
    v190[0] = 0;
    if ( (_QWORD)v175 )
    {
      v68 = (const char *)src;
      if ( !strcmp((const char *)src, "__return_address") || *v68 == 32 && v68[1] == 114 && !v68[2] )
      {
        v69 = 4096;
LABEL_108:
        v70 = v30[2];
        v71 = v30[1];
        if ( (*((_BYTE *)v30 + 28) & 2) == 0 )
          v70 = v30[2] - v71;
        v167 = (__m128i *)&v185;
        sub_5B70E0((__int64)v162, (__int64)&v185, v71, v70, v69);
        v72 = v187;
        if ( (_QWORD)v187 && (v73 = (char *)(v187 - 1), (_QWORD)v187 != 1) )
        {
          v99 = dest;
          v100 = src;
          if ( *((_QWORD *)&v175 + 1) < (unsigned __int64)v187 )
          {
            s1 = (char *)(v187 - 1);
            src = (void *)qvector_reserve(&src, src, v187, 1);
            v73 = s1;
            v100 = src;
          }
          *(_QWORD *)&v175 = v72;
          memmove(v100, v99, (size_t)v73);
          *((char *)src + v72 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v175 = 0;
        }
        goto LABEL_44;
      }
      if ( !strcmp(v68, "__saved_registers") || !strcmp(v68, " s") )
      {
        v69 = 0x2000;
        goto LABEL_108;
      }
    }
    s1 = (char *)v30[2];
    if ( (*((_BYTE *)v30 + 28) & 2) == 0 )
      s1 -= v30[1];
    v169 = 0;
    v167 = (__m128i *)&v169;
    if ( v165 )
    {
      if ( (*((_BYTE *)v30 + 26) & 0xF0) == 0 && !(unsigned __int8)get_tinfo(&v169, *v30) )
      {
        if ( (unsigned __int8)sub_60BC50((__int64)v162, v167->m128i_i64, *((_DWORD *)v30 + 6), 1, 0, 0) )
        {
          tinfo_size = get_tinfo_size(0, v169, 0);
          v121 = (unsigned __int64)s1 % tinfo_size;
          v120 = (unsigned __int64)s1 / tinfo_size;
          if ( !v121 )
          {
            if ( v120 != 1 )
            {
              v122 = (__int64 *)v167;
              *(_DWORD *)&s2[8] = 0;
              *(_DWORD *)&s2[12] = v120;
              *(_QWORD *)s2 = 0;
              copy_tinfo_t(s2);
              create_tinfo(v122, 11, 11, s2);
              clear_tinfo_t(s2);
            }
LABEL_27:
            if ( !(unsigned int)verify_tinfo(v169) )
              goto LABEL_32;
            goto LABEL_28;
          }
        }
      }
    }
    if ( (unsigned __int8)sub_6CB2A0((__int64)v160, v167->m128i_i64, (__int64)v30, v164) )
      goto LABEL_27;
LABEL_28:
    if ( !v151 )
    {
      if ( sub_5302B0(v160, &src, *v30) < 0 )
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
      sub_368890();
    }
    if ( !s1 )
    {
      v116 = v173;
      v117 = *v30;
      v118 = v172;
      if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 1) )
      {
        v172 = (void *)qvector_reserve(&v172, v172, v173 + 1, 8);
        v118 = v172;
        v116 = v173;
      }
      v118[v116] = v117;
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
      v56 = src;
      if ( src )
        goto LABEL_63;
      goto LABEL_64;
    }
    v35 = sub_6AA3E0(v162, (int)s1, v31, v32, v33, v34);
    if ( v35 )
    {
      *(_QWORD *)s2 = v35;
      copy_tinfo_t(v167);
      clear_tinfo_t(s2);
    }
    else
    {
      *(_DWORD *)&s2[8] = 0;
      ptr = &word_10 + 1;
      *(_QWORD *)s2 = 0;
      *(_DWORD *)&s2[12] = (_DWORD)s1;
      copy_tinfo_t(s2);
      create_tinfo(v167, 11, 11, s2);
      clear_tinfo_t(s2);
      clear_tinfo_t(&ptr);
    }
LABEL_32:
    v36 = v175;
    if ( (unsigned __int64)v175 <= 1 )
      break;
    v37 = v169;
    v169 = *(_QWORD *)&v190[0];
    *(_QWORD *)&v190[0] = v37;
    if ( (*((_BYTE *)v30 + 28) & 0x20) == 0 || (v37 & 0x100) == 0 )
    {
      v38 = v175 - 1;
LABEL_36:
      v39 = src;
      v40 = dest;
      if ( *((_QWORD *)&v187 + 1) < v36 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v36, 1);
        v40 = dest;
      }
      *(_QWORD *)&v187 = v36;
      memmove(v40, v39, v38);
      *((_BYTE *)dest + v38) = 0;
      v41 = v187;
      goto LABEL_39;
    }
    if ( (get_tinfo_property(v37, 2) & 0x3F) != 0xD )
    {
      v36 = v175;
      if ( !(_QWORD)v175 || (v38 = v175 - 1, (_QWORD)v175 == 1) )
      {
        *(_QWORD *)&v187 = 0;
        if ( (*((_BYTE *)v30 + 28) & 2) != 0 )
          *(_QWORD *)&v185 = 0;
        else
          *(_QWORD *)&v185 = 8LL * v30[1];
        *((_QWORD *)&v185 + 1) = 8LL * (_QWORD)s1;
        goto LABEL_43;
      }
      goto LABEL_36;
    }
    HIDWORD(v193) |= 0x20u;
    v41 = v187;
LABEL_39:
    v42 = 0;
    if ( (*((_BYTE *)v30 + 28) & 2) == 0 )
      v42 = 8LL * v30[1];
    *(_QWORD *)&v185 = v42;
    *((_QWORD *)&v185 + 1) = 8LL * (_QWORD)s1;
    if ( v41 <= 1 )
      goto LABEL_43;
    validate_name(&dest, 8, 1);
    if ( (*((_BYTE *)v30 + 28) & 0xC0) == 0 )
      goto LABEL_43;
    if ( !(_QWORD)v187 )
      goto LABEL_43;
    v123 = v187 - 2;
    if ( (int)v187 - 2 < 0 )
      goto LABEL_43;
    v154.m128i_i64[0] = v187;
    s1 = (char *)dest;
    v124 = (char *)dest + v123;
    while ( 1 )
    {
      v125 = *v124;
      if ( v125 > 0x7F || !isxdigit(v125) )
        break;
      --v123;
      --v124;
      if ( v123 == -1 )
        goto LABEL_43;
    }
    v126 = v154.m128i_i64[0];
    if ( !v123 )
      goto LABEL_43;
    v127 = &s1[v123];
    if ( *v127 != 95 )
      goto LABEL_43;
    v128 = (int)v123 + 1LL;
    if ( v154.m128i_i64[0] < v128 )
    {
      if ( *((_QWORD *)&v187 + 1) < v128 )
      {
        v154.m128i_i64[0] = (int)v123 + 1LL;
        s1 = (char *)qvector_reserve(&dest, s1, v154.m128i_i64[0], 1);
        v126 = v187;
        dest = s1;
        v128 = v154.m128i_i64[0];
      }
      v154.m128i_i64[0] = v128;
      memset(&s1[v126], 0, v128 - v126);
      *(_QWORD *)&v187 = v154.m128i_i64[0];
      v127 = (char *)dest + (int)v123;
    }
    else if ( v154.m128i_i64[0] != (int)v123 + 1LL )
    {
      *(_QWORD *)&v187 = (int)v123 + 1LL;
    }
    *v127 = 0;
    if ( (*((_BYTE *)v30 + 28) & 0x40) == 0 )
      goto LABEL_43;
    v129 = (_BYTE *)v187;
    if ( !(_QWORD)v187 )
      goto LABEL_43;
    v154.m128i_i64[0] = v187 - 1;
    if ( (unsigned __int64)(v187 - 1) <= 4 )
      goto LABEL_43;
    s1 = (char *)dest;
    if ( strncmp((char *)dest + v187 - 6, "_dtor", 5u) )
      goto LABEL_43;
    v130 = v154.m128i_i64[0];
    if ( (__int64)(v129 - 5) <= 1 )
    {
      if ( s1 )
      {
        *(_QWORD *)&v187 = 0;
        qfree(s1);
        *(_QWORD *)&v131 = v187;
        dest = nullptr;
        *((_QWORD *)&v187 + 1) = 0;
        if ( (_QWORD)v187 )
        {
          *((_QWORD *)&v131 + 1) = 0;
          s1 = nullptr;
LABEL_256:
          v147 = v131 + 1;
          v130 = v131 - 1;
          if ( *((_QWORD *)&v131 + 1) >= (unsigned __int64)(v131 + 1) )
            goto LABEL_257;
          goto LABEL_262;
        }
        v130 = 0;
        v147 = 2;
        s1 = nullptr;
      }
      else
      {
        v147 = (__int64)(v129 + 1);
        if ( *((_QWORD *)&v187 + 1) >= (unsigned __int64)(v129 + 1) )
        {
          *(_QWORD *)&v187 = v129 + 1;
          *v129 = 0;
LABEL_258:
          memmove((char *)dest + 1, dest, v130);
          goto LABEL_203;
        }
      }
    }
    else
    {
      if ( *((_QWORD *)&v187 + 1) < (unsigned __int64)(v129 - 5) )
      {
        s1 = (char *)qvector_reserve(&dest, s1, v129 - 5, 1);
        dest = s1;
      }
      *(_QWORD *)&v187 = v129 - 5;
      v129[(_QWORD)s1 - 6] = 0;
      s1 = (char *)dest;
      v131 = v187;
      if ( (_QWORD)v187 )
        goto LABEL_256;
      if ( *((_QWORD *)&v187 + 1) > 1u )
      {
        *(_QWORD *)&v187 = 2;
        s1[1] = 0;
        goto LABEL_203;
      }
      v130 = 0;
      v147 = 2;
    }
LABEL_262:
    v154.m128i_i64[0] = v130;
    *(_QWORD *)&v131 = qvector_reserve(&dest, s1, v147, 1);
    v130 = v154.m128i_i64[0];
    s1 = (char *)v131;
    dest = (void *)v131;
    *(_QWORD *)&v131 = v154.m128i_i64[0] + 1;
LABEL_257:
    *(_QWORD *)&v187 = v147;
    s1[v131] = 0;
    if ( v130 )
      goto LABEL_258;
LABEL_203:
    *(_BYTE *)dest = 126;
LABEL_43:
    clear_tinfo_t(v167);
    v167 = (__m128i *)&v185;
LABEL_44:
    v43 = v159;
    ptr = nullptr;
    v177 = 0;
    v168 = sub_3BDD60(*(_QWORD **)(*v159 + 1672LL), *v30);
    if ( sub_7BEA80(&v168, *v43, &ptr, 0, 83) > 0
      || (v94 = v159, v169 = sub_3BDD60(*(_QWORD **)(*v159 + 1672LL), *v30), sub_7BEA80(&v169, *v94, &ptr, 1, 83) > 0) )
    {
      v44 = v188;
      v45 = _mm_load_si128(&v189);
      a7 = _mm_loadu_si128(&v177);
      v188 = ptr;
      ptr = v44;
      v189 = a7;
      v177 = v45;
    }
    if ( (unsigned __int8)sub_5EB0F0(0, (__int64)v167) )
      HIDWORD(v193) |= 0x100u;
    v46 = (__int64 *)v167;
    sub_6BE720(v162, (__int64)v167, *((unsigned int *)v30 + 6), *v30, nullptr);
    if ( v165 )
    {
      *(_DWORD *)s2 = 0;
      v199 = 0;
      memset(&s2[8], 0, 32);
      v198 = 0;
      v200 = 0;
      v202 = 0;
      v204 = 0;
      v206 = 0;
      v197 = v157;
      v196 = 0;
      v201 = 0;
      v203 = 0;
      v205 = 0;
      v207 = 0;
      v49 = sub_6C4D50(
              *(__int64 *)v158,
              s2,
              0,
              (__int64)v46,
              1u,
              0x80000040,
              0.0,
              a7,
              a8,
              a9,
              v47,
              v48,
              a12,
              a13,
              0xFFFFFFFFFFFFFFFFLL);
      if ( v49 == -3 )
      {
        *(_QWORD *)&v187 = 0;
        v49 = sub_6C4D50(
                *(__int64 *)v158,
                s2,
                0,
                (__int64)v167,
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
      }
      if ( v49 )
      {
        v95 = tinfo_errstr(v49);
        v154.m128i_i64[0] = *((_QWORD *)&v185 + 1) >> 3;
        s1 = (char *)((unsigned __int64)v185 >> 3);
        dstr_tinfo(v190);
        sub_84F5B0(
          "struc_to_til udm '%s.%s' type '%s' offset %lld size %lld: %s\n",
          v95,
          v148,
          (int)v149,
          v150,
          (int)v152,
          (int)v153,
          v154.m128i_i32[0],
          v154.m128i_i32[2],
          v155,
          (int)v156,
          v157);
        v96 = v173;
        v97 = *v30;
        v98 = v172;
        if ( *((_QWORD *)&v173 + 1) < (unsigned __int64)(v173 + 1) )
        {
          v172 = (void *)qvector_reserve(&v172, v172, v173 + 1, 8);
          v98 = v172;
          v96 = v173;
        }
        v98[v96] = v97;
        *(_QWORD *)&v173 = v173 + 1;
        sub_542CD0(s2);
        if ( ptr )
        {
          v177.m128i_i64[0] = 0;
          qfree(ptr);
        }
        goto LABEL_143;
      }
      sub_542CD0(s2);
    }
    else
    {
      v74 = v179;
      v75 = (char *)v178;
      if ( *((_QWORD *)&v179 + 1) < (unsigned __int64)(v179 + 1) )
      {
        v178 = (void *)qvector_reserve(*(_QWORD *)v158, v178, v179 + 1, 144);
        v75 = (char *)v178;
        v74 = v179;
      }
      v76 = &v75[144 * v74];
      *(_OWORD *)(v76 + 24) = 0;
      *(_OWORD *)v76 = 0;
      *((_OWORD *)v76 + 3) = 0;
      *((_OWORD *)v76 + 4) = 0;
      *(_QWORD *)&v179 = v179 + 1;
      v77 = _mm_loadu_si128((const __m128i *)v76);
      *((_QWORD *)v76 + 14) = (char *)&dword_0 + 1;
      v78 = v167;
      *((_QWORD *)v76 + 2) = 0;
      *((_QWORD *)v76 + 5) = 0;
      *((_DWORD *)v76 + 30) = -1;
      *((_QWORD *)v76 + 16) = 0;
      v76[136] = 0;
      v225 = v77;
      v226 = _mm_loadu_si128((const __m128i *)v76 + 1);
      v227 = _mm_loadu_si128((const __m128i *)v76 + 2);
      v228 = _mm_loadu_si128((const __m128i *)v76 + 3);
      v229 = _mm_loadu_si128((const __m128i *)v76 + 4);
      v230 = _mm_loadu_si128((const __m128i *)v76 + 5);
      v231 = _mm_loadu_si128((const __m128i *)v76 + 6);
      v232 = _mm_loadu_si128((const __m128i *)v76 + 7);
      v233 = _mm_loadu_si128((const __m128i *)v76 + 8);
      *(__m128i *)v76 = _mm_load_si128(v78);
      *((__m128i *)v76 + 1) = _mm_load_si128(v78 + 1);
      *((__m128i *)v76 + 2) = _mm_load_si128(v78 + 2);
      *((__m128i *)v76 + 3) = _mm_load_si128(v78 + 3);
      *((__m128i *)v76 + 4) = _mm_load_si128(v78 + 4);
      *((__m128i *)v76 + 5) = _mm_load_si128(v78 + 5);
      *((__m128i *)v76 + 6) = _mm_load_si128(v78 + 6);
      *((__m128i *)v76 + 7) = _mm_load_si128(v78 + 7);
      *((__m128i *)v76 + 8) = _mm_load_si128(v78 + 8);
      *v78 = _mm_load_si128(&v225);
      v78[1] = _mm_load_si128(&v226);
      v78[2] = _mm_load_si128(&v227);
      v78[3] = _mm_load_si128(&v228);
      v78[4] = _mm_load_si128(&v229);
      v78[5] = _mm_load_si128(&v230);
      v78[6] = _mm_load_si128(&v231);
      v78[7] = _mm_load_si128(&v232);
      v78[8] = _mm_load_si128(&v233);
    }
    v52 = *v30;
    s1 = (char *)haystack;
    if ( (_QWORD)v175 )
      s1 = (char *)src;
    v53 = v161;
    v54 = sub_534DB0(&v209, v161, v224);
    v55 = sub_538040((__int64)&v209, v54, v53);
    if ( !strcmp(s1, v55) )
      goto LABEL_56;
    v154.m128i_i64[0] = (__int64)sub_6CA370((__int64)&v208, v55, 0);
    if ( sub_6B9860(v208, (const char *)v154.m128i_i64[0], 0, 0) == -1 )
    {
      v112 = s1;
      v113 = sub_6CA370((__int64)&v208, s1, 1);
      sub_6BF450(v208, v113, (const char *)v154.m128i_i64[0], v52);
      memset(s2, 0, 24);
      if ( v112 )
      {
        v114 = strlen(s1);
        v154.m128i_i64[0] = v114 + 1;
        *(_QWORD *)s2 = qvector_reserve(s2, 0, v114 + 1, 1);
        *(_QWORD *)&s2[8] = v154.m128i_i64[0];
        memmove(*(void **)s2, s1, v114);
        *(_BYTE *)(*(_QWORD *)s2 + v114) = 0;
      }
      v115 = sub_6CEEE0((__int64)&v213, (__int64)s2);
      sub_6CEFF0((__int64)&v208, v115);
      v111 = *(void **)s2;
      if ( *(_QWORD *)s2 )
        goto LABEL_167;
      goto LABEL_56;
    }
    memset(s2, 0, 24);
    if ( v55 )
    {
      v79 = strlen(v55);
      v154.m128i_i64[0] = v79 + 1;
      *(_QWORD *)s2 = qvector_reserve(s2, 0, v79 + 1, 1);
      *(_QWORD *)&s2[8] = v154.m128i_i64[0];
      memmove(*(void **)s2, v55, v79);
      *(_BYTE *)(*(_QWORD *)s2 + v79) = 0;
    }
    v80 = v156;
    if ( !v215 )
      goto LABEL_158;
    v81 = haystack;
    v153 = v30;
    v154.m128i_i64[0] = v29;
    v80 = v156;
    v82 = *(_QWORD *)&s2[8];
    if ( *(_QWORD *)&s2[8] )
      v81 = *(const char **)s2;
    v83 = v81;
    v84 = (__int64 *)v167;
    v167 = (__m128i *)v215;
    v85 = *(const char **)s2;
    v152 = v84;
    while ( 1 )
    {
      v86 = (__int64 *)v167;
      v91 = v167[2].m128i_i64[1];
      if ( !v82 )
        break;
      if ( v91 )
        goto LABEL_133;
      v86 = (__int64 *)v167;
      v87 = v85;
      v88 = haystack;
LABEL_125:
      v89 = strcmp(v88, v87);
      v90 = (__int64 *)v167[1].m128i_i64[0];
      v167 = (__m128i *)v167[1].m128i_i64[1];
      if ( v89 >= 0 )
      {
        v167 = (__m128i *)v90;
        v80 = v86;
      }
      if ( !v167 )
      {
        v101 = v82;
        v30 = v153;
        v102 = v85;
        v29 = v154.m128i_i64[0];
        v167 = (__m128i *)v152;
        goto LABEL_153;
      }
    }
    v92 = (__int64 *)v167;
    if ( v91 )
    {
LABEL_132:
      v167 = (__m128i *)v92;
      v86 = v92;
LABEL_133:
      v87 = v83;
      v88 = (const char *)v167[2].m128i_i64[0];
      goto LABEL_125;
    }
    while ( 1 )
    {
      v93 = v92[2];
      v80 = v92;
      if ( !v93 )
        break;
      v92 = (__int64 *)v92[2];
      if ( *(_QWORD *)(v93 + 40) )
        goto LABEL_132;
    }
    v101 = 0;
    v102 = v85;
    v80 = v92;
    v30 = v153;
    v29 = v154.m128i_i64[0];
    v167 = (__m128i *)v152;
LABEL_153:
    if ( v80 == v156 )
      goto LABEL_158;
    if ( v80[5] )
    {
      v103 = (const char *)v80[4];
      if ( !v101 )
        v102 = haystack;
LABEL_157:
      if ( strcmp(v102, v103) < 0 )
      {
LABEL_158:
        v104 = operator new(0x50u);
        v105 = *(char **)s2;
        a7 = _mm_loadu_si128((const __m128i *)&s2[8]);
        *(_OWORD *)(v104 + 64) = 0;
        *(_QWORD *)(v104 + 56) = 0;
        *(_QWORD *)(v104 + 32) = v105;
        *(__m128i *)(v104 + 40) = a7;
        memset(s2, 0, 24);
        v154 = a7;
        v106 = sub_4EB100(&v213, v80, v104 + 32);
        v80 = v106;
        if ( v107 )
        {
          if ( v156 == (__int64 *)v107 || (a7 = _mm_load_si128(&v154), v106) )
          {
            v108 = 1;
          }
          else
          {
            v141 = haystack;
            if ( *(_QWORD *)(v107 + 40) )
              v141 = *(const char **)(v107 + 32);
            v154.m128i_i64[0] = v107;
            if ( !a7.m128i_i64[0] )
              v105 = (char *)haystack;
            v142 = strcmp(v105, v141);
            v107 = v154.m128i_i64[0];
            v108 = v142 >> 31;
          }
          v80 = (__int64 *)v104;
          std::_Rb_tree_insert_and_rebalance(v108, v104, v107, v156);
          ++v218;
        }
        else if ( v104 )
        {
          if ( v105 )
          {
            *(_QWORD *)(v104 + 40) = 0;
            qfree(v105);
          }
          operator delete((void *)v104, 0x50u);
        }
      }
    }
    else
    {
      v103 = haystack;
      if ( v101 )
        goto LABEL_157;
    }
    if ( s1 && (v109 = strlen(s1), (v110 = v109) != 0) )
    {
      v132 = (void *)v80[7];
      v133 = v109 + 1;
      if ( v80[9] < v109 + 1 )
      {
        v145 = qvector_reserve(v80 + 7, v80[7], v133, 1);
        v80[7] = v145;
        v132 = (void *)v145;
      }
      v80[8] = v133;
      memmove(v132, s1, v110);
      *(_BYTE *)(v80[7] + v110) = 0;
    }
    else
    {
      v80[8] = 0;
    }
    v111 = *(void **)s2;
    if ( *(_QWORD *)s2 )
    {
LABEL_167:
      *(_QWORD *)&s2[8] = 0;
      qfree(v111);
    }
LABEL_56:
    ++v161;
    if ( ptr )
    {
      v177.m128i_i64[0] = 0;
      qfree(ptr);
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
    v56 = src;
    if ( src )
    {
LABEL_63:
      *(_QWORD *)&v175 = 0;
      qfree(v56);
    }
LABEL_64:
    ++v29;
    v30 += 4;
    if ( v166 == v29 )
    {
LABEL_67:
      while ( v218 )
        sub_6CEFF0((__int64)&v208, v216);
      v57 = 13;
      if ( v184 )
        v57 = 29;
      tinfo = create_tinfo(v149, v57, 13, *(_QWORD *)v158);
      if ( !(_BYTE)tinfo )
        sub_368890();
      if ( !set_tinfo_property(v149, 2u, 4) )
        sub_368890();
      v134 = v162;
      v135 = v162[1];
      v136 = *(_DWORD *)v155;
      LOBYTE(v167) = *(_BYTE *)(v155 + 28);
      v137 = ((unsigned __int8)v167 & 8) == 0;
      v138 = sub_6BB440(v162, v135, v136);
      sub_6BC950(v134, v138, v137);
      v139 = (__int64 *)v172;
      v140 = (char *)v172 + 8 * v173;
      if ( v140 != v172 )
      {
        do
        {
          *(_QWORD *)s2 = sub_3BDD60(v162, *v139);
          sub_7BF0F0((int)s2);
          ++v139;
        }
        while ( v140 != (char *)v139 );
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
  if ( v29 >= v166 )
    goto LABEL_67;
  tinfo = 0;
LABEL_73:
  if ( v221 )
  {
    *(_QWORD *)&v222 = 0;
    qfree(v221);
  }
  if ( v219 )
  {
    *(_QWORD *)&v220 = 0;
    qfree(v219);
  }
  sub_6C9FA0(v215);
  if ( v210 )
  {
    *(_QWORD *)&v211 = 0;
    qfree(v210);
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
  v59 = (char *)v178;
  if ( v178 )
  {
    v60 = v179;
    if ( (_QWORD)v179 )
    {
      v61 = 0;
      do
      {
        v62 = &v59[144 * v61];
        clear_tinfo_t(v62 + 64);
        v63 = *((void **)v62 + 5);
        if ( v63 )
        {
          *((_QWORD *)v62 + 6) = 0;
          qfree(v63);
        }
        v64 = *((void **)v62 + 2);
        if ( v64 )
        {
          *((_QWORD *)v62 + 3) = 0;
          qfree(v64);
        }
        ++v61;
        v59 = (char *)v178;
      }
      while ( v60 != v61 );
    }
    *(_QWORD *)&v179 = 0;
    qfree(v59);
  }
  return tinfo;
}
