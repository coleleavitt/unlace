void __fastcall sub_1827850(
        _QWORD *a1,
        char *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  _QWORD *v8; // r15
  __int64 v9; // rax
  _DWORD *v10; // rbx
  __int64 (*v11)(); // rbp
  size_t v12; // rax
  __int64 **v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // r12
  const __m128i *v18; // rbx
  unsigned __int64 v19; // rax
  __m128i v20; // xmm4
  _BYTE *v21; // rbx
  _BYTE *v22; // rax
  _DWORD *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  void *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // eax
  char *v37; // rbx
  _BYTE *v38; // rbp
  int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 (*v50)(); // rax
  __int64 v51; // rax
  __int64 v52; // r12
  size_t v53; // rax
  char *v54; // rbx
  __int64 v55; // r15
  size_t v56; // rax
  size_t v57; // rbp
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rcx
  char *v61; // r8
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // bl
  void **v67; // rbp
  void **v68; // r14
  __int64 v69; // rax
  void **v70; // rbx
  void *v71; // r12
  void *v72; // r13
  _QWORD *v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbp
  void **v79; // rbx
  size_t v80; // rbp
  __int64 v81; // rbx
  size_t v82; // rax
  __int64 v83; // rax
  size_t v84; // rdx
  size_t v85; // rbp
  __int64 v86; // rbx
  size_t v87; // rax
  _QWORD *v88; // rbp
  void **v89; // r15
  void **v90; // rbp
  char *v91; // r15
  __int64 v92; // rsi
  unsigned __int64 v93; // rax
  __int64 v94; // rcx
  size_t v95; // rbp
  __int64 v96; // rbp
  void **v97; // r15
  unsigned __int64 v98; // r13
  unsigned int v99; // ecx
  void *v100; // rdi
  unsigned __int64 v101; // rsi
  _BYTE *v102; // rbp
  __m128i v103; // xmm6
  void *v104; // rdi
  unsigned __int64 v105; // r15
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  _QWORD *v110; // rax
  __int64 v111; // rsi
  _QWORD *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r12
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // r12
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int8 v127; // cl
  __int64 (*v128)(); // rax
  __int64 v129; // rax
  unsigned __int64 v130; // rdx
  char v131; // al
  size_t v132; // rax
  __int64 *v133; // rdi
  __int64 v134; // rax
  __int64 (*v135)(); // rcx
  __int64 (*v136)(); // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  int *v140; // rsi
  __int64 v141; // rbx
  __int64 v142; // rax
  char *v143; // rdx
  __int64 v144; // rdi
  __int64 (*v145)(); // rax
  __int64 v146; // rbx
  unsigned int v147; // edx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rbx
  __int64 v151; // rax
  __int64 v152; // rax
  void *v153; // rdx
  char *v154; // rcx
  __int64 v155; // rbx
  __int64 *v156; // rax
  __int64 *v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rbx
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  size_t v164; // rdx
  __int64 v165; // r14
  __int64 v166; // rax
  void *v167; // rbx
  unsigned __int32 v168; // ebp
  __m128i *v169; // r12
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rbp
  void *v175; // rdi
  unsigned int v176; // [rsp+8h] [rbp-3D0h]
  __int64 *v177; // [rsp+10h] [rbp-3C8h]
  __int64 v178; // [rsp+18h] [rbp-3C0h]
  __int8 v179; // [rsp+20h] [rbp-3B8h]
  _DWORD *v180; // [rsp+28h] [rbp-3B0h]
  bool v181; // [rsp+30h] [rbp-3A8h]
  char *v182; // [rsp+30h] [rbp-3A8h]
  char *v183; // [rsp+38h] [rbp-3A0h]
  __int64 v184; // [rsp+38h] [rbp-3A0h]
  __int8 src; // [rsp+40h] [rbp-398h]
  void *srca; // [rsp+40h] [rbp-398h]
  _QWORD *v187; // [rsp+48h] [rbp-390h]
  __int8 v188; // [rsp+48h] [rbp-390h]
  __m128i v189; // [rsp+50h] [rbp-388h] BYREF
  unsigned __int64 v190; // [rsp+60h] [rbp-378h]
  const __m128i *v191; // [rsp+68h] [rbp-370h]
  void ***v192; // [rsp+70h] [rbp-368h]
  char *v193; // [rsp+78h] [rbp-360h]
  __int8 v194; // [rsp+83h] [rbp-355h]
  unsigned int v195; // [rsp+84h] [rbp-354h]
  unsigned int *v196; // [rsp+88h] [rbp-350h]
  __m128i *v197; // [rsp+90h] [rbp-348h]
  int v198; // [rsp+98h] [rbp-340h]
  __int8 v199; // [rsp+9Eh] [rbp-33Ah]
  __int8 v200; // [rsp+9Fh] [rbp-339h]
  void **v201; // [rsp+A0h] [rbp-338h]
  size_t v202; // [rsp+A8h] [rbp-330h]
  unsigned int v203; // [rsp+B0h] [rbp-328h] BYREF
  int v204; // [rsp+B4h] [rbp-324h] BYREF
  _QWORD *v205; // [rsp+B8h] [rbp-320h] BYREF
  __m128i v206; // [rsp+C0h] [rbp-318h] BYREF
  void *s[2]; // [rsp+D0h] [rbp-308h] BYREF
  void *s2[2]; // [rsp+E0h] [rbp-2F8h] BYREF
  __int64 v209; // [rsp+F0h] [rbp-2E8h] BYREF
  unsigned __int64 v210; // [rsp+F8h] [rbp-2E0h]
  __m128i si128; // [rsp+100h] [rbp-2D8h] BYREF
  unsigned __int64 v212; // [rsp+110h] [rbp-2C8h] BYREF
  unsigned __int64 v213; // [rsp+118h] [rbp-2C0h]
  __m128 v214; // [rsp+120h] [rbp-2B8h] BYREF
  void *v215; // [rsp+130h] [rbp-2A8h] BYREF
  __int64 v216; // [rsp+138h] [rbp-2A0h]
  char v217; // [rsp+140h] [rbp-298h] BYREF
  _BYTE v218[24]; // [rsp+160h] [rbp-278h] BYREF
  _BYTE v219[72]; // [rsp+178h] [rbp-260h] BYREF
  void *v220; // [rsp+1C0h] [rbp-218h] BYREF
  __m128i v221; // [rsp+1C8h] [rbp-210h]
  __int64 v222; // [rsp+1D8h] [rbp-200h] BYREF
  unsigned __int8 *v223[11]; // [rsp+1E0h] [rbp-1F8h] BYREF
  char v224; // [rsp+238h] [rbp-1A0h]
  unsigned int v225; // [rsp+240h] [rbp-198h]
  char v226; // [rsp+244h] [rbp-194h]
  void *ptr; // [rsp+250h] [rbp-188h] BYREF
  __m128i v228; // [rsp+258h] [rbp-180h] BYREF
  _BYTE v229[120]; // [rsp+268h] [rbp-170h] BYREF
  void **v230; // [rsp+2E0h] [rbp-F8h] BYREF
  __int64 v231; // [rsp+2E8h] [rbp-F0h]
  char v232; // [rsp+2F0h] [rbp-E8h] BYREF

  v8 = a1;
  v9 = a1[31];
  v193 = a2;
  v10 = *(_DWORD **)(v9 + 17448);
  v191 = a3;
  if ( (unsigned int)(v10[62] - 3) <= 2 )
  {
    v11 = *(__int64 (**)())(*(_QWORD *)v10 + 584LL);
    v12 = j__strlen("fmv");
    if ( v11 == sub_A55EE0 )
      return;
    a2 = "fmv";
    if ( !((unsigned __int8 (__fastcall *)(_DWORD *, char *, size_t))v11)(v10, "fmv", v12) )
      return;
  }
  if ( (v193[29] & 1) != 0 )
  {
    v13 = (__int64 **)sub_B8C3D0((__int64)v193, (__int64)a2, (__int64)a3, a4, a5, a6);
    v14 = *v13;
    v15 = (unsigned __int64)&(*v13)[*((unsigned int *)v13 + 2)];
    if ( (unsigned __int64)v14 >= v15 )
    {
      if ( v14 != (__int64 *)v15 )
      {
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 377 )
          goto LABEL_218;
        v157 = (__int64 *)(v15 + 8);
        while ( 1 )
        {
          a4 = (__int64)v157;
          if ( v14 == v157 )
            break;
          v158 = *v157++;
          if ( *(_WORD *)(v158 + 36) == 377 )
            goto LABEL_218;
        }
      }
    }
    else
    {
      a4 = (__int64)v14;
      while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 377 )
      {
        a4 += 8;
        if ( v15 == a4 )
          goto LABEL_10;
      }
      if ( v15 != a4 )
      {
LABEL_218:
        v155 = *v14;
        if ( *(_WORD *)(*v14 + 36) != 377 )
        {
          v156 = v14 + 1;
          do
            v155 = *v156++;
          while ( *(_WORD *)(v155 + 36) != 377 );
        }
        sub_168B9F0((__int64)&v230, a1 + 1, v191[1].m128i_u32[2], 0xE77u, 0);
        sub_15DD120((__int64)&v230, (__int64)v191);
        sub_15F7200(&v230);
        sub_168B9F0((__int64)&v230, a1 + 1, *(_DWORD *)(v155 + 24), 0x16CFu, 0);
        sub_15F7200(&v230);
        return;
      }
    }
  }
