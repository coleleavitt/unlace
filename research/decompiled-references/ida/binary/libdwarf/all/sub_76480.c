unsigned __int64 __fastcall sub_76480(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        int *a5,
        char a6)
{
  _BYTE *v7; // r13
  int v11; // esi
  void (*v12)(void); // rax
  unsigned __int64 result; // rax
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r9
  _BYTE *v20; // r15
  _BYTE *v21; // r11
  unsigned __int64 v22; // r10
  unsigned int v23; // r10d
  unsigned int v24; // ecx
  unsigned __int8 *v25; // rdx
  unsigned int v26; // ecx
  unsigned __int8 *v27; // rdx
  unsigned __int8 v28; // r10
  unsigned int v29; // ecx
  unsigned __int8 *v30; // rdx
  unsigned __int8 v31; // r9
  unsigned int v32; // edx
  int *v33; // r14
  _BYTE *v34; // r8
  int v35; // edx
  unsigned __int8 *v36; // r10
  int v37; // eax
  unsigned __int8 *v38; // r9
  __int64 v39; // rsi
  __int64 *v40; // r12
  int v41; // edi
  __int64 *v42; // rcx
  __int64 v43; // rsi
  int v44; // ecx
  bool v45; // cl
  unsigned int v46; // esi
  __int64 v47; // rdi
  unsigned int v48; // r15d
  unsigned __int8 *v49; // r11
  int v50; // ebp
  unsigned __int8 v51; // cl
  __int64 v52; // r11
  int v53; // ebp
  unsigned int v54; // ebx
  unsigned __int8 *v55; // r11
  unsigned __int8 v56; // cl
  unsigned int v57; // ebx
  __int64 v58; // r11
  unsigned __int8 *v59; // r11
  unsigned __int8 v60; // cl
  unsigned __int8 *v61; // r15
  unsigned __int8 v62; // cl
  int v63; // edx
  unsigned __int8 *v64; // r15
  unsigned __int8 v65; // cl
  int v66; // ebp
  __int64 v67; // r15
  unsigned __int8 *v68; // r15
  unsigned __int8 v69; // cl
  unsigned int v70; // ebx
  __int64 v71; // r15
  unsigned __int8 *v72; // r15
  unsigned __int8 v73; // cl
  unsigned __int8 *v74; // r15
  unsigned __int8 v75; // cl
  int v76; // edx
  unsigned __int8 *v77; // r15
  unsigned __int8 v78; // cl
  int v79; // ebp
  __int64 v80; // r15
  unsigned __int8 *v81; // r15
  unsigned __int8 v82; // cl
  unsigned int v83; // ebx
  __int64 v84; // r15
  unsigned __int8 *v85; // r15
  unsigned __int8 v86; // cl
  unsigned __int8 *v87; // r15
  unsigned __int8 v88; // cl
  int v89; // edx
  unsigned __int8 *v90; // rdi
  unsigned __int8 v91; // cl
  unsigned int v92; // ebp
  __int64 v93; // rdi
  unsigned __int8 *v94; // rdi
  unsigned __int8 v95; // cl
  unsigned int v96; // ebx
  __int64 v97; // rdi
  unsigned __int8 *v98; // rdi
  unsigned __int8 v99; // cl
  unsigned int v100; // r11d
  unsigned __int8 *v101; // rsi
  unsigned int v102; // edx
  __int64 v103; // r11
  __int64 v104; // r10
  __int64 v105; // rcx
  unsigned int v106; // ecx
  __int64 v107; // rcx
  unsigned int v108; // edx
  unsigned int v109; // r9d
  int v110; // r10d
  int v111; // r8d
  unsigned int v112; // ecx
  __int64 v113; // rbx
  __int64 v114; // rax
  unsigned __int8 *v115; // rcx
  unsigned int v116; // r8d
  __int64 v117; // r9
  unsigned __int8 *v118; // rcx
  unsigned int v119; // r8d
  unsigned __int8 *v120; // rcx
  unsigned int v121; // r8d
  unsigned __int8 *v122; // rax
  __int64 *v123; // rax
  __int64 v124; // r8
  unsigned int v125; // edx
  unsigned __int8 *v126; // rax
  unsigned __int8 v127; // cl
  unsigned int v128; // eax
  unsigned __int64 v129; // rbx
  __int64 *v130; // r11
  unsigned __int64 v131; // rdi
  int v132; // r10d
  int v133; // r9d
  unsigned int v134; // ecx
  __int64 v135; // r8
  __int64 v136; // rax
  unsigned __int8 *v137; // rdx
  unsigned __int8 v138; // cl
  unsigned __int8 *v139; // rcx
  unsigned __int8 *v140; // rcx
  unsigned __int8 *v141; // rax
  __int64 v142; // r8
  unsigned int v143; // edx
  _BYTE *v144; // rax
  unsigned __int8 *v145; // rcx
  unsigned __int8 v146; // r9
  unsigned int v147; // eax
  unsigned __int64 v148; // rbx
  __int64 *v149; // r11
  unsigned __int64 v150; // rdi
  int v151; // r10d
  int v152; // r9d
  unsigned int v153; // ecx
  __int64 v154; // r8
  __int64 v155; // rax
  unsigned __int8 *v156; // rdx
  unsigned __int8 v157; // cl
  unsigned __int8 *v158; // rcx
  unsigned __int8 *v159; // rcx
  unsigned __int8 *v160; // rax
  __int64 v161; // r8
  unsigned int v162; // edx
  _BYTE *v163; // rax
  unsigned __int8 *v164; // rcx
  unsigned __int8 v165; // r9
  unsigned int v166; // edx
  unsigned __int64 v167; // r10
  __int64 *v168; // r8
  _BYTE *v169; // r9
  int v170; // edi
  int v171; // r11d
  unsigned int v172; // ecx
  __int64 v173; // rbx
  __int64 v174; // rax
  unsigned __int8 *v175; // rdx
  unsigned __int8 v176; // cl
  unsigned __int8 *v177; // rcx
  unsigned __int8 *v178; // rcx
  unsigned __int8 *v179; // rax
  __int64 *v180; // rax
  __int64 v181; // r9
  unsigned int v182; // r8d
  _BYTE *v183; // rdx
  unsigned __int8 *v184; // rcx
  unsigned __int8 v185; // r10
  _BOOL4 v186; // edx
  _BOOL4 v187; // ecx
  unsigned int v188; // ecx
  __int64 v189; // rdi
  __int64 *v190; // rax
  unsigned int v191; // edx
  __int64 v192; // rcx
  unsigned int v193; // ecx
  __int64 v194; // rdi
  unsigned int v195; // ecx
  __int64 v196; // rdi
  unsigned __int16 v197; // [rsp+8h] [rbp-160h]
  unsigned __int8 *v198; // [rsp+8h] [rbp-160h]
  _BYTE *v199; // [rsp+8h] [rbp-160h]
  _BYTE *v200; // [rsp+10h] [rbp-158h]
  unsigned __int64 v201; // [rsp+18h] [rbp-150h]
  unsigned __int64 v202; // [rsp+20h] [rbp-148h]
  unsigned __int16 v203; // [rsp+28h] [rbp-140h]
  unsigned __int64 v204; // [rsp+28h] [rbp-140h]
  unsigned __int64 v205; // [rsp+30h] [rbp-138h]
  int v206; // [rsp+30h] [rbp-138h]
  _BYTE *v207; // [rsp+30h] [rbp-138h]
  __int64 *v208; // [rsp+38h] [rbp-130h]
  unsigned __int16 *v209; // [rsp+40h] [rbp-128h]
  int v210; // [rsp+48h] [rbp-120h]
  _BYTE *v211; // [rsp+48h] [rbp-120h]
  _BYTE *v212; // [rsp+48h] [rbp-120h]
  unsigned __int8 *v213; // [rsp+50h] [rbp-118h]
  unsigned __int8 *v214; // [rsp+58h] [rbp-110h]
  int v215; // [rsp+64h] [rbp-104h]
  unsigned __int64 v216; // [rsp+68h] [rbp-100h]
  __int64 v217; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v218; // [rsp+78h] [rbp-F0h]
  __int64 *v219; // [rsp+80h] [rbp-E8h]
  __int64 *v220; // [rsp+88h] [rbp-E0h]
  unsigned __int16 *v221; // [rsp+90h] [rbp-D8h]
  __int64 v222; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v223; // [rsp+A8h] [rbp-C0h]
  __int64 *v224; // [rsp+B0h] [rbp-B8h]
  __int64 *v225; // [rsp+B8h] [rbp-B0h]
  unsigned __int8 *v226; // [rsp+C0h] [rbp-A8h]
  __int64 v227; // [rsp+D0h] [rbp-98h] BYREF
  unsigned int v228; // [rsp+D8h] [rbp-90h]
  __int64 *v229; // [rsp+E0h] [rbp-88h]
  __int64 *v230; // [rsp+E8h] [rbp-80h]
  unsigned __int8 *v231; // [rsp+F0h] [rbp-78h]
  __int64 v232; // [rsp+100h] [rbp-68h] BYREF
  unsigned int v233; // [rsp+108h] [rbp-60h]
  __int64 *v234; // [rsp+110h] [rbp-58h]
  __int64 *v235; // [rsp+118h] [rbp-50h]
  unsigned __int8 *v236; // [rsp+120h] [rbp-48h]
  unsigned __int64 v237; // [rsp+128h] [rbp-40h]

  v7 = (_BYTE *)a1;
  v237 = __readfsqword(0x28u);
  v11 = a6 & 1;
  if ( (a6 & 1) == 0 )
  {
    if ( a4 <= 9 )
      return -20;
    if ( a2 <= 5 )
      return -20;
    v14 = a1 + a2;
    v15 = *a3;
    v16 = a3[1];
    v17 = v14;
    v202 = v14;
    v18 = (a2 + 3) >> 2;
    v19 = a3[2];
    v20 = &v7[v18];
    v197 = a3[1];
    v21 = &v7[v18 + v18];
    v203 = a3[2];
    v22 = (unsigned __int64)&v21[v18];
    v200 = v21;
    v205 = a4 - (v15 + v16) - v19;
    result = v205 - 6;
    v201 = v22;
    if ( a4 < v205 - 6 || v17 < v22 )
      return -20;
    if ( !v15 )
      return -72;
    v208 = (__int64 *)(a3 + 3);
    v210 = *a5;
    v220 = (__int64 *)(a3 + 3);
    v209 = a3 + 7;
    v221 = a3 + 7;
    v23 = *((unsigned __int8 *)a3 + v15 + 5);
    if ( v15 <= 7 )
    {
      v219 = (__int64 *)(a3 + 3);
      v103 = *((unsigned __int8 *)a3 + 6);
      v217 = v103;
      switch ( v15 )
      {
        case 2uLL:
          goto LABEL_48;
        case 3uLL:
          goto LABEL_47;
        case 4uLL:
          goto LABEL_46;
        case 5uLL:
          goto LABEL_45;
        case 6uLL:
          goto LABEL_44;
        case 7uLL:
          v103 += (unsigned __int64)*((unsigned __int8 *)a3 + 12) << 48;
LABEL_44:
          v103 += (unsigned __int64)*((unsigned __int8 *)a3 + 11) << 40;
LABEL_45:
          v103 += (unsigned __int64)*((unsigned __int8 *)a3 + 10) << 32;
LABEL_46:
          v103 += (unsigned __int64)*((unsigned __int8 *)a3 + 9) << 24;
LABEL_47:
          v103 += (unsigned __int64)*((unsigned __int8 *)a3 + 8) << 16;
LABEL_48:
          v217 = ((unsigned __int64)*((unsigned __int8 *)a3 + 7) << 8) + v103;
          break;
        default:
          break;
      }
      if ( !(_BYTE)v23 )
        return -20;
      _BitScanReverse(&v23, v23);
      v218 = (v23 ^ 0x1F) - 8 * v15 + 41;
    }
    else
    {
      v219 = (__int64 *)((char *)a3 + v15 - 2);
      v217 = *v219;
      if ( !(_BYTE)v23 )
        return -1;
      _BitScanReverse(&v24, (unsigned __int8)v23);
      v218 = (v24 ^ 0x1F) - 23;
    }
    if ( !v16 )
      return -72;
    v25 = (unsigned __int8 *)v208 + v15;
    v225 = (__int64 *)v25;
    v26 = v25[v16 - 1];
    v213 = v25 + 8;
    v226 = v25 + 8;
    if ( v16 <= 7 )
    {
      v104 = *v25;
      v224 = (__int64 *)v25;
      v222 = v104;
      switch ( v16 )
      {
        case 2uLL:
          goto LABEL_59;
        case 3uLL:
          goto LABEL_58;
        case 4uLL:
          goto LABEL_57;
        case 5uLL:
          goto LABEL_56;
        case 6uLL:
          goto LABEL_55;
        case 7uLL:
          v104 += (unsigned __int64)v25[6] << 48;
LABEL_55:
          v104 += (unsigned __int64)v25[5] << 40;
LABEL_56:
          v104 += (unsigned __int64)v25[4] << 32;
LABEL_57:
          v104 += (unsigned __int64)v25[3] << 24;
LABEL_58:
          v104 += (unsigned __int64)v25[2] << 16;
LABEL_59:
          v222 = ((unsigned __int64)v25[1] << 8) + v104;
          break;
        default:
          break;
      }
      if ( !(_BYTE)v26 )
        return -20;
      _BitScanReverse(&v26, v26);
      v223 = (v26 ^ 0x1F) - 8 * v197 + 41;
    }
    else
    {
      v224 = (__int64 *)&v25[v16 - 8];
      v222 = *v224;
      if ( !(_BYTE)v26 )
        return -1;
      _BitScanReverse(&v26, v26);
      v223 = (v26 ^ 0x1F) - 23;
    }
    if ( !v19 )
      return -72;
    v27 = &v25[v16];
    v230 = (__int64 *)v27;
    v28 = v27[v19 - 1];
    v198 = v27 + 8;
    v231 = v27 + 8;
    if ( v19 <= 7 )
    {
      v105 = *v27;
      v229 = (__int64 *)v27;
      v227 = v105;
      switch ( v19 )
      {
        case 2uLL:
          goto LABEL_68;
        case 3uLL:
          goto LABEL_67;
        case 4uLL:
          goto LABEL_66;
        case 5uLL:
          goto LABEL_65;
        case 6uLL:
          goto LABEL_64;
        case 7uLL:
          v227 = ((unsigned __int64)v27[6] << 48) + v105;
LABEL_64:
          v227 += (unsigned __int64)v27[5] << 40;
LABEL_65:
          v105 = v227 + ((unsigned __int64)v27[4] << 32);
LABEL_66:
          v105 += (unsigned __int64)v27[3] << 24;
LABEL_67:
          v105 += (unsigned __int64)v27[2] << 16;
LABEL_68:
          v227 = ((unsigned __int64)v27[1] << 8) + v105;
          break;
        default:
          break;
      }
      if ( !v28 )
        return -20;
      _BitScanReverse(&v106, v28);
      v228 = (v106 ^ 0x1F) - 8 * v203 + 41;
LABEL_26:
      if ( v205 != 6 )
      {
        v30 = &v27[v19];
        v235 = (__int64 *)v30;
        v214 = v30 + 8;
        v236 = v30 + 8;
        v31 = v30[v205 - 7];
        v107 = *v30;
        v234 = (__int64 *)v30;
        v232 = v107;
        switch ( v205 )
        {
          case 7uLL:
            goto LABEL_78;
          case 8uLL:
            goto LABEL_77;
          case 9uLL:
            goto LABEL_76;
          case 0xAuLL:
            goto LABEL_75;
          case 0xBuLL:
            goto LABEL_74;
          case 0xCuLL:
            goto LABEL_73;
          case 0xDuLL:
            v232 = ((unsigned __int64)v30[6] << 48) + v107;
LABEL_73:
            v232 += (unsigned __int64)v30[5] << 40;
LABEL_74:
            v232 += (unsigned __int64)v30[4] << 32;
LABEL_75:
            v232 += (unsigned __int64)v30[3] << 24;
LABEL_76:
            v107 = v232 + ((unsigned __int64)v30[2] << 16);
LABEL_77:
            v232 = v107 + ((unsigned __int64)v30[1] << 8);
LABEL_78:
            if ( !v31 )
              return -20;
            _BitScanReverse(&v108, v31);
            v233 = (v108 ^ 0x1F) - 8 * result + 41;
LABEL_30:
            v33 = a5 + 1;
            v34 = (_BYTE *)v201;
            v204 = v202 - 3;
            v215 = BYTE2(v210);
            if ( v202 - v201 <= 7 || v202 - 3 <= v201 )
            {
              v199 = v20;
              v212 = (_BYTE *)v201;
              v207 = v200;
            }
            else
            {
              v206 = v11;
              v35 = v233;
              v36 = v20;
              v216 = a2;
              v37 = -BYTE2(v210) & 0x3F;
              v38 = v200;
              v211 = v20;
              v39 = v232;
              v40 = v234;
              do
              {
                v47 = v217;
                v48 = v228;
                v49 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v217 << v218) >> v37);
                v50 = *v49;
                v51 = v49[1];
                v52 = v222;
                v53 = v218 + v50;
                v54 = v223;
                *v7 = v51;
                v55 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v52 << v54) >> v37);
                v56 = v55[1];
                v57 = *v55 + v54;
                v58 = v227;
                *v36 = v56;
                v59 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v58 << v48) >> v37);
                v60 = v59[1];
                LODWORD(v59) = *v59;
                *v38 = v60;
                LODWORD(v59) = v48 + (_DWORD)v59;
                v61 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v39 << v35) >> v37);
                v62 = v61[1];
                LODWORD(v61) = *v61;
                *v34 = v62;
                v63 = (_DWORD)v61 + v35;
                v64 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v47 << v53) >> v37);
                v65 = v64[1];
                v66 = *v64 + v53;
                v67 = v222;
                v7[1] = v65;
                v68 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v67 << v57) >> v37);
                v69 = v68[1];
                v70 = *v68 + v57;
                v71 = v227;
                v36[1] = v69;
                v72 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v71 << (char)v59) >> v37);
                v73 = v72[1];
                LODWORD(v72) = *v72;
                v38[1] = v73;
                LODWORD(v59) = (_DWORD)v72 + (_DWORD)v59;
                v74 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v39 << v63) >> v37);
                v75 = v74[1];
                LODWORD(v74) = *v74;
                v34[1] = v75;
                v76 = (_DWORD)v74 + v63;
                v77 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v47 << v66) >> v37);
                v78 = v77[1];
                v79 = *v77 + v66;
                v80 = v222;
                v7[2] = v78;
                v81 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v80 << v70) >> v37);
                v82 = v81[1];
                v83 = *v81 + v70;
                v84 = v227;
                v36[2] = v82;
                v85 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v84 << (char)v59) >> v37);
                v86 = v85[1];
                LODWORD(v85) = *v85;
                v38[2] = v86;
                LODWORD(v59) = (_DWORD)v85 + (_DWORD)v59;
                v7 += 4;
                v36 += 4;
                v38 += 4;
                v34 += 4;
                v87 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v39 << v76) >> v37);
                v88 = v87[1];
                LODWORD(v87) = *v87;
                *(v34 - 2) = v88;
                v89 = (_DWORD)v87 + v76;
                v90 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v47 << v79) >> v37);
                v91 = v90[1];
                v92 = *v90 + v79;
                v93 = v222;
                *(v7 - 1) = v91;
                v218 = v92;
                v94 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v93 << v83) >> v37);
                v95 = v94[1];
                v96 = *v94 + v83;
                v97 = v227;
                *(v36 - 1) = v95;
                v223 = v96;
                v98 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v97 << (char)v59) >> v37);
                v99 = v98[1];
                LODWORD(v98) = *v98;
                *(v38 - 1) = v99;
                v100 = (_DWORD)v98 + (_DWORD)v59;
                v228 = v100;
                v101 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v39 << v89) >> v37);
                v102 = *v101 + v89;
                *(v34 - 1) = v101[1];
                v233 = v102;
                if ( v209 <= (unsigned __int16 *)v219 )
                {
                  v41 = 0;
                  v218 = v92 & 7;
                  v219 = (__int64 *)((char *)v219 - (v92 >> 3));
                  v217 = *v219;
                }
                else
                {
                  v41 = 3;
                }
                if ( v213 > (unsigned __int8 *)v224 )
                {
                  v41 = 3;
                }
                else
                {
                  v223 = v96 & 7;
                  v224 = (__int64 *)((char *)v224 - (v96 >> 3));
                  v222 = *v224;
                }
                v42 = v229;
                if ( v198 > (unsigned __int8 *)v229 )
                {
                  v44 = 3;
                }
                else
                {
                  v43 = v100 >> 3;
                  v228 = v100 & 7;
                  v229 = (__int64 *)((char *)v229 - v43);
                  v227 = *(__int64 *)((char *)v42 - v43);
                  v44 = 0;
                }
                v45 = (v41 | v44) == 0;
                if ( v214 > (unsigned __int8 *)v40 )
                  break;
                v46 = v102;
                v35 = v102 & 7;
                v233 = v35;
                v40 = (__int64 *)((char *)v40 - (v46 >> 3));
                v234 = v40;
                v39 = *v40;
                v232 = *v40;
              }
              while ( v45 && v204 > (unsigned __int64)v34 );
              v11 = v206;
              v20 = v211;
              v207 = v38;
              v212 = v34;
              a2 = v216;
              v199 = v36;
            }
            if ( v200 < v199 || v20 < v7 || v201 < (unsigned __int64)v207 )
              return -20;
            v109 = v218;
            if ( v20 - v7 <= 3 )
            {
              if ( v218 <= 0x40 )
              {
                v190 = v219;
                if ( v219 >= (__int64 *)v209 )
                {
                  sub_72110((__int64)&v217);
                }
                else if ( v208 != v219 )
                {
                  v191 = v218 >> 3;
                  v192 = v218 >> 3;
                  if ( v208 > (__int64 *)((char *)v219 - v192) )
                  {
                    v191 = (_DWORD)v219 - (_DWORD)v208;
                    v192 = (unsigned int)((_DWORD)v219 - (_DWORD)v208);
                  }
                  v219 = (__int64 *)((char *)v219 - v192);
                  v218 -= 8 * v191;
                  v217 = *(__int64 *)((char *)v190 - v192);
                }
                goto LABEL_94;
              }
            }
            else if ( v218 <= 0x40 )
            {
              v110 = -v215 & 0x3F;
              while ( 1 )
              {
                v123 = v219;
                if ( v219 >= (__int64 *)v209 )
                {
                  v111 = 0;
                  v218 = v109 & 7;
                  v219 = (__int64 *)((char *)v219 - (v109 >> 3));
                  v217 = *v219;
                }
                else
                {
                  if ( v208 == v219 )
                    break;
                  v111 = 0;
                  v112 = v109 >> 3;
                  v113 = v109 >> 3;
                  if ( v208 > (__int64 *)((char *)v219 - v113) )
                  {
                    v111 = 1;
                    v112 = (_DWORD)v219 - (_DWORD)v208;
                    v113 = (unsigned int)((_DWORD)v219 - (_DWORD)v208);
                  }
                  v219 = (__int64 *)((char *)v219 - v113);
                  v218 = v109 - 8 * v112;
                  v217 = *(__int64 *)((char *)v123 - v113);
                }
                if ( v7 >= v20 - 3 || v111 )
                  break;
                v114 = v217;
                v7 += 4;
                v115 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v217 << v218) >> v110);
                v116 = v218 + *v115;
                v117 = v217;
                *(v7 - 4) = v115[1];
                v118 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v117 << v116) >> v110);
                v119 = *v118 + v116;
                *(v7 - 3) = v118[1];
                v120 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v114 << v119) >> v110);
                v121 = *v120 + v119;
                *(v7 - 2) = v120[1];
                v122 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v114 << v121) >> v110);
                v109 = v121 + *v122;
                *(v7 - 1) = v122[1];
                v218 = v109;
                if ( v109 > 0x40 )
                  goto LABEL_171;
              }
