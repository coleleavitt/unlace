/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E64C0
// Address: 0x00000000000E64C0

//----- (00000000000E64C0) ----------------------------------------------------
char *__fastcall sub_E64C0(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // x8
  unsigned __int64 v3; // x9
  char *result; // x0
  _QWORD *v6; // x20
  _QWORD *v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x0
  __int64 v10; // x10
  char *v11; // x0
  char *v12; // x12
  _QWORD *v13; // x20
  _QWORD *v14; // x8
  __int64 v15; // x9
  _QWORD *v16; // x0
  __int64 v17; // x10
  char *v18; // x0
  _QWORD *v19; // x20
  __int64 v20; // x9
  _QWORD *v21; // x0
  int v22; // w9
  _QWORD *v23; // x20
  __int64 v24; // x9
  _QWORD *v25; // x0
  int v26; // w9
  _QWORD *v27; // x20
  __int64 v28; // x9
  _QWORD *v29; // x0
  _QWORD *v30; // x20
  __int64 v31; // x9
  _QWORD *v32; // x0
  _QWORD *v33; // x20
  _QWORD *v34; // x8
  __int64 v35; // x9
  _QWORD *v36; // x0
  __int64 v37; // x10
  char *v38; // x0
  _QWORD *v39; // x20
  __int64 v40; // x9
  _QWORD *v41; // x0
  _QWORD *v42; // x20
  _QWORD *v43; // x8
  __int64 v44; // x9
  _QWORD *v45; // x0
  char *v46; // x8
  int v47; // w9
  _QWORD *v48; // x20
  __int64 v49; // x9
  _QWORD *v50; // x0
  _QWORD *v51; // x20
  __int64 v52; // x9
  _QWORD *v53; // x0
  _QWORD *v54; // x20
  __int64 v55; // x9
  _QWORD *v56; // x0
  _QWORD *v57; // x20
  __int64 v58; // x9
  _QWORD *v59; // x0
  _QWORD *v60; // x20
  __int64 v61; // x9
  _QWORD *v62; // x0
  _QWORD *v63; // x21
  __int64 v64; // x20
  _QWORD *v65; // x8
  __int64 v66; // x9
  _QWORD *v67; // x0
  __int64 v68; // x10
  char *v69; // x0
  unsigned __int16 v70; // w11
  __int64 (__fastcall **v71)(); // x9
  _QWORD *v72; // x20
  __int64 v73; // x9
  _QWORD *v74; // x0
  _QWORD *v75; // x20
  __int64 v76; // x9
  _QWORD *v77; // x0
  _QWORD *v78; // x20
  __int64 v79; // x9
  _QWORD *v80; // x0
  _QWORD *v81; // x20
  __int64 v82; // x9
  _QWORD *v83; // x0
  _QWORD *v84; // x20
  __int64 v85; // x9
  _QWORD *v86; // x0
  _QWORD *v87; // x20
  __int64 v88; // x9
  _QWORD *v89; // x0
  _QWORD *v90; // x20
  __int64 v91; // x9
  _QWORD *v92; // x0
  _QWORD *v93; // x20
  __int64 v94; // x9
  _QWORD *v95; // x0
  _QWORD *v96; // x20
  __int64 v97; // x9
  _QWORD *v98; // x0
  int v99; // w23
  char v100; // w22
  __int64 v102; // x21
  _QWORD *v103; // x20
  _QWORD *v104; // x8
  __int64 v105; // x9
  _QWORD *v106; // x0
  _QWORD *v107; // x20
  __int64 v108; // x9
  _QWORD *v109; // x0
  _QWORD *v110; // x20
  __int64 v111; // x9
  _QWORD *v112; // x0
  _QWORD *v113; // x20
  __int64 v114; // x9
  _QWORD *v115; // x0
  _QWORD *v116; // x20
  __int64 v117; // x9
  _QWORD *v118; // x0
  _QWORD *v119; // x20
  __int64 v120; // x9
  _QWORD *v121; // x0
  _QWORD *v122; // x20
  __int64 v123; // x9
  _QWORD *v124; // x0
  _QWORD *v125; // x20
  _QWORD *v126; // x8
  __int64 v127; // x9
  _QWORD *v128; // x0
  _QWORD *v129; // x20
  _QWORD *v130; // x8
  __int64 v131; // x9
  _QWORD *v132; // x0
  _QWORD *v133; // x20
  __int64 v134; // x9
  _QWORD *v135; // x0
  _QWORD *v136; // x20
  __int64 v137; // x9
  _QWORD *v138; // x0
  _QWORD *v139; // x21
  __int64 v140; // x9
  _QWORD *v141; // x0
  _QWORD *v142; // x20
  __int64 v143; // x9
  _QWORD *v144; // x0
  _QWORD *v145; // x20
  __int64 v146; // x9
  _QWORD *v147; // x0
  _QWORD *v148; // x20
  __int64 v149; // x9
  _QWORD *v150; // x0
  _QWORD *v151; // x20
  __int64 v152; // x9
  _QWORD *v153; // x0
  _QWORD *v154; // x20
  __int64 v155; // x9
  _QWORD *v156; // x0
  _QWORD *v157; // x20
  __int64 v158; // x9
  _QWORD *v159; // x0
  _QWORD *v160; // x20
  _QWORD *v161; // x8
  __int64 v162; // x9
  _QWORD *v163; // x0
  _QWORD *v164; // x20
  __int64 v165; // x9
  _QWORD *v166; // x0
  _QWORD *v167; // x20
  __int64 v168; // x9
  _QWORD *v169; // x0
  _QWORD *v170; // x20
  __int64 v171; // x9
  _QWORD *v172; // x0
  _QWORD *v173; // x20
  __int64 v174; // x9
  _QWORD *v175; // x0
  __int128 v176; // q0

  v2 = *(_BYTE **)a1;
  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( !v3 )
    return nullptr;
  result = nullptr;
  switch ( *v2 )
  {
    case 'a':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'N':
          v116 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v116 + 1;
          v117 = v116[1];
          if ( (unsigned __int64)(v117 + 32) >= 0xFF0 )
          {
            v118 = (_QWORD *)operator new[](0x1000u);
            v117 = 0;
            *v118 = v116;
            v118[1] = 0;
            v14 = v118 + 1;
            v116 = v118;
            *(_QWORD *)(a1 + 4832) = v118;
          }
          v17 = v117 + 32;
          v18 = (char *)v116 + v117;
          v12 = "operator&=";
          goto LABEL_188;
        case 'S':
          v119 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v119 + 1;
          v120 = v119[1];
          if ( (unsigned __int64)(v120 + 32) >= 0xFF0 )
          {
            v121 = (_QWORD *)operator new[](0x1000u);
            v120 = 0;
            *v121 = v119;
            v121[1] = 0;
            v7 = v121 + 1;
            v119 = v121;
            *(_QWORD *)(a1 + 4832) = v121;
          }
          v10 = v120 + 32;
          v11 = (char *)v119 + v120;
          v12 = "operator=";
          goto LABEL_171;
        case 'a':
          v122 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v122 + 1;
          v123 = v122[1];
          if ( (unsigned __int64)(v123 + 32) >= 0xFF0 )
          {
            v124 = (_QWORD *)operator new[](0x1000u);
            v123 = 0;
            *v124 = v122;
            v124[1] = 0;
            v14 = v124 + 1;
            v122 = v124;
            *(_QWORD *)(a1 + 4832) = v124;
          }
          v17 = v123 + 32;
          v18 = (char *)v122 + v123;
          v12 = "operator&&";
          goto LABEL_188;
        case 'd':
        case 'n':
          v6 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v6 + 1;
          v8 = v6[1];
          if ( (unsigned __int64)(v8 + 32) >= 0xFF0 )
          {
            v9 = (_QWORD *)operator new[](0x1000u);
            v8 = 0;
            *v9 = v6;
            v9[1] = 0;
            v7 = v9 + 1;
            v6 = v9;
            *(_QWORD *)(a1 + 4832) = v9;
          }
          v10 = v8 + 32;
          v11 = (char *)v6 + v8;
          v12 = "operator&";
          goto LABEL_171;
        default:
          return result;
      }
      return result;
    case 'c':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'l':
          v13 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v13 + 1;
          v15 = v13[1];
          if ( (unsigned __int64)(v15 + 32) >= 0xFF0 )
          {
            v16 = (_QWORD *)operator new[](0x1000u);
            v15 = 0;
            *v16 = v13;
            v16[1] = 0;
            v14 = v16 + 1;
            v13 = v16;
            *(_QWORD *)(a1 + 4832) = v16;
          }
          v17 = v15 + 32;
          v18 = (char *)v13 + v15;
          v12 = "operator()";
          goto LABEL_188;
        case 'm':
          v93 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v93 + 1;
          v94 = v93[1];
          if ( (unsigned __int64)(v94 + 32) >= 0xFF0 )
          {
            v95 = (_QWORD *)operator new[](0x1000u);
            v94 = 0;
            *v95 = v93;
            v95[1] = 0;
            v7 = v95 + 1;
            v93 = v95;
            *(_QWORD *)(a1 + 4832) = v95;
          }
          v10 = v94 + 32;
          v11 = (char *)v93 + v94;
          v12 = "operator,";
          goto LABEL_171;
        case 'o':
          v96 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v96 + 1;
          v97 = v96[1];
          if ( (unsigned __int64)(v97 + 32) >= 0xFF0 )
          {
            v98 = (_QWORD *)operator new[](0x1000u);
            v97 = 0;
            *v98 = v96;
            v98[1] = 0;
            v7 = v98 + 1;
            v96 = v98;
            *(_QWORD *)(a1 + 4832) = v98;
          }
          v10 = v97 + 32;
          v11 = (char *)v96 + v97;
          v12 = "operator~";
          goto LABEL_171;
        case 'v':
          v99 = *(unsigned __int8 *)(a1 + 721);
          v100 = *(_BYTE *)(a1 + 720);
          *(_QWORD *)a1 = v2 + 2;
          *(_BYTE *)(a1 + 720) = 0;
          *(_BYTE *)(a1 + 721) = a2 != nullptr || v99 != 0;
          v102 = sub_DB210(a1);
          if ( v102 )
          {
            if ( a2 )
              *a2 = 1;
            v103 = *(_QWORD **)(a1 + 4832);
            v104 = v103 + 1;
            v105 = v103[1];
            if ( (unsigned __int64)(v105 + 32) >= 0xFF0 )
            {
              v106 = (_QWORD *)operator new[](0x1000u);
              v105 = 0;
              *v106 = v103;
              v106[1] = 0;
              v104 = v106 + 1;
              v103 = v106;
              *(_QWORD *)(a1 + 4832) = v106;
            }
            *v104 = v105 + 32;
            *(_QWORD *)((char *)v103 + v105 + 16) = off_162118;
            result = (char *)v103 + v105 + 16;
            *((_DWORD *)result + 2) = 16843012;
            *((_QWORD *)result + 2) = v102;
          }
          else
          {
            result = nullptr;
          }
          *(_BYTE *)(a1 + 721) = v99;
          *(_BYTE *)(a1 + 720) = v100;
          break;
        default:
          return result;
      }
      return result;
    case 'd':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'V':
          v19 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v19 + 1;
          v20 = v19[1];
          if ( (unsigned __int64)(v20 + 32) >= 0xFF0 )
          {
            v21 = (_QWORD *)operator new[](0x1000u);
            v20 = 0;
            *v21 = v19;
            v21[1] = 0;
            v14 = v21 + 1;
            v19 = v21;
            *(_QWORD *)(a1 + 4832) = v21;
          }
          v17 = v20 + 32;
          v18 = (char *)v19 + v20;
          v12 = "operator/=";
          goto LABEL_188;
        case 'a':
          v125 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v126 = v125 + 1;
          v127 = v125[1];
          if ( (unsigned __int64)(v127 + 32) >= 0xFF0 )
          {
            v128 = (_QWORD *)operator new[](0x1000u);
            v127 = 0;
            *v128 = v125;
            v128[1] = 0;
            v126 = v128 + 1;
            v125 = v128;
            *(_QWORD *)(a1 + 4832) = v128;
          }
          v12 = "operator delete[]";
          *v126 = v127 + 32;
          *(_QWORD *)((char *)v125 + v127 + 16) = off_161838;
          result = (char *)v125 + v127 + 16;
          v46 = "";
          goto LABEL_189;
        case 'e':
          goto LABEL_88;
        case 'l':
          v129 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v130 = v129 + 1;
          v131 = v129[1];
          if ( (unsigned __int64)(v131 + 32) >= 0xFF0 )
          {
            v132 = (_QWORD *)operator new[](0x1000u);
            v131 = 0;
            *v132 = v129;
            v132[1] = 0;
            v130 = v132 + 1;
            v129 = v132;
            *(_QWORD *)(a1 + 4832) = v132;
          }
          v12 = "operator delete";
          *v130 = v131 + 32;
          *(_QWORD *)((char *)v129 + v131 + 16) = off_161838;
          result = (char *)v129 + v131 + 16;
          v46 = "";
          goto LABEL_189;
        case 'v':
          v133 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v133 + 1;
          v134 = v133[1];
          if ( (unsigned __int64)(v134 + 32) >= 0xFF0 )
          {
            v135 = (_QWORD *)operator new[](0x1000u);
            v134 = 0;
            *v135 = v133;
            v135[1] = 0;
            v7 = v135 + 1;
            v133 = v135;
            *(_QWORD *)(a1 + 4832) = v135;
          }
          v10 = v134 + 32;
          v11 = (char *)v133 + v134;
          v12 = "operator/";
          goto LABEL_171;
        default:
          return result;
      }
      return result;
    case 'e':
      if ( v3 < 2 )
        return nullptr;
      v22 = (unsigned __int8)v2[1];
      if ( v22 == 79 )
      {
        v81 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v14 = v81 + 1;
        v82 = v81[1];
        if ( (unsigned __int64)(v82 + 32) >= 0xFF0 )
        {
          v83 = (_QWORD *)operator new[](0x1000u);
          v82 = 0;
          *v83 = v81;
          v83[1] = 0;
          v14 = v83 + 1;
          v81 = v83;
          *(_QWORD *)(a1 + 4832) = v83;
        }
        v17 = v82 + 32;
        v18 = (char *)v81 + v82;
        v12 = "operator^=";
        goto LABEL_188;
      }
      if ( v22 == 113 )
      {
        v84 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v14 = v84 + 1;
        v85 = v84[1];
        if ( (unsigned __int64)(v85 + 32) >= 0xFF0 )
        {
          v86 = (_QWORD *)operator new[](0x1000u);
          v85 = 0;
          *v86 = v84;
          v86[1] = 0;
          v14 = v86 + 1;
          v84 = v86;
          *(_QWORD *)(a1 + 4832) = v86;
        }
        v17 = v85 + 32;
        v18 = (char *)v84 + v85;
        v12 = "operator==";
        goto LABEL_188;
      }
      if ( v22 != 111 )
        return nullptr;
      v23 = *(_QWORD **)(a1 + 4832);
      *(_QWORD *)a1 = v2 + 2;
      v7 = v23 + 1;
      v24 = v23[1];
      if ( (unsigned __int64)(v24 + 32) >= 0xFF0 )
      {
        v25 = (_QWORD *)operator new[](0x1000u);
        v24 = 0;
        *v25 = v23;
        v25[1] = 0;
        v7 = v25 + 1;
        v23 = v25;
        *(_QWORD *)(a1 + 4832) = v25;
      }
      v10 = v24 + 32;
      v11 = (char *)v23 + v24;
      v12 = "operator^";
      goto LABEL_171;
    case 'g':
      if ( v3 < 2 )
        return nullptr;
      v26 = (unsigned __int8)v2[1];
      if ( v26 == 116 )
      {
        v72 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v7 = v72 + 1;
        v73 = v72[1];
        if ( (unsigned __int64)(v73 + 32) >= 0xFF0 )
        {
          v74 = (_QWORD *)operator new[](0x1000u);
          v73 = 0;
          *v74 = v72;
          v74[1] = 0;
          v7 = v74 + 1;
          v72 = v74;
          *(_QWORD *)(a1 + 4832) = v74;
        }
        v10 = v73 + 32;
        v11 = (char *)v72 + v73;
        v12 = "operator>";
        goto LABEL_171;
      }
      if ( v26 != 101 )
        return nullptr;
      v27 = *(_QWORD **)(a1 + 4832);
      *(_QWORD *)a1 = v2 + 2;
      v14 = v27 + 1;
      v28 = v27[1];
      if ( (unsigned __int64)(v28 + 32) >= 0xFF0 )
      {
        v29 = (_QWORD *)operator new[](0x1000u);
        v28 = 0;
        *v29 = v27;
        v29[1] = 0;
        v14 = v29 + 1;
        v27 = v29;
        *(_QWORD *)(a1 + 4832) = v29;
      }
      v17 = v28 + 32;
      v18 = (char *)v27 + v28;
      v12 = "operator>=";
      goto LABEL_188;
    case 'i':
      if ( v3 < 2 || v2[1] != 120 )
        return nullptr;
      v30 = *(_QWORD **)(a1 + 4832);
      *(_QWORD *)a1 = v2 + 2;
      v14 = v30 + 1;
      v31 = v30[1];
      if ( (unsigned __int64)(v31 + 32) >= 0xFF0 )
      {
        v32 = (_QWORD *)operator new[](0x1000u);
        v31 = 0;
        *v32 = v30;
        v32[1] = 0;
        v14 = v32 + 1;
        v30 = v32;
        *(_QWORD *)(a1 + 4832) = v32;
      }
      v17 = v31 + 32;
      v18 = (char *)v30 + v31;
      v12 = "operator[]";
      goto LABEL_188;
    case 'l':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'S':
          v33 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v34 = v33 + 1;
          v35 = v33[1];
          if ( (unsigned __int64)(v35 + 32) >= 0xFF0 )
          {
            v36 = (_QWORD *)operator new[](0x1000u);
            v35 = 0;
            *v36 = v33;
            v36[1] = 0;
            v34 = v36 + 1;
            v33 = v36;
            *(_QWORD *)(a1 + 4832) = v36;
          }
          v37 = v35 + 32;
          v38 = (char *)v33 + v35;
          v12 = "operator<<=";
          goto LABEL_181;
        case 'e':
          v136 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v136 + 1;
          v137 = v136[1];
          if ( (unsigned __int64)(v137 + 32) >= 0xFF0 )
          {
            v138 = (_QWORD *)operator new[](0x1000u);
            v137 = 0;
            *v138 = v136;
            v138[1] = 0;
            v14 = v138 + 1;
            v136 = v138;
            *(_QWORD *)(a1 + 4832) = v138;
          }
          v17 = v137 + 32;
          v18 = (char *)v136 + v137;
          v12 = "operator<=";
          goto LABEL_188;
        case 'i':
          *(_QWORD *)a1 = v2 + 2;
          result = (char *)sub_E61F4(a1);
          if ( !result )
            return result;
          v139 = *(_QWORD **)(a1 + 4832);
          v64 = (__int64)result;
          v65 = v139 + 1;
          v140 = v139[1];
          if ( (unsigned __int64)(v140 + 32) >= 0xFF0 )
          {
            v141 = (_QWORD *)operator new[](0x1000u);
            v140 = 0;
            *v141 = v139;
            v141[1] = 0;
            v65 = v141 + 1;
            v139 = v141;
            *(_QWORD *)(a1 + 4832) = v141;
          }
          v68 = v140 + 32;
          v69 = (char *)v139 + v140;
          v70 = 276;
          v71 = off_162188;
          break;
        case 's':
          v142 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v142 + 1;
          v143 = v142[1];
          if ( (unsigned __int64)(v143 + 32) >= 0xFF0 )
          {
            v144 = (_QWORD *)operator new[](0x1000u);
            v143 = 0;
            *v144 = v142;
            v144[1] = 0;
            v14 = v144 + 1;
            v142 = v144;
            *(_QWORD *)(a1 + 4832) = v144;
          }
          v17 = v143 + 32;
          v18 = (char *)v142 + v143;
          v12 = "operator<<";
          goto LABEL_188;
        case 't':
          v145 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v145 + 1;
          v146 = v145[1];
          if ( (unsigned __int64)(v146 + 32) >= 0xFF0 )
          {
            v147 = (_QWORD *)operator new[](0x1000u);
            v146 = 0;
            *v147 = v145;
            v147[1] = 0;
            v7 = v147 + 1;
            v145 = v147;
            *(_QWORD *)(a1 + 4832) = v147;
          }
          v10 = v146 + 32;
          v11 = (char *)v145 + v146;
          v12 = "operator<";
          goto LABEL_171;
        default:
          return result;
      }
      goto LABEL_152;
    case 'm':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'I':
          v39 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v39 + 1;
          v40 = v39[1];
          if ( (unsigned __int64)(v40 + 32) >= 0xFF0 )
          {
            v41 = (_QWORD *)operator new[](0x1000u);
            v40 = 0;
            *v41 = v39;
            v41[1] = 0;
            v14 = v41 + 1;
            v39 = v41;
            *(_QWORD *)(a1 + 4832) = v41;
          }
          v17 = v40 + 32;
          v18 = (char *)v39 + v40;
          v12 = "operator-=";
          goto LABEL_188;
        case 'L':
          v148 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v148 + 1;
          v149 = v148[1];
          if ( (unsigned __int64)(v149 + 32) >= 0xFF0 )
          {
            v150 = (_QWORD *)operator new[](0x1000u);
            v149 = 0;
            *v150 = v148;
            v150[1] = 0;
            v14 = v150 + 1;
            v148 = v150;
            *(_QWORD *)(a1 + 4832) = v150;
          }
          v17 = v149 + 32;
          v18 = (char *)v148 + v149;
          v12 = "operator*=";
          goto LABEL_188;
        case 'i':
          goto LABEL_91;
        case 'l':