LABEL_10:
  v177 = a1 + 1;
  if ( (unsigned __int8)sub_18132D0(a1 + 1, (__int64)v193, (__int64)v191, a4, a5, a6) )
    return;
  v200 = 0;
  v201 = &v215;
  v215 = &v217;
  v216 = 0x200000000LL;
  v231 = 0x200000000LL;
  v16 = v191[3].m128i_u16[4];
  v192 = &v230;
  v230 = (void **)&v232;
  v198 = v16;
  if ( !v16 )
    goto LABEL_246;
  v181 = 0;
  v17 = a1;
  v196 = &v203;
  v199 = 0;
  v178 = 0;
  v197 = &v206;
  do
  {
    v18 = v191;
    v206 = 0u;
    v203 = 0;
    v194 = sub_181EB00((__int64)v17, (__int64)v191, v178, v197, v196, a7, *(double *)a8.m128i_i64);
    if ( !v194 )
      goto LABEL_94;
    v19 = sub_BFD550(v18[5].m128i_i64[v178] & 0xFFFFFFFFFFFFFFFCLL);
    v20 = _mm_load_si128(&v206);
    v190 = v19;
    *(__m128i *)s = v20;
    v195 = v203;
    if ( v181 )
    {
      if ( !s[1] )
        goto LABEL_205;
    }
    else
    {
      if ( !s[1] )
        goto LABEL_205;
      v21 = s[0];
      v22 = memchr(s[0], 44, (size_t)s[1]);
      if ( v22 )
        v181 = v22 - v21 != -1;
    }
    v23 = *(_DWORD **)(v17[31] + 17448LL);
    si128 = _mm_load_si128((const __m128i *)s);
    v209 = 0;
    v180 = v23;
    v210 = 0;
LABEL_19:
    if ( !si128.m128i_i64[1] )
    {
LABEL_115:
      v82 = j__strlen(asc_22E1692);
      v83 = sub_9EC6F0((__int64)s, (__int64)asc_22E1692, v82);
      v85 = v84;
      v86 = v83;
      v87 = j__strlen(",");
      if ( v87 > v85 || v87 && memcmp((const void *)(v85 - v87 + v86), ",", v87) )
        goto LABEL_77;
LABEL_205:
      v147 = v195;
LABEL_206:
      sub_168B9F0((__int64)&ptr, v177, v147, 0x1D5Au, 0);
      LODWORD(v212) = 0;
      v148 = sub_1815E70((__int64)&ptr, (int *)&v212);
      *(_DWORD *)v218 = 0;
      v149 = sub_180D8D0(v148, (int *)v218);
      v150 = v149;
      if ( *(_BYTE *)(v149 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v149 + 32), (__int64)&byte_22F0C30, 1u);
      }
      else if ( *(_BYTE *)(v149 + 132) )
      {
        sub_180D0B0(v149, (__int64)&byte_22F0C30);
      }
      LODWORD(v220) = 1;
      v66 = *(_BYTE *)(sub_18161E0(v150, (int *)&v220) + 120);
      sub_15F7200(&ptr);
      goto LABEL_76;
    }
    while ( 1 )
    {
      LOBYTE(ptr) = 44;
      v24 = sub_2246AB0(&si128, &ptr, 1, 0);
      if ( v24 == -1 )
      {
        v24 = si128.m128i_u64[1];
        v27 = si128.m128i_i64[0];
        v26 = 0;
        v28 = 0;
      }
      else
      {
        v25 = v24 + 1;
        if ( v24 + 1 > si128.m128i_i64[1] )
        {
          v25 = si128.m128i_u64[1];
          v26 = 0;
        }
        else
        {
          v26 = si128.m128i_i64[1] - v25;
        }
        v27 = si128.m128i_i64[0];
        v28 = si128.m128i_i64[0] + v25;
        if ( v24 > si128.m128i_i64[1] )
          v24 = si128.m128i_u64[1];
      }
      v209 = v27;
      v29 = 0;
      si128.m128i_i64[0] = v28;
      si128.m128i_i64[1] = v26;
      v210 = v24;
      v30 = sub_2246FB0(&v209, asc_22E1692, 6, 0);
      v31 = v210;
      if ( v30 < v210 )
      {
        v31 = v30;
        v29 = v210 - v30;
      }
      v228.m128i_i64[0] = v29;
      ptr = (void *)(v209 + v31);
      v32 = sub_2247130(&ptr, asc_22E1692, 6, -1) + 1;
      if ( v32 > v228.m128i_i64[0] )
        v32 = v228.m128i_i64[0];
      s2[0] = ptr;
      v33 = (void *)(v228.m128i_i64[0] - v29 + v32);
      v34 = v17[29];
      if ( (unsigned __int64)v33 > v228.m128i_i64[0] )
        v33 = (void *)v228.m128i_i64[0];
      v35 = v17[34];
      s2[1] = v33;
      v36 = sub_C07A10(
              v190,
              (int)ptr - ((int)v190 + 4 * *(_DWORD *)(v190 + 4) + 20),
              v35,
              v34,
              (__int64)v180,
              nullptr,
              nullptr);
      v37 = (char *)s2[1];
      v176 = v36;
      if ( !s2[1] )
      {
        v147 = v36;
        goto LABEL_206;
      }
      v38 = s2[0];
      v39 = v180[62];
      if ( (unsigned int)(v39 - 3) <= 2 )
      {
        if ( s2[1] != &byte_7
          || *(_DWORD *)s2[0] != 1634100580
          || *((_WORD *)s2[0] + 2) != 27765
          || *((_BYTE *)s2[0] + 6) != 116 )
        {
          a8 = _mm_load_si128((const __m128i *)s2);
          v212 = 0;
          v213 = 0;
          v214 = (__m128)a8;
          ptr = &v228.m128i_u64[1];
          v228.m128i_i64[0] = 0x800000000LL;
          if ( !a8.m128i_i64[1] )
          {
            v91 = &v228.m128i_i8[8];
            v179 = 0;
            v92 = 16LL * v228.m128i_u32[0];
            goto LABEL_133;
          }
          v179 = 0;
          v187 = v17;
          while ( 1 )
          {
            LOBYTE(v220) = 43;
            v44 = sub_2246AB0(&v214, &v220, 1, 0);
            if ( v44 == -1 )
            {
              v44 = v214.m128_u64[1];
              v42 = v214.m128_u64[0];
              v41 = 0;
              v43 = 0;
            }
            else
            {
              v40 = v44 + 1;
              if ( v44 + 1 > v214.m128_u64[1] )
              {
                v40 = v214.m128_u64[1];
                v41 = 0;
              }
              else
              {
                v41 = v214.m128_u64[1] - v40;
              }
              v42 = v214.m128_u64[0];
              v43 = v214.m128_u64[0] + v40;
              if ( v44 > v214.m128_u64[1] )
                v44 = v214.m128_u64[1];
            }
            v212 = v42;
            v45 = 0;
            v214.m128_u64[0] = v43;
            v214.m128_u64[1] = v41;
            v213 = v44;
            v46 = sub_2246FB0(&v212, asc_22E1692, 6, 0);
            v47 = v213;
            if ( v46 < v213 )
            {
              v45 = v213 - v46;
              v47 = v46;
            }
            v221.m128i_i64[0] = v45;
            v220 = (void *)(v212 + v47);
            v48 = sub_2247130(&v220, asc_22E1692, 6, -1) + 1;
            *(_QWORD *)v218 = v220;
            if ( v48 > v221.m128i_i64[0] )
              v48 = v221.m128i_i64[0];
            v49 = v221.m128i_i64[0] - v45 + v48;
            if ( v49 > v221.m128i_i64[0] )
              v49 = v221.m128i_i64[0];
            v50 = *(__int64 (**)())(*(_QWORD *)v180 + 616LL);
            *(_QWORD *)&v218[8] = v49;
            if ( v50 == sub_102BAA0 )
              break;
            v127 = ((__int64 (__fastcall *)(_DWORD *))v50)(v180);
            if ( !v127 )
              break;
            v128 = *(__int64 (**)())(*(_QWORD *)v180 + 552LL);
            if ( v128 == sub_102BA40
              || (v189.m128i_i8[0] = v127,
                  v131 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD))v128)(
                           v180,
                           *(_QWORD *)v218,
                           *(_QWORD *)&v218[8]),
                  v127 = v189.m128i_i8[0],
                  v131) )
            {
              v179 = v127;
            }
            v129 = v228.m128i_u32[0];
            a7 = _mm_load_si128((const __m128i *)v218);
            v130 = v228.m128i_u32[0] + 1LL;
            if ( v130 > v228.m128i_u32[1] )
            {
              v189 = a7;
              sub_2237220(&ptr, &v228.m128i_u64[1], v130, 16);
              v129 = v228.m128i_u32[0];
              a7 = _mm_load_si128(&v189);
            }
            *((__m128i *)ptr + v129) = a7;
            ++v228.m128i_i32[0];
LABEL_53:
            if ( !v214.m128_u64[1] )
            {
              v17 = v187;
              v91 = (char *)ptr;
              v92 = 16LL * v228.m128i_u32[0];
              if ( (unsigned __int64)v92 > 0x10 )
              {
                qsort(ptr, v92 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
                v91 = (char *)ptr;
                v92 = 16LL * v228.m128i_u32[0];
              }
LABEL_133:
              *(_QWORD *)v218 = v219;
              *(__m128i *)&v218[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
              v183 = &v91[v92];
              if ( &v91[v92] == v91 )
              {
                v94 = 0;
              }
              else
              {
                v93 = 64;
                v94 = 0;
                while ( 1 )
                {
                  v95 = *((_QWORD *)v91 + 1);
                  srca = *(void **)v91;
                  if ( v93 < v95 + v94 )
                  {
                    sub_2236E10(v218, v219, v95 + v94, 1);
                    v94 = *(_QWORD *)&v218[8];
                  }
                  if ( v95 )
                  {
                    memcpy((void *)(*(_QWORD *)v218 + v94), srca, v95);
                    v94 = *(_QWORD *)&v218[8];
                  }
                  v94 += v95;
                  v91 += 16;
                  *(_QWORD *)&v218[8] = v94;
                  if ( v183 == v91 )
                    break;
                  v93 = *(_QWORD *)&v218[16];
                  if ( v94 )
                  {
                    if ( *(_QWORD *)&v218[16] < (unsigned __int64)(v94 + 1) )
                    {
                      sub_2236E10(v218, v219, v94 + 1, 1);
                      v94 = *(_QWORD *)&v218[8];
                    }
                    *(_BYTE *)(*(_QWORD *)v218 + v94) = 43;
                    v94 = *(_QWORD *)&v218[8] + 1LL;
                    v93 = *(_QWORD *)&v218[16];
                    ++*(_QWORD *)&v218[8];
                  }
                }
              }
              v96 = (unsigned int)v231;
              v97 = v230;
              v184 = v94;
              v98 = (unsigned __int64)&v230[11 * (unsigned int)v231];
              if ( v98 != sub_18054D0((__int64)v230, v98, (__int64)v218) )
              {
                v99 = 7415;
                goto LABEL_147;
              }
              if ( v179 )
              {
                if ( v184 )
                {
                  v101 = v96 + 1;
                  v102 = v218;
                  if ( v101 > HIDWORD(v231) )
                  {
                    if ( v97 > (void **)v218 || v98 <= (unsigned __int64)v218 )
                    {
                      sub_1809D00((__int64)v192, v101);
                      v102 = v218;
                      v98 = (unsigned __int64)&v230[11 * (unsigned int)v231];
                    }
                    else
                    {
                      sub_1809D00((__int64)v192, v101);
                      v102 = (char *)v230 + v218 - (_BYTE *)v97;
                      v98 = (unsigned __int64)&v230[11 * (unsigned int)v231];
                    }
                  }
                  v103 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
                  v104 = (void *)(v98 + 24);
                  *(_QWORD *)v98 = v98 + 24;
                  *(__m128i *)(v98 + 8) = v103;
                  v105 = *((_QWORD *)v102 + 1);
                  if ( v102 != (_BYTE *)v98 && v105 )
                  {
                    v164 = *((_QWORD *)v102 + 1);
                    if ( v105 <= 0x40
                      || (sub_2236E10(v98, v98 + 24, v164, 1), v164 = *((_QWORD *)v102 + 1), v104 = *(void **)v98, v164) )
                    {
                      memcpy(v104, *(const void **)v102, v164);
                    }
                    *(_QWORD *)(v98 + 8) = v105;
                  }
                  LODWORD(v231) = v231 + 1;
                  v200 = v179;
                }
              }
              else
              {
                v99 = 7417;
LABEL_147:
                sub_168B9F0((__int64)&v220, v177, v176, v99, 0);
                sub_15F7200(&v220);
              }
              if ( *(_BYTE **)v218 != v219 )
                free(*(void **)v218);
              v100 = ptr;
              if ( ptr != &v228.m128i_u64[1] )
LABEL_151:
                free(v100);
              goto LABEL_19;
            }
          }
          sub_168B9F0((__int64)&v220, v177, v176, 0x1D5Au, 0);
          if ( v224 )
          {
            sub_AE9DF0(v223, 0, 2u);
            if ( v224 )
              goto LABEL_165;
          }
          else
          {
            if ( !v226 )
            {
LABEL_50:
              v51 = sub_1682BA0((__int64)&v220, (__int64)v218);
              v52 = v51;
              if ( *(_BYTE *)(v51 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v51 + 32), 1, 2u);
              }
              else if ( *(_BYTE *)(v51 + 132) )
              {
                v107 = sub_168B9E0((_QWORD *)v51);
                v110 = *(_QWORD **)(v52 + 16);
                if ( v110 )
                {
                  v111 = *v110;
                  v189.m128i_i64[0] = v107;
                  v110 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v111 + 32))(v110);
                  v107 = v189.m128i_i64[0];
                }
                v205 = v110;
                v112 = sub_1587BC0(v107, (__int64 *)&v205, v106, v107, v108, v109);
                sub_AE9DF0((unsigned __int8 **)(*v112 + 32LL * *(unsigned int *)(v52 + 128) + 8), 1, 2u);
              }
              sub_15F7200(&v220);
              goto LABEL_53;
            }
            v117 = sub_168B9E0(&v220);
            v118 = v221.m128i_i64[1];
            if ( v221.m128i_i64[1] )
              v118 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v221.m128i_i64[1] + 32LL))(v221.m128i_i64[1]);
            v205 = (_QWORD *)v118;
            v119 = sub_1587BC0(v117, (__int64 *)&v205, v113, v114, v115, v116);
            sub_AE9DF0((unsigned __int8 **)(*v119 + 32LL * v225 + 8), 0, 2u);
            if ( v224 )
            {
LABEL_165:
              sub_AE9DF0(v223, 0, 2u);
              goto LABEL_50;
            }
          }
          if ( v226 )
          {
            v124 = sub_168B9E0(&v220);
            v125 = v221.m128i_i64[1];
            if ( v221.m128i_i64[1] )
              v125 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v221.m128i_i64[1] + 32LL))(v221.m128i_i64[1]);
            v205 = (_QWORD *)v125;
            v126 = sub_1587BC0(v124, (__int64 *)&v205, v120, v121, v122, v123);
            sub_AE9DF0((unsigned __int8 **)(*v126 + 32LL * v225 + 8), 0, 2u);
          }
          goto LABEL_50;
        }
        v141 = (__int64)&v230[11 * (unsigned int)v231];
        v142 = sub_18052C0((__int64)v230, v141, (__int64)s2);
        v199 |= v141 != v142;
        if ( v199 )
        {
          sub_168B9F0((__int64)&ptr, v177, v176, 0x1CF7u, 0);
          sub_15F7200(&ptr);
        }
        else
        {
          ptr = v229;
          v228 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
          sub_A1FE50(&ptr, v38, v38 + 7);
          sub_1809EA0((__int64)v192, (unsigned __int64)&ptr);
          if ( ptr != v229 )
            free(ptr);
          v199 = v194;
        }
        goto LABEL_19;
      }
      if ( (unsigned int)(v39 - 27) > 1 )
      {
        v132 = j__strlen("arch=");
        if ( (unsigned __int64)v37 >= v132 && (!v132 || !memcmp(v38, "arch=", v132)) )
        {
          v143 = nullptr;
          v144 = *(_QWORD *)(v17[31] + 17448LL);
          v145 = *(__int64 (**)())(*(_QWORD *)v144 + 480LL);
          if ( (unsigned __int64)v37 > 4 )
          {
            v143 = v37 - 5;
            v37 = &byte_5;
          }
          if ( v145 != sub_A55EC0
            && !((unsigned __int8 (__fastcall *)(__int64, char *, char *))v145)(v144, &v37[(_QWORD)v38], v143) )
          {
            sub_168B9F0((__int64)&ptr, v177, v176, 0x1D5Au, 0);
            LODWORD(v205) = 0;
            v151 = sub_1815E70((__int64)&ptr, (int *)&v205);
            LODWORD(v212) = 1;
            v152 = sub_180D8D0(v151, (int *)&v212);
            v153 = s2[1];
            v154 = nullptr;
            if ( s2[1] > &byte_4 )
            {
              v154 = (char *)s2[1] - 5;
              v153 = &byte_5;
            }
            v221.m128i_i64[0] = (__int64)v154;
            v220 = (char *)s2[0] + (unsigned __int64)v153;
            v139 = sub_166BAF0(v152, (__int64)&v220);
            v140 = (int *)v218;
            *(_DWORD *)v218 = 1;
            goto LABEL_188;
          }
        }
        else
        {
          if ( v37 == (char *)j__strlen("default") && !memcmp(v38, "default", (size_t)v37) )
          {
            v159 = (__int64)&v230[11 * (unsigned int)v231];
            v160 = sub_18052C0((__int64)v230, v159, (__int64)s2);
            v199 |= v159 != v160;
            if ( !v199 )
            {
              v199 = v194;
LABEL_201:
              ptr = v229;
              v228 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
              sub_A1FE50(&ptr, (_BYTE *)s2[0], (_BYTE *)s2[0] + (unsigned __int64)s2[1]);
              sub_1809EA0((__int64)v192, (unsigned __int64)&ptr);
              v100 = ptr;
              if ( ptr != v229 )
                goto LABEL_151;
              goto LABEL_19;
            }
LABEL_200:
            sub_168B9F0((__int64)&ptr, v177, v176, 0x1CF7u, 0);
            sub_15F7200(&ptr);
            goto LABEL_201;
          }
          v133 = *(__int64 **)(v17[31] + 17448LL);
          v134 = *v133;
          v135 = *(__int64 (**)())(*v133 + 544);
          if ( v135 != sub_A55ED0 )
          {
            if ( !((unsigned __int8 (__fastcall *)(__int64 *, void *, void *))v135)(v133, s2[0], s2[1]) )
              goto LABEL_187;
            v133 = *(__int64 **)(v17[31] + 17448LL);
            v134 = *v133;
          }
          v136 = *(__int64 (**)())(v134 + 624);
          if ( v136 == sub_102BAB0 || !((__int64 (__fastcall *)(__int64 *, void **, __int64))v136)(v133, s2, 1) )
          {
LABEL_187:
            sub_168B9F0((__int64)&ptr, v177, v176, 0x1D5Au, 0);
            LODWORD(v212) = 0;
            v137 = sub_1815E70((__int64)&ptr, (int *)&v212);
            *(_DWORD *)v218 = 0;
            v138 = sub_180D8D0(v137, (int *)v218);
            v139 = sub_1682BA0(v138, (__int64)s2);
            v140 = (int *)&v220;
            LODWORD(v220) = 1;
LABEL_188:
            v66 = *(_BYTE *)(sub_18161E0(v139, v140) + 120);
            sub_15F7200(&ptr);
            goto LABEL_76;
          }
        }
        v146 = (__int64)&v230[11 * (unsigned int)v231];
        if ( v146 == sub_18052C0((__int64)v230, v146, (__int64)s2) )
          goto LABEL_201;
        goto LABEL_200;
      }
      if ( s2[1] <= s[1] && !memcmp(s[0], s2[0], (size_t)s2[1]) )
        break;
