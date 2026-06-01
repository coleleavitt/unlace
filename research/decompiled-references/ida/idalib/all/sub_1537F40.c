__int64 __fastcall sub_1537F40(const __m128i *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6)
{
  __int64 v6; // rsi
  const __m128i *v7; // rbx
  __int16 v8; // ax
  __int8 v9; // r15
  __int64 *v10; // r12
  __int64 v11; // rbp
  unsigned __int8 *v12; // r13
  _QWORD *v13; // rdx
  __int64 v14; // rax
  unsigned __int8 *v15; // r13
  __int64 *v16; // r14
  _QWORD *v17; // rdx
  void *v18; // r13
  __int64 v19; // rax
  _BYTE *v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // r9
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int8 *v25; // r8
  __int64 v26; // rdx
  __int64 *v27; // rcx
  _BYTE *v28; // rax
  _BYTE *v29; // rsi
  signed __int64 v30; // r13
  void **v31; // r12
  size_t v32; // rax
  void **v33; // r14
  void **v34; // r13
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // r14
  void **v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // r12
  __int16 v41; // ax
  __int64 *v42; // rdi
  unsigned int v43; // eax
  bool v44; // zf
  __int64 *v45; // rdi
  __int64 *p_src; // r13
  unsigned __int8 *v47; // r12
  _QWORD *v48; // rdx
  __int64 v49; // rax
  unsigned __int8 *v50; // r12
  __int64 *v51; // r14
  _QWORD *v52; // rdx
  void *v53; // r12
  __int64 v54; // rax
  __int64 *v55; // rdi
  __int64 v56; // rdx
  __int64 *v57; // r9
  __int64 v58; // rax
  __int64 *v59; // rsi
  __int8 *v60; // r8
  __int64 v61; // rdx
  __int64 *v62; // rcx
  _BYTE *v63; // rax
  _BYTE *v64; // rsi
  signed __int64 v65; // r12
  __int64 result; // rax
  __int64 *v67; // rdi
  __int64 v68; // rcx
  _BYTE *v69; // rax
  __int64 *v70; // rdi
  size_t v71; // rdx
  __int64 v72; // rdx
  size_t v73; // rdx
  int v74; // eax
  size_t v75; // rdx
  int v76; // eax
  size_t v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // r14
  const __m128i *v82; // r12
  __int64 v83; // rbx
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rbx
  int v90; // r12d
  __int64 v91; // rbp
  void *v92; // rdi
  size_t v93; // rdx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rbx
  int v100; // r13d
  __int64 v101; // rbp
  void *v102; // rdi
  size_t v103; // rdx
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // r14
  __int64 v107; // rdx
  __int64 v108; // r14
  const __m128i *v109; // r13
  __int64 v110; // rbx
  void *v111; // rdi
  size_t v112; // rdx
  int v113; // eax
  __int64 v114; // rdi
  __int64 v115; // r13
  int v116; // eax
  void *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rax
  _WORD *v122; // rbp
  char *v123; // rax
  char v124; // al
  __int64 v125; // r13
  int v126; // eax
  void *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rdx
  const __m128i *v131; // r14
  __int64 *v132; // rbx
  int v133; // r13d
  __int64 v134; // rbp
  __int64 *v135; // r12
  __int64 *v136; // rdi
  size_t v137; // rdx
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rsi
  __int64 v141; // rdx
  const __m128i *v142; // r14
  __int64 *v143; // rbx
  int v144; // r13d
  __int64 v145; // rbp
  __int64 *v146; // r12
  __int64 *v147; // rdi
  __int64 v148; // rdi
  __int64 v149; // r12
  int v150; // eax
  void *v151; // rdi
  __int64 v152; // r12
  int v153; // eax
  void *v154; // rdi
  int v155; // r13d
  unsigned int v156; // eax
  unsigned int v157; // [rsp+4h] [rbp-1A4h]
  __int64 v158; // [rsp+8h] [rbp-1A0h]
  __int64 v159; // [rsp+10h] [rbp-198h]
  unsigned __int64 v160; // [rsp+18h] [rbp-190h]
  __int64 v161; // [rsp+20h] [rbp-188h]
  __m128i *v162; // [rsp+28h] [rbp-180h] BYREF
  void *v163; // [rsp+30h] [rbp-178h]
  void *v164; // [rsp+38h] [rbp-170h]
  __int64 *v165; // [rsp+40h] [rbp-168h]
  unsigned __int32 v166; // [rsp+48h] [rbp-160h]
  unsigned int v167; // [rsp+4Ch] [rbp-15Ch]
  int v168; // [rsp+50h] [rbp-158h] BYREF
  int v169; // [rsp+54h] [rbp-154h]
  char v170; // [rsp+58h] [rbp-150h]
  __int64 v171; // [rsp+5Ch] [rbp-14Ch]
  char v172; // [rsp+64h] [rbp-144h]
  void *v173; // [rsp+68h] [rbp-140h]
  __m128i v174; // [rsp+70h] [rbp-138h] BYREF
  char v175; // [rsp+88h] [rbp-120h]
  int v176; // [rsp+90h] [rbp-118h] BYREF
  int v177; // [rsp+94h] [rbp-114h]
  char v178; // [rsp+98h] [rbp-110h]
  __int64 v179; // [rsp+9Ch] [rbp-10Ch]
  char v180; // [rsp+A4h] [rbp-104h]
  void *dest; // [rsp+A8h] [rbp-100h]
  __m128i v182; // [rsp+B0h] [rbp-F8h] BYREF
  char v183; // [rsp+C8h] [rbp-E0h]
  void *src; // [rsp+D0h] [rbp-D8h] BYREF
  size_t n; // [rsp+D8h] [rbp-D0h]
  _QWORD v186[8]; // [rsp+E0h] [rbp-C8h] BYREF
  void *v187; // [rsp+120h] [rbp-88h] BYREF
  size_t v188; // [rsp+128h] [rbp-80h]
  __int64 v189[2]; // [rsp+130h] [rbp-78h] BYREF
  void *v190; // [rsp+140h] [rbp-68h]
  __int16 v191; // [rsp+160h] [rbp-48h]

  v6 = a2 & 5;
  v7 = a1;
  v161 = a4;
  v167 = v6;
  if ( !(_BYTE)a3 )
  {
    v159 = 1;
    v40 = 0;
    goto LABEL_51;
  }
  v157 = sub_C00A40(a4 & 0xFFFFFFFFFFFFFFFELL, v6, a3, a4 & 0xFFFFFFFFFFFFFFFELL, a5);
  v8 = a1[2].m128i_i16[0];
  if ( v8 == 3 )
  {
LABEL_169:
    v118 = v7->m128i_i64[1];
    if ( *(_QWORD *)(v118 + 760) )
    {
      *(_BYTE *)(v118 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v118 + 48) + 6LL) = 1;
    }
    v119 = v7[6].m128i_i64[0];
    v7[2].m128i_i16[0] = 1;
    sub_172BE70(*(_QWORD *)(v119 + 656), *(_QWORD *)(v119 + 608));
    return 1;
  }
  v9 = a1[127].m128i_i8[8];
  a1[127].m128i_i8[8] = 1;
  v160 = 0;
  v159 = 1;
  while ( 1 )
  {
    v166 = 0;
    v158 = 0;
    if ( v8 == 27 )
    {
      v67 = (__int64 *)v7->m128i_i64[1];
      v7[2].m128i_i32[2] = v7[1].m128i_i32[0];
      sub_14634E0(v67, v7[1].m128i_i32);
      v68 = 1988;
      v166 = v7[2].m128i_u32[2];
      v69 = *(_BYTE **)(v7->m128i_i64[1] + 56);
      if ( (v69[1] & 8) == 0 )
        v68 = (*v69 & 0x10) == 0 ? 1944 : 2070;
      sub_1564820(&v187, v7, v166, v68);
      sub_AEA040((__int64)&v187);
      v158 = sub_14C4AC0(v7, v157, a6);
      if ( v158 == 1 )
      {
        LODWORD(v187) = 1638462;
        if ( !(unsigned __int8)sub_15680D0(v7, &v187, 2, 3) )
          goto LABEL_109;
      }
      v8 = v7[2].m128i_i16[0];
      v7[127].m128i_i8[8] = v9;
      if ( v8 == 62 )
      {
LABEL_87:
        v70 = (__int64 *)v7->m128i_i64[1];
        v7[2].m128i_i32[2] = v7[1].m128i_i32[0];
        sub_14634E0(v70, v7[1].m128i_i32);
        LODWORD(v11) = v7[2].m128i_i32[2];
        goto LABEL_47;
      }
    }
    else
    {
      v7[127].m128i_i8[8] = v9;
      if ( v8 == 62 )
        goto LABEL_87;
    }
    if ( v8 == 63 || v8 == 72 )
    {
      v45 = (__int64 *)v7->m128i_i64[1];
      p_src = (__int64 *)&src;
      v7[2].m128i_i32[2] = v7[1].m128i_i32[0];
      sub_14634E0(v45, v7[1].m128i_i32);
      LODWORD(v11) = v7[2].m128i_i32[2];
      sub_1564820(&src, v7, (unsigned int)v11, 15);
      v47 = (unsigned __int8 *)src;
      if ( !src )
      {
        v93 = n;
        v94 = *(_DWORD *)(n + 14976);
        if ( v94 )
        {
          v95 = (unsigned int)(v94 - 1);
          *(_DWORD *)(n + 14976) = v95;
          v47 = *(unsigned __int8 **)(v93 + 8 * v95 + 14848);
          v96 = *((unsigned int *)v47 + 134);
          v97 = *((_QWORD *)v47 + 66);
          *v47 = 0;
          *((_DWORD *)v47 + 106) = 0;
          v98 = v97 + (v96 << 6);
          if ( v97 != v98 )
          {
            v162 = (__m128i *)v7;
            v99 = v98;
            v163 = &src;
            v100 = v11;
            v101 = v97;
            do
            {
              while ( 1 )
              {
                v99 -= 64;
                v102 = *(void **)(v99 + 24);
                if ( v102 == (void *)(v99 + 40) )
                  break;
                operator delete(v102);
                if ( v101 == v99 )
                  goto LABEL_138;
              }
            }
            while ( v101 != v99 );
LABEL_138:
            LODWORD(v11) = v100;
            v7 = v162;
            p_src = (__int64 *)v163;
          }
          *((_DWORD *)v47 + 134) = 0;
        }
        else
        {
          v47 = (unsigned __int8 *)operator new(0x3A0u);
          *v47 = 0;
          *((_QWORD *)v47 + 12) = v47 + 112;
          *((_QWORD *)v47 + 16) = v47 + 144;
          *((_QWORD *)v47 + 20) = v47 + 176;
          *((_QWORD *)v47 + 24) = v47 + 208;
          *((_QWORD *)v47 + 28) = v47 + 240;
          *((_QWORD *)v47 + 32) = v47 + 272;
          *((_QWORD *)v47 + 36) = v47 + 304;
          *((_QWORD *)v47 + 40) = v47 + 336;
          *((_QWORD *)v47 + 44) = v47 + 368;
          *((_QWORD *)v47 + 48) = v47 + 400;
          *((_QWORD *)v47 + 52) = v47 + 432;
          *((_QWORD *)v47 + 13) = 0;
          v47[112] = 0;
          *((_QWORD *)v47 + 17) = 0;
          v47[144] = 0;
          *((_QWORD *)v47 + 21) = 0;
          v47[176] = 0;
          *((_QWORD *)v47 + 25) = 0;
          v47[208] = 0;
          *((_QWORD *)v47 + 29) = 0;
          v47[240] = 0;
          *((_QWORD *)v47 + 33) = 0;
          v47[272] = 0;
          *((_QWORD *)v47 + 37) = 0;
          v47[304] = 0;
          *((_QWORD *)v47 + 41) = 0;
          v47[336] = 0;
          *((_QWORD *)v47 + 45) = 0;
          v47[368] = 0;
          *((_QWORD *)v47 + 49) = 0;
          v47[400] = 0;
          *((_QWORD *)v47 + 53) = 0x800000000LL;
          *((_QWORD *)v47 + 66) = v47 + 544;
          *((_QWORD *)v47 + 67) = 0x600000000LL;
        }
        src = v47;
      }
      v47[*v47 + 1] = 1;
      v48 = src;
      v49 = *(unsigned __int8 *)src;
      *(_BYTE *)src = v49 + 1;
      v48[v49 + 2] = "'case'";
      v50 = (unsigned __int8 *)src;
      if ( !src )
      {
        v103 = n;
        v104 = *(_DWORD *)(n + 14976);
        if ( v104 )
        {
          v105 = (unsigned int)(v104 - 1);
          *(_DWORD *)(n + 14976) = v105;
          v50 = *(unsigned __int8 **)(v103 + 8 * v105 + 14848);
          v106 = *((unsigned int *)v50 + 134);
          v107 = *((_QWORD *)v50 + 66);
          *v50 = 0;
          *((_DWORD *)v50 + 106) = 0;
          v108 = v107 + (v106 << 6);
          if ( v107 != v108 )
          {
            v162 = (__m128i *)p_src;
            v109 = v7;
            v110 = v107;
            do
            {
              while ( 1 )
              {
                v108 -= 64;
                v111 = *(void **)(v108 + 24);
                if ( v111 == (void *)(v108 + 40) )
                  break;
                operator delete(v111);
                if ( v110 == v108 )
                  goto LABEL_145;
              }
            }
            while ( v110 != v108 );
LABEL_145:
            v7 = v109;
            p_src = (__int64 *)v162;
          }
          *((_DWORD *)v50 + 134) = 0;
        }
        else
        {
          v50 = (unsigned __int8 *)operator new(0x3A0u);
          *v50 = 0;
          *((_QWORD *)v50 + 12) = v50 + 112;
          *((_QWORD *)v50 + 16) = v50 + 144;
          *((_QWORD *)v50 + 20) = v50 + 176;
          *((_QWORD *)v50 + 24) = v50 + 208;
          *((_QWORD *)v50 + 28) = v50 + 240;
          *((_QWORD *)v50 + 32) = v50 + 272;
          *((_QWORD *)v50 + 36) = v50 + 304;
          *((_QWORD *)v50 + 40) = v50 + 336;
          *((_QWORD *)v50 + 44) = v50 + 368;
          *((_QWORD *)v50 + 48) = v50 + 400;
          *((_QWORD *)v50 + 52) = v50 + 432;
          *((_QWORD *)v50 + 13) = 0;
          v50[112] = 0;
          *((_QWORD *)v50 + 17) = 0;
          v50[144] = 0;
          *((_QWORD *)v50 + 21) = 0;
          v50[176] = 0;
          *((_QWORD *)v50 + 25) = 0;
          v50[208] = 0;
          *((_QWORD *)v50 + 29) = 0;
          v50[240] = 0;
          *((_QWORD *)v50 + 33) = 0;
          v50[272] = 0;
          *((_QWORD *)v50 + 37) = 0;
          v50[304] = 0;
          *((_QWORD *)v50 + 41) = 0;
          v50[336] = 0;
          *((_QWORD *)v50 + 45) = 0;
          v50[368] = 0;
          *((_QWORD *)v50 + 49) = 0;
          v50[400] = 0;
          *((_QWORD *)v50 + 53) = 0x800000000LL;
          *((_QWORD *)v50 + 66) = v50 + 544;
          *((_QWORD *)v50 + 67) = 0x600000000LL;
        }
        src = v50;
      }
      v51 = (__int64 *)&v168;
      v50[*v50 + 1] = 4;
      v52 = src;
      v53 = &v187;
      v54 = *(unsigned __int8 *)src;
      *(_BYTE *)src = v54 + 1;
      v52[v54 + 2] = 62;
      v173 = &v174.m128i_u64[1];
      v163 = &v174.m128i_u64[1];
      v187 = v189;
      v162 = (__m128i *)v189;
      v171 = 0;
      v172 = 0;
      v174.m128i_i64[0] = 0;
      v174.m128i_i8[8] = 0;
      v175 = 0;
      v168 = v11;
      v169 = v11;
      v170 = 1;
      sub_1532FD0(&v187, ":", (__int64)"");
      v55 = (__int64 *)v173;
      if ( v187 == v162 )
      {
        v77 = v188;
        if ( v188 )
        {
          if ( v188 == 1 )
            *(_BYTE *)v173 = v189[0];
          else
            memcpy(v173, v187, v188);
          v77 = v188;
          v55 = (__int64 *)v173;
        }
        v174.m128i_i64[0] = v77;
        *((_BYTE *)v55 + v77) = 0;
        v55 = (__int64 *)v187;
      }
      else
      {
        if ( v173 == v163 )
        {
          v162 = (__m128i *)v189[0];
          v173 = v187;
          a6 = (__m128i)_mm_loadh_ps((const double *)&v162);
          v174 = a6;
        }
        else
        {
          v162 = (__m128i *)v189[0];
          v56 = v174.m128i_i64[1];
          v173 = v187;
          a6 = (__m128i)_mm_loadh_ps((const double *)&v162);
          v174 = a6;
          if ( v55 )
          {
            v187 = v55;
            v189[0] = v56;
            goto LABEL_64;
          }
        }
        v55 = v189;
        v187 = v189;
      }
LABEL_64:
      v188 = 0;
      *(_BYTE *)v55 = 0;
      if ( v187 != v189 )
        operator delete(v187);
      if ( !v168 || !v169 )
        goto LABEL_76;
      v57 = (__int64 *)src;
      if ( src )
      {
        v58 = *((unsigned int *)src + 134);
        v59 = *((__int64 **)src + 66);
        v60 = (__int8 *)&v168;
        v61 = v58 + 1;
        v62 = &v59[8 * v58];
        if ( v58 + 1 <= (unsigned __int64)*((unsigned int *)src + 135) )
          goto LABEL_70;
      }
      else
      {
        v137 = n;
        v138 = *(_DWORD *)(n + 14976);
        if ( v138 )
        {
          v139 = (unsigned int)(v138 - 1);
          *(_DWORD *)(n + 14976) = v139;
          v57 = *(__int64 **)(v137 + 8 * v139 + 14848);
          v140 = *((unsigned int *)v57 + 134);
          *(_BYTE *)v57 = 0;
          v141 = v57[66];
          *((_DWORD *)v57 + 106) = 0;
          v59 = (__int64 *)(v141 + (v140 << 6));
          if ( (__int64 *)v141 != v59 )
          {
            v162 = (__m128i *)&v168;
            v142 = v7;
            v143 = v59;
            v163 = p_src;
            v144 = v11;
            v145 = v141;
            v164 = &v187;
            v146 = v57;
            do
            {
              while ( 1 )
              {
                v143 -= 8;
                v147 = (__int64 *)v143[3];
                if ( v147 == v143 + 5 )
                  break;
                operator delete(v147);
                if ( (__int64 *)v145 == v143 )
                  goto LABEL_201;
              }
            }
            while ( (__int64 *)v145 != v143 );
LABEL_201:
            v57 = v146;
            LODWORD(v11) = v144;
            v7 = v142;
            p_src = (__int64 *)v163;
            v51 = (__int64 *)v162;
            v53 = v164;
            v59 = (__int64 *)v57[66];
          }
          *((_DWORD *)v57 + 134) = 0;
          v148 = *((unsigned int *)v57 + 135);
        }
        else
        {
          v148 = 6;
          v57 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v57 = 0;
          v57[12] = (__int64)(v57 + 14);
          v59 = v57 + 68;
          v57[16] = (__int64)(v57 + 18);
          v57[20] = (__int64)(v57 + 22);
          v57[24] = (__int64)(v57 + 26);
          v57[28] = (__int64)(v57 + 30);
          v57[32] = (__int64)(v57 + 34);
          v57[36] = (__int64)(v57 + 38);
          v57[40] = (__int64)(v57 + 42);
          v57[44] = (__int64)(v57 + 46);
          v57[48] = (__int64)(v57 + 50);
          v57[52] = (__int64)(v57 + 54);
          v57[13] = 0;
          *((_BYTE *)v57 + 112) = 0;
          v57[17] = 0;
          *((_BYTE *)v57 + 144) = 0;
          v57[21] = 0;
          *((_BYTE *)v57 + 176) = 0;
          v57[25] = 0;
          *((_BYTE *)v57 + 208) = 0;
          v57[29] = 0;
          *((_BYTE *)v57 + 240) = 0;
          v57[33] = 0;
          *((_BYTE *)v57 + 272) = 0;
          v57[37] = 0;
          *((_BYTE *)v57 + 304) = 0;
          v57[41] = 0;
          *((_BYTE *)v57 + 336) = 0;
          v57[45] = 0;
          *((_BYTE *)v57 + 368) = 0;
          v57[49] = 0;
          *((_BYTE *)v57 + 400) = 0;
          v57[53] = 0x800000000LL;
          v57[66] = (__int64)(v57 + 68);
          v57[67] = 0x600000000LL;
        }
        v61 = 1;
        src = v57;
        v62 = v59;
        v60 = (__int8 *)v51;
        if ( v148 )
        {
LABEL_70:
          *v62 = *(_QWORD *)v60;
          *((_DWORD *)v62 + 2) = *((_DWORD *)v60 + 2);
          *(__int64 *)((char *)v62 + 12) = *(_QWORD *)(v60 + 12);
          *((_DWORD *)v62 + 5) = *((_DWORD *)v60 + 5);
          v63 = v62 + 5;
          v62[3] = (__int64)(v62 + 5);
          v64 = *((_BYTE **)v60 + 3);
          v65 = *((_QWORD *)v60 + 4);
          if ( &v64[v65] && !v64 )
LABEL_223:
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          if ( (unsigned __int64)v65 > 0xF )
          {
            if ( v65 < 0 )
LABEL_222:
              std::__throw_length_error("basic_string::_M_create");
            v165 = (__int64 *)v60;
            v164 = v64;
            v163 = v62;
            v162 = (__m128i *)v57;
            v63 = (_BYTE *)operator new(v65 + 1);
            v62 = (__int64 *)v163;
            v57 = (__int64 *)v162;
            v64 = v164;
            v60 = (__int8 *)v165;
            *((_QWORD *)v163 + 3) = v63;
            v62[5] = v65;
          }
          else
          {
            if ( v65 == 1 )
            {
              *((_BYTE *)v62 + 40) = *v64;
LABEL_75:
              v62[4] = v65;
              v63[v65] = 0;
              *((_BYTE *)v62 + 56) = v60[56];
              ++*((_DWORD *)v57 + 134);
LABEL_76:
              if ( v173 != v51 + 5 )
                operator delete(v173);
              sub_AEA040((__int64)p_src);
              goto LABEL_47;
            }
            if ( !v65 )
              goto LABEL_75;
          }
          v164 = v60;
          v163 = v62;
          v162 = (__m128i *)v57;
          memcpy(v63, v64, v65);
          v62 = (__int64 *)v163;
          v60 = (__int8 *)v164;
          v57 = (__int64 *)v162;
          v63 = *((_BYTE **)v163 + 3);
          goto LABEL_75;
        }
      }
      if ( v59 > v51 || v62 <= v51 )
      {
        v164 = v57;
        v163 = v57 + 68;
        v162 = (__m128i *)(v57 + 66);
        v152 = sub_2237400(v57 + 66, v57 + 68, v61, 64, v53);
        sub_9EF810(v162->m128i_i64, v152);
        v57 = (__int64 *)v164;
        v153 = (int)v187;
        v154 = *((void **)v164 + 66);
        if ( v163 == v154 )
        {
          *((_QWORD *)v164 + 66) = v152;
        }
        else
        {
          v163 = v187;
          v162 = (__m128i *)v164;
          free(v154);
          v57 = (__int64 *)v162;
          v153 = (int)v163;
          v162[33].m128i_i64[0] = v152;
        }
        *((_DWORD *)v57 + 135) = v153;
        v60 = (__int8 *)v51;
        v62 = (__int64 *)(v152 + ((unsigned __int64)*((unsigned int *)v57 + 134) << 6));
      }
      else
      {
        v165 = v57;
        v164 = v57 + 68;
        v163 = v57 + 66;
        v162 = (__m128i *)((char *)v51 - (char *)v59);
        v149 = sub_2237400(v57 + 66, v57 + 68, v61, 64, v53);
        sub_9EF810((__int64 *)v163, v149);
        v57 = v165;
        v150 = (int)v187;
        v151 = (void *)v165[66];
        if ( v164 == v151 )
        {
          v165[66] = v149;
        }
        else
        {
          v164 = v187;
          v163 = v165;
          free(v151);
          v57 = (__int64 *)v163;
          v150 = (int)v164;
          *((_QWORD *)v163 + 66) = v149;
        }
        *((_DWORD *)v57 + 135) = v150;
        v60 = &v162->m128i_i8[v149];
        v62 = (__int64 *)(v149 + ((unsigned __int64)*((unsigned int *)v57 + 134) << 6));
      }
      goto LABEL_70;
    }
    v10 = (__int64 *)&v187;
    v11 = (unsigned int)sub_15658F0(v7);
    sub_1564820(&v187, v7, v11, 15);
    v12 = (unsigned __int8 *)v187;
    if ( !v187 )
    {
      v75 = v188;
      v76 = *(_DWORD *)(v188 + 14976);
      if ( v76 )
      {
        v85 = (unsigned int)(v76 - 1);
        *(_DWORD *)(v188 + 14976) = v85;
        v12 = *(unsigned __int8 **)(v75 + 8 * v85 + 14848);
        v86 = *((unsigned int *)v12 + 134);
        *v12 = 0;
        v87 = *((_QWORD *)v12 + 66);
        *((_DWORD *)v12 + 106) = 0;
        v88 = v87 + (v86 << 6);
        if ( v87 != v88 )
        {
          v162 = (__m128i *)v7;
          v89 = v88;
          v163 = &v187;
          v90 = v11;
          v91 = v87;
          do
          {
            while ( 1 )
            {
              v89 -= 64;
              v92 = *(void **)(v89 + 24);
              if ( v92 == (void *)(v89 + 40) )
                break;
              operator delete(v92);
              if ( v91 == v89 )
                goto LABEL_124;
            }
          }
          while ( v91 != v89 );
LABEL_124:
          LODWORD(v11) = v90;
          v7 = v162;
          v10 = (__int64 *)v163;
        }
        *((_DWORD *)v12 + 134) = 0;
      }
      else
      {
        v12 = (unsigned __int8 *)operator new(0x3A0u);
        *v12 = 0;
        *((_QWORD *)v12 + 12) = v12 + 112;
        *((_QWORD *)v12 + 16) = v12 + 144;
        *((_QWORD *)v12 + 20) = v12 + 176;
        *((_QWORD *)v12 + 24) = v12 + 208;
        *((_QWORD *)v12 + 28) = v12 + 240;
        *((_QWORD *)v12 + 32) = v12 + 272;
        *((_QWORD *)v12 + 36) = v12 + 304;
        *((_QWORD *)v12 + 40) = v12 + 336;
        *((_QWORD *)v12 + 44) = v12 + 368;
        *((_QWORD *)v12 + 48) = v12 + 400;
        *((_QWORD *)v12 + 52) = v12 + 432;
        *((_QWORD *)v12 + 13) = 0;
        v12[112] = 0;
        *((_QWORD *)v12 + 17) = 0;
        v12[144] = 0;
        *((_QWORD *)v12 + 21) = 0;
        v12[176] = 0;
        *((_QWORD *)v12 + 25) = 0;
        v12[208] = 0;
        *((_QWORD *)v12 + 29) = 0;
        v12[240] = 0;
        *((_QWORD *)v12 + 33) = 0;
        v12[272] = 0;
        *((_QWORD *)v12 + 37) = 0;
        v12[304] = 0;
        *((_QWORD *)v12 + 41) = 0;
        v12[336] = 0;
        *((_QWORD *)v12 + 45) = 0;
        v12[368] = 0;
        *((_QWORD *)v12 + 49) = 0;
        v12[400] = 0;
        *((_QWORD *)v12 + 53) = 0x800000000LL;
        *((_QWORD *)v12 + 66) = v12 + 544;
        *((_QWORD *)v12 + 67) = 0x600000000LL;
      }
      v187 = v12;
    }
    v12[*v12 + 1] = 1;
    v13 = v187;
    v14 = *(unsigned __int8 *)v187;
    *(_BYTE *)v187 = v14 + 1;
    v13[v14 + 2] = "'case'";
    v15 = (unsigned __int8 *)v187;
    if ( !v187 )
    {
      v73 = v188;
      v74 = *(_DWORD *)(v188 + 14976);
      if ( v74 )
      {
        v78 = (unsigned int)(v74 - 1);
        *(_DWORD *)(v188 + 14976) = v78;
        v15 = *(unsigned __int8 **)(v73 + 8 * v78 + 14848);
        v79 = *((unsigned int *)v15 + 134);
        *v15 = 0;
        v80 = *((_QWORD *)v15 + 66);
        *((_DWORD *)v15 + 106) = 0;
        v81 = v80 + (v79 << 6);
        if ( v80 != v81 )
        {
          v162 = (__m128i *)v10;
          v82 = v7;
          v83 = v80;
          do
          {
            while ( 1 )
            {
              v81 -= 64;
              v84 = *(void **)(v81 + 24);
              if ( v84 == (void *)(v81 + 40) )
                break;
              operator delete(v84);
              if ( v83 == v81 )
                goto LABEL_116;
            }
          }
          while ( v83 != v81 );
LABEL_116:
          v7 = v82;
          v10 = (__int64 *)v162;
        }
        *((_DWORD *)v15 + 134) = 0;
      }
      else
      {
        v15 = (unsigned __int8 *)operator new(0x3A0u);
        *v15 = 0;
        *((_QWORD *)v15 + 12) = v15 + 112;
        *((_QWORD *)v15 + 16) = v15 + 144;
        *((_QWORD *)v15 + 20) = v15 + 176;
        *((_QWORD *)v15 + 24) = v15 + 208;
        *((_QWORD *)v15 + 28) = v15 + 240;
        *((_QWORD *)v15 + 32) = v15 + 272;
        *((_QWORD *)v15 + 36) = v15 + 304;
        *((_QWORD *)v15 + 40) = v15 + 336;
        *((_QWORD *)v15 + 44) = v15 + 368;
        *((_QWORD *)v15 + 48) = v15 + 400;
        *((_QWORD *)v15 + 52) = v15 + 432;
        *((_QWORD *)v15 + 13) = 0;
        v15[112] = 0;
        *((_QWORD *)v15 + 17) = 0;
        v15[144] = 0;
        *((_QWORD *)v15 + 21) = 0;
        v15[176] = 0;
        *((_QWORD *)v15 + 25) = 0;
        v15[208] = 0;
        *((_QWORD *)v15 + 29) = 0;
        v15[240] = 0;
        *((_QWORD *)v15 + 33) = 0;
        v15[272] = 0;
        *((_QWORD *)v15 + 37) = 0;
        v15[304] = 0;
        *((_QWORD *)v15 + 41) = 0;
        v15[336] = 0;
        *((_QWORD *)v15 + 45) = 0;
        v15[368] = 0;
        *((_QWORD *)v15 + 49) = 0;
        v15[400] = 0;
        *((_QWORD *)v15 + 53) = 0x800000000LL;
        *((_QWORD *)v15 + 66) = v15 + 544;
        *((_QWORD *)v15 + 67) = 0x600000000LL;
      }
      v187 = v15;
    }
    v16 = (__int64 *)&v176;
    v15[*v15 + 1] = 4;
    v17 = v187;
    v18 = &src;
    v19 = *(unsigned __int8 *)v187;
    *(_BYTE *)v187 = v19 + 1;
    v17[v19 + 2] = 62;
    dest = &v182.m128i_u64[1];
    v163 = &v182.m128i_u64[1];
    src = v186;
    v162 = (__m128i *)v186;
    v179 = 0;
    v180 = 0;
    v182.m128i_i64[0] = 0;
    v182.m128i_i8[8] = 0;
    v183 = 0;
    v176 = v11;
    v177 = v11;
    v178 = 0;
    sub_1532FD0(&src, ":", (__int64)"");
    v20 = dest;
    if ( src == v162 )
    {
      v71 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v186[0];
        else
          memcpy(dest, src, n);
        v71 = n;
        v20 = dest;
      }
      v182.m128i_i64[0] = v71;
      v20[v71] = 0;
      v20 = src;
    }
    else
    {
      if ( dest == v163 )
      {
        v162 = (__m128i *)v186[0];
        dest = src;
        a6 = (__m128i)_mm_loadh_ps((const double *)&v162);
        v182 = a6;
      }
      else
      {
        v162 = (__m128i *)v186[0];
        v21 = v182.m128i_i64[1];
        dest = src;
        a6 = (__m128i)_mm_loadh_ps((const double *)&v162);
        v182 = a6;
        if ( v20 )
        {
          src = v20;
          v186[0] = v21;
          goto LABEL_14;
        }
      }
      v20 = v186;
      src = v186;
    }
