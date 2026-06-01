unsigned __int64 __fastcall sub_1B8D2B0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 *v8; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 *v13; // rdx
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rsi
  _BYTE *v18; // rcx
  void **v19; // r12
  void **v20; // rbp
  _QWORD *v21; // r12
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  unsigned __int64 v32; // rax
  _BYTE *v33; // rax
  int v34; // edx
  unsigned __int64 *v35; // rbx
  __int64 v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // ebp
  unsigned int v46; // eax
  __int64 v47; // rdx
  _BYTE *v48; // rcx
  unsigned __int64 *v49; // r13
  char *v50; // r15
  __int64 *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rbp
  __int64 v55; // rsi
  _BYTE *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned int v59; // eax
  __int64 *v60; // rax
  __int64 *v61; // rsi
  __int64 v62; // rdx
  __int64 *v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbp
  __int64 v68; // r8
  __int64 v69; // r9
  void *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // r12
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rbp
  __int64 v76; // rax
  char *v77; // rbx
  unsigned __int64 v78; // r12
  __int64 v79; // r15
  void *v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r13d
  size_t v86; // rax
  __m128 si128; // xmm0
  size_t v88; // r10
  size_t v89; // r9
  unsigned __int64 v90; // rax
  size_t v91; // r8
  size_t v92; // r11
  _DWORD *v93; // rax
  size_t v94; // r8
  __int64 v95; // r12
  __int64 v96; // rdi
  unsigned __int64 v97; // rax
  int v98; // r13d
  int v99; // r15d
  __int64 v100; // rdx
  unsigned __int64 v101; // rcx
  __int64 v102; // rbp
  __int64 v103; // r8
  __int16 v104; // ax
  __int64 v105; // r15
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  unsigned int v109; // eax
  unsigned __int64 v110; // r15
  __int64 v111; // rsi
  _QWORD *v112; // r12
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  unsigned int v116; // eax
  unsigned __int64 v117; // r12
  unsigned __int64 *v118; // rsi
  __int64 v119; // rdx
  unsigned __int64 v120; // r13
  __int64 v121; // rsi
  unsigned int v122; // eax
  void *v123; // rsi
  int v124; // ebx
  int v126; // [rsp+Ch] [rbp-D2Ch]
  __int64 v127; // [rsp+10h] [rbp-D28h]
  int v128; // [rsp+18h] [rbp-D20h]
  int v129; // [rsp+18h] [rbp-D20h]
  _QWORD *v130; // [rsp+20h] [rbp-D18h]
  unsigned __int64 v131; // [rsp+28h] [rbp-D10h]
  __int64 v134; // [rsp+38h] [rbp-D00h]
  __int64 v135; // [rsp+40h] [rbp-CF8h]
  __int64 v136; // [rsp+48h] [rbp-CF0h]
  unsigned int v137; // [rsp+48h] [rbp-CF0h]
  __int64 v138; // [rsp+48h] [rbp-CF0h]
  unsigned int v139; // [rsp+50h] [rbp-CE8h]
  __int64 v140; // [rsp+68h] [rbp-CD0h]
  unsigned int v141; // [rsp+68h] [rbp-CD0h]
  unsigned __int64 v142; // [rsp+68h] [rbp-CD0h]
  __int64 *v143; // [rsp+70h] [rbp-CC8h]
  __int64 v144; // [rsp+78h] [rbp-CC0h]
  __int64 v145; // [rsp+78h] [rbp-CC0h]
  __int64 v146; // [rsp+78h] [rbp-CC0h]
  int v147; // [rsp+78h] [rbp-CC0h]
  __int64 v148; // [rsp+A8h] [rbp-C90h]
  unsigned int v149; // [rsp+A8h] [rbp-C90h]
  const void *src; // [rsp+B0h] [rbp-C88h]
  _QWORD *srca; // [rsp+B0h] [rbp-C88h]
  void *srcb; // [rsp+B0h] [rbp-C88h]
  const void *v153; // [rsp+B8h] [rbp-C80h]
  size_t v154; // [rsp+C0h] [rbp-C78h]
  __int64 *v155; // [rsp+C8h] [rbp-C70h]
  __int64 v156; // [rsp+D0h] [rbp-C68h]
  size_t v157; // [rsp+D8h] [rbp-C60h]
  size_t v158; // [rsp+D8h] [rbp-C60h]
  size_t v159; // [rsp+E0h] [rbp-C58h]
  size_t v160; // [rsp+E8h] [rbp-C50h]
  unsigned __int64 v161; // [rsp+F0h] [rbp-C48h]
  size_t v162; // [rsp+F8h] [rbp-C40h]
  __int64 v163; // [rsp+108h] [rbp-C30h] BYREF
  void *v164; // [rsp+110h] [rbp-C28h] BYREF
  __int64 v165; // [rsp+118h] [rbp-C20h]
  _QWORD v166[2]; // [rsp+120h] [rbp-C18h] BYREF
  __int64 v167; // [rsp+130h] [rbp-C08h] BYREF
  __int64 v168; // [rsp+138h] [rbp-C00h]
  __int64 v169; // [rsp+140h] [rbp-BF8h]
  unsigned int v170; // [rsp+148h] [rbp-BF0h]
  void *v171; // [rsp+150h] [rbp-BE8h] BYREF
  size_t n; // [rsp+158h] [rbp-BE0h]
  _BYTE v173[16]; // [rsp+160h] [rbp-BD8h] BYREF
  void *v174; // [rsp+170h] [rbp-BC8h] BYREF
  size_t v175; // [rsp+178h] [rbp-BC0h]
  __int64 v176; // [rsp+180h] [rbp-BB8h] BYREF
  int v177; // [rsp+188h] [rbp-BB0h]
  void **v178; // [rsp+190h] [rbp-BA8h] BYREF
  __int64 v179; // [rsp+198h] [rbp-BA0h]
  _BYTE v180[32]; // [rsp+1A0h] [rbp-B98h] BYREF
  void *v181; // [rsp+1C0h] [rbp-B78h] BYREF
  size_t v182; // [rsp+1C8h] [rbp-B70h]
  _QWORD v183[4]; // [rsp+1D0h] [rbp-B68h] BYREF
  void *v184; // [rsp+1F0h] [rbp-B48h] BYREF
  __int64 v185; // [rsp+1F8h] [rbp-B40h]
  _BYTE v186[48]; // [rsp+200h] [rbp-B38h] BYREF
  void *v187; // [rsp+230h] [rbp-B08h] BYREF
  __int64 v188; // [rsp+238h] [rbp-B00h]
  _BYTE v189[48]; // [rsp+240h] [rbp-AF8h] BYREF
  void *s; // [rsp+270h] [rbp-AC8h] BYREF
  __int64 v191; // [rsp+278h] [rbp-AC0h]
  _BYTE v192[48]; // [rsp+280h] [rbp-AB8h] BYREF
  int v193; // [rsp+2B0h] [rbp-A88h]
  void *v194; // [rsp+2C0h] [rbp-A78h] BYREF
  __m128 v195; // [rsp+2C8h] [rbp-A70h]
  __int64 v196; // [rsp+2D8h] [rbp-A60h] BYREF
  unsigned __int8 *v197; // [rsp+2E0h] [rbp-A58h] BYREF
  char v198; // [rsp+338h] [rbp-A00h]
  unsigned int v199; // [rsp+340h] [rbp-9F8h]
  char v200; // [rsp+344h] [rbp-9F4h]
  void *ptr; // [rsp+350h] [rbp-9E8h] BYREF
  __int64 v202; // [rsp+358h] [rbp-9E0h]
  _BYTE v203[1232]; // [rsp+360h] [rbp-9D8h] BYREF
  __int64 v204; // [rsp+830h] [rbp-508h] BYREF

  v8 = a2;
  v11 = 1;
  v130 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !a4 )
    return v11;
  v12 = *(_QWORD *)(*a1 + 544);
  v134 = *(_QWORD *)(*a1 + 608);
  v13 = &a2[a3];
  if ( a2 == v13 )
    goto LABEL_7;
  v14 = *a2;
  if ( *(_DWORD *)(*a2 + 8) != 80 )
  {
    v15 = a2 + 1;
    while ( v13 != v15 )
    {
      v14 = *v15++;
      if ( *(_DWORD *)(v14 + 8) == 80 )
        goto LABEL_43;
    }
LABEL_7:
    v128 = 2;
    v14 = 0;
    v16 = (__int64 *)v203;
    v17 = &v204;
    HIDWORD(v202) = 4;
    ptr = v203;
    v126 = 2;
    v131 = 2;
    do
    {
LABEL_8:
      memset(v16, 0, 0x268u);
      *((_DWORD *)v16 + 41) = 4;
      v16[19] = (__int64)(v16 + 21);
      v16[25] = (__int64)(v16 + 27);
      v16[31] = (__int64)(v16 + 33);
      v16[37] = (__int64)(v16 + 39);
      v16[43] = (__int64)(v16 + 45);
      v16[49] = (__int64)(v16 + 51);
      v16[55] = (__int64)(v16 + 57);
      v18 = v16 + 63;
      v16 += 77;
      *((_DWORD *)v16 - 101) = 4;
      *((_DWORD *)v16 - 89) = 4;
      *((_DWORD *)v16 - 77) = 4;
      *((_DWORD *)v16 - 65) = 4;
      *((_DWORD *)v16 - 53) = 4;
      *((_DWORD *)v16 - 41) = 4;
      *(v16 - 16) = (__int64)v18;
      *((_DWORD *)v16 - 29) = 4;
    }
    while ( v16 != v17 );
LABEL_9:
    LODWORD(v202) = v126;
    goto LABEL_10;
  }
