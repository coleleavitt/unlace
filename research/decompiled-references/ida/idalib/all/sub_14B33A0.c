void __fastcall sub_14B33A0(
        __m128i *a1,
        __int16 a2,
        unsigned int a3,
        __int64 a4,
        int *a5,
        int a6,
        double a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned int a10,
        unsigned int *a11)
{
  char v12; // bp
  __int16 v13; // ax
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rcx
  __int16 v17; // di
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _BYTE *v21; // rax
  int *v22; // rax
  __int8 v23; // bp
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int16 v27; // ax
  __m128 v28; // xmm0
  __int16 v29; // ax
  __m128i v30; // xmm0
  _QWORD *v31; // rbp
  __int64 m128i_i64; // rsi
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  char v37; // al
  bool v38; // r13
  __int64 v39; // r12
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  __m128i v42; // xmm0
  int v43; // r14d
  char v44; // r14
  char v45; // r13
  __int8 *v46; // r12
  unsigned int *v47; // rax
  __int64 *v48; // rbx
  __int64 *v49; // rbp
  __int64 *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rdi
  __int8 *v57; // rcx
  __int64 *v58; // rbx
  __int64 *v59; // rdi
  unsigned __int32 v60; // esi
  unsigned int *v61; // rax
  const char *v62; // rax
  size_t v63; // r8
  const char *v64; // rbp
  int v65; // eax
  void **p_ptr; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 *v70; // rdi
  __int16 v71; // ax
  void **v72; // r10
  __int8 v73; // al
  void **v74; // r10
  __m128 *v75; // r14
  __int64 v76; // rsi
  int v77; // r11d
  __int64 v78; // rax
  unsigned int v79; // r9d
  unsigned int v80; // r8d
  int v81; // eax
  __int64 v82; // r13
  __int64 v83; // r14
  __int64 v84; // rbp
  __int64 v85; // rdi
  int v86; // eax
  __int64 v87; // rdi
  char v88; // dl
  unsigned __int16 v89; // r13
  unsigned __int64 v90; // rdx
  __int16 v91; // ax
  __int64 v92; // rax
  __int32 v93; // r13d
  __int64 *v94; // rdi
  __int32 v95; // eax
  int v96; // eax
  __int64 v97; // rdi
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __m128i v110; // xmm2
  __m128i v111; // xmm3
  __m128i v112; // xmm4
  __int32 v113; // edx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 *v119; // rdi
  __int16 v120; // ax
  unsigned __int16 v121; // dx
  __int32 v122; // eax
  __int64 *v123; // rdi
  __int64 v124; // rdi
  unsigned __int64 v125; // rax
  void **v126; // rax
  bool v127; // zf
  const char *v128; // rax
  size_t v129; // r8
  const char *v130; // r12
  __int64 v131; // rcx
  unsigned __int8 *v132; // r13
  unsigned __int8 *v133; // rbp
  unsigned __int64 *v134; // rcx
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdi
  unsigned int v139; // eax
  int v140; // r13d
  int v141; // eax
  size_t v142; // rax
  __int64 v143; // r10
  __int64 v144; // rax
  __int64 v145; // rcx
  unsigned __int64 v146; // rdx
  __int32 v147; // r14d
  int v148; // eax
  char v149; // r14
  __int64 v150; // rdi
  __int8 v151; // al
  __int64 v152; // rdi
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  __int64 *v155; // rdi
  __int64 v156; // rdi
  unsigned __int64 v157; // rax
  __int64 v158; // rdi
  unsigned __int64 v159; // rax
  __int32 v160; // r12d
  __int16 v161; // ax
  __int64 v162; // rcx
  __int64 v163; // rdi
  __int64 v164; // rsi
  __int64 v165; // rdx
  __int64 v166; // rax
  char v167; // dl
  __int64 v168; // rdi
  __int64 *v169; // rdi
  __int64 v170; // [rsp-60h] [rbp-878h]
  __int64 v171; // [rsp-38h] [rbp-850h]
  int v172; // [rsp-30h] [rbp-848h]
  int v173; // [rsp-28h] [rbp-840h]
  char v174; // [rsp-20h] [rbp-838h]
  int v175; // [rsp-18h] [rbp-830h]
  int v176; // [rsp-10h] [rbp-828h]
  unsigned __int64 v177; // [rsp-8h] [rbp-820h]
  int *v178; // [rsp+8h] [rbp-810h] BYREF
  __m128 *v179; // [rsp+10h] [rbp-808h]
  void ***v180; // [rsp+18h] [rbp-800h] BYREF
  unsigned int v181; // [rsp+24h] [rbp-7F4h]
  __int64 *v182; // [rsp+28h] [rbp-7F0h]
  unsigned __int64 *v183; // [rsp+30h] [rbp-7E8h]
  void **v184; // [rsp+38h] [rbp-7E0h]
  __int64 v185; // [rsp+40h] [rbp-7D8h]
  void **v186; // [rsp+48h] [rbp-7D0h]
  _OWORD *v187; // [rsp+50h] [rbp-7C8h]
  __int64 v188; // [rsp+58h] [rbp-7C0h]
  _DWORD *v189; // [rsp+60h] [rbp-7B8h]
  _QWORD *v190; // [rsp+68h] [rbp-7B0h]
  int v191; // [rsp+70h] [rbp-7A8h]
  unsigned int v192; // [rsp+74h] [rbp-7A4h]
  unsigned int v193; // [rsp+78h] [rbp-7A0h] BYREF
  __int16 v194; // [rsp+7Ch] [rbp-79Ch]
  unsigned __int8 v195; // [rsp+83h] [rbp-795h] BYREF
  unsigned __int32 v196; // [rsp+84h] [rbp-794h] BYREF
  void **v197; // [rsp+88h] [rbp-790h] BYREF
  __int64 v198; // [rsp+90h] [rbp-788h]
  __int64 v199; // [rsp+98h] [rbp-780h] BYREF
  _OWORD v200[2]; // [rsp+A0h] [rbp-778h] BYREF
  _DWORD v201[2]; // [rsp+C0h] [rbp-758h] BYREF
  __int128 v202; // [rsp+C8h] [rbp-750h]
  void *v203; // [rsp+D8h] [rbp-740h]
  __int64 v204; // [rsp+E0h] [rbp-738h]
  _BYTE v205[24]; // [rsp+E8h] [rbp-730h] BYREF
  void *ptr; // [rsp+100h] [rbp-718h] BYREF
  __int128 v207; // [rsp+108h] [rbp-710h] BYREF
  void *v208; // [rsp+118h] [rbp-700h]
  __int64 (__fastcall *v209)(__int64); // [rsp+120h] [rbp-6F8h]
  _QWORD v210[2]; // [rsp+128h] [rbp-6F0h] BYREF
  char v211; // [rsp+138h] [rbp-6E0h]
  _QWORD v212[3]; // [rsp+140h] [rbp-6D8h] BYREF
  _QWORD v213[5]; // [rsp+158h] [rbp-6C0h] BYREF
  __int64 v214; // [rsp+180h] [rbp-698h] BYREF
  _OWORD v215[2]; // [rsp+190h] [rbp-688h] BYREF
  __m128i v216; // [rsp+1B0h] [rbp-668h] BYREF
  char *v217; // [rsp+1C0h] [rbp-658h]
  __int64 v218; // [rsp+1C8h] [rbp-650h]
  char v219; // [rsp+1D0h] [rbp-648h] BYREF
  __int64 v220; // [rsp+1E0h] [rbp-638h] BYREF
  __int64 v221; // [rsp+1E8h] [rbp-630h] BYREF
  char *v222; // [rsp+1F0h] [rbp-628h]
  __int64 v223; // [rsp+1F8h] [rbp-620h]
  char v224; // [rsp+200h] [rbp-618h] BYREF
  __int64 v225; // [rsp+340h] [rbp-4D8h]
  char v226; // [rsp+348h] [rbp-4D0h]
  __m128i *v227; // [rsp+350h] [rbp-4C8h] BYREF
  __m128i v228; // [rsp+358h] [rbp-4C0h] BYREF
  __m128i v229; // [rsp+368h] [rbp-4B0h] BYREF
  __int64 v230; // [rsp+378h] [rbp-4A0h]
  __m128i v231; // [rsp+380h] [rbp-498h]
  int v232; // [rsp+390h] [rbp-488h] BYREF
  __int64 v233; // [rsp+398h] [rbp-480h]
  __int32 v234; // [rsp+3A0h] [rbp-478h]
  __int16 v235; // [rsp+3A4h] [rbp-474h]
  char v236; // [rsp+3A6h] [rbp-472h]

  v193 = a3;
  v179 = (__m128 *)a4;
  v178 = a5;
  LODWORD(v187) = a6;
  v194 = a2;
  if ( a2 == 103 )
  {
    v12 = 1;
    v181 = 25;
  }
  else
  {
    v12 = 0;
    if ( a2 == 400 )
    {
      v13 = a1[2].m128i_i16[0];
      v181 = 27;
      if ( v13 != 3 )
        goto LABEL_5;
LABEL_16:
      v18 = a1->m128i_i64[1];
      if ( *(_QWORD *)(v18 + 760) )
      {
        *(_BYTE *)(v18 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v18 + 48) + 6LL) = 1;
      }
      v19 = a1[6].m128i_i64[0];
      v20 = v181;
      a1[2].m128i_i16[0] = 1;
      sub_1705480(*(_QWORD *)(v19 + 656), *(_QWORD *)(v19 + 608), v20);
      return;
    }
    v181 = 2 * (a2 == 129) + 24;
  }
  v13 = a1[2].m128i_i16[0];
  if ( v13 == 3 )
    goto LABEL_16;