LABEL_88:
          v75 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v75 + 1;
          v76 = v75[1];
          if ( (unsigned __int64)(v76 + 32) >= 0xFF0 )
          {
            v77 = (_QWORD *)operator new[](0x1000u);
            v76 = 0;
            *v77 = v75;
            v77[1] = 0;
            v7 = v77 + 1;
            v75 = v77;
            *(_QWORD *)(a1 + 4832) = v77;
          }
          v10 = v76 + 32;
          v11 = (char *)v75 + v76;
          v12 = "operator*";
          goto LABEL_171;
        case 'm':
          v151 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v151 + 1;
          v152 = v151[1];
          if ( (unsigned __int64)(v152 + 32) >= 0xFF0 )
          {
            v153 = (_QWORD *)operator new[](0x1000u);
            v152 = 0;
            *v153 = v151;
            v153[1] = 0;
            v14 = v153 + 1;
            v151 = v153;
            *(_QWORD *)(a1 + 4832) = v153;
          }
          v17 = v152 + 32;
          v18 = (char *)v151 + v152;
          v12 = &byte_121EB7;
          goto LABEL_188;
        default:
          return result;
      }
      return result;
    case 'n':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'a':
          v42 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v43 = v42 + 1;
          v44 = v42[1];
          if ( (unsigned __int64)(v44 + 32) >= 0xFF0 )
          {
            v45 = (_QWORD *)operator new[](0x1000u);
            v44 = 0;
            *v45 = v42;
            v45[1] = 0;
            v43 = v45 + 1;
            v42 = v45;
            *(_QWORD *)(a1 + 4832) = v45;
          }
          v12 = "operator new[]";
          *v43 = v44 + 32;
          *(_QWORD *)((char *)v42 + v44 + 16) = off_161838;
          result = (char *)v42 + v44 + 16;
          v46 = "";
          goto LABEL_189;
        case 'e':
          v154 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v154 + 1;
          v155 = v154[1];
          if ( (unsigned __int64)(v155 + 32) >= 0xFF0 )
          {
            v156 = (_QWORD *)operator new[](0x1000u);
            v155 = 0;
            *v156 = v154;
            v156[1] = 0;
            v14 = v156 + 1;
            v154 = v156;
            *(_QWORD *)(a1 + 4832) = v156;
          }
          v17 = v155 + 32;
          v18 = (char *)v154 + v155;
          v12 = "operator!=";
          goto LABEL_188;
        case 'g':
