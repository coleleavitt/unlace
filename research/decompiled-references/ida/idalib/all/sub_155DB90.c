__int64 __fastcall sub_155DB90(__int64 a1, __int64 a2, unsigned int a3, bool *a4)
{
  unsigned int v6; // r14d
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int16 v12; // ax
  unsigned __int16 v13; // cx
  bool v14; // si
  bool v15; // zf
  bool v16; // al
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r15
  int v27; // eax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __m128i v33; // xmm4
  __m128i v34; // xmm5
  __m128i v35; // xmm6
  int v36; // eax
  unsigned __int64 v37; // r12
  int v38; // eax
  __int16 v39; // ax
  unsigned __int16 v40; // cx
  __int64 *v41; // rdi
  __int64 *v42; // rdi
  __int64 *v43; // rdi
  __m128i v44; // xmm7
  __m128i v45; // xmm5
  __m128i v46; // xmm4
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // rdi
  char *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  __int16 v55; // ax
  __int64 v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdi
  int v61; // r14d
  unsigned __int64 v62; // rbp
  int v63; // r12d
  __int16 v64; // ax
  __int64 v65; // rdi
  __m128i v66; // xmm4
  __m128i v67; // xmm5
  __int64 v68; // rax
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 *v74; // rdi
  unsigned __int16 v75; // cx
  __int64 *v76; // rdi
  __int16 v77; // ax
  __int64 v78; // rdi
  __m128i v79; // xmm1
  __m128i v80; // xmm3
  __m128i v81; // xmm2
  unsigned __int64 v82; // rax
  __int64 v83; // rdx
  char *v84; // rdi
  char *v85; // rax
  __int16 v86; // ax
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  __int64 v89; // rsi
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // eax
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rdi
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rdi
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdi
  unsigned __int64 v109; // rax
  __int16 v110; // ax
  __int64 v111; // rdi
  __int16 v112; // dx
  __int64 v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // rbp
  unsigned __int64 v116; // rax
  __int64 v117; // rdi
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // r8
  int v121; // ebp
  __int16 v122; // ax
  int v123; // eax
  __int64 *v124; // rdi
  __m128i v125; // xmm4
  __m128i v126; // xmm5
  unsigned __int64 v127; // r8
  __m128i v128; // xmm6
  int v129; // eax
  unsigned __int64 v130; // rax
  __int64 v131; // rdx
  char *v132; // rdi
  char *v133; // rax
  __int64 v134; // rdi
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  __int16 v137; // ax
  __int64 v138; // rdi
  unsigned __int64 v139; // rax
  __int16 v140; // ax
  __int64 v141; // rdi
  unsigned __int64 v142; // rax
  unsigned __int16 v143; // cx
  int v144; // eax
  __int64 v145; // rsi
  unsigned int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rdi
  unsigned __int64 v149; // rax
  __int64 v150; // rax
  int v151; // edx
  __int64 v152; // rbp
  unsigned __int64 v153; // rax
  unsigned __int16 v154; // cx
  unsigned int v155; // eax
  __int64 v156; // rdx
  __int64 *v157; // rdi
  __int16 v158; // ax
  __int16 v159; // ax
  __m128i v160; // xmm6
  __m128i v161; // xmm7
  unsigned __int64 v162; // rbp
  int v163; // eax
  __int64 v164; // rdi
  __m128i v165; // xmm6
  int v166; // eax
  __int64 *v167; // rdi
  __int64 *v168; // rdi
  int v169; // eax
  __m128i v170; // xmm6
  __m128i v171; // xmm7
  int v172; // eax
  __m128i v173; // xmm6
  unsigned __int64 v174; // rax
  __int64 v175; // rdx
  char *v176; // rdi
  char *v177; // rax
  unsigned __int16 v178; // dx
  unsigned int v179; // ecx
  unsigned __int16 v180; // di
  __int64 v181; // rax
  __int64 v182; // rax
  unsigned int v183; // eax
  unsigned __int16 v184; // si
  __int64 v185; // rdx
  __int64 v186; // rdi
  __int16 v187; // ax
  __int64 v188; // rdi
  unsigned __int64 v189; // rax
  __int64 v190; // rax
  int v191; // eax
  _DWORD *v192; // rdi
  __int64 *v193; // rsi
  __m128i v194; // xmm7
  __int64 i; // rcx
  unsigned __int64 v196; // rax
  __int64 v197; // rdx
  char *v198; // rdi
  char *v199; // rax
  __int64 *v200; // rdi
  unsigned __int64 v201; // rax
  __int64 v202; // rax
  int v203; // eax
  __int64 *v204; // rdi
  __int16 v205; // [rsp+Ch] [rbp-DCh]
  __int16 v206; // [rsp+Ch] [rbp-DCh]
  int v207; // [rsp+Ch] [rbp-DCh]
  unsigned __int64 v208; // [rsp+10h] [rbp-D8h]
  __int16 v209; // [rsp+10h] [rbp-D8h]
  int v210; // [rsp+18h] [rbp-D0h]
  __int16 v211; // [rsp+18h] [rbp-D0h]
  __int16 v212; // [rsp+18h] [rbp-D0h]
  __int16 v213; // [rsp+1Eh] [rbp-CAh]
  __int128 v214; // [rsp+20h] [rbp-C8h] BYREF
  void *v215[2]; // [rsp+30h] [rbp-B8h]
  __int128 v216; // [rsp+40h] [rbp-A8h]
  __m128i v217[3]; // [rsp+50h] [rbp-98h] BYREF
  __m128i v218; // [rsp+80h] [rbp-68h] BYREF
  int v219; // [rsp+90h] [rbp-58h]

  v6 = a2;
  switch ( *(_WORD *)(a1 + 32) )
  {
    case 5:
      v105 = *(_QWORD *)(a1 + 8);
      v106 = *(_QWORD *)(v105 + 2944);
      if ( v106 >= *(unsigned int *)(v105 + 2912) )
        v107 = sub_14180A0(v105, 1u);
      else
        v107 = *(_QWORD *)(v105 + 2904) + 24 * v106;
      if ( *(_WORD *)(v107 + 16) == 27 && *(_WORD *)(a1 + 32) != 1 )
      {
        v108 = *(_QWORD *)(a1 + 8);
        v109 = *(_QWORD *)(v108 + 2944) + 1LL;
        v110 = v109 >= *(unsigned int *)(v108 + 2912)
             ? *(_WORD *)(sub_14180A0(v108, 2u) + 16)
             : *(_WORD *)(*(_QWORD *)(v108 + 2904) + 24 * v109 + 16);
        if ( v110 == 20 )
        {
          if ( (unsigned __int8)sub_1565E90(a1, 0) )
            return 3;
          if ( *(_WORD *)(a1 + 32) == 5 )
            return 1;
          return (unsigned int)sub_155DB90(a1, 0, a3, a4);
        }
      }
      v111 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(*(_QWORD *)(v111 + 56) + 13LL) & 6) != 0 )
      {
        v112 = *(_WORD *)(a1 + 32);
        v113 = 0;
        if ( (unsigned __int16)(v112 - 7) > 0xCu && v112 != 1 )
          v113 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 376) == v113 )
        {
          if ( (unsigned __int8)sub_147E8E0(a1) )
            return 0;
          v111 = *(_QWORD *)(a1 + 8);
        }
      }
      v114 = *(_QWORD *)(v111 + 2944);
      if ( *(unsigned int *)(v111 + 2912) <= v114 )
      {
        v136 = sub_14180A0(v111, 1u);
        v111 = *(_QWORD *)(a1 + 8);
        v115 = v136;
      }
      else
      {
        v115 = *(_QWORD *)(v111 + 2904) + 24 * v114;
      }
      LOWORD(v116) = *(_WORD *)(v115 + 16);
      if ( (*(_BYTE *)(*(_QWORD *)(v111 + 56) + 2LL) & 4) == 0 && (_WORD)v116 == 5 )
        return 0;
      if ( (_WORD)v116 != 22 )
        goto LABEL_134;
      v137 = *(_WORD *)(a1 + 32);
      if ( ((v137 - 7) & 0xFFFD) == 0
        || (unsigned __int16)(v137 - 10) <= 1u
        || (unsigned __int16)(v137 - 12) <= 1u
        || (unsigned __int16)(v137 - 14) <= 1u
        || v137 == 17
        || (unsigned __int16)(v137 - 18) <= 1u
        || ((v137 - 8) & 0xFFF7) == 0
        || v137 == 1 )
      {
        BUG();
      }
      v145 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v145 + 4) & 8) == 0 )
      {
        v217[0].m128i_i8[9] = 1;
        LOBYTE(v143) = 17;
        v217[0].m128i_i64[0] = (__int64)off_2BB3CB0;
        v217[0].m128i_i16[5] = 257;
        memset((char *)&v217[0].m128i_u64[1] + 4, 0, 20);
LABEL_201:
        v116 = (0x20008000000E0001uLL >> v143) & 1;
        goto LABEL_181;
      }
      if ( (unsigned __int8)sub_14B9780(a1, v145, nullptr) )
        return 1;
      LOWORD(v116) = *(_WORD *)(v115 + 16);
