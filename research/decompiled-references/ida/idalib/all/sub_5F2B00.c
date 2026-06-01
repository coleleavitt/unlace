__int64 __fastcall sub_5F2B00(__int64 a1, unsigned __int64 *a2, __int64 a3, char a4)
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
  __int64 v27; // rsi
  int v28; // edi
  int v29; // ecx
  int v30; // edx
  int v31; // edi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r14
  size_t v34; // r13
  size_t v35; // r13
  __int64 v36; // r14
  __int64 v37; // r13
  void *v38; // rax
  unsigned __int8 v39; // al
  __int64 idati; // rax
  __int64 v41; // r14
  char *v42; // rax
  __int128 v43; // xmm0
  void *v44; // r14
  char *i; // rbp
  size_t v46; // r15
  char *v47; // rbp
  __int64 v48; // r12
  size_t v49; // r15
  void *v50; // rax
  void *v51; // rax
  int v52; // r13d
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 j; // rdx
  char v57; // al
  size_t v58; // rax
  const void *v59; // r9
  size_t v60; // r8
  char *v61; // rdi
  __int64 v62; // r13
  __int64 v63; // r12
  char *v64; // rbp
  void *v65; // rdi
  void *v66; // rdi
  void *v67; // rdi
  size_t v68; // rdx
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  void *v71; // r14
  char *v72; // rax
  void *v73; // r15
  __int64 v74; // rdx
  __m128i v75; // xmm0
  __m128i si128; // xmm0
  char *v77; // r13
  void *v78; // rax
  size_t v79; // r15
  __int64 v80; // r13
  size_t v81; // r15
  void *v82; // rax
  void *v83; // rax
  __int64 *v84; // r14
  char *v85; // rax
  __int64 v86; // r13
  bool v87; // zf
  _QWORD *v88; // r14
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // r13
  const char *v92; // rdx
  char *v93; // r15
  const char *v94; // rax
  size_t v95; // rax
  const char *v96; // r8
  size_t v97; // r10
  void *v98; // rdi
  void *v99; // rdx
  unsigned __int64 v100; // r13
  _QWORD *v101; // r15
  void *v102; // rdi
  void *v103; // rdi
  void *v104; // rax
  char *v105; // rdi
  __int64 v106; // r14
  __int64 v107; // r13
  __int64 v108; // r12
  char *v109; // rbp
  void *v110; // rdi
  void *v111; // rdi
  __int64 v112; // r14
  __int64 k; // r13
  __int64 v114; // rax
  char *v115; // r15
  __int64 v116; // r13
  int tinfo_property; // eax
  char *v118; // rdi
  __int64 v119; // r15
  __int64 ii; // rdx
  char v121; // al
  const char *v122; // r15
  size_t v123; // rax
  size_t v124; // r14
  __int64 v125; // rcx
  const char *v126; // rdx
  const char *v127; // r15
  __int64 v128; // r14
  size_t v129; // rax
  size_t v130; // r8
  __int64 v131; // r15
  __int64 jj; // r14
  char *v133; // rdi
  void *v134; // r13
  void *v135; // r12
  char *v136; // rbp
  void *v137; // rdi
  void *v138; // rdi
  void *v139; // rdx
  void *v140; // rdi
  void *v141; // rdx
  void *v142; // rdi
  __int64 v143; // rax
  void *v144; // rax
  __int64 v145; // r15
  char *v146; // rax
  __int64 v147; // rcx
  char *v148; // r8
  __int128 v149; // xmm0
  char *v150; // r13
  __int64 v151; // r15
  char *v152; // r13
  __int64 v153; // r15
  void *v154; // rax
  void *v155; // rax
  void *v157; // [rsp+8h] [rbp-250h]
  char *v158; // [rsp+8h] [rbp-250h]
  const char *v159; // [rsp+8h] [rbp-250h]
  _BYTE *v160; // [rsp+8h] [rbp-250h]
  __int8 v161; // [rsp+8h] [rbp-250h]
  _BYTE *v162; // [rsp+8h] [rbp-250h]
  void *v163; // [rsp+8h] [rbp-250h]
  void *v164; // [rsp+8h] [rbp-250h]
  void *v165; // [rsp+8h] [rbp-250h]
  size_t v167; // [rsp+18h] [rbp-240h]
  size_t v168; // [rsp+18h] [rbp-240h]
  size_t v169; // [rsp+18h] [rbp-240h]
  __int64 v170; // [rsp+18h] [rbp-240h]
  const __m128i *v171; // [rsp+18h] [rbp-240h]
  size_t v172; // [rsp+18h] [rbp-240h]
  __int64 v173; // [rsp+18h] [rbp-240h]
  size_t v174; // [rsp+18h] [rbp-240h]
  size_t v175; // [rsp+18h] [rbp-240h]
  unsigned __int64 v176; // [rsp+20h] [rbp-238h]
  const void *v177; // [rsp+20h] [rbp-238h]
  int m; // [rsp+20h] [rbp-238h]
  char *v179; // [rsp+20h] [rbp-238h]
  char *v180; // [rsp+20h] [rbp-238h]
  size_t v181; // [rsp+28h] [rbp-230h]
  const char *v182; // [rsp+28h] [rbp-230h]
  __int64 v183; // [rsp+28h] [rbp-230h]
  __int64 v184; // [rsp+28h] [rbp-230h]
  size_t v185; // [rsp+30h] [rbp-228h]
  size_t v186; // [rsp+38h] [rbp-220h]
  size_t na; // [rsp+48h] [rbp-210h]
  size_t n; // [rsp+48h] [rbp-210h]
  _QWORD v189[2]; // [rsp+50h] [rbp-208h] BYREF
  void *v190; // [rsp+60h] [rbp-1F8h] BYREF
  __int128 v191; // [rsp+68h] [rbp-1F0h]
  __int128 v192; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v193; // [rsp+90h] [rbp-1C8h] BYREF
  int v194; // [rsp+98h] [rbp-1C0h]
  char v195; // [rsp+9Ch] [rbp-1BCh]
  char v196; // [rsp+9Dh] [rbp-1BBh]
  void *v197; // [rsp+A0h] [rbp-1B8h] BYREF
  __int128 v198; // [rsp+A8h] [rbp-1B0h]
  void *v199; // [rsp+B8h] [rbp-1A0h]
  __int128 v200; // [rsp+C0h] [rbp-198h]
  int v201; // [rsp+D0h] [rbp-188h]
  char v202; // [rsp+D4h] [rbp-184h]
  void *v203; // [rsp+E0h] [rbp-178h] BYREF
  void *v204[2]; // [rsp+E8h] [rbp-170h]
  size_t v205[2]; // [rsp+F8h] [rbp-160h]
  void *v206; // [rsp+108h] [rbp-150h]
  size_t v207[2]; // [rsp+110h] [rbp-148h]
  __int64 v208; // [rsp+120h] [rbp-138h] BYREF
  __int64 v209; // [rsp+128h] [rbp-130h]
  _QWORD v210[2]; // [rsp+130h] [rbp-128h] BYREF
  void *src; // [rsp+140h] [rbp-118h]
  __int128 v212; // [rsp+148h] [rbp-110h]
  void *ptr; // [rsp+158h] [rbp-100h]
  __int128 v214; // [rsp+160h] [rbp-F8h]
  __int64 v215; // [rsp+170h] [rbp-E8h] BYREF
  int v216; // [rsp+178h] [rbp-E0h]
  __m128i v217[9]; // [rsp+180h] [rbp-D8h] BYREF
  unsigned __int64 v218; // [rsp+218h] [rbp-40h]

  v4 = *(_BYTE *)(a3 + 186) | a4 & 0xC0;
  v218 = __readfsqword(0x28u);
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
      create_tinfo(a2, v4, 7, 0);
      goto LABEL_3;
    case 0xA:
      v17 = 0;
      if ( (~v4 & 0x30) == 0 )
        v17 = *(_BYTE *)(a3 + 56);
      v217[0].m128i_i64[0] = 0;
      v210[0] = 0;
      v192 = 0;
      copy_tinfo_t((char *)&v192 + 8);
      v193 = 0;
      copy_tinfo_t(&v193);
      v195 = v17;
      v194 = 0;
      v196 = 0;
      clear_tinfo_t(v210);
      clear_tinfo_t(v217);
      v18 = *(_QWORD *)(a3 + 48);
      v196 = *(_BYTE *)(a3 + 60);
      sub_5F2B00(a1, &v192, v18, 1);
      v19 = *(_QWORD *)(a3 + 32);
      if ( v19 )
      {
        sub_5F2B00(a1, &v193, v19, 1);
        v20 = *(_DWORD *)(a3 + 176);
        v196 |= 0x80u;
        v194 = v20;
      }
      if ( !(unsigned __int8)create_tinfo(a2, v4, 10, &v192) )
      {
        if ( !under_debugger )
          interr(1563);
        goto LABEL_235;
      }
      clear_tinfo_t(&v193);
      clear_tinfo_t((char *)&v192 + 8);
      clear_tinfo_t(&v192);