LABEL_91:
          v78 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v78 + 1;
          v79 = v78[1];
          if ( (unsigned __int64)(v79 + 32) >= 0xFF0 )
          {
            v80 = (_QWORD *)operator new[](0x1000u);
            v79 = 0;
            *v80 = v78;
            v80[1] = 0;
            v7 = v80 + 1;
            v78 = v80;
            *(_QWORD *)(a1 + 4832) = v80;
          }
          v10 = v79 + 32;
          v11 = (char *)v78 + v79;
          v12 = "operator-";
          goto LABEL_171;
        case 't':
          v157 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v157 + 1;
          v158 = v157[1];
          if ( (unsigned __int64)(v158 + 32) >= 0xFF0 )
          {
            v159 = (_QWORD *)operator new[](0x1000u);
            v158 = 0;
            *v159 = v157;
            v159[1] = 0;
            v7 = v159 + 1;
            v157 = v159;
            *(_QWORD *)(a1 + 4832) = v159;
          }
          v10 = v158 + 32;
          v11 = (char *)v157 + v158;
          v12 = "operator!";
          goto LABEL_171;
        case 'w':
          v160 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v161 = v160 + 1;
          v162 = v160[1];
          if ( (unsigned __int64)(v162 + 32) >= 0xFF0 )
          {
            v163 = (_QWORD *)operator new[](0x1000u);
            v162 = 0;
            *v163 = v160;
            v163[1] = 0;
            v161 = v163 + 1;
            v160 = v163;
            *(_QWORD *)(a1 + 4832) = v163;
          }
          v12 = "operator new";
          *v161 = v162 + 32;
          *(_QWORD *)((char *)v160 + v162 + 16) = off_161838;
          result = (char *)v160 + v162 + 16;
          v46 = "";
          goto LABEL_189;
        default:
          return result;
      }
      return result;
    case 'o':
      if ( v3 < 2 )
        return nullptr;
      v47 = (unsigned __int8)v2[1];
      if ( v47 == 82 )
      {
        v87 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v14 = v87 + 1;
        v88 = v87[1];
        if ( (unsigned __int64)(v88 + 32) >= 0xFF0 )
        {
          v89 = (_QWORD *)operator new[](0x1000u);
          v88 = 0;
          *v89 = v87;
          v89[1] = 0;
          v14 = v89 + 1;
          v87 = v89;
          *(_QWORD *)(a1 + 4832) = v89;
        }
        v17 = v88 + 32;
        v18 = (char *)v87 + v88;
        v12 = "operator|=";
LABEL_188:
        *v14 = v17;
        *((_QWORD *)v18 + 2) = off_161838;
        result = v18 + 16;
        v46 = v12 + 10;
        goto LABEL_189;
      }
      if ( v47 != 114 )
      {
        if ( v47 != 111 )
          return nullptr;
        v48 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v14 = v48 + 1;
        v49 = v48[1];
        if ( (unsigned __int64)(v49 + 32) >= 0xFF0 )
        {
          v50 = (_QWORD *)operator new[](0x1000u);
          v49 = 0;
          *v50 = v48;
          v50[1] = 0;
          v14 = v50 + 1;
          v48 = v50;
          *(_QWORD *)(a1 + 4832) = v50;
        }
        v17 = v49 + 32;
        v18 = (char *)v48 + v49;
        v12 = "operator||";
        goto LABEL_188;
      }
      v90 = *(_QWORD **)(a1 + 4832);
      *(_QWORD *)a1 = v2 + 2;
      v7 = v90 + 1;
      v91 = v90[1];
      if ( (unsigned __int64)(v91 + 32) >= 0xFF0 )
      {
        v92 = (_QWORD *)operator new[](0x1000u);
        v91 = 0;
        *v92 = v90;
        v92[1] = 0;
        v7 = v92 + 1;
        v90 = v92;
        *(_QWORD *)(a1 + 4832) = v92;
      }
      v10 = v91 + 32;
      v11 = (char *)v90 + v91;
      v12 = "operator|";