LABEL_114:
      v181 = 0;
      if ( !si128.m128i_i64[1] )
        goto LABEL_115;
    }
    ptr = &v228.m128i_u64[1];
    v228.m128i_i64[0] = 0x800000000LL;
    v53 = j__strlen(";");
    sub_22471D0(s, &ptr, ";", v53, 0xFFFFFFFFLL, 1);
    v54 = (char *)ptr;
    v55 = 16LL * v228.m128i_u32[0];
    v182 = (char *)ptr + v55;
    if ( ptr == (char *)ptr + v55 )
    {
      src = 0;
LABEL_107:
      v81 = (__int64)&v230[11 * (unsigned int)v231];
      if ( v81 != sub_18052C0((__int64)v230, v81, (__int64)s) || src )
      {
        sub_168B9F0((__int64)&v220, v177, v176, 0x1CF7u, 0);
        sub_15F7200(&v220);
      }
      v220 = &v222;
      v221 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
      sub_A1FE50(&v220, (_BYTE *)s[0], (_BYTE *)s[0] + (unsigned __int64)s[1]);
      sub_1809EA0((__int64)v192, (unsigned __int64)&v220);
      if ( v220 != &v222 )
        free(v220);
      if ( ptr != &v228.m128i_u64[1] )
        free(ptr);
      goto LABEL_114;
    }
    v188 = 0;
    v189.m128i_i8[0] = 0;
    src = 0;
    while ( 1 )
    {
      v56 = j__strlen("arch=+");
      v57 = *((_QWORD *)v54 + 1);
      if ( v56 <= v57 && (!v56 || !memcmp(*(const void **)v54, "arch=+", v56)) )
        break;
      v58 = j__strlen("default");
      if ( v58 > v57 || v58 && memcmp(*(const void **)v54, "default", v58) )
      {
        v59 = j__strlen("priority=");
        v60 = v59;
        if ( v59 > v57 )
          goto LABEL_72;
        v61 = *(char **)v54;
        if ( v59 )
        {
          v189.m128i_i64[0] = *(_QWORD *)v54;
          v202 = v59;
          v62 = memcmp((const void *)v189.m128i_i64[0], "priority=", v59);
          v61 = (char *)v189.m128i_i64[0];
          v60 = v202;
          if ( v62 )
            goto LABEL_72;
        }
        v80 = v57 - v60;
        *(_QWORD *)v54 = &v61[v60];
        *((_QWORD *)v54 + 1) = v80;
        if ( (unsigned __int8)sub_2247970(&v61[v60], v80, 0, &v220) || v220 != (void *)(unsigned int)v220 )
          goto LABEL_72;
        v54 += 16;
        v189.m128i_i8[0] = v194;
        if ( v182 == v54 )
        {
LABEL_105:
          if ( !v189.m128i_i8[0] || !v188 )
            goto LABEL_107;
LABEL_72:
          sub_168B9F0((__int64)&v220, v177, v176, 0x1D5Au, 0);
          LODWORD(v205) = 0;
          v63 = sub_1815E70((__int64)&v220, (int *)&v205);
          LODWORD(v212) = 0;
          v64 = sub_180D8D0(v63, (int *)&v212);
          v65 = sub_1682BA0(v64, (__int64)s);
          *(_DWORD *)v218 = 1;
          v66 = *(_BYTE *)(sub_18161E0(v65, (int *)v218) + 120);
          sub_15F7200(&v220);
          goto LABEL_73;
        }
      }
      else
      {
        v188 = v194;
        src = v199;
        v199 = v194;
LABEL_64:
        v54 += 16;
        if ( v182 == v54 )
          goto LABEL_105;
      }
    }
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v17[31] + 17448LL) + 496LL))(
      v218,
      *(_QWORD *)(v17[31] + 17448LL),
      *(_QWORD *)v54,
      *((_QWORD *)v54 + 1));
    v88 = *(_QWORD **)&v218[8];
    if ( *(_QWORD *)&v218[8] != *(_QWORD *)v218
      && v88 == sub_18041E0(*(_QWORD **)v218, *(__int64 *)&v218[8], (__int64)v17) )
    {
      v89 = *(void ***)&v218[8];
      v90 = *(void ***)v218;
      if ( *(_QWORD *)&v218[8] != *(_QWORD *)v218 )
      {
        do
        {
          while ( *v90 != v90 + 2 )
          {
            operator delete(*v90);
            v90 += 4;
            if ( v89 == v90 )
              goto LABEL_124;
          }
          v90 += 4;
        }
        while ( v89 != v90 );
LABEL_124:
        v90 = *(void ***)v218;
      }
      if ( v90 )
        operator delete(v90);
      goto LABEL_64;
    }
    sub_168B9F0((__int64)&v220, v177, v176, 0x1D5Au, 0);
    v204 = 0;
    v161 = sub_1815E70((__int64)&v220, &v204);
    LODWORD(v205) = 0;
    v162 = sub_180D8D0(v161, (int *)&v205);
    v163 = sub_1682BA0(v162, (__int64)s);
    LODWORD(v212) = 1;
    v66 = *(_BYTE *)(sub_18161E0(v163, (int *)&v212) + 120);
    sub_15F7200(&v220);
    sub_9B4A30((void ***)v218);