LABEL_5:
  v14 = a1[6].m128i_i64[0];
  v221 = 0;
  v182 = &v220;
  v15 = *v178;
  v220 = v14;
  v222 = &v224;
  LODWORD(v184) = v15;
  v223 = 0x400000000LL;
  v225 = 0;
  if ( v15 )
  {
    v16 = *(_QWORD *)(v14 + 512);
    v226 = 1;
    *(_QWORD *)(v14 + 512) = &v221;
    v225 = v16;
  }
  else
  {
    v226 = 0;
  }
  v212[0] = 0;
  v188 = (__int64)&a1[31].m128i_i64[1];
  v212[1] = v213;
  v213[2] = (char *)a1 + 504;
  v212[2] = 0x200000000LL;
  v213[3] = &v214;
  v213[4] = 0x200000000LL;
  if ( v13 != 320 )
    goto LABEL_8;
LABEL_10:
  sub_1485110((__int64)a1, 7, (__int64)v212, 0);
  while ( 1 )
  {
    v17 = a1[2].m128i_i16[0];
    if ( (unsigned __int16)(v17 - 397) > 2u )
      break;
    sub_14A0480((__int64)a1, (__int64)v212);
LABEL_13:
    v13 = a1[2].m128i_i16[0];
    if ( v13 == 320 )
      goto LABEL_10;
LABEL_8:
    if ( v13 == 189 || (unsigned __int16)(v13 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      goto LABEL_10;
  }
  if ( v17 == 381 )
  {
    sub_14A0670((__int64)a1, (__int64)v212);
    goto LABEL_13;
  }
  v191 = a1[1].m128i_i32[0];
  if ( v17 != 5 )
  {
    if ( v12 )
    {
      if ( !sub_10CCDE0(v17) )
      {
        v89 = a1[2].m128i_u16[0];
        LOBYTE(v90) = sub_141A630(v89) | (v89 == 1);
        if ( !(_BYTE)v90 )
        {
          if ( a1[1].m128i_i64[1] )
          {
            if ( (unsigned __int16)(v89 - 216) <= 0x3Du )
              v90 = (0x3FFFFC7FFFC001F7uLL >> ((unsigned __int8)v89 + 40)) & 1;
            if ( (unsigned __int16)(v89 - 288) <= 0x1Au || (_BYTE)v90 )
              sub_1565920(a1, 1);
          }
        }
      }
    }
  }
  v21 = *(_BYTE **)(a1->m128i_i64[1] + 56);
  if ( (*v21 & 0x20) != 0 && a1[2].m128i_i16[0] == 113 && v12 )
  {
    if ( sub_141A630(0x71u) )
    {
LABEL_331:
      *(_QWORD *)&dword_0 = 0x10102464C4400LL;
      BUG();
    }
    v134 = (unsigned __int64 *)a1[1].m128i_i64[1];
    v135 = *v134 & 0xFFFFFFF7FFFFFE00LL;
    v183 = v134;
    *v134 = v135 | 0x800000005LL;
    v136 = a1->m128i_i64[1];
    a1[2].m128i_i16[0] = 5;
    v21 = *(_BYTE **)(v136 + 56);
  }
  else
  {
    v183 = nullptr;
  }
  v186 = (void **)&v179[7];
  if ( (v21[1] & 8) != 0 )
  {
    v22 = v178;
    v23 = a1[127].m128i_i8[8];
    a1[127].m128i_i8[8] = 1;
    memset(v215, 0, sizeof(v215));
    v24 = *((_QWORD *)v22 + 1);
    v216 = 0;
    if ( v24 )
    {
      v25 = *(_QWORD *)v24;
      v26 = *(unsigned int *)(v24 + 8);
      v216.m128i_i64[0] = v25;
      v216.m128i_i64[1] = v26;
    }
    v180 = (void ***)v215;
    if ( (unsigned __int8)sub_14D0170((_DWORD)a1, (unsigned int)v215, 0, 0, a9, 0, 0, 0, 0, 0, 0) )
    {
      sub_15AEFC0(v179);
      if ( *((_QWORD *)&v215[0] + 1) )
      {
        v91 = a1[2].m128i_i16[0];
        if ( v91 != 418 && v91 != 5 )
        {
LABEL_33:
          sub_1564840(&v227, a1, &a1[1], 14);
          sub_AE9DF0((unsigned __int8 **)&v227, 5, 4u);
          sub_AEA040((__int64)&v227);
        }
      }
      if ( HIDWORD(v215[1]) )
LABEL_150:
        free(*(void **)&v215[1]);
    }
    else
    {
      if ( *((_QWORD *)&v215[0] + 1) )
      {
        v27 = a1[2].m128i_i16[0];
        if ( v27 != 418 && v27 != 5 )
          goto LABEL_33;
      }
      v75 = v179;
      v76 = (__int64)(v180 + 1);
      v179[7].m128_u64[0] = *(_QWORD *)&v215[0];
      sub_E907B0((__int64)&v75[7].m128_i64[1], v76);
      v77 = HIDWORD(v215[1]);
      a8 = (__m128)_mm_load_si128(&v216);
      v75[9] = a8;
      if ( v77 )
        goto LABEL_150;
    }
    a1[127].m128i_i8[8] = v23;
  }
  v180 = (void ***)a1;
  v198 = 0;
  v196 = 0;
  v28 = _mm_loadh_ps((const double *)&v178);
  v197 = *((void ***)v178 + 1);
  v200[0] = v28;
  v180 = &v197;
  v29 = a1[2].m128i_i16[0];
  v30 = (__m128i)_mm_loadh_ps((const double *)&v180);
  v200[1] = v30;
  if ( v29 == 5 )
  {
    v56 = (__int64 *)a1->m128i_i64[1];
    v31 = nullptr;
    v198 = a1[1].m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v56, a1[1].m128i_i32);
    v196 = a1[2].m128i_u32[2];
    v179[10].m128_i32[1] = v196;
    v29 = a1[2].m128i_i16[0];
    if ( v29 != 47 )
      goto LABEL_38;
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
    {
      LODWORD(ptr) = 0;
      v227 = (__m128i *)&v228.m128i_u64[1];
      v228.m128i_i64[0] = 0x1000000000LL;
      LODWORD(v215[0]) = 0;
      if ( (unsigned __int8)sub_15569D0(a1, 1, &ptr, &v227, v215, 0) )
      {
        LODWORD(v215[0]) = 0;
        v131 = 0;
        LODWORD(ptr) = 0;
      }
      else
      {
        v131 = LODWORD(v215[0]);
      }
      sub_149F400((__int64)v200, v198, v196, (v131 << 32) | (unsigned int)ptr, 0);
      v132 = (unsigned __int8 *)v227;
      v133 = (unsigned __int8 *)v227 + 72 * v228.m128i_u32[0];
      if ( v227 != (__m128i *)v133 )
      {
        do
        {
          while ( 1 )
          {
            v133 -= 72;
            if ( *((_DWORD *)v133 + 11) )
              break;
            if ( v132 == v133 )
              goto LABEL_242;
          }
          free(*((void **)v133 + 4));
        }
        while ( v132 != v133 );
LABEL_242:
        v133 = (unsigned __int8 *)v227;
      }
      if ( v133 != (unsigned __int8 *)&v228.m128i_u64[1] )
        free(v133);
LABEL_245:
      v29 = a1[2].m128i_i16[0];
      v31 = nullptr;
      goto LABEL_38;
    }
  }
  else
  {
    v31 = nullptr;
    if ( v29 != 418 )
      goto LABEL_38;
    v92 = sub_1565590(a1, &a1[1]);
    v93 = a1[1].m128i_i32[0];
    v94 = (__int64 *)a1->m128i_i64[1];
    v31 = (_QWORD *)v92;
    v95 = a1[1].m128i_i32[1];
    if ( !v95 )
      v95 = a1[1].m128i_i32[0];
    a1[2].m128i_i32[2] = v95;
    sub_14634E0(v94, a1[1].m128i_i32);
    v96 = *((_DWORD *)v31 + 8);
    v196 = v93;
    if ( v96 == 5 )
    {
      sub_1CBAB60(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608));
      v96 = *((_DWORD *)v31 + 8);
      if ( v96 == 5 )
      {
        sub_149F400((__int64)v200, v198, v196, *(_QWORD *)((char *)v31 + 36), 1u);
        goto LABEL_245;
      }
    }
    if ( (v96 & 0xFFFFFFFD) != 0 && (unsigned int)(v96 - 4) > 1 )
    {
      v147 = v179[7].m128_i32[0];
      if ( (!v147 || !v179[7].m128_i32[1]) && !v179[7].m128_u64[1] )
        v147 = v93;
      sub_1564820(&v227, a1, *((unsigned int *)v31 + 9), 1895);
      sub_AE9DF0((unsigned __int8 **)&v227, v31[1], 5u);
      sub_AE9DF0((unsigned __int8 **)&v227, *((int *)v31 + 8), 2u);
      *(_QWORD *)&v215[0] = __PAIR64__(v93, v147);
      BYTE8(v215[0]) = 1;
      sub_AEC610((__int64 *)&v227, (__int64 *)v215);
      sub_AEA040((__int64)&v227);
      sub_15AEFC0(v179);
      LOWORD(v227) = 63;
      sub_15680D0(a1, &v227, 1, 2);
      goto LABEL_103;
    }
    v29 = a1[2].m128i_i16[0];
LABEL_38:
    if ( (unsigned __int16)(v29 - 406) <= 8u )
    {
LABEL_39:
      m128i_i64 = (__int64)a11;
      sub_14AB020((__int64)a1, a11, v30, a8);
      goto LABEL_40;
    }
  }
  m128i_i64 = 0;
  if ( (unsigned int)sub_155CBC0(a1, 0, 0) )
    goto LABEL_39;