LABEL_134:
      if ( (_WORD)v116 == 72 || (_WORD)v116 == 47 )
      {
        if ( (unsigned __int8)sub_1565E90(a1, v6) )
          return 3;
        if ( *(_WORD *)(a1 + 32) != 5 )
          return (unsigned int)sub_155DB90(a1, v6, a3, a4);
        return 1;
      }
      v217[0].m128i_i8[9] = 1;
      v217[0].m128i_i64[0] = (__int64)off_2BB3CB0;
      v143 = v116 - 5;
      LOBYTE(v116) = 0;
      v217[0].m128i_i16[5] = 257;
      memset((char *)&v217[0].m128i_u64[1] + 4, 0, 20);
      if ( v143 <= 0x3Du )
        goto LABEL_201;
LABEL_181:
      v217[0].m128i_i8[8] = v116;
      v144 = sub_1566470(a1, v217, 0);
      v20 = v144;
      if ( v144 == 1 )
        return v20;
      if ( v144 <= 1 )
      {
        if ( v144 )
          return (unsigned int)sub_155DB90(a1, v6, a3, a4);
        return 3;
      }
      if ( v144 == 2 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) != 0 )
        {
          v20 = 3;
          if ( (unsigned __int8)sub_1565E90(a1, v6) )
            return v20;
          if ( *(_WORD *)(a1 + 32) != 5 )
            return (unsigned int)sub_155DB90(a1, v6, a3, a4);
        }
        return *(_BYTE *)(a1 + 1952) ^ 1u;
      }
      else
      {
        if ( v144 != 3 )
          return (unsigned int)sub_155DB90(a1, v6, a3, a4);
        return (unsigned int)(a4 != nullptr) + 1;
      }
    case 0x48:
      v22 = *(_QWORD *)(a1 + 8);
      v23 = *(_QWORD *)(v22 + 2944);
      if ( v23 >= *(unsigned int *)(v22 + 2912) )
        v24 = sub_14180A0(v22, 1u);
      else
        v24 = *(_QWORD *)(v22 + 2904) + 24 * v23;
      if ( (*(_WORD *)(v24 + 16) & 0xFFF7) == 0x83 )
        return 1;
      goto LABEL_20;
    case 0x4C:
      v53 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(*(_QWORD *)(v53 + 56) + 2LL) & 1) == 0 )
        return 0;
      v54 = *(_QWORD *)(v53 + 2944);
      if ( v54 >= *(unsigned int *)(v53 + 2912) )
      {
        if ( *(_WORD *)(sub_14180A0(v53, 1u) + 16) == 24 )
          return 1;
        v134 = *(_QWORD *)(a1 + 8);
        v135 = *(_QWORD *)(v134 + 2944);
        if ( v135 < *(unsigned int *)(v134 + 2912) )
          v55 = *(_WORD *)(*(_QWORD *)(v134 + 2904) + 24 * v135 + 16);
        else
          v55 = *(_WORD *)(sub_14180A0(v134, 1u) + 16);
      }
      else
      {
        v55 = *(_WORD *)(*(_QWORD *)(v53 + 2904) + 24 * v54 + 16);
        if ( v55 == 24 )
          return 1;
      }
      if ( v55 != 22 )
        return 0;
      return 2;
    case 0x4F:
    case 0x54:
    case 0x58:
    case 0x5C:
    case 0x5F:
    case 0x62:
    case 0x63:
    case 0x6B:
    case 0x6C:
    case 0x7F:
    case 0x9B:
    case 0xA0:
    case 0xA1:
    case 0xB1:
    case 0xB2:
    case 0xB5:
    case 0xB6:
    case 0xB7:
    case 0xCA:
    case 0xCB:
    case 0xCD:
    case 0x155:
    case 0x156:
    case 0x157:
    case 0x158:
    case 0x159:
    case 0x15A:
    case 0x15B:
    case 0x15C:
    case 0x15D:
    case 0x15E:
    case 0x15F:
    case 0x160:
    case 0x16A:
    case 0x173:
    case 0x174:
    case 0x18A:
    case 0x1A8:
    case 0x1A9:
      v29 = *(_QWORD *)(a1 + 8);
      goto LABEL_106;
    case 0x50:
    case 0x56:
    case 0x57:
    case 0x60:
    case 0x66:
    case 0x67:
    case 0x69:
    case 0x6A:
    case 0x6D:
    case 0x6F:
    case 0x71:
    case 0x73:
    case 0x78:
    case 0x81:
    case 0x85:
    case 0x88:
    case 0x89:
    case 0x9A:
    case 0x9C:
    case 0x9D:
    case 0xA2:
    case 0xA7:
    case 0xAD:
    case 0xAE:
    case 0xBD:
    case 0xD0:
    case 0xD3:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x109:
    case 0x10A:
    case 0x10B:
    case 0x10C:
    case 0x10D:
    case 0x10E:
    case 0x10F:
    case 0x110:
    case 0x111:
    case 0x13E:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x145:
    case 0x146:
    case 0x147:
    case 0x148:
    case 0x14A:
    case 0x14B:
    case 0x14C:
    case 0x14D:
    case 0x14E:
    case 0x150:
    case 0x151:
    case 0x152:
    case 0x161:
    case 0x166:
    case 0x167:
    case 0x168:
    case 0x169:
    case 0x16F:
    case 0x170:
    case 0x17B:
    case 0x17C:
    case 0x17D:
    case 0x17E:
    case 0x17F:
    case 0x180:
    case 0x181:
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x190:
    case 0x19F:
      return 0;
    case 0x5D:
    case 0x5E:
      v69 = *(_QWORD *)(a1 + 8);
      v70 = *(_QWORD *)(v69 + 2944);
      if ( v70 >= *(unsigned int *)(v69 + 2912) )
        v71 = sub_14180A0(v69, 1u);
      else
        v71 = *(_QWORD *)(v69 + 2904) + 24 * v70;
      v20 = 3;
      if ( *(_WORD *)(v71 + 16) != 22 )
        return v20;
      v72 = *(_QWORD *)(a1 + 80);
      v73 = *(_QWORD *)(a1 + 8);
      *(__m128i *)((char *)v217 + 8) = _mm_loadu_si128((const __m128i *)(a1 + 48));
      v61 = *(_DWORD *)(a1 + 88);
      v217[2].m128i_i64[1] = v72;
      LODWORD(v72) = *(_DWORD *)(a1 + 32);
      *(__m128i *)((char *)&v217[1] + 8) = _mm_loadu_si128((const __m128i *)(a1 + 64));
      v62 = *(unsigned int *)(a1 + 2712);
      v219 = v72;
      LOWORD(v72) = *(_WORD *)(a1 + 92);
      v218 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v63 = v62;
      v206 = v72;
      sub_1418D30(v73, 0);
      v74 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v74, (int *)(a1 + 16));
      if ( *(_WORD *)(a1 + 32) == 22 )
      {
        ++*(_WORD *)(a1 + 88);
        goto LABEL_70;
      }
      v75 = *(_WORD *)(a1 + 88);
      if ( !v75 )
        goto LABEL_70;
      v146 = *(_DWORD *)(a1 + 2792);
      if ( !v146 )
        goto LABEL_215;
      v147 = *(_QWORD *)(a1 + 2784) + 24LL * v146 - 24;
      while ( 2 )
      {
        if ( v75 == *(_WORD *)(v147 + 14) )
        {
          if ( *(_DWORD *)(v147 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_210;
        }
        else if ( v75 > *(_WORD *)(v147 + 14) )
        {
          goto LABEL_210;
        }
        if ( *(_WORD *)(a1 + 90) > *(_WORD *)(v147 + 16) || *(_WORD *)(a1 + 92) > *(_WORD *)(v147 + 18) )
        {
LABEL_210:
          --v146;
          v147 -= 24;
          *(_DWORD *)(a1 + 2792) = v146;
          if ( !v146 )
            break;
          continue;
        }
        break;
      }
LABEL_215:
      *(_WORD *)(a1 + 88) = v75 - 1;
LABEL_70:
      v76 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v76, (int *)(a1 + 16));
      LOWORD(v214) = 23;
      if ( (unsigned __int8)sub_15680D0(a1, &v214, 1, 1) )
      {
        v77 = *(_WORD *)(a1 + 32);
        v78 = *(_QWORD *)(a1 + 8);
        v20 = 2;
        if ( v77 != 22 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v78 + 56) + 1LL) & 0x10) == 0 || (v20 = a3, v77 != 24) )
            v20 = 0;
        }
      }
      else
      {
        v78 = *(_QWORD *)(a1 + 8);
        v20 = 3;
      }
      sub_1417BC0(v78);
      v79 = _mm_loadu_si128((const __m128i *)&v217[0].m128i_u64[1]);
      v80 = _mm_load_si128(&v218);
      v81 = _mm_loadu_si128((const __m128i *)&v217[1].m128i_u64[1]);
      *(_QWORD *)(a1 + 80) = v217[2].m128i_i64[1];
      *(__m128i *)(a1 + 48) = v79;
      *(__m128i *)(a1 + 64) = v81;
      *(__m128i *)(a1 + 16) = v80;