LABEL_14:
    n = 0;
    *v20 = 0;
    if ( src != v186 )
      operator delete(src);
    v183 = 0;
    if ( v176 && v177 )
    {
      v22 = (__int64 *)v187;
      if ( v187 )
      {
        v23 = *((unsigned int *)v187 + 134);
        v24 = *((__int64 **)v187 + 66);
        v25 = (__int8 *)&v176;
        v26 = v23 + 1;
        v27 = &v24[8 * v23];
        if ( *((unsigned int *)v187 + 135) >= (unsigned __int64)(v23 + 1) )
          goto LABEL_20;
      }
      else
      {
        v112 = v188;
        v113 = *(_DWORD *)(v188 + 14976);
        if ( v113 )
        {
          v128 = (unsigned int)(v113 - 1);
          *(_DWORD *)(v188 + 14976) = v128;
          v22 = *(__int64 **)(v112 + 8 * v128 + 14848);
          v129 = *((unsigned int *)v22 + 134);
          *(_BYTE *)v22 = 0;
          v130 = v22[66];
          *((_DWORD *)v22 + 106) = 0;
          v24 = (__int64 *)(v130 + (v129 << 6));
          if ( (__int64 *)v130 != v24 )
          {
            v162 = (__m128i *)&v176;
            v131 = v7;
            v132 = v24;
            v163 = &src;
            v133 = v11;
            v134 = v130;
            v164 = v10;
            v135 = v22;
            do
            {
              while ( 1 )
              {
                v132 -= 8;
                v136 = (__int64 *)v132[3];
                if ( v136 == v132 + 5 )
                  break;
                operator delete(v136);
                if ( (__int64 *)v134 == v132 )
                  goto LABEL_192;
              }
            }
            while ( (__int64 *)v134 != v132 );
LABEL_192:
            v22 = v135;
            LODWORD(v11) = v133;
            v7 = v131;
            v18 = v163;
            v16 = (__int64 *)v162;
            v10 = (__int64 *)v164;
            v24 = (__int64 *)v22[66];
          }
          *((_DWORD *)v22 + 134) = 0;
          v114 = *((unsigned int *)v22 + 135);
        }
        else
        {
          v114 = 6;
          v22 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v22 = 0;
          v22[12] = (__int64)(v22 + 14);
          v24 = v22 + 68;
          v22[16] = (__int64)(v22 + 18);
          v22[20] = (__int64)(v22 + 22);
          v22[24] = (__int64)(v22 + 26);
          v22[28] = (__int64)(v22 + 30);
          v22[32] = (__int64)(v22 + 34);
          v22[36] = (__int64)(v22 + 38);
          v22[40] = (__int64)(v22 + 42);
          v22[44] = (__int64)(v22 + 46);
          v22[48] = (__int64)(v22 + 50);
          v22[52] = (__int64)(v22 + 54);
          v22[13] = 0;
          *((_BYTE *)v22 + 112) = 0;
          v22[17] = 0;
          *((_BYTE *)v22 + 144) = 0;
          v22[21] = 0;
          *((_BYTE *)v22 + 176) = 0;
          v22[25] = 0;
          *((_BYTE *)v22 + 208) = 0;
          v22[29] = 0;
          *((_BYTE *)v22 + 240) = 0;
          v22[33] = 0;
          *((_BYTE *)v22 + 272) = 0;
          v22[37] = 0;
          *((_BYTE *)v22 + 304) = 0;
          v22[41] = 0;
          *((_BYTE *)v22 + 336) = 0;
          v22[45] = 0;
          *((_BYTE *)v22 + 368) = 0;
          v22[49] = 0;
          *((_BYTE *)v22 + 400) = 0;
          v22[53] = 0x800000000LL;
          v22[66] = (__int64)(v22 + 68);
          v22[67] = 0x600000000LL;
        }
        v26 = 1;
        v187 = v22;
        v27 = v24;
        v25 = (__int8 *)v16;
        if ( v114 )
        {
LABEL_20:
          *v27 = *(_QWORD *)v25;
          *((_DWORD *)v27 + 2) = *((_DWORD *)v25 + 2);
          *(__int64 *)((char *)v27 + 12) = *(_QWORD *)(v25 + 12);
          *((_DWORD *)v27 + 5) = *((_DWORD *)v25 + 5);
          v28 = v27 + 5;
          v27[3] = (__int64)(v27 + 5);
          v29 = *((_BYTE **)v25 + 3);
          v30 = *((_QWORD *)v25 + 4);
          if ( &v29[v30] && !v29 )
            goto LABEL_223;
          if ( (unsigned __int64)v30 > 0xF )
          {
            v165 = v27;
            v164 = v25;
            v163 = v29;
            v162 = (__m128i *)v22;
            if ( v30 < 0 )
              goto LABEL_222;
            v28 = (_BYTE *)operator new(v30 + 1);
            v27 = v165;
            v22 = (__int64 *)v162;
            v29 = v163;
            v25 = (__int8 *)v164;
            v165[3] = (__int64)v28;
            v27[5] = v30;
          }
          else
          {
            if ( v30 == 1 )
            {
              *((_BYTE *)v27 + 40) = *v29;
LABEL_25:
              v27[4] = v30;
              v28[v30] = 0;
              *((_BYTE *)v27 + 56) = v25[56];
              ++*((_DWORD *)v22 + 134);
              goto LABEL_26;
            }
            if ( !v30 )
              goto LABEL_25;
          }
          v164 = v27;
          v163 = v25;
          v162 = (__m128i *)v22;
          memcpy(v28, v29, v30);
          v27 = (__int64 *)v164;
          v25 = (__int8 *)v163;
          v22 = (__int64 *)v162;
          v28 = *((_BYTE **)v164 + 3);
          goto LABEL_25;
        }
      }
      if ( v24 > v16 || v27 <= v16 )
      {
        v164 = v22;
        v163 = v22 + 68;
        v162 = (__m128i *)(v22 + 66);
        v125 = sub_2237400(v22 + 66, v22 + 68, v26, 64, v18);
        sub_9EF810(v162->m128i_i64, v125);
        v22 = (__int64 *)v164;
        v126 = (int)src;
        v127 = *((void **)v164 + 66);
        if ( v163 == v127 )
        {
          *((_QWORD *)v164 + 66) = v125;
        }
        else
        {
          v163 = v164;
          v162 = (__m128i *)src;
          free(v127);
          v22 = (__int64 *)v163;
          v126 = (int)v162;
          *((_QWORD *)v163 + 66) = v125;
        }
        *((_DWORD *)v22 + 135) = v126;
        v25 = (__int8 *)v16;
        v27 = (__int64 *)(v125 + ((unsigned __int64)*((unsigned int *)v22 + 134) << 6));
      }
      else
      {
        v165 = v22;
        v164 = v22 + 68;
        v163 = v22 + 66;
        v162 = (__m128i *)((char *)v16 - (char *)v24);
        v115 = sub_2237400(v22 + 66, v22 + 68, v26, 64, v18);
        sub_9EF810((__int64 *)v163, v115);
        v22 = v165;
        v116 = (int)src;
        v117 = (void *)v165[66];
        if ( v164 == v117 )
        {
          v165[66] = v115;
        }
        else
        {
          v164 = src;
          v163 = v165;
          free(v117);
          v22 = (__int64 *)v163;
          v116 = (int)v164;
          *((_QWORD *)v163 + 66) = v115;
        }
        *((_DWORD *)v22 + 135) = v116;
        v25 = &v162->m128i_i8[v115];
        v27 = (__int64 *)(v115 + ((unsigned __int64)*((unsigned int *)v22 + 134) << 6));
      }
      goto LABEL_20;
    }
