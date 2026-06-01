__int64 __fastcall sub_16A13C0(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int32 a6,
        unsigned int a7,
        char a8,
        int a9,
        unsigned int a10,
        unsigned __int32 a11)
{
  __int32 v11; // r14d
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // ebp
  __m128i v19; // xmm0
  const __m128i *v20; // r14
  _QWORD *v21; // r15
  unsigned __int64 v22; // rax
  __m128i *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm0
  int v27; // eax
  __int64 v28; // rsi
  __int64 i; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  size_t v33; // r15
  char *v34; // rcx
  _QWORD *v35; // rsi
  void *v36; // rdi
  unsigned __int64 v37; // r15
  bool v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r15
  unsigned __int8 *v48; // r12
  _BYTE *v49; // rdx
  __int64 v50; // rax
  unsigned __int8 *v51; // r12
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int8 *v57; // r12
  unsigned __int8 *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r12
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r15
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r12
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // r15
  void *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 v94; // rdx
  __int64 v95; // r15
  void *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rax
  void *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  void *v106; // rdi
  void *v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r14
  unsigned __int64 v111; // rax
  __int64 v112; // rdi
  __m128i *v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __m128 v116; // xmm0
  __int64 v117; // rsi
  __int64 j; // rax
  _QWORD *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rsi
  size_t v122; // r15
  char *v123; // rcx
  _QWORD *v124; // rsi
  __int64 *v125; // rsi
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // r12
  __int64 v131; // rax
  _QWORD *v132; // rax
  __int64 v133; // r15
  _BYTE *v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int8 *v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdx
  int v140; // eax
  __int64 v141; // r12
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rdx
  int v145; // eax
  __int64 v146; // r12
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rax
  void *v153; // rdi
  __int64 v154; // rax
  __int64 v155; // r15
  __int64 v156; // rax
  __int64 v157; // r15
  void *v158; // rdi
  __m128i v159; // [rsp+0h] [rbp-238h] BYREF
  __int64 v160; // [rsp+18h] [rbp-220h]
  __m128i v161; // [rsp+20h] [rbp-218h] BYREF
  void *v162; // [rsp+30h] [rbp-208h] BYREF
  __int64 v163; // [rsp+38h] [rbp-200h] BYREF
  unsigned __int64 v164; // [rsp+40h] [rbp-1F8h] BYREF
  int v165; // [rsp+48h] [rbp-1F0h]
  void *v166; // [rsp+50h] [rbp-1E8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-1E0h]
  __int64 v168; // [rsp+68h] [rbp-1D0h] BYREF
  unsigned __int8 *v169; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v170; // [rsp+78h] [rbp-1C0h]
  int v171; // [rsp+88h] [rbp-1B0h]
  char v172; // [rsp+8Ch] [rbp-1ACh]
  char v173; // [rsp+C8h] [rbp-170h]
  unsigned int v174; // [rsp+D0h] [rbp-168h]
  char v175; // [rsp+D4h] [rbp-164h]
  void *ptr; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v177; // [rsp+E8h] [rbp-150h]
  _DWORD v178[82]; // [rsp+F0h] [rbp-148h] BYREF

  v11 = a6;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)(a3 + 4) )
    {
      v17 = 1;
      if ( !*(_QWORD *)(a3 + 8) )
        return v17;
    }
  }
  v159.m128i_i32[0] = a6;
  LODWORD(v160) = a4;
  sub_F22A90(&ptr, a5);
  v162 = ptr;
  ptr = v178;
  v177 = 0x800000000LL;
  v178[64] = a7;
  v178[65] = a10;
  sub_1CB4530(a1, &a8, &ptr);
  v15 = sub_F22F70(&v162);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 8);
    if ( (unsigned __int64)-v16 > 0x2D && v16 )
    {
      v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v159.m128i_u32[0]), _mm_cvtsi32_si128(v160));
      v20 = (const __m128i *)ptr;
      v159.m128i_i64[0] = (unsigned int)v177;
      v21 = *(_QWORD **)(a1 + 248);
      v161 = _mm_unpacklo_epi64(v19, _mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(a10)));
      sub_F228E0(&v164, v16);
      sub_F22FF0((unsigned __int64 *)&v166, 0, v164, (_DWORD)v160 != 0);
      v22 = sub_AB7A80(v21, 6u, &v166, v20, v159.m128i_i32[0]);
      v171 = 0;
      v166 = &v168;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v172 = 0;
      sub_1EA6140(&v166, v22, (unsigned int)(8 * *(_DWORD *)(v22 + 20) + 32), 8);
      v26 = (__m128)_mm_load_si128(&v161);
      v23->m128i_i32[0] = 0;
      v23[1] = (__m128i)v26;
      v27 = v177;
      v23->m128i_i64[1] = 0;
      if ( v27 )
      {
        v28 = (unsigned int)(v27 - 1);
        for ( i = 0; ; ++i )
        {
          v23[2].m128i_i64[i] = *((_QWORD *)ptr + 4 * i + 3);
          if ( v28 == i )
            break;
        }
      }
      v30 = *(_QWORD **)(a1 + 248);
      v31 = si128.m128i_i64[1];
      v32 = v30[294];
      v33 = si128.m128i_i64[0] - si128.m128i_i64[1];
      v30[304] += si128.m128i_i64[0] - si128.m128i_i64[1];
      v34 = (char *)((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v30[295] >= (unsigned __int64)&v34[v33] && v32 )
      {
        v30[294] = &v34[v33];
      }
      else
      {
        v79 = sub_986170((__int64)(v30 + 294), v33, v33, 3, v24, v25);
        v31 = si128.m128i_i64[1];
        v34 = (char *)v79;
      }
      v159.m128i_i64[0] = (__int64)memcpy(v34, (char *)v166 + v31, v33);
      v35 = *(_QWORD **)(a1 + 248);
      v159 = (__m128i)_mm_loadh_ps((const double *)v159.m128i_i64);
      sub_15AB760((__m128i **)a3, v35, v159.m128i_i64[0], v159.m128i_i64[1], a11, v26);
      v36 = v166;
      if ( !v166 || v166 == &v168 )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( sub_F22E90((__int64 *)&v162) && (unsigned __int8)sub_1CBA680(a1, a2) )
    {
LABEL_7:
      v17 = 1;
      goto LABEL_8;
    }
    v37 = sub_F22BD0((__int64 *)&v162, 0);
    sub_F22E60((__int64 *)&v162);
LABEL_26:
    if ( *(_DWORD *)(a3 + 4) )
    {
      v11 = v159.m128i_i32[0];
      if ( *(_DWORD *)a3 )
        v11 = *(_DWORD *)a3;
    }
    sub_168B9F0((__int64)&v166, (__int64 *)(a1 + 8), a11, 0x10D9u, 0);
    if ( !v37 )
    {
      v38 = 0;
LABEL_31:
      if ( v173 )
      {
        v56 = v38;
        v57 = v169;
        if ( !v169 )
        {
          v80 = v170;
          v81 = *(_DWORD *)(v170 + 14976);
          if ( v81 )
          {
            v87 = (unsigned int)(v81 - 1);
            *(_DWORD *)(v170 + 14976) = v87;
            v57 = *(unsigned __int8 **)(v80 + 8 * v87 + 14848);
            v88 = *((unsigned int *)v57 + 134);
            v89 = *((_QWORD *)v57 + 66);
            *v57 = 0;
            *((_DWORD *)v57 + 106) = 0;
            v90 = v89 + (v88 << 6);
            while ( v89 != v90 )
            {
              while ( 1 )
              {
                v90 -= 64;
                v91 = *(void **)(v90 + 24);
                if ( v91 == (void *)(v90 + 40) )
                  break;
                v160 = v89;
                v159.m128i_i64[0] = v56;
                operator delete(v91);
                v89 = v160;
                v56 = v159.m128i_i64[0];
                if ( v160 == v90 )
                  goto LABEL_74;
              }
            }
LABEL_74:
            *((_DWORD *)v57 + 134) = 0;
          }
          else
          {
            v159.m128i_i64[0] = v56;
            v57 = (unsigned __int8 *)operator new(0x3A0u);
            *v57 = 0;
            *((_QWORD *)v57 + 12) = v57 + 112;
            *((_QWORD *)v57 + 16) = v57 + 144;
            *((_QWORD *)v57 + 20) = v57 + 176;
            *((_QWORD *)v57 + 24) = v57 + 208;
            *((_QWORD *)v57 + 28) = v57 + 240;
            *((_QWORD *)v57 + 32) = v57 + 272;
            *((_QWORD *)v57 + 36) = v57 + 304;
            *((_QWORD *)v57 + 40) = v57 + 336;
            *((_QWORD *)v57 + 44) = v57 + 368;
            *((_QWORD *)v57 + 48) = v57 + 400;
            *((_QWORD *)v57 + 52) = v57 + 432;
            *((_QWORD *)v57 + 13) = 0;
            v57[112] = 0;
            *((_QWORD *)v57 + 17) = 0;
            v57[144] = 0;
            *((_QWORD *)v57 + 21) = 0;
            v57[176] = 0;
            *((_QWORD *)v57 + 25) = 0;
            v57[208] = 0;
            *((_QWORD *)v57 + 29) = 0;
            v57[240] = 0;
            *((_QWORD *)v57 + 33) = 0;
            v57[272] = 0;
            *((_QWORD *)v57 + 37) = 0;
            v57[304] = 0;
            *((_QWORD *)v57 + 41) = 0;
            v57[336] = 0;
            *((_QWORD *)v57 + 45) = 0;
            v57[368] = 0;
            *((_QWORD *)v57 + 49) = 0;
            v57[400] = 0;
            *((_QWORD *)v57 + 53) = 0x800000000LL;
            v56 = v159.m128i_i64[0];
            *((_QWORD *)v57 + 66) = v57 + 544;
            *((_QWORD *)v57 + 67) = 0x600000000LL;
          }
          v169 = v57;
        }
        v57[*v57 + 1] = 2;
        v58 = v169;
        v59 = *v169;
        *v169 = v59 + 1;
        *(_QWORD *)&v58[8 * v59 + 16] = v56;
      }
      else
      {
        if ( !v175 )
        {
LABEL_33:
          sub_15F7200(&v166);
          sub_1CDCDC0(a1, v162);
          goto LABEL_7;
        }
        v43 = sub_168B9E0(&v166);
        v44 = si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
          v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[1] + 32LL))(si128.m128i_i64[1]);
        v164 = v44;
        v45 = sub_1587BC0(v43, (__int64 *)&v164, v39, v40, v41, v42);
        v46 = v38;
        v47 = *v45 + 32LL * v174;
        v48 = *(unsigned __int8 **)(v47 + 8);
        if ( !v48 )
        {
          v85 = *(_QWORD *)(v47 + 16);
          v86 = *(_DWORD *)(v85 + 14976);
          if ( v86 )
          {
            v97 = (unsigned int)(v86 - 1);
            *(_DWORD *)(v85 + 14976) = v97;
            v48 = *(unsigned __int8 **)(v85 + 8 * v97 + 14848);
            v98 = *((unsigned int *)v48 + 134);
            v99 = *((_QWORD *)v48 + 66);
            *v48 = 0;
            *((_DWORD *)v48 + 106) = 0;
            v100 = v99 + (v98 << 6);
            while ( v99 != v100 )
            {
              while ( 1 )
              {
                v100 -= 64;
                v101 = *(void **)(v100 + 24);
                if ( v101 == (void *)(v100 + 40) )
                  break;
                v161.m128i_i64[0] = v100;
                v160 = v99;
                v159.m128i_i64[0] = v46;
                operator delete(v101);
                v100 = v161.m128i_i64[0];
                v46 = v159.m128i_i64[0];
                if ( v99 == v161.m128i_i64[0] )
                  goto LABEL_86;
              }
            }
LABEL_86:
            *((_DWORD *)v48 + 134) = 0;
          }
          else
          {
            v159.m128i_i64[0] = v46;
            v48 = (unsigned __int8 *)operator new(0x3A0u);
            *v48 = 0;
            *((_QWORD *)v48 + 12) = v48 + 112;
            *((_QWORD *)v48 + 16) = v48 + 144;
            *((_QWORD *)v48 + 20) = v48 + 176;
            *((_QWORD *)v48 + 24) = v48 + 208;
            *((_QWORD *)v48 + 28) = v48 + 240;
            *((_QWORD *)v48 + 32) = v48 + 272;
            *((_QWORD *)v48 + 36) = v48 + 304;
            *((_QWORD *)v48 + 40) = v48 + 336;
            *((_QWORD *)v48 + 44) = v48 + 368;
            *((_QWORD *)v48 + 48) = v48 + 400;
            *((_QWORD *)v48 + 52) = v48 + 432;
            *((_QWORD *)v48 + 13) = 0;
            v48[112] = 0;
            *((_QWORD *)v48 + 17) = 0;
            v48[144] = 0;
            *((_QWORD *)v48 + 21) = 0;
            v48[176] = 0;
            *((_QWORD *)v48 + 25) = 0;
            v48[208] = 0;
            *((_QWORD *)v48 + 29) = 0;
            v48[240] = 0;
            *((_QWORD *)v48 + 33) = 0;
            v48[272] = 0;
            *((_QWORD *)v48 + 37) = 0;
            v48[304] = 0;
            *((_QWORD *)v48 + 41) = 0;
            v48[336] = 0;
            *((_QWORD *)v48 + 45) = 0;
            v48[368] = 0;
            *((_QWORD *)v48 + 49) = 0;
            v48[400] = 0;
            *((_QWORD *)v48 + 53) = 0x800000000LL;
            v46 = v159.m128i_i64[0];
            *((_QWORD *)v48 + 66) = v48 + 544;
            *((_QWORD *)v48 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v47 + 8) = v48;
        }
        v48[*v48 + 1] = 2;
        v49 = *(_BYTE **)(v47 + 8);
        v50 = (unsigned __int8)*v49;
        *v49 = v50 + 1;
        *(_QWORD *)&v49[8 * v50 + 16] = v46;
      }
      if ( v173 )
      {
        sub_F23A70(&v169, (__int64)v162);
      }
      else
      {
        if ( !v175 )
          goto LABEL_33;
        v76 = sub_168B9E0(&v166);
        v77 = si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
          v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[1] + 32LL))(si128.m128i_i64[1]);
        v164 = v77;
        v78 = sub_1587BC0(v76, (__int64 *)&v164, v72, v73, v74, v75);
        sub_F23A70((unsigned __int8 **)(*v78 + 32LL * v174 + 8), (__int64)v162);
      }
      if ( v173 )
      {
        v51 = v169;
        if ( !v169 )
        {
          v82 = v170;
          v83 = *(_DWORD *)(v170 + 14976);
          if ( v83 )
          {
            v92 = (unsigned int)(v83 - 1);
            *(_DWORD *)(v170 + 14976) = v92;
            v51 = *(unsigned __int8 **)(v82 + 8 * v92 + 14848);
            v93 = *((unsigned int *)v51 + 134);
            v94 = *((_QWORD *)v51 + 66);
            *v51 = 0;
            *((_DWORD *)v51 + 106) = 0;
            v95 = v94 + (v93 << 6);
            if ( v94 == v95 )
            {
              v54 = 1;
              v52 = 0;
            }
            else
            {
              do
              {
                while ( 1 )
                {
                  v95 -= 64;
                  v96 = *(void **)(v95 + 24);
                  if ( v96 == (void *)(v95 + 40) )
                    break;
                  v159.m128i_i64[0] = v94;
                  operator delete(v96);
                  v94 = v159.m128i_i64[0];
                  if ( v159.m128i_i64[0] == v95 )
                    goto LABEL_78;
                }
              }
              while ( v94 != v95 );
LABEL_78:
              v52 = *((unsigned int *)v51 + 106);
              v54 = v52 + 1;
            }
            *((_DWORD *)v51 + 134) = 0;
            v53 = *((unsigned int *)v51 + 107);
          }
          else
          {
            v84 = operator new(0x3A0u);
            v53 = 8;
            v54 = 1;
            v51 = (unsigned __int8 *)v84;
            *(_BYTE *)v84 = 0;
            *(_QWORD *)(v84 + 96) = v84 + 112;
            *(_QWORD *)(v84 + 128) = v84 + 144;
            *(_QWORD *)(v84 + 160) = v84 + 176;
            *(_QWORD *)(v84 + 192) = v84 + 208;
            *(_QWORD *)(v84 + 224) = v84 + 240;
            *(_QWORD *)(v84 + 256) = v84 + 272;
            *(_QWORD *)(v84 + 288) = v84 + 304;
            *(_QWORD *)(v84 + 320) = v84 + 336;
            *(_QWORD *)(v84 + 352) = v84 + 368;
            *(_QWORD *)(v84 + 384) = v84 + 400;
            *(_QWORD *)(v84 + 416) = v84 + 432;
            *(_QWORD *)(v84 + 104) = 0;
            *(_BYTE *)(v84 + 112) = 0;
            *(_QWORD *)(v84 + 136) = 0;
            *(_BYTE *)(v84 + 144) = 0;
            *(_QWORD *)(v84 + 168) = 0;
            *(_BYTE *)(v84 + 176) = 0;
            *(_QWORD *)(v84 + 200) = 0;
            *(_BYTE *)(v84 + 208) = 0;
            *(_QWORD *)(v84 + 232) = 0;
            *(_BYTE *)(v84 + 240) = 0;
            *(_QWORD *)(v84 + 264) = 0;
            *(_BYTE *)(v84 + 272) = 0;
            *(_QWORD *)(v84 + 296) = 0;
            *(_BYTE *)(v84 + 304) = 0;
            *(_QWORD *)(v84 + 328) = 0;
            *(_BYTE *)(v84 + 336) = 0;
            *(_QWORD *)(v84 + 360) = 0;
            *(_BYTE *)(v84 + 368) = 0;
            *(_QWORD *)(v84 + 392) = 0;
            *(_BYTE *)(v84 + 400) = 0;
            *(_QWORD *)(v84 + 424) = 0x800000000LL;
            *(_QWORD *)(v84 + 528) = v84 + 544;
            *(_QWORD *)(v84 + 536) = 0x600000000LL;
            v52 = 0;
          }
          v169 = v51;
          goto LABEL_43;
        }
      }
      else
      {
        if ( !v175 )
          goto LABEL_33;
        v64 = sub_168B9E0(&v166);
        v65 = si128.m128i_i64[1];
        if ( si128.m128i_i64[1] )
          v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[1] + 32LL))(si128.m128i_i64[1]);
        v163 = v65;
        v66 = sub_1587BC0(v64, &v163, v60, v61, v62, v63);
        v67 = *v66 + 32LL * v174;
        v51 = *(unsigned __int8 **)(v67 + 8);
        v68 = v67;
        if ( !v51 )
        {
          v69 = *(_QWORD *)(v67 + 16);
          v70 = *(_DWORD *)(v69 + 14976);
          if ( v70 )
          {
            v102 = (unsigned int)(v70 - 1);
            *(_DWORD *)(v69 + 14976) = v102;
            v51 = *(unsigned __int8 **)(v69 + 8 * v102 + 14848);
            v103 = *((unsigned int *)v51 + 134);
            v104 = *((_QWORD *)v51 + 66);
            *v51 = 0;
            *((_DWORD *)v51 + 106) = 0;
            v105 = v104 + (v103 << 6);
            while ( v104 != v105 )
            {
              while ( 1 )
              {
                v105 -= 64;
                v106 = *(void **)(v105 + 24);
                if ( v106 == (void *)(v105 + 40) )
                  break;
                v160 = v104;
                v159.m128i_i64[0] = v105;
                operator delete(v106);
                v105 = v159.m128i_i64[0];
                v104 = v160;
                if ( v160 == v159.m128i_i64[0] )
                  goto LABEL_91;
              }
            }
LABEL_91:
            v52 = *((unsigned int *)v51 + 106);
            v53 = *((unsigned int *)v51 + 107);
            *((_DWORD *)v51 + 134) = 0;
            v54 = v52 + 1;
          }
          else
          {
            v71 = operator new(0x3A0u);
            v53 = 8;
            v54 = 1;
            v51 = (unsigned __int8 *)v71;
            *(_BYTE *)v71 = 0;
            *(_QWORD *)(v71 + 96) = v71 + 112;
            *(_QWORD *)(v71 + 128) = v71 + 144;
            *(_QWORD *)(v71 + 160) = v71 + 176;
            *(_QWORD *)(v71 + 192) = v71 + 208;
            *(_QWORD *)(v71 + 224) = v71 + 240;
            *(_QWORD *)(v71 + 256) = v71 + 272;
            *(_QWORD *)(v71 + 288) = v71 + 304;
            *(_QWORD *)(v71 + 320) = v71 + 336;
            *(_QWORD *)(v71 + 352) = v71 + 368;
            *(_QWORD *)(v71 + 384) = v71 + 400;
            *(_QWORD *)(v71 + 416) = v71 + 432;
            *(_QWORD *)(v71 + 104) = 0;
            *(_BYTE *)(v71 + 112) = 0;
            *(_QWORD *)(v71 + 136) = 0;
            *(_BYTE *)(v71 + 144) = 0;
            *(_QWORD *)(v71 + 168) = 0;
            *(_BYTE *)(v71 + 176) = 0;
            *(_QWORD *)(v71 + 200) = 0;
            *(_BYTE *)(v71 + 208) = 0;
            *(_QWORD *)(v71 + 232) = 0;
            *(_BYTE *)(v71 + 240) = 0;
            *(_QWORD *)(v71 + 264) = 0;
            *(_BYTE *)(v71 + 272) = 0;
            *(_QWORD *)(v71 + 296) = 0;
            *(_BYTE *)(v71 + 304) = 0;
            *(_QWORD *)(v71 + 328) = 0;
            *(_BYTE *)(v71 + 336) = 0;
            *(_QWORD *)(v71 + 360) = 0;
            *(_BYTE *)(v71 + 368) = 0;
            *(_QWORD *)(v71 + 392) = 0;
            *(_BYTE *)(v71 + 400) = 0;
            *(_QWORD *)(v71 + 424) = 0x800000000LL;
            *(_QWORD *)(v71 + 528) = v71 + 544;
            *(_QWORD *)(v71 + 536) = 0x600000000LL;
            v52 = 0;
          }
          *(_QWORD *)(v68 + 8) = v51;
          goto LABEL_43;
        }
      }
      v52 = *((unsigned int *)v51 + 106);
      v53 = *((unsigned int *)v51 + 107);
      v54 = v52 + 1;
