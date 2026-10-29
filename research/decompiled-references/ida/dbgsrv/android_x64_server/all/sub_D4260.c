/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4260
// Address: 0x00000000000D4260

//----- (00000000000D4260) ----------------------------------------------------
char *__fastcall sub_D4260(__int64 a1)
{
  __int64 v1; // r15
  char *v2; // rbx
  char *v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // dl
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r13
  char *v15; // r15
  __int64 v16; // r14
  char *v17; // rbx
  char *v18; // r12
  unsigned int v19; // ecx
  __int64 v20; // rbx
  char *v21; // rax
  char *v22; // rsi
  _QWORD *v23; // rbp
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  char *v27; // rax
  char *v28; // rbx
  _QWORD *v29; // rbp
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  char *v33; // r15
  char *v34; // rax
  char *v35; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  char *v38; // rax
  char *v39; // r15
  char *v40; // rax
  char *v41; // r12
  _QWORD *v42; // rbx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  char *v46; // rax
  char *v47; // rbx
  _QWORD *v48; // rbp
  __int64 v49; // rcx
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  char *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  char *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  char v58; // al
  char *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // r14
  _QWORD *v62; // rbp
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rdx
  unsigned __int8 v66; // al
  __int64 v67; // rcx
  char *v68; // rbx
  _BYTE *v69; // r13
  signed __int64 v70; // rbx
  __int64 v71; // r14
  char *v72; // r12
  char *v73; // rax
  _QWORD *v74; // rbx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rdx
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  _QWORD *v82; // rax
  _QWORD *v83; // rdx
  _QWORD *v84; // rax
  _QWORD *v85; // rdx
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  _QWORD *v88; // rax
  _QWORD *v89; // rdx
  _QWORD *v90; // rax
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  _QWORD *v94; // rax
  _QWORD *v95; // rdx
  _QWORD *v96; // rax
  _QWORD *v97; // rdx
  _QWORD *v98; // rax
  _QWORD *v99; // rdx
  _QWORD *v100; // rax
  _QWORD *v101; // rdx
  _QWORD *v102; // rax
  _QWORD *v103; // rdx
  _QWORD *v104; // rax
  _QWORD *v105; // rdx
  _QWORD *v106; // rax
  _QWORD *v107; // rdx
  char *v108; // rbx
  __int64 v109; // rcx
  char *v110; // rdx
  unsigned __int64 v111; // rcx
  _QWORD *v112; // rax
  _QWORD *v113; // rdx
  _QWORD *v114; // rax
  _QWORD *v115; // rdx
  _QWORD *v116; // rax
  _QWORD *v117; // rdx
  _QWORD *v118; // rax
  _QWORD *v119; // rdx
  _QWORD *v120; // rax
  _QWORD *v121; // rdx
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // r14
  _QWORD *v125; // rbp
  __int64 v126; // rcx
  _QWORD *v127; // rax
  _QWORD *v128; // rdx
  __m128i v129; // xmm0
  const char *v130; // rax
  char *v131; // rax
  char *v132; // rbx
  _QWORD *v133; // rbp
  __int64 v134; // rcx
  _QWORD *v135; // rax
  _QWORD *v136; // rdx
  __m128i v137; // xmm0
  const char *v138; // rax
  char v139; // al
  __int64 (__fastcall **v140)(); // rax
  char v141; // al
  char v142; // al
  char *v144; // rax
  char *v145; // r15
  char *v146; // rax
  char *v147; // rax
  char *v148; // r12
  _QWORD *v149; // rbp
  __int64 v150; // rcx
  _QWORD *v151; // rax
  _QWORD *v152; // rdx
  char *v153; // rdx
  char v154; // al
  char *v155; // r12
  _QWORD *v156; // rbp
  __int64 v157; // rcx
  _QWORD *v158; // rax
  _QWORD *v159; // rdx
  _QWORD *v160; // rax
  _QWORD *v161; // rdx
  _QWORD *v162; // rax
  _QWORD *v163; // rdx
  _QWORD *v164; // rax
  _QWORD *v165; // rdx
  _QWORD *v166; // rax
  _QWORD *v167; // rdx
  _QWORD *v168; // rax
  _QWORD *v169; // rdx
  _QWORD *v170; // rax
  _QWORD *v171; // rdx
  _QWORD *v172; // rax
  _QWORD *v173; // rdx
  _QWORD *v174; // rax
  _QWORD *v175; // rdx
  char *v176; // rax
  _QWORD *v177; // rax
  _QWORD *v178; // rdx
  _QWORD *v179; // rax
  _QWORD *v180; // rdx
  char *v181; // r12
  char *v182; // rbx
  char *v183; // rcx
  unsigned int v184; // edx
  char *v185; // r14
  char *v186; // rax
  char *v187; // r14
  _QWORD *v188; // rbx
  __int64 v189; // rcx
  _QWORD *v190; // rax
  _QWORD *v191; // rdx
  char *v192; // rax
  char *v193; // r15
  char *v194; // rax
  char *v195; // rax
  char *v196; // r14
  _QWORD *v197; // rax
  _QWORD *v198; // rdx
  _QWORD *v199; // rbx
  __int64 v200; // rcx
  _QWORD *v201; // rax
  _QWORD *v202; // rdx
  char *v203; // rax
  char *v204; // r15
  _QWORD *v205; // rax
  _QWORD *v206; // rdx
  char *v207; // rax
  char *v208; // rdx
  char *v209; // rax
  char *v210; // rdx
  _QWORD *v211; // [rsp+0h] [rbp-38h]

  v1 = a1;
  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 8);
  v4 = (unsigned __int64)&v3[-*(_QWORD *)a1];
  if ( !v4 )
  {
LABEL_65:
    v13 = (__int64)sub_E5CF0(a1);
LABEL_66:
    v14 = (_QWORD *)v13;
LABEL_67:
    if ( !v14 )
      return nullptr;
    goto LABEL_68;
  }
  v5 = *v2;
  v6 = (unsigned int)(v5 - 65);
  switch ( *v2 )
  {
    case 'A':
      v14 = nullptr;
      if ( v2 == v3 || (_BYTE)v5 != 65 )
        goto LABEL_67;
      v15 = v2 + 1;
      v16 = a1;
      *(_QWORD *)a1 = v2 + 1;
      if ( v3 != v2 + 1 && (unsigned int)(*v15 - 48) <= 9 )
      {
        v17 = v2 + 2;
        do
        {
          v18 = v17;
          *(_QWORD *)a1 = v17;
          if ( v3 == v17 )
            break;
          v19 = *v17++ - 48;
        }
        while ( v19 < 0xA );
        if ( v3 != v18 && *v18 == 95 )
        {
          v20 = a1;
          *(_QWORD *)a1 = v18 + 1;
          v21 = sub_D4260(a1);
          if ( v21 )
          {
            v22 = v21;
            v23 = *(_QWORD **)(a1 + 4832);
            v24 = v23[1];
            if ( (unsigned __int64)(v24 + 48) < 0xFF0 )
            {
              v26 = v23 + 1;
            }
            else
            {
              v25 = (_QWORD *)operator new[](0x1000u);
              *v25 = v23;
              v25[1] = 0;
              *(_QWORD *)(a1 + 4832) = v25;
              v24 = 0;
              v26 = v25 + 1;
              v23 = v25;
            }
            *v26 = v24 + 48;
            v14 = (_QWORD *)((char *)v23 + v24 + 16);
            *(_DWORD *)((char *)v23 + v24 + 24) = 16777231;
            *v14 = off_153338;
            *(_QWORD *)((char *)v23 + v24 + 32) = v22;
            *(_QWORD *)((char *)v23 + v24 + 40) = v15;
            *(_QWORD *)((char *)v23 + v24 + 48) = v18;
            goto LABEL_209;
          }
          goto LABEL_203;
        }
        goto LABEL_202;
      }
      if ( v15 == v3 || *v15 != 95 )
      {
        v20 = a1;
        v144 = sub_D97A0(a1);
        if ( !v144 )
        {
LABEL_203:
          v14 = nullptr;
LABEL_204:
          v1 = v20;
          if ( v14 )
            goto LABEL_68;
          return nullptr;
        }
        v145 = v144;
        v146 = *(char **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v146 == 95 )
        {
          v20 = a1;
          *(_QWORD *)a1 = v146 + 1;
          v147 = sub_D4260(a1);
          if ( v147 )
          {
            v148 = v147;
            v149 = *(_QWORD **)(a1 + 4832);
            v150 = v149[1];
            if ( (unsigned __int64)(v150 + 48) < 0xFF0 )
            {
              v152 = v149 + 1;
            }
            else
            {
              v151 = (_QWORD *)operator new[](0x1000u);
              *v151 = v149;
              v151[1] = 0;
              *(_QWORD *)(a1 + 4832) = v151;
              v150 = 0;
              v152 = v151 + 1;
              v149 = v151;
            }
            *v152 = v150 + 48;
            v14 = (_QWORD *)((char *)v149 + v150 + 16);
            *(_DWORD *)((char *)v149 + v150 + 24) = 16777231;
            *v14 = off_153338;
            *(_QWORD *)((char *)v149 + v150 + 32) = v148;
            *(_QWORD *)((char *)v149 + v150 + 40) = v145;
            *(_QWORD *)((char *)v149 + v150 + 48) = 0;
LABEL_209:
            v1 = v16;
            if ( v14 )
              goto LABEL_68;
            return nullptr;
          }
          goto LABEL_203;
        }
LABEL_202:
        v14 = nullptr;
        goto LABEL_209;
      }
      v1 = a1;
      *(_QWORD *)a1 = v2 + 2;
      v131 = sub_D4260(a1);
      if ( v131 )
      {
        v132 = v131;
        v133 = *(_QWORD **)(a1 + 4832);
        v134 = v133[1];
        if ( (unsigned __int64)(v134 + 48) < 0xFF0 )
        {
          v136 = v133 + 1;
        }
        else
        {
          v135 = (_QWORD *)operator new[](0x1000u);
          *v135 = v133;
          v135[1] = 0;
          *(_QWORD *)(a1 + 4832) = v135;
          v134 = 0;
          v136 = v135 + 1;
          v133 = v135;
        }
        *v136 = v134 + 48;
        v14 = (_QWORD *)((char *)v133 + v134 + 16);
        *(_DWORD *)((char *)v133 + v134 + 24) = 16777231;
        *v14 = off_153338;
        *(_QWORD *)((char *)v133 + v134 + 32) = v132;
        *(_OWORD *)((char *)v133 + v134 + 40) = 0;
        if ( (_QWORD *)((char *)v133 + v134) != (_QWORD *)-16LL )
          goto LABEL_68;
      }
      return nullptr;
    case 'C':
      *(_QWORD *)a1 = v2 + 1;
      v27 = sub_D4260(a1);
      if ( !v27 )
        return nullptr;
      v28 = v27;
      v29 = *(_QWORD **)(a1 + 4832);
      v30 = v29[1];
      if ( (unsigned __int64)(v30 + 48) < 0xFF0 )
      {
        v32 = v29 + 1;
      }
      else
      {
        v31 = (_QWORD *)operator new[](0x1000u);
        *v31 = v29;
        v31[1] = 0;
        *(_QWORD *)(a1 + 4832) = v31;
        v30 = 0;
        v32 = v31 + 1;
        v29 = v31;
      }
      *v32 = v30 + 48;
      v14 = (_QWORD *)((char *)v29 + v30 + 16);
      *(_DWORD *)((char *)v29 + v30 + 24) = 16843013;
      *v14 = off_1535D8;
      *(_QWORD *)((char *)v29 + v30 + 32) = v28;
      v137 = (__m128i)(unsigned __int64)"";
      v138 = " complex";
      goto LABEL_185;
    case 'D':
      if ( v4 < 2 )
        return nullptr;
      break;
    case 'F':
      goto LABEL_14;
    case 'G':
      *(_QWORD *)a1 = v2 + 1;
      v34 = sub_D4260(a1);
      if ( !v34 )
        return nullptr;
      v35 = v34;
      v29 = *(_QWORD **)(a1 + 4832);
      v30 = v29[1];
      if ( (unsigned __int64)(v30 + 48) < 0xFF0 )
      {
        v37 = v29 + 1;
      }
      else
      {
        v36 = (_QWORD *)operator new[](0x1000u);
        *v36 = v29;
        v36[1] = 0;
        *(_QWORD *)(a1 + 4832) = v36;
        v30 = 0;
        v37 = v36 + 1;
        v29 = v36;
      }
      *v37 = v30 + 48;
      v14 = (_QWORD *)((char *)v29 + v30 + 16);
      *(_DWORD *)((char *)v29 + v30 + 24) = 16843013;
      *v14 = off_1535D8;
      *(_QWORD *)((char *)v29 + v30 + 32) = v35;
      v137 = (__m128i)(unsigned __int64)"";
      v138 = " imaginary";
LABEL_185:
      *(__m128i *)((char *)v29 + v30 + 40) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v138, v137);
      if ( !v14 )
        return nullptr;
      goto LABEL_68;
    case 'K':
    case 'V':
    case 'r':
      v7 = (_BYTE)v5 == 114;
      if ( v4 > v7 )
      {
        v6 = (unsigned int)((_BYTE)v5 == 114) + 1;
        if ( v2[v7] == 86 )
          LODWORD(v7) = ((_BYTE)v5 == 114) + 1;
      }
      v8 = (unsigned int)v7;
      if ( v4 > (unsigned int)v7 )
      {
        v6 = v2[(unsigned int)v7] == 75;
        v7 = (unsigned int)(v6 + v7);
        v8 = v7;
      }
      if ( v4 <= v8 )
        goto LABEL_15;
      v9 = v2[v8];
      if ( v9 != 70 )
      {
        if ( v9 != 68 )
          goto LABEL_15;
        v10 = (unsigned int)(v7 + 1);
        if ( v4 <= v10 )
          goto LABEL_15;
        v11 = v2[v10] - 79;
        if ( v11 > 0x29u )
          goto LABEL_15;
        v12 = 0x30100000001LL;
        if ( !_bittest64(&v12, v11) )
          goto LABEL_15;
      }