LABEL_26:
    if ( dest != v16 + 5 )
      operator delete(dest);
    if ( (_BYTE)v191 )
    {
      sub_FC7790(v189[0], v10, SHIBYTE(v191));
      v189[0] = 0;
      v191 = 0;
    }
    if ( v190 != v10 + 6 )
      operator delete(v190);
    v31 = (void **)v187;
    if ( v187 )
    {
      v32 = v188;
      if ( v188 )
      {
        if ( (unsigned __int64)v187 < v188 || (unsigned __int64)v187 > v188 + 14848 )
        {
          v33 = *((void ***)v187 + 66);
          v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v187 + 134)];
          if ( v33 != v34 )
          {
            do
            {
              while ( 1 )
              {
                v34 -= 8;
                v35 = (void **)v34[3];
                if ( v35 == v34 + 5 )
                  break;
                operator delete(v35);
                if ( v33 == v34 )
                  goto LABEL_38;
              }
            }
            while ( v33 != v34 );
LABEL_38:
            v34 = (void **)v31[66];
          }
          if ( v34 != v31 + 68 )
            free(v34);
          v36 = (void **)v31[52];
          v37 = v31 + 52;
          if ( v36 != v31 + 54 )
            free(v36);
          v38 = v31 + 12;
          do
          {
            while ( 1 )
            {
              v37 -= 4;
              if ( *v37 == v37 + 2 )
                break;
              operator delete(*v37);
              if ( v38 == v37 )
                goto LABEL_46;
            }
          }
          while ( v38 != v37 );
LABEL_46:
          operator delete(v31, 0x3A0u);
        }
        else
        {
          v72 = *(unsigned int *)(v188 + 14976);
          *(_DWORD *)(v188 + 14976) = v72 + 1;
          *(_QWORD *)(v32 + 8 * v72 + 14848) = v31;
        }
      }
    }