LABEL_171:
      *v7 = v10;
      *((_QWORD *)v11 + 2) = off_161838;
      result = v11 + 16;
      v46 = v12 + 9;
LABEL_189:
      *(_QWORD *)&v176 = v12;
      *((_QWORD *)&v176 + 1) = v46;
      *((_DWORD *)result + 2) = 16843015;
      *((_OWORD *)result + 1) = v176;
      break;
    case 'p':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'L':
          v164 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v164 + 1;
          v165 = v164[1];
          if ( (unsigned __int64)(v165 + 32) >= 0xFF0 )
          {
            v166 = (_QWORD *)operator new[](0x1000u);
            v165 = 0;
            *v166 = v164;
            v166[1] = 0;
            v14 = v166 + 1;
            v164 = v166;
            *(_QWORD *)(a1 + 4832) = v166;
          }
          v17 = v165 + 32;
          v18 = (char *)v164 + v165;
          v12 = "operator+=";
          goto LABEL_188;
        case 'l':
        case 's':
          v51 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v51 + 1;
          v52 = v51[1];
          if ( (unsigned __int64)(v52 + 32) >= 0xFF0 )
          {
            v53 = (_QWORD *)operator new[](0x1000u);
            v52 = 0;
            *v53 = v51;
            v53[1] = 0;
            v7 = v53 + 1;
            v51 = v53;
            *(_QWORD *)(a1 + 4832) = v53;
          }
          v10 = v52 + 32;
          v11 = (char *)v51 + v52;
          v12 = "operator+";
          goto LABEL_171;
        case 'm':
          v167 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v34 = v167 + 1;
          v168 = v167[1];
          if ( (unsigned __int64)(v168 + 32) >= 0xFF0 )
          {
            v169 = (_QWORD *)operator new[](0x1000u);
            v168 = 0;
            *v169 = v167;
            v169[1] = 0;
            v34 = v169 + 1;
            v167 = v169;
            *(_QWORD *)(a1 + 4832) = v169;
          }
          v37 = v168 + 32;
          v38 = (char *)v167 + v168;
          v12 = "operator->*";
          goto LABEL_181;
        case 'p':
          v170 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v170 + 1;
          v171 = v170[1];
          if ( (unsigned __int64)(v171 + 32) >= 0xFF0 )
          {
            v172 = (_QWORD *)operator new[](0x1000u);
            v171 = 0;
            *v172 = v170;
            v172[1] = 0;
            v14 = v172 + 1;
            v170 = v172;
            *(_QWORD *)(a1 + 4832) = v172;
          }
          v17 = v171 + 32;
          v18 = (char *)v170 + v171;
          v12 = "operator++";
          goto LABEL_188;
        case 't':
          v173 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v173 + 1;
          v174 = v173[1];
          if ( (unsigned __int64)(v174 + 32) >= 0xFF0 )
          {
            v175 = (_QWORD *)operator new[](0x1000u);
            v174 = 0;
            *v175 = v173;
            v175[1] = 0;
            v14 = v175 + 1;
            v173 = v175;
            *(_QWORD *)(a1 + 4832) = v175;
          }
          v17 = v174 + 32;
          v18 = (char *)v173 + v174;
          v12 = "operator->";
          goto LABEL_188;
        default:
          return result;
      }
      return result;
    case 'q':
      if ( v3 < 2 || v2[1] != 117 )
        return nullptr;
      v54 = *(_QWORD **)(a1 + 4832);
      *(_QWORD *)a1 = v2 + 2;
      v7 = v54 + 1;
      v55 = v54[1];
      if ( (unsigned __int64)(v55 + 32) >= 0xFF0 )
      {
        v56 = (_QWORD *)operator new[](0x1000u);
        v55 = 0;
        *v56 = v54;
        v56[1] = 0;
        v7 = v56 + 1;
        v54 = v56;
        *(_QWORD *)(a1 + 4832) = v56;
      }
      v10 = v55 + 32;
      v11 = (char *)v54 + v55;
      v12 = "operator?";
      goto LABEL_171;
    case 'r':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'M':
          v57 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v57 + 1;
          v58 = v57[1];
          if ( (unsigned __int64)(v58 + 32) >= 0xFF0 )
          {
            v59 = (_QWORD *)operator new[](0x1000u);
            v58 = 0;
            *v59 = v57;
            v59[1] = 0;
            v14 = v59 + 1;
            v57 = v59;
            *(_QWORD *)(a1 + 4832) = v59;
          }
          v17 = v58 + 32;
          v18 = (char *)v57 + v58;
          v12 = "operator%=";
          goto LABEL_188;
        case 'S':
          v107 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v34 = v107 + 1;
          v108 = v107[1];
          if ( (unsigned __int64)(v108 + 32) >= 0xFF0 )
          {
            v109 = (_QWORD *)operator new[](0x1000u);
            v108 = 0;
            *v109 = v107;
            v109[1] = 0;
            v34 = v109 + 1;
            v107 = v109;
            *(_QWORD *)(a1 + 4832) = v109;
          }
          v37 = v108 + 32;
          v38 = (char *)v107 + v108;
          v12 = "operator>>=";
          goto LABEL_181;
        case 'm':
          v110 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v7 = v110 + 1;
          v111 = v110[1];
          if ( (unsigned __int64)(v111 + 32) >= 0xFF0 )
          {
            v112 = (_QWORD *)operator new[](0x1000u);
            v111 = 0;
            *v112 = v110;
            v112[1] = 0;
            v7 = v112 + 1;
            v110 = v112;
            *(_QWORD *)(a1 + 4832) = v112;
          }
          v10 = v111 + 32;
          v11 = (char *)v110 + v111;
          v12 = "operator%";
          goto LABEL_171;
        case 's':
          v113 = *(_QWORD **)(a1 + 4832);
          *(_QWORD *)a1 = v2 + 2;
          v14 = v113 + 1;
          v114 = v113[1];
          if ( (unsigned __int64)(v114 + 32) >= 0xFF0 )
          {
            v115 = (_QWORD *)operator new[](0x1000u);
            v114 = 0;
            *v115 = v113;
            v115[1] = 0;
            v14 = v115 + 1;
            v113 = v115;
            *(_QWORD *)(a1 + 4832) = v115;
          }
          v17 = v114 + 32;
          v18 = (char *)v113 + v114;
          v12 = "operator>>";
          goto LABEL_188;
        default:
          return result;
      }
      return result;
    case 's':
      if ( v3 < 2 || v2[1] != 115 )
        return nullptr;
      v60 = *(_QWORD **)(a1 + 4832);
      *(_QWORD *)a1 = v2 + 2;
      v34 = v60 + 1;
      v61 = v60[1];
      if ( (unsigned __int64)(v61 + 32) >= 0xFF0 )
      {
        v62 = (_QWORD *)operator new[](0x1000u);
        v61 = 0;
        *v62 = v60;
        v62[1] = 0;
        v34 = v62 + 1;
        v60 = v62;
        *(_QWORD *)(a1 + 4832) = v62;
      }
      v37 = v61 + 32;
      v38 = (char *)v60 + v61;
      v12 = "operator<=>";