LABEL_40:
  v185 = *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL;
  v36 = *(_QWORD *)(a1->m128i_i64[1] + 56);
  v37 = *(_BYTE *)(v36 + 1) & 8;
  if ( v37 )
  {
    v33 = (__int64)v179;
    if ( (v179->m128_i8[4] & 8) == 0 || (v33 = a1[2].m128i_u16[0], (_WORD)v33 != 66) && (_WORD)v33 != 27 )
    {
      m128i_i64 = a10;
      switch ( a10 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 4u:
        case 6u:
        case 7u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
          goto LABEL_51;
        case 3u:
        case 5u:
        case 8u:
        case 0xDu:
          goto LABEL_53;
        default:
          goto LABEL_331;
      }
    }
    goto LABEL_44;
  }
  m128i_i64 = a10;
  switch ( a10 )
  {
    case 0u:
    case 1u:
    case 2u:
    case 4u:
    case 6u:
    case 7u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
LABEL_51:
      if ( *(_DWORD *)(v36 + 64) && a1[134].m128i_i8[10] )
        goto LABEL_53;
      v36 = a1[2].m128i_u16[0];
      if ( (_WORD)v36 == 24 )
        goto LABEL_85;
      LOBYTE(v33) = a10 != 12;
      LOBYTE(v36) = (_WORD)v36 == 62;
      if ( ((unsigned __int8)v36 & (a10 != 12)) != 0 )
      {
        if ( v37 )
          goto LABEL_85;
      }
      if ( !(unsigned __int8)sub_14B32A0(
                               a1,
                               m128i_i64,
                               v36,
                               v33,
                               v34,
                               v35,
                               a1[1].m128i_i64[0],
                               a1[1].m128i_i64[1],
                               a1[2].m128i_i64[0]) )
        goto LABEL_193;
      v53 = a1->m128i_i64[1];
      v54 = *(_QWORD *)(v53 + 2944);
      if ( v54 < *(unsigned int *)(v53 + 2912) )
      {
        v55 = *(_QWORD *)(v53 + 2904) + 24 * v54;
        v36 = *(unsigned __int16 *)(v55 + 16);
        if ( (_WORD)v36 != 24 )
          goto LABEL_83;
        goto LABEL_85;
      }
      m128i_i64 = 1;
      if ( *(_WORD *)(sub_14180A0(v53, 1u) + 16) == 24 )
        goto LABEL_85;
      v156 = a1->m128i_i64[1];
      v157 = *(_QWORD *)(v156 + 2944);
      if ( v157 < *(unsigned int *)(v156 + 2912) )
      {
        v55 = *(_QWORD *)(v156 + 2904) + 24 * v157;
        v36 = *(unsigned __int16 *)(v55 + 16);
LABEL_83:
        if ( (_WORD)v36 == 62 )
        {
LABEL_85:
          m128i_i64 = v179[16].m128_u32[2];
          if ( !(_DWORD)m128i_i64 )
            goto LABEL_86;
          sub_1564820(&v227, a1, a1[1].m128i_u32[0], 1676);
          BYTE8(v215[0]) = 1;
          LODWORD(v215[0]) = v179[16].m128_i32[2];
          DWORD1(v215[0]) = v215[0];
          sub_AEC610((__int64 *)&v227, (__int64 *)v215);
          sub_AEA040((__int64)&v227);
          m128i_i64 = (__int64)&v227;
          LOWORD(v227) = 63;
          sub_15680D0(a1, &v227, 1, 2);
          goto LABEL_44;
        }
      }
      else
      {
        m128i_i64 = 1;
        if ( *(_WORD *)(sub_14180A0(v156, 1u) + 16) == 62 )
          goto LABEL_85;
        v158 = a1->m128i_i64[1];
        v159 = *(_QWORD *)(v158 + 2944);
        v36 = *(unsigned int *)(v158 + 2912);
        if ( v159 < v36 )
        {
          v55 = *(_QWORD *)(v158 + 2904) + 24 * v159;
        }
        else
        {
          m128i_i64 = 1;
          v55 = sub_14180A0(v158, 1u);
        }
      }
      if ( (unsigned __int8)sub_14B32A0(
                              a1,
                              m128i_i64,
                              v36,
                              v33,
                              v51,
                              v52,
                              *(_QWORD *)v55,
                              *(_QWORD *)(v55 + 8),
                              *(_QWORD *)(v55 + 16)) )
        goto LABEL_85;
LABEL_193:
      if ( !(unsigned __int8)sub_14B32A0(
                               a1,
                               m128i_i64,
                               v36,
                               v33,
                               v51,
                               v52,
                               a1[1].m128i_i64[0],
                               a1[1].m128i_i64[1],
                               a1[2].m128i_i64[0]) )
        goto LABEL_229;
      v97 = a1->m128i_i64[1];
      v98 = *(_QWORD *)(v97 + 2944);
      if ( v98 >= *(unsigned int *)(v97 + 2912) )
      {
        v99 = sub_14180A0(v97, 1u);
        v97 = a1->m128i_i64[1];
      }
      else
      {
        v99 = *(_QWORD *)(v97 + 2904) + 24 * v98;
      }
      if ( *(_WORD *)(v99 + 16) != 20 )
      {
        v100 = *(_QWORD *)(v97 + 2944);
        if ( v100 >= *(unsigned int *)(v97 + 2912) )
        {
          v101 = sub_14180A0(v97, 1u);
          v97 = a1->m128i_i64[1];
        }
        else
        {
          v101 = *(_QWORD *)(v97 + 2904) + 24 * v100;
        }
        if ( *(_WORD *)(v101 + 16) != 158 )
        {
          v102 = *(_QWORD *)(v97 + 2944);
          if ( v102 >= *(unsigned int *)(v97 + 2912) )
          {
            v103 = sub_14180A0(v97, 1u);
            v97 = a1->m128i_i64[1];
          }
          else
          {
            v103 = *(_QWORD *)(v97 + 2904) + 24 * v102;
          }
          if ( (unsigned __int16)(*(_WORD *)(v103 + 16) - 406) > 8u )
          {
            v104 = *(_QWORD *)(v97 + 2944);
            if ( v104 >= *(unsigned int *)(v97 + 2912) )
              m128i_i64 = sub_14180A0(v97, 1u);
            else
              m128i_i64 = *(_QWORD *)(v97 + 2904) + 24 * v104;
            if ( !(unsigned int)sub_14A7DC0(a1, m128i_i64)
              && !sub_14A8FA0(
                    (__int64)a1,
                    m128i_i64,
                    v105,
                    v106,
                    v107,
                    v108,
                    a1[1].m128i_i64[0],
                    a1[1].m128i_i64[1],
                    a1[2].m128i_i64[0]) )
            {
LABEL_229:
              v33 = (unsigned __int8)a10;
              if ( ((1LL << a10) & 0xDC3) != 0 )
              {
                if ( a1[2].m128i_i16[0] == 63 )
                {
                  if ( !v179[16].m128_i32[2] )
                  {
                    LODWORD(v180) = 1;
                    goto LABEL_45;
                  }
LABEL_44:
                  LODWORD(v180) = 3;
                  goto LABEL_45;
                }
                if ( (a1[2].m128i_i8[2] & 1) != 0 )
                {
                  m128i_i64 = 0;
                  if ( !sub_14A0820((__int64)a1, 0) )
                  {
                    v127 = a1[2].m128i_i16[0] == 63;
                    LODWORD(v180) = v179[16].m128_i32[2] == 0 ? 1 : 3;
                    if ( !v127 )
                    {
                      v128 = (const char *)sub_15AC9B0(v181, *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL);
                      v129 = 0;
                      v130 = v128;
                      if ( v128 )
                        v129 = j__strlen(v128);
                      sub_1569A00(a1, 63, 15, v130, v129);
                      m128i_i64 = (__int64)a1[1].m128i_i64;
                      sub_1479990(a1->m128i_i64[1], a1 + 1, 1u);
                      a1[2].m128i_i16[0] = 63;
                    }
                    goto LABEL_45;
                  }
                }
              }
LABEL_53:
              LODWORD(v180) = 0;
              goto LABEL_54;
            }
            v97 = a1->m128i_i64[1];
          }
        }
      }
      v109 = a1[5].m128i_i64[0];
      v110 = _mm_loadu_si128(a1 + 3);
      m128i_i64 = 0;
      v111 = _mm_loadu_si128(a1 + 4);
      v112 = _mm_loadu_si128(a1 + 1);
      v227 = a1;
      v230 = v109;
      LODWORD(v109) = a1[2].m128i_i32[0];
      v113 = a1[5].m128i_i32[2];
      v228 = v110;
      v232 = v109;
      v114 = a1[169].m128i_u32[2];
      v229 = v111;
      v233 = v114;
      LOWORD(v114) = a1[5].m128i_i16[6];
      v231 = v112;
      v234 = v113;
      v235 = v114;
      sub_1418D30(v97, 0);
      v236 = 1;
      while ( (unsigned __int8)sub_14B32A0(
                                 a1,
                                 m128i_i64,
                                 v115,
                                 v116,
                                 v117,
                                 v118,
                                 a1[1].m128i_i64[0],
                                 a1[1].m128i_i64[1],
                                 a1[2].m128i_i64[0]) )
      {
        v119 = (__int64 *)a1->m128i_i64[1];
        m128i_i64 = (__int64)a1[1].m128i_i64;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v119, a1[1].m128i_i32);
      }
      v180 = (void ***)v215;
      break;
    case 3u:
    case 5u:
    case 8u:
    case 0xDu:
      goto LABEL_53;
    default:
      goto LABEL_331;
  }