LABEL_14:
      v13 = (__int64)sub_E5170((char **)a1);
      goto LABEL_66;
    case 'M':
      v16 = a1;
      v33 = nullptr;
      if ( v2 == v3 || (_BYTE)v5 != 77 )
        return v33;
      *(_QWORD *)a1 = v2 + 1;
      v38 = sub_D4260(a1);
      if ( !v38 )
        return nullptr;
      v39 = v38;
      v40 = sub_D4260(a1);
      if ( !v40 )
        return nullptr;
      v41 = v40;
      v42 = *(_QWORD **)(a1 + 4832);
      v43 = v42[1];
      if ( (unsigned __int64)(v43 + 32) < 0xFF0 )
      {
        v45 = v42 + 1;
      }
      else
      {
        v44 = (_QWORD *)operator new[](0x1000u);
        *v44 = v42;
        v44[1] = 0;
        *(_QWORD *)(a1 + 4832) = v44;
        v43 = 0;
        v45 = v44 + 1;
        v42 = v44;
      }
      *v45 = v43 + 32;
      v14 = (_QWORD *)((char *)v42 + v43 + 16);
      v154 = v41[9];
      *((_BYTE *)v42 + v43 + 24) = 14;
      *((_BYTE *)v42 + v43 + 25) = v154;
      *(_WORD *)((char *)v42 + v43 + 26) = 257;
      *v14 = off_1533A8;
      *(_QWORD *)((char *)v42 + v43 + 32) = v39;
      *(_QWORD *)((char *)v42 + v43 + 40) = v41;
      goto LABEL_209;
    case 'O':
      *(_QWORD *)a1 = v2 + 1;
      v46 = sub_D4260(a1);
      if ( !v46 )
        return nullptr;
      v47 = v46;
      v48 = *(_QWORD **)(a1 + 4832);
      v49 = v48[1];
      if ( (unsigned __int64)(v49 + 32) < 0xFF0 )
      {
        v51 = v48 + 1;
      }
      else
      {
        v50 = (_QWORD *)operator new[](0x1000u);
        *v50 = v48;
        v50[1] = 0;
        *(_QWORD *)(a1 + 4832) = v50;
        v49 = 0;
        v51 = v50 + 1;
        v48 = v50;
      }
      *v51 = v49 + 32;
      v14 = (_QWORD *)((char *)v48 + v49 + 16);
      v139 = v47[9];
      *((_BYTE *)v48 + v49 + 24) = 13;
      *((_BYTE *)v48 + v49 + 25) = v139;
      *(_WORD *)((char *)v48 + v49 + 26) = 257;
      v140 = off_153568;
      goto LABEL_193;
    case 'P':
      *(_QWORD *)a1 = v2 + 1;
      v52 = sub_D4260(a1);
      if ( !v52 )
        return nullptr;
      v47 = v52;
      v48 = *(_QWORD **)(a1 + 4832);
      v49 = v48[1];
      if ( (unsigned __int64)(v49 + 32) < 0xFF0 )
      {
        v54 = v48 + 1;
      }
      else
      {
        v53 = (_QWORD *)operator new[](0x1000u);
        *v53 = v48;
        v53[1] = 0;
        *(_QWORD *)(a1 + 4832) = v53;
        v49 = 0;
        v54 = v53 + 1;
        v48 = v53;
      }
      *v54 = v49 + 32;
      v14 = (_QWORD *)((char *)v48 + v49 + 16);
      v141 = v47[9];
      *((_BYTE *)v48 + v49 + 24) = 11;
      *((_BYTE *)v48 + v49 + 25) = v141;
      *(_WORD *)((char *)v48 + v49 + 26) = 257;
      v140 = off_153488;
      goto LABEL_193;
    case 'R':
      *(_QWORD *)a1 = v2 + 1;
      v55 = sub_D4260(a1);
      if ( !v55 )
        return nullptr;
      v47 = v55;
      v48 = *(_QWORD **)(a1 + 4832);
      v49 = v48[1];
      if ( (unsigned __int64)(v49 + 32) < 0xFF0 )
      {
        v57 = v48 + 1;
      }
      else
      {
        v56 = (_QWORD *)operator new[](0x1000u);
        *v56 = v48;
        v56[1] = 0;
        *(_QWORD *)(a1 + 4832) = v56;
        v49 = 0;
        v57 = v56 + 1;
        v48 = v56;
      }
      *v57 = v49 + 32;
      v14 = (_QWORD *)((char *)v48 + v49 + 16);
      v142 = v47[9];
      *((_BYTE *)v48 + v49 + 24) = 12;
      *((_BYTE *)v48 + v49 + 25) = v142;
      *(_WORD *)((char *)v48 + v49 + 26) = 257;
      v140 = off_1534F8;