LABEL_181:
      *v34 = v37;
      *((_QWORD *)v38 + 2) = off_161838;
      result = v38 + 16;
      v46 = v12 + 11;
      goto LABEL_189;
    case 'v':
      if ( v3 < 2 || (unsigned int)(unsigned __int8)v2[1] - 48 > 9 )
        return nullptr;
      *(_QWORD *)a1 = v2 + 2;
      result = (char *)sub_E61F4(a1);
      if ( !result )
        return result;
      v63 = *(_QWORD **)(a1 + 4832);
      v64 = (__int64)result;
      v65 = v63 + 1;
      v66 = v63[1];
      if ( (unsigned __int64)(v66 + 32) >= 0xFF0 )
      {
        v67 = (_QWORD *)operator new[](0x1000u);
        v66 = 0;
        *v67 = v63;
        v67[1] = 0;
        v65 = v67 + 1;
        v63 = v67;
        *(_QWORD *)(a1 + 4832) = v67;
      }
      v68 = v66 + 32;
      v69 = (char *)v63 + v66;
      v70 = 260;
      v71 = off_162118;
LABEL_152:
      *v65 = v68;
      *((_QWORD *)v69 + 2) = v71;
      result = v69 + 16;
      *((_DWORD *)result + 2) = v70 | 0x1010000;
      *((_QWORD *)result + 2) = v64;
      return result;
    default:
      return result;
  }
  return result;
}
// 121EB7: using guessed type char byte_121EB7;
// 161838: using guessed type __int64 (__fastcall *off_161838[7])();
// 162118: using guessed type __int64 (__fastcall *off_162118[7])();
// 162188: using guessed type __int64 (__fastcall *off_162188[7])();