LABEL_211:
  while ( 2 )
  {
    v120 = a1[2].m128i_i16[0];
    if ( v120 == 20 )
      goto LABEL_216;
    while ( 1 )
    {
      do
      {
        if ( v120 == 158 )
        {
          v152 = a1->m128i_i64[1];
          v153 = *(_QWORD *)(v152 + 2944);
          if ( v153 >= *(unsigned int *)(v152 + 2912) )
          {
            m128i_i64 = 1;
            v154 = sub_14180A0(v152, 1u);
          }
          else
          {
            v154 = *(_QWORD *)(v152 + 2904) + 24 * v153;
          }
          if ( *(_WORD *)(v154 + 16) == 22 )
          {
            v155 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v155, a1[1].m128i_i32);
            sub_146A990((__int64)a1);
            LOWORD(v215[0]) = 23;
            goto LABEL_285;
          }
          v120 = a1[2].m128i_i16[0];
        }
        v121 = v120 - 406;
        if ( (unsigned __int16)(v120 - 406) > 8u )
          goto LABEL_287;
        v122 = a1[1].m128i_i32[0];
        v123 = (__int64 *)a1->m128i_i64[1];
        if ( v121 <= 6u )
        {
          a1[2].m128i_i32[2] = v122;
          m128i_i64 = (__int64)a1[1].m128i_i64;
          v149 = byte_26171C0[v121];
          sub_14634E0(v123, a1[1].m128i_i32);
          if ( v149 )
          {
            v150 = (__int64)v180;
            *(_QWORD *)&v215[1] = a1;
            *(_QWORD *)&v215[0] = a1 + 122;
            v151 = a1[122].m128i_i8[0];
            a1[122].m128i_i8[0] = 1;
            BYTE8(v215[0]) = v151;
            WORD6(v215[1]) = 63;
            DWORD2(v215[1]) = 1507350;
            v216.m128i_i64[0] = (__int64)sub_146A990;
            v216.m128i_i64[1] = 0;
            v217 = nullptr;
            if ( !(unsigned __int8)sub_149E920(v150) )
              sub_156E210(v180);
            **(_BYTE **)&v215[0] = BYTE8(v215[0]);
          }
          goto LABEL_211;
        }
        a1[2].m128i_i32[2] = v122;
        m128i_i64 = (__int64)a1[1].m128i_i64;
        sub_14634E0(v123, a1[1].m128i_i32);
        v120 = a1[2].m128i_i16[0];
      }
      while ( v120 != 20 );
LABEL_216:
      v124 = a1->m128i_i64[1];
      v125 = *(_QWORD *)(v124 + 2944);
      if ( v125 < *(unsigned int *)(v124 + 2912) )
        break;
      m128i_i64 = 1;
      if ( *(_WORD *)(sub_14180A0(v124, 1u) + 16) == 20 )
        goto LABEL_284;
      v120 = a1[2].m128i_i16[0];
    }
    if ( *(_WORD *)(*(_QWORD *)(v124 + 2904) + 24 * v125 + 16) != 20 )
      goto LABEL_218;
