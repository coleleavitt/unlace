__int64 __fastcall sub_1E727C0(__int64 *a1, const __m128i *a2, __int64 *a3, unsigned int a4, __m128i a5, double a6)
{
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r10d
  unsigned __int64 v14; // rdx
  unsigned int v15; // r10d
  unsigned int v16; // r14d
  __int64 v17; // rbp
  bool v18; // r13
  __int64 v19; // r8
  __int8 v20; // r13
  int v21; // ecx
  size_t v22; // r15
  size_t v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _BYTE *v29; // rdi
  __int64 v31; // r13
  __int64 v32; // r14
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  __m128i v35; // xmm4
  __m128i v36; // xmm5
  __m128i si128; // xmm6
  __m128i v38; // xmm7
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 *v45; // rsi
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r13
  __int64 v57; // r14
  __m128i *v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rbp
  __int16 v61; // dx
  __int16 v62; // dx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r13
  __int16 v68; // dx
  unsigned int v69; // edx
  __int64 *v70; // rsi
  unsigned int v71; // ecx
  int v72; // ecx
  unsigned int v73; // r14d
  size_t v74; // rax
  __int16 v75; // ax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbp
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rbp
  __int16 v82; // dx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r12
  __int64 v90; // rax
  _QWORD *v91; // rax
  __m128 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __m128i *v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned __int8 v99; // cl
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r12
  __int64 v105; // rax
  _QWORD *v106; // rax
  unsigned __int8 v107; // al
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r14
  unsigned __int16 v113; // ax
  __int64 v114; // rsi
  __m128i *v115; // r14
  __int64 v116; // rdx
  __int32 v117; // ecx
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbp
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  _QWORD *v127; // rax
  __m128 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // rsi
  __int64 v134; // rsi
  __int64 v135; // rsi
  __int64 v136; // rsi
  __int64 v137; // rsi
  __int64 v138; // rsi
  __int64 v139; // rsi
  __int64 v140; // rsi
  __int64 v141; // rsi
  __int64 v142; // rdx
  unsigned __int64 v143; // rax
  __int64 v144; // rdi
  __int64 v145; // rsi
  __int64 v146; // rsi
  __int64 v147; // rsi
  __int64 v148; // rdx
  __int64 v149; // rsi
  unsigned __int16 v150; // ax
  char *v151; // rdi
  char *v152; // rax
  signed __int64 v153; // rdx
  __int64 v154; // rbp
  __m128 v155; // rax
  __int64 v156; // rbp
  __m128 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rsi
  __int64 v160; // rsi
  __int64 v161; // rsi
  __int64 v162; // rsi
  unsigned int *v163; // rax
  __int64 v164; // rsi
  __int64 *v165; // rsi
  unsigned int v166; // edx
  __m128 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rsi
  __int64 v170; // rsi
  __m128 v171; // rax
  __int64 v172; // rax
  int srcc; // [rsp+8h] [rbp-1F0h]
  void *srca; // [rsp+8h] [rbp-1F0h]
  void *srcb; // [rsp+8h] [rbp-1F0h]
  _DWORD *srcd; // [rsp+8h] [rbp-1F0h]
  unsigned int v178; // [rsp+10h] [rbp-1E8h]
  unsigned __int8 v179; // [rsp+10h] [rbp-1E8h]
  __int64 v180; // [rsp+18h] [rbp-1E0h]
  _BYTE *v181; // [rsp+18h] [rbp-1E0h]
  __int32 v182; // [rsp+20h] [rbp-1D8h]
  __int64 v183; // [rsp+28h] [rbp-1D0h]
  unsigned int v184; // [rsp+3Ch] [rbp-1BCh] BYREF
  __m128i v185; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v186; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v187; // [rsp+58h] [rbp-1A0h]
  void *v188; // [rsp+60h] [rbp-198h]
  __int64 v189; // [rsp+78h] [rbp-180h] BYREF
  void *ptr; // [rsp+80h] [rbp-178h] BYREF
  signed __int64 v191; // [rsp+88h] [rbp-170h]
  _BYTE v192[32]; // [rsp+90h] [rbp-168h] BYREF
  __m128 v193; // [rsp+B0h] [rbp-148h] BYREF
  __m128i v194; // [rsp+C0h] [rbp-138h] BYREF
  __m128i v195; // [rsp+D0h] [rbp-128h] BYREF
  __m128i v196; // [rsp+E0h] [rbp-118h] BYREF
  __m128i v197; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v198; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v199; // [rsp+108h] [rbp-F0h] BYREF
  void *n_8; // [rsp+118h] [rbp-E0h]
  __int64 v201; // [rsp+120h] [rbp-D8h]
  _OWORD v202[4]; // [rsp+130h] [rbp-C8h] BYREF
  void *v203[2]; // [rsp+170h] [rbp-88h] BYREF
  _OWORD v204[2]; // [rsp+180h] [rbp-78h] BYREF
  __int64 v205; // [rsp+1A0h] [rbp-58h]
  char v206; // [rsp+1A8h] [rbp-50h]
  unsigned int v207; // [rsp+1B0h] [rbp-48h]
  char v208; // [rsp+1B4h] [rbp-44h]

  v9 = *a3;
  v10 = *a1;
  sub_1E5FE50((__int64)&v186, *a3);
  v14 = *(unsigned __int16 *)(a2[4].m128i_i64[1] + 8);
  switch ( (_DWORD)v14 )
  {
    case 0xE4:
      v16 = sub_18067B0(v10, (__int64)a2);
      if ( (_BYTE)v16 || !v187 )
        goto LABEL_33;
      v42 = sub_A74120(*(_QWORD *)(v10 + 248), v187, (*(_WORD *)(v187 + 20) >> 2) | 0x40u);
      if ( v42 == v187 )
      {
LABEL_60:
        v43 = v186;
        goto LABEL_45;
      }
LABEL_44:
      v187 = v42;
      v43 = sub_1E5E740((__int64)&v186, *(_QWORD *)(v10 + 248), v186, 0);
LABEL_45:
      *a3 = v43;
      goto LABEL_50;
    case 0x3F:
      if ( !v187 )
        goto LABEL_71;
      v31 = v187;
      if ( *(_BYTE *)(v187 + 16) != 26 )
      {
        if ( !sub_1E5D9F0(v187, v9, v14, v11) )
        {
          sub_168B9F0((__int64)v202, (__int64 *)(v10 + 8), a2[1].m128i_u32[2], 0x19C6u, 0);
          v76 = sub_15DD120((__int64)v202, (__int64)a2);
          LOBYTE(ptr) = (a2[2].m128i_i8[3] & 2) != 0;
          v77 = sub_1588420(v76, (unsigned __int8 *)&ptr);
          v78 = v77;
          if ( *(_BYTE *)(v77 + 120) )
          {
            sub_1E5E160((unsigned __int8 **)(v77 + 32), 12);
          }
          else if ( *(_BYTE *)(v77 + 132) )
          {
            v89 = sub_168B9E0((_QWORD *)v77);
            v90 = *(_QWORD *)(v78 + 16);
            if ( v90 )
              v90 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v90 + 32LL))(*(_QWORD *)(v78 + 16));
            v193.m128_u64[0] = v90;
            v91 = sub_1587BC0(v89, (__int64 *)&v193, v85, v86, v87, v88);
            sub_1E5E160((unsigned __int8 **)(*v91 + 32LL * *(unsigned int *)(v78 + 128) + 8), 12);
          }
          v16 = 1;
          sub_15F7200(v202);
          a2[3].m128i_i8[10] |= 1u;
          goto LABEL_33;
        }
        v31 = v187;
        if ( *(_BYTE *)(v187 + 16) != 26 )
          v31 = sub_1E5D9F0(v187, v9, v47, v48);
      }
      v32 = *(_QWORD *)(v10 + 248);
      sub_A5E110(&v193, v31);
      v33 = _mm_load_si128(&v194);
      v34 = _mm_load_si128(&v195);
      v35 = _mm_load_si128(&v196);
      v36 = _mm_load_si128(&v197);
      v202[0] = _mm_load_si128((const __m128i *)&v193);
      si128 = _mm_load_si128((const __m128i *)&v198);
      v202[1] = v33;
      v38 = _mm_load_si128((const __m128i *)((char *)&v199 + 8));
      v202[2] = v34;
      v202[3] = v35;
      *(__m128i *)v203 = v36;
      v204[0] = si128;
      v204[1] = v38;
      v205 = v201;
      BYTE2(v202[0]) |= 4u;
      v39 = sub_A73610(
              v32,
              *(_QWORD *)(v31 + 24),
              (__int64 *)(v31 + 48),
              *(unsigned __int16 *)(v31 + 22),
              (const __m128i *)v202,
              0);
      *a3 = v39;
      v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v40 == v187 )
      {
LABEL_70:
        v41 = v186;
        goto LABEL_40;
      }