LABEL_76:
      *(_DWORD *)(a1 + 32) = v219;
      v82 = *(unsigned int *)(a1 + 2712);
      if ( v62 != v82 )
      {
        if ( v62 >= v82 )
        {
          if ( v62 > *(unsigned int *)(a1 + 2716) )
          {
            sub_2237220(a1 + 2704, a1 + 2720, v62, 8);
            v82 = *(unsigned int *)(a1 + 2712);
          }
          v83 = *(_QWORD *)(a1 + 2704);
          v84 = (char *)(v83 + 8 * v82);
          v85 = (char *)(v83 + 8 * v62);
          if ( v84 != v85 )
            memset(v84, 0, 8 * ((unsigned __int64)(v85 - 8 - v84) >> 3) + 8);
        }
        *(_DWORD *)(a1 + 2712) = v63;
      }
      *(_DWORD *)(a1 + 88) = v61;
      *(_WORD *)(a1 + 92) = v206;
      return v20;
    case 0x8D:
      return ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 47LL) >> 5) ^ 1) & 1;
    case 0x93:
      v52 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(*(_QWORD *)(v52 + 56) + 1LL) & 8) == 0 )
        return 1;
      v120 = *(unsigned int *)(a1 + 2712);
      v217[2].m128i_i64[1] = *(_QWORD *)(a1 + 80);
      v121 = v120;
      v208 = v120;
      v219 = *(_DWORD *)(a1 + 32);
      v122 = *(_WORD *)(a1 + 92);
      *(__m128i *)((char *)v217 + 8) = _mm_loadu_si128((const __m128i *)(a1 + 48));
      v211 = v122;
      v123 = *(_DWORD *)(a1 + 88);
      *(__m128i *)((char *)&v217[1] + 8) = _mm_loadu_si128((const __m128i *)(a1 + 64));
      v218 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v207 = v123;
      sub_1418D30(v52, 0);
      v124 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v124, (int *)(a1 + 16));
      v20 = sub_155DB90(a1, (unsigned int)a2, a3, a4);
      sub_1417BC0(*(_QWORD *)(a1 + 8));
      v125 = _mm_loadu_si128((const __m128i *)&v217[0].m128i_u64[1]);
      v126 = _mm_loadu_si128((const __m128i *)&v217[1].m128i_u64[1]);
      v127 = v208;
      v128 = _mm_load_si128(&v218);
      *(_QWORD *)(a1 + 80) = v217[2].m128i_i64[1];
      v129 = v219;
      *(__m128i *)(a1 + 48) = v125;
      *(__m128i *)(a1 + 64) = v126;
      *(_DWORD *)(a1 + 32) = v129;
      v130 = *(unsigned int *)(a1 + 2712);
      *(__m128i *)(a1 + 16) = v128;
      if ( v130 != v208 )
      {
        if ( v130 <= v208 )
        {
          if ( v208 > *(unsigned int *)(a1 + 2716) )
          {
            sub_2237220(a1 + 2704, a1 + 2720, v208, 8);
            v130 = *(unsigned int *)(a1 + 2712);
            v127 = v208;
          }
          v131 = *(_QWORD *)(a1 + 2704);
          v132 = (char *)(v131 + 8 * v130);
          v133 = (char *)(v131 + 8 * v127);
          if ( v132 != v133 )
            memset(v132, 0, 8 * ((unsigned __int64)(v133 - 8 - v132) >> 3) + 8);
        }
        *(_DWORD *)(a1 + 2712) = v121;
      }
      *(_DWORD *)(a1 + 88) = v207;
      *(_WORD *)(a1 + 92) = v211;
      return v20;
    case 0x97:
      if ( (unsigned __int8)sub_1565E90(a1, 1) )
        return 3;
      return (unsigned int)sub_155DB90(a1, 1, a3, a4);
    case 0xA3:
    case 0x149:
LABEL_20:
      if ( (unsigned __int8)sub_1565E90(a1, (unsigned int)a2) )
        return 3;
      return (unsigned int)sub_155DB90(a1, v6, a3, a4);
    case 0xB3:
      v56 = *(_QWORD *)(a1 + 8);
      v57 = *(_QWORD *)(v56 + 2944);
      if ( v57 >= *(unsigned int *)(v56 + 2912) )
        v58 = sub_14180A0(v56, 1u);
      else
        v58 = *(_QWORD *)(v56 + 2904) + 24 * v57;
      v20 = 0;
      if ( *(_WORD *)(v58 + 16) != 22 )
        return v20;
      v59 = *(_QWORD *)(a1 + 80);
      v60 = *(_QWORD *)(a1 + 8);
      *(__m128i *)((char *)v217 + 8) = _mm_loadu_si128((const __m128i *)(a1 + 48));
      v61 = *(_DWORD *)(a1 + 88);
      v217[2].m128i_i64[1] = v59;
      LODWORD(v59) = *(_DWORD *)(a1 + 32);
      *(__m128i *)((char *)&v217[1] + 8) = _mm_loadu_si128((const __m128i *)(a1 + 64));
      v62 = *(unsigned int *)(a1 + 2712);
      v219 = v59;
      LOWORD(v59) = *(_WORD *)(a1 + 92);
      v218 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v63 = v62;
      v206 = v59;
      sub_1418D30(v60, 0);
      v20 = sub_155DA90(a1);
      if ( v20 == 3 )
      {
        v65 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v64 = *(_WORD *)(a1 + 32);
        v65 = *(_QWORD *)(a1 + 8);
        v20 = 2;
        if ( v64 != 22 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v65 + 56) + 1LL) & 0x10) == 0 || (v20 = a3, v64 != 24) )
            v20 = 0;
        }
      }
      sub_1417BC0(v65);
      v66 = _mm_loadu_si128((const __m128i *)&v217[1].m128i_u64[1]);
      v67 = _mm_load_si128(&v218);
      v68 = v217[2].m128i_i64[1];
      *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)&v217[0].m128i_u64[1]);
      *(__m128i *)(a1 + 64) = v66;
      *(_QWORD *)(a1 + 80) = v68;
      *(__m128i *)(a1 + 16) = v67;
      goto LABEL_76;
    case 0x1A0:
      if ( (unsigned __int8)sub_1565E90(a1, a2) )
        return 3;
      v86 = *(_WORD *)(a1 + 32);
      if ( v86 == 417 )
        goto LABEL_28;
      if ( v86 != 416 )
        return 1;
      v87 = *(_QWORD *)(a1 + 8);
      v88 = *(_QWORD *)(v87 + 2944);
      if ( v88 >= *(unsigned int *)(v87 + 2912) )
      {
        if ( *(_WORD *)(sub_14180A0(v87, 1u) + 16) != 418 )
          goto LABEL_224;
        v148 = *(_QWORD *)(a1 + 8);
        v149 = *(_QWORD *)(v148 + 2944);
        if ( v149 < *(unsigned int *)(v148 + 2912) )
          v89 = *(_QWORD *)(v148 + 2904) + 24 * v149;
        else
          v89 = sub_14180A0(v148, 1u);
      }
      else
      {
        v89 = *(_QWORD *)(v87 + 2904) + 24 * v88;
        if ( *(_WORD *)(v89 + 16) != 418 )
          goto LABEL_89;
      }
      v150 = sub_1565590(a1, v89);
      v151 = *(_DWORD *)(v150 + 32);
      v152 = v150;
      if ( !v151 )
      {
        if ( !a4 )
          return 3;
        v117 = *(_QWORD *)(a1 + 8);
        v153 = *(_QWORD *)(v117 + 2944);
        if ( v153 >= *(unsigned int *)(v117 + 2912) )
LABEL_179:
          v119 = sub_14180A0(v117, 1u);
        else
          v119 = *(_QWORD *)(v117 + 2904) + 24 * v153;
LABEL_142:
        v20 = 2;
        *a4 = *(_WORD *)(v119 + 16) == 22;
        return v20;
      }
      v8 = *(_WORD *)(a1 + 32);
      if ( v151 != 6 )
        goto LABEL_225;
      v15 = v8 == 1;
      v9 = a1 + 16;
      if ( !v15 )
      {
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(_QWORD *)(v10 + 2944) + 1LL;
        if ( v11 >= *(unsigned int *)(v10 + 2912) )
          v9 = sub_14180A0(v10, 2u);
        else
          v9 = *(_QWORD *)(v10 + 2904) + 24 * v11;
      }
      v12 = *(_WORD *)(v9 + 16);
      v13 = v12 - 109;
      v14 = ((v12 - 76) & 0xFFFB) == 0;
      v15 = v12 == 5;
      v16 = 1;
      if ( v13 <= 0x36u )
        v16 = ((0x40800000000001uLL >> v13) & 1) == 0;
      if ( v15 || v14 || !v16 )
        return 0;
      v8 = *(_WORD *)(a1 + 32);
      if ( *(_DWORD *)(v152 + 44) )
      {
LABEL_225:
        if ( v8 != 416 )
          return 1;
        v87 = *(_QWORD *)(a1 + 8);
LABEL_89:
        v90 = *(_QWORD *)(v87 + 2944);
        if ( v90 >= *(unsigned int *)(v87 + 2912) )
          v91 = sub_14180A0(v87, 1u);
        else
          v91 = *(_QWORD *)(v87 + 2904) + 24 * v90;
        if ( *(_WORD *)(v91 + 16) == 5 )
        {
          v92 = *(unsigned int *)(a1 + 20);
          v93 = *(_DWORD *)(a1 + 16);
          v94 = *(_QWORD *)(a1 + 96);
          v95 = *(_QWORD *)(a1 + 24);
          v214 = 0;
          *(_OWORD *)v215 = 0;
          if ( !(_DWORD)v92 )
            v92 = v93;
          v216 = 0;
          sub_169D790(v94, v95, (v92 << 32) | v93, &v214);
          if ( !*((_QWORD *)&v214 + 1) || !sub_E917A0(*((__int64 *)&v214 + 1), v95, v96, v97, v98, v99) )
          {
            v100 = sub_1566470(a1, 0, v6);
            v20 = v100;
            if ( v100 == 1 )
              goto LABEL_101;
            if ( v100 <= 1 )
            {
              if ( v100 )
                goto LABEL_276;
            }
            else
            {
              if ( v100 != 2 )
              {
                if ( v100 == 3 )
                {
                  v20 = (a4 != nullptr) + 1;
                  goto LABEL_101;
                }
                goto LABEL_276;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) == 0 )
                goto LABEL_279;
              if ( !(unsigned __int8)sub_1565E90(a1, 0) )
              {
                if ( *(_WORD *)(a1 + 32) == 416 )
                {
                  v20 = 0;
                  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) != 0 )
                  {
LABEL_101:
                    if ( HIDWORD(v215[1]) )
                      free(v215[0]);
                    return v20;
                  }
LABEL_279:
                  v20 = *(_BYTE *)(a1 + 1952) ^ 1;
                  goto LABEL_101;
                }
LABEL_276:
                v20 = sub_155DB90(a1, v6, a3, a4);
                goto LABEL_101;
              }
            }
            v20 = 3;
            goto LABEL_101;
          }
          v160 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          v161 = _mm_loadu_si128((const __m128i *)(a1 + 64));
          v162 = *(unsigned int *)(a1 + 2712);
          v217[2].m128i_i64[1] = *(_QWORD *)(a1 + 80);
          v163 = *(_DWORD *)(a1 + 32);
          *(__m128i *)((char *)v217 + 8) = v160;
          v164 = *(_QWORD *)(a1 + 8);
          v165 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          v219 = v163;
          LOWORD(v163) = *(_WORD *)(a1 + 88);
          *(__m128i *)((char *)&v217[1] + 8) = v161;
          v212 = v163;
          LOWORD(v163) = *(_WORD *)(a1 + 90);
          v218 = v165;
          v209 = v163;
          v213 = *(_WORD *)(a1 + 92);
          sub_1418D30(v164, 0);
          v166 = *(_DWORD *)(a1 + 20);
          v167 = *(__int64 **)(a1 + 8);
          if ( !v166 )
            v166 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 40) = v166;
          sub_14634E0(v167, (int *)(a1 + 16));
          v168 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v168, (int *)(a1 + 16));
          if ( *(_WORD *)(a1 + 32) == 5 || (v169 = sub_155DB90(a1, v6, a3, a4)) == 0 || v169 == 3 )
          {
            v20 = 3;
            goto LABEL_254;
          }
          if ( a4 )
          {
            *a4 = 1;
            v20 = 2;
LABEL_254:
            sub_1417BC0(*(_QWORD *)(a1 + 8));
            v170 = _mm_loadu_si128((const __m128i *)&v217[0].m128i_u64[1]);
            v171 = _mm_loadu_si128((const __m128i *)&v217[1].m128i_u64[1]);
            *(_QWORD *)(a1 + 80) = v217[2].m128i_i64[1];
            v172 = v219;
            *(__m128i *)(a1 + 48) = v170;
            v173 = _mm_load_si128(&v218);
            *(_DWORD *)(a1 + 32) = v172;
            v174 = *(unsigned int *)(a1 + 2712);
            *(__m128i *)(a1 + 64) = v171;
            *(__m128i *)(a1 + 16) = v173;
            if ( v162 != v174 )
            {
              if ( v162 >= v174 )
              {
                if ( v162 > *(unsigned int *)(a1 + 2716) )
                {
                  sub_2237220(a1 + 2704, a1 + 2720, v162, 8);
                  v174 = *(unsigned int *)(a1 + 2712);
                }
                v175 = *(_QWORD *)(a1 + 2704);
                v176 = (char *)(v175 + 8 * v174);
                v177 = (char *)(v175 + 8 * v162);
                if ( v176 != v177 )
                  memset(v176, 0, 8 * ((unsigned __int64)(v177 - 8 - v176) >> 3) + 8);
              }
              *(_DWORD *)(a1 + 2712) = v162;
            }
            *(_WORD *)(a1 + 88) = v212;
            *(_WORD *)(a1 + 90) = v209;
            *(_WORD *)(a1 + 92) = v213;
            goto LABEL_101;
          }
          v186 = *(_QWORD *)(a1 + 8);
          if ( (**(_BYTE **)(v186 + 56) & 0x20) == 0 )
            goto LABEL_305;
          v187 = *(_WORD *)(a1 + 32);
          if ( v187 != 28 && v187 != 31 )
          {
LABEL_301:
            if ( *(_WORD *)(a1 + 32) != 29
              || ((v188 = *(_QWORD *)(a1 + 8), v189 = *(_QWORD *)(v188 + 2944), v189 >= *(unsigned int *)(v188 + 2912))
                ? (v190 = sub_14180A0(v188, 1u))
                : (v190 = *(_QWORD *)(v188 + 2904) + 24 * v189),
                  *(_WORD *)(v190 + 16) != 52) )
            {
LABEL_305:
              sub_1417BC0(*(_QWORD *)(a1 + 8));
              v191 = v219;
              v192 = (_DWORD *)(a1 + 48);
              v193 = &v217[0].m128i_i64[1];
              v194 = _mm_load_si128(&v218);
              for ( i = 10; i; --i )
              {
                *v192 = *(_DWORD *)v193;
                v193 = (__int64 *)((char *)v193 + 4);
                ++v192;
              }
              *(_DWORD *)(a1 + 32) = v191;
              *(__m128i *)(a1 + 16) = v194;
              v196 = *(unsigned int *)(a1 + 2712);
              if ( v162 != v196 )
              {
                if ( v162 >= v196 )
                {
                  if ( v162 > *(unsigned int *)(a1 + 2716) )
                  {
                    sub_2237220(a1 + 2704, a1 + 2720, v162, 8);
                    v196 = *(unsigned int *)(a1 + 2712);
                  }
                  v197 = *(_QWORD *)(a1 + 2704);
                  v198 = (char *)(v197 + 8 * v196);
                  v199 = (char *)(v197 + 8 * v162);
                  if ( v198 != v199 )
                    memset(v198, 0, 8 * ((unsigned __int64)(v199 - 8 - v198) >> 3) + 8);
                }
                *(_DWORD *)(a1 + 2712) = v162;
              }
              v15 = HIDWORD(v215[1]) == 0;
              *(_WORD *)(a1 + 88) = v212;
              *(_WORD *)(a1 + 90) = v209;
              *(_WORD *)(a1 + 92) = v213;
              if ( !v15 )
                free(v215[0]);
              return 1;
            }
LABEL_323:
            v20 = 0;
            goto LABEL_254;
          }
          v201 = *(_QWORD *)(v186 + 2944);
          if ( v201 >= *(unsigned int *)(v186 + 2912) )
          {
            if ( *(_WORD *)(sub_14180A0(v186, 1u) + 16) == 23 )
              goto LABEL_323;
            v186 = *(_QWORD *)(a1 + 8);
            v201 = *(_QWORD *)(v186 + 2944);
            if ( v201 >= *(unsigned int *)(v186 + 2912) )
            {
              v202 = sub_14180A0(v186, 1u);
LABEL_322:
              if ( *(_WORD *)(v202 + 16) == 52 )
                goto LABEL_323;
              goto LABEL_301;
            }
          }
          else if ( *(_WORD *)(*(_QWORD *)(v186 + 2904) + 24 * v201 + 16) == 23 )
          {
            goto LABEL_323;
          }
          v202 = *(_QWORD *)(v186 + 2904) + 24 * v201;
          goto LABEL_322;
        }
        return 1;
      }
      v15 = v8 == 1;
      v17 = a1 + 16;
      if ( !v15 )
      {
        v18 = *(_QWORD *)(a1 + 8);
        v19 = *(_QWORD *)(v18 + 2944) + 1LL;
        if ( v19 >= *(unsigned int *)(v18 + 2912) )
          v17 = sub_14180A0(v18, 2u);
        else
          v17 = *(_QWORD *)(v18 + 2904) + 24 * v19;
      }
      if ( (unsigned __int16)(*(_WORD *)(v17 + 16) - 28) <= 1u )
        return 0;
