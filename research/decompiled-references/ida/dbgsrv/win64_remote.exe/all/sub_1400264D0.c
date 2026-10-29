/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400264D0
// Address: 0x00000001400264D0

//----- (00000001400264D0) ----------------------------------------------------
__int64 __fastcall sub_1400264D0(_QWORD *a1, char a2)
{
  unsigned int v3; // esi
  char *v4; // rax
  __int64 v5; // rbx
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
  char *v41; // rax
  char v42; // al
  __int64 v43; // rdx
  char v44; // al
  __int64 v45; // rdx
  char v46; // al
  __int16 v47; // ax
  __int64 v48; // rcx
  __int64 v49; // rcx
  char *v50; // r15
  char v51; // r8
  char *v52; // rbx
  _QWORD *v53; // r14
  __int64 v54; // rdx
  char *v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  void *v58; // r10
  char **v59; // rcx
  char **v60; // rax
  unsigned int v61; // edx
  int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edx
  bool v67; // zf
  const void **v68; // r14
  int v69; // ebx
  unsigned int v70; // eax
  char *v71; // rcx
  __int64 v72; // rax
  size_t v73; // r13
  char *v74; // r12
  size_t v75; // r8
  bool v76; // cc
  void *v77; // rax
  char *v78; // r15
  char v79; // r8
  char *v80; // rbx
  _QWORD *v81; // rdi
  __int64 v82; // rdx
  char *v83; // rax
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  void *v86; // r10
  char **v87; // rcx
  char **v88; // rax
  unsigned int v89; // edx
  int v90; // ecx
  unsigned int v91; // ecx
  unsigned int v92; // edx
  unsigned int v93; // edx
  unsigned int v94; // edx
  bool v95; // zf
  const void **v96; // r14
  int v97; // ebx
  unsigned int v98; // eax
  char *v99; // rcx
  __int64 v100; // rax
  size_t v101; // r13
  char *v102; // r12
  size_t v103; // r8
  bool v104; // cc
  void *v105; // rax
  char *v106; // r15
  char v107; // r8
  char *v108; // rbx
  _QWORD *v109; // rdi
  __int64 v110; // rdx
  char *v111; // rax
  unsigned __int64 v112; // rcx
  __int64 v113; // rax
  void *v114; // r10
  char **v115; // rcx
  char **v116; // rax
  unsigned int v117; // edx
  int v118; // ecx
  unsigned int v119; // ecx
  unsigned int v120; // edx
  unsigned int v121; // edx
  unsigned int v122; // edx
  bool v123; // zf
  const void **v124; // r14
  int v125; // ebx
  unsigned int v126; // eax
  char *v127; // rcx
  __int64 v128; // rax
  size_t v129; // r13
  char *v130; // r12
  size_t v131; // r8
  bool v132; // cc
  void *v133; // rax
  __int64 v134; // rdi
  _BOOL8 v135; // rbx
  __int64 v136; // rdi
  __int64 v137; // rbx
  char *v138; // r15
  char v139; // r8
  char *v140; // rbx
  _QWORD *v141; // rdi
  __int64 v142; // rdx
  char *v143; // rax
  unsigned __int64 v144; // rcx
  __int64 v145; // rax
  void *v146; // r10
  char **v147; // rcx
  char **v148; // rax
  unsigned int v149; // edx
  int v150; // ecx
  unsigned int v151; // ecx
  unsigned int v152; // edx
  unsigned int v153; // edx
  unsigned int v154; // edx
  bool v155; // zf
  const void **v156; // r14
  int v157; // ebx
  unsigned int v158; // eax
  char *v159; // rcx
  __int64 v160; // rax
  size_t v161; // r13
  char *v162; // r12
  size_t v163; // r8
  bool v164; // cc
  void *v165; // rax
  char v166[8]; // [rsp+20h] [rbp-E0h] BYREF
  void *Buf2[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v168; // [rsp+38h] [rbp-C8h]
  char v169[8]; // [rsp+40h] [rbp-C0h] BYREF
  void *v170[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v171; // [rsp+58h] [rbp-A8h]
  char v172[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v173[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v174; // [rsp+78h] [rbp-88h]
  char v175[8]; // [rsp+80h] [rbp-80h] BYREF
  void *v176[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v177; // [rsp+98h] [rbp-68h]
  void *Block; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v179; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v180; // [rsp+B0h] [rbp-50h]
  void *v181; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v182; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v183; // [rsp+C8h] [rbp-38h]
  void *v184; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v185; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v186; // [rsp+E0h] [rbp-20h]
  void *v187; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v188; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v189; // [rsp+F8h] [rbp-8h]
  char v190[8]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v191; // [rsp+108h] [rbp+8h] BYREF
  __int64 v192; // [rsp+118h] [rbp+18h]
  char v193[8]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v194; // [rsp+128h] [rbp+28h] BYREF
  __int64 v195; // [rsp+138h] [rbp+38h]
  char v196[8]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v197; // [rsp+148h] [rbp+48h]
  __int64 v198; // [rsp+158h] [rbp+58h]
  char v199[8]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v200; // [rsp+168h] [rbp+68h] BYREF
  __int64 v201; // [rsp+178h] [rbp+78h]
  char v202[8]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v203; // [rsp+188h] [rbp+88h] BYREF
  __int64 v204; // [rsp+198h] [rbp+98h]
  char v205[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v206; // [rsp+1A8h] [rbp+A8h]
  __int64 v207; // [rsp+1B8h] [rbp+B8h]
  char v208[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v209; // [rsp+1C8h] [rbp+C8h]
  __int64 v210; // [rsp+1D8h] [rbp+D8h]
  char v211[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v212; // [rsp+1E8h] [rbp+E8h]
  __int64 v213; // [rsp+1F8h] [rbp+F8h]
  char v214[8]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v215; // [rsp+208h] [rbp+108h]
  __int64 v216; // [rsp+218h] [rbp+118h]
  char v217[8]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v218; // [rsp+228h] [rbp+128h]
  __int64 v219; // [rsp+238h] [rbp+138h]
  char v220[8]; // [rsp+240h] [rbp+140h] BYREF
  __int128 v221; // [rsp+248h] [rbp+148h]
  __int64 v222; // [rsp+258h] [rbp+158h]
  char v223[8]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v224; // [rsp+268h] [rbp+168h]
  __int64 v225; // [rsp+278h] [rbp+178h]
  char v226[8]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v227; // [rsp+288h] [rbp+188h]
  __int64 v228; // [rsp+298h] [rbp+198h]
  char v229[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v230; // [rsp+2A8h] [rbp+1A8h]
  __int64 v231; // [rsp+2B8h] [rbp+1B8h]
  char v232[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int128 v233; // [rsp+2C8h] [rbp+1C8h]
  __int64 v234; // [rsp+2D8h] [rbp+1D8h]

  v3 = 0;
  switch ( a2 )
  {
    case -80:
      v190[0] = 2;
      v192 = 0;
      v191 = 0u;
      sub_140028C20(a1, v190);
      v4 = sub_1400291D0((char *)(*a1 - 32LL + 32LL * a1[1]), 2);
      v5 = (__int64)v4;
      if ( *v4 == 7 )
      {
        v3 = sub_14002A220((__int64)v190);
        if ( !v3 )
          sub_14000E160(v5 + 8, (__int64)&v191);
      }
      else
      {
        switch ( (unsigned int)sub_140026130(v4, v190) )
        {
          case 2u:
          case 9u:
            *(_QWORD *)(v5 + 8) += v191;
            break;
          case 3u:
            v7 = sub_140066690((__int16 *)(v5 + 8), &v191, v5 + 8, 0);
            if ( v7 != 1 )
              sub_140025460(v7);
            break;
          case 5u:
            if ( !(unsigned int)sub_140028F90(v5, v5) )
              sub_140020EE0(*(__int64 **)(v5 + 8), **(__int64 ***)v191, *(__int64 **)v191);
            break;
          case 6u:
          case 8u:
            sub_1400640B0(0x5FBu);
            break;
          case 7u:
            if ( !(unsigned int)sub_140029F90(v5) && !(unsigned int)sub_140029F90((__int64)v190) )
              *(_QWORD *)(v5 + 8) += v191;
            break;
          default:
            break;
        }
      }
      sub_140029390((__int64)v190);
      return v3;
    case -79:
      v193[0] = 2;
      v195 = 0;
      v194 = 0u;
      sub_140028C20(a1, v193);
      v8 = 32LL * a1[1] + *a1 - 32LL;
      switch ( (unsigned int)sub_140026130((char *)v8, v193) )
      {
        case 2u:
        case 9u:
          goto LABEL_20;
        case 3u:
          v11 = sub_140066690((__int16 *)(v8 + 8), &v194, v8 + 8, 1);
          if ( v11 == 1 )
            goto LABEL_21;
          v9 = sub_140025460(v11);
          break;
        case 5u:
          v9 = sub_1400262D0(v8, (__int64)v193);
          if ( v9 )
            break;
          goto LABEL_21;
        case 6u:
        case 8u:
          v9 = sub_1400640B0(0x5FBu);
          break;
        case 7u:
          v9 = sub_140029F90(v8);
          if ( v9 )
            break;
          v9 = sub_140029F90((__int64)v193);
          if ( v9 )
            break;
LABEL_20:
          *(_QWORD *)(v8 + 8) -= v194;
LABEL_21:
          v9 = 0;
          break;
        default:
          goto LABEL_21;
      }
      v10 = v9;
      sub_140029390((__int64)v193);
      return v10;
    case -78:
      v199[0] = 2;
      v201 = 0;
      v200 = 0u;
      sub_140028C20(a1, v199);
      v12 = 32LL * a1[1] + *a1;
      switch ( (unsigned int)sub_140026130((char *)(v12 - 32), v199) )
      {
        case 2u:
        case 9u:
          goto LABEL_31;
        case 3u:
          v15 = sub_140067280((__int16 *)(v12 - 24), (__int16 *)&v200, v12 - 24);
          if ( v15 == 1 )
            goto LABEL_32;
          v13 = sub_140025460(v15);
          break;
        case 5u:
          v13 = sub_1400640B0(0x5FBu);
          if ( v13 )
            break;
          goto LABEL_32;
        case 6u:
        case 8u:
          v13 = sub_1400640B0(0x5FBu);
          break;
        case 7u:
          v13 = sub_140029F90(v12 - 32);
          if ( v13 )
            break;
          v13 = sub_140029F90((__int64)v199);
          if ( v13 )
            break;
LABEL_31:
          *(_QWORD *)(v12 - 24) *= (_QWORD)v200;
LABEL_32:
          v13 = 0;
          break;
        default:
          goto LABEL_32;
      }
      v14 = v13;
      sub_140029390((__int64)v199);
      return v14;
    case -77:
      v202[0] = 2;
      v204 = 0;
      v203 = 0u;
      sub_140028C20(a1, v202);
      v16 = 32LL * a1[1] + *a1;
      switch ( (unsigned int)sub_140026130((char *)(v16 - 32), v202) )
      {
        case 2u:
        case 9u:
          goto LABEL_40;
        case 3u:
          v19 = sub_140066D00((__int16 *)(v16 - 24), &v203, v16 - 24);
          if ( v19 == 1 )
            goto LABEL_43;
          v17 = sub_140025460(v19);
          break;
        case 5u:
          v17 = sub_1400640B0(0x5FBu);
          if ( v17 )
            break;
          goto LABEL_43;
        case 6u:
        case 8u:
          v17 = sub_1400640B0(0x5FBu);
          break;
        case 7u:
          v17 = sub_140029F90(v16 - 32);
          if ( v17 )
            break;
          v17 = sub_140029F90((__int64)v202);
          if ( v17 )
            break;
LABEL_40:
          if ( (_QWORD)v203 )
          {
            *(__int64 *)(v16 - 24) /= (__int64)v203;
LABEL_43:
            v17 = 0;
          }
          else
          {
            v17 = sub_1400640B0(0x56u);
          }
          break;
        default:
          goto LABEL_43;
      }
      v18 = v17;
      sub_140029390((__int64)v202);
      return v18;
    case -76:
      v196[0] = 2;
      v198 = 0;
      v197 = 0u;
      sub_140028C20(a1, v196);
      v37 = 32LL * a1[1] + *a1;
      v38 = sub_140026130((char *)(v37 - 32), v196);
      if ( v38 == 2 )
      {
        v39 = v197;
        if ( !(_QWORD)v197 )
        {
LABEL_92:
          v22 = sub_1400640B0(0x56u);
          sub_140029390((__int64)v196);
          return v22;
        }
      }
      else
      {
        if ( v38 != 9 )
        {
          v22 = sub_1400640B0(0x3Du);
          sub_140029390((__int64)v196);
          return v22;
        }
        v39 = v197;
        if ( !(_QWORD)v197 )
          goto LABEL_92;
      }
      *(__int64 *)(v37 - 24) %= v39;
      sub_140029390((__int64)v196);
      return 0;
    case -75:
      v205[0] = 2;
      v207 = 0;
      v206 = 0u;
      sub_140028C20(a1, v205);
      v20 = 32LL * a1[1] + *a1;
      v21 = sub_140026130((char *)(v20 - 32), v205);
      if ( v21 != 2 && v21 != 9 )
      {
        v22 = sub_1400640B0(0x3Du);
        sub_140029390((__int64)v205);
        return v22;
      }
      if ( *(_QWORD *)(v20 - 24) || (v23 = 0, (_QWORD)v206) )
        v23 = 1;
      *(_QWORD *)(v20 - 24) = v23;
      sub_140029390((__int64)v205);
      return 0;
    case -74:
      v208[0] = 2;
      v210 = 0;
      v209 = 0u;
      sub_140028C20(a1, v208);
      v24 = 32LL * a1[1] + *a1;
      v25 = sub_140026130((char *)(v24 - 32), v208);
      if ( v25 != 2 && v25 != 9 )
      {
        v22 = sub_1400640B0(0x3Du);
        sub_140029390((__int64)v208);
        return v22;
      }
      if ( !*(_QWORD *)(v24 - 24) || (v26 = 1, !(_QWORD)v209) )
        v26 = 0;
      *(_QWORD *)(v24 - 24) = v26;
      sub_140029390((__int64)v208);
      return 0;
    case -73:
      v40 = 32LL * a1[1] + *a1;
      v41 = sub_1400291D0((char *)(v40 - 32), 0);
      if ( v41 && *v41 == 5 )
      {
        sub_140029390(v40 - 32);
        *(_QWORD *)(v40 - 24) = 1;
      }
      v42 = *(_BYTE *)(v40 - 32);
      if ( v42 != 2 && v42 != 9 )
        return sub_1400640B0(0x3Du);
      *(_QWORD *)(v40 - 24) = *(_QWORD *)(v40 - 24) == 0;
      return 0;
    case -72:
      v211[0] = 2;
      v213 = 0;
      v212 = 0u;
      sub_140028C20(a1, v211);
      v27 = 32LL * a1[1] + *a1;
      v28 = sub_140026130((char *)(v27 - 32), v211);
      if ( v28 != 2 && v28 != 9 )
      {
        v22 = sub_1400640B0(0x3Du);
        sub_140029390((__int64)v211);
        return v22;
      }
      *(_QWORD *)(v27 - 24) |= v212;
      sub_140029390((__int64)v211);
      return 0;
    case -71:
      v214[0] = 2;
      v216 = 0;
      v215 = 0u;
      sub_140028C20(a1, v214);
      v29 = 32LL * a1[1] + *a1;
      v30 = sub_140026130((char *)(v29 - 32), v214);
      if ( v30 != 2 && v30 != 9 )
      {
        v22 = sub_1400640B0(0x3Du);
        sub_140029390((__int64)v214);
        return v22;
      }
      *(_QWORD *)(v29 - 24) &= v215;
      sub_140029390((__int64)v214);
      return 0;
    case -70:
      v217[0] = 2;
      v219 = 0;
      v218 = 0u;
      sub_140028C20(a1, v217);
      v31 = 32LL * a1[1] + *a1;
      v32 = sub_140026130((char *)(v31 - 32), v217);
      if ( v32 != 2 && v32 != 9 )
      {
        v22 = sub_1400640B0(0x3Du);
        sub_140029390((__int64)v217);
        return v22;
      }
      *(_QWORD *)(v31 - 24) ^= v218;
      sub_140029390((__int64)v217);
      return 0;
    case -69:
      v43 = *a1 + 32LL * a1[1];
      v44 = *(_BYTE *)(v43 - 32);
      if ( v44 != 2 && v44 != 9 )
        return sub_1400640B0(0x3Du);
      *(_QWORD *)(v43 - 24) = ~*(_QWORD *)(v43 - 24);
      return 0;
    case -68:
      v220[0] = 2;
      v222 = 0;
      v221 = 0u;
      sub_140028C20(a1, v220);
      v33 = 32LL * a1[1] + *a1;
      v34 = sub_140026130((char *)(v33 - 32), v220);
      if ( v34 != 2 && v34 != 9 )
      {
        v22 = sub_1400640B0(0x3Du);
        sub_140029390((__int64)v220);
        return v22;
      }
      *(__int64 *)(v33 - 24) >>= v221;
      sub_140029390((__int64)v220);
      return 0;
    case -67:
      v223[0] = 2;
      v225 = 0;
      v224 = 0u;
      sub_140028C20(a1, v223);
      v35 = 32LL * a1[1] + *a1;
      v36 = sub_140026130((char *)(v35 - 32), v223);
      if ( v36 == 2 || v36 == 9 )
      {
        *(_QWORD *)(v35 - 24) <<= v224;
        sub_140029390((__int64)v223);
        return 0;
      }
      else
      {
        v22 = sub_1400640B0(0x3Du);
        sub_140029390((__int64)v223);
        return v22;
      }
    case -66:
      v45 = *a1 + 32LL * a1[1];
      v46 = *(_BYTE *)(v45 - 32);
      if ( v46 == 3 )
      {
        v47 = *(_WORD *)(v45 - 10);
        if ( !v47 )
          return 0;
        *(_WORD *)(v45 - 10) = v47 ^ 0x8000;
        return 0;
      }
      else if ( v46 == 2 || v46 == 9 )
      {
        *(_QWORD *)(v45 - 24) = -*(_QWORD *)(v45 - 24);
        return 0;
      }
      else
      {
        return sub_1400640B0(0x3Du);
      }
    case -65:
      return sub_14002A220(*a1 - 32LL + 32LL * a1[1]);
    case -56:
      v166[0] = 2;
      Buf2[1] = nullptr;
      v168 = 0;
      Buf2[0] = nullptr;
      if ( !(unsigned int)sub_14002A460(v166, (char *)(32LL * a1[1] - 32 + *a1)) )
      {
        v232[0] = 2;
        v233 = 0;
        v234 = 0;
        sub_140028E70(v232, (char *)(32LL * a1[1] + *a1 - 32LL));
        v48 = a1[1];
        if ( v48 )
        {
          v49 = v48 - 1;
          a1[1] = v49;
          sub_140029390(*a1 + 32 * v49);
        }
        sub_140029390((__int64)v232);
      }
      v50 = (char *)(32LL * a1[1] + *a1 - 32LL);
      if ( !sub_1400291D0(v50, 2) )
        goto LABEL_152;
      v51 = v166[0];
      if ( v166[0] != 10 )
        goto LABEL_136;
      v52 = v166;
      Block = nullptr;
      v179 = 0;
      v180 = 0;
      v53 = sub_14002DA30();
      v54 = v179;
      while ( 2 )
      {
        v55 = v52 + 8;
        v52 = nullptr;
        v56 = *((int *)v55 + 2);
        if ( (v56 & 0x80000000) != 0LL )
        {
          v52 = (char *)sub_1400258A0((__int64)v53, ~(_DWORD)v56);
          v54 = v179;
        }
        else
        {
          v57 = *(_QWORD *)v55;
          if ( v57 && *(_DWORD *)v57 == 289621065 && v56 < *(_QWORD *)(v57 + 32) )
            v52 = (char *)(*(_QWORD *)(v57 + 24) + 32 * v56);
        }
        if ( !v52 )
          goto LABEL_149;
        if ( *v52 == 10 )
        {
          v58 = Block;
          v59 = (char **)Block;
          v60 = (char **)((char *)Block + 8 * v54);
          if ( Block == v60 )
          {
LABEL_129:
            if ( v54 + 1 > v180 )
            {
              v58 = sub_14005ABE0((__int64)&Block, Block, v54 + 1, 8u);
              Block = v58;
              v54 = v179;
            }
            *((_QWORD *)v58 + v54) = v52;
            v54 = ++v179;
            continue;
          }
          while ( v52 != *v59 )
          {
            if ( ++v59 == v60 )
              goto LABEL_129;
          }
LABEL_149:
          sub_1400640B0(0x61Bu);
          goto LABEL_150;
        }
        break;
      }
      v166[0] = 2;
      if ( (unsigned int)sub_140028E70(v166, v52) )
      {
LABEL_150:
        if ( Block )
        {
          v179 = 0;
          j_free(Block);
        }
LABEL_152:
        v68 = (const void **)(v50 + 8);
LABEL_153:
        v69 = 1;
        goto LABEL_154;
      }
      if ( Block )
      {
        v179 = 0;
        j_free(Block);
      }
      v51 = v166[0];
LABEL_136:
      v61 = *v50;
      if ( *v50 == v51 )
        goto LABEL_179;
      if ( (unsigned __int8)v61 > 9u )
        goto LABEL_152;
      v62 = 654;
      if ( !_bittest(&v62, v61) || (unsigned __int8)v51 > 9u || !_bittest(&v62, v51) )
        goto LABEL_152;
      v63 = 61;
      v64 = v61 - 2;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( !v65 )
        {
          v71 = v166;
LABEL_175:
          v70 = sub_140029E90((__int64)v71);
          goto LABEL_176;
        }
        v66 = v65 - 4;
        if ( v66 )
        {
          if ( v66 == 2 )
          {
            if ( v51 == 2 )
              goto LABEL_157;
            if ( v51 != 3 )
            {
              if ( v51 != 7 )
              {
                v67 = v51 == 9;
                goto LABEL_177;
              }
              if ( !*((_QWORD *)v50 + 1) )
              {
LABEL_156:
                v70 = sub_14002A220((__int64)v50);
LABEL_176:
                v63 = v70;
                v67 = v70 == 0;
LABEL_177:
                if ( !v67 )
                  goto LABEL_178;
                goto LABEL_179;
              }
LABEL_157:
              v70 = sub_140029F90((__int64)v166);
              goto LABEL_176;
            }
            goto LABEL_174;
          }
LABEL_178:
          sub_1400640B0(v63);
          goto LABEL_152;
        }
        if ( v51 == 2 )
        {
          if ( Buf2[0] )
          {
            v70 = sub_14002A090((__int64)v50);
            goto LABEL_176;
          }
          goto LABEL_163;
        }
        if ( v51 != 3 )
        {
          if ( v51 != 7 )
          {
            if ( v51 != 9 )
              goto LABEL_178;
            if ( !Buf2[0] )
            {
LABEL_163:
              v70 = sub_14002A220((__int64)v166);
              goto LABEL_176;
            }
LABEL_171:
            v70 = sub_140029F90((__int64)v50);
            goto LABEL_176;
          }
LABEL_179:
          switch ( *v50 )
          {
            case 2:
            case 9:
              v68 = (const void **)(v50 + 8);
              v76 = *((_QWORD *)v50 + 1) <= (__int64)Buf2[0];
              goto LABEL_190;
            case 3:
              v68 = (const void **)(v50 + 8);
              v69 = sub_140066BD0((_WORD *)v50 + 4, Buf2);
              break;
            case 5:
              v68 = (const void **)(v50 + 8);
              v69 = *((void **)v50 + 1) != Buf2[0];
              break;
            case 6:
              v68 = (const void **)(v50 + 8);
              v76 = *((_DWORD *)v50 + 2) <= SLODWORD(Buf2[0]);
LABEL_190:
              if ( v76 )
                goto LABEL_191;
              goto LABEL_153;
            case 7:
              v68 = (const void **)(v50 + 8);
              v72 = *((_QWORD *)v50 + 2);
              v73 = v72 - 1;
              if ( !v72 )
                v73 = 0;
              v74 = (char *)Buf2[1] - 1;
              if ( !Buf2[1] )
                v74 = nullptr;
              v75 = (size_t)v74;
              if ( v73 < (unsigned __int64)v74 )
                v75 = v73;
              v69 = memcmp(*v68, Buf2[0], v75);
              if ( v69 )
                break;
              if ( v73 < (unsigned __int64)v74 )
LABEL_191:
                v69 = -1;
              else
                v69 = v73 > (unsigned __int64)v74;
              break;
            case 8:
              v68 = (const void **)(v50 + 8);
              v77 = *((void **)v50 + 1);
              if ( v77 > Buf2[0] )
                goto LABEL_153;
              if ( v77 >= Buf2[0] )
                v69 = 0;
              else
                v69 = -1;
              break;
            default:
              goto LABEL_152;
          }
LABEL_154:
          sub_140029390((__int64)v50);
          sub_140029390((__int64)v166);
          *v68 = (const void *)(v69 == 0);
          sub_140029390((__int64)v166);
          return 0;
        }
      }
      else
      {
        if ( v51 == 2 )
          goto LABEL_179;
        if ( v51 != 3 )
        {
          if ( v51 == 7 )
          {
            if ( *((_QWORD *)v50 + 1) )
            {
              v70 = sub_14002A090((__int64)v166);
              goto LABEL_176;
            }
            goto LABEL_156;
          }
          if ( v51 != 9 )
            goto LABEL_178;
          goto LABEL_171;
        }
      }
LABEL_174:
      v71 = v50;
      goto LABEL_175;
    case -55:
      v169[0] = 2;
      v170[1] = nullptr;
      v171 = 0;
      v170[0] = nullptr;
      sub_140028C20(a1, v169);
      v78 = (char *)(32LL * a1[1] + *a1 - 32LL);
      if ( !sub_1400291D0(v78, 2) )
        goto LABEL_236;
      v79 = v169[0];
      if ( v169[0] != 10 )
        goto LABEL_220;
      v80 = v169;
      v181 = nullptr;
      v182 = 0;
      v183 = 0;
      v81 = sub_14002DA30();
      v82 = v182;
      while ( 2 )
      {
        v83 = v80 + 8;
        v80 = nullptr;
        v84 = *((int *)v83 + 2);
        if ( (v84 & 0x80000000) != 0LL )
        {
          v80 = (char *)sub_1400258A0((__int64)v81, ~(_DWORD)v84);
          v82 = v182;
        }
        else
        {
          v85 = *(_QWORD *)v83;
          if ( v85 && *(_DWORD *)v85 == 289621065 && v84 < *(_QWORD *)(v85 + 32) )
            v80 = (char *)(*(_QWORD *)(v85 + 24) + 32 * v84);
        }
        if ( !v80 )
          goto LABEL_233;
        if ( *v80 == 10 )
        {
          v86 = v181;
          v87 = (char **)v181;
          v88 = (char **)((char *)v181 + 8 * v82);
          if ( v181 == v88 )
          {
LABEL_213:
            if ( v82 + 1 > v183 )
            {
              v86 = sub_14005ABE0((__int64)&v181, v181, v82 + 1, 8u);
              v181 = v86;
              v82 = v182;
            }
            *((_QWORD *)v86 + v82) = v80;
            v82 = ++v182;
            continue;
          }
          while ( v80 != *v87 )
          {
            if ( ++v87 == v88 )
              goto LABEL_213;
          }
LABEL_233:
          sub_1400640B0(0x61Bu);
          goto LABEL_234;
        }
        break;
      }
      v169[0] = 2;
      if ( (unsigned int)sub_140028E70(v169, v80) )
      {
LABEL_234:
        if ( v181 )
        {
          v182 = 0;
          j_free(v181);
        }
LABEL_236:
        v96 = (const void **)(v78 + 8);
LABEL_237:
        v97 = 1;
        goto LABEL_238;
      }
      if ( v181 )
      {
        v182 = 0;
        j_free(v181);
      }
      v79 = v169[0];
LABEL_220:
      v89 = *v78;
      if ( *v78 == v79 )
        goto LABEL_263;
      if ( (unsigned __int8)v89 > 9u )
        goto LABEL_236;
      v90 = 654;
      if ( !_bittest(&v90, v89) || (unsigned __int8)v79 > 9u || !_bittest(&v90, v79) )
        goto LABEL_236;
      v91 = 61;
      v92 = v89 - 2;
      if ( v92 )
      {
        v93 = v92 - 1;
        if ( !v93 )
        {
          v99 = v169;
LABEL_259:
          v98 = sub_140029E90((__int64)v99);
          goto LABEL_260;
        }
        v94 = v93 - 4;
        if ( v94 )
        {
          if ( v94 == 2 )
          {
            if ( v79 == 2 )
              goto LABEL_241;
            if ( v79 != 3 )
            {
              if ( v79 != 7 )
              {
                v95 = v79 == 9;
                goto LABEL_261;
              }
              if ( !*((_QWORD *)v78 + 1) )
              {
LABEL_240:
                v98 = sub_14002A220((__int64)v78);
LABEL_260:
                v91 = v98;
                v95 = v98 == 0;
LABEL_261:
                if ( !v95 )
                  goto LABEL_262;
                goto LABEL_263;
              }
LABEL_241:
              v98 = sub_140029F90((__int64)v169);
              goto LABEL_260;
            }
            goto LABEL_258;
          }
LABEL_262:
          sub_1400640B0(v91);
          goto LABEL_236;
        }
        if ( v79 == 2 )
        {
          if ( v170[0] )
          {
            v98 = sub_14002A090((__int64)v78);
            goto LABEL_260;
          }
          goto LABEL_247;
        }
        if ( v79 != 3 )
        {
          if ( v79 != 7 )
          {
            if ( v79 != 9 )
              goto LABEL_262;
            if ( !v170[0] )
            {
LABEL_247:
              v98 = sub_14002A220((__int64)v169);
              goto LABEL_260;
            }
LABEL_255:
            v98 = sub_140029F90((__int64)v78);
            goto LABEL_260;
          }
LABEL_263:
          switch ( *v78 )
          {
            case 2:
            case 9:
              v96 = (const void **)(v78 + 8);
              v104 = *((_QWORD *)v78 + 1) <= (__int64)v170[0];
              goto LABEL_274;
            case 3:
              v96 = (const void **)(v78 + 8);
              v97 = sub_140066BD0((_WORD *)v78 + 4, v170);
              break;
            case 5:
              v96 = (const void **)(v78 + 8);
              v97 = *((void **)v78 + 1) != v170[0];
              break;
            case 6:
              v96 = (const void **)(v78 + 8);
              v104 = *((_DWORD *)v78 + 2) <= SLODWORD(v170[0]);
LABEL_274:
              if ( v104 )
                goto LABEL_275;
              goto LABEL_237;
            case 7:
              v96 = (const void **)(v78 + 8);
              v100 = *((_QWORD *)v78 + 2);
              v101 = v100 - 1;
              if ( !v100 )
                v101 = 0;
              v102 = (char *)v170[1] - 1;
              if ( !v170[1] )
                v102 = nullptr;
              v103 = (size_t)v102;
              if ( v101 < (unsigned __int64)v102 )
                v103 = v101;
              v97 = memcmp(*v96, v170[0], v103);
              if ( v97 )
                break;
              if ( v101 < (unsigned __int64)v102 )
LABEL_275:
                v97 = -1;
              else
                v97 = v101 > (unsigned __int64)v102;
              break;
            case 8:
              v96 = (const void **)(v78 + 8);
              v105 = *((void **)v78 + 1);
              if ( v105 > v170[0] )
                goto LABEL_237;
              if ( v105 >= v170[0] )
                v97 = 0;
              else
                v97 = -1;
              break;
            default:
              goto LABEL_236;
          }
LABEL_238:
          sub_140029390((__int64)v78);
          sub_140029390((__int64)v169);
          *v96 = (const void *)(v97 != 0);
          sub_140029390((__int64)v169);
          return 0;
        }
      }
      else
      {
        if ( v79 == 2 )
          goto LABEL_263;
        if ( v79 != 3 )
        {
          if ( v79 == 7 )
          {
            if ( *((_QWORD *)v78 + 1) )
            {
              v98 = sub_14002A090((__int64)v169);
              goto LABEL_260;
            }
            goto LABEL_240;
          }
          if ( v79 != 9 )
            goto LABEL_262;
          goto LABEL_255;
        }
      }
LABEL_258:
      v99 = v78;
      goto LABEL_259;
    case -54:
      v172[0] = 2;
      v173[1] = nullptr;
      v174 = 0;
      v173[0] = nullptr;
      sub_140028C20(a1, v172);
      v106 = (char *)(32LL * a1[1] + *a1 - 32LL);
      if ( !sub_1400291D0(v106, 2) )
        goto LABEL_320;
      v107 = v172[0];
      if ( v172[0] != 10 )
        goto LABEL_304;
      v108 = v172;
      v184 = nullptr;
      v185 = 0;
      v186 = 0;
      v109 = sub_14002DA30();
      v110 = v185;
      while ( 2 )
      {
        v111 = v108 + 8;
        v108 = nullptr;
        v112 = *((int *)v111 + 2);
        if ( (v112 & 0x80000000) != 0LL )
        {
          v108 = (char *)sub_1400258A0((__int64)v109, ~(_DWORD)v112);
          v110 = v185;
        }
        else
        {
          v113 = *(_QWORD *)v111;
          if ( v113 && *(_DWORD *)v113 == 289621065 && v112 < *(_QWORD *)(v113 + 32) )
            v108 = (char *)(*(_QWORD *)(v113 + 24) + 32 * v112);
        }
        if ( !v108 )
          goto LABEL_317;
        if ( *v108 == 10 )
        {
          v114 = v184;
          v115 = (char **)v184;
          v116 = (char **)((char *)v184 + 8 * v110);
          if ( v184 == v116 )
          {
LABEL_297:
            if ( v110 + 1 > v186 )
            {
              v114 = sub_14005ABE0((__int64)&v184, v184, v110 + 1, 8u);
              v184 = v114;
              v110 = v185;
            }
            *((_QWORD *)v114 + v110) = v108;
            v110 = ++v185;
            continue;
          }
          while ( v108 != *v115 )
          {
            if ( ++v115 == v116 )
              goto LABEL_297;
          }
LABEL_317:
          sub_1400640B0(0x61Bu);
          goto LABEL_318;
        }
        break;
      }
      v172[0] = 2;
      if ( (unsigned int)sub_140028E70(v172, v108) )
      {
LABEL_318:
        if ( v184 )
        {
          v185 = 0;
          j_free(v184);
        }
LABEL_320:
        v124 = (const void **)(v106 + 8);
LABEL_321:
        v125 = 1;
        goto LABEL_322;
      }
      if ( v184 )
      {
        v185 = 0;
        j_free(v184);
      }
      v107 = v172[0];
LABEL_304:
      v117 = *v106;
      if ( *v106 == v107 )
        goto LABEL_347;
      if ( (unsigned __int8)v117 > 9u )
        goto LABEL_320;
      v118 = 654;
      if ( !_bittest(&v118, v117) || (unsigned __int8)v107 > 9u || !_bittest(&v118, v107) )
        goto LABEL_320;
      v119 = 61;
      v120 = v117 - 2;
      if ( v120 )
      {
        v121 = v120 - 1;
        if ( !v121 )
        {
          v127 = v172;
LABEL_343:
          v126 = sub_140029E90((__int64)v127);
          goto LABEL_344;
        }
        v122 = v121 - 4;
        if ( v122 )
        {
          if ( v122 == 2 )
          {
            if ( v107 == 2 )
              goto LABEL_325;
            if ( v107 != 3 )
            {
              if ( v107 != 7 )
              {
                v123 = v107 == 9;
                goto LABEL_345;
              }
              if ( !*((_QWORD *)v106 + 1) )
              {
LABEL_324:
                v126 = sub_14002A220((__int64)v106);
LABEL_344:
                v119 = v126;
                v123 = v126 == 0;
LABEL_345:
                if ( !v123 )
                  goto LABEL_346;
                goto LABEL_347;
              }
LABEL_325:
              v126 = sub_140029F90((__int64)v172);
              goto LABEL_344;
            }
            goto LABEL_342;
          }
LABEL_346:
          sub_1400640B0(v119);
          goto LABEL_320;
        }
        if ( v107 == 2 )
        {
          if ( v173[0] )
          {
            v126 = sub_14002A090((__int64)v106);
            goto LABEL_344;
          }
          goto LABEL_331;
        }
        if ( v107 != 3 )
        {
          if ( v107 != 7 )
          {
            if ( v107 != 9 )
              goto LABEL_346;
            if ( !v173[0] )
            {
LABEL_331:
              v126 = sub_14002A220((__int64)v172);
              goto LABEL_344;
            }
LABEL_339:
            v126 = sub_140029F90((__int64)v106);
            goto LABEL_344;
          }
LABEL_347:
          switch ( *v106 )
          {
            case 2:
            case 9:
              v124 = (const void **)(v106 + 8);
              v132 = *((_QWORD *)v106 + 1) <= (__int64)v173[0];
              goto LABEL_358;
            case 3:
              v124 = (const void **)(v106 + 8);
              v125 = sub_140066BD0((_WORD *)v106 + 4, v173);
              break;
            case 5:
              v124 = (const void **)(v106 + 8);
              v125 = *((void **)v106 + 1) != v173[0];
              break;
            case 6:
              v124 = (const void **)(v106 + 8);
              v132 = *((_DWORD *)v106 + 2) <= SLODWORD(v173[0]);
LABEL_358:
              if ( v132 )
                goto LABEL_359;
              goto LABEL_321;
            case 7:
              v124 = (const void **)(v106 + 8);
              v128 = *((_QWORD *)v106 + 2);
              v129 = v128 - 1;
              if ( !v128 )
                v129 = 0;
              v130 = (char *)v173[1] - 1;
              if ( !v173[1] )
                v130 = nullptr;
              v131 = (size_t)v130;
              if ( v129 < (unsigned __int64)v130 )
                v131 = v129;
              v125 = memcmp(*v124, v173[0], v131);
              if ( v125 )
                break;
              if ( v129 < (unsigned __int64)v130 )
LABEL_359:
                v125 = -1;
              else
                v125 = v129 > (unsigned __int64)v130;
              break;
            case 8:
              v124 = (const void **)(v106 + 8);
              v133 = *((void **)v106 + 1);
              if ( v133 > v173[0] )
                goto LABEL_321;
              if ( v133 >= v173[0] )
                v125 = 0;
              else
                v125 = -1;
              break;
            default:
              goto LABEL_320;
          }
LABEL_322:
          sub_140029390((__int64)v106);
          sub_140029390((__int64)v172);
          *v124 = (const void *)(v125 <= 0);
          sub_140029390((__int64)v172);
          return 0;
        }
      }
      else
      {
        if ( v107 == 2 )
          goto LABEL_347;
        if ( v107 != 3 )
        {
          if ( v107 == 7 )
          {
            if ( *((_QWORD *)v106 + 1) )
            {
              v126 = sub_14002A090((__int64)v172);
              goto LABEL_344;
            }
            goto LABEL_324;
          }
          if ( v107 != 9 )
            goto LABEL_346;
          goto LABEL_339;
        }
      }
LABEL_342:
      v127 = v106;
      goto LABEL_343;
    case -53:
      v226[0] = 2;
      v228 = 0;
      v227 = 0u;
      sub_140028C20(a1, v226);
      v134 = *a1 + 32LL * a1[1];
      v135 = sub_1400217A0(v134 - 32, (__int64)v226) >= 0;
      sub_140029390(v134 - 32);
      sub_140029390((__int64)v226);
      *(_QWORD *)(v134 - 24) = v135;
      sub_140029390((__int64)v226);
      return 0;
    case -52:
      v229[0] = 2;
      v231 = 0;
      v230 = 0u;
      sub_140028C20(a1, v229);
      v136 = *a1 + 32LL * a1[1];
      v137 = (unsigned int)sub_1400217A0(v136 - 32, (__int64)v229) >> 31;
      sub_140029390(v136 - 32);
      sub_140029390((__int64)v229);
      *(_QWORD *)(v136 - 24) = v137;
      sub_140029390((__int64)v229);
      return 0;
    case -51:
      v175[0] = 2;
      v176[1] = nullptr;
      v177 = 0;
      v176[0] = nullptr;
      sub_140028C20(a1, v175);
      v138 = (char *)(32LL * a1[1] + *a1 - 32LL);
      if ( !sub_1400291D0(v138, 2) )
        goto LABEL_406;
      v139 = v175[0];
      if ( v175[0] != 10 )
        goto LABEL_390;
      v140 = v175;
      v187 = nullptr;
      v188 = 0;
      v189 = 0;
      v141 = sub_14002DA30();
      v142 = v188;
      while ( 2 )
      {
        v143 = v140 + 8;
        v140 = nullptr;
        v144 = *((int *)v143 + 2);
        if ( (v144 & 0x80000000) != 0LL )
        {
          v140 = (char *)sub_1400258A0((__int64)v141, ~(_DWORD)v144);
          v142 = v188;
        }
        else
        {
          v145 = *(_QWORD *)v143;
          if ( v145 && *(_DWORD *)v145 == 289621065 && v144 < *(_QWORD *)(v145 + 32) )
            v140 = (char *)(*(_QWORD *)(v145 + 24) + 32 * v144);
        }
        if ( !v140 )
          goto LABEL_403;
        if ( *v140 == 10 )
        {
          v146 = v187;
          v147 = (char **)v187;
          v148 = (char **)((char *)v187 + 8 * v142);
          if ( v187 == v148 )
          {
LABEL_383:
            if ( v142 + 1 > v189 )
            {
              v146 = sub_14005ABE0((__int64)&v187, v187, v142 + 1, 8u);
              v187 = v146;
              v142 = v188;
            }
            *((_QWORD *)v146 + v142) = v140;
            v142 = ++v188;
            continue;
          }
          while ( v140 != *v147 )
          {
            if ( ++v147 == v148 )
              goto LABEL_383;
          }
LABEL_403:
          sub_1400640B0(0x61Bu);
          goto LABEL_404;
        }
        break;
      }
      v175[0] = 2;
      if ( (unsigned int)sub_140028E70(v175, v140) )
      {
LABEL_404:
        if ( v187 )
        {
          v188 = 0;
          j_free(v187);
        }
LABEL_406:
        v156 = (const void **)(v138 + 8);
LABEL_407:
        v157 = 1;
        goto LABEL_408;
      }
      if ( v187 )
      {
        v188 = 0;
        j_free(v187);
      }
      v139 = v175[0];
LABEL_390:
      v149 = *v138;
      if ( *v138 == v139 )
        goto LABEL_434;
      if ( (unsigned __int8)v149 > 9u )
        goto LABEL_406;
      v150 = 654;
      if ( !_bittest(&v150, v149) || (unsigned __int8)v139 > 9u || !_bittest(&v150, v139) )
        goto LABEL_406;
      v151 = 61;
      v152 = v149 - 2;
      if ( !v152 )
      {
        if ( v139 == 2 )
          goto LABEL_434;
        if ( v139 != 3 )
        {
          if ( v139 == 7 )
          {
            if ( *((_QWORD *)v138 + 1) )
            {
              v158 = sub_14002A090((__int64)v175);
              goto LABEL_431;
            }
            goto LABEL_411;
          }
          if ( v139 == 9 )
            goto LABEL_426;
          goto LABEL_433;
        }
LABEL_429:
        v159 = v138;
        goto LABEL_430;
      }
      v153 = v152 - 1;
      if ( !v153 )
      {
        v159 = v175;
LABEL_430:
        v158 = sub_140029E90((__int64)v159);
        goto LABEL_431;
      }
      v154 = v153 - 4;
      if ( !v154 )
      {
        if ( v139 == 2 )
        {
          if ( v176[0] )
          {
            v158 = sub_14002A090((__int64)v138);
            goto LABEL_431;
          }
          goto LABEL_418;
        }
        if ( v139 != 3 )
        {
          if ( v139 == 7 )
            goto LABEL_434;
          if ( v139 == 9 )
          {
            if ( !v176[0] )
            {
LABEL_418:
              v158 = sub_14002A220((__int64)v175);
              goto LABEL_431;
            }
LABEL_426:
            v158 = sub_140029F90((__int64)v138);
            goto LABEL_431;
          }
LABEL_433:
          sub_1400640B0(v151);
          goto LABEL_406;
        }
        goto LABEL_429;
      }
      if ( v154 != 2 )
        goto LABEL_433;
      if ( v139 == 2 )
      {
LABEL_412:
        v158 = sub_140029F90((__int64)v175);
        goto LABEL_431;
      }
      if ( v139 == 3 )
        goto LABEL_429;
      if ( v139 != 7 )
      {
        v155 = v139 == 9;
        goto LABEL_432;
      }
      if ( *((_QWORD *)v138 + 1) )
        goto LABEL_412;
LABEL_411:
      v158 = sub_14002A220((__int64)v138);
LABEL_431:
      v151 = v158;
      v155 = v158 == 0;
LABEL_432:
      if ( !v155 )
        goto LABEL_433;
LABEL_434:
      switch ( *v138 )
      {
        case 2:
        case 9:
          v156 = (const void **)(v138 + 8);
          v164 = *((_QWORD *)v138 + 1) <= (__int64)v176[0];
          goto LABEL_445;
        case 3:
          v156 = (const void **)(v138 + 8);
          v157 = sub_140066BD0((_WORD *)v138 + 4, v176);
          break;
        case 5:
          v156 = (const void **)(v138 + 8);
          v157 = *((void **)v138 + 1) != v176[0];
          break;
        case 6:
          v156 = (const void **)(v138 + 8);
          v164 = *((_DWORD *)v138 + 2) <= SLODWORD(v176[0]);
LABEL_445:
          if ( v164 )
            goto LABEL_446;
          goto LABEL_407;
        case 7:
          v156 = (const void **)(v138 + 8);
          v160 = *((_QWORD *)v138 + 2);
          v161 = v160 - 1;
          if ( !v160 )
            v161 = 0;
          v162 = (char *)v176[1] - 1;
          if ( !v176[1] )
            v162 = nullptr;
          v163 = (size_t)v162;
          if ( v161 < (unsigned __int64)v162 )
            v163 = v161;
          v157 = memcmp(*v156, v176[0], v163);
          if ( v157 )
            break;
          if ( v161 < (unsigned __int64)v162 )
LABEL_446:
            v157 = -1;
          else
            v157 = v161 > (unsigned __int64)v162;
          break;
        case 8:
          v156 = (const void **)(v138 + 8);
          v165 = *((void **)v138 + 1);
          if ( v165 > v176[0] )
            goto LABEL_407;
          if ( v165 >= v176[0] )
            v157 = 0;
          else
            v157 = -1;
          break;
        default:
          goto LABEL_406;
      }
LABEL_408:
      sub_140029390((__int64)v138);
      sub_140029390((__int64)v175);
      *v156 = (const void *)(v157 > 0);
      sub_140029390((__int64)v175);
      return 0;
    case -50:
      return sub_14002A090(*a1 - 32LL + 32LL * a1[1]);
    case -48:
      return sub_140029E90(*a1 - 32LL + 32LL * a1[1]);
    case -47:
      return sub_140029F90(*a1 - 32LL + 32LL * a1[1]);
    default:
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(1448);
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