LABEL_43:
  v32 = *(unsigned int *)(v14 + 16);
  v202 = 0x400000000LL;
  v126 = v32;
  v131 = v32;
  ptr = v203;
  if ( v32 )
  {
    if ( v32 <= 4 )
    {
      v16 = (__int64 *)v203;
      v33 = v203;
    }
    else
    {
      v127 = sub_2237400(&ptr, v203, v32, 616, &v194);
      sub_1B50100((__int64)&ptr, v127);
      v33 = (_BYTE *)v127;
      v34 = (int)v194;
      if ( ptr != v203 )
      {
        v129 = (int)v194;
        free(ptr);
        v34 = v129;
        v33 = (_BYTE *)v127;
      }
      HIDWORD(v202) = v34;
      ptr = v33;
      v16 = (__int64 *)&v33[616 * (unsigned int)v202];
    }
    v17 = (__int64 *)&v33[616 * v131];
    v128 = v126;
    if ( v17 == v16 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v126 = 0;
  v128 = 0;
LABEL_10:
  v178 = (void **)v180;
  v163 = 0;
  v179 = 0x200000000LL;
  if ( (unsigned __int8)sub_1AFD830((__int64)a1, 39, a4, v128, (__int64)&ptr, (__int64)&v163, (__int64)&v178) )
  {
    if ( (unsigned __int8)sub_B8E180(v12) )
    {
      v11 = sub_EF6A40((__int64)v130, a5, a6, v8, a3, v126, a4, 0);
      goto LABEL_12;
    }
    if ( !v14 )
    {
      v60 = v166;
      v165 = 0x200000002LL;
      v61 = &v167;
      v164 = v166;
      v166[0] = 1;
      v166[1] = 0;
      if ( v131 <= 1 )
        goto LABEL_107;
      goto LABEL_103;
    }
    v35 = (unsigned __int64 *)(v14 + 24);
    v36 = 8LL * *(unsigned int *)(v14 + 16);
    v37 = (_QWORD *)(v14 + 24 + v36);
    v38 = v36 >> 3;
    v39 = v36 >> 5;
    if ( v39 )
    {
      if ( !*(_QWORD *)(v14 + 24) )
      {
        v42 = (_QWORD *)(v14 + 24);
        goto LABEL_88;
      }
      if ( !*(_QWORD *)(v14 + 32) )
      {
        v42 = (_QWORD *)(v14 + 32);
        goto LABEL_88;
      }
      if ( !*(_QWORD *)(v14 + 40) )
      {
        v42 = (_QWORD *)(v14 + 40);
        goto LABEL_88;
      }
      v40 = (_QWORD *)(v14 + 24);
      v41 = v14 + 32 * v39 + 24;
      v42 = (_QWORD *)(v14 + 48);
      if ( !*(_QWORD *)(v14 + 48) )
      {
LABEL_88:
        if ( v37 != v42 )
          goto LABEL_11;
LABEL_69:
        v43 = *(unsigned int *)(v14 + 16);
        v164 = v166;
        v44 = v43;
        v45 = (unsigned int)(v43 + 63) >> 6;
        v165 = 0x200000000LL;
        s = v192;
        v191 = 0x600000000LL;
        if ( v45 > 6 )
        {
          v139 = v43;
          v136 = v43;
          sub_2237220(&s, v192, v45, 8);
          v56 = memset(s, 0, 8LL * v45);
          v43 = v136;
          v44 = v139;
          LODWORD(v191) = v45;
          v48 = v56;
        }
        else
        {
          if ( v45 )
          {
            v46 = 0;
            do
            {
              v47 = v46;
              v46 += 8;
              *(_QWORD *)&v192[v47] = 0;
            }
            while ( v46 < 8 * v45 );
          }
          LODWORD(v191) = (unsigned int)(v43 + 63) >> 6;
          v48 = v192;
        }
        v193 = v44;
        if ( &v35[v43] != v35 )
        {
          v49 = &v35[v43];
          v143 = v8;
          while ( 1 )
          {
            v54 = *v35;
            v55 = *v35;
            sub_C3EB00((__int64)&v187, *v35, (__int64)v130, nullptr, v43, v44);
            if ( v189[0] )
            {
              v50 = (char *)v187;
              if ( (unsigned int)v188 > 0x40 )
                v50 = *(char **)v187;
              v51 = (__int64 *)((char *)s + 8 * ((unsigned int)((_DWORD)v50 - 1) >> 6));
              v52 = *v51;
              if ( !_bittest64(&v52, ((_DWORD)v50 - 1) & 0x3F) )
              {
                v53 = (unsigned int)v165;
                *v51 = v52 | (1LL << (((_BYTE)v50 - 1) & 0x3F));
                if ( v53 + 1 > (unsigned __int64)HIDWORD(v165) )
                {
                  sub_2237220(&v164, v166, v53 + 1, 8);
                  v53 = (unsigned int)v165;
                }
                *((_QWORD *)v164 + v53) = v50 - 1;
                LODWORD(v165) = v165 + 1;
                sub_98E4B0((__int64)&v187);
                goto LABEL_82;
              }
              v137 = sub_EEC140(v54);
              LODWORD(v184) = sub_EEB7E0(v54, v55, a7);
              HIDWORD(v184) = v137;
              v59 = sub_C00A40(v54, v55, v137, v57, v58);
              sub_168B9F0((__int64)&v194, a1, v59, 0x119Eu, 0);
              if ( v198 )
              {
                sub_AE9DF0(&v197, (__int64)v50, 3u);
              }
              else if ( v200 )
              {
                v67 = sub_168B9E0(&v194);
                v70 = (void *)v195.m128_u64[1];
                if ( v195.m128_u64[1] )
                  v70 = (void *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v195.m128_u64[1] + 32LL))(v195.m128_u64[1]);
                v181 = v70;
                v71 = sub_1587BC0(v67, (__int64 *)&v181, v65, v66, v68, v69);
                sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v199 + 8), (__int64)v50, 3u);
              }
              sub_15884C0((__int64)&v194, (__int64 *)&v184);
              sub_15F7200(&v194);
            }
            sub_98E4B0((__int64)&v187);
LABEL_82:
            if ( v49 == ++v35 )
            {
              v8 = v143;
              v48 = s;
              break;
            }
          }
        }
        if ( (unsigned int)v165 != v131 )
        {
          v11 = 1;
          if ( v48 != v192 )
            free(v48);
          goto LABEL_99;
        }
        if ( v48 != v192 )
          free(v48);
        if ( v131 <= 1 || (v60 = (__int64 *)v164, v61 = (__int64 *)((char *)v164 + 8 * (unsigned int)v165), v164 == v61) )
        {
LABEL_107:
          v11 = sub_EF6A40((__int64)v130, a5, a6, v8, a3, v126, a4, a4);
LABEL_99:
          if ( v164 != v166 )
            free(v164);
          goto LABEL_12;
        }
LABEL_103:
        v62 = *v60;
        if ( *v60 )
        {
LABEL_118:
          v184 = v186;
          v185 = 0x600000000LL;
          sub_1AF7D50((__int64)&v184, v131, 0);
          sub_1AE75D0(a4, (__int64)v184, (unsigned int)v185);
          v188 = 0x600000000LL;
          v187 = v189;
          if ( v128 )
          {
            v138 = a4;
            v72 = 0;
            do
            {
              v73 = (int)v72++;
              sub_1AF60D0(
                v130,
                (__int64)ptr + 616 * v73,
                *((_QWORD *)v184 + v73),
                v178[2 * v73],
                LODWORD(v178[2 * v73 + 1]),
                (__int64)&v187);
            }
            while ( v128 != v72 );
            a4 = v138;
          }
          s = v192;
          v191 = 0x600000000LL;
          sub_1AE86A0((__int64)&s, v131);
          v74 = *a1;
          v168 = 0;
          v169 = 0;
          v167 = v74;
          v170 = 0;
          v140 = v163;
          if ( v128 )
          {
            v135 = v128;
            v155 = v8;
            v156 = a4;
            while ( 1 )
            {
              v75 = (int)v135 - 1;
              v76 = *((_QWORD *)v164 + v75);
              v77 = (char *)ptr + 616 * v76;
              v78 = *(_QWORD *)v77;
              v148 = *((_QWORD *)v184 + v76);
              v79 = **((_QWORD **)v77 + 19);
              v144 = *(_QWORD *)(*(_QWORD *)v77 + 8LL);
              v80 = *(void **)(*(_QWORD *)(v79 + 16) + 40LL);
              v81 = *(_QWORD *)(v79 + 24);
              v195.m128_i32[0] = *(_DWORD *)(v79 + 4);
              v194 = v80;
              v195.m128_u64[1] = v81;
              sub_B87650((__int64)&v171, (__int64 *)&v194);
              v85 = sub_C00A40(v78, (__int64)&v194, v82, v83, v84);
              v86 = j__strlen(".permuted_");
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D70);
              v195 = si128;
              v194 = &v196;
              sub_A1FE50(&v194, ".permuted_", &aPermuted[v86]);
              sub_E3A880(&v174, v75, 0);
              v88 = v175;
              v183[1] = 4;
              v89 = n;
              v153 = v174;
              v181 = v174;
              v183[0] = ".iv.";
              v182 = v175;
              src = v171;
              v183[2] = v171;
              v90 = v195.m128_u64[0];
              v183[3] = n;
              v91 = v175 + v195.m128_u64[0];
              v92 = n + v175 + v195.m128_u64[0] + 4;
              if ( v195.m128_u64[0] != v92 )
              {
                if ( v195.m128_u64[0] <= v92 && v92 > v195.m128_u64[1] )
                {
                  v162 = v175 + v195.m128_u64[0];
                  v161 = v195.m128_u64[0];
                  v160 = v175;
                  v159 = n;
                  v158 = n + v175 + v195.m128_u64[0] + 4;
                  sub_2236E10(&v194, &v196, v158, 1);
                  v91 = v162;
                  v90 = v161;
                  v88 = v160;
                  v89 = v159;
                  v92 = v158;
                }
                v195.m128_u64[0] = v92;
              }
              if ( v88 )
              {
                v157 = v91;
                v154 = v89;
                memmove((char *)v194 + v90, v153, v88);
                v91 = v157;
                v89 = v154;
              }
              v93 = (char *)v194 + v91;
              v94 = v91 + 4;
              *v93 = 779512110;
              if ( v89 )
                memmove((char *)v194 + v94, src, v89);
              if ( v174 != &v176 )
                operator delete(v174);
              v95 = *(_QWORD *)(v78 + 16);
              *(_QWORD *)(v95 + 40) = sub_6F3470(*(_QWORD *)(*a1 + 240) + 552LL, v194, v195.m128_u64[0]);
              *((_QWORD *)s + v75) = v95;
              v96 = *a1;
              v177 = v85;
              v176 = v144;
              v97 = sub_18C1B30(v96, v85, 0);
              if ( v97 <= 1 )
                break;
              sub_17ED4C0(*a1, v95, v97 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)si128.m128_u64, *(double *)a8.m128_u64);
              v98 = sub_16C50A0(v79);
              v99 = sub_BF7FE0(v79);
              v102 = sub_EEE9A0(24, v130, 8u);
              v104 = *(_WORD *)v102 & 0xFE00;
              LOBYTE(v104) = -11;
              *(_WORD *)v102 = v104;
              if ( unk_2CD7484 )
                sub_EE9B50(245);
              *(_QWORD *)(v102 + 8) = v95;
              *(_DWORD *)(v102 + 16) = v98;
              *(_DWORD *)(v102 + 20) = v99;
              if ( v102 == 1 )
                break;
              v105 = *a1;
              srca = (_QWORD *)(sub_1B7CAD0(&v167, *((unsigned __int16 **)v77 + 2), si128, a8, v100, v101, v103)
                              & 0xFFFFFFFFFFFFFFFELL);
              v145 = sub_1AE9760(*a1, v95, v176, v177);
              v109 = sub_C00A40(*((_QWORD *)v77 + 5), v95, v106, v107, v108);
              v110 = sub_1929BB0(v105, v134, v109, 0xAu, v145, srca, si128, a8, 0);
              if ( v110 <= 1 )
                break;
              v111 = v95;
              v146 = *a1;
              v112 = (_QWORD *)sub_1AE9760(*a1, v95, v176, v177);
              v116 = sub_C00A40(*((_QWORD *)v77 + 7), v111, v113, v114, v115);
              v117 = sub_1925670(v146, v134, v116, 2, v112, 0, si128, a8);
              if ( v117 <= 1 )
                break;
              v118 = *((unsigned __int64 **)v77 + 37);
              v119 = (__int64)&v118[*((unsigned int *)v77 + 76)];
              v181 = v183;
              v182 = 0x400000000LL;
              sub_1AF67E0((__int64)&v181, v118, v119);
              if ( (*(_WORD *)v148 & 0x1FF) == 0xFC )
                sub_183F100((__int64)&v181, *(_QWORD *)(v148 + 56));
              v120 = v140;
              v121 = v140;
              sub_183F100((__int64)&v181, v140);
              v141 = sub_EEC140(v140);
              v122 = sub_EEB7E0(v120, v121, *(double *)si128.m128_u64);
              v123 = v181;
              srcb = (void *)sub_EEF560(v130, v181, (unsigned int)v182, 0, v122, v141);
              v142 = *((_QWORD *)v77 + 6);
              v149 = sub_EEB7E0(v142, (__int64)v123, *(double *)si128.m128_u64);
              v147 = sub_EEB7E0(v142, (__int64)v123, *(double *)si128.m128_u64);
              v124 = sub_EEC140(*((_QWORD *)v77 + 7));
              v140 = sub_EEE9A0(56, v130, 8u);
              sub_EEF330(
                v140,
                v130,
                v102 & 0xFFFFFFFFFFFFFFFELL,
                v110 & 0xFFFFFFFFFFFFFFFELL,
                0,
                v117 & 0xFFFFFFFFFFFFFFFELL,
                (__int64)srcb,
                v149,
                v147,
                v124);
              if ( v181 != v183 )
                free(v181);
              if ( v194 != &v196 )
                free(v194);
              if ( v171 != v173 )
                operator delete(v171);
              if ( v135 == 1 )
              {
                v8 = v155;
                a4 = v156;
                goto LABEL_170;
              }
              --v135;
            }
            v11 = 1;
            if ( v194 != &v196 )
              free(v194);
            if ( v171 != v173 )
              operator delete(v171);
          }
          else
          {
LABEL_170:
            sub_1AEC4E0(v130, (__int64 *)v187, (unsigned int)v188);
            v11 = sub_EF6A40((__int64)v130, a5, a6, v8, a3, v126, a4, v140);
          }
          operator delete(v168, 16LL * v170, 8);
          if ( s != v192 )
            free(s);
          if ( v187 != v189 )
            free(v187);
          if ( v184 != v186 )
            free(v184);
          goto LABEL_99;
        }
        v63 = v60 + 1;
        while ( 1 )
        {
          v64 = v63;
          if ( v61 == v63 )
            goto LABEL_107;
          ++v62;
          ++v63;
          if ( *v64 != v62 )
            goto LABEL_118;
        }
      }
      while ( 1 )
      {
        v42 = v40 + 4;
        if ( (_QWORD *)v41 == v40 + 4 )
          break;
        if ( !v40[4] )
          goto LABEL_88;
        if ( !v40[5] )
        {
          v42 = v40 + 5;
          goto LABEL_88;
        }
        if ( !v40[6] )
        {
          v42 = v40 + 6;
          goto LABEL_88;
        }
        if ( !v40[7] )
        {
          v42 = v40 + 7;
          goto LABEL_88;
        }
        v40 += 4;
      }
      v38 = v37 - v42;
    }
    else
    {
      v42 = (_QWORD *)(v14 + 24);
    }
    if ( v38 != 2 )
    {
      if ( v38 != 3 )
      {
        if ( v38 != 1 )
          goto LABEL_69;
        goto LABEL_68;
      }
      if ( !*v42 )
        goto LABEL_88;
      ++v42;
    }
    if ( !*v42 )
      goto LABEL_88;
    ++v42;