LABEL_284:
    sub_14789E0((__int64)a1);
    LOWORD(v215[0]) = 21;
LABEL_285:
    m128i_i64 = (__int64)v180;
    if ( (unsigned __int8)sub_15680D0(a1, v180, 1, 1) )
      continue;
    break;
  }
  v120 = a1[2].m128i_i16[0];
LABEL_287:
  if ( v120 != 24 && v120 != 62 )
  {
LABEL_218:
    sub_147B460((__int64)&v227);
    LODWORD(v180) = 0;
    goto LABEL_54;
  }
  sub_147B460((__int64)&v227);
LABEL_86:
  LODWORD(v180) = 2;
LABEL_45:
  v35 = *a11;
  v34 = a11[1];
  v38 = (_DWORD)v34 != 0 && (_DWORD)v35 != 0;
  if ( v38 )
  {
    if ( a11[4] && (v39 = **((_QWORD **)a11 + 1)) != 0 && (*(_BYTE *)(v39 + 35) & 2) != 0 )
    {
      LODWORD(v190) = a11[1];
      LODWORD(v189) = v35;
      sub_1564820(v215, a1, (unsigned int)v35, 1716);
      sub_AE9DF0((unsigned __int8 **)v215, v39, 0x10u);
      sub_FC70F0((__int64)&v227, (__int64)v215);
      v40 = (unsigned int)v189;
      v41 = (unsigned int)v190;
    }
    else
    {
      LODWORD(v190) = a11[1];
      LODWORD(v189) = v35;
      v38 = 0;
      sub_1564820(&v227, a1, (unsigned int)v35, 1558);
      v41 = (unsigned int)v190;
      v40 = (unsigned int)v189;
    }
    ptr = (void *)__PAIR64__(v41, v40);
    v192 = v40;
    LODWORD(v190) = v41;
    LOBYTE(v207) = 1;
    sub_AEC610((__int64 *)&v227, (__int64 *)&ptr);
    v79 = v192;
    v80 = (unsigned int)v190;
    v189 = v201;
    v203 = v205;
    v204 = 0;
    v205[0] = 0;
    v201[0] = v191;
    v201[1] = v191;
    LOBYTE(v202) = 0;
    *(_QWORD *)((char *)&v202 + 4) = __PAIR64__((unsigned int)v190, v192);
    BYTE12(v202) = 1;
    v205[16] = 0;
    if ( v191 )
    {
      sub_14A2370((__int64 *)&v227, (unsigned __int64)v201);
      v79 = v192;
      v80 = (unsigned int)v190;
    }
    *(_QWORD *)((char *)&v207 + 4) = 0;
    v208 = v210;
    v190 = v210;
    BYTE12(v207) = 0;
    v209 = nullptr;
    LOBYTE(v210[0]) = 0;
    v211 = 0;
    ptr = (void *)__PAIR64__(v80, v79);
    LOBYTE(v207) = 1;
    sub_14A2370((__int64 *)&v227, (unsigned __int64)&ptr);
    if ( v208 != v190 )
      operator delete(v208);
    if ( v203 != v189 + 10 )
      operator delete(v203);
    sub_AEA040((__int64)&v227);
    if ( v38 )
      sub_AEA040((__int64)v215);
    m128i_i64 = (__int64)a11;
    sub_147F860((__int64)v212, (__int64)a11);
  }