LABEL_193:
      *(_QWORD *)((char *)v48 + v49 + 16) = v140;
      *(_QWORD *)((char *)v48 + v49 + 32) = v47;
      if ( !v14 )
        return nullptr;
      goto LABEL_68;
    case 'S':
      if ( v4 < 2 )
        goto LABEL_65;
      v58 = v2[1];
      if ( !v58 || v58 == 116 )
        goto LABEL_65;
      v59 = sub_D7A40((char **)a1);
      if ( !v59 )
        return nullptr;
      v33 = v59;
      if ( !*(_BYTE *)(a1 + 720) || *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
        return v33;
      v20 = a1;
      v60 = sub_D7E00((_QWORD *)a1, 0);
      if ( !v60 )
        return nullptr;
      v61 = v60;
      v62 = *(_QWORD **)(a1 + 4832);
      v63 = v62[1];
      if ( (unsigned __int64)(v63 + 32) < 0xFF0 )
      {
        v65 = v62 + 1;
      }
      else
      {
        v64 = (_QWORD *)operator new[](0x1000u);
        *v64 = v62;
        v64[1] = 0;
        *(_QWORD *)(a1 + 4832) = v64;
        v63 = 0;
        v65 = v64 + 1;
        v62 = v64;
      }
      *v65 = v63 + 32;
      v14 = (_QWORD *)((char *)v62 + v63 + 16);
      *(_DWORD *)((char *)v62 + v63 + 24) = 16843040;
      *v14 = off_152D88;
      *(_QWORD *)((char *)v62 + v63 + 32) = v33;
      *(_QWORD *)((char *)v62 + v63 + 40) = v61;
      goto LABEL_204;
    case 'T':
      if ( v4 >= 2 )
      {
        v66 = v2[1] - 101;
        if ( v66 <= 0x10u )
        {
          v67 = 81921;
          if ( _bittest64(&v67, v66) )
            goto LABEL_65;
        }
      }
      v122 = sub_D85D0(a1);
      if ( !v122 )
        return nullptr;
      v14 = v122;
      if ( !*(_BYTE *)(a1 + 720) || *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
        goto LABEL_67;
      v33 = nullptr;
      v123 = sub_D7E00((_QWORD *)a1, 0);
      if ( !v123 )
        return v33;
      v124 = v123;
      v125 = *(_QWORD **)(a1 + 4832);
      v126 = v125[1];
      v1 = a1;
      if ( (unsigned __int64)(v126 + 32) < 0xFF0 )
      {
        v128 = v125 + 1;
      }
      else
      {
        v127 = (_QWORD *)operator new[](0x1000u);
        *v127 = v125;
        v127[1] = 0;
        *(_QWORD *)(a1 + 4832) = v127;
        v126 = 0;
        v128 = v127 + 1;
        v125 = v127;
      }
      *v128 = v126 + 32;
      *(_DWORD *)((char *)v125 + v126 + 24) = 16843040;
      *(_QWORD *)((char *)v125 + v126 + 16) = off_152D88;
      *(_QWORD *)((char *)v125 + v126 + 32) = v14;
      v14 = (_QWORD *)((char *)v125 + v126 + 16);
      *(_QWORD *)((char *)v125 + v126 + 40) = v124;
      if ( (_QWORD *)((char *)v125 + v126) == (_QWORD *)-16LL )
        return nullptr;
      goto LABEL_68;
    case 'U':
LABEL_15:
      v13 = sub_E5940((_QWORD *)a1, v6);
      goto LABEL_66;
    case 'a':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v77 = v74 + 1;
      }
      else
      {
        v76 = (_QWORD *)operator new[](0x1000u);
        *v76 = v74;
        v76[1] = 0;
        *(_QWORD *)(a1 + 4832) = v76;
        v75 = 0;
        v77 = v76 + 1;
        v74 = v76;
      }
      *v77 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "signed char";
      goto LABEL_175;
    case 'b':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v79 = v74 + 1;
      }
      else
      {
        v78 = (_QWORD *)operator new[](0x1000u);
        *v78 = v74;
        v78[1] = 0;
        *(_QWORD *)(a1 + 4832) = v78;
        v75 = 0;
        v79 = v78 + 1;
        v74 = v78;
      }
      *v79 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "bool";
      goto LABEL_175;
    case 'c':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v81 = v74 + 1;
      }
      else
      {
        v80 = (_QWORD *)operator new[](0x1000u);
        *v80 = v74;
        v80[1] = 0;
        *(_QWORD *)(a1 + 4832) = v80;
        v75 = 0;
        v81 = v80 + 1;
        v74 = v80;
      }
      *v81 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "char";
      goto LABEL_175;
    case 'd':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v83 = v74 + 1;
      }
      else
      {
        v82 = (_QWORD *)operator new[](0x1000u);
        *v82 = v74;
        v82[1] = 0;
        *(_QWORD *)(a1 + 4832) = v82;
        v75 = 0;
        v83 = v82 + 1;
        v74 = v82;
      }
      *v83 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "double";
      goto LABEL_175;
    case 'e':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v85 = v74 + 1;
      }
      else
      {
        v84 = (_QWORD *)operator new[](0x1000u);
        *v84 = v74;
        v84[1] = 0;
        *(_QWORD *)(a1 + 4832) = v84;
        v75 = 0;
        v85 = v84 + 1;
        v74 = v84;
      }
      *v85 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "long double";
      goto LABEL_175;
    case 'f':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v87 = v74 + 1;
      }
      else
      {
        v86 = (_QWORD *)operator new[](0x1000u);
        *v86 = v74;
        v86[1] = 0;
        *(_QWORD *)(a1 + 4832) = v86;
        v75 = 0;
        v87 = v86 + 1;
        v74 = v86;
      }
      *v87 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "float";
      goto LABEL_175;
    case 'g':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v89 = v74 + 1;
      }
      else
      {
        v88 = (_QWORD *)operator new[](0x1000u);
        *v88 = v74;
        v88[1] = 0;
        *(_QWORD *)(a1 + 4832) = v88;
        v75 = 0;
        v89 = v88 + 1;
        v74 = v88;
      }
      *v89 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "__float128";
      goto LABEL_175;
    case 'h':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v91 = v74 + 1;
      }
      else
      {
        v90 = (_QWORD *)operator new[](0x1000u);
        *v90 = v74;
        v90[1] = 0;
        *(_QWORD *)(a1 + 4832) = v90;
        v75 = 0;
        v91 = v90 + 1;
        v74 = v90;
      }
      *v91 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "unsigned char";
      goto LABEL_175;
    case 'i':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v93 = v74 + 1;
      }
      else
      {
        v92 = (_QWORD *)operator new[](0x1000u);
        *v92 = v74;
        v92[1] = 0;
        *(_QWORD *)(a1 + 4832) = v92;
        v75 = 0;
        v93 = v92 + 1;
        v74 = v92;
      }
      *v93 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "int";
      goto LABEL_175;
    case 'j':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v95 = v74 + 1;
      }
      else
      {
        v94 = (_QWORD *)operator new[](0x1000u);
        *v94 = v74;
        v94[1] = 0;
        *(_QWORD *)(a1 + 4832) = v94;
        v75 = 0;
        v95 = v94 + 1;
        v74 = v94;
      }
      *v95 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "unsigned int";
      goto LABEL_175;
    case 'l':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v97 = v74 + 1;
      }
      else
      {
        v96 = (_QWORD *)operator new[](0x1000u);
        *v96 = v74;
        v96[1] = 0;
        *(_QWORD *)(a1 + 4832) = v96;
        v75 = 0;
        v97 = v96 + 1;
        v74 = v96;
      }
      *v97 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "long";
      goto LABEL_175;
    case 'm':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v99 = v74 + 1;
      }
      else
      {
        v98 = (_QWORD *)operator new[](0x1000u);
        *v98 = v74;
        v98[1] = 0;
        *(_QWORD *)(a1 + 4832) = v98;
        v75 = 0;
        v99 = v98 + 1;
        v74 = v98;
      }
      *v99 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "unsigned long";
      goto LABEL_175;
    case 'n':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v101 = v74 + 1;
      }
      else
      {
        v100 = (_QWORD *)operator new[](0x1000u);
        *v100 = v74;
        v100[1] = 0;
        *(_QWORD *)(a1 + 4832) = v100;
        v75 = 0;
        v101 = v100 + 1;
        v74 = v100;
      }
      *v101 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "__int128";
      goto LABEL_175;
    case 'o':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v103 = v74 + 1;
      }
      else
      {
        v102 = (_QWORD *)operator new[](0x1000u);
        *v102 = v74;
        v102[1] = 0;
        *(_QWORD *)(a1 + 4832) = v102;
        v75 = 0;
        v103 = v102 + 1;
        v74 = v102;
      }
      *v103 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "unsigned __int128";
      goto LABEL_175;
    case 's':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v105 = v74 + 1;
      }
      else
      {
        v104 = (_QWORD *)operator new[](0x1000u);
        *v104 = v74;
        v104[1] = 0;
        *(_QWORD *)(a1 + 4832) = v104;
        v75 = 0;
        v105 = v104 + 1;
        v74 = v104;
      }
      *v105 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "short";
      goto LABEL_175;
    case 't':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v107 = v74 + 1;
      }
      else
      {
        v106 = (_QWORD *)operator new[](0x1000u);
        *v106 = v74;
        v106[1] = 0;
        *(_QWORD *)(a1 + 4832) = v106;
        v75 = 0;
        v107 = v106 + 1;
        v74 = v106;
      }
      *v107 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "unsigned short";
      goto LABEL_175;
    case 'u':
      v108 = v2 + 1;
      *(_QWORD *)a1 = v108;
      if ( v3 == v108 || (unsigned __int8)(*v108 - 48) > 9u )
        return nullptr;
      if ( v108 == v3 )
      {
        v111 = -48;
      }
      else
      {
        v109 = 0;
        do
        {
          v110 = v108++;
          *(_QWORD *)a1 = v108;
          v111 = *v110 + v109 - 48;
          if ( v3 == v108 || (unsigned __int8)(*v108 - 48) >= 0xAu )
          {
            v153 = v108;
            goto LABEL_213;
          }
          v109 = 10 * v111;
        }
        while ( v3 != v108 );
        v111 = v109 - 48;
      }
      v153 = v108;
      v108 = v3;