LABEL_3:
      v7 = *(_QWORD **)(a3 + 16);
      if ( !v7 )
        goto LABEL_15;
      v190 = nullptr;
      v191 = 0;
      v8 = (void *)v7[1];
      v157 = v8;
      if ( !v8 )
        goto LABEL_5;
      v41 = v7[1];
      v42 = (char *)qalloc_or_throw(48LL * (_QWORD)v8);
      *((_QWORD *)&v191 + 1) = v41;
      v43 = 0;
      v44 = nullptr;
      v190 = v42;
      for ( i = v42; ; i = (char *)v190 )
      {
        v47 = &i[48 * (_QWORD)v44];
        v48 = *v7 + 48LL * (_QWORD)v44;
        *(_QWORD *)v47 = 0;
        *(_OWORD *)(v47 + 8) = v43;
        v49 = *(_QWORD *)(v48 + 8);
        if ( v49 )
        {
          v50 = (void *)qalloc_or_throw(*(_QWORD *)(v48 + 8));
          *((_QWORD *)v47 + 2) = v49;
          *(_QWORD *)v47 = v50;
          memcpy(v50, *(const void **)v48, v49);
          *((_QWORD *)v47 + 1) = v49;
          v43 = 0;
        }
        *((_QWORD *)v47 + 3) = 0;
        *((_OWORD *)v47 + 2) = v43;
        v46 = *(_QWORD *)(v48 + 32);
        if ( v46 )
          break;
        v44 = (char *)v44 + 1;
        if ( v157 == v44 )
          goto LABEL_66;
LABEL_62:
        ;
      }
      v51 = (void *)qalloc_or_throw(*(_QWORD *)(v48 + 32));
      *((_QWORD *)v47 + 3) = v51;
      v44 = (char *)v44 + 1;
      *((_QWORD *)v47 + 5) = v46;
      memcpy(v51, *(const void **)(v48 + 24), v46);
      *((_QWORD *)v47 + 4) = v46;
      v43 = 0;
      if ( v157 != v44 )
        goto LABEL_62;