LABEL_224:
      v8 = *(_WORD *)(a1 + 32);
      goto LABEL_225;
    case 0x1A1:
      goto LABEL_28;
    case 0x1A2:
      v25 = a1 + 16;
      v26 = sub_1565590(a1, a1 + 16);
      v27 = *(_DWORD *)(v26 + 32);
      if ( v27 )
      {
        LOBYTE(v28) = v27 == 5 && a4 != nullptr;
        if ( !(_BYTE)v28 )
        {
          if ( v27 == 6 )
          {
            if ( *(_WORD *)(a1 + 32) != 1 )
            {
              v138 = *(_QWORD *)(a1 + 8);
              v139 = *(_QWORD *)(v138 + 2944);
              if ( v139 >= *(unsigned int *)(v138 + 2912) )
              {
                v182 = sub_14180A0(v138, 1u);
                LOBYTE(v28) = 0;
                v140 = *(_WORD *)(v182 + 16);
              }
              else
              {
                v140 = *(_WORD *)(*(_QWORD *)(v138 + 2904) + 24 * v139 + 16);
              }
              if ( (unsigned __int16)(v140 - 109) <= 0x36u )
                v28 = (0x40800000000001uLL >> ((unsigned __int8)v140 - 109)) & 1;
              if ( ((v140 - 76) & 0xFFFB) == 0 || v140 == 5 || (_BYTE)v28 )
                return 0;
            }
            if ( !*(_DWORD *)(v26 + 44) )
            {
              if ( *(_WORD *)(a1 + 32) != 1 )
              {
                v141 = *(_QWORD *)(a1 + 8);
                v142 = *(_QWORD *)(v141 + 2944);
                if ( v142 >= *(unsigned int *)(v141 + 2912) )
                  v25 = sub_14180A0(v141, 1u);
                else
                  v25 = *(_QWORD *)(v141 + 2904) + 24 * v142;
              }
              if ( (unsigned __int16)(*(_WORD *)(v25 + 16) - 28) <= 1u )
                return 0;
            }
            v27 = *(_DWORD *)(v26 + 32);
          }
          v20 = 1;
          if ( v27 != 2 )
            return v20;
          memset(v217, 0, sizeof(v217));
          sub_154E5D0((const __m128i *)a1, (__int64)v217, a2, 0);
          if ( v217[1].m128i_i32[3] )
            free((void *)v217[1].m128i_i64[0]);
LABEL_28:
          v29 = *(_QWORD *)(a1 + 8);
          v30 = *(_QWORD *)(v29 + 2944);
          v31 = *(unsigned int *)(v29 + 2912);
          if ( (*(_BYTE *)(*(_QWORD *)(v29 + 56) + 2LL) & 4) != 0 )
          {
            if ( v31 <= v30 )
            {
              v32 = sub_14180A0(v29, 1u);
              v29 = *(_QWORD *)(a1 + 8);
            }
            else
            {
              v32 = *(_QWORD *)(v29 + 2904) + 24 * v30;
            }
            if ( *(_WORD *)(v32 + 16) == 47 )
            {
              v33 = _mm_loadu_si128((const __m128i *)(a1 + 48));
              v34 = _mm_loadu_si128((const __m128i *)(a1 + 64));
              v35 = _mm_loadu_si128((const __m128i *)(a1 + 16));
              v217[2].m128i_i64[1] = *(_QWORD *)(a1 + 80);
              v36 = *(_DWORD *)(a1 + 32);
              v37 = *(unsigned int *)(a1 + 2712);
              *(__m128i *)((char *)v217 + 8) = v33;
              v219 = v36;
              LOWORD(v36) = *(_WORD *)(a1 + 92);
              *(__m128i *)((char *)&v217[1] + 8) = v34;
              v205 = v36;
              v38 = *(_DWORD *)(a1 + 88);
              v218 = v35;
              v210 = v38;
              sub_1418D30(v29, 0);
              v39 = *(_WORD *)(a1 + 32);
              if ( v39 == 22 )
              {
                ++*(_WORD *)(a1 + 88);
                goto LABEL_37;
              }
              if ( v39 != 23 )
              {
                if ( (unsigned __int16)(v39 - 20) <= 1u )
                {
                  v40 = *(_WORD *)(a1 + 90);
                  if ( v39 == 20 )
                  {
                    *(_WORD *)(a1 + 90) = v40 + 1;
                    goto LABEL_37;
                  }
                  if ( !v40 )
                  {
LABEL_37:
                    v41 = *(__int64 **)(a1 + 8);
                    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                    sub_14634E0(v41, (int *)(a1 + 16));
                    goto LABEL_38;
                  }
                  v183 = *(_DWORD *)(a1 + 2792);
                  if ( !v183 )
                  {
LABEL_293:
                    *(_WORD *)(a1 + 90) = v40 - 1;
                    goto LABEL_37;
                  }
                  v184 = *(_WORD *)(a1 + 88);
                  v185 = *(_QWORD *)(a1 + 2784) + 24LL * v183 - 24;
                  while ( 1 )
                  {
                    if ( v184 == *(_WORD *)(v185 + 14) )
                    {
                      if ( *(_DWORD *)(v185 + 16) == *(_DWORD *)(a1 + 90) )
                        goto LABEL_288;
                    }
                    else if ( v184 > *(_WORD *)(v185 + 14) )
                    {
                      goto LABEL_288;
                    }
                    if ( *(_WORD *)(v185 + 16) >= v40 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v185 + 18) )
                      goto LABEL_293;
LABEL_288:
                    --v183;
                    v185 -= 24;
                    *(_DWORD *)(a1 + 2792) = v183;
                    if ( !v183 )
                      goto LABEL_293;
                  }
                }
                if ( (unsigned __int16)(v39 - 24) > 1u )
                {
                  if ( (unsigned __int16)(v39 - 17) <= 2u || (unsigned __int16)(v39 - 14) <= 1u )
                    goto LABEL_37;
                  if ( v39 == 3 )
                  {
                    sub_1566D30(a1);
                  }
                  else
                  {
                    if ( !sub_10CCDE0(v39) )
                      goto LABEL_37;
                    v203 = *(_DWORD *)(a1 + 20);
                    v204 = *(__int64 **)(a1 + 8);
                    if ( !v203 )
                      v203 = *(_DWORD *)(a1 + 16);
                    *(_DWORD *)(a1 + 40) = v203;
                    sub_14634E0(v204, (int *)(a1 + 16));
                  }
LABEL_38:
                  v42 = *(__int64 **)(a1 + 8);
                  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                  sub_14634E0(v42, (int *)(a1 + 16));
                  if ( *(_WORD *)(a1 + 32) == 5 )
                  {
                    v157 = *(__int64 **)(a1 + 8);
                    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                    sub_14634E0(v157, (int *)(a1 + 16));
                    v158 = *(_WORD *)(a1 + 32);
                    if ( v158 != 66 )
                    {
                      v43 = *(__int64 **)(a1 + 8);
                      v20 = 3;
                      if ( v158 == 52 )
                      {
                        v20 = 2;
                        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                        sub_14634E0(v43, (int *)(a1 + 16));
                        v159 = *(_WORD *)(a1 + 32);
                        v43 = *(__int64 **)(a1 + 8);
                        if ( v159 != 22 )
                        {
                          if ( (*(_BYTE *)(v43[7] + 1) & 0x10) == 0 || (v20 = a3, v159 != 24) )
                            v20 = 0;
                        }
                      }
                      goto LABEL_40;
                    }
                    v200 = *(__int64 **)(a1 + 8);
                    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                    sub_14634E0(v200, (int *)(a1 + 16));
                  }
                  v43 = *(__int64 **)(a1 + 8);
                  v20 = 3;
LABEL_40:
                  sub_1417BC0((__int64)v43);
                  v44 = _mm_loadu_si128((const __m128i *)&v217[0].m128i_u64[1]);
                  v45 = _mm_load_si128(&v218);
                  v46 = _mm_loadu_si128((const __m128i *)&v217[1].m128i_u64[1]);
                  *(_QWORD *)(a1 + 80) = v217[2].m128i_i64[1];
                  v47 = v219;
                  *(__m128i *)(a1 + 48) = v44;
                  *(_DWORD *)(a1 + 32) = v47;
                  v48 = *(unsigned int *)(a1 + 2712);
                  *(__m128i *)(a1 + 64) = v46;
                  *(__m128i *)(a1 + 16) = v45;
                  if ( v37 != v48 )
                  {
                    if ( v37 >= v48 )
                    {
                      if ( v37 > *(unsigned int *)(a1 + 2716) )
                      {
                        sub_2237220(a1 + 2704, a1 + 2720, v37, 8);
                        v48 = *(unsigned int *)(a1 + 2712);
                      }
                      v49 = *(_QWORD *)(a1 + 2704);
                      v50 = (char *)(v49 + 8 * v48);
                      v51 = (char *)(v49 + 8 * v37);
                      if ( v50 != v51 )
                        memset(v50, 0, 8 * ((unsigned __int64)(v51 - 8 - v50) >> 3) + 8);
                    }
                    *(_DWORD *)(a1 + 2712) = v37;
                  }
                  *(_DWORD *)(a1 + 88) = v210;
                  *(_WORD *)(a1 + 92) = v205;
                  return v20;
                }
                v178 = *(_WORD *)(a1 + 92);
                if ( v39 == 24 )
                {
                  *(_WORD *)(a1 + 92) = v178 + 1;
                  goto LABEL_37;
                }
                if ( !v178 )
                  goto LABEL_37;
                v179 = *(_DWORD *)(a1 + 2792);
                if ( !v179 )
                {
LABEL_274:
                  *(_WORD *)(a1 + 92) = v178 - 1;
                  goto LABEL_37;
                }
                v180 = *(_WORD *)(a1 + 88);
                v181 = *(_QWORD *)(a1 + 2784) + 24LL * v179 - 24;
                while ( 1 )
                {
                  if ( v180 == *(_WORD *)(v181 + 14) )
                  {
                    if ( *(_DWORD *)(v181 + 16) == *(_DWORD *)(a1 + 90) )
                      goto LABEL_269;
                  }
                  else if ( v180 > *(_WORD *)(v181 + 14) )
                  {
                    goto LABEL_269;
                  }
                  if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v181 + 16) && *(_WORD *)(v181 + 18) >= v178 )
                    goto LABEL_274;
LABEL_269:
                  --v179;
                  v181 -= 24;
                  *(_DWORD *)(a1 + 2792) = v179;
                  if ( !v179 )
                    goto LABEL_274;
                }
              }
              v154 = *(_WORD *)(a1 + 88);
              if ( !v154 )
                goto LABEL_37;
              v155 = *(_DWORD *)(a1 + 2792);
              if ( !v155 )
              {
LABEL_236:
                *(_WORD *)(a1 + 88) = v154 - 1;
                goto LABEL_37;
              }
              v156 = *(_QWORD *)(a1 + 2784) + 24LL * v155 - 24;
              while ( 1 )
              {
                if ( v154 == *(_WORD *)(v156 + 14) )
                {
                  if ( *(_DWORD *)(v156 + 16) == *(_DWORD *)(a1 + 90) )
                    goto LABEL_231;
                }
                else if ( v154 > *(_WORD *)(v156 + 14) )
                {
                  goto LABEL_231;
                }
                if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v156 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v156 + 18) )
                  goto LABEL_236;