LABEL_94:
              if ( v20 > v7 )
              {
                v124 = v217;
                v125 = v218;
                do
                {
                  ++v7;
                  v126 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v124 << v125) >> (-(char)v215 & 0x3F));
                  v127 = v126[1];
                  LODWORD(v126) = *v126;
                  *(v7 - 1) = v127;
                  v125 += (unsigned int)v126;
                }
                while ( v20 != v7 );
                v218 = v125;
              }
              v128 = v223;
              if ( v200 - v199 <= 3 )
              {
                if ( v223 <= 0x40 )
                {
                  if ( v224 >= (__int64 *)v226 )
                  {
                    sub_72110((__int64)&v222);
                  }
                  else if ( v224 != v225 )
                  {
                    v188 = v223 >> 3;
                    v189 = v223 >> 3;
                    if ( v225 > (__int64 *)((char *)v224 - v189) )
                    {
                      v188 = (_DWORD)v224 - (_DWORD)v225;
                      v189 = (unsigned int)((_DWORD)v224 - (_DWORD)v225);
                    }
                    v224 = (__int64 *)((char *)v224 - v189);
                    v223 -= 8 * v188;
                    v222 = *v224;
                  }
LABEL_110:
                  if ( v200 > v199 )
                  {
                    v142 = v222;
                    v143 = v223;
                    v144 = v199;
                    do
                    {
                      ++v144;
                      v145 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v142 << v143) >> (-(char)v215 & 0x3F));
                      v146 = v145[1];
                      LODWORD(v145) = *v145;
                      *(v144 - 1) = v146;
                      v143 += (unsigned int)v145;
                    }
                    while ( v200 != v144 );
                    v223 = v143;
                  }
                  v147 = v228;
                  if ( (__int64)(v201 - (_QWORD)v207) <= 3 )
                  {
                    if ( v228 <= 0x40 )
                    {
                      if ( v229 >= (__int64 *)v231 )
                      {
                        sub_72110((__int64)&v227);
                      }
                      else if ( v229 != v230 )
                      {
                        v193 = v228 >> 3;
                        v194 = v228 >> 3;
                        if ( v230 > (__int64 *)((char *)v229 - v194) )
                        {
                          v193 = (_DWORD)v229 - (_DWORD)v230;
                          v194 = (unsigned int)((_DWORD)v229 - (_DWORD)v230);
                        }
                        v229 = (__int64 *)((char *)v229 - v194);
                        v228 -= 8 * v193;
                        v227 = *v229;
                      }
LABEL_126:
                      if ( v201 > (unsigned __int64)v207 )
                      {
                        v161 = v227;
                        v162 = v228;
                        v163 = v207;
                        do
                        {
                          ++v163;
                          v164 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v161 << v162) >> (-(char)v215 & 0x3F));
                          v165 = v164[1];
                          LODWORD(v164) = *v164;
                          *(v163 - 1) = v165;
                          v162 += (unsigned int)v164;
                        }
                        while ( (_BYTE *)v201 != v163 );
                        v228 = v162;
                      }
                      v166 = v233;
                      if ( (__int64)(v202 - (_QWORD)v212) <= 3 )
                      {
                        if ( v233 <= 0x40 )
                        {
                          v180 = v234;
                          if ( v234 >= (__int64 *)v236 )
                          {
                            sub_72110((__int64)&v232);
                            v180 = v234;
                          }
                          else if ( v234 != v235 )
                          {
                            v195 = v233 >> 3;
                            v196 = v233 >> 3;
                            if ( v235 > (__int64 *)((char *)v234 - v196) )
                            {
                              v195 = (_DWORD)v234 - (_DWORD)v235;
                              v196 = (unsigned int)((_DWORD)v234 - (_DWORD)v235);
                            }
                            v180 = (__int64 *)((char *)v234 - v196);
                            v234 = v180;
                            v233 -= 8 * v195;
                            v232 = *v180;
                          }
                          goto LABEL_142;
                        }
                      }
                      else if ( v233 <= 0x40 )
                      {
                        v167 = (unsigned __int64)v236;
                        v168 = v235;
                        v169 = v212;
                        v170 = -v215 & 0x3F;
                        while ( 1 )
                        {
                          v180 = v234;
                          if ( (unsigned __int64)v234 >= v167 )
                          {
                            v171 = 0;
                            v233 = v166 & 7;
                            v234 = (__int64 *)((char *)v234 - (v166 >> 3));
                            v232 = *v234;
                          }
                          else
                          {
                            if ( v234 == v168 )
                            {
                              v212 = v169;
                              goto LABEL_142;
                            }
                            v171 = 0;
                            v172 = v166 >> 3;
                            v173 = v166 >> 3;
                            if ( v168 > (__int64 *)((char *)v234 - v173) )
                            {
                              v171 = 1;
                              v172 = (_DWORD)v234 - (_DWORD)v168;
                              v173 = (unsigned int)((_DWORD)v234 - (_DWORD)v168);
                            }
                            v234 = (__int64 *)((char *)v234 - v173);
                            v233 = v166 - 8 * v172;
                            v232 = *(__int64 *)((char *)v180 - v173);
                          }
                          if ( v171 || v204 <= (unsigned __int64)v169 )
                            break;
                          v174 = v232;
                          v169 += 4;
                          v175 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v232 << v233) >> v170);
                          v176 = v175[1];
                          LODWORD(v175) = v233 + *v175;
                          *(v169 - 4) = v176;
                          v177 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v174 << (char)v175) >> v170);
                          LODWORD(v175) = *v177 + (_DWORD)v175;
                          *(v169 - 3) = v177[1];
                          v178 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v174 << (char)v175) >> v170);
                          LODWORD(v175) = *v178 + (_DWORD)v175;
                          *(v169 - 2) = v178[1];
                          v179 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v174 << (char)v175) >> v170);
                          v166 = *v179 + (_DWORD)v175;
                          *(v169 - 1) = v179[1];
                          v233 = v166;
                          if ( v166 > 0x40 )
                          {
                            v212 = v169;
                            goto LABEL_185;
                          }
                        }
                        v212 = v169;
                        v180 = v234;