LABEL_213:
      if ( v3 - v153 < v111 )
        return nullptr;
      v155 = &v108[v111];
      *(_QWORD *)a1 = &v108[v111];
      if ( !v111 )
        return nullptr;
      v156 = *(_QWORD **)(a1 + 4832);
      v157 = v156[1];
      if ( (unsigned __int64)(v157 + 32) < 0xFF0 )
      {
        v159 = v156 + 1;
      }
      else
      {
        v158 = (_QWORD *)operator new[](0x1000u);
        *v158 = v156;
        v158[1] = 0;
        *(_QWORD *)(a1 + 4832) = v158;
        v157 = 0;
        v159 = v158 + 1;
        v156 = v158;
      }
      *v159 = v157 + 32;
      v33 = (char *)v156 + v157 + 16;
      *(_DWORD *)((char *)v156 + v157 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      *(_QWORD *)((char *)v156 + v157 + 32) = v108;
      *(_QWORD *)((char *)v156 + v157 + 40) = v155;
      return v33;
    case 'v':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v113 = v74 + 1;
      }
      else
      {
        v112 = (_QWORD *)operator new[](0x1000u);
        *v112 = v74;
        v112[1] = 0;
        *(_QWORD *)(a1 + 4832) = v112;
        v75 = 0;
        v113 = v112 + 1;
        v74 = v112;
      }
      *v113 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "void";
      goto LABEL_175;
    case 'w':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v115 = v74 + 1;
      }
      else
      {
        v114 = (_QWORD *)operator new[](0x1000u);
        *v114 = v74;
        v114[1] = 0;
        *(_QWORD *)(a1 + 4832) = v114;
        v75 = 0;
        v115 = v114 + 1;
        v74 = v114;
      }
      *v115 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "wchar_t";
      goto LABEL_175;
    case 'x':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v117 = v74 + 1;
      }
      else
      {
        v116 = (_QWORD *)operator new[](0x1000u);
        *v116 = v74;
        v116[1] = 0;
        *(_QWORD *)(a1 + 4832) = v116;
        v75 = 0;
        v117 = v116 + 1;
        v74 = v116;
      }
      *v117 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "long long";
      goto LABEL_175;
    case 'y':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v119 = v74 + 1;
      }
      else
      {
        v118 = (_QWORD *)operator new[](0x1000u);
        *v118 = v74;
        v118[1] = 0;
        *(_QWORD *)(a1 + 4832) = v118;
        v75 = 0;
        v119 = v118 + 1;
        v74 = v118;
      }
      *v119 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "unsigned long long";
      goto LABEL_175;
    case 'z':
      *(_QWORD *)a1 = v2 + 1;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v121 = v74 + 1;
      }
      else
      {
        v120 = (_QWORD *)operator new[](0x1000u);
        *v120 = v74;
        v120[1] = 0;
        *(_QWORD *)(a1 + 4832) = v120;
        v75 = 0;
        v121 = v120 + 1;
        v74 = v120;
      }
      *v121 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "...";