LABEL_231:
                --v155;
                v156 -= 24;
                *(_DWORD *)(a1 + 2792) = v155;
                if ( !v155 )
                  goto LABEL_236;
              }
            }
LABEL_106:
            v30 = *(_QWORD *)(v29 + 2944);
            v31 = *(unsigned int *)(v29 + 2912);
          }
          if ( v30 >= v31 )
            v101 = sub_14180A0(v29, 1u);
          else
            v101 = *(_QWORD *)(v29 + 2904) + 24 * v30;
          if ( *(_WORD *)(v101 + 16) == 22 )
          {
            return 2;
          }
          else
          {
            v102 = *(_QWORD *)(a1 + 8);
            if ( (*(_BYTE *)(*(_QWORD *)(v102 + 56) + 1LL) & 0x10) == 0 )
              return sub_14F77D0(a1);
            v103 = *(_QWORD *)(v102 + 2944);
            v104 = v103 >= *(unsigned int *)(v102 + 2912) ? sub_14180A0(v102, 1u) : *(_QWORD *)(v102 + 2904) + 24 * v103;
            v20 = a3;
            if ( *(_WORD *)(v104 + 16) != 24 )
              return sub_14F77D0(a1);
          }
          return v20;
        }
      }
      else if ( !a4 )
      {
        return 3;
      }
      v117 = *(_QWORD *)(a1 + 8);
      v118 = *(_QWORD *)(v117 + 2944);
      if ( v118 >= *(unsigned int *)(v117 + 2912) )
        goto LABEL_179;
      v119 = *(_QWORD *)(v117 + 2904) + 24 * v118;
      goto LABEL_142;
    default:
      return 1;
  }
}