LABEL_47:
    v39 = sub_1C39C90(v7[6].m128i_i64[0], v157, v161, v166, v158, (unsigned int)v11);
    if ( v39 == 1 )
    {
      v40 = v160;
      if ( v159 == 1 )
      {
        result = sub_153D810(v7, 0, v167);
LABEL_81:
        v7[127].m128i_i8[8] = v9;
        return result;
      }
    }
    else
    {
      v40 = v39 & 0xFFFFFFFFFFFFFFFELL;
      if ( v159 == 1 )
        v159 = v39;
      else
        sub_1C369E0(v7[6].m128i_i64[0], v160, v39 & 0xFFFFFFFFFFFFFFFELL);
    }
    v41 = v7[2].m128i_i16[0];
    v7[127].m128i_i8[8] = v9;
    if ( v41 != 78 )
      break;
LABEL_51:
    v42 = (__int64 *)v7->m128i_i64[1];
    v7[2].m128i_i32[2] = v7[1].m128i_i32[0];
    sub_14634E0(v42, v7[1].m128i_i32);
    v43 = v7[2].m128i_u32[2];
    v44 = v7[2].m128i_i16[0] == 3;
    v157 = v43;
    if ( v44 )
      goto LABEL_169;
    v9 = v7[127].m128i_i8[8];
    v7[127].m128i_i8[8] = 1;
    v161 = sub_14C4AC0(v7, v43, a6);
    if ( v161 == 1 )
    {
      LODWORD(v187) = 1638462;
      if ( !(unsigned __int8)sub_15680D0(v7, &v187, 2, 3) )
      {
LABEL_109:
        result = 1;
        goto LABEL_81;
      }
    }
    v8 = v7[2].m128i_i16[0];
    v160 = v40;
  }
  if ( v41 == 25 )
  {
    sub_15341A0((__int64)v7);
    v120 = (unsigned int)v11;
    v121 = sub_1C36210(v7[6].m128i_i64[0], (unsigned int)v11, 0);
  }
  else
  {
    v120 = 0;
    v121 = sub_153D810(v7, 0, v167);
  }
  if ( v40 )
  {
    if ( v121 == 1 )
    {
      v120 = 0;
      v121 = sub_1C36210(v7[6].m128i_i64[0], 0, 0);
    }
    v122 = (_WORD *)(v121 & 0xFFFFFFFFFFFFFFFELL);
    v123 = *(char **)(v7->m128i_i64[1] + 56);
    if ( (v123[1] & 8) == 0 )
    {
      v124 = *v123;
      if ( v124 >= 0 && (*v122 & 0x1FF) == 0xF5 )
      {
        v155 = -((v124 & 8) == 0);
        v156 = sub_EEB7E0((unsigned __int64)v122, v120, *(double *)a6.m128i_i64);
        sub_1564820(&v187, v7, v156, (v155 & 0xFFFFFF88) + 2073);
        sub_AEA040((__int64)&v187);
      }
    }
    sub_1C369E0(v7[6].m128i_i64[0], v40, v122);
  }
  return v159;
}