LABEL_39:
      v187 = v40;
      v41 = sub_1E5E740((__int64)&v186, *(_QWORD *)(v10 + 248), v186, 0);
LABEL_40:
      *a3 = v41;
      v16 = 1;
      goto LABEL_33;
    case 0x58:
      if ( !v187 )
        goto LABEL_71;
      if ( (*(_BYTE *)(*(_QWORD *)(v10 + 232) + 157LL) & 1) == 0 )
      {
        v44 = a2[1].m128i_u32[2];
        v45 = (__int64 *)(v10 + 8);
        v46 = 127;
LABEL_49:
        sub_168B9F0((__int64)v202, v45, v44, v46, 0);
        sub_15DD120((__int64)v202, (__int64)a2);
        sub_15F7200(v202);
        a2[3].m128i_i8[10] |= 1u;
        goto LABEL_50;
      }
      v61 = *(_WORD *)(v187 + 20) >> 2;
      HIBYTE(v61) |= 0x20u;
      v42 = sub_A74120(*(_QWORD *)(v10 + 248), v187, v61);
      if ( v42 == v187 )
        goto LABEL_60;
      goto LABEL_44;
    case 0xD0:
      if ( !a2[3].m128i_i16[4] )
      {
        v16 = 0;
        if ( !v187 )
          goto LABEL_33;
        if ( !(unsigned __int8)sub_1A913B0(
                                 *(__int64 **)(v10 + 736),
                                 a2[1].m128i_u32[2],
                                 *(_QWORD *)(v187 + 24),
                                 v11,
                                 v12) )
        {
          v56 = *a3;
          v57 = *(_QWORD *)(v10 + 248);
          if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 107LL) & 4) != 0 )
          {
            v82 = *(_WORD *)(v187 + 20) >> 2;
            LOBYTE(v82) = v82 | 0x80;
            v83 = sub_A74120(*(_QWORD *)(v10 + 248), v187, v82);
            if ( v83 == v187 )
            {
              v84 = v186;
            }
            else
            {
              v187 = v83;
              v84 = sub_1E5E740((__int64)&v186, *(_QWORD *)(v10 + 248), v186, 0);
            }
            *a3 = v84;
            v57 = *(_QWORD *)(v10 + 248);
          }
          a2[3].m128i_i8[10] |= 2u;
          v58 = (__m128i *)sub_1E61010((__int64 *)(v57 + 2352), 40, 3u, v53, v54, v55);
          v59 = v57;
          v16 = 1;
          v60 = (__int64)v58;
          sub_B14BB0(v58, v59, a2);
          *a3 = sub_1E5D550((__int64)a1, v60, v56, *a3);
          goto LABEL_33;
        }
      }
      goto LABEL_50;
    case 0x1C:
      if ( (unsigned __int8)sub_1815DD0((__int64 *)v10, (__int64)a2) )
        goto LABEL_50;
      v16 = sub_18067B0(v10, (__int64)a2);
      if ( (_BYTE)v16 )
        goto LABEL_50;
      if ( !v187 )
        goto LABEL_33;
      v68 = *(_WORD *)(v187 + 20) >> 2;
      HIBYTE(v68) |= 1u;
      v42 = sub_A74120(*(_QWORD *)(v10 + 248), v187, v68);
      if ( v42 == v187 )
        goto LABEL_60;
      goto LABEL_44;
    case 0x1D:
      if ( (*(_BYTE *)(*(_QWORD *)(v10 + 232) + 108LL) & 1) == 0 )
      {
        v69 = a2[1].m128i_u32[2];
        v70 = (__int64 *)(v10 + 8);
        v71 = 7133;
LABEL_92:
        sub_168B9F0((__int64)v202, v70, v69, v71, 0);
        sub_15F7200(v202);
        a2[3].m128i_i8[10] |= 1u;
        goto LABEL_50;
      }
      if ( (unsigned __int8)sub_1815DD0((__int64 *)v10, (__int64)a2)
        || (unsigned __int8)sub_18067B0(v10, (__int64)a2)
        || !v187 )
      {
LABEL_50:
        v16 = 1;
        goto LABEL_33;
      }
      v62 = *(_WORD *)(v187 + 20) >> 2;
      HIBYTE(v62) |= 0x10u;
      v42 = sub_A74120(*(_QWORD *)(v10 + 248), v187, v62);
      if ( v42 == v187 )
        goto LABEL_60;
      goto LABEL_44;
    case 0x146:
      v16 = sub_182B100(v10, (__int64)a2, (unsigned int *)&ptr, *(double *)a5.m128i_i64);
      if ( (_BYTE)v16 || !v187 )
        goto LABEL_33;
      if ( ((*(_WORD *)(v187 + 20) >> 2) & 0x3F) == 2 )
      {
        sub_168B9F0((__int64)v202, (__int64 *)(v10 + 8), a2[1].m128i_u32[2], 0xCADu, 0);
        v92.m128_u64[0] = (unsigned __int64)sub_F5C3D0(2);
        v193 = v92;
        v93 = sub_166BAF0((__int64)v202, (__int64)&v193);
        v94 = sub_1E71150(v93, (__int64)"regparm");
        v95 = &v185;
        v185.m128i_i8[0] = (a2[2].m128i_i8[3] & 2) != 0;
        goto LABEL_127;
      }
      v40 = sub_A74120(*(_QWORD *)(v10 + 248), v187, (*(_WORD *)(v187 + 20) >> 2) & 0x31FFu | (((_WORD)ptr + 1) << 9));
      if ( v40 == v187 )
        goto LABEL_70;
      goto LABEL_39;
  }
  if ( (unsigned __int16)v14 <= 0x2Au )
  {
    v63 = 0x78D00000000LL;
    if ( _bittest64(&v63, v14) )
    {
      v64 = (__int64)a2;
      v16 = sub_1815DD0((__int64 *)v10, (__int64)a2);
      if ( !(_BYTE)v16 )
      {
        if ( (unsigned int)*(unsigned __int16 *)(a2[4].m128i_i64[1] + 8) - 41 > 1
          || (v64 = (__int64)a2, !(unsigned __int8)sub_18067B0(v10, (__int64)a2)) )
        {
          if ( !v187 )
            goto LABEL_33;
          v67 = v187;
          if ( *(_BYTE *)(v187 + 16) != 26 )
          {
            v67 = sub_1E5D9F0(v187, v64, v65, v66);
            if ( !v67 )
            {
              sub_168B9F0((__int64)v202, (__int64 *)(v10 + 8), a2[1].m128i_u32[2], 0x19C6u, 0);
              v79 = sub_15DD120((__int64)v202, (__int64)a2);
              LOBYTE(ptr) = (a2[2].m128i_i8[3] & 2) != 0;
              v80 = sub_1588420(v79, (unsigned __int8 *)&ptr);
              v81 = v80;
              if ( *(_BYTE *)(v80 + 120) )
              {
                sub_1E5E160((unsigned __int8 **)(v80 + 32), 12);
              }
              else if ( *(_BYTE *)(v80 + 132) )
              {
                v104 = sub_168B9E0((_QWORD *)v80);
                v105 = *(_QWORD *)(v81 + 16);
                if ( v105 )
                  v105 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v105 + 32LL))(*(_QWORD *)(v81 + 16));
                v193.m128_u64[0] = v105;
                v106 = sub_1587BC0(v104, (__int64 *)&v193, v100, v101, v102, v103);
                sub_1E5E160((unsigned __int8 **)(*v106 + 32LL * *(unsigned int *)(v81 + 128) + 8), 12);
              }
              sub_15F7200(v202);
              a2[3].m128i_i8[10] |= 1u;
              goto LABEL_33;
            }
          }
          sub_A5E110(&v193, v67);
          switch ( *(_WORD *)(a2[4].m128i_i64[1] + 8) )
          {
            case ' ':
              if ( !a2[3].m128i_i16[4] )
              {
                v44 = a2[1].m128i_u32[2];
                v45 = (__int64 *)(v10 + 8);
                v46 = 4184;
                goto LABEL_49;
              }
              v73 = 0;
              break;
            case '!':
            case '$':
            case '%':
            case '&':
            case '*':
              if ( !(unsigned __int8)sub_1E64980((__int64)a1, (__int64)a2, 41) )
              {
                v193.m128_i16[1] |= 0x10u;
                goto LABEL_56;
              }
              goto LABEL_50;
            case '"':
              v72 = 2;
              goto LABEL_94;
            case '#':
              v72 = 4;
              goto LABEL_94;
            case '\'':
              v72 = 3;
              goto LABEL_94;
            case '(':
              v72 = 1;
LABEL_94:
              if ( !sub_1E67EB0(v10, (__int64)&v193, (__int64)a2, v72, a5, a6) )
                goto LABEL_56;
              goto LABEL_50;
            case ')':
              if ( (unsigned __int8)sub_1E64980((__int64)a1, (__int64)a2, 42) )
                goto LABEL_50;
              v193.m128_i16[1] |= 8u;
LABEL_56:
              v49 = *(_QWORD *)(v67 + 24);
              v50 = sub_A73610(
                      *(_QWORD *)(v10 + 248),
                      v49,
                      (__int64 *)(v67 + 48),
                      *(unsigned __int16 *)(v67 + 22),
                      (const __m128i *)&v193,
                      0);
              goto LABEL_57;
          }
          while ( 1 )
          {
            v184 = 0;
            ptr = nullptr;
            v191 = 0;
            if ( !(unsigned __int8)sub_181EB00(v10, (__int64)a2, v73, &ptr, &v184, a5, a6) )
              break;
            v74 = j__strlen("sme_za_state");
            if ( v74 != v191 || v74 && memcmp(ptr, "sme_za_state", v74) )
            {
              sub_168B9F0((__int64)v202, (__int64 *)(v10 + 8), v184, 0x14FCu, 0);
              if ( v206 )
              {
                sub_AEC220((unsigned __int8 **)&v202[2], ptr, v191);
              }
              else if ( v208 )
              {
                v123 = sub_168B9E0(v202);
                v126 = *(_QWORD *)&v202[1];
                if ( *(_QWORD *)&v202[1] )
                  v126 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v202[1] + 32LL))(*(_QWORD *)&v202[1]);
                v185.m128i_i64[0] = v126;
                v127 = sub_1587BC0(v123, v185.m128i_i64, v121, v122, v124, v125);
                sub_AEC220((unsigned __int8 **)(*v127 + 32LL * v207 + 8), ptr, v191);
              }
              sub_15F7200(v202);
              a2[3].m128i_i8[10] |= 1u;
              goto LABEL_50;
            }
            v75 = ((unsigned __int16)v193.m128_i16[1] >> 3) & 0x1FF;
            if ( (((unsigned __int16)v193.m128_i16[1] >> 3) & 0xFC) != 0 )
            {
              v69 = a2[1].m128i_u32[2];
              v70 = (__int64 *)(v10 + 8);
              v71 = 3463;
              goto LABEL_92;
            }
            HIBYTE(v75) |= 1u;
            ++v73;
            v193.m128_i16[1] = v193.m128_i16[1] & 0xF007 | (8 * (v75 & 0x1FF));
            if ( a2[3].m128i_u16[4] <= v73 )
              goto LABEL_56;
          }
        }
      }
      goto LABEL_50;
    }
  }
  if ( (_DWORD)v14 == 236 )
  {
    v16 = 0;
    if ( !v187 )
      goto LABEL_33;
    v16 = sub_18067B0(v10, (__int64)a2);
    if ( (_BYTE)v16 )
      goto LABEL_141;
    v98 = v187;
    if ( *(_BYTE *)(v187 + 16) != 26 )
      v98 = sub_F63050(v187, a2, v96, v97);
    v99 = (*(_BYTE *)(v98 + 19) >> 1) & 0xF;
    if ( v99 )
    {
      if ( v99 <= 7u && ((1LL << v99) & 0x8C) != 0 )
      {
        v16 = 1;
        sub_168B9F0((__int64)v202, (__int64 *)(v10 + 8), a2[1].m128i_u32[2], 0x1BF4u, 0);
        sub_15F7200(v202);
        goto LABEL_33;
      }
      goto LABEL_50;
    }
    v131 = *(_QWORD *)(v10 + 248);
    v49 = v98 & 0xFFFFFFFFFFFFFFF0LL;
    LODWORD(v202[0]) = 4;
    memset((char *)v202 + 8, 0, 40);
    v50 = sub_A823B0(v131, v98 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_57:
    v42 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
    v52 = (unsigned int)*(unsigned __int8 *)(v42 + 16) - 25;
    if ( (unsigned int)v52 > 1 )
      v42 = sub_1E5DA20(v42, v49, v52, v51);
    if ( v187 == v42 )
      goto LABEL_60;
    goto LABEL_44;
  }
  LOBYTE(v13) = (_DWORD)v14 == 55;
  LOBYTE(v11) = (_DWORD)v14 == 22;
  v15 = v11 | v13;
  LOBYTE(v15) = ((unsigned int)(v14 - 240) <= 1) | v15;
  v16 = v15;
  if ( !(_BYTE)v15 )
  {
    if ( !v187 )
      goto LABEL_33;
    if ( (unsigned __int8)sub_182B0C0((__int64 *)v10, (__int64)a2, &v185, 0, a4, a5, a6) )
      goto LABEL_50;
    v181 = (_BYTE *)v187;
    v178 = (*(_WORD *)(v187 + 20) >> 2) & 0x3F;
    v112 = *(_QWORD *)(v10 + 248);
    v113 = *(_WORD *)(a2[4].m128i_i64[1] + 8);
    if ( v113 == 311 )
    {
      a2[3].m128i_i8[10] |= 2u;
      v162 = v112;
      v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
      sub_B176B0(v115, v162, a2);
      goto LABEL_165;
    }
    if ( v113 > 0x137u )
    {
      if ( v113 == 350 )
      {
        a2[3].m128i_i8[10] |= 2u;
        v170 = v112;
        v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
        sub_B195D0(v115, v170, a2);
        goto LABEL_165;
      }
      if ( v113 > 0x15Eu )
      {
        if ( v113 == 371 )
        {
          a2[3].m128i_i8[10] |= 2u;
          v164 = v112;
          v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
          sub_B19CE0(v115, v164, a2);
          goto LABEL_165;
        }
        if ( v113 > 0x173u )
        {
          if ( v113 == 377 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v141 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B19DA0(v115, v141, a2);
            goto LABEL_165;
          }
          if ( v113 == 401 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v147 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B1B400(v115, v147, a2);
            goto LABEL_165;
          }
        }
        else
        {
          if ( v113 == 355 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v138 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B19770(v115, v138, a2);
            goto LABEL_165;
          }
          if ( v113 == 362 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v140 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B198E0(v115, v140, a2);
            goto LABEL_165;
          }
        }
      }
      else
      {
        if ( v113 == 320 )
        {
          v182 = 128;
          if ( a2[3].m128i_i16[4] )
          {
            sub_C3EB00((__int64)v202, a2[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v112, nullptr, v110, v111);
            LODWORD(v168) = v202[0];
            if ( DWORD2(v202[0]) > 0x40 )
              v168 = **(_QWORD **)&v202[0];
            v182 = v168;
            sub_98E4B0((__int64)v202);
          }
          v169 = v112;
          v115 = (__m128i *)sub_9C3B30((__int64 *)(v112 + 2352), 48, 3u);
          sub_B17B20(v115, v169, a2, v182);
          goto LABEL_165;
        }
        if ( v113 > 0x140u )
        {
          if ( v113 == 321 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v137 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B17B90(v115, v137, a2);
            goto LABEL_165;
          }
          if ( v113 == 325 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v139 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B17C90(v115, v139, a2);
            goto LABEL_165;
          }
        }
        else
        {
          if ( v113 == 312 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v133 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B176E0(v115, v133, a2);
            goto LABEL_165;
          }
          if ( v113 == 313 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v136 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B17710(v115, v136, a2);
            goto LABEL_165;
          }
        }
      }
    }
    else
    {
      if ( v113 == 133 )
      {
        a2[3].m128i_i8[10] |= 2u;
        v160 = v112;
        v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
        sub_B12C60(v115, v160, a2);
        goto LABEL_165;
      }
      if ( v113 > 0x85u )
      {
        if ( v113 == 186 )
        {
          a2[3].m128i_i8[10] |= 2u;
          v161 = v112;
          v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
          sub_B14210(v115, v161, a2);
          goto LABEL_165;
        }
        if ( v113 > 0xBAu )
        {
          if ( v113 == 298 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v135 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B17470(v115, v135, a2);
            goto LABEL_165;
          }
          if ( v113 == 301 )
          {
            v142 = a2[5].m128i_i64[0];
            v143 = v142 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !a2[3].m128i_i16[4] || (v142 & 2) != 0 )
            {
              v163 = *(unsigned int **)(*(_QWORD *)(v143 + 8) + 16LL);
              v144 = (__int64)(v163 + 4);
              v145 = *v163;
            }
            else
            {
              v144 = v143 + 4LL * *(unsigned int *)(v143 + 4) + 20;
              v145 = *(_DWORD *)(v143 + 16) * ((*(_WORD *)(v143 + 2) >> 6) & 7u);
            }
            sub_B17590(v144, v145, (int *)v202);
            v146 = v112;
            v115 = (__m128i *)sub_9C3B30((__int64 *)(v112 + 2352), 48, 3u);
            sub_B17560(v115, v146, a2, v202[0]);
            goto LABEL_165;
          }
        }
        else
        {
          if ( v113 == 171 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v132 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B13D40(v115, v132, a2);
            goto LABEL_165;
          }
          if ( v113 == 184 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v134 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B141B0(v115, v134, a2);
            goto LABEL_165;
          }
        }
      }
      else
      {
        if ( v113 == 41 )
        {
          a2[3].m128i_i8[10] |= 2u;
          v159 = v112;
          v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
          sub_B0B2A0(v115, v159, a2);
          goto LABEL_165;
        }
        if ( v113 > 0x29u )
        {
          if ( v113 == 58 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v130 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B0D350(v115, v130, a2);
            goto LABEL_165;
          }
          if ( v113 == 117 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v149 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B11850(v115, v149, a2);
            goto LABEL_165;
          }
        }
        else
        {
          if ( !v113 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v114 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B06760(v115, v114, a2);
LABEL_165:
            if ( v185.m128i_i32[0] == v178 )
            {
              v117 = v178;
              if ( v178 > 0x14 )
                goto LABEL_232;
LABEL_168:
              if ( ((1LL << v117) & 0x10F13E) != 0 && v181[16] == 26 && (char)v181[19] < 0 )
              {
                v165 = (__int64 *)(v10 + 8);
                v166 = a2[1].m128i_u32[2];
                if ( (unsigned int)(v117 - 1) <= 1 )
                {
                  sub_168B9F0((__int64)v202, v165, v166, 0x1A09u, 0);
                  v171.m128_u64[0] = (unsigned __int64)sub_F5C3D0(v185.m128i_i32[0]);
                  v193 = v171;
                  v172 = sub_166BAF0((__int64)v202, (__int64)&v193);
                  LODWORD(ptr) = 1;
                  v16 = *(unsigned __int8 *)(sub_1587D10(v172, (int *)&ptr) + 120);
                }
                else
                {
                  a2[3].m128i_i8[10] |= 1u;
                  sub_168B9F0((__int64)v202, v165, v166, 0xD68u, 0);
                  v167.m128_u64[0] = (unsigned __int64)sub_F5C3D0(v185.m128i_i32[0]);
                  v193 = v167;
                  v16 = *(unsigned __int8 *)(sub_166BAF0((__int64)v202, (__int64)&v193) + 120);
                }
                sub_15F7200(v202);
                goto LABEL_33;
              }
              if ( v117 == 2 && (v181[21] & 0x38) != 0 )
              {
                v16 = 1;
                sub_168B9F0((__int64)v202, (__int64 *)(v10 + 8), a2[1].m128i_u32[2], 0xCADu, 0);
                v156 = sub_1E71150((__int64)v202, (__int64)"regparm");
                v157.m128_u64[0] = (unsigned __int64)sub_F5C3D0(2);
                v193 = v157;
                v158 = sub_166BAF0(v156, (__int64)&v193);
                LOBYTE(ptr) = (a2[2].m128i_i8[3] & 2) != 0;
                sub_1588420(v158, (unsigned __int8 *)&ptr);
                sub_15F7200(v202);
                a2[3].m128i_i8[10] |= 1u;
                goto LABEL_33;
              }
LABEL_173:
              if ( v178 != v117 )
              {
                v118 = sub_A74120(*(_QWORD *)(v10 + 248), v187, v117 | (*(_WORD *)(v187 + 20) >> 2) & 0x3FC0u);
                if ( v118 == v187 )
                {
                  v119 = v186;
                }
                else
                {
                  v187 = v118;
                  v119 = sub_1E5E740((__int64)&v186, *(_QWORD *)(v10 + 248), v186, 0);
                }
                v120 = v119;
                goto LABEL_177;
              }
LABEL_232:
              v120 = *a3;
LABEL_177:
              v43 = sub_1E5D550((__int64)a1, (__int64)v115, *a3, v120);
              goto LABEL_45;
            }
            if ( !sub_17A3D00(v10, *a3, v116) )
            {
              v117 = v185.m128i_i32[0];
              if ( v185.m128i_i32[0] > 0x14u )
                goto LABEL_173;
              goto LABEL_168;
            }
            sub_168B9F0((__int64)v202, (__int64 *)(v10 + 8), a2[1].m128i_u32[2], 0xCADu, 0);
            v152 = sub_F5C3D0(v185.m128i_i32[0]);
            v191 = v153;
            ptr = v152;
            v154 = sub_166BAF0((__int64)v202, (__int64)&ptr);
            v155.m128_u64[0] = (unsigned __int64)sub_F5C3D0(v178);
            v193 = v155;
            v94 = sub_166BAF0(v154, (__int64)&v193);
            v95 = (__m128i *)&v184;
            LOBYTE(v184) = (a2[2].m128i_i8[3] & 2) != 0;
LABEL_127:
            sub_1588420(v94, (unsigned __int8 *)v95);
            sub_15F7200(v202);
            a2[3].m128i_i8[10] |= 1u;
            goto LABEL_50;
          }
          if ( v113 == 1 )
          {
            a2[3].m128i_i8[10] |= 2u;
            v129 = v112;
            v115 = (__m128i *)sub_1E61010((__int64 *)(v112 + 2352), 40, 3u, v109, v110, v111);
            sub_B06800(v115, v129, a2);
            goto LABEL_165;
          }
        }
      }
    }
    return sub_1E742A0();
  }
  if ( !v187 )
  {
LABEL_71:
    v16 = 0;
    goto LABEL_33;
  }
  v17 = v187;
  v180 = *a1;
  if ( *(_BYTE *)(v187 + 16) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v187 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26
      || (v17 = sub_F63050(v187, v9, v14, *a1)) == 0 )
    {
      sub_168B9F0((__int64)v202, (__int64 *)(v180 + 8), a2[1].m128i_u32[2], 0xF15u, 0);
      v128.m128_u64[0] = *(_QWORD *)(a2->m128i_i64[0] + 16);
      v128.m128_u64[1] = *(unsigned int *)v128.m128_u64[0];
      v128.m128_u64[0] += 16LL;
      v193 = v128;
      sub_166BAF0((__int64)v202, (__int64)&v193);
      sub_15F7200(v202);
      goto LABEL_33;
    }
    LODWORD(v14) = *(unsigned __int16 *)(a2[4].m128i_i64[1] + 8);
  }
  if ( (_DWORD)v14 == 241 )
  {
    v18 = v16;
LABEL_146:
    v107 = sub_15EB980((__int64)a2, v180, 1u);
    if ( !v107 )
      goto LABEL_141;
    if ( a2[3].m128i_i16[4] == 1 )
    {
      v179 = v107;
      srcd = (_DWORD *)(a2[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
      v150 = sub_1E72620(
               v180,
               srcd,
               (_BYTE *)(*(_QWORD *)(a2->m128i_i64[0] + 16) + 16LL),
               **(unsigned int **)(a2->m128i_i64[0] + 16),
               (__int64)srcd,
               v108,
               *(double *)a5.m128i_i64);
      v19 = (__int64)srcd;
      if ( !HIBYTE(v150) )
      {
        a2[3].m128i_i8[10] |= 1u;
        v16 = v179;
        goto LABEL_33;
      }
      if ( (_BYTE)v150 == 3 )
        goto LABEL_149;
      if ( (_BYTE)v150 == 1 )
        goto LABEL_16;
    }
    v19 = 0;
LABEL_149:
    v20 = !v18;
LABEL_17:
    v21 = a2[1].m128i_i32[2];
    v185.m128i_i8[0] = v20;
    v185.m128i_i64[1] = v19;
    srcc = v21;
    sub_A5DD60(v202, v17);
    if ( !(unsigned __int8)sub_19EE280(v180, v202, v185.m128i_i8, srcc) )
    {
      sub_A5E110(&v193, v17);
      v22 = *((_QWORD *)&v199 + 1);
      *(_QWORD *)&v202[0] = (char *)&v202[1] + 8;
      srca = (void *)v199;
      *(__m128i *)((char *)v202 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
      if ( *((_QWORD *)&v199 + 1) > 0x28u )
      {
        sub_2236E10(v202, (char *)&v202[1] + 8, *((_QWORD *)&v199 + 1), 1);
        v151 = (char *)(*(_QWORD *)&v202[0] + *((_QWORD *)&v202[0] + 1));
      }
      else
      {
        if ( !*((_QWORD *)&v199 + 1) )
        {
LABEL_20:
          *((_QWORD *)&v202[0] + 1) += v22;
          v203[0] = v204;
          srcb = n_8;
          v203[1] = (void *)0x600000000LL;
          v23 = 8 * v201;
          v24 = (8 * v201) >> 3;
          if ( v24 > 6 )
          {
            v183 = 8 * v201;
            sub_2237220(v203, v204, (8 * v201) >> 3, 8);
            v23 = v183;
          }
          if ( v23 )
            memcpy((char *)v203[0] + 8 * LODWORD(v203[1]), srcb, v23);
          LODWORD(v203[1]) += v24;
          ptr = v192;
          v191 = 0x100000000LL;
          sub_F5EEE0((__int64 *)v202, &v185, (__int64)&ptr);
          v199 = v202[0];
          n_8 = v203[0];
          v201 = LODWORD(v203[1]);
          v25 = *(_QWORD *)(v17 + 24);
          v26 = *(_QWORD *)(sub_A73610(
                              *(_QWORD *)(v180 + 248),
                              v25,
                              (__int64 *)(v17 + 48),
                              *(unsigned __int16 *)(v17 + 22),
                              (const __m128i *)&v193,
                              0)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v26 + 16) - 25 > 1 )
          {
            v148 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                 - 25;
            if ( (unsigned int)v148 > 1 )
              v26 = 0;
            else
              v26 = sub_F63050(v26, v25, v148, v27);
          }
          if ( v187 == v26 )
          {
            v28 = v186;
          }
          else
          {
            v187 = v26;
            v28 = sub_1E5E740((__int64)&v186, *(_QWORD *)(v180 + 248), v186, 0);
          }
          v29 = ptr;
          *a3 = v28;
          if ( v29 != v192 )
            free(v29);
          if ( v203[0] != v204 )
            free(v203[0]);
          if ( *(_OWORD **)&v202[0] != (_OWORD *)((char *)&v202[1] + 8) )
            free(*(void **)&v202[0]);
          goto LABEL_33;
        }
        v151 = (char *)&v202[1] + 8;
      }
      memcpy(v151, srca, v22);
      goto LABEL_20;
    }
LABEL_141:
    a2[3].m128i_i8[10] |= 1u;
    goto LABEL_33;
  }
  v18 = (_DWORD)v14 == 55;
  if ( (_DWORD)v14 == 240 )
    goto LABEL_146;
  if ( !(unsigned __int8)sub_18067B0(v180, (__int64)a2) )
  {
LABEL_16:
    v19 = 0;
    v20 = 3 - v18;
    goto LABEL_17;
  }
LABEL_33:
  if ( v188 != &v189 )
    free(v188);
  return v16;
}