LABEL_54:
  if ( v198 )
  {
    v42 = 0;
    v195 = 0;
    LOWORD(v201[0]) = 0;
    v202 = 0;
    if ( v31 )
    {
LABEL_56:
      v43 = *((_DWORD *)v31 + 11);
      if ( !*((_DWORD *)v31 + 8) || *((_BYTE *)v31 + 48) )
      {
        v44 = 1;
        v31 = nullptr;
        v45 = 1;
        v46 = nullptr;
        goto LABEL_59;
      }
      v65 = *v178;
      if ( (_DWORD)v180 == 1 && v65 == 3 )
      {
        sub_147CDF0((__int64)a1, (int *)v212, 0x616u, 0x6B4u, 1, 0, v42, *(double *)a8.m128_u64);
        v168 = a1[6].m128i_i64[0];
        m128i_i64 = *(_QWORD *)(v168 + 608);
        v176 = *((_DWORD *)v31 + 10);
        v175 = v43;
        v44 = 1;
        v174 = (_BYTE)v31 + 56;
        v173 = *((_DWORD *)v31 + 9);
        v172 = *((_DWORD *)v31 + 1);
        v171 = v31[3];
        v31 = nullptr;
        v46 = (__int8 *)sub_1CD8F00(
                          v168,
                          m128i_i64,
                          v178[4],
                          v178[5],
                          v181,
                          v193,
                          (__int64)v186,
                          v171,
                          v172,
                          v173,
                          v174,
                          v175,
                          v176,
                          (__int64)v212);
        v45 = v36;
        goto LABEL_59;
      }
      if ( !(_DWORD)v180 || (_DWORD)v180 == 3 && !v65 )
      {
        v46 = nullptr;
        sub_147CDF0((__int64)a1, (int *)v212, 0x616u, 0x6B4u, 1, 0, v42, *(double *)a8.m128_u64);
        v45 = 1;
        m128i_i64 = (unsigned int)v180;
        v31 = (_QWORD *)sub_1CDF1F0(
                          a1[6].m128i_i64[0],
                          (_DWORD)v180,
                          v181,
                          v193,
                          (_DWORD)v186,
                          *(_DWORD *)v31,
                          v31[3],
                          *((_DWORD *)v31 + 1),
                          *((_DWORD *)v31 + 9),
                          (unsigned __int8)v31 + 56,
                          v43,
                          *((_DWORD *)v31 + 10));
        v44 = v36;
        goto LABEL_59;
      }
      ptr = (char *)&v207 + 8;
      *(_QWORD *)&v207 = 0x400000000LL;
      if ( v65 == 3 )
      {
        if ( (_DWORD)v180 == 3 )
        {
          sub_1564820(&v227, a1, v179[16].m128_u32[2], 1677);
          sub_AEA040((__int64)&v227);
          v67 = a1[6].m128i_i64[0];
          v68 = 0;
          p_ptr = nullptr;
          v197 = nullptr;
        }
        else
        {
          v140 = sub_13DC060(
                   v178[5],
                   0,
                   *(__int64 **)(a1->m128i_i64[1] + 88),
                   *(_QWORD *)(a1->m128i_i64[1] + 56),
                   v42,
                   *(double *)a8.m128_u64);
          sub_1564820(&v227, a1, *((unsigned int *)v31 + 1), 1663);
          v187 = v215;
          v141 = v178[5];
          BYTE8(v215[0]) = 1;
          LODWORD(v215[0]) = v141;
          DWORD1(v215[0]) = v141;
          sub_AEC610((__int64 *)&v227, (__int64 *)v215);
          v142 = j__strlen("<>");
          sub_9EC740((__int64)v187, v140, "<>", v142, 0);
          v143 = (__int64)v187;
          if ( LODWORD(v215[0]) && DWORD1(v215[0]) )
          {
            sub_14A2370((__int64 *)&v227, (unsigned __int64)v187);
            v143 = (__int64)v187;
          }
          if ( *((_QWORD *)&v215[1] + 1) != v143 + 40 )
            operator delete(*((void **)&v215[1] + 1));
          sub_AEA040((__int64)&v227);
          v144 = sub_1CB4650(a1[6].m128i_i64[0], 0, 0, v178[5], v140, v140, 0, 0, 0);
          v145 = (unsigned int)v207;
          v146 = (unsigned int)v207 + 1LL;
          if ( v146 > DWORD1(v207) )
          {
            v187 = (_OWORD *)v144;
            sub_2237220(&ptr, (char *)&v207 + 8, v146, 8);
            v145 = (unsigned int)v207;
            v144 = (__int64)v187;
          }
          *((_QWORD *)ptr + v145) = v144;
          p_ptr = &ptr;
          v197 = &ptr;
          v67 = a1[6].m128i_i64[0];
          v68 = (unsigned int)(v207 + 1);
          LODWORD(v207) = v207 + 1;
LABEL_135:
          p_ptr = (void **)*p_ptr;
        }
      }
      else
      {
        p_ptr = v197;
        v67 = a1[6].m128i_i64[0];
        v68 = 0;
        if ( v197 )
        {
          v68 = *((unsigned int *)v197 + 2);
          goto LABEL_135;
        }
      }
      v69 = v68;
      m128i_i64 = *(_QWORD *)(v67 + 608);
      v46 = (__int8 *)sub_1CFC180(
                        v67,
                        m128i_i64,
                        v181,
                        (_DWORD)v180,
                        v193,
                        v179[16].m128_i32[3],
                        (__int64)v186,
                        (__int64)v31,
                        (__int64)v212,
                        (__int64)p_ptr,
                        v69,
                        (__int64)v201);
      v45 = v36;
      if ( ptr != (char *)&v207 + 8 )
        free(ptr);
      v44 = 1;
      v31 = nullptr;
LABEL_59:
      if ( (_DWORD)v184 )
      {
        m128i_i64 = v225;
        sub_1818070(v220, v225, 0);
        v226 = 0;
        if ( !(_DWORD)v180 )
        {
          if ( *v178 == 1 && (_DWORD)v223 )
            sub_1806CB0(v220, v182 + 1);
          goto LABEL_61;
        }
      }
      if ( (_DWORD)v180 != 2 )
        goto LABEL_61;
      if ( !LOBYTE(v201[0]) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
        {
          sub_14B2450(a1, v193, v191, (__int64)v212, v181, v46, *(double *)v42.m128i_i64, a8);
          goto LABEL_61;
        }
        v57 = v46;
        if ( BYTE1(v201[0]) )
          v57 = *((__int8 **)&v202 + 1);
        sub_14959A0((__int64)a1, v193, v181, v57, *(double *)v42.m128i_i64, a8);
        if ( BYTE1(v201[0])
          && !(unsigned __int8)sub_17A6440(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), v46, v201) )
        {
LABEL_102:
          sub_15AEFC0(v179);
          goto LABEL_103;
        }
LABEL_61:
        if ( v45 )
        {
          *(_QWORD *)&v215[0] = 0;
          if ( v44 )
            goto LABEL_102;
LABEL_63:
          v47 = &v196;
          if ( !v196 )
            v47 = &v193;
          if ( !(unsigned __int8)sub_15AD410(
                                   (_DWORD)v179,
                                   28,
                                   v193,
                                   *v47,
                                   (unsigned int)v215,
                                   (unsigned int)&ptr,
                                   (__int64)v31,
                                   v185) )
          {
LABEL_66:
            if ( (_DWORD)v180 != 2 )
              goto LABEL_67;
LABEL_119:
            if ( ((*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 || ((1LL << a10) & 0xDC3) != 0)
              && (*v178 || !sub_14A0820((__int64)a1, 0))
              && a1[2].m128i_i16[0] != 63 )
            {
              v62 = (const char *)sub_15AC9B0(v181, *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL);
              v63 = 0;
              v64 = v62;
              if ( v62 )
                v63 = j__strlen(v62);
              sub_1569A00(a1, 63, 15, v64, v63);
              sub_1479990(a1->m128i_i64[1], a1 + 1, 1u);
              a1[2].m128i_i16[0] = 63;
            }
LABEL_67:
            if ( v183 )
              *v183 = *v183 & 0xFFFFFFF7FFFFFE00LL | 0x71;
            sub_147A450(v212);
            if ( v226 )
            {
              sub_1818070(v220, v225, 0);
              v226 = 0;
            }
            v48 = (__int64 *)v222;
            v49 = (__int64 *)&v222[80 * (unsigned int)v223];
            if ( v222 != (char *)v49 )
            {
              do
              {
                v50 = v48;
                v48 += 10;
                sub_15B6850(v50);
              }
              while ( v49 != v48 );
              goto LABEL_73;
            }
            goto LABEL_74;
          }
LABEL_118:
          sub_1564820(&v227, a1, v193, (unsigned int)ptr);
          sub_149E970((unsigned __int8 **)&v227, *(__int64 *)&v215[0]);
          sub_AEA040((__int64)&v227);
          if ( (_DWORD)v180 == 2 )
            goto LABEL_119;
          goto LABEL_67;
        }
        sub_181D940(a1[6].m128i_i64[0], v46, v212);
        v60 = v196;
        *(_QWORD *)&v215[0] = 0;
        if ( !v44 )
          goto LABEL_63;
LABEL_115:
        v61 = &v196;
        if ( !v60 )
          v61 = &v193;
        if ( !(unsigned __int8)sub_15AD890(
                                 (_DWORD)v179,
                                 v181,
                                 v193,
                                 *v61,
                                 (unsigned int)v215,
                                 (unsigned int)&ptr,
                                 (__int64)v46,
                                 v195) )
          goto LABEL_66;
        goto LABEL_118;
      }
      v184 = (void **)v31;
      while ( (unsigned __int8)sub_14B32A0(
                                 a1,
                                 m128i_i64,
                                 v36,
                                 v33,
                                 v34,
                                 v35,
                                 a1[1].m128i_i64[0],
                                 a1[1].m128i_i64[1],
                                 a1[2].m128i_i64[0]) )
      {
        v70 = (__int64 *)a1->m128i_i64[1];
        m128i_i64 = (__int64)a1[1].m128i_i64;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v70, a1[1].m128i_i32);
      }
      v31 = v184;
      v217 = &v219;
      *((_QWORD *)&v215[0] + 1) = (char *)&v215[1] + 8;
      *(_QWORD *)&v215[1] = 0x200000000LL;
      v218 = 0x200000000LL;
      v184 = (void **)v215;
      *(_QWORD *)&v215[0] = 0;
      v216.m128i_i64[1] = v188;
      sub_149F7A0((__int64)a1, (__int64)v215, v191);
      v71 = a1[2].m128i_i16[0];
      v72 = v184;
      if ( v71 == 62 )
      {
        v186 = v184;
        sub_146B5E0(&v199, (__int64)a1, 0x28u, 1, 0);
        v137 = sub_14A1670((__int64)a1, (__int64)v46, 1, v181 == 27);
        v138 = a1[6].m128i_i64[0];
        *((_QWORD *)&v207 + 1) = v137;
        v184 = (void **)sub_17A2E50(v138, *(_QWORD *)(v138 + 608), v46);
        sub_14AD570((__int64)a1, 0, v42, a8);
        sub_17A2EA0(a1[6].m128i_i64[0], v184);
        if ( a1[2].m128i_i16[0] == 24 )
        {
          v184 = v186;
          sub_14A1970((__m128 *)a1, *((char **)&v207 + 1));
          v72 = v184;
          if ( v199 )
          {
            sub_1564F70(v199);
            v72 = v184;
          }
          goto LABEL_146;
        }
        v139 = sub_13DC060(
                 a1[2].m128i_i32[2],
                 0,
                 *(__int64 **)(a1->m128i_i64[1] + 88),
                 *(_QWORD *)(a1->m128i_i64[1] + 56),
                 v42,
                 *(double *)a8.m128_u64);
        v184 = (void **)&v227;
        sub_1564820(&v227, a1, v139, 1622);
        sub_AEA040((__int64)v184);
        sub_14A1970((__m128 *)a1, *((char **)&v207 + 1));
        v72 = v186;
        if ( v199 )
        {
          v184 = v186;
          sub_1564F70(v199);
          v72 = v184;
        }
      }
      else if ( v71 == 24 )
      {
LABEL_146:
        v186 = v72;
        ptr = &a1[122];
        v73 = a1[122].m128i_i8[0];
        a1[122].m128i_i8[0] = 1;
        LOBYTE(v207) = v73;
        WORD2(v208) = 63;
        v184 = &ptr;
        *((_QWORD *)&v207 + 1) = a1;
        LODWORD(v208) = 1638424;
        v209 = sub_1478A90;
        v210[0] = 0;
        v210[1] = 0;
        sub_149FA40((__int64)&ptr);
        sub_156E210(v184);
        v74 = v186;
        if ( a1[2].m128i_i16[0] == 189 )
        {
          v228.m128i_i64[0] = (__int64)&v229;
          v228.m128i_i64[1] = 0x200000000LL;
          v230 = v188;
          v231.m128i_i64[0] = (__int64)&v232;
          v231.m128i_i64[1] = 0x200000000LL;
          v184 = (void **)&v227;
          v227 = nullptr;
          sub_1490230(a1, (__int64)&v227, 0, 0, v42, a8);
          sub_147A450(v184);
          v74 = v186;
        }
        *(_BYTE *)ptr = v207;
        sub_147A450(v74);
        goto LABEL_61;
      }
      sub_147A450(v72);
      goto LABEL_61;
    }
    v81 = *v178;
    if ( (_DWORD)v180 == 1 && v81 == 3 )
    {
      sub_1481E50((__int64)a1, (__int64)v212, 0);
      v166 = sub_1CDA170(
               a1[6].m128i_i64[0],
               *(_QWORD *)(a1[6].m128i_i64[0] + 608),
               v178[4],
               v178[5],
               v181,
               v193,
               (__int64)v186,
               v198,
               v196,
               (__int64)v212);
      v46 = (__int8 *)v166;
      v45 = v167;
      if ( (_DWORD)v184 )
      {
        v44 = 1;
        sub_1818070(v220, v225, 0);
        v226 = 0;
        goto LABEL_61;
      }
      if ( v167 )
      {
        *(_QWORD *)&v215[0] = 0;
        goto LABEL_102;
      }
      sub_181D940(a1[6].m128i_i64[0], v166, v212);
      v60 = v196;
      *(_QWORD *)&v215[0] = 0;
      goto LABEL_115;
    }
    if ( v81 && (_DWORD)v180 == 3 )
    {
      v160 = 0;
      sub_147CDF0((__int64)a1, (int *)v212, 0x616u, 0x6B4u, 1, 0, (__m128i)0LL, *(double *)a8.m128_u64);
      v161 = a1[2].m128i_i16[0];
      if ( v161 == 27 )
      {
        v169 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v169, a1[1].m128i_i32);
        v160 = a1[2].m128i_i32[2];
        v161 = a1[2].m128i_i16[0];
      }
      if ( v161 == 66 )
      {
        sub_1564820(&v227, a1, a1[1].m128i_u32[0], 3857);
        sub_AEA040((__int64)&v227);
        LOWORD(v227) = 63;
        sub_15680D0(a1, &v227, 1, 2);
      }
      v162 = (__int64)v197;
      v163 = a1[6].m128i_i64[0];
      v164 = 0;
      if ( v197 )
      {
        v164 = *((unsigned int *)v197 + 2);
        v162 = (__int64)*v197;
      }
      v165 = v164;
      m128i_i64 = *(_QWORD *)(v163 + 608);
      v44 = 1;
      LODWORD(v187) = v179[16].m128_i32[2];
      v46 = (__int8 *)sub_1859EE0(
                        v163,
                        m128i_i64,
                        (_DWORD)v187,
                        v181,
                        v193,
                        (_DWORD)v186,
                        v198,
                        v196,
                        v160,
                        (__int64)v212,
                        v162,
                        v165);
      v45 = v36;
      goto LABEL_59;
    }