LABEL_68:
    if ( !*v42 )
      goto LABEL_88;
    goto LABEL_69;
  }
LABEL_11:
  v11 = 1;
LABEL_12:
  v19 = v178;
  v20 = &v178[2 * (unsigned int)v179];
  if ( v178 != v20 )
  {
    do
    {
      while ( 1 )
      {
        v20 -= 2;
        if ( *v20 == v20 + 2 )
          break;
        free(*v20);
        if ( v19 == v20 )
          goto LABEL_15;
      }
    }
    while ( v19 != v20 );
LABEL_15:
    v20 = v178;
  }
  if ( v20 != (void **)v180 )
    free(v20);
  v21 = ptr;
  v22 = (char *)ptr + 616 * (unsigned int)v202;
  if ( ptr != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 77;
        v23 = (_QWORD *)v22[61];
        if ( v23 != v22 + 63 )
          free(v23);
        v24 = (_QWORD *)v22[55];
        if ( v24 != v22 + 57 )
          free(v24);
        v25 = (_QWORD *)v22[49];
        if ( v25 != v22 + 51 )
          free(v25);
        v26 = (_QWORD *)v22[43];
        if ( v26 != v22 + 45 )
          free(v26);
        v27 = (_QWORD *)v22[37];
        if ( v27 != v22 + 39 )
          free(v27);
        v28 = (_QWORD *)v22[31];
        if ( v28 != v22 + 33 )
          free(v28);
        v29 = (_QWORD *)v22[25];
        if ( v29 != v22 + 27 )
          free(v29);
        v30 = (_QWORD *)v22[19];
        if ( v30 == v22 + 21 )
          break;
        free(v30);
        if ( v21 == v22 )
          goto LABEL_35;
      }
    }
    while ( v21 != v22 );
LABEL_35:
    v22 = ptr;
  }
  if ( v22 != (_QWORD *)v203 )
    free(v22);
  return v11;
}
