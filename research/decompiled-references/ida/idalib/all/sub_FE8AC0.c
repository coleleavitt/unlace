__int64 __fastcall sub_FE8AC0(__int16 *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int16 v5; // si
  __int64 v6; // r14
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // r13
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  __m128i v12; // xmm0
  _BYTE *v13; // rax
  _BYTE *v14; // r15
  signed __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // r13
  _QWORD *v19; // rax
  _QWORD *v20; // rbp
  __m128i v21; // xmm0
  _BYTE *v22; // rax
  _BYTE *v23; // r15
  signed __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // r13
  _QWORD *v28; // rax
  _QWORD *v29; // rbp
  __m128i v30; // xmm0
  _BYTE *v31; // r12
  signed __int64 v32; // r13
  __int64 v33; // r14
  _BYTE *v34; // rax
  __int64 v35; // r14
  __int64 v36; // r12
  __int64 v37; // r13
  _QWORD *v38; // rax
  _QWORD *v39; // rbp
  __m128i v40; // xmm0
  _BYTE *v41; // rax
  _BYTE *v42; // r15
  signed __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // r14
  __int64 v46; // r13
  _QWORD *v47; // rax
  _QWORD *v48; // rbp
  __m128i v49; // xmm0
  _BYTE *v50; // r12
  size_t v51; // r13
  __int64 v52; // r14
  _BYTE *v53; // rax
  int v54; // eax
  _BYTE *v55; // rsi
  __int64 v56; // rdx
  __m128i v57; // xmm3
  int v58; // eax
  _BYTE *v59; // rsi
  __int64 v60; // rdx
  _BYTE *v61; // rsi
  __int64 v62; // rdx
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // r15
  __int64 v66; // rcx
  __int64 v67; // r14
  _QWORD *v68; // rax
  _QWORD *v69; // rbp
  __m128i v70; // xmm0
  _BYTE *v71; // rsi
  size_t v72; // r14
  __int64 v73; // r12
  _BYTE *v74; // rax
  __int64 v75; // rax
  __int64 v76; // r15
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rbp
  __m128i v81; // xmm0
  _BYTE *v82; // rax
  _BYTE *v83; // r12
  signed __int64 v84; // r14
  char v85; // al
  __int64 v86; // r15
  __int64 v87; // rax
  unsigned __int64 v88; // r14
  unsigned __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rbp
  __m128i v92; // xmm0
  _BYTE *v93; // rax
  _BYTE *v94; // r12
  signed __int64 v95; // r14
  int *v96; // rsi
  int *v97; // rax
  int *i; // rcx
  int *j; // rcx
  __int64 v100; // rdx
  __int64 v101; // rbp
  __int64 v102; // r15
  __int64 v103; // r12
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  __m128i v106; // xmm0
  __int64 v107; // r14
  __int64 v108; // r12
  __int64 v109; // rdx
  _QWORD *v110; // rdi
  _BYTE *v111; // rsi
  __int64 v112; // rdx
  _BYTE *v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // r15
  __int64 v117; // r12
  __int64 v118; // r14
  _QWORD *v119; // rax
  __m128i v120; // xmm0
  _BYTE *v121; // rax
  _BYTE *v122; // rsi
  signed __int64 v123; // r14
  _BYTE *v124; // rsi
  __int64 v125; // rdx
  _BYTE *v126; // rsi
  __int64 v127; // rdx
  __int16 v128; // ax
  __int64 v129; // rax
  void **v130; // r12
  void **v131; // rbx
  void **v132; // r12
  void **v133; // rbx
  char *v134; // rbx
  char *v135; // rdi
  char *v136; // r12
  char *v137; // rdi
  void **v138; // r12
  void **v139; // rbx
  void **v140; // r12
  void **v141; // rbx
  void **v142; // r12
  void **v143; // rbx
  void **v144; // r12
  void **v145; // rbx
  void **v146; // r12
  void **v147; // rbx
  void **v148; // r12
  void **v149; // rbx
  void **v150; // r12
  void **v151; // rbx
  void **v152; // r12
  void **v153; // rbx
  __m128i src; // [rsp+8h] [rbp-4A0h] BYREF
  __int64 v155; // [rsp+18h] [rbp-490h] BYREF
  __m128i v156; // [rsp+20h] [rbp-488h]
  __m128i v157; // [rsp+30h] [rbp-478h]
  __m128i v158; // [rsp+40h] [rbp-468h]
  __m128i v159; // [rsp+50h] [rbp-458h]
  __m128i v160; // [rsp+60h] [rbp-448h]
  __m128i v161; // [rsp+70h] [rbp-438h]
  __m128i v162; // [rsp+80h] [rbp-428h]
  __m128i v163; // [rsp+90h] [rbp-418h]
  __m128i v164; // [rsp+A0h] [rbp-408h]
  __m128i v165; // [rsp+B0h] [rbp-3F8h]
  __m128i v166; // [rsp+C0h] [rbp-3E8h]
  __m128i v167; // [rsp+D0h] [rbp-3D8h]
  __m128i v168; // [rsp+E0h] [rbp-3C8h]
  int v169; // [rsp+F0h] [rbp-3B8h]
  __int16 v170; // [rsp+F4h] [rbp-3B4h]
  __int64 *v171; // [rsp+108h] [rbp-3A0h] BYREF
  _OWORD v172[13]; // [rsp+110h] [rbp-398h] BYREF
  int v173; // [rsp+1E0h] [rbp-2C8h]
  __int16 v174; // [rsp+1E4h] [rbp-2C4h]
  int v175; // [rsp+1E8h] [rbp-2C0h]
  __m128i v176; // [rsp+1F0h] [rbp-2B8h]
  char v177; // [rsp+200h] [rbp-2A8h]
  void *v178[2]; // [rsp+208h] [rbp-2A0h]
  char *v179; // [rsp+218h] [rbp-290h]
  void *v180[2]; // [rsp+220h] [rbp-288h]
  char *v181; // [rsp+230h] [rbp-278h]
  void *v182[2]; // [rsp+238h] [rbp-270h]
  char *v183; // [rsp+248h] [rbp-260h]
  void *v184[2]; // [rsp+250h] [rbp-258h]
  char *v185; // [rsp+260h] [rbp-248h]
  void *v186[2]; // [rsp+268h] [rbp-240h]
  char *v187; // [rsp+278h] [rbp-230h]
  __m128i v188; // [rsp+280h] [rbp-228h]
  int v189; // [rsp+290h] [rbp-218h]
  int v190; // [rsp+294h] [rbp-214h]
  void *v191; // [rsp+298h] [rbp-210h] BYREF
  _BYTE v192[16]; // [rsp+2A8h] [rbp-200h] BYREF
  void *v193; // [rsp+2B8h] [rbp-1F0h] BYREF
  _BYTE v194[16]; // [rsp+2C8h] [rbp-1E0h] BYREF
  void *v195; // [rsp+2D8h] [rbp-1D0h] BYREF
  _BYTE v196[16]; // [rsp+2E8h] [rbp-1C0h] BYREF
  void *v197; // [rsp+2F8h] [rbp-1B0h] BYREF
  _BYTE v198[16]; // [rsp+308h] [rbp-1A0h] BYREF
  void *v199[2]; // [rsp+318h] [rbp-190h]
  char *v200; // [rsp+328h] [rbp-180h]
  void *v201[2]; // [rsp+330h] [rbp-178h]
  char *v202; // [rsp+340h] [rbp-168h]
  char v203; // [rsp+348h] [rbp-160h]
  void *v204[2]; // [rsp+350h] [rbp-158h]
  char *v205; // [rsp+360h] [rbp-148h]
  __int64 v206; // [rsp+368h] [rbp-140h] BYREF
  int v207; // [rsp+370h] [rbp-138h] BYREF
  void *v208; // [rsp+378h] [rbp-130h]
  int *v209; // [rsp+380h] [rbp-128h]
  int *v210; // [rsp+388h] [rbp-120h]
  __int64 v211; // [rsp+390h] [rbp-118h]
  void *v212[2]; // [rsp+398h] [rbp-110h]
  __int64 v213; // [rsp+3A8h] [rbp-100h]
  void *v214; // [rsp+3B0h] [rbp-F8h] BYREF
  _BYTE v215[16]; // [rsp+3C0h] [rbp-E8h] BYREF
  void *v216; // [rsp+3D0h] [rbp-D8h] BYREF
  _QWORD v217[3]; // [rsp+3E0h] [rbp-C8h] BYREF
  char v218; // [rsp+3F8h] [rbp-B0h]
  __int64 v219; // [rsp+3FCh] [rbp-ACh]
  void *v220[2]; // [rsp+408h] [rbp-A0h]
  char *v221; // [rsp+418h] [rbp-90h]
  void *v222; // [rsp+420h] [rbp-88h] BYREF
  _WORD v223[12]; // [rsp+430h] [rbp-78h] BYREF
  void *v224; // [rsp+448h] [rbp-60h] BYREF
  _QWORD v225[10]; // [rsp+458h] [rbp-50h] BYREF

  LODWORD(v2) = 0;
  if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
    return (unsigned int)v2;
  v5 = *a1;
  src.m128i_i64[1] = (__int64)a1;
  if ( (unsigned int)sub_FDDA90(a2, v5 & 0x1FF) - 3 > 1 )
    return (unsigned int)v2;
  v156 = _mm_loadu_si128((const __m128i *)a2);
  v172[0] = v156;
  v157 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v172[1] = v157;
  v158 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v159 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  v160 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  v161 = _mm_loadu_si128((const __m128i *)(a2 + 80));
  v162 = _mm_loadu_si128((const __m128i *)(a2 + 96));
  v163 = _mm_loadu_si128((const __m128i *)(a2 + 112));
  v164 = _mm_loadu_si128((const __m128i *)(a2 + 128));
  v165 = _mm_loadu_si128((const __m128i *)(a2 + 144));
  v166 = _mm_loadu_si128((const __m128i *)(a2 + 160));
  v167 = _mm_loadu_si128((const __m128i *)(a2 + 176));
  v168 = _mm_loadu_si128((const __m128i *)(a2 + 192));
  v169 = *(_DWORD *)(a2 + 208);
  v170 = *(_WORD *)(a2 + 212);
  v172[2] = v158;
  v6 = *(_QWORD *)(a2 + 256);
  v7 = *(_QWORD *)(a2 + 248);
  v174 = v170;
  v8 = *(_DWORD *)(a2 + 216);
  v173 = v169;
  v175 = v8;
  LOBYTE(v8) = *(_BYTE *)(a2 + 240);
  v9 = v6 - v7;
  v172[10] = v166;
  v177 = v8;
  v172[5] = v161;
  v172[3] = v159;
  v172[4] = v160;
  v172[6] = v162;
  v172[7] = v163;
  v172[8] = v164;
  v172[9] = v165;
  v172[11] = v167;
  v172[12] = v168;
  v176 = _mm_loadu_si128((const __m128i *)(a2 + 224));
  v178[0] = nullptr;
  v178[1] = nullptr;
  v179 = nullptr;
  if ( (v6 - v7) >> 5 )
  {
    if ( (unsigned __int64)((v6 - v7) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v10 = (_QWORD *)operator new(v6 - v7);
    v6 = *(_QWORD *)(a2 + 256);
    v7 = *(_QWORD *)(a2 + 248);
    v11 = v10;
  }
  else
  {
    v11 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v11;
  v12 = _mm_loadl_epi64(&src);
  v179 = (char *)v11 + v9;
  *(__m128i *)v178 = _mm_unpacklo_epi64(v12, v12);
  if ( v7 != v6 )
  {
    while ( 1 )
    {
      *v11 = v11 + 2;
      v14 = *(_BYTE **)v7;
      v15 = *(_QWORD *)(v7 + 8);
      if ( v15 + *(_QWORD *)v7 && !v14 )
        goto LABEL_50;
      if ( (unsigned __int64)v15 > 0xF )
        break;
      v13 = (_BYTE *)*v11;
      if ( v15 == 1 )
      {
        *v13 = *v14;
        v13 = (_BYTE *)*v11;
      }
      else if ( v15 )
      {
        goto LABEL_20;
      }
LABEL_10:
      v7 += 32;
      v11[1] = v15;
      v11 += 4;
      v13[v15] = 0;
      if ( v7 == v6 )
        goto LABEL_21;
    }
    if ( v15 < 0 )
LABEL_285:
      std::__throw_length_error("basic_string::_M_create");
    v13 = (_BYTE *)operator new(v15 + 1);
    v11[2] = v15;
    *v11 = v13;
LABEL_20:
    memcpy(v13, v14, v15);
    v13 = (_BYTE *)*v11;
    goto LABEL_10;
  }
LABEL_21:
  v16 = *(_QWORD *)(a2 + 280);
  v17 = *(_QWORD *)(a2 + 272);
  v178[1] = v11;
  *(_OWORD *)v180 = 0;
  v181 = nullptr;
  v18 = v16 - v17;
  if ( (v16 - v17) >> 5 )
  {
    if ( (unsigned __int64)((v16 - v17) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v19 = (_QWORD *)operator new(v16 - v17);
    v16 = *(_QWORD *)(a2 + 280);
    v17 = *(_QWORD *)(a2 + 272);
    v20 = v19;
  }
  else
  {
    v20 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v20;
  v21 = _mm_loadl_epi64(&src);
  v181 = (char *)v20 + v18;
  *(__m128i *)v180 = _mm_unpacklo_epi64(v21, v21);
  if ( v17 != v16 )
  {
    while ( 1 )
    {
      *v20 = v20 + 2;
      v23 = *(_BYTE **)v17;
      v24 = *(_QWORD *)(v17 + 8);
      if ( v24 + *(_QWORD *)v17 && !v23 )
        goto LABEL_50;
      if ( (unsigned __int64)v24 > 0xF )
        break;
      v22 = (_BYTE *)*v20;
      if ( v24 == 1 )
      {
        *v22 = *v23;
        v22 = (_BYTE *)*v20;
      }
      else if ( v24 )
      {
        goto LABEL_36;
      }
LABEL_27:
      v17 += 32;
      v20[1] = v24;
      v20 += 4;
      v22[v24] = 0;
      if ( v17 == v16 )
        goto LABEL_37;
    }
    if ( v24 < 0 )
      goto LABEL_285;
    v22 = (_BYTE *)operator new(v24 + 1);
    v20[2] = v24;
    *v20 = v22;
LABEL_36:
    memcpy(v22, v23, v24);
    v22 = (_BYTE *)*v20;
    goto LABEL_27;
  }
LABEL_37:
  v25 = *(_QWORD *)(a2 + 304);
  v26 = *(_QWORD *)(a2 + 296);
  v180[1] = v20;
  *(_OWORD *)v182 = 0;
  v183 = nullptr;
  v27 = v25 - v26;
  if ( (v25 - v26) >> 5 )
  {
    if ( (unsigned __int64)((v25 - v26) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v28 = (_QWORD *)operator new(v25 - v26);
    v25 = *(_QWORD *)(a2 + 304);
    v26 = *(_QWORD *)(a2 + 296);
    v29 = v28;
  }
  else
  {
    v29 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v29;
  v30 = _mm_loadl_epi64(&src);
  v183 = (char *)v29 + v27;
  *(__m128i *)v182 = _mm_unpacklo_epi64(v30, v30);
  if ( v26 != v25 )
  {
    *v29 = v29 + 2;
    v31 = *(_BYTE **)v26;
    v32 = *(_QWORD *)(v26 + 8);
    if ( !(v32 + *(_QWORD *)v26) || v31 )
    {
      v33 = v26 + 32;
      while ( (unsigned __int64)v32 <= 0xF )
      {
        v34 = (_BYTE *)*v29;
        if ( v32 == 1 )
        {
          *v34 = *v31;
          v34 = (_BYTE *)*v29;
        }
        else if ( v32 )
        {
          goto LABEL_55;
        }
LABEL_47:
        v29[1] = v32;
        v29 += 4;
        v34[v32] = 0;
        if ( v33 == v25 )
          goto LABEL_56;
        v33 += 32;
        *v29 = v29 + 2;
        v31 = *(_BYTE **)(v33 - 32);
        v32 = *(_QWORD *)(v33 - 24);
        if ( &v31[v32] && !v31 )
          goto LABEL_50;
      }
      if ( v32 < 0 )
        goto LABEL_285;
      v34 = (_BYTE *)operator new(v32 + 1);
      v29[2] = v32;
      *v29 = v34;
LABEL_55:
      memcpy(v34, v31, v32);
      v34 = (_BYTE *)*v29;
      goto LABEL_47;
    }
LABEL_50:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_56:
  v35 = *(_QWORD *)(a2 + 328);
  v36 = *(_QWORD *)(a2 + 320);
  v182[1] = v29;
  *(_OWORD *)v184 = 0;
  v185 = nullptr;
  v37 = v35 - v36;
  if ( (v35 - v36) >> 5 )
  {
    if ( (unsigned __int64)((v35 - v36) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v38 = (_QWORD *)operator new(v35 - v36);
    v35 = *(_QWORD *)(a2 + 328);
    v36 = *(_QWORD *)(a2 + 320);
    v39 = v38;
  }
  else
  {
    v39 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v39;
  v40 = _mm_loadl_epi64(&src);
  v185 = (char *)v39 + v37;
  *(__m128i *)v184 = _mm_unpacklo_epi64(v40, v40);
  if ( v36 != v35 )
  {
    while ( 1 )
    {
      *v39 = v39 + 2;
      v42 = *(_BYTE **)v36;
      v43 = *(_QWORD *)(v36 + 8);
      if ( v43 + *(_QWORD *)v36 && !v42 )
        goto LABEL_50;
      if ( (unsigned __int64)v43 > 0xF )
        break;
      v41 = (_BYTE *)*v39;
      if ( v43 == 1 )
      {
        *v41 = *v42;
        v41 = (_BYTE *)*v39;
      }
      else if ( v43 )
      {
        goto LABEL_71;
      }
LABEL_62:
      v36 += 32;
      v39[1] = v43;
      v39 += 4;
      v41[v43] = 0;
      if ( v35 == v36 )
        goto LABEL_72;
    }
    if ( v43 < 0 )
      goto LABEL_285;
    v41 = (_BYTE *)operator new(v43 + 1);
    v39[2] = v43;
    *v39 = v41;
LABEL_71:
    memcpy(v41, v42, v43);
    v41 = (_BYTE *)*v39;
    goto LABEL_62;
  }
LABEL_72:
  v44 = *(_QWORD *)(a2 + 352);
  v45 = *(_QWORD *)(a2 + 344);
  v184[1] = v39;
  *(_OWORD *)v186 = 0;
  v187 = nullptr;
  v46 = v44 - v45;
  if ( (v44 - v45) >> 5 )
  {
    if ( (unsigned __int64)((v44 - v45) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v47 = (_QWORD *)operator new(v44 - v45);
    v44 = *(_QWORD *)(a2 + 352);
    v45 = *(_QWORD *)(a2 + 344);
    v48 = v47;
  }
  else
  {
    v48 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v48;
  v49 = _mm_loadl_epi64(&src);
  v187 = (char *)v48 + v46;
  *(__m128i *)v186 = _mm_unpacklo_epi64(v49, v49);
  if ( v44 != v45 )
  {
    *v48 = v48 + 2;
    v50 = *(_BYTE **)v45;
    v51 = *(_QWORD *)(v45 + 8);
    if ( v51 + *(_QWORD *)v45 && !v50 )
      goto LABEL_50;
    v52 = v45 + 32;
LABEL_79:
    if ( v51 > 0xF )
      goto LABEL_86;
    do
    {
      v53 = (_BYTE *)*v48;
      if ( v51 == 1 )
      {
        *v53 = *v50;
        v53 = (_BYTE *)*v48;
        goto LABEL_82;
      }
      if ( v51 )
        goto LABEL_88;
LABEL_82:
      v48[1] = v51;
      v48 += 4;
      v53[v51] = 0;
      if ( v44 == v52 )
        goto LABEL_91;
      v52 += 32;
      *v48 = v48 + 2;
      v50 = *(_BYTE **)(v52 - 32);
      v51 = *(_QWORD *)(v52 - 24);
      if ( !&v50[v51] )
        goto LABEL_79;
      if ( !v50 )
        goto LABEL_50;
    }
    while ( v51 <= 0xF );
LABEL_86:
    if ( (v51 & 0x8000000000000000LL) != 0LL )
      goto LABEL_285;
    v53 = (_BYTE *)operator new(v51 + 1);
    v48[2] = v51;
    *v48 = v53;
LABEL_88:
    memcpy(v53, v50, v51);
    v53 = (_BYTE *)*v48;
    goto LABEL_82;
  }
LABEL_91:
  v54 = *(_DWORD *)(a2 + 384);
  v55 = *(_BYTE **)(a2 + 392);
  v186[1] = v48;
  v56 = *(_QWORD *)(a2 + 400);
  v57 = _mm_loadu_si128((const __m128i *)(a2 + 368));
  v189 = v54;
  v58 = *(_DWORD *)(a2 + 388);
  v188 = v57;
  v190 = v58;
  v191 = v192;
  sub_FDDD10(&v191, v55, (__int64)&v55[v56]);
  v59 = *(_BYTE **)(a2 + 424);
  v60 = *(_QWORD *)(a2 + 432);
  v193 = v194;
  sub_FDDD10(&v193, v59, (__int64)&v59[v60]);
  v61 = *(_BYTE **)(a2 + 456);
  v62 = *(_QWORD *)(a2 + 464);
  v195 = v196;
  sub_FDDD10(&v195, v61, (__int64)&v61[v62]);
  v63 = *(_BYTE **)(a2 + 488);
  v64 = *(_QWORD *)(a2 + 496);
  v197 = v198;
  sub_FDDD10(&v197, v63, (__int64)&v63[v64]);
  v65 = *(_QWORD *)(a2 + 528);
  v66 = *(_QWORD *)(a2 + 520);
  *(_OWORD *)v199 = 0;
  v200 = nullptr;
  v67 = v65 - v66;
  if ( (v65 - v66) >> 5 )
  {
    if ( (unsigned __int64)((v65 - v66) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v68 = (_QWORD *)operator new(v65 - v66);
    v65 = *(_QWORD *)(a2 + 528);
    v66 = *(_QWORD *)(a2 + 520);
    v69 = v68;
  }
  else
  {
    v69 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v69;
  v70 = _mm_loadl_epi64(&src);
  v200 = (char *)v69 + v67;
  *(__m128i *)v199 = _mm_unpacklo_epi64(v70, v70);
  if ( v66 != v65 )
  {
    *v69 = v69 + 2;
    v71 = *(_BYTE **)v66;
    v72 = *(_QWORD *)(v66 + 8);
    if ( v72 + *(_QWORD *)v66 && !v71 )
      goto LABEL_50;
    v73 = v66 + 32;
LABEL_98:
    if ( v72 > 0xF )
      goto LABEL_105;
    do
    {
      v74 = (_BYTE *)*v69;
      if ( v72 == 1 )
      {
        *v74 = *v71;
        v74 = (_BYTE *)*v69;
        goto LABEL_101;
      }
      if ( v72 )
        goto LABEL_107;
LABEL_101:
      v69[1] = v72;
      v69 += 4;
      v74[v72] = 0;
      if ( v73 == v65 )
        goto LABEL_110;
      v73 += 32;
      *v69 = v69 + 2;
      v71 = *(_BYTE **)(v73 - 32);
      v72 = *(_QWORD *)(v73 - 24);
      if ( !&v71[v72] )
        goto LABEL_98;
      if ( !v71 )
        goto LABEL_50;
    }
    while ( v72 <= 0xF );
LABEL_105:
    src.m128i_i64[0] = (__int64)v71;
    if ( (v72 & 0x8000000000000000LL) != 0LL )
      goto LABEL_285;
    v74 = (_BYTE *)operator new(v72 + 1);
    v69[2] = v72;
    v71 = (_BYTE *)src.m128i_i64[0];
    *v69 = v74;
LABEL_107:
    memcpy(v74, v71, v72);
    v74 = (_BYTE *)*v69;
    goto LABEL_101;
  }
LABEL_110:
  v75 = *(_QWORD *)(a2 + 552);
  v76 = *(_QWORD *)(a2 + 544);
  v199[1] = v69;
  *(_OWORD *)v201 = 0;
  src.m128i_i64[0] = v75;
  v202 = nullptr;
  v77 = v75 - v76;
  v78 = (v75 - v76) >> 5;
  if ( v78 )
  {
    if ( v78 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v79 = (_QWORD *)operator new(v77);
    v76 = *(_QWORD *)(a2 + 544);
    v80 = v79;
    src.m128i_i64[0] = *(_QWORD *)(a2 + 552);
  }
  else
  {
    v80 = nullptr;
  }
  v155 = (__int64)v80;
  v81 = _mm_loadl_epi64((const __m128i *)&v155);
  v202 = (char *)v80 + v77;
  *(__m128i *)v201 = _mm_unpacklo_epi64(v81, v81);
  if ( v76 != src.m128i_i64[0] )
  {
    while ( 1 )
    {
      *v80 = v80 + 2;
      v83 = *(_BYTE **)v76;
      v84 = *(_QWORD *)(v76 + 8);
      if ( v84 + *(_QWORD *)v76 && !v83 )
        goto LABEL_50;
      if ( (unsigned __int64)v84 > 0xF )
        break;
      v82 = (_BYTE *)*v80;
      if ( v84 == 1 )
      {
        *v82 = *v83;
        v82 = (_BYTE *)*v80;
      }
      else if ( v84 )
      {
        goto LABEL_125;
      }
LABEL_116:
      v80[1] = v84;
      v76 += 32;
      v80 += 4;
      v82[v84] = 0;
      if ( v76 == src.m128i_i64[0] )
        goto LABEL_126;
    }
    if ( v84 < 0 )
      goto LABEL_285;
    v82 = (_BYTE *)operator new(v84 + 1);
    v80[2] = v84;
    *v80 = v82;
LABEL_125:
    memcpy(v82, v83, v84);
    v82 = (_BYTE *)*v80;
    goto LABEL_116;
  }
LABEL_126:
  v85 = *(_BYTE *)(a2 + 568);
  v86 = *(_QWORD *)(a2 + 576);
  v201[1] = v80;
  *(_OWORD *)v204 = 0;
  v203 = v85;
  v87 = *(_QWORD *)(a2 + 584);
  v205 = nullptr;
  src.m128i_i64[0] = v87;
  v88 = v87 - v86;
  v89 = (v87 - v86) >> 5;
  if ( v89 )
  {
    if ( v89 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_286;
    v90 = (_QWORD *)operator new(v88);
    v86 = *(_QWORD *)(a2 + 576);
    v91 = v90;
    src.m128i_i64[0] = *(_QWORD *)(a2 + 584);
  }
  else
  {
    v91 = nullptr;
  }
  v155 = (__int64)v91;
  v92 = _mm_loadl_epi64((const __m128i *)&v155);
  v205 = (char *)v91 + v88;
  *(__m128i *)v204 = _mm_unpacklo_epi64(v92, v92);
  if ( v86 != src.m128i_i64[0] )
  {
    while ( 1 )
    {
      *v91 = v91 + 2;
      v94 = *(_BYTE **)v86;
      v95 = *(_QWORD *)(v86 + 8);
      if ( v95 + *(_QWORD *)v86 && !v94 )
        goto LABEL_50;
      if ( (unsigned __int64)v95 > 0xF )
        break;
      v93 = (_BYTE *)*v91;
      if ( v95 == 1 )
      {
        *v93 = *v94;
        v93 = (_BYTE *)*v91;
      }
      else if ( v95 )
      {
        goto LABEL_141;
      }
LABEL_132:
      v91[1] = v95;
      v86 += 32;
      v91 += 4;
      v93[v95] = 0;
      if ( v86 == src.m128i_i64[0] )
        goto LABEL_142;
    }
    if ( v95 < 0 )
      goto LABEL_285;
    v93 = (_BYTE *)operator new(v95 + 1);
    v91[2] = v95;
    *v91 = v93;
LABEL_141:
    memcpy(v93, v94, v95);
    v93 = (_BYTE *)*v91;
    goto LABEL_132;
  }
LABEL_142:
  v96 = *(int **)(a2 + 616);
  v204[1] = v91;
  v207 = 0;
  v208 = nullptr;
  v209 = &v207;
  v210 = &v207;
  v211 = 0;
  if ( v96 )
  {
    v171 = &v206;
    v97 = (int *)sub_C2C3E0((__int64)&v206, v96, (__int64)&v207, (__int64)&v171);
    for ( i = v97; *((_QWORD *)i + 2); i = *((int **)i + 2) )
      ;
    v209 = i;
    for ( j = v97; *((_QWORD *)j + 3); j = *((int **)j + 3) )
      ;
    v100 = *(_QWORD *)(a2 + 640);
    v210 = j;
    v208 = v97;
    v211 = v100;
  }
  v101 = *(_QWORD *)(a2 + 656);
  v102 = *(_QWORD *)(a2 + 648);
  *(_OWORD *)v212 = 0;
  v213 = 0;
  v103 = v101 - v102;
  v104 = 0x6DB6DB6DB6DB6DB7LL * ((v101 - v102) >> 3);
  if ( v104 )
  {
    if ( v104 > 0x492492492492492LL )
      goto LABEL_286;
    v105 = operator new(v101 - v102);
    v101 = *(_QWORD *)(a2 + 656);
    v102 = *(_QWORD *)(a2 + 648);
    src.m128i_i64[0] = v105;
  }
  else
  {
    src.m128i_i64[0] = 0;
  }
  v155 = src.m128i_i64[0];
  v106 = _mm_loadl_epi64((const __m128i *)&v155);
  v213 = src.m128i_i64[0] + v103;
  *(__m128i *)v212 = _mm_unpacklo_epi64(v106, v106);
  if ( v101 != v102 )
  {
    v107 = v102;
    v108 = src.m128i_i64[0];
    do
    {
      v109 = v108 + 16;
      v110 = (_QWORD *)v108;
      v107 += 56;
      v108 += 56;
      *(_QWORD *)(v108 - 56) = v109;
      sub_FDDD10(v110, *(_BYTE **)(v107 - 56), *(_QWORD *)(v107 - 56) + *(_QWORD *)(v107 - 48));
      *(__m128i *)(v108 - 24) = _mm_loadu_si128((const __m128i *)(v107 - 24));
      *(_DWORD *)(v108 - 8) = *(_DWORD *)(v107 - 8);
      *(_DWORD *)(v108 - 4) = *(_DWORD *)(v107 - 4);
    }
    while ( v101 != v107 );
    src.m128i_i64[0] += 56
                      * (((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v101 - 56 - v102) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
  }
  v111 = *(_BYTE **)(a2 + 672);
  v112 = *(_QWORD *)(a2 + 680);
  v212[1] = (void *)src.m128i_i64[0];
  v214 = v215;
  sub_FDDD10(&v214, v111, (__int64)&v111[v112]);
  v113 = *(_BYTE **)(a2 + 704);
  v114 = *(_QWORD *)(a2 + 712);
  v216 = v217;
  sub_FDDD10(&v216, v113, (__int64)&v113[v114]);
  v115 = *(_QWORD *)(a2 + 736);
  v116 = *(_QWORD *)(a2 + 768);
  v220[0] = nullptr;
  v117 = *(_QWORD *)(a2 + 760);
  v220[1] = nullptr;
  v217[2] = v115;
  LOBYTE(v115) = *(_BYTE *)(a2 + 744);
  v221 = nullptr;
  v118 = v116 - v117;
  v218 = v115;
  v219 = *(_QWORD *)(a2 + 748);
  if ( (v116 - v117) >> 5 )
  {
    if ( (unsigned __int64)((v116 - v117) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v119 = (_QWORD *)operator new(v116 - v117);
      v116 = *(_QWORD *)(a2 + 768);
      v117 = *(_QWORD *)(a2 + 760);
      v2 = v119;
      goto LABEL_160;
    }
LABEL_286:
    std::__throw_bad_alloc();
  }
  v2 = nullptr;
LABEL_160:
  src.m128i_i64[0] = (__int64)v2;
  v120 = _mm_loadl_epi64(&src);
  v221 = (char *)v2 + v118;
  *(__m128i *)v220 = _mm_unpacklo_epi64(v120, v120);
  if ( v116 != v117 )
  {
    while ( 1 )
    {
      *v2 = v2 + 2;
      v122 = *(_BYTE **)v117;
      v123 = *(_QWORD *)(v117 + 8);
      if ( v123 + *(_QWORD *)v117 && !v122 )
        goto LABEL_50;
      if ( (unsigned __int64)v123 > 0xF )
        break;
      v121 = (_BYTE *)*v2;
      if ( v123 == 1 )
      {
        *v121 = *v122;
        v121 = (_BYTE *)*v2;
      }
      else if ( v123 )
      {
        goto LABEL_172;
      }
LABEL_163:
      v117 += 32;
      v2[1] = v123;
      v2 += 4;
      v121[v123] = 0;
      if ( v117 == v116 )
        goto LABEL_173;
    }
    src.m128i_i64[0] = *(_QWORD *)v117;
    if ( v123 < 0 )
      goto LABEL_285;
    v121 = (_BYTE *)operator new(v123 + 1);
    v2[2] = v123;
    v122 = (_BYTE *)src.m128i_i64[0];
    *v2 = v121;
LABEL_172:
    memcpy(v121, v122, v123);
    v121 = (_BYTE *)*v2;
    goto LABEL_163;
  }
LABEL_173:
  v124 = *(_BYTE **)(a2 + 784);
  v125 = *(_QWORD *)(a2 + 792);
  v220[1] = v2;
  v222 = v223;
  sub_FDDD10(&v222, v124, (__int64)&v124[v125]);
  v126 = *(_BYTE **)(a2 + 824);
  v127 = *(_QWORD *)(a2 + 832);
  v128 = *(_WORD *)(a2 + 816);
  v224 = v225;
  v223[8] = v128;
  sub_FDDD10(&v224, v126, (__int64)&v126[v127]);
  v129 = *(_QWORD *)(a2 + 856);
  BYTE1(v172[0]) &= 0x67u;
  v225[2] = v129;
  LOBYTE(v2) = (unsigned int)sub_FDDA90((__int64)v172, *(_WORD *)src.m128i_i64[1] & 0x1FF) - 3 > 1;
  if ( v224 != v225 )
    operator delete(v224);
  if ( v222 != v223 )
    operator delete(v222);
  v130 = (void **)v220[1];
  v131 = (void **)v220[0];
  if ( v220[1] != v220[0] )
  {
    do
    {
      while ( *v131 != v131 + 2 )
      {
        operator delete(*v131);
        v131 += 4;
        if ( v130 == v131 )
          goto LABEL_180;
      }
      v131 += 4;
    }
    while ( v130 != v131 );
LABEL_180:
    v131 = (void **)v220[0];
  }
  if ( v131 )
    operator delete(v131);
  if ( v216 != v217 )
    operator delete(v216);
  if ( v214 != v215 )
    operator delete(v214);
  v132 = (void **)v212[1];
  v133 = (void **)v212[0];
  if ( v212[1] != v212[0] )
  {
    do
    {
      while ( *v133 != v133 + 2 )
      {
        operator delete(*v133);
        v133 += 7;
        if ( v132 == v133 )
          goto LABEL_190;
      }
      v133 += 7;
    }
    while ( v132 != v133 );
LABEL_190:
    v133 = (void **)v212[0];
  }
  if ( v133 )
    operator delete(v133);
  v134 = (char *)v208;
  if ( v208 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&v206, *((_QWORD **)v134 + 3));
      v135 = *((char **)v134 + 8);
      v136 = *((char **)v134 + 2);
      if ( v135 != v134 + 80 )
        operator delete(v135);
      v137 = *((char **)v134 + 4);
      if ( v137 == v134 + 48 )
      {
        operator delete(v134);
        if ( !v136 )
          break;
      }
      else
      {
        operator delete(v137);
        operator delete(v134);
        if ( !v136 )
          break;
      }
      v134 = v136;
    }
  }
  v138 = (void **)v204[1];
  v139 = (void **)v204[0];
  if ( v204[1] != v204[0] )
  {
    do
    {
      while ( *v139 != v139 + 2 )
      {
        operator delete(*v139);
        v139 += 4;
        if ( v138 == v139 )
          goto LABEL_207;
      }
      v139 += 4;
    }
    while ( v138 != v139 );
LABEL_207:
    v139 = (void **)v204[0];
  }
  if ( v139 )
    operator delete(v139);
  v140 = (void **)v201[1];
  v141 = (void **)v201[0];
  if ( v201[1] != v201[0] )
  {
    do
    {
      while ( *v141 != v141 + 2 )
      {
        operator delete(*v141);
        v141 += 4;
        if ( v140 == v141 )
          goto LABEL_213;
      }
      v141 += 4;
    }
    while ( v140 != v141 );
LABEL_213:
    v141 = (void **)v201[0];
  }
  if ( v141 )
    operator delete(v141);
  v142 = (void **)v199[1];
  v143 = (void **)v199[0];
  if ( v199[1] != v199[0] )
  {
    do
    {
      while ( *v143 != v143 + 2 )
      {
        operator delete(*v143);
        v143 += 4;
        if ( v142 == v143 )
          goto LABEL_219;
      }
      v143 += 4;
    }
    while ( v142 != v143 );
LABEL_219:
    v143 = (void **)v199[0];
  }
  if ( v143 )
    operator delete(v143);
  if ( v197 != v198 )
    operator delete(v197);
  if ( v195 != v196 )
    operator delete(v195);
  if ( v193 != v194 )
    operator delete(v193);
  if ( v191 != v192 )
    operator delete(v191);
  v144 = (void **)v186[1];
  v145 = (void **)v186[0];
  if ( v186[1] != v186[0] )
  {
    do
    {
      while ( *v145 != v145 + 2 )
      {
        operator delete(*v145);
        v145 += 4;
        if ( v145 == v144 )
          goto LABEL_233;
      }
      v145 += 4;
    }
    while ( v144 != v145 );
LABEL_233:
    v145 = (void **)v186[0];
  }
  if ( v145 )
    operator delete(v145);
  v146 = (void **)v184[1];
  v147 = (void **)v184[0];
  if ( v184[1] != v184[0] )
  {
    do
    {
      while ( *v147 != v147 + 2 )
      {
        operator delete(*v147);
        v147 += 4;
        if ( v147 == v146 )
          goto LABEL_239;
      }
      v147 += 4;
    }
    while ( v146 != v147 );
LABEL_239:
    v147 = (void **)v184[0];
  }
  if ( v147 )
    operator delete(v147);
  v148 = (void **)v182[1];
  v149 = (void **)v182[0];
  if ( v182[1] != v182[0] )
  {
    do
    {
      while ( *v149 != v149 + 2 )
      {
        operator delete(*v149);
        v149 += 4;
        if ( v148 == v149 )
          goto LABEL_245;
      }
      v149 += 4;
    }
    while ( v148 != v149 );
LABEL_245:
    v149 = (void **)v182[0];
  }
  if ( v149 )
    operator delete(v149);
  v150 = (void **)v180[1];
  v151 = (void **)v180[0];
  if ( v180[1] != v180[0] )
  {
    do
    {
      while ( *v151 != v151 + 2 )
      {
        operator delete(*v151);
        v151 += 4;
        if ( v151 == v150 )
          goto LABEL_251;
      }
      v151 += 4;
    }
    while ( v150 != v151 );
LABEL_251:
    v151 = (void **)v180[0];
  }
  if ( v151 )
    operator delete(v151);
  v152 = (void **)v178[1];
  v153 = (void **)v178[0];
  if ( v178[1] != v178[0] )
  {
    do
    {
      while ( *v153 != v153 + 2 )
      {
        operator delete(*v153);
        v153 += 4;
        if ( v153 == v152 )
          goto LABEL_257;
      }
      v153 += 4;
    }
    while ( v152 != v153 );
LABEL_257:
    v153 = (void **)v178[0];
  }
  if ( v153 )
    operator delete(v153);
  return (unsigned int)v2;
}
