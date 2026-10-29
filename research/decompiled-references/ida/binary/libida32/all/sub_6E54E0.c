unsigned __int64 __fastcall sub_6E54E0(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, const char *a4)
{
  __int64 tinfo_property; // rax
  __int64 v8; // rdi
  unsigned __int64 **v9; // r12
  void **v10; // r15
  _OWORD *v11; // rax
  unsigned int v12; // eax
  char *v13; // rbp
  void *v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // r14
  __int64 v17; // r12
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // esi
  __int64 v23; // r8
  unsigned int v24; // edi
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 v32; // r12
  char *v33; // rbp
  __int64 v34; // r13
  const char *v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rcx
  unsigned int v42; // esi
  __int64 v43; // r8
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // r11
  __int64 v48; // rsi
  unsigned __int64 v49; // rsi
  _QWORD *v50; // rax
  _OWORD *v51; // rcx
  unsigned __int64 v52; // r8
  _QWORD *v53; // rbp
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rsi
  _QWORD *v56; // r10
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r14
  _QWORD *v59; // rax
  _QWORD *v60; // rdi
  char *v61; // rdi
  __int64 v62; // r12
  __int64 v63; // rbp
  char *v64; // rbx
  void *v65; // rdi
  void *v66; // rdi
  _QWORD *v67; // rax
  __int64 v68; // r14
  bool v69; // zf
  __int64 v70; // rax
  __int64 v71; // rdx
  char v72; // al
  __int64 *v73; // rax
  __int16 v74; // ax
  __int64 v75; // rdi
  void *v76; // r14
  __int64 v77; // r14
  unsigned int v78; // eax
  void *v79; // rdx
  __int64 v80; // rdi
  __int64 v81; // r14
  unsigned __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  char *v85; // r13
  char *v86; // rax
  unsigned __int64 v87; // r12
  size_t v88; // r14
  _QWORD *v89; // r9
  _QWORD *v90; // rsi
  unsigned __int64 v91; // r8
  _QWORD *v92; // rcx
  unsigned __int64 v93; // rdx
  char *v94; // rax
  _QWORD *v95; // rdi
  unsigned __int64 v96; // rax
  signed __int64 v97; // r15
  __int64 v98; // r12
  __int64 v99; // rax
  bool v100; // cf
  unsigned __int64 v101; // r12
  unsigned __int64 v102; // r12
  char *v103; // rax
  char *v104; // rcx
  __int64 v105; // rax
  void ***v106; // rax
  void **v107; // r15
  unsigned __int64 v108; // rcx
  const char *v109; // rdi
  __int64 v110; // rbp
  size_t v111; // rax
  __int64 v112; // rax
  __m128i v113; // xmm0
  __int64 v114; // rdi
  __int64 v115; // r14
  __int32 v116; // eax
  __m128i v117; // xmm0
  void *v118; // rdx
  __int64 *v119; // r12
  __int64 v120; // r13
  __int64 v121; // rcx
  __int64 *v122; // rax
  __int64 v123; // r14
  const char *v124; // rdi
  const char *v125; // r8
  __int64 v126; // r9
  size_t v127; // rax
  __int64 v128; // rdi
  __int64 v129; // rbp
  __int64 v130; // rax
  __int64 v131; // rax
  unsigned __int64 v132; // rdx
  const char *v133; // rax
  unsigned int v134; // eax
  double v135; // xmm0_8
  const char *v136; // rbp
  __int64 v137; // rbp
  __int64 v138; // r14
  void *v139; // r13
  __int64 v140; // rax
  __int64 v141; // rdx
  int v142; // r11d
  int v143; // eax
  __int64 v144; // rcx
  _OWORD *v145; // rcx
  __int64 v146; // r12
  __int64 v147; // rbp
  char *v148; // rbx
  void *v149; // rdi
  void *v150; // rdi
  int v151; // eax
  __int64 v152; // rcx
  _OWORD *v153; // rcx
  int v154; // ecx
  int v155; // r11d
  __int64 v156; // r10
  unsigned int v157; // ecx
  __int64 v158; // rsi
  int v159; // r15d
  unsigned __int64 v160; // r8
  int v161; // ecx
  int v162; // r10d
  __int64 v163; // r8
  int v164; // r11d
  unsigned __int64 v165; // rdi
  __int64 v166; // r15
  __int64 v167; // rcx
  const char *v168; // rax
  const char *v169; // rax
  int v170; // ecx
  int v171; // ebp
  __int64 v172; // r11
  unsigned int v173; // ecx
  __int64 v174; // rdi
  int v175; // r10d
  unsigned __int64 v176; // rsi
  int v177; // ecx
  int v178; // r11d
  __int64 v179; // r10
  int v180; // r8d
  unsigned __int64 v181; // rcx
  unsigned int v182; // ebp
  __int64 v183; // rsi
  __int64 v184; // rax
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rsi
  __int64 v188; // rdx
  _QWORD *v189; // rax
  __int64 v190; // rcx
  __int64 v191; // rdx
  __m128i v192; // [rsp+0h] [rbp-1A8h] BYREF
  unsigned __int64 v193; // [rsp+18h] [rbp-190h]
  __int64 *v194; // [rsp+20h] [rbp-188h]
  __int64 v195; // [rsp+28h] [rbp-180h]
  const char *v196; // [rsp+30h] [rbp-178h]
  size_t v197; // [rsp+38h] [rbp-170h]
  _OWORD *v198; // [rsp+40h] [rbp-168h]
  void **v199; // [rsp+48h] [rbp-160h]
  unsigned __int64 v200; // [rsp+50h] [rbp-158h]
  void *src; // [rsp+58h] [rbp-150h]
  char *v202; // [rsp+60h] [rbp-148h]
  unsigned int v203; // [rsp+6Ch] [rbp-13Ch]
  void **p_ptr; // [rsp+70h] [rbp-138h]
  void **v205; // [rsp+78h] [rbp-130h]
  void *v206; // [rsp+80h] [rbp-128h]
  __int64 v207; // [rsp+88h] [rbp-120h]
  const char *v208; // [rsp+90h] [rbp-118h]
  __int64 *v209; // [rsp+98h] [rbp-110h]
  unsigned __int64 v210; // [rsp+A0h] [rbp-108h]
  unsigned __int64 v211; // [rsp+A8h] [rbp-100h]
  __int64 v212; // [rsp+B8h] [rbp-F0h] BYREF
  void *v213; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int v214; // [rsp+C8h] [rbp-E0h]
  void *v215; // [rsp+D0h] [rbp-D8h] BYREF
  unsigned int v216; // [rsp+D8h] [rbp-D0h]
  void *v217; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v218; // [rsp+E8h] [rbp-C0h]
  __int128 v219; // [rsp+F8h] [rbp-B0h]
  __int64 v220; // [rsp+108h] [rbp-A0h]
  int v221; // [rsp+110h] [rbp-98h]
  void *ptr; // [rsp+120h] [rbp-88h] BYREF
  __int64 v223; // [rsp+128h] [rbp-80h]
  _DWORD v224[14]; // [rsp+130h] [rbp-78h] BYREF
  unsigned __int64 v225; // [rsp+168h] [rbp-40h]

  v193 = a2;
  v208 = a4;
  v225 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(*a3, 309);
  if ( !tinfo_property )
    return v225 - __readfsqword(0x28u);
  v8 = *a3;
  v9 = (unsigned __int64 **)tinfo_property;
  v217 = nullptr;
  v10 = (void **)tinfo_property;
  v220 = 0;
  v221 = 1;
  v218 = 0;
  v219 = 0;
  if ( (get_tinfo_property(v8, 306) & 0x400) == 0
    || (v10 = &v217, (unsigned __int8)sub_6DC560((__int64)a1, (const char *)&v217, v9)) )
  {
    sub_B5CC80(v193);
    v11 = (_OWORD *)operator new(0x40u);
    *v11 = 0;
    v11[1] = 0;
    v11[2] = 0;
    v11[3] = 0;
    v198 = v11;
    *(_QWORD *)v11 = 8LL * (_QWORD)v10[3];
    if ( (*((_BYTE *)v10 + 44) & 0x40) != 0 )
    {
      v105 = sub_B0EC50(a1[6], 0, 0);
      sub_B68F20(v193, v105);
    }
    v209 = &v212;
    v212 = 0;
    v12 = sub_6D4130((__int64)a1, &v212, a3, v193);
    v13 = (char *)*v10;
    v203 = v12;
    v14 = v10[1];
    v15 = (_QWORD)v14 << 7;
    if ( v13 == &v13[128 * (_QWORD)v14] )
    {
      src = nullptr;
      v202 = nullptr;
      goto LABEL_20;
    }
    v199 = v10;
    v16 = &v13[v15];
    v202 = nullptr;
    v194 = nullptr;
    src = nullptr;
    v200 = (unsigned __int64)v198 + 40;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (v13[116] & 0x20) != 0 )
        {
          v17 = sub_6E7240(a1, v13 + 64, 2);
          if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
            goto LABEL_17;
          v19 = sub_F3F530(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v19 )
            break;
        }
LABEL_9:
        v13 += 128;
        if ( v16 == v13 )
          goto LABEL_17;
      }
      v20 = *(_QWORD *)v13;
      v21 = 0;
      v22 = *((_DWORD *)v198 + 14);
      if ( !v22 )
        goto LABEL_194;
      v23 = *((_QWORD *)v198 + 5);
      v24 = (v22 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v25 = (__int64 *)(v23 + 16LL * v24);
      v26 = *v25;
      if ( v19 == *v25 )
        goto LABEL_15;
      v142 = 1;
      v15 = 0;
      while ( v26 != -4096 )
      {
        if ( !v15 && v26 == -8192 )
          v15 = (unsigned __int64)v25;
        v24 = (v22 - 1) & (v142 + v24);
        LODWORD(v195) = v142 + 1;
        v25 = (__int64 *)(v23 + 16LL * v24);
        v26 = *v25;
        if ( v19 == *v25 )
          goto LABEL_15;
        v142 = v195;
      }
      v21 = 2 * v22;
      if ( !v15 )
        v15 = (unsigned __int64)v25;
      LODWORD(v195) = *((_DWORD *)v198 + 12);
      v143 = v195 + 1;
      v18 = (unsigned int)(4 * (v195 + 1));
      if ( (unsigned int)v18 < 3 * v22 )
      {
        v144 = v22 - *((_DWORD *)v198 + 13) - v143;
        if ( v22 >> 3 >= (unsigned int)v144 )
        {
          p_ptr = (void **)v20;
          sub_6E50A0(v200, v22, v15, v144, v18, v20);
          v15 = 0;
          v20 = (__int64)p_ptr;
          v161 = *((_DWORD *)v198 + 14);
          LODWORD(v195) = *((_DWORD *)v198 + 12);
          v143 = v195 + 1;
          if ( v161 )
          {
            v162 = v161 - 1;
            v163 = *((_QWORD *)v198 + 5);
            v164 = 1;
            v165 = 0;
            LODWORD(v166) = (v161 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
            v15 = v163 + 16LL * (unsigned int)v166;
            v167 = *(_QWORD *)v15;
            if ( v19 != *(_QWORD *)v15 )
            {
              while ( v167 != -4096 )
              {
                if ( v167 == -8192 && !v165 )
                  v165 = v15;
                v166 = v162 & (unsigned int)(v166 + v164);
                v15 = v163 + 16 * v166;
                v167 = *(_QWORD *)v15;
                if ( v19 == *(_QWORD *)v15 )
                  goto LABEL_172;
                ++v164;
              }
              if ( v165 )
                v15 = v165;
            }
          }
        }
      }
      else
      {
LABEL_194:
        p_ptr = (void **)v20;
        sub_6E50A0(v200, v21, v15, v21, v18, v20);
        v15 = 0;
        v20 = (__int64)p_ptr;
        v154 = *((_DWORD *)v198 + 14);
        LODWORD(v195) = *((_DWORD *)v198 + 12);
        v143 = v195 + 1;
        if ( v154 )
        {
          v155 = v154 - 1;
          v156 = *((_QWORD *)v198 + 5);
          v157 = (v154 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
          v15 = v156 + 16LL * v157;
          v158 = *(_QWORD *)v15;
          if ( v19 != *(_QWORD *)v15 )
          {
            v159 = 1;
            v160 = 0;
            while ( v158 != -4096 )
            {
              if ( v158 == -8192 && !v160 )
                v160 = v15;
              v157 = v155 & (v157 + v159);
              v15 = v156 + 16LL * v157;
              v158 = *(_QWORD *)v15;
              if ( v19 == *(_QWORD *)v15 )
                goto LABEL_172;
              ++v159;
            }
            if ( v160 )
              v15 = v160;
          }
        }
      }
LABEL_172:
      v145 = v198;
      *((_DWORD *)v198 + 12) = v143;
      if ( *(_QWORD *)v15 != -4096 )
        --*((_DWORD *)v145 + 13);
      *(_QWORD *)v15 = v19;
      *(_QWORD *)(v15 + 8) = v20;
LABEL_15:
      v27 = operator new(0x18u);
      v28 = sub_A5DBD0(a1[6], v17, 0);
      *(_QWORD *)(v27 + 8) = 0;
      v15 = v28;
      v29 = v193;
      *(_QWORD *)v27 = 0;
      *(_QWORD *)(v27 + 16) = v15;
      LOBYTE(v195) = *(_BYTE *)(v29 + 73);
      *(_BYTE *)(v27 + 12) = 2 * ((unsigned __int8)v195 >> 5 == 3);
      v30 = v194;
      if ( v202 == (char *)v194 )
      {
        v97 = v202 - (_BYTE *)src;
        v98 = (v202 - (_BYTE *)src) >> 3;
        if ( v98 == 0xFFFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v99 = 1;
        if ( v98 )
          v99 = (v202 - (_BYTE *)src) >> 3;
        v100 = __CFADD__(v99, v98);
        v101 = v99 + v98;
        if ( v100 )
        {
          v102 = 0x7FFFFFFFFFFFFFF8LL;
        }
        else
        {
          if ( v101 > 0xFFFFFFFFFFFFFFFLL )
            v101 = 0xFFFFFFFFFFFFFFFLL;
          v102 = 8 * v101;
        }
        v103 = (char *)operator new(v102);
        *(_QWORD *)&v103[v97] = v27;
        v104 = v103;
        if ( v97 > 0 )
          v104 = (char *)memcpy(v103, src, v97);
        v194 = (__int64 *)&v104[v97 + 8];
        if ( src )
        {
          v195 = (__int64)v104;
          operator delete(src, v202 - (_BYTE *)src);
          v104 = (char *)v195;
        }
        src = v104;
        v202 = &v104[v102];
        goto LABEL_9;
      }
      *v194 = v27;
      v13 += 128;
      v194 = v30 + 1;
      if ( v16 == v13 )
      {
LABEL_17:
        v10 = v199;
        if ( v194 != src )
          sub_B7C4F0(v193, src, ((char *)v194 - (_BYTE *)src) >> 3);
        v14 = v199[1];
LABEL_20:
        if ( v14 )
        {
          v15 = v203;
          LOBYTE(v195) = 0;
          LOBYTE(v199) = v203 != 0;
          v31 = nullptr;
          if ( v193 )
            v31 = (__int64 *)(v193 + 64);
          v200 = v193 + 64;
          v32 = 0;
          v194 = v31;
          while ( 1 )
          {
            while ( 1 )
            {
              v33 = (char *)*v10 + 128 * v32;
              if ( (*((_WORD *)v33 + 58) & 0x6A0) == 0 && (v32 || !(_BYTE)v199) )
                break;
              if ( ++v32 >= (unsigned __int64)v10[1] )
                goto LABEL_38;
            }
            v34 = sub_B54250(a1[6], 0);
            sub_B68340(v34, v194);
            v35 = haystack;
            v36 = *(_QWORD *)(a1[6] + 17504LL);
            if ( *((_QWORD *)v33 + 3) )
              v35 = *((const char **)v33 + 2);
            v192.m128i_i64[0] = (__int64)v35;
            v37 = 0;
            if ( v35 )
              v37 = strlen(v35);
            v192.m128i_i64[1] = v37;
            *(_QWORD *)(v34 + 40) = sub_6D2E30(v36, (const void *)v192.m128i_i64[0], v37);
            v38 = sub_6E7240(a1, v33 + 64, 2);
            v15 = v38 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v38 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
              goto LABEL_38;
            *(_QWORD *)(v34 + 48) = v38;
            if ( (get_tinfo_property(*((_QWORD *)v33 + 8), 2) & 0xF) == 0xE )
            {
              v76 = (void *)*(unsigned __int8 *)(get_tinfo_property(*((_QWORD *)v33 + 8), 312) + 1);
              if ( (_BYTE)v76 )
              {
                v214 = sub_A73FE0(a1[6], *(_QWORD *)(*(_QWORD *)(a1[6] + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
                if ( v214 > 0x40 )
                {
                  p_ptr = &v213;
                  sub_21E1730(&v213, v76, 0);
                }
                else
                {
                  v213 = v76;
                  p_ptr = &v213;
                }
                v77 = sub_ECAC60(32, a1[6], 8);
                sub_BE8CC0(v77, a1[6], p_ptr, *(_QWORD *)(a1[6] + 18720LL), 0);
                v78 = v214;
                v216 = v214;
                if ( v214 > 0x40 )
                {
                  sub_21E17D0(&v215);
                  v78 = v216;
                  v79 = v215;
                }
                else
                {
                  v79 = v213;
                  v215 = v213;
                }
                v80 = a1[6];
                v223 = (__int64)v79;
                v224[1] = 1;
                v224[0] = v78;
                p_ptr = &ptr;
                v216 = 0;
                ptr = &dword_0 + 2;
                v81 = sub_BE5EE0(v80, v77, &ptr);
                if ( (unsigned int)ptr > 1 )
                  sub_A2BBA0(p_ptr);
                if ( v216 > 0x40 && v215 )
                  operator delete[](v215);
                if ( (~*(_BYTE *)(v34 + 68) & 0xC) != 0 && (*(_BYTE *)(v34 + 68) & 0xC) != 0 )
                {
                  v184 = sub_B685F0(v34);
                  v187 = *(_QWORD *)(v184 + 2352);
                  *(_QWORD *)(v184 + 2432) += 16LL;
                  v188 = v184;
                  v189 = (_QWORD *)((v187 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                  v190 = (__int64)(v189 + 2);
                  if ( *(_QWORD *)(v188 + 2360) >= (unsigned __int64)(v189 + 2) && v187 )
                    *(_QWORD *)(v188 + 2352) = v190;
                  else
                    v189 = (_QWORD *)sub_6CF090(v188 + 2352, 16, 3, v190, v185, v186);
                  v191 = *(_QWORD *)(v34 + 72);
                  v189[1] = v81;
                  *v189 = v191;
                  *(_QWORD *)(v34 + 72) = v189;
                }
                else
                {
                  *(_QWORD *)(v34 + 72) = v81;
                }
                *(_BYTE *)(v34 + 68) |= 1u;
                if ( v214 > 0x40 && v213 )
                  operator delete[](v213);
              }
            }
            *(_BYTE *)(v34 + 29) &= 0x9Fu;
            if ( !(_BYTE)v195 )
            {
              v68 = sub_B6C590(40, a1[6], v194, 0);
              v69 = v194 == nullptr;
              *(_QWORD *)v68 = off_2BD8B30;
              if ( v69
                || (v70 = sub_B68470(v194), v71 = *(_QWORD *)(v70 + 8) & 7LL, (*(_QWORD *)(v70 + 8) & 7) == 0)
                || *(char *)(v70 + 29) < 0
                && (v195 = *(_QWORD *)(v70 + 8) & 7LL, v72 = sub_B688D0(v70), v71 = v195, !v72) )
              {
                v71 = 0;
              }
              v73 = v194;
              *(_QWORD *)(v68 + 8) = v71;
              *(_QWORD *)(v68 + 16) = (unsigned __int64)v73 & 0xFFFFFFFFFFFFFFFBLL;
              *(_QWORD *)(v68 + 24) = *(_QWORD *)(v68 + 24) & 0xFFFF000000000000LL | 0x605900000000LL;
              v74 = sub_B68380(89);
              *(_BYTE *)(v68 + 32) &= 0xF8u;
              *(_WORD *)(v68 + 30) = v74 & 0x3FFF | *(_WORD *)(v68 + 30) & 0xC000;
              if ( unk_2CAD3F0 )
                sub_B67B90(89);
              *(_BYTE *)(v68 + 29) &= 0x9Fu;
              *(_DWORD *)(v68 + 36) = 0;
              v75 = v200;
              *(_QWORD *)v68 = &off_2BD8BF0;
              sub_B70D90(v75, v68);
            }
            sub_B70D90(v200, v34);
            v40 = *(_QWORD *)v33;
            v41 = 0;
            v42 = *((_DWORD *)v198 + 8);
            v43 = (__int64)(v198 + 1);
            if ( !v42 )
              goto LABEL_213;
            v44 = *((_QWORD *)v198 + 2);
            LODWORD(v45) = (v42 - 1) & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
            v46 = (__int64 *)(v44 + 16LL * (unsigned int)v45);
            v47 = *v46;
            if ( v34 != *v46 )
              break;
LABEL_37:
            LOBYTE(v195) = 1;
            if ( ++v32 >= (unsigned __int64)v10[1] )
              goto LABEL_38;
          }
          v39 = 1;
          v15 = 0;
          while ( v47 != -4096 )
          {
            if ( v47 == -8192 && !v15 )
              v15 = (unsigned __int64)v46;
            LODWORD(v195) = v39 + 1;
            v45 = (v42 - 1) & ((_DWORD)v45 + (_DWORD)v39);
            v46 = (__int64 *)(v44 + 16 * v45);
            v47 = *v46;
            if ( v34 == *v46 )
              goto LABEL_37;
            v39 = (unsigned int)v195;
          }
          v41 = 2 * v42;
          if ( !v15 )
            v15 = (unsigned __int64)v46;
          LODWORD(v195) = *((_DWORD *)v198 + 6);
          v151 = v195 + 1;
          if ( 4 * ((int)v195 + 1) >= 3 * v42 )
          {
LABEL_213:
            sub_6E52C0((__int64)(v198 + 1), v41, v15, v41, v43, v39);
            v15 = 0;
            v170 = *((_DWORD *)v198 + 8);
            LODWORD(v195) = *((_DWORD *)v198 + 6);
            v151 = v195 + 1;
            if ( v170 )
            {
              v171 = v170 - 1;
              v172 = *((_QWORD *)v198 + 2);
              v173 = (v170 - 1) & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
              v15 = v172 + 16LL * v173;
              v174 = *(_QWORD *)v15;
              if ( v34 != *(_QWORD *)v15 )
              {
                v175 = 1;
                v176 = 0;
                while ( v174 != -4096 )
                {
                  if ( !v176 && v174 == -8192 )
                    v176 = v15;
                  v173 = v171 & (v173 + v175);
                  v15 = v172 + 16LL * v173;
                  v174 = *(_QWORD *)v15;
                  if ( v34 == *(_QWORD *)v15 )
                    goto LABEL_191;
                  ++v175;
                }
                if ( v176 )
                  v15 = v176;
              }
            }
          }
          else
          {
            v152 = v42 - *((_DWORD *)v198 + 7) - v151;
            if ( v42 >> 3 >= (unsigned int)v152 )
            {
              sub_6E52C0((__int64)(v198 + 1), v42, v15, v152, v43, v39);
              v15 = 0;
              v177 = *((_DWORD *)v198 + 8);
              LODWORD(v195) = *((_DWORD *)v198 + 6);
              v151 = v195 + 1;
              if ( v177 )
              {
                v178 = v177 - 1;
                v179 = *((_QWORD *)v198 + 2);
                v180 = 1;
                v181 = 0;
                v182 = v178 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
                v15 = v179 + 16LL * v182;
                v183 = *(_QWORD *)v15;
                if ( v34 != *(_QWORD *)v15 )
                {
                  while ( v183 != -4096 )
                  {
                    if ( !v181 && v183 == -8192 )
                      v181 = v15;
                    v182 = v178 & (v182 + v180);
                    v15 = v179 + 16LL * v182;
                    v183 = *(_QWORD *)v15;
                    if ( v34 == *(_QWORD *)v15 )
                      goto LABEL_191;
                    ++v180;
                  }
                  if ( v181 )
                    v15 = v181;
                }
              }
            }
          }
LABEL_191:
          v153 = v198;
          *((_DWORD *)v198 + 6) = v151;
          if ( *(_QWORD *)v15 != -4096 )
            --*((_DWORD *)v153 + 7);
          *(_QWORD *)v15 = v34;
          *(_QWORD *)(v15 + 8) = v40;
          goto LABEL_37;
        }
LABEL_38:
        if ( !v203 )
          goto LABEL_39;
        v106 = (void ***)get_tinfo_property(v212, 309);
        v107 = *v106;
        v199 = &(*v106)[16 * (_QWORD)v106[1]];
        if ( v199 == v107 )
          goto LABEL_39;
        v108 = 0;
        if ( v193 )
          v108 = v193 + 64;
        v211 = v193 + 64;
        v210 = v108;
        while ( 1 )
        {
LABEL_127:
          if ( (get_tinfo_property(v107[8], 2) & 0xF) != 0xA )
            goto LABEL_156;
          v215 = nullptr;
          v215 = (void *)get_tinfo_property(v107[8], 9);
          if ( (get_tinfo_property(v215, 2) & 0xF) == 0xC )
            break;
          v107 += 16;
          clear_tinfo_t(&v215);
          if ( v107 == v199 )
            goto LABEL_39;
        }
        v109 = haystack;
        v110 = *(_QWORD *)(a1[6] + 17504LL);
        if ( v107[3] )
          v109 = (const char *)v107[2];
        v196 = v109;
        v111 = 0;
        if ( v109 )
          v111 = strlen(v109);
        v197 = v111;
        v192.m128i_i64[0] = sub_6D2E30(v110, v196, v111);
        v205 = &v215;
        v112 = sub_6E7E80(a1, &v215, v203, 2);
        v113 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v192), (__m128i)(unsigned __int64)v112);
        if ( (v112 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        {
          v168 = (const char *)dstr_tinfo(v205);
          sub_6BB730(a1, v193, (__int64)"Could not make type from %s", v168);
          goto LABEL_208;
        }
        v114 = a1[6];
        v192 = v113;
        v115 = sub_B740D0(v114, 0);
        v200 = v115;
        sub_B68340(v115, v210);
        v116 = *(_DWORD *)(v115 + 81);
        v117 = _mm_load_si128(&v192);
        *(_BYTE *)(v115 + 29) &= 0x9Fu;
        v192.m128i_i32[0] = v116;
        v116 &= 0xFCFFF81F;
        BYTE1(v116) |= 4u;
        *(__m128i *)(v115 + 40) = v117;
        *(_DWORD *)(v115 + 81) = v116;
        v119 = (__int64 *)get_tinfo_property(v215, 311);
        ptr = v224;
        p_ptr = (void **)v224;
        v223 = 0x600000000LL;
        if ( v119[1] )
        {
          v120 = *v119;
          v121 = v115 + 72;
          v122 = nullptr;
          if ( v115 )
            v122 = (__int64 *)(v115 + 72);
          v195 = v115 + 72;
          v123 = *(_QWORD *)(v120 + 24);
          v194 = v122;
          if ( !v123 )
          {
            v124 = haystack;
LABEL_139:
            v125 = haystack;
            v126 = 0;
            v127 = 0;
            if ( !haystack )
              goto LABEL_141;
LABEL_140:
            v192 = (__m128i)(unsigned __int64)v124;
            v127 = strlen(v124);
            v125 = (const char *)v192.m128i_i64[0];
            goto LABEL_141;
          }
          v136 = *(const char **)(v120 + 16);
          if ( !strcmp(v136, "this") || !strcmp(v136, "This") )
          {
            v123 = 0;
            goto LABEL_145;
          }
          v123 = 0;
          while ( 1 )
          {
            v124 = *(const char **)(v120 + 16);
            v126 = 0;
            v127 = 0;
            v125 = v124;
            if ( v124 )
              goto LABEL_140;
LABEL_141:
            v128 = a1[6];
            v192.m128i_i64[0] = (__int64)v125;
            v192.m128i_i64[1] = v127;
            v129 = sub_B50900(v128, 0, v118, v121, v125, v126);
            sub_B68340(v129, v194);
            *(_QWORD *)(v129 + 40) = sub_6D2E30(
                                       *(_QWORD *)(a1[6] + 17504LL),
                                       (const void *)v192.m128i_i64[0],
                                       v192.m128i_u64[1]);
            v130 = sub_6E7240(a1, v120 + 64, 2);
            if ( (v130 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
              break;
            *(_QWORD *)(v129 + 48) = v130;
            sub_B4F610(v129, 0);
            sub_B70D90(v195, v129);
            v131 = (unsigned int)v223;
            v132 = (unsigned int)v223 + 1LL;
            if ( HIDWORD(v223) < v132 )
            {
              sub_22134E0(&ptr, p_ptr, v132, 8);
              v131 = (unsigned int)v223;
            }
            v118 = ptr;
            *((_QWORD *)ptr + v131) = v129;
            LODWORD(v223) = v223 + 1;
LABEL_145:
            if ( ++v123 >= (unsigned __int64)v119[1] )
              goto LABEL_150;
            v124 = haystack;
            v121 = *v119 + 80 * v123;
            v120 = v121;
            if ( !*(_QWORD *)(v121 + 24) )
              goto LABEL_139;
          }
          v133 = (const char *)dstr_tinfo(v205);
          sub_6BB730(a1, v193, (__int64)"Could not make type from %s", v133);
        }
LABEL_150:
        v135 = sub_B52330(v200);
        if ( v134 != (_DWORD)v223 )
        {
          v169 = (const char *)dstr_tinfo(v205);
          sub_6BB730(a1, v193, (__int64)"Could not make type from %s", v169);
          if ( ptr != p_ptr )
            free(ptr);
LABEL_208:
          clear_tinfo_t(v205);
LABEL_39:
          v48 = *(_QWORD *)(v193 + 48);
          if ( v48 )
            v49 = v48 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v49 = sub_A56D30(a1[6], v193, v15);
          sub_6D4530((__int64)a1, v49);
          v50 = (_QWORD *)operator new(0x18u);
          v51 = v198;
          v52 = a1[43];
          *v50 = 0;
          v53 = v50;
          v54 = v193;
          v53[2] = v51;
          v53[1] = v54;
          if ( v52 )
          {
            v55 = a1[41];
            v56 = *(_QWORD **)(a1[40] + 8 * (v54 % v55));
            v57 = v54 % v55;
            v58 = v54 % v55;
            if ( !v56 )
              goto LABEL_92;
            v59 = (_QWORD *)*v56;
            if ( *(_QWORD *)(*v56 + 8LL) != v193 )
            {
              while ( 1 )
              {
                v60 = (_QWORD *)*v59;
                if ( !*v59 )
                  break;
                v56 = v59;
                if ( v60[1] % v55 != v57 )
                  break;
                v59 = (_QWORD *)*v59;
                if ( v60[1] == v193 )
                  goto LABEL_47;
              }
LABEL_92:
              if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                      (std::__detail::_Prime_rehash_policy *)(a1 + 44),
                                      v55,
                                      v52,
                                      1u) )
              {
                v87 = v82;
                if ( v82 == 1 )
                {
                  v89 = a1 + 46;
                  a1[46] = 0;
                  v85 = (char *)(a1 + 46);
                }
                else
                {
                  if ( v82 >> 60 )
                  {
                    if ( v82 >> 61 )
                      sub_2E883E(a1 + 44, v55, v82, v83, v84);
                    std::__throw_bad_alloc();
                  }
                  v88 = 8 * v82;
                  v85 = (char *)operator new(8 * v82);
                  memset(v85, 0, v88);
                  v89 = a1 + 46;
                }
                v90 = (_QWORD *)a1[42];
                v91 = 0;
                a1[42] = 0;
                while ( v90 )
                {
                  while ( 1 )
                  {
                    v92 = v90;
                    v90 = (_QWORD *)*v90;
                    v93 = v92[1] % v87;
                    v94 = &v85[8 * v93];
                    if ( !*(_QWORD *)v94 )
                      break;
                    *v92 = **(_QWORD **)v94;
                    **(_QWORD **)v94 = v92;
                    if ( !v90 )
                      goto LABEL_105;
                  }
                  *v92 = a1[42];
                  a1[42] = v92;
                  *(_QWORD *)v94 = a1 + 42;
                  if ( *v92 )
                    *(_QWORD *)&v85[8 * v91] = v92;
                  v91 = v93;
                }
LABEL_105:
                v95 = (_QWORD *)a1[40];
                if ( v95 != v89 )
                  operator delete(v95, 8LL * a1[41]);
                v96 = v193;
                a1[41] = v87;
                a1[40] = v85;
                v58 = v96 % v87;
              }
              else
              {
                v85 = (char *)a1[40];
              }
              v86 = &v85[8 * v58];
              if ( *(_QWORD *)v86 )
              {
                *v53 = **(_QWORD **)v86;
                **(_QWORD **)v86 = v53;
              }
              else
              {
                v141 = a1[42];
                a1[42] = v53;
                *v53 = v141;
                if ( v141 )
                {
                  *(_QWORD *)&v85[8 * (*(_QWORD *)(v141 + 8) % a1[41])] = v53;
                  v86 = (char *)(8 * v58 + a1[40]);
                }
                *(_QWORD *)v86 = a1 + 42;
              }
              ++a1[43];
LABEL_51:
              sub_6D3180((__int64)a1, v208, v193, 2);
              if ( src )
                operator delete(src, v202 - (_BYTE *)src);
              clear_tinfo_t(v209);
              v61 = (char *)v217;
              if ( v217 )
              {
                v62 = v218;
                if ( (_QWORD)v218 )
                {
                  v63 = 0;
                  do
                  {
                    v64 = &v61[128 * v63];
                    clear_tinfo_t(v64 + 64);
                    v65 = *((void **)v64 + 5);
                    if ( v65 )
                    {
                      *((_QWORD *)v64 + 6) = 0;
                      qfree(v65);
                    }
                    v66 = *((void **)v64 + 2);
                    if ( v66 )
                    {
                      *((_QWORD *)v64 + 3) = 0;
                      qfree(v66);
                    }
                    ++v63;
                    v61 = (char *)v217;
                  }
                  while ( v62 != v63 );
                }
                goto LABEL_61;
              }
              return v225 - __readfsqword(0x28u);
            }
LABEL_47:
            if ( !v56 || !*v56 )
              goto LABEL_92;
          }
          else
          {
            v67 = (_QWORD *)a1[42];
            if ( !v67 )
            {
LABEL_91:
              v55 = a1[41];
              v58 = v193 % v55;
              goto LABEL_92;
            }
            while ( v193 != v67[1] )
            {
              v67 = (_QWORD *)*v67;
              if ( !v67 )
                goto LABEL_91;
            }
          }
          if ( v53 )
            sub_6CFAA0(v53);
          goto LABEL_51;
        }
        if ( v134 )
        {
          v137 = v200;
          v207 = v134;
          v138 = v134;
          v206 = ptr;
          v139 = ptr;
          v140 = sub_B685F0(v200);
          sub_B58700(v137, v140, v139, v138, v135);
        }
        sub_B70D90(v211, v200);
        if ( ptr != p_ptr )
          free(ptr);
        clear_tinfo_t(v205);
LABEL_156:
        v107 += 16;
        if ( v107 == v199 )
          goto LABEL_39;
        goto LABEL_127;
      }
    }
  }
  v61 = (char *)v217;
  if ( v217 )
  {
    v146 = v218;
    if ( (_QWORD)v218 )
    {
      v147 = 0;
      do
      {
        v148 = &v61[128 * v147];
        clear_tinfo_t(v148 + 64);
        v149 = *((void **)v148 + 5);
        if ( v149 )
        {
          *((_QWORD *)v148 + 6) = 0;
          qfree(v149);
        }
        v150 = *((void **)v148 + 2);
        if ( v150 )
        {
          *((_QWORD *)v148 + 3) = 0;
          qfree(v150);
        }
        ++v147;
        v61 = (char *)v217;
      }
      while ( v146 != v147 );
    }
LABEL_61:
    *(_QWORD *)&v218 = 0;
    qfree(v61);
  }
  return v225 - __readfsqword(0x28u);
}

