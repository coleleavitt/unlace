__int64 __fastcall sub_5D6C80(__int64 a1, const char *a2, __int64 a3, char a4)
{
  unsigned __int8 v4; // bp
  _QWORD *v7; // r13
  void *v8; // rax
  char *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  char *v12; // rbp
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rdx
  char v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int32 v23; // eax
  __int64 v24; // r14
  unsigned __int64 v25; // r13
  void *v26; // r15
  int v27; // edi
  int v28; // ecx
  int v29; // edx
  int v30; // edi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  void **v33; // rsi
  size_t v34; // r13
  size_t v35; // r13
  __int64 v36; // r14
  void **v37; // rsi
  __int64 v38; // r13
  void *v39; // rax
  unsigned __int8 v40; // al
  __int64 idati; // rax
  __int64 v42; // r14
  char *v43; // rax
  __int128 v44; // xmm0
  void *v45; // r14
  char *i; // rbp
  size_t v47; // r15
  char *v48; // rbp
  __int64 v49; // r12
  size_t v50; // r15
  void *v51; // rax
  void *v52; // rax
  int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 j; // rdx
  char v58; // al
  size_t v59; // rax
  const void *v60; // r9
  size_t v61; // r8
  char *v62; // rdi
  __int64 v63; // r13
  __int64 v64; // r12
  char *v65; // rbp
  void *v66; // rdi
  void *v67; // rdi
  void *v68; // rdi
  size_t v69; // rdx
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  void *v72; // r14
  __m128i *v73; // rsi
  char *v74; // rax
  void *v75; // r15
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __m128i si128; // xmm0
  char *v79; // r13
  void *v80; // rax
  size_t v81; // r15
  void **v82; // rsi
  __int64 v83; // r13
  size_t v84; // r15
  void *v85; // rax
  void *v86; // rax
  __int64 *v87; // r14
  __int64 v88; // rax
  size_t v89; // r13
  bool v90; // zf
  _QWORD *v91; // r14
  __int64 v92; // rax
  __int64 v93; // r12
  __int64 v94; // r13
  const char *v95; // rdx
  char *v96; // r15
  const char *v97; // rax
  size_t v98; // rax
  const char *v99; // r8
  size_t v100; // r10
  void *v101; // rdi
  void *v102; // rdx
  unsigned __int64 v103; // r13
  _QWORD *v104; // r15
  void *v105; // rdi
  void *v106; // rdi
  void *v107; // rax
  char *v108; // rdi
  char *v109; // r14
  __int64 v110; // r13
  char *v111; // r12
  char *v112; // rbp
  void *v113; // rdi
  void *v114; // rdi
  __int64 v115; // r15
  __int64 k; // r13
  __int64 v117; // rax
  char *v118; // r15
  __int64 v119; // r13
  int tinfo_property; // eax
  char *v121; // rdi
  __int64 v122; // r15
  __int64 ii; // rdx
  char v124; // al
  const char *v125; // r15
  size_t v126; // rax
  size_t v127; // r14
  __int64 v128; // rcx
  const char *v129; // rdx
  const char *v130; // r15
  __int64 v131; // r14
  size_t v132; // rax
  size_t v133; // r8
  __int64 v134; // r15
  __int64 jj; // r14
  char *v136; // rdi
  void *v137; // r13
  void *v138; // r12
  char *v139; // rbp
  void *v140; // rdi
  void *v141; // rdi
  void *v142; // rdx
  void *v143; // rdi
  void *v144; // rdx
  void *v145; // rdi
  __int64 v146; // rax
  void *v147; // rax
  void *v148; // r15
  char *v149; // rax
  __int64 v150; // rcx
  char *v151; // r8
  __int128 v152; // xmm0
  char *v153; // r13
  __int64 v154; // r15
  char *v155; // r13
  __int64 v156; // r15
  void *v157; // rax
  void *v158; // rax
  void *v159; // rax
  const char *v160; // [rsp+0h] [rbp-238h]
  void *v161; // [rsp+8h] [rbp-230h]
  char *v162; // [rsp+8h] [rbp-230h]
  const char *v163; // [rsp+8h] [rbp-230h]
  _BYTE *v164; // [rsp+8h] [rbp-230h]
  __int8 v165; // [rsp+8h] [rbp-230h]
  _BYTE *v166; // [rsp+8h] [rbp-230h]
  void *v167; // [rsp+8h] [rbp-230h]
  void *v168; // [rsp+8h] [rbp-230h]
  void *v169; // [rsp+8h] [rbp-230h]
  size_t v171; // [rsp+18h] [rbp-220h]
  size_t v172; // [rsp+18h] [rbp-220h]
  size_t v173; // [rsp+18h] [rbp-220h]
  size_t v174; // [rsp+18h] [rbp-220h]
  __int64 v175; // [rsp+18h] [rbp-220h]
  size_t v176; // [rsp+18h] [rbp-220h]
  size_t v177; // [rsp+18h] [rbp-220h]
  __int64 v178; // [rsp+18h] [rbp-220h]
  size_t v179; // [rsp+18h] [rbp-220h]
  size_t v180; // [rsp+18h] [rbp-220h]
  const void *v181; // [rsp+20h] [rbp-218h]
  const char *v182; // [rsp+20h] [rbp-218h]
  char *v183; // [rsp+20h] [rbp-218h]
  char *v184; // [rsp+20h] [rbp-218h]
  size_t v185; // [rsp+28h] [rbp-210h]
  int m; // [rsp+28h] [rbp-210h]
  __int64 v187; // [rsp+28h] [rbp-210h]
  __int64 v188; // [rsp+28h] [rbp-210h]
  size_t v189; // [rsp+30h] [rbp-208h]
  size_t v190; // [rsp+38h] [rbp-200h]
  size_t na; // [rsp+48h] [rbp-1F0h]
  size_t n; // [rsp+48h] [rbp-1F0h]
  _QWORD v193[2]; // [rsp+50h] [rbp-1E8h] BYREF
  void *v194; // [rsp+60h] [rbp-1D8h] BYREF
  __int128 v195; // [rsp+68h] [rbp-1D0h]
  __int128 v196; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v197; // [rsp+90h] [rbp-1A8h] BYREF
  int v198; // [rsp+98h] [rbp-1A0h]
  char v199; // [rsp+9Ch] [rbp-19Ch]
  char v200; // [rsp+9Dh] [rbp-19Bh]
  _QWORD v201[4]; // [rsp+A0h] [rbp-198h] BYREF
  int v202; // [rsp+C0h] [rbp-178h]
  void *v203; // [rsp+D0h] [rbp-168h] BYREF
  void *v204[2]; // [rsp+D8h] [rbp-160h]
  size_t v205[3]; // [rsp+E8h] [rbp-150h] BYREF
  size_t v206[2]; // [rsp+100h] [rbp-138h]
  __int64 v207; // [rsp+110h] [rbp-128h] BYREF
  __int64 v208; // [rsp+118h] [rbp-120h]
  void *v209; // [rsp+120h] [rbp-118h] BYREF
  void *src[2]; // [rsp+128h] [rbp-110h]
  __int128 v211; // [rsp+138h] [rbp-100h]
  void *ptr; // [rsp+148h] [rbp-F0h]
  __int128 v213; // [rsp+150h] [rbp-E8h]
  __int64 v214; // [rsp+160h] [rbp-D8h] BYREF
  int v215; // [rsp+168h] [rbp-D0h]
  __m128i v216[8]; // [rsp+170h] [rbp-C8h] BYREF
  unsigned __int64 v217; // [rsp+1F8h] [rbp-40h]

  v4 = *(_BYTE *)(a3 + 186) | a4 & 0xC0;
  v160 = a2;
  v217 = __readfsqword(0x28u);
  switch ( v4 & 0xF )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      a2 = (const char *)v4;
      create_tinfo(v160, v4, 7, 0);
      goto LABEL_3;
    case 0xA:
      v17 = 0;
      if ( (~v4 & 0x30) == 0 )
        v17 = *(_BYTE *)(a3 + 56);
      v216[0].m128i_i64[0] = 0;
      v209 = nullptr;
      v196 = 0;
      copy_tinfo_t((char *)&v196 + 8);
      v197 = 0;
      copy_tinfo_t(&v197);
      v199 = v17;
      v198 = 0;
      v200 = 0;
      clear_tinfo_t(&v209);
      clear_tinfo_t(v216);
      v18 = *(_QWORD *)(a3 + 48);
      v200 = *(_BYTE *)(a3 + 60);
      sub_5D6C80(a1, &v196, v18, 1);
      v19 = *(_QWORD *)(a3 + 32);
      if ( v19 )
      {
        sub_5D6C80(a1, &v197, v19, 1);
        v20 = *(_DWORD *)(a3 + 176);
        v200 |= 0x80u;
        v198 = v20;
      }
      a2 = (const char *)v4;
      if ( !(unsigned __int8)create_tinfo(v160, v4, 10, &v196) )
      {
        if ( !under_debugger )
          interr(1563);
        goto LABEL_235;
      }
      clear_tinfo_t(&v197);
      clear_tinfo_t((char *)&v196 + 8);
      clear_tinfo_t(&v196);
LABEL_3:
      v7 = *(_QWORD **)(a3 + 16);
      if ( !v7 )
        goto LABEL_15;
      v194 = nullptr;
      v195 = 0;
      v8 = (void *)v7[1];
      v161 = v8;
      if ( !v8 )
        goto LABEL_5;
      v42 = v7[1];
      v43 = (char *)qalloc_or_throw(48LL * (_QWORD)v8, a2);
      *((_QWORD *)&v195 + 1) = v42;
      v44 = 0;
      v45 = nullptr;
      v194 = v43;
      for ( i = v43; ; i = (char *)v194 )
      {
        v48 = &i[48 * (_QWORD)v45];
        v49 = *v7 + 48LL * (_QWORD)v45;
        *(_QWORD *)v48 = 0;
        *(_OWORD *)(v48 + 8) = v44;
        v50 = *(_QWORD *)(v49 + 8);
        if ( v50 )
        {
          v51 = (void *)qalloc_or_throw(*(_QWORD *)(v49 + 8), a2);
          *((_QWORD *)v48 + 2) = v50;
          *(_QWORD *)v48 = v51;
          a2 = *(const char **)v49;
          memcpy(v51, *(const void **)v49, v50);
          *((_QWORD *)v48 + 1) = v50;
          v44 = 0;
        }
        *((_QWORD *)v48 + 3) = 0;
        *((_OWORD *)v48 + 2) = v44;
        v47 = *(_QWORD *)(v49 + 32);
        if ( v47 )
          break;
        v45 = (char *)v45 + 1;
        if ( v161 == v45 )
          goto LABEL_66;
LABEL_62:
        ;
      }
      v52 = (void *)qalloc_or_throw(*(_QWORD *)(v49 + 32), a2);
      *((_QWORD *)v48 + 3) = v52;
      v45 = (char *)v45 + 1;
      *((_QWORD *)v48 + 5) = v47;
      a2 = *(const char **)(v49 + 24);
      memcpy(v52, a2, v47);
      *((_QWORD *)v48 + 4) = v47;
      v44 = 0;
      if ( v161 != v45 )
        goto LABEL_62;
LABEL_66:
      *(_QWORD *)&v195 = v161;
LABEL_5:
      if ( !(unsigned __int8)set_tinfo_attrs(v160, &v194) )
      {
        if ( !under_debugger )
          interr(908);
        goto LABEL_235;
      }
      v9 = (char *)v194;
      if ( v194 )
      {
        v10 = v195;
        if ( (_QWORD)v195 )
        {
          v11 = 0;
          do
          {
            v12 = &v9[48 * v11];
            v13 = *((void **)v12 + 3);
            if ( v13 )
            {
              *((_QWORD *)v12 + 4) = 0;
              qfree(v13);
            }
            v14 = *(void **)v12;
            if ( *(_QWORD *)v12 )
            {
              *((_QWORD *)v12 + 1) = 0;
              qfree(v14);
            }
            ++v11;
            v9 = (char *)v194;
          }
          while ( v10 != v11 );
        }
        *(_QWORD *)&v195 = 0;
        qfree(v9);
      }
LABEL_15:
      v15 = *(unsigned __int8 *)(a3 + 185);
      if ( (_BYTE)v15 && (a4 & 1) == 0 )
        return set_tinfo_property4(v160, 26, v15, 0, 0, 1);
      else
        return v217 - __readfsqword(0x28u);
    case 0xB:
      v21 = *(_QWORD *)(a3 + 56);
      v22 = *(_QWORD *)(a3 + 48);
      v193[0] = 0;
      v193[1] = v21;
      sub_5D6C80(a1, v193, v22, v4 | 1u);
      a2 = (const char *)v4;
      if ( (unsigned __int8)create_tinfo(v160, v4, 11, v193) )
      {
        clear_tinfo_t(v193);
        goto LABEL_3;
      }
      if ( !under_debugger )
        interr(1188);
      goto LABEL_235;
    case 0xC:
      v23 = *(_DWORD *)(a3 + 68);
      memset(v216, 0, 60);
      memset(&v216[4], 0, 24);
      if ( (v23 & 0xFFFFFF0F) != 0 || v23 == 192 )
      {
        v216[1].m128i_i32[3] = v23;
        LOBYTE(v23) = -64;
      }
      v24 = *(_QWORD *)(a3 + 24);
      v216[5].m128i_i8[8] = v23;
      if ( v24 || (a2 = *(const char **)(a3 + 48), v27 = 0, (v24 = *((_QWORD *)a2 + 3)) != 0) )
      {
        v25 = *(_QWORD *)(v24 + 8);
        v26 = nullptr;
        if ( v25 )
        {
          v26 = (void *)qalloc_or_throw(8 * v25, a2);
          memcpy(v26, *(const void **)v24, 8 * v25);
        }
        a2 = *(const char **)(a3 + 48);
        v27 = 1;
        v216[4].m128i_i64[0] = (__int64)v26;
        *(__m128i *)((char *)&v216[4] + 8) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      }
      v28 = *(_DWORD *)(a1 + 208);
      v29 = v27 | (*(_QWORD *)(a3 + 40) >> 15) & 6 | (*(int *)(a1 + 728) >> 12) & 8;
      if ( v28 == 3 )
      {
        v29 |= 0x10u;
        v30 = 0;
      }
      else
      {
        v30 = 32 * (v28 == 7);
      }
      v216[1].m128i_i32[2] = v29 | v30 | (4 * (v4 & 0x30)) | (*(_QWORD *)(a3 + 40) >> 20) & 0x200;
      sub_5D6C80(a1, &v216[2], a2, 1);
      copy_argloc(&v216[2].m128i_u64[1], *(_QWORD *)(a3 + 48) + 112LL);
      v31 = *(int *)(a3 + 64);
      v32 = v216[0].m128i_u64[1];
      v171 = v31;
      if ( v31 != v216[0].m128i_i64[1] )
      {
        v208 = 0;
        LODWORD(v203) = 0;
        v204[0] = nullptr;
        v204[1] = nullptr;
        v207 = 0;
        memset(v205, 0, sizeof(v205));
        *(_OWORD *)v206 = 0;
        if ( v31 < v216[0].m128i_i64[1] )
        {
          v103 = v31;
          do
          {
            v104 = (_QWORD *)(v216[0].m128i_i64[0] + 80 * v103);
            clear_tinfo_t(v104 + 8);
            v105 = (void *)v104[5];
            if ( v105 )
            {
              v104[6] = 0;
              qfree(v105);
            }
            v106 = (void *)v104[2];
            if ( v106 )
            {
              v104[3] = 0;
              qfree(v106);
            }
            ++v103;
            cleanup_argloc(v104);
          }
          while ( v103 < v32 );
          v216[0].m128i_i64[1] = v171;
        }
        else if ( (unsigned __int64)&v203 < v216[0].m128i_i64[0]
               || (unsigned __int64)&v203 >= v216[0].m128i_i64[0] + 80 * v216[1].m128i_i64[0] )
        {
          if ( v216[1].m128i_i64[0] < v31 )
          {
            v216[0].m128i_i64[0] = qvector_reserve(v216, v216[0].m128i_i64[0], v31, 80);
            v32 = v216[0].m128i_u64[1];
          }
          for ( ; v32 < v171; *(_DWORD *)(v83 + 72) = v208 )
          {
            v82 = &v203;
            v83 = v216[0].m128i_i64[0] + 80 * v32;
            *(_DWORD *)v83 = 0;
            copy_argloc(v83, &v203);
            *(_QWORD *)(v83 + 16) = 0;
            *(_OWORD *)(v83 + 24) = 0;
            v84 = v205[0];
            if ( v205[0] )
            {
              v85 = (void *)qalloc_or_throw(v205[0], (const char *)&v203);
              *(_QWORD *)(v83 + 16) = v85;
              *(_QWORD *)(v83 + 32) = v84;
              v82 = (void **)v204[1];
              memcpy(v85, v204[1], v84);
              *(_QWORD *)(v83 + 24) = v84;
            }
            *(_QWORD *)(v83 + 40) = 0;
            *(_OWORD *)(v83 + 48) = 0;
            v81 = v206[0];
            if ( v206[0] )
            {
              v86 = (void *)qalloc_or_throw(v206[0], (const char *)v82);
              *(_QWORD *)(v83 + 40) = v86;
              *(_QWORD *)(v83 + 56) = v81;
              memcpy(v86, (const void *)v205[2], v81);
              *(_QWORD *)(v83 + 48) = v81;
            }
            *(_QWORD *)(v83 + 64) = 0;
            copy_tinfo_t(v83 + 64);
            ++v32;
          }
          v216[0].m128i_i64[1] = v171;
        }
        else
        {
          v33 = &v203;
          LODWORD(v209) = 0;
          copy_argloc(&v209, &v203);
          v34 = v205[0];
          src[1] = nullptr;
          v211 = 0;
          if ( v205[0] )
          {
            v159 = (void *)qalloc_or_throw(v205[0], (const char *)&v203);
            v33 = (void **)v204[1];
            src[1] = v159;
            *((_QWORD *)&v211 + 1) = v34;
            memcpy(v159, v204[1], v34);
            *(_QWORD *)&v211 = v34;
          }
          v35 = v206[0];
          ptr = nullptr;
          v213 = 0;
          if ( v206[0] )
          {
            ptr = (void *)qalloc_or_throw(v206[0], (const char *)v33);
            *((_QWORD *)&v213 + 1) = v35;
            memcpy(ptr, (const void *)v205[2], v35);
            *(_QWORD *)&v213 = v35;
          }
          v214 = 0;
          copy_tinfo_t(&v214);
          v215 = v208;
          if ( v216[1].m128i_i64[0] < v171 )
            v216[0].m128i_i64[0] = qvector_reserve(v216, v216[0].m128i_i64[0], v171, 80);
          v36 = v216[0].m128i_i64[1];
          if ( v216[0].m128i_i64[1] < v171 )
          {
            do
            {
              v37 = &v209;
              v38 = v216[0].m128i_i64[0] + 80 * v36;
              *(_DWORD *)v38 = 0;
              copy_argloc(v38, &v209);
              *(_QWORD *)(v38 + 16) = 0;
              *(_OWORD *)(v38 + 24) = 0;
              if ( (_QWORD)v211 )
              {
                na = v211;
                v39 = (void *)qalloc_or_throw(v211, (const char *)&v209);
                *(_QWORD *)(v38 + 16) = v39;
                *(_QWORD *)(v38 + 32) = na;
                v37 = (void **)src[1];
                memcpy(v39, src[1], na);
                *(_QWORD *)(v38 + 24) = na;
              }
              *(_QWORD *)(v38 + 40) = 0;
              *(_OWORD *)(v38 + 48) = 0;
              if ( (_QWORD)v213 )
              {
                n = v213;
                v107 = (void *)qalloc_or_throw(v213, (const char *)v37);
                *(_QWORD *)(v38 + 40) = v107;
                *(_QWORD *)(v38 + 56) = n;
                memcpy(v107, ptr, n);
                *(_QWORD *)(v38 + 48) = n;
              }
              *(_QWORD *)(v38 + 64) = 0;
              copy_tinfo_t(v38 + 64);
              ++v36;
              *(_DWORD *)(v38 + 72) = v215;
            }
            while ( v171 != v36 );
          }
          v216[0].m128i_i64[1] = v171;
          clear_tinfo_t(&v214);
          if ( ptr )
          {
            *(_QWORD *)&v213 = 0;
            qfree(ptr);
          }
          if ( src[1] )
          {
            *(_QWORD *)&v211 = 0;
            qfree(src[1]);
          }
          cleanup_argloc(&v209);
        }
        clear_tinfo_t(&v207);
        if ( v205[2] )
        {
          v206[0] = 0;
          qfree((void *)v205[2]);
        }
        if ( v204[1] )
        {
          v205[0] = 0;
          qfree(v204[1]);
        }
        cleanup_argloc(&v203);
        v32 = v216[0].m128i_u64[1];
      }
      v53 = 0;
      v54 = 0;
      if ( v32 )
      {
        do
        {
          v55 = v216[0].m128i_i64[0] + 80 * v54;
          v56 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v54);
          sub_5D6C80(a1, v55 + 64, v56, 1);
          for ( j = v56; ; j = *(_QWORD *)(j + 48) )
          {
            v58 = *(_BYTE *)(j + 186) & 0xF;
            if ( v58 != 11 && v58 != 12 && v58 != 10 )
              break;
          }
          if ( *(_QWORD *)j
            && (v172 = *(_QWORD *)j, v59 = strlen(*(const char **)j), v60 = (const void *)v172, (v61 = v59) != 0) )
          {
            v68 = *(void **)(v55 + 16);
            v69 = v59 + 1;
            if ( *(_QWORD *)(v55 + 32) < v59 + 1 )
            {
              v185 = v59;
              v181 = (const void *)v172;
              v174 = v59 + 1;
              v70 = qvector_reserve(v55 + 16, v68, v69, 1);
              *(_QWORD *)(v55 + 16) = v70;
              v61 = v185;
              v68 = (void *)v70;
              v60 = v181;
              v69 = v174;
            }
            *(_QWORD *)(v55 + 24) = v69;
            v173 = v61;
            memmove(v68, v60, v61);
            *(_BYTE *)(*(_QWORD *)(v55 + 16) + v173) = 0;
          }
          else
          {
            *(_QWORD *)(v55 + 24) = 0;
          }
          copy_argloc(v55, v56 + 112);
          *(_DWORD *)(v55 + 72) = (*(_QWORD *)(v56 + 40) >> 24) & 0x10
                                | (*(_QWORD *)(v56 + 40) >> 26) & 2
                                | BYTE3(*(_QWORD *)(v56 + 40)) & 5
                                | (*(_QWORD *)(v56 + 40) >> 22) & 8;
          sub_5D6650(a1, v55 + 40, *(_DWORD *)(v56 + 188));
          v54 = ++v53;
        }
        while ( (unsigned __int64)v53 < v216[0].m128i_i64[1] );
      }
      a2 = (const char *)v4;
      if ( (unsigned __int8)create_tinfo(v160, v4, 12, v216) )
      {
        if ( v216[4].m128i_i64[0] )
        {
          v216[4].m128i_i64[1] = 0;
          qfree((void *)v216[4].m128i_i64[0]);
        }
        cleanup_argloc(&v216[2].m128i_u64[1]);
        clear_tinfo_t(&v216[2]);
        v62 = (char *)v216[0].m128i_i64[0];
        if ( v216[0].m128i_i64[0] )
        {
          v63 = v216[0].m128i_i64[1];
          if ( v216[0].m128i_i64[1] )
          {
            v64 = 0;
            do
            {
              v65 = &v62[80 * v64];
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
              cleanup_argloc(v65);
              v62 = (char *)v216[0].m128i_i64[0];
            }
            while ( v63 != v64 );
          }
          v216[0].m128i_i64[1] = 0;
          qfree(v62);
        }
        goto LABEL_3;
      }
      if ( !under_debugger )
        interr(1067);
      goto LABEL_235;
    case 0xD:
      v40 = v4 & 0x30;
      if ( (v4 & 0x30) == 0x20 )
      {
        if ( (*(_BYTE *)(a3 + 80) & 2) != 0 )
        {
          v87 = *(__int64 **)(a3 + 48);
          v203 = nullptr;
          *(_OWORD *)v204 = 0;
          v88 = v87[1];
          v162 = (char *)v88;
          if ( v88 )
          {
            v148 = (void *)v87[1];
            v149 = (char *)qalloc_or_throw(56 * v88, a2);
            v150 = 0;
            v151 = nullptr;
            v152 = 0;
            v203 = v149;
            v153 = v149;
            v204[1] = v148;
            while ( 1 )
            {
              v154 = *v87;
              v155 = &v153[v150];
              *(_QWORD *)v155 = 0;
              v156 = v150 + v154;
              *(_OWORD *)(v155 + 8) = v152;
              if ( *(_QWORD *)(v156 + 8) )
              {
                v187 = v150;
                v183 = v151;
                v179 = *(_QWORD *)(v156 + 8);
                v157 = (void *)qalloc_or_throw(v179, a2);
                *(_QWORD *)v155 = v157;
                *((_QWORD *)v155 + 2) = v179;
                a2 = *(const char **)v156;
                memcpy(v157, *(const void **)v156, v179);
                v150 = v187;
                v152 = 0;
                v151 = v183;
                *((_QWORD *)v155 + 1) = v179;
              }
              *((_QWORD *)v155 + 3) = 0;
              *((_OWORD *)v155 + 2) = v152;
              if ( *(_QWORD *)(v156 + 32) )
              {
                v188 = v150;
                v184 = v151;
                v180 = *(_QWORD *)(v156 + 32);
                v158 = (void *)qalloc_or_throw(v180, a2);
                *((_QWORD *)v155 + 3) = v158;
                *((_QWORD *)v155 + 5) = v180;
                a2 = *(const char **)(v156 + 24);
                memcpy(v158, a2, v180);
                v150 = v188;
                v152 = 0;
                v151 = v184;
                *((_QWORD *)v155 + 4) = v180;
              }
              ++v151;
              v150 += 56;
              *((_QWORD *)v155 + 6) = *(_QWORD *)(v156 + 48);
              if ( v162 == v151 )
                break;
              v153 = (char *)v203;
            }
            v204[0] = v162;
          }
          memset(v205, 0, sizeof(v205));
          v89 = v87[4];
          if ( v89 )
          {
            v205[0] = qalloc_or_throw(4 * v89, a2);
            v205[2] = v89;
            memcpy((void *)v205[0], (const void *)v87[3], 4 * v89);
            v205[1] = v89;
          }
          v90 = (*(_BYTE *)(a3 + 44) & 2) == 0;
          LODWORD(v206[0]) = *((_DWORD *)v87 + 12);
          BYTE4(v206[0]) = *((_BYTE *)v87 + 52);
          if ( !v90 )
            sub_4032C0((__int64 *)&v203, 1);
          v91 = *(_QWORD **)(a3 + 64);
          v176 = a1 + 624;
          v92 = (__int64)v204[0];
          if ( v204[0] > (void *)v91[1] )
            v92 = v91[1];
          v93 = v92 - 1;
          if ( v92 - 1 >= 0 )
          {
            v94 = 56 * v92 - 56;
            do
            {
              v95 = haystack;
              v96 = (char *)v203 + v94;
              if ( *(_QWORD *)((char *)v203 + v94 + 8) )
                v95 = *(const char **)v96;
              v97 = sub_5D3B80(v176, *(_DWORD *)(*v91 + 4 * v93), v95);
              if ( v97 && (v163 = v97, v98 = strlen(v97), v99 = v163, (v100 = v98) != 0) )
              {
                v101 = *((void **)v96 + 3);
                v102 = (void *)(v98 + 1);
                if ( *((_QWORD *)v96 + 5) < v98 + 1 )
                {
                  v189 = v98;
                  v182 = v163;
                  v167 = (void *)(v98 + 1);
                  v146 = qvector_reserve(v96 + 24, v101, v102, 1);
                  *((_QWORD *)v96 + 3) = v146;
                  v100 = v189;
                  v101 = (void *)v146;
                  v99 = v182;
                  v102 = v167;
                }
                *((_QWORD *)v96 + 4) = v102;
                v164 = (_BYTE *)v100;
                memmove(v101, v99, v100);
                v164[*((_QWORD *)v96 + 3)] = 0;
              }
              else
              {
                *((_QWORD *)v96 + 4) = 0;
              }
              --v93;
              v94 -= 56;
            }
            while ( v93 != -1 );
          }
          a2 = (const char *)v4;
          if ( (unsigned __int8)create_tinfo(v160, v4, 45, &v203) )
          {
            if ( v205[0] )
            {
              v205[1] = 0;
              qfree((void *)v205[0]);
            }
            v108 = (char *)v203;
            if ( v203 )
            {
              v109 = (char *)v204[0];
              if ( v204[0] )
              {
                v110 = 0;
                v111 = nullptr;
                do
                {
                  v112 = &v108[v110];
                  v113 = *(void **)&v108[v110 + 24];
                  if ( v113 )
                  {
                    *((_QWORD *)v112 + 4) = 0;
                    qfree(v113);
                  }
                  v114 = *(void **)v112;
                  if ( *(_QWORD *)v112 )
                  {
                    *((_QWORD *)v112 + 1) = 0;
                    qfree(v114);
                  }
                  ++v111;
                  v108 = (char *)v203;
                  v110 += 56;
                }
                while ( v109 != v111 );
              }
              v204[0] = nullptr;
              qfree(v108);
            }
            goto LABEL_3;
          }
          if ( !under_debugger )
            interr(1068);
          goto LABEL_235;
        }
      }
      else
      {
        if ( v40 <= 0x20u )
        {
          if ( (*(_BYTE *)(a3 + 80) & 2) == 0 )
            goto LABEL_55;
          v71 = *(_QWORD *)(a3 + 40);
          v209 = nullptr;
          LOBYTE(v213) = 1;
          LODWORD(ptr) = 0;
          BYTE3(v213) = (v4 & 0x3F) == 29;
          *(_OWORD *)src = 0;
          v211 = 0;
          HIDWORD(ptr) = (((v71 >> 38) & 1) << 12)
                       | (((v71 >> 37) & 1) << 11)
                       | (((v71 >> 34) & 1) << 10)
                       | (((v71 >> 22) & 1) << 8)
                       | (((v71 >> 23) & 1) << 7)
                       | (32 * ((v71 >> 10) & 1))
                       | (((v71 >> 9) & 1) << 6);
          *(_WORD *)((char *)&v213 + 1) = __ROL2__(*(_WORD *)(a3 + 184), 8);
          v72 = *(void **)(*(_QWORD *)(a3 + 48) + 8LL);
          if ( v72 )
          {
            v73 = nullptr;
            memset(v216, 0, sizeof(v216));
            v216[6].m128i_i32[2] = -1;
            v216[6].m128i_i64[0] = 1;
            v74 = (char *)qvector_reserve(&v209, 0, v72, 128);
            v75 = src[0];
            v209 = v74;
            if ( src[0] < v72 )
            {
              while ( 1 )
              {
                si128 = _mm_load_si128(v216);
                v79 = &v74[128 * (_QWORD)v75];
                *((_QWORD *)v79 + 2) = 0;
                *(__m128i *)v79 = si128;
                *(_OWORD *)(v79 + 24) = 0;
                if ( v216[1].m128i_i64[1] )
                {
                  v175 = v216[1].m128i_i64[1];
                  v80 = (void *)qalloc_or_throw(v216[1].m128i_i64[1], v73->m128i_i8);
                  *((_QWORD *)v79 + 2) = v80;
                  *((_QWORD *)v79 + 4) = v175;
                  v73 = (__m128i *)v216[1].m128i_i64[0];
                  memcpy(v80, (const void *)v216[1].m128i_i64[0], v175);
                  *((_QWORD *)v79 + 3) = v175;
                }
                *((_QWORD *)v79 + 5) = 0;
                *((_OWORD *)v79 + 3) = 0;
                if ( v216[3].m128i_i64[0] )
                {
                  v178 = v216[3].m128i_i64[0];
                  v147 = (void *)qalloc_or_throw(v216[3].m128i_i64[0], v73->m128i_i8);
                  *((_QWORD *)v79 + 5) = v147;
                  *((_QWORD *)v79 + 7) = v178;
                  memcpy(v147, (const void *)v216[2].m128i_i64[1], v178);
                  *((_QWORD *)v79 + 6) = v178;
                }
                *((_QWORD *)v79 + 8) = 0;
                v73 = &v216[4];
                copy_tinfo_t(v79 + 64);
                v75 = (char *)v75 + 1;
                v76 = v216[6].m128i_i64[1];
                *(__m128i *)(v79 + 72) = _mm_loadu_si128((const __m128i *)&v216[4].m128i_u64[1]);
                v77 = _mm_loadu_si128((const __m128i *)&v216[5].m128i_u64[1]);
                *((_QWORD *)v79 + 13) = v76;
                *(__m128i *)(v79 + 88) = v77;
                *((_QWORD *)v79 + 14) = v216[7].m128i_i64[0];
                v79[120] = v216[7].m128i_i8[8];
                if ( v72 == v75 )
                  break;
                v74 = (char *)v209;
              }
            }
            src[0] = v72;
            clear_tinfo_t(&v216[4]);
            if ( v216[2].m128i_i64[1] )
            {
              v216[3].m128i_i64[0] = 0;
              qfree((void *)v216[2].m128i_i64[1]);
            }
            if ( v216[1].m128i_i64[0] )
            {
              v216[1].m128i_i64[1] = 0;
              qfree((void *)v216[1].m128i_i64[0]);
            }
          }
          v115 = *(_QWORD *)(a3 + 128);
          v201[0] = 0;
          v202 = -1;
          v201[3] = 1;
          for ( k = v115 + 24LL * *(_QWORD *)(a3 + 136); k != v115; v115 += 24 )
            value_repr_t__parse_value_repr(v201, v115, *(unsigned __int8 *)(a3 + 186));
          v117 = 0;
          for ( m = 0; (void *)m < src[0]; v117 = m )
          {
            v118 = (char *)v209 + 128 * v117;
            v177 = (size_t)v118;
            v119 = *(_QWORD *)(**(_QWORD **)(a3 + 48) + 8 * v117);
            sub_5D6C80(a1, v118 + 64, v119, 1);
            if ( *(_BYTE *)(v119 + 187) )
            {
              v165 = sub_5D89D0(a1, v119, 0);
              v177 = (size_t)v118;
              tinfo_property = get_tinfo_property(*((_QWORD *)v118 + 8), 3);
              v121 = v118 + 64;
              v122 = *(unsigned __int8 *)(v119 + 187);
              v216[0].m128i_i8[0] = v165;
              v216[0].m128i_i8[2] = tinfo_property == 2;
              if ( (_BYTE)v122 == 0xFF )
                v122 = 0;
              v216[0].m128i_i8[1] = v122;
              create_tinfo(v121, 14, 14, v216);
              *(_QWORD *)(v177 + 8) = v122;
            }
            for ( ii = v119; ; ii = *(_QWORD *)(ii + 48) )
            {
              v124 = *(_BYTE *)(ii + 186) & 0xF;
              if ( v124 != 11 && v124 != 12 && v124 != 10 )
                break;
            }
            v125 = *(const char **)ii;
            if ( *(_QWORD *)ii && (v126 = strlen(*(const char **)ii), (v127 = v126) != 0) )
            {
              v142 = (void *)(v126 + 1);
              v143 = *(void **)(v177 + 16);
              if ( *(_QWORD *)(v177 + 32) < v126 + 1 )
              {
                v168 = (void *)(v126 + 1);
                v143 = (void *)qvector_reserve(v177 + 16, *(_QWORD *)(v177 + 16), v142, 1);
                v142 = v168;
                *(_QWORD *)(v177 + 16) = v143;
              }
              *(_QWORD *)(v177 + 24) = v142;
              memmove(v143, v125, v127);
              *(_BYTE *)(*(_QWORD *)(v177 + 16) + v127) = 0;
              v128 = *(_QWORD *)(v177 + 24);
            }
            else
            {
              v128 = 0;
              *(_QWORD *)(v177 + 24) = 0;
            }
            v129 = haystack;
            *(_DWORD *)(v177 + 116) = (((*(_QWORD *)(v119 + 40) >> 22) & 1) << 8)
                                    | (((*(_QWORD *)(v119 + 40) >> 20) & 1) << 7)
                                    | (32 * ((*(_QWORD *)(v119 + 40) >> 21) & 1))
                                    | (((*(_QWORD *)(v119 + 40) >> 9) & 1) << 6);
            *(_BYTE *)(v177 + 120) = *(_BYTE *)(v119 + 185);
            if ( v128 )
              v129 = *(const char **)(v177 + 16);
            v130 = sub_5D3B80(a1 + 624, *(_DWORD *)(v119 + 188), v129);
            v131 = v177 + 40;
            if ( v130 && (v132 = strlen(v130), (v133 = v132) != 0) )
            {
              v144 = (void *)(v132 + 1);
              v145 = *(void **)(v177 + 40);
              if ( *(_QWORD *)(v177 + 56) < v132 + 1 )
              {
                v190 = v132;
                v169 = (void *)(v132 + 1);
                v145 = (void *)qvector_reserve(v131, *(_QWORD *)(v177 + 40), v144, 1);
                v133 = v190;
                v144 = v169;
                *(_QWORD *)(v177 + 40) = v145;
              }
              v166 = (_BYTE *)v133;
              *(_QWORD *)(v177 + 48) = v144;
              memmove(v145, v130, v133);
              v166[*(_QWORD *)(v177 + 40)] = 0;
            }
            else
            {
              *(_QWORD *)(v177 + 48) = 0;
            }
            sub_5D6650(a1, v131, *(_DWORD *)(v119 + 188));
            v134 = *(_QWORD *)(v119 + 128);
            for ( jj = v134 + 24LL * *(_QWORD *)(v119 + 136); jj != v134; v134 += 24 )
              value_repr_t__parse_value_repr(v177 + 72, v134, *(unsigned __int8 *)(v119 + 186));
            if ( (*(_BYTE *)(a3 + 44) & 4) != 0 )
              *(_QWORD *)v177 = *(_QWORD *)(v119 + 104);
            ++m;
          }
          if ( (*(_BYTE *)(a3 + 44) & 4) != 0 )
            *(_QWORD *)&v211 = *(_QWORD *)(a3 + 96);
          a2 = (const char *)v4;
          if ( (unsigned __int8)create_tinfo(v160, v4, 13, &v209) )
          {
            v136 = (char *)v209;
            if ( v209 )
            {
              v137 = src[0];
              if ( src[0] )
              {
                v138 = nullptr;
                do
                {
                  v139 = &v136[128 * (_QWORD)v138];
                  clear_tinfo_t(v139 + 64);
                  v140 = *((void **)v139 + 5);
                  if ( v140 )
                  {
                    *((_QWORD *)v139 + 6) = 0;
                    qfree(v140);
                  }
                  v141 = *((void **)v139 + 2);
                  if ( v141 )
                  {
                    *((_QWORD *)v139 + 3) = 0;
                    qfree(v141);
                  }
                  v138 = (char *)v138 + 1;
                  v136 = (char *)v209;
                }
                while ( v137 != v138 );
              }
              src[0] = nullptr;
              qfree(v136);
            }
            goto LABEL_3;
          }
          if ( !under_debugger )
            interr(1069);
LABEL_235:
          BUG();
        }
        if ( v40 != 48 )
          goto LABEL_3;
      }
LABEL_55:
      if ( *(_QWORD *)(a3 + 72) )
      {
        idati = *(_QWORD *)(a1 + 240);
        v216[0].m128i_i64[1] = *(_QWORD *)(a3 + 72);
        v216[1].m128i_i16[0] = 0;
        if ( !idati )
          idati = get_idati(a1, a2);
        a2 = (const char *)v4;
        v216[0].m128i_i64[0] = idati;
        create_tinfo(v160, v4, 61, v216);
      }
      goto LABEL_3;
    default:
      if ( !under_debugger )
        interr(873);
      goto LABEL_235;
  }
}