LABEL_73:
    if ( ptr != &v228.m128i_u64[1] )
      free(ptr);
    v181 = 0;
LABEL_76:
    if ( v66 )
      goto LABEL_94;
LABEL_77:
    ++v178;
  }
  while ( v198 != (_DWORD)v178 );
  v67 = v230;
  v8 = v17;
  v68 = &v230[11 * (unsigned int)v231];
  if ( v230 != v68 )
  {
    v69 = (unsigned int)v216;
    v70 = v201 + 2;
    do
    {
      v71 = v67[1];
      v72 = *v67;
      if ( v69 + 1 > (unsigned __int64)HIDWORD(v216) )
      {
        sub_2237220(v201, v70, v69 + 1, 16);
        v69 = (unsigned int)v216;
      }
      v73 = (char *)v215 + 16 * v69;
      v67 += 11;
      *v73 = v72;
      v73[1] = v71;
      v69 = (unsigned int)(v216 + 1);
      LODWORD(v216) = v216 + 1;
    }
    while ( v68 != v67 );
  }
  if ( v181 && v191[3].m128i_i16[4] > 1u )
  {
    sub_168B9F0((__int64)&ptr, v177, v191[1].m128i_u32[2], 0x1CF8u, 0);
    sub_15F7200(&ptr);
  }
  if ( v199 )
  {
    if ( (v193[28] & 0x7Fu) - 35 <= 3 )
      goto LABEL_88;
LABEL_255:
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v8[31] + 17448LL) + 248LL) - 3) > 2 )
    {
LABEL_249:
      v165 = (__int64)v193;
      v166 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v193 + 32LL))(v193);
      *(_BYTE *)(v166 + 84) |= 0x80u;
      v167 = v215;
      v168 = v216;
      v169 = (__m128i *)sub_1806F50((__int64 *)(v8[31] + 2352LL), 56, 3u);
      sub_B386C0(v169, (__int64 *)v8[31], v191, (__int64)v167, v168);
      sub_B8CC60(v165, (__int64)v169, v170, v171, v172, v173);
      v174 = (__int64)v230;
      v79 = &v230[11 * (unsigned int)v231];
      if ( v230 != v79 )
      {
        while ( 1 )
        {
          v79 -= 11;
          v175 = *v79;
          if ( *v79 != v79 + 3 )
            break;
LABEL_253:
          if ( (void **)v174 == v79 )
            goto LABEL_97;
        }
        while ( 1 )
        {
          free(v175);
          if ( (void **)v174 == v79 )
            break;
          v79 -= 11;
          v175 = *v79;
          if ( *v79 == v79 + 3 )
            goto LABEL_253;
        }
LABEL_97:
        v79 = v230;
      }
      goto LABEL_98;
    }