LABEL_175:
      *(__m128i *)((char *)v74 + v75 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v130, v129);
      return v33;
    default:
      goto LABEL_65;
  }
  v33 = nullptr;
  switch ( v2[1] )
  {
    case 'O':
    case 'o':
    case 'w':
    case 'x':
      v1 = a1;
      v13 = (__int64)sub_E5170((char **)a1);
      goto LABEL_66;
    case 'T':
    case 't':
      v1 = a1;
      v13 = (__int64)sub_D88C0((_QWORD *)a1);
      goto LABEL_66;
    case 'a':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v161 = v74 + 1;
      }
      else
      {
        v160 = (_QWORD *)operator new[](0x1000u);
        *v160 = v74;
        v160[1] = 0;
        *(_QWORD *)(a1 + 4832) = v160;
        v75 = 0;
        v161 = v160 + 1;
        v74 = v160;
      }
      *v161 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "auto";
      goto LABEL_175;
    case 'c':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v163 = v74 + 1;
      }
      else
      {
        v162 = (_QWORD *)operator new[](0x1000u);
        *v162 = v74;
        v162[1] = 0;
        *(_QWORD *)(a1 + 4832) = v162;
        v75 = 0;
        v163 = v162 + 1;
        v74 = v162;
      }
      *v163 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "decltype(auto)";
      goto LABEL_175;
    case 'd':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v165 = v74 + 1;
      }
      else
      {
        v164 = (_QWORD *)operator new[](0x1000u);
        *v164 = v74;
        v164[1] = 0;
        *(_QWORD *)(a1 + 4832) = v164;
        v75 = 0;
        v165 = v164 + 1;
        v74 = v164;
      }
      *v165 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "decimal64";
      goto LABEL_175;
    case 'e':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v167 = v74 + 1;
      }
      else
      {
        v166 = (_QWORD *)operator new[](0x1000u);
        *v166 = v74;
        v166[1] = 0;
        *(_QWORD *)(a1 + 4832) = v166;
        v75 = 0;
        v167 = v166 + 1;
        v74 = v166;
      }
      *v167 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "decimal128";
      goto LABEL_175;
    case 'f':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v169 = v74 + 1;
      }
      else
      {
        v168 = (_QWORD *)operator new[](0x1000u);
        *v168 = v74;
        v168[1] = 0;
        *(_QWORD *)(a1 + 4832) = v168;
        v75 = 0;
        v169 = v168 + 1;
        v74 = v168;
      }
      *v169 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "decimal32";
      goto LABEL_175;
    case 'h':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v171 = v74 + 1;
      }
      else
      {
        v170 = (_QWORD *)operator new[](0x1000u);
        *v170 = v74;
        v170[1] = 0;
        *(_QWORD *)(a1 + 4832) = v170;
        v75 = 0;
        v171 = v170 + 1;
        v74 = v170;
      }
      *v171 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "decimal16";
      goto LABEL_175;
    case 'i':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v173 = v74 + 1;
      }
      else
      {
        v172 = (_QWORD *)operator new[](0x1000u);
        *v172 = v74;
        v172[1] = 0;
        *(_QWORD *)(a1 + 4832) = v172;
        v75 = 0;
        v173 = v172 + 1;
        v74 = v172;
      }
      *v173 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "char32_t";
      goto LABEL_175;
    case 'n':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v175 = v74 + 1;
      }
      else
      {
        v174 = (_QWORD *)operator new[](0x1000u);
        *v174 = v74;
        v174[1] = 0;
        *(_QWORD *)(a1 + 4832) = v174;
        v75 = 0;
        v175 = v174 + 1;
        v74 = v174;
      }
      *v175 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "std::nullptr_t";
      goto LABEL_175;
    case 'p':
      v1 = a1;
      *(_QWORD *)a1 = v2 + 2;
      v176 = sub_D4260(a1);
      if ( !v176 )
        return nullptr;
      v47 = v176;
      v48 = *(_QWORD **)(a1 + 4832);
      v49 = v48[1];
      if ( (unsigned __int64)(v49 + 32) < 0xFF0 )
      {
        v178 = v48 + 1;
      }
      else
      {
        v177 = (_QWORD *)operator new[](0x1000u);
        *v177 = v48;
        v177[1] = 0;
        *(_QWORD *)(a1 + 4832) = v177;
        v49 = 0;
        v178 = v177 + 1;
        v48 = v177;
      }
      *v178 = v49 + 32;
      v14 = (_QWORD *)((char *)v48 + v49 + 16);
      *(_DWORD *)((char *)v48 + v49 + 24) = 16843037;
      v140 = off_151EA8;
      goto LABEL_193;
    case 's':
      *(_QWORD *)a1 = v2 + 2;
      v74 = *(_QWORD **)(a1 + 4832);
      v75 = v74[1];
      if ( (unsigned __int64)(v75 + 32) < 0xFF0 )
      {
        v180 = v74 + 1;
      }
      else
      {
        v179 = (_QWORD *)operator new[](0x1000u);
        *v179 = v74;
        v179[1] = 0;
        *(_QWORD *)(a1 + 4832) = v179;
        v75 = 0;
        v180 = v179 + 1;
        v74 = v179;
      }
      *v180 = v75 + 32;
      v33 = (char *)v74 + v75 + 16;
      *(_DWORD *)((char *)v74 + v75 + 24) = 16843015;
      *(_QWORD *)v33 = off_1519B8;
      v129 = (__m128i)(unsigned __int64)"";
      v130 = "char16_t";
      goto LABEL_175;
    case 'v':
      v14 = nullptr;
      if ( (_BYTE)v5 != 68 )
        goto LABEL_314;
      v1 = a1;
      if ( v2[1] != 118 )
        goto LABEL_67;
      v181 = v2 + 2;
      *(_QWORD *)a1 = v2 + 2;
      if ( v3 == v2 + 2 || (unsigned __int8)(*v181 - 49) > 8u )
      {
        if ( v181 == v3 || *v181 != 95 )
        {
          v192 = sub_D97A0(a1);
          if ( !v192 )
            goto LABEL_306;
          v193 = v192;
          v194 = *(char **)a1;
          if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
            goto LABEL_306;
          if ( *v194 != 95 )
            goto LABEL_306;
          *(_QWORD *)a1 = v194 + 1;
          v195 = sub_D4260(a1);
          if ( !v195 )
            goto LABEL_306;
          v196 = v195;
          v188 = *(_QWORD **)(a1 + 4832);
          v189 = v188[1];
          if ( (unsigned __int64)(v189 + 48) < 0xFF0 )
          {
            v198 = v188 + 1;
          }
          else
          {
            v197 = (_QWORD *)operator new[](0x1000u);
            *v197 = v188;
            v197[1] = 0;
            *(_QWORD *)(a1 + 4832) = v197;
            v189 = 0;
            v198 = v197 + 1;
            v188 = v197;
          }
          *v198 = v189 + 48;
          v14 = (_QWORD *)((char *)v188 + v189 + 16);
          *(_DWORD *)((char *)v188 + v189 + 24) = 16843034;
          *v14 = off_1532C8;
          *(_QWORD *)((char *)v188 + v189 + 32) = v196;
          *(_QWORD *)((char *)v188 + v189 + 40) = v193;
          *(_QWORD *)((char *)v188 + v189 + 48) = 0;
        }
        else
        {
          *(_QWORD *)a1 = v2 + 3;
          v186 = sub_D4260(a1);
          if ( !v186 )
            goto LABEL_306;
          v187 = v186;
          v188 = *(_QWORD **)(a1 + 4832);
          v189 = v188[1];
          if ( (unsigned __int64)(v189 + 48) < 0xFF0 )
          {
            v191 = v188 + 1;
          }
          else
          {
            v190 = (_QWORD *)operator new[](0x1000u);
            *v190 = v188;
            v190[1] = 0;
            *(_QWORD *)(a1 + 4832) = v190;
            v189 = 0;
            v191 = v190 + 1;
            v188 = v190;
          }
          *v191 = v189 + 48;
          v14 = (_QWORD *)((char *)v188 + v189 + 16);
          *(_DWORD *)((char *)v188 + v189 + 24) = 16843034;
          *v14 = off_1532C8;
          *(_QWORD *)((char *)v188 + v189 + 32) = v187;
          *(__m128i *)((char *)v188 + v189 + 40) = _mm_load_si128((const __m128i *)&xmmword_FE360);
        }
LABEL_313:
        *((_BYTE *)v188 + v189 + 56) = 0;
        goto LABEL_314;
      }
      if ( (unsigned int)(*v181 - 48) > 9 )
      {
        v185 = nullptr;
        v183 = v2 + 2;
        v181 = nullptr;
        if ( v2 + 2 == v3 )
          goto LABEL_306;
      }
      else
      {
        v182 = v2 + 3;
        do
        {
          v183 = v182;
          *(_QWORD *)a1 = v182;
          if ( v3 == v182 )
            break;
          v184 = *v182++ - 48;
        }
        while ( v184 < 0xA );
        v185 = v183;
        if ( v183 == v3 )
          goto LABEL_306;
      }
      if ( *v183 != 95 )
        goto LABEL_306;
      *(_QWORD *)a1 = v183 + 1;
      if ( v183 + 1 == v3 || v183[1] != 112 )
      {
        v203 = sub_D4260(a1);
        if ( v203 )
        {
          v204 = v203;
          v188 = *(_QWORD **)(a1 + 4832);
          v189 = v188[1];
          if ( (unsigned __int64)(v189 + 48) < 0xFF0 )
          {
            v206 = v188 + 1;
          }
          else
          {
            v205 = (_QWORD *)operator new[](0x1000u);
            *v205 = v188;
            v205[1] = 0;
            *(_QWORD *)(a1 + 4832) = v205;
            v189 = 0;
            v206 = v205 + 1;
            v188 = v205;
          }
          *v206 = v189 + 48;
          v207 = v181 + 1;
          v208 = v185 + 1;
          if ( v185 )
          {
            v207 = v181;
            v208 = v185;
          }
          v14 = (_QWORD *)((char *)v188 + v189 + 16);
          *(_DWORD *)((char *)v188 + v189 + 24) = 16843034;
          *v14 = off_1532C8;
          *(_QWORD *)((char *)v188 + v189 + 32) = v204;
          *(_QWORD *)((char *)v188 + v189 + 40) = v207;
          *(_QWORD *)((char *)v188 + v189 + 48) = v208;
          goto LABEL_313;
        }
LABEL_306:
        v14 = nullptr;
        goto LABEL_314;
      }
      *(_QWORD *)a1 = v183 + 2;
      v199 = *(_QWORD **)(a1 + 4832);
      v200 = v199[1];
      if ( (unsigned __int64)(v200 + 48) < 0xFF0 )
      {
        v202 = v199 + 1;
      }
      else
      {
        v201 = (_QWORD *)operator new[](0x1000u);
        *v201 = v199;
        v201[1] = 0;
        *(_QWORD *)(a1 + 4832) = v201;
        v200 = 0;
        v202 = v201 + 1;
        v199 = v201;
      }
      *v202 = v200 + 48;
      v209 = v181 + 1;
      v210 = v185 + 1;
      if ( v185 )
      {
        v209 = v181;
        v210 = v185;
      }
      v14 = (_QWORD *)((char *)v199 + v200 + 16);
      *(_DWORD *)((char *)v199 + v200 + 24) = 16843034;
      *v14 = off_1532C8;
      *(_QWORD *)((char *)v199 + v200 + 32) = 0;
      *(_QWORD *)((char *)v199 + v200 + 40) = v209;
      *(_QWORD *)((char *)v199 + v200 + 48) = v210;
      *((_BYTE *)v199 + v200 + 56) = 1;
