_QWORD *__fastcall sub_1FD6990(
        _QWORD *a1,
        _QWORD *(__fastcall *a2)(_QWORD *a1, _QWORD **a2, __int64 a3),
        _QWORD *a3,
        void *a4,
        size_t a5)
{
  size_t v7; // rax
  char *p_s; // r13
  __int64 *v9; // r14
  char *v10; // r15
  __int64 v11; // rax
  char *v12; // r12
  char *v13; // rdi
  __int64 v14; // rax
  __m128 v16; // xmm0
  char *v17; // rax
  __m128i v18; // xmm3
  char *v19; // r12
  bool v20; // zf
  size_t v21; // rdx
  void *v22; // rsi
  int v23; // ebx
  __int64 v24; // rsi
  char **v25; // r15
  _DWORD *v26; // rax
  __int64 v27; // rdx
  std::_V2 *v28; // rdi
  __int64 v29; // rsi
  void *v30; // rax
  void *v31; // rbx
  int v32; // eax
  char *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  char *v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  _QWORD *v41; // rdi
  __int64 v42; // r13
  _QWORD **v43; // r12
  _QWORD **v44; // rbx
  __int64 *v45; // rbp
  __int64 *v46; // rbx
  __int64 *v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 (__fastcall *v50)(__int64, __int64, __int64, __int64, __int64, __int64, void *, _QWORD, _QWORD, _QWORD); // rbp
  __int64 v51; // rdi
  unsigned __int8 *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rdx
  void *v58; // rbp
  __int64 v59; // rax
  char v60; // dl
  __int64 *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  void *v65; // rax
  char **v66; // rbx
  char **v67; // rbp
  __int64 v68; // rsi
  const __m128i *v69; // rdi
  __int64 v70; // rax
  void **v71; // rdx
  const __m128i *v72; // rax
  const __m128i *v73; // rcx
  __m128i v74; // xmm4
  void **v75; // rdx
  __m128i *v76; // rax
  char v77; // dl
  unsigned int *v78; // rsi
  __int64 v79; // r13
  const __m128i *v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // r10
  const __m128i *v83; // rax
  size_t v84; // rbp
  void *v85; // rcx
  __int64 v86; // rdx
  __m128i v87; // xmm7
  __m128i *v88; // rcx
  size_t v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // r13
  std::_V2 *v92; // rdi
  void *v93; // rbp
  __m128i v94; // xmm0
  __m128i v95; // xmm7
  __int64 v96; // rax
  __int64 v97; // rdx
  __m128i v98; // xmm6
  int *v99; // rdx
  unsigned __int64 v100; // rdi
  __int64 v101; // rcx
  unsigned __int64 v102; // rsi
  unsigned __int64 v103; // r8
  __int64 v104; // rcx
  int *v105; // rcx
  void *v106; // rax
  size_t v107; // rdx
  void *v108; // rax
  _BOOL8 v109; // rdi
  unsigned __int64 v110; // rdi
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rax
  char v114; // dl
  int v115; // ebp
  __int64 v116; // rax
  char v117; // dl
  __int64 v118; // rcx
  __int64 *v119; // rdi
  __int64 v120; // rax
  void *v121; // rax
  __int64 *v122; // r13
  size_t v123; // r10
  char *v124; // r10
  _QWORD *v125; // rax
  size_t v126; // rax
  size_t v127; // rcx
  __int64 v128; // rax
  char *v129; // rbp
  int v130; // edx
  __m128 *v131; // rax
  __int32 v132; // edx
  std::_V2 *v133; // rcx
  __m128 v134; // xmm0
  __int64 v135; // rax
  unsigned int v136; // eax
  unsigned int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  unsigned int v141; // r14d
  __int64 *v142; // r15
  __int64 *v143; // rax
  __int64 v144; // rbx
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  int v148; // edx
  unsigned int v149; // r14d
  size_t v150; // rdx
  const void *v151; // rbp
  size_t v152; // rbx
  unsigned int v153; // eax
  unsigned int v154; // eax
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  unsigned int v158; // r14d
  __int64 *v159; // r15
  __int64 v160; // rax
  _QWORD *v161; // rcx
  unsigned int v162; // eax
  __int64 v163; // rax
  _QWORD *v164; // rcx
  unsigned int v165; // eax
  __int64 v166; // rax
  __m128i v167; // xmm5
  _QWORD *(__fastcall *v169)(_QWORD *, _QWORD **, __int64); // [rsp+20h] [rbp-888h] BYREF
  _QWORD *v170; // [rsp+28h] [rbp-880h] BYREF
  char *v171; // [rsp+30h] [rbp-878h]
  size_t n; // [rsp+38h] [rbp-870h]
  __int64 v173; // [rsp+40h] [rbp-868h]
  __int64 v174; // [rsp+48h] [rbp-860h]
  __int64 *v175; // [rsp+50h] [rbp-858h]
  void *src; // [rsp+58h] [rbp-850h] BYREF
  __int64 *v177; // [rsp+60h] [rbp-848h]
  unsigned __int64 v178; // [rsp+68h] [rbp-840h]
  std::_V2 *v179; // [rsp+70h] [rbp-838h] BYREF
  __int64 (__fastcall **v180)(); // [rsp+78h] [rbp-830h]
  void *v181; // [rsp+80h] [rbp-828h] BYREF
  char *v182; // [rsp+88h] [rbp-820h]
  unsigned __int64 v183; // [rsp+90h] [rbp-818h]
  char **v184; // [rsp+98h] [rbp-810h]
  unsigned __int64 v185; // [rsp+A0h] [rbp-808h]
  __int64 *v186; // [rsp+A8h] [rbp-800h]
  __int64 *v187; // [rsp+B0h] [rbp-7F8h]
  _QWORD *v188; // [rsp+B8h] [rbp-7F0h]
  __int64 v189; // [rsp+C0h] [rbp-7E8h] BYREF
  char v190; // [rsp+C8h] [rbp-7E0h]
  const __m128i *v191; // [rsp+D0h] [rbp-7D8h] BYREF
  __int64 v192; // [rsp+D8h] [rbp-7D0h]
  __int64 v193; // [rsp+E0h] [rbp-7C8h] BYREF
  char v194; // [rsp+E8h] [rbp-7C0h]
  __m128i v195; // [rsp+F0h] [rbp-7B8h] BYREF
  _DWORD v196[4]; // [rsp+100h] [rbp-7A8h] BYREF
  _QWORD v197[2]; // [rsp+110h] [rbp-798h] BYREF
  char v198; // [rsp+120h] [rbp-788h]
  __m128 v199; // [rsp+130h] [rbp-778h] BYREF
  void *v200; // [rsp+140h] [rbp-768h]
  void *v201[2]; // [rsp+150h] [rbp-758h] BYREF
  _QWORD v202[2]; // [rsp+160h] [rbp-748h] BYREF
  void *v203[2]; // [rsp+170h] [rbp-738h] BYREF
  __m128i v204; // [rsp+180h] [rbp-728h] BYREF
  __int64 v205; // [rsp+190h] [rbp-718h]
  _BYTE v206[40]; // [rsp+1A0h] [rbp-708h] BYREF
  __int64 v207; // [rsp+1C8h] [rbp-6E0h]
  void **v208; // [rsp+1D0h] [rbp-6D8h]
  __m128i v209; // [rsp+1E0h] [rbp-6C8h] BYREF
  _QWORD v210[2]; // [rsp+1F0h] [rbp-6B8h] BYREF
  unsigned int v211; // [rsp+200h] [rbp-6A8h]
  __int64 *v212; // [rsp+208h] [rbp-6A0h]
  __int64 v213; // [rsp+210h] [rbp-698h]
  __int64 v214; // [rsp+218h] [rbp-690h] BYREF
  int v215; // [rsp+220h] [rbp-688h] BYREF
  void *v216; // [rsp+228h] [rbp-680h]
  int *v217; // [rsp+230h] [rbp-678h]
  int *v218; // [rsp+238h] [rbp-670h]
  __int64 v219; // [rsp+240h] [rbp-668h]
  void *v220; // [rsp+248h] [rbp-660h] BYREF
  __m128i v221; // [rsp+250h] [rbp-658h]
  void *ptr; // [rsp+260h] [rbp-648h] BYREF
  __m128i si128; // [rsp+268h] [rbp-640h]
  _BYTE dest[136]; // [rsp+278h] [rbp-630h] BYREF
  char *s; // [rsp+300h] [rbp-5A8h] BYREF
  __m128i v226; // [rsp+308h] [rbp-5A0h]
  __int64 v227; // [rsp+318h] [rbp-590h]
  __int64 v228; // [rsp+320h] [rbp-588h]
  __int128 v229; // [rsp+328h] [rbp-580h]
  __int64 v230; // [rsp+338h] [rbp-570h]
  char **v231; // [rsp+340h] [rbp-568h]
  __int64 v232; // [rsp+348h] [rbp-560h]
  __int64 v233; // [rsp+450h] [rbp-458h]
  _BYTE v234[32]; // [rsp+460h] [rbp-448h] BYREF
  __int16 v235; // [rsp+480h] [rbp-428h]
  void *v236; // [rsp+660h] [rbp-248h] BYREF
  _BYTE v237[24]; // [rsp+668h] [rbp-240h] BYREF
  _OWORD v238[4]; // [rsp+680h] [rbp-228h] BYREF
  char v239; // [rsp+6C0h] [rbp-1E8h]
  __int64 v240; // [rsp+6C8h] [rbp-1E0h]
  __int64 v241; // [rsp+6D0h] [rbp-1D8h]
  __int64 v242; // [rsp+6D8h] [rbp-1D0h]
  __int64 v243; // [rsp+6E0h] [rbp-1C8h]
  __int64 v244; // [rsp+6E8h] [rbp-1C0h]
  __int64 v245; // [rsp+6F0h] [rbp-1B8h]

  v169 = a2;
  v170 = a3;
  ptr = dest;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( a5 > 0x80 )
  {
    sub_2236E10(&ptr, dest, a5, 1);
    v33 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v7 = 0;
    if ( !a5 )
      goto LABEL_3;
    v33 = dest;
  }
  memcpy(v33, a4, a5);
  v7 = a5 + si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v7;
  v209.m128i_i64[0] = (__int64)"modules.idx";
  LOWORD(v238[0]) = 257;
  p_s = (char *)&s;
  v235 = 257;
  v9 = (__int64 *)&v236;
  LOWORD(v228) = 257;
  v10 = v234;
  LOWORD(v211) = 259;
  sub_228A3B0(&ptr, &v209, &s, v234, &v236);
  sub_222EFC0(v234, ptr, si128.m128i_i64[0]);
  sub_222F290(&v236, v234);
  if ( (v237[0] & 1) != 0 )
  {
    v12 = (char *)v236;
    v236 = nullptr;
    sub_12EBA60((__int64 *)&v236);
    if ( v12 )
    {
      s = v12;
      sub_A05760(&v236, (_QWORD **)&s);
      v13 = s;
      if ( s )
        (*(void (__fastcall **)(char *))(*(_QWORD *)s + 8LL))(s);
      v14 = std::_V2::generic_category((std::_V2 *)v13);
      sub_A09EA0((__int64)a1, 5u, v14, "LFS error");
      goto LABEL_11;
    }
  }
  else
  {
    LOBYTE(v171) = (_BYTE)v236;
    sub_12EBA60((__int64 *)&v236);
  }
  if ( !(_BYTE)v171 )
  {
    v11 = std::_V2::generic_category((std::_V2 *)&v236);
    sub_A09EA0((__int64)a1, 0x10u, v11, "someone else is building the index");
    goto LABEL_11;
  }
  LOWORD(v228) = 261;
  v16 = _mm_loadh_ps((const double *)&v170);
  v210[0] = 0;
  v209 = (__m128i)v16;
  v212 = &v214;
  v210[1] = 0;
  v211 = 0;
  v213 = 0;
  v215 = 0;
  v216 = nullptr;
  v217 = &v215;
  v218 = &v215;
  v219 = 0;
  v220 = nullptr;
  v221 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  s = (char *)a4;
  v226.m128i_i64[0] = a5;
  v17 = (char *)operator new(0x70u);
  v18 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v19 = v17;
  *((_QWORD *)v17 + 1) = 0x100000001LL;
  *(__m128i *)v237 = v18;
  *(_QWORD *)v17 = off_2C362F8;
  v20 = BYTE1(v228) == 1;
  memset(v17 + 16, 0, 0x60u);
  v17[60] = 1;
  *((_QWORD *)v17 + 3) = v17 + 40;
  *((_QWORD *)v17 + 13) = 0xFFFF00000000LL;
  v170 = v17 + 16;
  *((_DWORD *)v17 + 14) = 9;
  v236 = &v237[16];
  if ( v20 && (unsigned __int8)v228 <= 6u && ((1LL << v228) & 0x7A) != 0 )
  {
    switch ( (char)v228 )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v21 = v226.m128i_i64[0];
        v22 = s;
        break;
      case 1:
        v21 = 0;
        v22 = nullptr;
        break;
      case 3:
        v22 = s;
        v21 = 0;
        if ( s )
        {
          v171 = s;
          v64 = strlen(s);
          v22 = v171;
          v21 = v64;
        }
        break;
      case 4:
        v22 = *(void **)s;
        v21 = *((_QWORD *)s + 1);
        break;
    }
  }
  else
  {
    sub_22538C0(&s, &v236);
    v21 = *(_QWORD *)v237;
    v22 = v236;
  }
  v23 = sub_228CAB0(v19 + 16, v22, v21, 1);
  if ( v236 != &v237[16] )
    free(v236);
  v24 = *((_QWORD *)v19 + 4);
  *(_QWORD *)v237 = 0;
  memset((char *)v238 + 4, 0, 48);
  v236 = &v237[8];
  v237[8] = 0;
  LODWORD(v238[0]) = 9;
  BYTE4(v238[0]) = 1;
  DWORD1(v238[3]) = 0xFFFF;
  if ( v24 && !v23 )
  {
    v171 = v234;
    v25 = &s;
    while ( 1 )
    {
      v26 = (_DWORD *)sub_228AB90(*((_QWORD *)v19 + 3), v24, 0);
      if ( v27 != 4 )
      {
        v28 = *((std::_V2 **)v19 + 3);
        v29 = *((_QWORD *)v19 + 4);
LABEL_43:
        v34 = sub_228AB90(v28, v29, 0);
        if ( v35 == 9 && *(_QWORD *)v34 == 0x636F6C2E6D63702ELL && *(_BYTE *)(v34 + 8) == 107 )
        {
          v36 = std::_V2::generic_category(v28);
          v10 = v171;
          sub_A09EA0((__int64)a1, 0x10u, v36, "someone else is building the index");
          goto LABEL_47;
        }
        goto LABEL_28;
      }
      v28 = *((std::_V2 **)v19 + 3);
      v29 = *((_QWORD *)v19 + 4);
      if ( *v26 != 1835233326 )
        goto LABEL_43;
      sub_FD9C70((__int64)v9, (__int64)v169, *((const void **)v19 + 3), *((_QWORD *)v19 + 4), 0, 1, 1);
      v30 = v236;
      if ( (v237[0] & 1) != 0 )
      {
        v236 = nullptr;
        *(_QWORD *)v206 = v30;
        sub_A05760(v25, (_QWORD **)v206);
        if ( *(_QWORD *)v206 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v206 + 8LL))(*(_QWORD *)v206);
        sub_A04D90(v9);
        goto LABEL_28;
      }
      v31 = v236;
      n = (size_t)v236;
      sub_A04D90(v9);
      if ( v31 )
        break;
LABEL_28:
      v32 = sub_228C920(v170);
      v24 = *((_QWORD *)v19 + 4);
      memset((char *)v238 + 4, 0, 48);
      v236 = v9 + 2;
      *(_QWORD *)v237 = 0;
      v237[8] = 0;
      LODWORD(v238[0]) = 9;
      BYTE4(v238[0]) = 1;
      DWORD1(v238[3]) = 0xFFFF;
      if ( !v24 || v32 )
      {
        p_s = (char *)v25;
        v10 = v171;
        goto LABEL_31;
      }
    }
    LOBYTE(v174) = 0;
    v175 = v197;
    sub_FD8750((__int64)v197, v209.m128i_i64[0], (size_t *)n, 1u, 1u, 1, v173, v174);
    if ( (v198 & 1) != 0 )
    {
      v178 = LODWORD(v197[0]) | v178 & 0xFFFFFFFF00000000LL;
      sub_A09EA0((__int64)v206, v197[0], v197[1], "failed getting buffer for module file");
LABEL_27:
      sub_FC2AF0(v175);
      if ( !*(_QWORD *)v206 )
        goto LABEL_28;
      v10 = v171;
      *a1 = *(_QWORD *)v206;
LABEL_47:
      sub_4343A0((volatile signed __int32 *)v19);
      goto LABEL_48;
    }
    v48 = v209.m128i_i64[1];
    v49 = v197[0];
    v50 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, void *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v209.m128i_i64[1] + 24LL);
    sub_2231100(v9, v197[0]);
    v51 = v48;
    v52 = (unsigned __int8 *)&unk_2671C10;
    s = (char *)v50(v51, v49, v53, v54, v55, v56, v236, *(_QWORD *)v237, *(_QWORD *)&v237[8], *(_QWORD *)&v237[16]);
    v228 = 0x200000000LL;
    v231 = v25 + 10;
    v226 = (__m128i)v57;
    v227 = 0;
    v229 = 0;
    v230 = 0;
    v232 = 0x800000000LL;
    v233 = 0;
    while ( 1 )
    {
      v58 = (void *)*v52;
      sub_A0B360((__int64)v9, (__int64)v25, 8u);
      if ( (v237[0] & 1) != 0 )
        break;
      if ( v236 != v58 )
      {
        v120 = std::_V2::generic_category((std::_V2 *)v9);
        v185 = v185 & 0xFFFFFFFF00000000LL | 0x54;
        sub_A09EA0((__int64)v206, 0x54u, v120, "expected signature CPCH");
LABEL_182:
        sub_A0AE70(v9);
LABEL_106:
        v66 = v231;
        v67 = &v231[4 * (unsigned int)v232];
        if ( v231 != v67 )
        {
          do
          {
            v67 -= 4;
            sub_A0AD20((__int64)(v67 + 1));
          }
          while ( v66 != v67 );
          v67 = v231;
        }
        if ( v67 != v25 + 10 )
          free(v67);
        sub_A0AD20((__int64)(v25 + 5));
        goto LABEL_27;
      }
      ++v52;
      sub_A0AE70(v9);
      if ( v52 == (unsigned __int8 *)&unk_2671C14 )
      {
        v236 = (void *)n;
        v59 = sub_1FD3920((__int64)v210, (unsigned __int64 *)v9);
        if ( v60 )
        {
          LODWORD(v180) = v213;
          *(_DWORD *)(v59 + 8) = v213;
        }
        else
        {
          LODWORD(v180) = *(_DWORD *)(v59 + 8);
        }
        LODWORD(src) = 0;
        v61 = &v189;
        v177 = &v193;
        while ( 1 )
        {
          sub_1EAFB80((__int64)v61, (__int64)v25, 0);
          if ( (v190 & 1) != 0 )
          {
            v128 = v189;
            v189 = 0;
            *(_QWORD *)v206 = v128;
            goto LABEL_105;
          }
          switch ( (_DWORD)v189 )
          {
            case 1:
              sub_A0B030(v61);
              LODWORD(src) = 0;
              continue;
            case 0:
              sub_A0B030(v61);
              *(_QWORD *)v206 = 0;
              goto LABEL_106;
            case 2:
              switch ( HIDWORD(v189) )
              {
                case 0xF:
                  sub_202A150(v9, v25, HIDWORD(v189), 0);
                  v65 = v236;
                  if ( v236 )
                    break;
LABEL_202:
                  sub_A0B030(v61);
                  LODWORD(src) = 1;
                  continue;
                case 8:
                  sub_202A150(v9, v25, 8, 0);
                  v65 = v236;
                  if ( !v236 )
                  {
                    sub_A0B030(v61);
                    LODWORD(src) = 2;
                    continue;
                  }
                  break;
                case 0x13:
                  sub_202A150(v9, v25, 19, 0);
                  v65 = v236;
                  if ( !v236 )
                  {
                    sub_A0B030(v61);
                    LODWORD(src) = 3;
                    continue;
                  }
                  break;
                default:
                  sub_A0BAF0(v9, (__int64)v25);
                  v65 = v236;
                  if ( !v236 )
                    goto LABEL_87;
                  break;
              }
              *(_QWORD *)v206 = v65;
              goto LABEL_105;
          }
          if ( (_DWORD)v189 == 3 && !(_DWORD)src )
          {
            sub_2023270(v9, v25, HIDWORD(v189));
            if ( (v237[0] & 1) == 0 )
            {
              sub_A0AE90(v9);
              sub_A0B030(v61);
              continue;
            }
            v106 = v236;
            v236 = nullptr;
            *(_QWORD *)v206 = v106;
            sub_A0AE90(v9);
            goto LABEL_105;
          }
          v236 = v9 + 2;
          *(_QWORD *)v237 = 0x4000000000LL;
          v191 = nullptr;
          v192 = 0;
          sub_2027F10(v177, v25, HIDWORD(v189), v9, &v191);
          if ( (v194 & 1) != 0 )
          {
            v166 = v193;
            v193 = 0;
            *(_QWORD *)v206 = v166;
            goto LABEL_222;
          }
          if ( (_DWORD)src == 1 && (_DWORD)v193 == 2 )
          {
            v78 = (unsigned int *)v236;
            v79 = v192;
            v80 = v191;
            v81 = *((_QWORD *)v236 + 2);
            v182 = *((char **)v236 + 4);
            v181 = *((void **)v236 + 5);
            if ( v81 > v192 )
            {
              src = &v191->m128i_i8[v192];
              v196[0] = 0;
              memset(v206, 0, 20);
              v195 = 0;
            }
            else
            {
              v82 = v192 - v81;
              v83 = (const __m128i *)((char *)v191 + v81);
              v191 = v83;
              v192 = v82;
              if ( v82 == -1 )
              {
                v84 = -21;
                goto LABEL_142;
              }
              if ( (unsigned __int64)v82 > 0x13 )
              {
                v84 = v82 - 20;
LABEL_142:
                v85 = (char *)v83[1].m128i_i64 + 4;
                v86 = 4;
                ++v83;
                memset(v206, 0, 20);
                v87 = _mm_loadu_si128(v83 - 1);
                v196[0] = 0;
                src = v85;
                v88 = (__m128i *)v196;
                v195 = v87;
                goto LABEL_143;
              }
              v86 = v82;
              src = &v80->m128i_i8[v79];
              memset(v206, 0, 20);
              v195 = 0;
              v196[0] = 0;
              if ( v82 )
              {
                if ( v82 > 15 )
                {
                  v167 = _mm_loadu_si128(v83);
                  v86 = v82 - 16;
                  ++v83;
                  v84 = 0;
                  v195 = v167;
                  if ( v82 != 16 )
                  {
                    v88 = (__m128i *)v196;
                    goto LABEL_143;
                  }
LABEL_158:
                  v89 = v78[12];
LABEL_159:
                  if ( v89 <= v84 )
                  {
                    v107 = v84;
                    v84 = v89;
                    v90 = v107 - v89;
                  }
                  else
                  {
                    v90 = 0;
                  }
                  v192 = v90;
                  v184 = (char **)((char *)src + v84);
                  v191 = (const __m128i *)((char *)src + v84);
                  v179 = (std::_V2 *)v206;
                  sub_FD9C70((__int64)v206, v209.m128i_i64[0], src, v84, 0, 0, 1);
                  if ( (v206[8] & 1) != 0 )
                  {
                    v121 = *(void **)v206;
                    n = v84;
                    v122 = (__int64 *)v179;
                    *(_QWORD *)v206 = 0;
                    v201[0] = v121;
                    sub_A05760(v203, (_QWORD **)v201);
                    v123 = n;
                    if ( v201[0] )
                    {
                      (*(void (__fastcall **)(void *))(*(_QWORD *)v201[0] + 8LL))(v201[0]);
                      v123 = n;
                    }
                    v92 = (std::_V2 *)v122;
                    n = v123;
                    sub_A04D90(v122);
                    v124 = (char *)n;
                  }
                  else
                  {
                    v91 = *(_QWORD *)v206;
                    v92 = v179;
                    sub_A04D90((__int64 *)v179);
                    if ( v91 )
                    {
                      v93 = v182;
                      v94 = _mm_load_si128(&v195);
                      LODWORD(v205) = v196[0];
                      v203[0] = v182;
                      v203[1] = v181;
                      v95 = _mm_load_si128((const __m128i *)v203);
                      *(_QWORD *)v206 = v94.m128i_i64[0];
                      v204 = v94;
                      *(__m128i *)&v206[24] = v94;
                      *(__m128i *)&v206[8] = v95;
                      v207 = v205;
                      v96 = operator new(0x50u);
                      v97 = v207;
                      src = v93;
                      *(_QWORD *)(v96 + 32) = v91;
                      v98 = _mm_loadu_si128((const __m128i *)&v206[24]);
                      *(_QWORD *)(v96 + 72) = v97;
                      v99 = (int *)v216;
                      *(__m128 *)&v206[8] = _mm_loadh_ps((const double *)&v181);
                      *(_OWORD *)(v96 + 40) = *(_OWORD *)&v206[8];
                      *(__m128i *)(v96 + 56) = v98;
                      if ( v99 )
                      {
                        while ( 1 )
                        {
                          v100 = v91;
                          while ( 1 )
                          {
                            v101 = *(_QWORD *)(v100 + 8);
                            if ( !v101 )
                              break;
                            v100 = v101 & 0xFFFFFFFFFFFFFFF8LL;
                            if ( (v101 & 4) == 0 || !v100 )
                              goto LABEL_168;
                          }
                          v100 = 0;
LABEL_168:
                          v102 = *((_QWORD *)v99 + 4);
                          v103 = v102;
                          while ( 1 )
                          {
                            v104 = *(_QWORD *)(v103 + 8);
                            if ( !v104 )
                              goto LABEL_172;
                            v103 = v104 & 0xFFFFFFFFFFFFFFF8LL;
                            if ( (v104 & 4) == 0 )
                              break;
                            if ( !v103 )
                              goto LABEL_172;
                          }
                          if ( v100 >= v103 )
LABEL_172:
                            v105 = *((int **)v99 + 3);
                          else
                            v105 = *((int **)v99 + 2);
                          if ( !v105 )
                            break;
                          v99 = v105;
                        }
                        v109 = 1;
                        if ( v99 == &v215 )
                          goto LABEL_194;
                        v110 = v91;
                        do
                        {
                          v111 = *(_QWORD *)(v110 + 8);
                          if ( !v111 )
                            break;
                          v110 = v111 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v111 & 4) == 0 )
                            break;
                        }
                        while ( v110 );
                        while ( 1 )
                        {
                          v112 = *(_QWORD *)(v102 + 8);
                          if ( !v112 )
                            break;
                          v102 = v112 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v112 & 4) == 0 || !v102 )
                          {
                            v109 = v102 > (v111 & 0xFFFFFFFFFFFFFFF8LL);
                            goto LABEL_194;
                          }
                        }
                        v109 = 0;
                      }
                      else
                      {
                        v109 = 1;
                        v99 = &v215;
                      }
LABEL_194:
                      std::_Rb_tree_insert_and_rebalance(v109, v96, v99, &v215);
                      ++v219;
                      *(_QWORD *)v206 = v91;
                      v113 = sub_1FD3920((__int64)v210, (unsigned __int64 *)v179);
                      if ( v114 )
                      {
                        v115 = v213;
                        *(_DWORD *)(v113 + 8) = v213;
                      }
                      else
                      {
                        v115 = *(_DWORD *)(v113 + 8);
                      }
                      *(_QWORD *)v206 = n;
                      v116 = sub_1FD3920((__int64)v210, (unsigned __int64 *)v179);
                      if ( v117 )
                        *(_DWORD *)(v116 + 8) = v213;
                      v118 = *(unsigned int *)(v116 + 24);
                      if ( v118 + 1 > (unsigned __int64)*(unsigned int *)(v116 + 28) )
                      {
                        src = (void *)v116;
                        sub_2237220(v116 + 16, v116 + 32, v118 + 1, 4);
                        v116 = (__int64)src;
                        v118 = *((unsigned int *)src + 6);
                      }
                      v119 = v177;
                      *(_DWORD *)(*(_QWORD *)(v116 + 16) + 4 * v118) = v115;
                      ++*(_DWORD *)(v116 + 24);
                      sub_A0AE90(v119);
                      if ( v236 != v9 + 2 )
                        free(v236);
                      goto LABEL_202;
                    }
                    v124 = (char *)v84;
                    v122 = (__int64 *)v179;
                  }
                  v201[0] = v202;
                  if ( !src && v184 )
                    std::__throw_logic_error("basic_string::_M_construct null not valid");
                  if ( (unsigned __int64)v124 > 0xF )
                  {
                    n = (size_t)v124;
                    v125 = (_QWORD *)operator new((unsigned __int64)(v124 + 1));
                    v124 = (char *)n;
                    v201[0] = v125;
                    v202[0] = n;
                  }
                  else
                  {
                    if ( v124 == (_BYTE *)&dword_0 + 1 )
                    {
                      LOBYTE(v202[0]) = *(_BYTE *)src;
                      v125 = v202;
LABEL_218:
                      v201[1] = v124;
                      v124[(_QWORD)v125] = 0;
                      v182 = (char *)v201[0];
                      n = std::_V2::generic_category(v92);
                      memset(&v206[16], 0, 24);
                      v203[0] = &v204;
                      v181 = &v204;
                      v208 = v203;
                      v179 = (std::_V2 *)v203;
                      *(_QWORD *)v206 = &off_2BEBE68;
                      v180 = &off_2BEBE68;
                      v203[1] = nullptr;
                      v204.m128i_i8[0] = 0;
                      *(_DWORD *)&v206[8] = 0;
                      LOBYTE(v207) = 0;
                      HIDWORD(v207) = 1;
                      sub_227B8B0(v122, 0, 0, 0);
                      src = "imported file \"%s\" not found";
                      v200 = v182;
                      v199 = _mm_loadh_ps((const double *)&src);
                      sub_227C560(v122, &v199);
                      *(_QWORD *)v206 = v180;
                      sub_227B7A0(v122);
                      *(_WORD *)&v206[32] = 260;
                      *(_QWORD *)v206 = v179;
                      v183 = v183 & 0xFFFFFFFF00000000LL | 9;
                      v126 = operator new(0x40u);
                      v127 = n;
                      n = v126;
                      sub_2220590(v126, v122, (unsigned int)v183, v127);
                      *(_QWORD *)v206 = n;
                      if ( v203[0] != v181 )
                        operator delete(v203[0]);
                      if ( v201[0] != v202 )
                        operator delete(v201[0]);
LABEL_222:
                      sub_A0AE90(v177);
                      if ( v236 != v9 + 2 )
                        free(v236);
LABEL_105:
                      sub_A0B030(v61);
                      goto LABEL_106;
                    }
                    v125 = v202;
                    if ( !v124 )
                      goto LABEL_218;
                  }
                  v92 = (std::_V2 *)v125;
                  n = (size_t)v124;
                  memcpy(v125, src, (size_t)v124);
                  v125 = v201[0];
                  v124 = (char *)n;
                  goto LABEL_218;
                }
                v84 = 0;
                v88 = &v195;
LABEL_143:
                v88->m128i_i8[0] = v83->m128i_i8[0];
                if ( v86 != 1 )
                {
                  v88->m128i_i8[1] = v83->m128i_i8[1];
                  if ( v86 != 2 )
                  {
                    v88->m128i_i8[2] = v83->m128i_i8[2];
                    if ( v86 != 3 )
                    {
                      v88->m128i_i8[3] = v83->m128i_i8[3];
                      if ( v86 != 4 )
                      {
                        v88->m128i_i8[4] = v83->m128i_i8[4];
                        if ( v86 != 5 )
                        {
                          v88->m128i_i8[5] = v83->m128i_i8[5];
                          if ( v86 != 6 )
                          {
                            v88->m128i_i8[6] = v83->m128i_i8[6];
                            if ( v86 != 7 )
                            {
                              v88->m128i_i8[7] = v83->m128i_i8[7];
                              if ( v86 != 8 )
                              {
                                v88->m128i_i8[8] = v83->m128i_i8[8];
                                if ( v86 != 9 )
                                {
                                  v88->m128i_i8[9] = v83->m128i_i8[9];
                                  if ( v86 != 10 )
                                  {
                                    v88->m128i_i8[10] = v83->m128i_i8[10];
                                    if ( v86 != 11 )
                                    {
                                      v88->m128i_i8[11] = v83->m128i_i8[11];
                                      if ( v86 != 12 )
                                      {
                                        v88->m128i_i8[12] = v83->m128i_i8[12];
                                        if ( v86 != 13 )
                                        {
                                          v88->m128i_i8[13] = v83->m128i_i8[13];
                                          if ( v86 != 14 )
                                            v88->m128i_i8[14] = v83->m128i_i8[14];
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LABEL_158;
              }
            }
            v89 = *((unsigned int *)v236 + 12);
            v84 = 0;
            goto LABEL_159;
          }
          if ( (_DWORD)src != 2 || (_DWORD)v193 != 5 )
          {
            if ( (_DWORD)src != 3 || (_DWORD)v193 != 1 )
              goto LABEL_85;
            v68 = v192;
            v69 = v191;
            memset(v206, 0, 20);
            *(_OWORD *)v203 = 0;
            v70 = v192;
            v204.m128i_i32[0] = 0;
            if ( v192 > 0 )
            {
              if ( v192 <= 15 )
              {
                v75 = v203;
LABEL_121:
                *(_BYTE *)v75 = v69->m128i_i8[0];
                if ( v70 != 1 )
                {
                  *((_BYTE *)v75 + 1) = v69->m128i_i8[1];
                  if ( v70 != 2 )
                  {
                    *((_BYTE *)v75 + 2) = v69->m128i_i8[2];
                    if ( v70 != 3 )
                    {
                      *((_BYTE *)v75 + 3) = v69->m128i_i8[3];
                      if ( v70 != 4 )
                      {
                        *((_BYTE *)v75 + 4) = v69->m128i_i8[4];
                        if ( v70 != 5 )
                        {
                          *((_BYTE *)v75 + 5) = v69->m128i_i8[5];
                          if ( v70 != 6 )
                          {
                            *((_BYTE *)v75 + 6) = v69->m128i_i8[6];
                            if ( v70 != 7 )
                            {
                              *((_BYTE *)v75 + 7) = v69->m128i_i8[7];
                              if ( v70 != 8 )
                              {
                                *((_BYTE *)v75 + 8) = v69->m128i_i8[8];
                                if ( v70 != 9 )
                                {
                                  *((_BYTE *)v75 + 9) = v69->m128i_i8[9];
                                  if ( v70 != 10 )
                                  {
                                    *((_BYTE *)v75 + 10) = v69->m128i_i8[10];
                                    if ( v70 != 11 )
                                    {
                                      *((_BYTE *)v75 + 11) = v69->m128i_i8[11];
                                      if ( v70 != 12 )
                                      {
                                        *((_BYTE *)v75 + 12) = v69->m128i_i8[12];
                                        if ( v70 != 13 )
                                        {
                                          *((_BYTE *)v75 + 13) = v69->m128i_i8[13];
                                          if ( v70 != 14 )
                                            *((_BYTE *)v75 + 14) = v69->m128i_i8[14];
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v71 = v203;
                v72 = v191;
                v73 = (const __m128i *)((char *)v191 + (v192 & 0xFFFFFFFFFFFFFFF0LL));
                do
                {
                  v74 = _mm_loadu_si128(v72++);
                  v71 += 2;
                  *((__m128i *)v71 - 1) = v74;
                }
                while ( v72 != v73 );
                v70 = v68 - (v68 & 0xFFFFFFFFFFFFFFF0LL);
                v69 = (const __m128i *)((char *)v69 + (v68 & 0xFFFFFFFFFFFFFFF0LL));
                v75 = (void **)((char *)v203 + (v68 & 0xFFFFFFFFFFFFFFF0LL));
                if ( v68 != (v68 & 0xFFFFFFFFFFFFFFF0LL) )
                  goto LABEL_121;
              }
            }
            *(_QWORD *)v206 = n;
            v76 = (__m128i *)sub_1FD3920((__int64)v210, (unsigned __int64 *)v206);
            if ( v77 )
              v76->m128i_i32[2] = v213;
            v76[3] = _mm_load_si128((const __m128i *)v203);
            v76[4].m128i_i32[0] = v204.m128i_i32[0];
            goto LABEL_85;
          }
          v62 = *(_QWORD *)v236;
          if ( !*(_QWORD *)v236 )
            goto LABEL_85;
          v129 = &v191->m128i_i8[4];
          v184 = (char **)v191;
          v130 = *(__int32 *)((char *)&v191->m128i_i32[1] + v62);
          LODWORD(v182) = *(__int32 *)((char *)v191->m128i_i32 + v62);
          LODWORD(v179) = v130;
          v131 = (__m128 *)operator new(0x28u);
          v132 = (int)v179;
          v133 = (std::_V2 *)v184;
          v131->m128_i32[0] = (int)v182;
          v179 = v133;
          v131->m128_i32[1] = v132;
          v131[2].m128_u64[0] = (unsigned __int64)v129;
          v134 = _mm_loadh_ps((const double *)&v179);
          v181 = v131;
          v131 = (__m128 *)((char *)v131 + 24);
          v131[-1] = v134;
          *(_QWORD *)v206 = v129;
          *(_DWORD *)&v206[8] = 0;
          *(_DWORD *)&v206[12] = v132;
          *(_QWORD *)&v206[16] = v131;
          if ( !v132 )
            goto LABEL_252;
          v135 = 6;
          v182 = v19;
          v179 = (std::_V2 *)v206;
          v184 = v25;
          v186 = v61;
          v187 = v9;
          while ( 1 )
          {
            v203[0] = &v129[v135];
            v149 = sub_1EAAB60((char **)v203);
            v151 = (const void *)sub_1EAAB70((__int64)v203[0]);
            v152 = v150;
            if ( (*((_BYTE *)v203[0] + v149) & 1) != 0 )
            {
              v136 = sub_2244B30(v151, v150);
              v137 = sub_2244CB0(&v220, v151, v152, v136);
              v141 = v137;
              v142 = (__int64 *)((char *)v220 + 8 * v137);
              if ( *v142 )
              {
                if ( *v142 != -8 )
                {
                  sub_1FD1B00((__int64 **)v203, v142, 0);
                  v143 = (__int64 *)v203[0];
LABEL_232:
                  v144 = *v143;
                  v145 = *(unsigned int *)(*v143 + 16);
                  if ( v145 + 1 > (unsigned __int64)*(unsigned int *)(v144 + 20) )
                  {
                    sub_2237220(v144 + 8, v144 + 24, v145 + 1, 4);
                    v145 = *(unsigned int *)(v144 + 16);
                  }
                  *(_DWORD *)(*(_QWORD *)(v144 + 8) + 4 * v145) = (_DWORD)v180;
                  ++*(_DWORD *)(v144 + 16);
                  goto LABEL_235;
                }
                --v221.m128i_i32[2];
              }
              v160 = sub_22300B0(v152 + 33, 8, v137, v138, v139, v140);
              v161 = (_QWORD *)v160;
              if ( v152 )
              {
                v188 = (_QWORD *)v160;
                memcpy((void *)(v160 + 32), v151, v152);
                v161 = v188;
              }
              *((_BYTE *)v161 + v152 + 32) = 0;
              v161[1] = v161 + 3;
              *v161 = v152;
              v161[2] = 0x200000000LL;
              *v142 = (__int64)v161;
              ++v221.m128i_i32[1];
              v162 = sub_22450D0(&v220, v141);
              sub_1FD1B00((__int64 **)v203, (__int64 *)v220 + v162, 0);
              v143 = (__int64 *)v203[0];
              goto LABEL_232;
            }
            v153 = sub_2244B30(v151, v150);
            v154 = sub_2244CB0(&v220, v151, v152, v153);
            v158 = v154;
            v159 = (__int64 *)((char *)v220 + 8 * v154);
            if ( *v159 )
            {
              if ( *v159 != -8 )
              {
                sub_1FD1B00((__int64 **)v203, v159, 0);
                goto LABEL_235;
              }
              --v221.m128i_i32[2];
            }
            v163 = sub_22300B0(v152 + 33, 8, v154, v155, v156, v157);
            v164 = (_QWORD *)v163;
            if ( v152 )
            {
              v188 = (_QWORD *)v163;
              memcpy((void *)(v163 + 32), v151, v152);
              v164 = v188;
            }
            *((_BYTE *)v164 + v152 + 32) = 0;
            v164[1] = v164 + 3;
            *v164 = v152;
            v164[2] = 0x200000000LL;
            *v159 = (__int64)v164;
            ++v221.m128i_i32[1];
            v165 = sub_22450D0(&v220, v158);
            sub_1FD1B00((__int64 **)v203, (__int64 *)v220 + v165, 0);
LABEL_235:
            v146 = *(_QWORD *)v206;
            if ( !*(_DWORD *)&v206[8] )
            {
              v146 = *(_QWORD *)v206 + 2LL;
              *(_DWORD *)&v206[8] = (unsigned __int16)**(_WORD **)v206;
            }
            *(_QWORD *)v206 = v146 + 4;
            v147 = sub_1EAAB60((char **)v179);
            v129 = (char *)(*(_QWORD *)v206 + (unsigned int)(v147 + HIDWORD(v147)));
            v20 = (*(_DWORD *)&v206[12])-- == 1;
            *(_QWORD *)v206 = v129;
            v148 = --*(_DWORD *)&v206[8];
            if ( v20 )
              break;
            v135 = v148 == 0 ? 6LL : 4LL;
          }
          v19 = v182;
          v25 = v184;
          v61 = v186;
          v9 = v187;
LABEL_252:
          operator delete(v181, 0x28u);
LABEL_85:
          sub_A0AE90(v177);
          if ( v236 != v9 + 2 )
            free(v236);
LABEL_87:
          sub_A0B030(v61);
        }
      }
    }
    v108 = v236;
    v236 = nullptr;
    *(_QWORD *)v206 = v108;
    goto LABEL_182;
  }
LABEL_31:
  sub_4343A0((volatile signed __int32 *)v19);
  s = p_s + 24;
  v226 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v236 = v9 + 3;
  *(_OWORD *)v237 = 0;
  *(_QWORD *)&v237[16] = p_s;
  v238[0] = 0u;
  v238[1] = _mm_load_si128((const __m128i *)&xmmword_23A8DA0);
  memset(&v238[2], 0, 24);
  v239 = 0;
  v240 = 0;
  v241 = 0;
  v242 = 0;
  v243 = 0;
  v244 = 0;
  v245 = 0;
  if ( (unsigned __int8)sub_1FD3BF0(&v209, (__int64)v9) )
  {
    v63 = std::_V2::generic_category((std::_V2 *)&v209);
    sub_A09EA0((__int64)a1, 5u, v63, "failed writing index");
    sub_12DB5C0((__int64)v9);
  }
  else
  {
    sub_12DB5C0((__int64)v9);
    v169 = sub_1FD0510;
    v236 = p_s;
    *(__m128 *)&v237[8] = _mm_loadh_ps((const double *)&v169);
    sub_227D8B0(a1, ptr, si128.m128i_i64[0], v9);
    if ( *(_QWORD *)&v237[8] )
      (*(void (__fastcall **)(__int64 *, __int64 *, __int64))&v237[8])(v9, v9, 3);
  }
  if ( s != p_s + 24 )
    free(s);
LABEL_48:
  v37 = (char *)v220;
  if ( v221.m128i_i32[1] && v221.m128i_i32[0] )
  {
    v38 = 0;
    v39 = 8LL * (unsigned int)(v221.m128i_i32[0] - 1) + 8;
    do
    {
      v40 = *(_QWORD **)&v37[v38];
      if ( v40 != (_QWORD *)-8LL && v40 )
      {
        v41 = (_QWORD *)v40[1];
        v42 = *v40 + 33LL;
        if ( v41 != v40 + 3 )
          free(v41);
        operator delete(v40, v42, 8);
        v37 = (char *)v220;
      }
      v38 += 8;
    }
    while ( v39 != v38 );
  }
  free(v37);
  v43 = (_QWORD **)v216;
  if ( v216 )
  {
    do
    {
      sub_1FD0540((__int64)&v214, v43[3]);
      v44 = (_QWORD **)v43[2];
      operator delete(v43);
      v43 = v44;
    }
    while ( v44 );
  }
  v45 = v212;
  v46 = &v212[9 * (unsigned int)v213];
  if ( v212 != v46 )
  {
    do
    {
      while ( 1 )
      {
        v46 -= 9;
        v47 = (__int64 *)v46[2];
        if ( v47 == v46 + 4 )
          break;
        free(v47);
        if ( v45 == v46 )
          goto LABEL_62;
      }
    }
    while ( v45 != v46 );
LABEL_62:
    v46 = v212;
  }
  if ( v46 != &v214 )
    free(v46);
  operator delete(v210[0], 16LL * v211, 8);
LABEL_11:
  sub_222E9A0(v10);
  if ( ptr != dest )
    free(ptr);
  return a1;
}