LABEL_248:
    if ( v200 )
      goto LABEL_249;
    goto LABEL_94;
  }
LABEL_246:
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v8[31] + 17448LL) + 248LL) - 3) > 2 )
  {
    sub_168B9F0((__int64)&ptr, v177, v191[1].m128i_u32[2], 0x13D7u, 0);
    sub_15F7200(&ptr);
  }
  else
  {
    if ( (v193[28] & 0x7Fu) - 35 > 3 )
      goto LABEL_248;
LABEL_88:
    v74 = *(_QWORD *)(sub_B8C1B0((__int64)(v193 + 72)) + 16);
    if ( (v74 & 4) != 0 )
      v75 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v75 = v74 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v75 )
      BUG();
    v76 = *(_QWORD *)(v75 + 64);
    if ( !v76 || (*(_BYTE *)(v76 + 10) & 0x20) == 0 )
      goto LABEL_255;
    sub_168B9F0((__int64)&ptr, v177, *((_DWORD *)v193 + 6), 0x1087u, 0);
    *(_DWORD *)v218 = 4;
    v77 = sub_16CF160((__int64)&ptr, (unsigned int *)v218);
    LODWORD(v220) = 9;
    sub_1587D10(v77, (int *)&v220);
    sub_15F7200(&ptr);
  }
LABEL_94:
  v78 = (__int64)v230;
  v79 = &v230[11 * (unsigned int)v231];
  if ( v230 != v79 )
  {
    do
    {
      while ( 1 )
      {
        v79 -= 11;
        if ( *v79 == v79 + 3 )
          break;
        free(*v79);
        if ( (void **)v78 == v79 )
          goto LABEL_97;
      }
    }
    while ( (void **)v78 != v79 );
    goto LABEL_97;
  }
LABEL_98:
  if ( v79 != (void **)(v192 + 2) )
    free(v79);
  if ( v215 != v201 + 2 )
    free(v215);
}