LABEL_314:
      v1 = a1;
      if ( !v14 )
        return nullptr;
LABEL_68:
      v68 = *(char **)(v1 + 304);
      if ( v68 == *(char **)(v1 + 312) )
      {
        v211 = v14;
        v69 = *(_BYTE **)(v1 + 296);
        v70 = v68 - v69;
        v71 = v70 >> 2;
        if ( (_BYTE *)(v1 + 320) == v69 )
        {
          v73 = (char *)malloc(2 * v70);
          v72 = v73;
          if ( v70 )
            memmove(v73, v69, v70);
          *(_QWORD *)(v1 + 296) = v72;
        }
        else
        {
          v72 = (char *)realloc(*(void **)(v1 + 296), 2 * v70);
          *(_QWORD *)(v1 + 296) = v72;
        }
        v68 = &v72[8 * (v70 >> 3)];
        *(_QWORD *)(v1 + 304) = v68;
        *(_QWORD *)(v1 + 312) = &v72[8 * v71];
        v14 = v211;
      }
      *(_QWORD *)(v1 + 304) = v68 + 8;
      *(_QWORD *)v68 = v14;
      return (char *)v14;
    default:
      return v33;
  }
}
// FE360: using guessed type __int128 xmmword_FE360;
// 1519B8: using guessed type __int64 (__fastcall *off_1519B8[7])();
// 151EA8: using guessed type __int64 (__fastcall *off_151EA8[7])();
// 152D88: using guessed type __int64 (__fastcall *off_152D88[7])();
// 1532C8: using guessed type __int64 (__fastcall *off_1532C8[7])();
// 153338: using guessed type __int64 (__fastcall *off_153338[7])();
// 1533A8: using guessed type __int64 (__fastcall *off_1533A8[7])();
// 153488: using guessed type __int64 (__fastcall *off_153488[7])();
// 1534F8: using guessed type __int64 (__fastcall *off_1534F8[7])();
// 153568: using guessed type __int64 (__fastcall *off_153568[7])();
// 1535D8: using guessed type __int64 (__fastcall *off_1535D8[7])();