LABEL_142:
                        if ( v202 > (unsigned __int64)v212 )
                        {
                          v181 = v232;
                          v182 = v233;
                          v183 = v212;
                          do
                          {
                            ++v183;
                            v184 = (unsigned __int8 *)v33
                                 + 2 * ((unsigned __int64)(v181 << v182) >> (-(char)v215 & 0x3F));
                            v185 = v184[1];
                            LODWORD(v184) = *v184;
                            *(v183 - 1) = v185;
                            v182 += (unsigned int)v184;
                          }
                          while ( (_BYTE *)v202 != v183 );
                          v233 = v182;
                        }
                        v186 = v219 == v220 && v218 == 64;
                        v187 = 0;
                        if ( v224 == v225 )
                          v187 = v223 == 64;
                        if ( v229 == v230 )
                          v11 = v228 == 64;
                        if ( v180 == v235 && v233 == 64 && (v11 & (v187 && v186)) != 0 )
                          return a2;
                        return -20;
                      }
LABEL_185:
                      v180 = qword_AA7C0;
                      v234 = qword_AA7C0;
                      goto LABEL_142;
                    }
                  }
                  else if ( v228 <= 0x40 )
                  {
                    v148 = (unsigned __int64)v231;
                    v149 = v230;
                    v150 = (unsigned __int64)v207;
                    v151 = -v215 & 0x3F;
                    do
                    {
                      if ( (unsigned __int64)v229 >= v148 )
                      {
                        v152 = 0;
                        v228 = v147 & 7;
                        v229 = (__int64 *)((char *)v229 - (v147 >> 3));
                        v227 = *v229;
                      }
                      else
                      {
                        if ( v229 == v149 )
                          goto LABEL_125;
                        v152 = 0;
                        v153 = v147 >> 3;
                        v154 = v147 >> 3;
                        if ( v149 > (__int64 *)((char *)v229 - v154) )
                        {
                          v152 = 1;
                          v153 = (_DWORD)v229 - (_DWORD)v149;
                          v154 = (unsigned int)((_DWORD)v229 - (_DWORD)v149);
                        }
                        v229 = (__int64 *)((char *)v229 - v154);
                        v228 = v147 - 8 * v153;
                        v227 = *v229;
                      }
                      if ( v150 >= v201 - 3 || v152 )
                      {
LABEL_125:
                        v207 = (_BYTE *)v150;
                        goto LABEL_126;
                      }
                      v155 = v227;
                      v150 += 4LL;
                      v156 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v227 << v228) >> v151);
                      v157 = v156[1];
                      LODWORD(v156) = v228 + *v156;
                      *(_BYTE *)(v150 - 4) = v157;
                      v158 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v155 << (char)v156) >> v151);
                      LODWORD(v156) = *v158 + (_DWORD)v156;
                      *(_BYTE *)(v150 - 3) = v158[1];
                      v159 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v155 << (char)v156) >> v151);
                      LODWORD(v156) = *v159 + (_DWORD)v156;
                      *(_BYTE *)(v150 - 2) = v159[1];
                      v160 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v155 << (char)v156) >> v151);
                      LOBYTE(v159) = v160[1];
                      v147 = (_DWORD)v156 + *v160;
                      *(_BYTE *)(v150 - 1) = (_BYTE)v159;
                      v228 = v147;
                    }
                    while ( v147 <= 0x40 );
                    v207 = (_BYTE *)v150;
                  }
                  v229 = qword_AA7C0;
                  goto LABEL_126;
                }
              }
              else if ( v223 <= 0x40 )
              {
                v129 = (unsigned __int64)v226;
                v130 = v225;
                v131 = (unsigned __int64)v199;
                v132 = -v215 & 0x3F;
                do
                {
                  if ( (unsigned __int64)v224 >= v129 )
                  {
                    v133 = 0;
                    v223 = v128 & 7;
                    v224 = (__int64 *)((char *)v224 - (v128 >> 3));
                    v222 = *v224;
                  }
                  else
                  {
                    if ( v224 == v130 )
                      goto LABEL_109;
                    v133 = 0;
                    v134 = v128 >> 3;
                    v135 = v128 >> 3;
                    if ( v130 > (__int64 *)((char *)v224 - v135) )
                    {
                      v133 = 1;
                      v134 = (_DWORD)v224 - (_DWORD)v130;
                      v135 = (unsigned int)((_DWORD)v224 - (_DWORD)v130);
                    }
                    v224 = (__int64 *)((char *)v224 - v135);
                    v223 = v128 - 8 * v134;
                    v222 = *v224;
                  }
                  if ( v131 >= (unsigned __int64)(v200 - 3) || v133 )
                  {
LABEL_109:
                    v199 = (_BYTE *)v131;
                    goto LABEL_110;
                  }
                  v136 = v222;
                  v131 += 4LL;
                  v137 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v222 << v223) >> v132);
                  v138 = v137[1];
                  LODWORD(v137) = v223 + *v137;
                  *(_BYTE *)(v131 - 4) = v138;
                  v139 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v136 << (char)v137) >> v132);
                  LODWORD(v137) = *v139 + (_DWORD)v137;
                  *(_BYTE *)(v131 - 3) = v139[1];
                  v140 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v136 << (char)v137) >> v132);
                  LODWORD(v137) = *v140 + (_DWORD)v137;
                  *(_BYTE *)(v131 - 2) = v140[1];
                  v141 = (unsigned __int8 *)v33 + 2 * ((unsigned __int64)(v136 << (char)v137) >> v132);
                  LOBYTE(v140) = v141[1];
                  v128 = (_DWORD)v137 + *v141;
                  *(_BYTE *)(v131 - 1) = (_BYTE)v140;
                  v223 = v128;
                }
                while ( v128 <= 0x40 );
                v199 = (_BYTE *)v131;
              }
              v224 = qword_AA7C0;
              goto LABEL_110;
            }
LABEL_171:
            v219 = qword_AA7C0;
            goto LABEL_94;
          default:
            v234 = (__int64 *)&v30[v205 - 14];
            v232 = *v234;
            if ( !v31 )
              return -1;
            _BitScanReverse(&v32, v31);
            v233 = (v32 ^ 0x1F) - 23;
            if ( result <= 0xFFFFFFFFFFFFFF88LL )
              goto LABEL_30;
            return result;
        }
      }
      return -72;
    }
    v229 = (__int64 *)&v27[v19 - 8];
    v227 = *v229;
    if ( v28 )
    {
      _BitScanReverse(&v29, v28);
      v228 = (v29 ^ 0x1F) - 23;
      goto LABEL_26;
    }
    return -1;
  }
  v12 = (void (*)(void))sub_733B0;
  if ( (a6 & 0x10) == 0 )
    v12 = (void (*)(void))sub_7D2C0;
  if ( (a6 & 0x20) != 0 )
    return sub_75080(a1, a2, a3, a4, a5);
  result = sub_730C0(a1, a2, a3, a4, (__int64)a5, v12);
  if ( !result )
    return sub_75080(a1, a2, a3, a4, a5);
  return result;
}