LABEL_66:
      *(_QWORD *)&v191 = v157;
LABEL_5:
      if ( !(unsigned __int8)set_tinfo_attrs(a2, (__int64)&v190) )
      {
        if ( !under_debugger )
          interr(908);
        goto LABEL_235;
      }
      v9 = (char *)v190;
      if ( v190 )
      {
        v10 = v191;
        if ( (_QWORD)v191 )
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
            v9 = (char *)v190;
          }
          while ( v10 != v11 );
        }
        *(_QWORD *)&v191 = 0;
        qfree(v9);
      }
LABEL_15:
      v15 = *(unsigned __int8 *)(a3 + 185);
      if ( (_BYTE)v15 && (a4 & 1) == 0 )
        return set_tinfo_property4(a2, 26, v15, 0, 0, 1);
      else
        return v218 - __readfsqword(0x28u);
    case 0xB:
      v21 = *(_QWORD *)(a3 + 56);
      v22 = *(_QWORD *)(a3 + 48);
      v189[0] = 0;
      v189[1] = v21;
      sub_5F2B00(a1, v189, v22, v4 | 1u);
      if ( (unsigned __int8)create_tinfo(a2, v4, 11, v189) )
      {
        clear_tinfo_t(v189);
        goto LABEL_3;
      }
      if ( !under_debugger )
        interr(1188);
      goto LABEL_235;
    case 0xC:
      v23 = *(_DWORD *)(a3 + 68);
      memset(v217, 0, 88);
      if ( (v23 & 0xFFFFFF0F) != 0 || v23 == 192 )
      {
        v217[1].m128i_i32[3] = v23;
        LOBYTE(v23) = -64;
      }
      v24 = *(_QWORD *)(a3 + 24);
      v217[5].m128i_i8[8] = v23;
      if ( v24 || (v27 = *(_QWORD *)(a3 + 48), v28 = 0, (v24 = *(_QWORD *)(v27 + 24)) != 0) )
      {
        v25 = *(_QWORD *)(v24 + 8);
        v26 = nullptr;
        if ( v25 )
        {
          v26 = (void *)qalloc_or_throw(8 * v25);
          memcpy(v26, *(const void **)v24, 8 * v25);
        }
        v27 = *(_QWORD *)(a3 + 48);
        v28 = 1;
        v217[4].m128i_i64[0] = (__int64)v26;
        *(__m128i *)((char *)&v217[4] + 8) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      }
      v29 = *(_DWORD *)(a1 + 216);
      v30 = v28 | (*(_QWORD *)(a3 + 40) >> 15) & 6 | (*(int *)(a1 + 744) >> 12) & 8;
      if ( v29 == 3 )
      {
        v30 |= 0x10u;
        v31 = 0;
      }
      else
      {
        v31 = 32 * (v29 == 7);
      }
      v217[1].m128i_i32[2] = v30 | v31 | (4 * (v4 & 0x30)) | (*(_QWORD *)(a3 + 40) >> 20) & 0x200;
      sub_5F2B00(a1, &v217[2], v27, 1);
      copy_argloc(&v217[2].m128i_u64[1], *(_QWORD *)(a3 + 48) + 112LL);
      v32 = *(int *)(a3 + 64);
      v33 = v217[0].m128i_u64[1];
      v176 = v32;
      if ( v32 != v217[0].m128i_i64[1] )
      {
        v209 = 0;
        LODWORD(v203) = 0;
        v204[0] = nullptr;
        v204[1] = nullptr;
        v206 = nullptr;
        v208 = 0;
        *(_OWORD *)v205 = 0;
        *(_OWORD *)v207 = 0;
        if ( v32 < v217[0].m128i_i64[1] )
        {
          v100 = v32;
          do
          {
            v101 = (_QWORD *)(v217[0].m128i_i64[0] + 80 * v100);
            clear_tinfo_t(v101 + 8);
            v102 = (void *)v101[5];
            if ( v102 )
            {
              v101[6] = 0;
              qfree(v102);
            }
            v103 = (void *)v101[2];
            if ( v103 )
            {
              v101[3] = 0;
              qfree(v103);
            }
            ++v100;
            cleanup_argloc(v101);
          }
          while ( v100 < v33 );
          v217[0].m128i_i64[1] = v176;
        }
        else if ( (unsigned __int64)&v203 < v217[0].m128i_i64[0]
               || (unsigned __int64)&v203 >= v217[0].m128i_i64[0] + 80 * v217[1].m128i_i64[0] )
        {
          if ( v217[1].m128i_i64[0] < v32 )
          {
            v217[0].m128i_i64[0] = qvector_reserve(v217, v217[0].m128i_i64[0], v32, 80);
            v33 = v217[0].m128i_u64[1];
          }
          for ( ; v33 < v176; *(_DWORD *)(v80 + 72) = v209 )
          {
            v80 = v217[0].m128i_i64[0] + 80 * v33;
            *(_DWORD *)v80 = 0;
            copy_argloc(v80, &v203);
            *(_QWORD *)(v80 + 16) = 0;
            *(_OWORD *)(v80 + 24) = 0;
            v81 = v205[0];
            if ( v205[0] )
            {
              v82 = (void *)qalloc_or_throw(v205[0]);
              *(_QWORD *)(v80 + 16) = v82;
              *(_QWORD *)(v80 + 32) = v81;
              memcpy(v82, v204[1], v81);
              *(_QWORD *)(v80 + 24) = v81;
            }
            *(_QWORD *)(v80 + 40) = 0;
            *(_OWORD *)(v80 + 48) = 0;
            v79 = v207[0];
            if ( v207[0] )
            {
              v83 = (void *)qalloc_or_throw(v207[0]);
              *(_QWORD *)(v80 + 40) = v83;
              *(_QWORD *)(v80 + 56) = v79;
              memcpy(v83, v206, v79);
              *(_QWORD *)(v80 + 48) = v79;
            }
            *(_QWORD *)(v80 + 64) = 0;
            copy_tinfo_t(v80 + 64);
            ++v33;
          }
          v217[0].m128i_i64[1] = v176;
        }
        else
        {
          LODWORD(v210[0]) = 0;
          copy_argloc(v210, &v203);
          v34 = v205[0];
          src = nullptr;
          v212 = 0;
          if ( v205[0] )
          {
            src = (void *)qalloc_or_throw(v205[0]);
            *((_QWORD *)&v212 + 1) = v34;
            memcpy(src, v204[1], v34);
            *(_QWORD *)&v212 = v34;
          }
          v35 = v207[0];
          ptr = nullptr;
          v214 = 0;
          if ( v207[0] )
          {
            ptr = (void *)qalloc_or_throw(v207[0]);
            *((_QWORD *)&v214 + 1) = v35;
            memcpy(ptr, v206, v35);
            *(_QWORD *)&v214 = v35;
          }
          v215 = 0;
          copy_tinfo_t(&v215);
          v216 = v209;
          if ( v217[1].m128i_i64[0] < v176 )
            v217[0].m128i_i64[0] = qvector_reserve(v217, v217[0].m128i_i64[0], v176, 80);
          v36 = v217[0].m128i_i64[1];
          if ( v217[0].m128i_i64[1] < v176 )
          {
            do
            {
              v37 = v217[0].m128i_i64[0] + 80 * v36;
              *(_DWORD *)v37 = 0;
              copy_argloc(v37, v210);
              *(_QWORD *)(v37 + 16) = 0;
              *(_OWORD *)(v37 + 24) = 0;
              if ( (_QWORD)v212 )
              {
                na = v212;
                v38 = (void *)qalloc_or_throw(v212);
                *(_QWORD *)(v37 + 16) = v38;
                *(_QWORD *)(v37 + 32) = na;
                memcpy(v38, src, na);
                *(_QWORD *)(v37 + 24) = na;
              }
              *(_QWORD *)(v37 + 40) = 0;
              *(_OWORD *)(v37 + 48) = 0;
              if ( (_QWORD)v214 )
              {
                n = v214;
                v104 = (void *)qalloc_or_throw(v214);
                *(_QWORD *)(v37 + 40) = v104;
                *(_QWORD *)(v37 + 56) = n;
                memcpy(v104, ptr, n);
                *(_QWORD *)(v37 + 48) = n;
              }
              *(_QWORD *)(v37 + 64) = 0;
              copy_tinfo_t(v37 + 64);
              ++v36;
              *(_DWORD *)(v37 + 72) = v216;
            }
            while ( v176 != v36 );
          }
          v217[0].m128i_i64[1] = v176;
          clear_tinfo_t(&v215);
          if ( ptr )
          {
            *(_QWORD *)&v214 = 0;
            qfree(ptr);
          }
          if ( src )
          {
            *(_QWORD *)&v212 = 0;
            qfree(src);
          }
          cleanup_argloc(v210);
        }
        clear_tinfo_t(&v208);
        if ( v206 )
        {
          v207[0] = 0;
          qfree(v206);
        }
        if ( v204[1] )
        {
          v205[0] = 0;
          qfree(v204[1]);
        }
        cleanup_argloc(&v203);
        v33 = v217[0].m128i_u64[1];
      }
      v52 = 0;
      v53 = 0;
      if ( v33 )
      {
        do
        {
          v54 = v217[0].m128i_i64[0] + 80 * v53;
          v55 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v53);
          sub_5F2B00(a1, v54 + 64, v55, 1);
          for ( j = v55; ; j = *(_QWORD *)(j + 48) )
          {
            v57 = *(_BYTE *)(j + 186) & 0xF;
            if ( v57 != 11 && v57 != 12 && v57 != 10 )
              break;
          }
          if ( *(_QWORD *)j
            && (v167 = *(_QWORD *)j, v58 = strlen(*(const char **)j), v59 = (const void *)v167, (v60 = v58) != 0) )
          {
            v67 = *(void **)(v54 + 16);
            v68 = v58 + 1;
            if ( *(_QWORD *)(v54 + 32) < v58 + 1 )
            {
              v181 = v58;
              v177 = (const void *)v167;
              v169 = v58 + 1;
              v69 = qvector_reserve(v54 + 16, v67, v68, 1);
              *(_QWORD *)(v54 + 16) = v69;
              v60 = v181;
              v67 = (void *)v69;
              v59 = v177;
              v68 = v169;
            }
            *(_QWORD *)(v54 + 24) = v68;
            v168 = v60;
            memmove(v67, v59, v60);
            *(_BYTE *)(*(_QWORD *)(v54 + 16) + v168) = 0;
          }
          else
          {
            *(_QWORD *)(v54 + 24) = 0;
          }
          copy_argloc(v54, v55 + 112);
          *(_DWORD *)(v54 + 72) = (*(_QWORD *)(v55 + 40) >> 24) & 0x10
                                | (*(_QWORD *)(v55 + 40) >> 26) & 2
                                | BYTE3(*(_QWORD *)(v55 + 40)) & 5
                                | (*(_QWORD *)(v55 + 40) >> 22) & 8;
          sub_5F24C0(a1, v54 + 40, *(_DWORD *)(v55 + 188));
          v53 = ++v52;
        }
        while ( (unsigned __int64)v52 < v217[0].m128i_i64[1] );
      }
      if ( (unsigned __int8)create_tinfo(a2, v4, 12, v217) )
      {
        if ( v217[4].m128i_i64[0] )
        {
          v217[4].m128i_i64[1] = 0;
          qfree((void *)v217[4].m128i_i64[0]);
        }
        cleanup_argloc(&v217[2].m128i_u64[1]);
        clear_tinfo_t(&v217[2]);
        v61 = (char *)v217[0].m128i_i64[0];
        if ( v217[0].m128i_i64[0] )
        {
          v62 = v217[0].m128i_i64[1];
          if ( v217[0].m128i_i64[1] )
          {
            v63 = 0;
            do
            {
              v64 = &v61[80 * v63];
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
              cleanup_argloc(v64);
              v61 = (char *)v217[0].m128i_i64[0];
            }
            while ( v62 != v63 );
          }
          v217[0].m128i_i64[1] = 0;
          qfree(v61);
        }
        goto LABEL_3;
      }
      if ( !under_debugger )
        interr(1067);
      goto LABEL_235;
    case 0xD:
      v39 = v4 & 0x30;
      if ( (v4 & 0x30) == 0x20 )
      {
        if ( (*(_BYTE *)(a3 + 80) & 2) != 0 )
        {
          v84 = *(__int64 **)(a3 + 48);
          v197 = nullptr;
          v198 = 0;
          v85 = (char *)v84[1];
          v158 = v85;
          if ( v85 )
          {
            v145 = v84[1];
            v146 = (char *)qalloc_or_throw(56LL * (_QWORD)v85);
            v147 = 0;
            v148 = nullptr;
            v149 = 0;
            v197 = v146;
            v150 = v146;
            *((_QWORD *)&v198 + 1) = v145;
            while ( 1 )
            {
              v151 = *v84;
              v152 = &v150[v147];
              *(_QWORD *)v152 = 0;
              v153 = v147 + v151;
              *(_OWORD *)(v152 + 8) = v149;
              if ( *(_QWORD *)(v153 + 8) )
              {
                v183 = v147;
                v179 = v148;
                v174 = *(_QWORD *)(v153 + 8);
                v154 = (void *)qalloc_or_throw(v174);
                *(_QWORD *)v152 = v154;
                *((_QWORD *)v152 + 2) = v174;
                memcpy(v154, *(const void **)v153, v174);
                v147 = v183;
                v149 = 0;
                v148 = v179;
                *((_QWORD *)v152 + 1) = v174;
              }
              *((_QWORD *)v152 + 3) = 0;
              *((_OWORD *)v152 + 2) = v149;
              if ( *(_QWORD *)(v153 + 32) )
              {
                v184 = v147;
                v180 = v148;
                v175 = *(_QWORD *)(v153 + 32);
                v155 = (void *)qalloc_or_throw(v175);
                *((_QWORD *)v152 + 3) = v155;
                *((_QWORD *)v152 + 5) = v175;
                memcpy(v155, *(const void **)(v153 + 24), v175);
                v147 = v184;
                v149 = 0;
                v148 = v180;
                *((_QWORD *)v152 + 4) = v175;
              }
              ++v148;
              v147 += 56;
              *((_QWORD *)v152 + 6) = *(_QWORD *)(v153 + 48);
              if ( v158 == v148 )
                break;
              v150 = (char *)v197;
            }
            *(_QWORD *)&v198 = v158;
          }
          v199 = nullptr;
          v200 = 0;
          v86 = v84[4];
          if ( v86 )
          {
            v199 = (void *)qalloc_or_throw(4 * v86);
            *((_QWORD *)&v200 + 1) = v86;
            memcpy(v199, (const void *)v84[3], 4 * v86);
            *(_QWORD *)&v200 = v86;
          }
          v87 = (*(_BYTE *)(a3 + 44) & 2) == 0;
          v201 = *((_DWORD *)v84 + 12);
          v202 = *((_BYTE *)v84 + 52);
          if ( !v87 )
            sub_416660((__int64 *)&v197, 1);
          v88 = *(_QWORD **)(a3 + 64);
          v171 = (const __m128i *)(a1 + 632);
          v89 = v198;
          if ( (unsigned __int64)v198 > v88[1] )
            v89 = v88[1];
          v90 = v89 - 1;
          if ( v89 - 1 >= 0 )
          {
            v91 = 56 * v89 - 56;
            do
            {
              v92 = haystack;
              v93 = (char *)v197 + v91;
              if ( *(_QWORD *)((char *)v197 + v91 + 8) )
                v92 = *(const char **)v93;
              v94 = sub_5EF9A0(v171, *(_DWORD *)(*v88 + 4 * v90), v92);
              if ( v94 && (v159 = v94, v95 = strlen(v94), v96 = v159, (v97 = v95) != 0) )
              {
                v98 = *((void **)v93 + 3);
                v99 = (void *)(v95 + 1);
                if ( *((_QWORD *)v93 + 5) < v95 + 1 )
                {
                  v185 = v95;
                  v182 = v159;
                  v163 = (void *)(v95 + 1);
                  v143 = qvector_reserve(v93 + 24, v98, v99, 1);
                  *((_QWORD *)v93 + 3) = v143;
                  v97 = v185;
                  v98 = (void *)v143;
                  v96 = v182;
                  v99 = v163;
                }
                *((_QWORD *)v93 + 4) = v99;
                v160 = (_BYTE *)v97;
                memmove(v98, v96, v97);
                v160[*((_QWORD *)v93 + 3)] = 0;
              }
              else
              {
                *((_QWORD *)v93 + 4) = 0;
              }
              --v90;
              v91 -= 56;
            }
            while ( v90 != -1 );
          }
          if ( (unsigned __int8)create_tinfo(a2, v4, 45, &v197) )
          {
            if ( v199 )
            {
              *(_QWORD *)&v200 = 0;
              qfree(v199);
            }
            v105 = (char *)v197;
            if ( v197 )
            {
              v106 = v198;
              if ( (_QWORD)v198 )
              {
                v107 = 0;
                v108 = 0;
                do
                {
                  v109 = &v105[v107];
                  v110 = *(void **)&v105[v107 + 24];
                  if ( v110 )
                  {
                    *((_QWORD *)v109 + 4) = 0;
                    qfree(v110);
                  }
                  v111 = *(void **)v109;
                  if ( *(_QWORD *)v109 )
                  {
                    *((_QWORD *)v109 + 1) = 0;
                    qfree(v111);
                  }
                  ++v108;
                  v105 = (char *)v197;
                  v107 += 56;
                }
                while ( v106 != v108 );
              }
              *(_QWORD *)&v198 = 0;
              qfree(v105);
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
        if ( v39 <= 0x20u )
        {
          if ( (*(_BYTE *)(a3 + 80) & 2) == 0 )
            goto LABEL_55;
          v70 = *(_QWORD *)(a3 + 40);
          v203 = nullptr;
          LOBYTE(v207[0]) = 1;
          LODWORD(v206) = 0;
          BYTE3(v207[0]) = (v4 & 0x3F) == 29;
          *(_OWORD *)v204 = 0;
          *(_OWORD *)v205 = 0;
          HIDWORD(v206) = (((v70 >> 38) & 1) << 12)
                        | (((v70 >> 37) & 1) << 11)
                        | (((v70 >> 34) & 1) << 10)
                        | (((v70 >> 22) & 1) << 8)
                        | (((v70 >> 23) & 1) << 7)
                        | (32 * ((v70 >> 10) & 1))
                        | (((v70 >> 9) & 1) << 6);
          *(_WORD *)((char *)v207 + 1) = __ROL2__(*(_WORD *)(a3 + 184), 8);
          v71 = *(void **)(*(_QWORD *)(a3 + 48) + 8LL);
          if ( v71 )
          {
            memset(v217, 0, sizeof(v217));
            v217[7].m128i_i32[2] = -1;
            v217[7].m128i_i64[0] = (__int64)&dword_0 + 1;
            v72 = (char *)qvector_reserve(&v203, 0, v71, 144);
            v73 = v204[0];
            v203 = v72;
            if ( v204[0] < v71 )
            {
              while ( 1 )
              {
                si128 = _mm_load_si128(v217);
                v77 = &v72[144 * (_QWORD)v73];
                *((_QWORD *)v77 + 2) = 0;
                *(__m128i *)v77 = si128;
                *(_OWORD *)(v77 + 24) = 0;
                if ( v217[1].m128i_i64[1] )
                {
                  v170 = v217[1].m128i_i64[1];
                  v78 = (void *)qalloc_or_throw(v217[1].m128i_i64[1]);
                  *((_QWORD *)v77 + 2) = v78;
                  *((_QWORD *)v77 + 4) = v170;
                  memcpy(v78, (const void *)v217[1].m128i_i64[0], v170);
                  *((_QWORD *)v77 + 3) = v170;
                }
                *((_QWORD *)v77 + 5) = 0;
                *((_OWORD *)v77 + 3) = 0;
                if ( v217[3].m128i_i64[0] )
                {
                  v173 = v217[3].m128i_i64[0];
                  v144 = (void *)qalloc_or_throw(v217[3].m128i_i64[0]);
                  *((_QWORD *)v77 + 5) = v144;
                  *((_QWORD *)v77 + 7) = v173;
                  memcpy(v144, (const void *)v217[2].m128i_i64[1], v173);
                  *((_QWORD *)v77 + 6) = v173;
                }
                *((_QWORD *)v77 + 8) = 0;
                copy_tinfo_t(v77 + 64);
                v73 = (char *)v73 + 1;
                v74 = v217[7].m128i_i64[1];
                *(__m128i *)(v77 + 72) = _mm_loadu_si128((const __m128i *)&v217[4].m128i_u64[1]);
                v75 = _mm_loadu_si128((const __m128i *)&v217[5].m128i_u64[1]);
                *((_QWORD *)v77 + 15) = v74;
                *(__m128i *)(v77 + 88) = v75;
                *(__m128i *)(v77 + 104) = _mm_loadu_si128((const __m128i *)&v217[6].m128i_u64[1]);
                *((_QWORD *)v77 + 16) = v217[8].m128i_i64[0];
                v77[136] = v217[8].m128i_i8[8];
                if ( v71 == v73 )
                  break;
                v72 = (char *)v203;
              }
            }
            v204[0] = v71;
            clear_tinfo_t(&v217[4]);
            if ( v217[2].m128i_i64[1] )
            {
              v217[3].m128i_i64[0] = 0;
              qfree((void *)v217[2].m128i_i64[1]);
            }
            if ( v217[1].m128i_i64[0] )
            {
              v217[1].m128i_i64[1] = 0;
              qfree((void *)v217[1].m128i_i64[0]);
            }
          }
          v112 = *(_QWORD *)(a3 + 128);
          v210[0] = 0;
          LODWORD(v214) = -1;
          ptr = (char *)&dword_0 + 1;
          for ( k = v112 + 24LL * *(_QWORD *)(a3 + 136); k != v112; v112 += 24 )
            value_repr_t__parse_value_repr((__int64)v210, v112, *(_BYTE *)(a3 + 186));
          v114 = 0;
          for ( m = 0; (void *)m < v204[0]; v114 = m )
          {
            v115 = (char *)v203 + 144 * v114;
            v172 = (size_t)v115;
            v116 = *(_QWORD *)(**(_QWORD **)(a3 + 48) + 8 * v114);
            sub_5F2B00(a1, v115 + 64, v116, 1);
            if ( *(_BYTE *)(v116 + 187) )
            {
              v161 = sub_5F4860(a1, v116, 0);
              v172 = (size_t)v115;
              tinfo_property = get_tinfo_property(*((_QWORD *)v115 + 8), 3);
              v118 = v115 + 64;
              v119 = *(unsigned __int8 *)(v116 + 187);
              v217[0].m128i_i8[0] = v161;
              v217[0].m128i_i8[2] = tinfo_property == 2;
              if ( (_BYTE)v119 == 0xFF )
                v119 = 0;
              v217[0].m128i_i8[1] = v119;
              create_tinfo(v118, 14, 14, v217);
              *(_QWORD *)(v172 + 8) = v119;
            }
            for ( ii = v116; ; ii = *(_QWORD *)(ii + 48) )
            {
              v121 = *(_BYTE *)(ii + 186) & 0xF;
              if ( v121 != 11 && v121 != 12 && v121 != 10 )
                break;
            }
            v122 = *(const char **)ii;
            if ( *(_QWORD *)ii && (v123 = strlen(*(const char **)ii), (v124 = v123) != 0) )
            {
              v139 = (void *)(v123 + 1);
              v140 = *(void **)(v172 + 16);
              if ( *(_QWORD *)(v172 + 32) < v123 + 1 )
              {
                v164 = (void *)(v123 + 1);
                v140 = (void *)qvector_reserve(v172 + 16, *(_QWORD *)(v172 + 16), v139, 1);
                v139 = v164;
                *(_QWORD *)(v172 + 16) = v140;
              }
              *(_QWORD *)(v172 + 24) = v139;
              memmove(v140, v122, v124);
              *(_BYTE *)(*(_QWORD *)(v172 + 16) + v124) = 0;
              v125 = *(_QWORD *)(v172 + 24);
            }
            else
            {
              v125 = 0;
              *(_QWORD *)(v172 + 24) = 0;
            }
            v126 = haystack;
            *(_DWORD *)(v172 + 132) = (((*(_QWORD *)(v116 + 40) >> 22) & 1) << 8)
                                    | (((*(_QWORD *)(v116 + 40) >> 20) & 1) << 7)
                                    | (32 * ((*(_QWORD *)(v116 + 40) >> 21) & 1))
                                    | (((*(_QWORD *)(v116 + 40) >> 9) & 1) << 6);
            *(_BYTE *)(v172 + 136) = *(_BYTE *)(v116 + 185);
            if ( v125 )
              v126 = *(const char **)(v172 + 16);
            v127 = sub_5EF9A0((const __m128i *)(a1 + 632), *(_DWORD *)(v116 + 188), v126);
            v128 = v172 + 40;
            if ( v127 && (v129 = strlen(v127), (v130 = v129) != 0) )
            {
              v141 = (void *)(v129 + 1);
              v142 = *(void **)(v172 + 40);
              if ( *(_QWORD *)(v172 + 56) < v129 + 1 )
              {
                v186 = v129;
                v165 = (void *)(v129 + 1);
                v142 = (void *)qvector_reserve(v128, *(_QWORD *)(v172 + 40), v141, 1);
                v130 = v186;
                v141 = v165;
                *(_QWORD *)(v172 + 40) = v142;
              }
              v162 = (_BYTE *)v130;
              *(_QWORD *)(v172 + 48) = v141;
              memmove(v142, v127, v130);
              v162[*(_QWORD *)(v172 + 40)] = 0;
            }
            else
            {
              *(_QWORD *)(v172 + 48) = 0;
            }
            sub_5F24C0(a1, v128, *(_DWORD *)(v116 + 188));
            v131 = *(_QWORD *)(v116 + 128);
            for ( jj = v131 + 24LL * *(_QWORD *)(v116 + 136); jj != v131; v131 += 24 )
              value_repr_t__parse_value_repr(v172 + 72, v131, *(_BYTE *)(v116 + 186));
            if ( (*(_BYTE *)(a3 + 44) & 4) != 0 )
              *(_QWORD *)v172 = *(_QWORD *)(v116 + 104);
            ++m;
          }
          if ( (*(_BYTE *)(a3 + 44) & 4) != 0 )
            v205[0] = *(_QWORD *)(a3 + 96);
          if ( (unsigned __int8)create_tinfo(a2, v4, 13, &v203) )
          {
            v133 = (char *)v203;
            if ( v203 )
            {
              v134 = v204[0];
              if ( v204[0] )
              {
                v135 = nullptr;
                do
                {
                  v136 = &v133[144 * (_QWORD)v135];
                  clear_tinfo_t(v136 + 64);
                  v137 = *((void **)v136 + 5);
                  if ( v137 )
                  {
                    *((_QWORD *)v136 + 6) = 0;
                    qfree(v137);
                  }
                  v138 = *((void **)v136 + 2);
                  if ( v138 )
                  {
                    *((_QWORD *)v136 + 3) = 0;
                    qfree(v138);
                  }
                  v135 = (char *)v135 + 1;
                  v133 = (char *)v203;
                }
                while ( v134 != v135 );
              }
              v204[0] = nullptr;
              qfree(v133);
            }
            goto LABEL_3;
          }
          if ( !under_debugger )
            interr(1069);
LABEL_235:
          BUG();
        }
        if ( v39 != 48 )
          goto LABEL_3;
      }
LABEL_55:
      if ( *(_QWORD *)(a3 + 72) )
      {
        idati = *(_QWORD *)(a1 + 248);
        v217[0].m128i_i64[1] = *(_QWORD *)(a3 + 72);
        v217[1].m128i_i16[0] = 0;
        if ( !idati )
          idati = get_idati(a1, a2);
        v217[0].m128i_i64[0] = idati;
        create_tinfo(a2, v4, 61, v217);
      }
      goto LABEL_3;
    default:
      if ( !under_debugger )
        interr(873);
      goto LABEL_235;
  }
}