LABEL_43:
      v164 = __PAIR64__(a10, v11);
      LOBYTE(v165) = 1;
      if ( v54 > v53 )
      {
        sub_2237220(v51 + 416, v51 + 432, v54, 12);
        v52 = *((unsigned int *)v51 + 106);
      }
      v55 = *((_QWORD *)v51 + 52) + 12 * v52;
      *(_QWORD *)v55 = v164;
      *(_DWORD *)(v55 + 8) = v165;
      ++*((_DWORD *)v51 + 106);
      goto LABEL_33;
    }
LABEL_30:
    v38 = (*(_BYTE *)(v37 + 28) & 0x7F) == 69;
    goto LABEL_31;
  }
  if ( sub_F22E90((__int64 *)&v162) && (unsigned __int8)sub_1CBA680(a1, a2) )
    goto LABEL_7;
  v37 = sub_F22BD0((__int64 *)&v162, 0);
  if ( sub_F22E60((__int64 *)&v162) )
    goto LABEL_26;
  if ( (*(_BYTE *)(v37 + 28) & 0x7D) == 0x45 )
  {
    v125 = (__int64 *)(a1 + 8);
    if ( *(_DWORD *)(a3 + 4) && *(_DWORD *)a3 )
    {
      v159.m128i_i32[0] = *(_DWORD *)a3;
      sub_168B9F0((__int64)&v166, v125, a11, 0x10D9u, 0);
      v11 = v159.m128i_i32[0];
    }
    else
    {
      sub_168B9F0((__int64)&v166, v125, a11, 0x10D9u, 0);
    }
    goto LABEL_30;
  }
  v107 = v162;
  v110 = sub_1CDD580(a1, v162, v159.m128i_u32[0], &ptr);
  v111 = v110 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v110 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_7;
  v112 = *(_QWORD *)v111;
  if ( (*(_BYTE *)(*(_QWORD *)v111 + 17LL) & 4) == 0
    && (unsigned int)*(unsigned __int8 *)(v112 + 16) - 47 > 1
    && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v112 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1
     || !sub_F63050(v112, v107, v108, v109)) )
  {
    sub_168B9F0((__int64)&v166, (__int64 *)(a1 + 8), v159.m128i_u32[0], 0x10A1u, 0);
    if ( v173 )
    {
      if ( !v169 )
      {
        v144 = v170;
        v145 = *(_DWORD *)(v170 + 14976);
        if ( v145 )
        {
          v154 = (unsigned int)(v145 - 1);
          *(_DWORD *)(v170 + 14976) = v154;
          v146 = *(_QWORD *)(v144 + 8 * v154 + 14848);
          v155 = *(unsigned int *)(v146 + 536);
          v156 = *(_QWORD *)(v146 + 528);
          *(_BYTE *)v146 = 0;
          *(_DWORD *)(v146 + 424) = 0;
          v157 = v156 + (v155 << 6);
          while ( v156 != v157 )
          {
            v157 -= 64;
            v158 = *(void **)(v157 + 24);
            if ( v158 != (void *)(v157 + 40) )
            {
              v159.m128i_i64[0] = v156;
              operator delete(v158);
              v156 = v159.m128i_i64[0];
            }
          }
          *(_DWORD *)(v146 + 536) = 0;
        }
        else
        {
          v146 = operator new(0x3A0u);
          *(_BYTE *)v146 = 0;
          v147 = v146 + 96;
          do
          {
            v148 = v147 + 16;
            *(_QWORD *)(v147 + 8) = 0;
            v147 += 32;
            *(_QWORD *)(v147 - 32) = v148;
            *(_BYTE *)(v147 - 16) = 0;
          }
          while ( v147 != v146 + 416 );
          *(_QWORD *)(v146 + 416) = v146 + 432;
          *(_QWORD *)(v146 + 424) = 0x800000000LL;
          *(_QWORD *)(v146 + 528) = v146 + 544;
          *(_QWORD *)(v146 + 536) = 0x600000000LL;
        }
        v169 = (unsigned __int8 *)v146;
      }
      v169[*v169 + 1] = 8;
      v137 = v169;
      v138 = *v169;
      *v169 = v138 + 1;
      *(_QWORD *)&v137[8 * v138 + 16] = v110;
    }
    else if ( v175 )
    {
      v130 = sub_168B9E0(&v166);
      v131 = si128.m128i_i64[1];
      if ( si128.m128i_i64[1] )
        v131 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[1] + 32LL))(si128.m128i_i64[1]);
      v164 = v131;
      v132 = sub_1587BC0(v130, (__int64 *)&v164, v126, v127, v128, v129);
      v133 = *v132 + 32LL * v174;
      if ( !*(_QWORD *)(v133 + 8) )
      {
        v139 = *(_QWORD *)(v133 + 16);
        v140 = *(_DWORD *)(v139 + 14976);
        if ( v140 )
        {
          v149 = (unsigned int)(v140 - 1);
          *(_DWORD *)(v139 + 14976) = v149;
          v141 = *(_QWORD *)(v139 + 8 * v149 + 14848);
          v150 = *(unsigned int *)(v141 + 536);
          v151 = *(_QWORD *)(v141 + 528);
          *(_BYTE *)v141 = 0;
          *(_DWORD *)(v141 + 424) = 0;
          v152 = v151 + (v150 << 6);
          while ( v151 != v152 )
          {
            v152 -= 64;
            v153 = *(void **)(v152 + 24);
            if ( v153 != (void *)(v152 + 40) )
            {
              v160 = v152;
              v159.m128i_i64[0] = v151;
              operator delete(v153);
              v151 = v159.m128i_i64[0];
              v152 = v160;
            }
          }
          *(_DWORD *)(v141 + 536) = 0;
        }
        else
        {
          v141 = operator new(0x3A0u);
          *(_BYTE *)v141 = 0;
          v142 = v141 + 96;
          do
          {
            v143 = v142 + 16;
            *(_QWORD *)(v142 + 8) = 0;
            v142 += 32;
            *(_QWORD *)(v142 - 32) = v143;
            *(_BYTE *)(v142 - 16) = 0;
          }
          while ( v142 != v141 + 416 );
          *(_QWORD *)(v141 + 416) = v141 + 432;
          *(_QWORD *)(v141 + 424) = 0x800000000LL;
          *(_QWORD *)(v141 + 528) = v141 + 544;
          *(_QWORD *)(v141 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v133 + 8) = v141;
      }
      *(_BYTE *)(*(_QWORD *)(v133 + 8) + **(unsigned __int8 **)(v133 + 8) + 1LL) = 8;
      v134 = *(_BYTE **)(v133 + 8);
      v135 = (unsigned __int8)*v134;
      *v134 = v135 + 1;
      *(_QWORD *)&v134[8 * v135 + 16] = v110;
    }
    goto LABEL_33;
  }
  v171 = 0;
  v166 = &v168;
  v172 = 0;
  v159 = _mm_unpacklo_epi64(
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v159.m128i_u32[0]), _mm_cvtsi32_si128(v160)),
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(a10)));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  sub_1EA6140(&v166, v110, (unsigned int)(8 * *(_DWORD *)(v110 + 20) + 16), 8);
  v116 = (__m128)_mm_load_si128(&v159);
  *v113 = (__m128i)v116;
  if ( (_DWORD)v177 )
  {
    v117 = (unsigned int)(v177 - 1);
    for ( j = 0; ; ++j )
    {
      v113[1].m128i_i64[j] = *((_QWORD *)ptr + 4 * j + 3);
      if ( j == v117 )
        break;
    }
  }
  v119 = *(_QWORD **)(a1 + 248);
  v120 = si128.m128i_i64[1];
  v121 = v119[294];
  v122 = si128.m128i_i64[0] - si128.m128i_i64[1];
  v119[304] += si128.m128i_i64[0] - si128.m128i_i64[1];
  v123 = (char *)((v121 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v119[295] >= (unsigned __int64)&v123[v122] && v121 )
  {
    v119[294] = &v123[v122];
  }
  else
  {
    v136 = sub_986170((__int64)(v119 + 294), v122, v122, 3, v114, v115);
    v120 = si128.m128i_i64[1];
    v123 = (char *)v136;
  }
  v159.m128i_i64[0] = (__int64)memcpy(v123, (char *)v166 + v120, v122);
  v124 = *(_QWORD **)(a1 + 248);
  v159 = (__m128i)_mm_loadh_ps((const double *)v159.m128i_i64);
  sub_15AB760((__m128i **)a3, v124, v159.m128i_i64[0], v159.m128i_i64[1], a11, v116);
  v36 = v166;
  if ( v166 == &v168 || !v166 )
    goto LABEL_22;
LABEL_21:
  operator delete[](v36);
LABEL_22:
  v17 = 0;
LABEL_8:
  if ( ptr != v178 )
    free(ptr);
  return v17;
}