LABEL_169:
    if ( (unsigned int)((_DWORD)v180 - 1) > 1 )
      sub_147CDF0((__int64)a1, (int *)v212, 0x616u, 0x6B4u, 1, 0, v42, *(double *)a8.m128_u64);
    if ( (_DWORD)v180 == 2 )
    {
      if ( *v178 == 3 )
      {
        sub_1564840(&v227, a1, &a1[1], 1894);
        sub_AE9DF0((unsigned __int8 **)&v227, 1, 2u);
        *(_QWORD *)((char *)v215 + 12) = 0;
        BYTE4(v215[1]) = 0;
        v148 = v178[5];
        *((_QWORD *)&v215[1] + 1) = &v216.m128i_i64[1];
        v216.m128i_i64[0] = 0;
        v216.m128i_i8[8] = 0;
        LOBYTE(v218) = 0;
        LODWORD(v215[0]) = v148;
        DWORD1(v215[0]) = v148;
        BYTE8(v215[0]) = 1;
        if ( v148 )
        {
          sub_14A2370((__int64 *)&v227, (unsigned __int64)v215);
          if ( *((__m128i **)&v215[1] + 1) != (__m128i *)&v216.m128i_u64[1] )
            operator delete(*((void **)&v215[1] + 1));
        }
        v82 = 0;
        v83 = 0;
        sub_AEA040((__int64)&v227);
        LOBYTE(v227) = 0;
        v197 = nullptr;
        goto LABEL_173;
      }
      LOBYTE(v227) = 0;
      v126 = v197;
      v82 = 0;
      v83 = 0;
    }
    else
    {
      LOBYTE(v227) = 0;
      v82 = 0;
      v83 = 0;
      if ( !(_DWORD)v180 )
      {
LABEL_173:
        v84 = (__int64)v179;
        sub_147DC10((__int64)a1, (__int64)v212, (__int64)v179, (int)v180);
        v85 = a1[6].m128i_i64[0];
        v86 = *(_DWORD *)(v84 + 268);
        m128i_i64 = *(_QWORD *)(v85 + 608);
        v31 = nullptr;
        v170 = v83;
        v44 = 1;
        v46 = (__int8 *)sub_17D9210(
                          v85,
                          m128i_i64,
                          v181,
                          (_DWORD)v180,
                          v193,
                          (_DWORD)v186,
                          v198,
                          v196,
                          (__int64)v212,
                          (_DWORD)v187,
                          v86,
                          v82,
                          v170,
                          (__int64)&v195,
                          (__int64)&v227,
                          0,
                          0,
                          0,
                          0,
                          a10 == 2,
                          ((a10 - 7) & 0xFFFFFFFD) == 0,
                          a1[127].m128i_i32[0],
                          (__int64)v201);
        v45 = v36;
        if ( (_BYTE)v227 )
        {
          v87 = a1[6].m128i_i64[0];
          m128i_i64 = *(_QWORD *)(v87 + 608);
          v31 = (_QWORD *)sub_1CC55A0(v87, m128i_i64, v181, (_DWORD)v180, (_DWORD)v186, v198, v193, v196);
          v44 = v88;
          v36 = v177;
        }
        goto LABEL_59;
      }
      v126 = v197;
    }
    if ( v126 )
    {
      v82 = (__int64)*v126;
      v83 = *((unsigned int *)v126 + 2);
    }
    goto LABEL_173;
  }
  if ( v31 )
  {
    v36 = 0;
    v42 = 0;
    v195 = 0;
    LOWORD(v201[0]) = 0;
    v202 = 0;
    goto LABEL_56;
  }
  LODWORD(v189) = v179->m128_i32[0];
  if ( (((unsigned int)v189 >> 12) & 0x7F) == 0x45 )
  {
    if ( (_DWORD)v180 != 2 || a1[2].m128i_i16[0] != 62 )
      goto LABEL_154;
    LOWORD(v227) = 63;
    sub_15680D0(a1, &v227, 1, 2);
  }
  else
  {
    if ( (_DWORD)v180 == 2 )
    {
      v42 = 0;
      v195 = 0;
      LOWORD(v201[0]) = 0;
      v202 = 0;
      goto LABEL_169;
    }
    sub_1564820(&v227, a1, v193, 1540);
    v78 = sub_15AC9B0(v181, v185);
    sub_149E970((unsigned __int8 **)&v227, v78);
    sub_AEA040((__int64)&v227);
LABEL_154:
    LOWORD(v227) = 66;
    sub_15680D0(a1, &v227, 1, 1);
  }
LABEL_103:
  if ( v183 )
    *v183 = *v183 & 0xFFFFFFF7FFFFFE00LL | 0x71;
  sub_147A450(v212);
  if ( v226 )
  {
    sub_1818070(v220, v225, 0);
    v226 = 0;
  }
  v58 = (__int64 *)v222;
  v49 = (__int64 *)&v222[80 * (unsigned int)v223];
  if ( v222 != (char *)v49 )
  {
    do
    {
      v59 = v58;
      v58 += 10;
      sub_15B6850(v59);
    }
    while ( v49 != v58 );
LABEL_73:
    v49 = (__int64 *)v222;
  }
LABEL_74:
  if ( v49 != v182 + 4 )
    free(v49);
}
