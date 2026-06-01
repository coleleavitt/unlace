/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D11D0
// Address: 0x000D11D0

//----- (000D11D0) --------------------------------------------------------
_DWORD *__fastcall sub_D11D0(int a1, _BYTE *a2)
{
  char *v3; // eax
  unsigned int v4; // ecx
  _DWORD *v6; // edi
  int v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  _DWORD *v10; // edi
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  _DWORD *v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // edx
  int v18; // ecx
  _DWORD *v19; // edi
  int v20; // ecx
  _DWORD *v21; // eax
  _DWORD *v22; // edx
  int v23; // ecx
  _DWORD *v24; // edi
  int v25; // ecx
  _DWORD *v26; // eax
  _DWORD *v27; // edx
  _DWORD *v28; // edi
  int v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edx
  _DWORD *v32; // edi
  int v33; // ecx
  _DWORD *v34; // eax
  _DWORD *v35; // edx
  _DWORD *v36; // edi
  int v37; // ecx
  _DWORD *v38; // eax
  _DWORD *v39; // edx
  _DWORD *v40; // edi
  int v41; // ecx
  _DWORD *v42; // eax
  _DWORD *v43; // edx
  int v44; // ecx
  _DWORD *v45; // edi
  int v46; // ecx
  _DWORD *v47; // eax
  _DWORD *v48; // edx
  _DWORD *v49; // edi
  int v50; // ecx
  _DWORD *v51; // eax
  _DWORD *v52; // edx
  _DWORD *v53; // edi
  int v54; // ecx
  _DWORD *v55; // eax
  _DWORD *v56; // edx
  _DWORD *v57; // edi
  int v58; // ecx
  _DWORD *v59; // eax
  _DWORD *v60; // edx
  _DWORD *v61; // edi
  int v62; // ecx
  _DWORD *v63; // eax
  _DWORD *v64; // edx
  _DWORD *v65; // edi
  int v66; // ecx
  _DWORD *v67; // eax
  _DWORD *v68; // edx
  _DWORD *v69; // edi
  int v70; // ecx
  _DWORD *v71; // eax
  _DWORD *v72; // edx
  _DWORD *v73; // edi
  int v74; // ecx
  _DWORD *v75; // eax
  _DWORD *v76; // edx
  _DWORD *v77; // edi
  int v78; // ecx
  _DWORD *v79; // eax
  _DWORD *v80; // edx
  _DWORD *v81; // edi
  int v82; // ecx
  _DWORD *v83; // eax
  _DWORD *v84; // edx
  _DWORD *v85; // edi
  int v86; // ecx
  _DWORD *v87; // eax
  _DWORD *v88; // edx
  _DWORD *v89; // edi
  int v90; // ecx
  _DWORD *v91; // eax
  _DWORD *v92; // edx
  _DWORD *v93; // edi
  int v94; // ecx
  _DWORD *v95; // eax
  _DWORD *v96; // edx
  _DWORD *v97; // edi
  int v98; // ecx
  _DWORD *v99; // eax
  _DWORD *v100; // edx
  _DWORD *v101; // edi
  int v102; // ecx
  _DWORD *v103; // eax
  _DWORD *v104; // edx
  char v105; // al
  char *v106; // eax
  _DWORD *v107; // edi
  int v108; // ecx
  _DWORD *v109; // eax
  _DWORD *v110; // edx
  _DWORD *v111; // edi
  int v112; // ecx
  _DWORD *v113; // eax
  _DWORD *v114; // edx
  _DWORD *v115; // edi
  int v116; // ecx
  _DWORD *v117; // eax
  _DWORD *v118; // edx
  _DWORD *v119; // edi
  int v120; // ecx
  _DWORD *v121; // eax
  _DWORD *v122; // edx
  _DWORD *v123; // edi
  int v124; // ecx
  _DWORD *v125; // eax
  _DWORD *v126; // edx
  _DWORD *v127; // edi
  int v128; // ecx
  _DWORD *v129; // eax
  _DWORD *v130; // edx
  _DWORD *v131; // edi
  int v132; // ecx
  _DWORD *v133; // eax
  _DWORD *v134; // edx
  _DWORD *v135; // edi
  int v136; // ecx
  _DWORD *v137; // eax
  _DWORD *v138; // edx
  _DWORD *v139; // edi
  int v140; // ecx
  _DWORD *v141; // eax
  _DWORD *v142; // edx
  _DWORD *v143; // edi
  int v144; // ecx
  _DWORD *v145; // eax
  _DWORD *v146; // edx
  _DWORD *v147; // edi
  int v148; // ecx
  _DWORD *v149; // eax
  _DWORD *v150; // edx
  _DWORD *v151; // eax
  _DWORD *v152; // edx
  _DWORD *v153; // edi
  int v154; // ecx
  _DWORD *v155; // eax
  _DWORD *v156; // edx
  _DWORD *v157; // edi
  int v158; // ecx
  _DWORD *v159; // eax
  _DWORD *v160; // edx
  _DWORD *v161; // edi
  int v162; // ecx
  _DWORD *v163; // eax
  _DWORD *v164; // edx
  _DWORD *v165; // edi
  int v166; // ecx
  _DWORD *v167; // eax
  _DWORD *v168; // edx
  _DWORD *v169; // edi
  int v170; // ecx
  _DWORD *v171; // eax
  _DWORD *v172; // edx
  _DWORD *v173; // edi
  int v174; // ecx
  _DWORD *v175; // eax
  _DWORD *v176; // edx
  _DWORD *v177; // edi
  int v178; // ecx
  _DWORD *v179; // eax
  _DWORD *v180; // edx
  int (**v181)(); // eax
  _DWORD *v182; // edi
  int v183; // ecx
  _DWORD *v184; // eax
  _DWORD *v185; // edx
  _DWORD *v186; // edi
  int v187; // ecx
  _DWORD *v188; // eax
  _DWORD *v189; // edx
  _DWORD *v190; // edi
  int v191; // ecx
  _DWORD *v192; // eax
  _DWORD *v193; // edx
  _DWORD *v194; // edi
  int v195; // ecx
  _DWORD *v196; // eax
  _DWORD *v197; // edx
  _DWORD *v199; // [esp+10h] [ebp-1Ch]
  char *v200; // [esp+10h] [ebp-1Ch]
  char v201; // [esp+17h] [ebp-15h]
  char *v202; // [esp+18h] [ebp-14h]
  char v203; // [esp+18h] [ebp-14h]

  v3 = *(char **)a1;
  v199 = nullptr;
  v4 = *(_DWORD *)(a1 + 4) - *(_DWORD *)a1;
  if ( v4 )
  {
    switch ( *v3 )
    {
      case 'a':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'N':
              *(_DWORD *)a1 = v3 + 2;
              v123 = *(_DWORD **)(a1 + 4464);
              v124 = v123[1];
              if ( (unsigned int)(v124 + 16) < 0xFF8 )
              {
                v126 = v123 + 1;
              }
              else
              {
                v125 = operator new[](0x1000u);
                *v125 = v123;
                v125[1] = 0;
                *(_DWORD *)(a1 + 4464) = v125;
                v124 = 0;
                v126 = v125 + 1;
                v123 = v125;
              }
              *v126 = v124 + 16;
              v199 = (_DWORD *)((char *)v123 + v124 + 8);
              *(_DWORD *)((char *)v123 + v124 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v123 + v124 + 16) = "operator&=";
              *(_DWORD *)((char *)v123 + v124 + 20) = "";
              break;
            case 'S':
              *(_DWORD *)a1 = v3 + 2;
              v127 = *(_DWORD **)(a1 + 4464);
              v128 = v127[1];
              if ( (unsigned int)(v128 + 16) < 0xFF8 )
              {
                v130 = v127 + 1;
              }
              else
              {
                v129 = operator new[](0x1000u);
                *v129 = v127;
                v129[1] = 0;
                *(_DWORD *)(a1 + 4464) = v129;
                v128 = 0;
                v130 = v129 + 1;
                v127 = v129;
              }
              *v130 = v128 + 16;
              v199 = (_DWORD *)((char *)v127 + v128 + 8);
              *(_DWORD *)((char *)v127 + v128 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v127 + v128 + 16) = "operator=";
              *(_DWORD *)((char *)v127 + v128 + 20) = "";
              break;
            case 'a':
              *(_DWORD *)a1 = v3 + 2;
              v131 = *(_DWORD **)(a1 + 4464);
              v132 = v131[1];
              if ( (unsigned int)(v132 + 16) < 0xFF8 )
              {
                v134 = v131 + 1;
              }
              else
              {
                v133 = operator new[](0x1000u);
                *v133 = v131;
                v133[1] = 0;
                *(_DWORD *)(a1 + 4464) = v133;
                v132 = 0;
                v134 = v133 + 1;
                v131 = v133;
              }
              *v134 = v132 + 16;
              v199 = (_DWORD *)((char *)v131 + v132 + 8);
              *(_DWORD *)((char *)v131 + v132 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v131 + v132 + 16) = "operator&&";
              *(_DWORD *)((char *)v131 + v132 + 20) = "";
              break;
            case 'd':
            case 'n':
              *(_DWORD *)a1 = v3 + 2;
              v6 = *(_DWORD **)(a1 + 4464);
              v7 = v6[1];
              if ( (unsigned int)(v7 + 16) < 0xFF8 )
              {
                v9 = v6 + 1;
              }
              else
              {
                v8 = operator new[](0x1000u);
                *v8 = v6;
                v8[1] = 0;
                *(_DWORD *)(a1 + 4464) = v8;
                v7 = 0;
                v9 = v8 + 1;
                v6 = v8;
              }
              *v9 = v7 + 16;
              v199 = (_DWORD *)((char *)v6 + v7 + 8);
              *(_DWORD *)((char *)v6 + v7 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v6 + v7 + 16) = "operator&";
              *(_DWORD *)((char *)v6 + v7 + 20) = "";
              break;
            default:
              return v199;
          }
        }
        break;
      case 'c':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'l':
              *(_DWORD *)a1 = v3 + 2;
              v10 = *(_DWORD **)(a1 + 4464);
              v11 = v10[1];
              if ( (unsigned int)(v11 + 16) < 0xFF8 )
              {
                v13 = v10 + 1;
              }
              else
              {
                v12 = operator new[](0x1000u);
                *v12 = v10;
                v12[1] = 0;
                *(_DWORD *)(a1 + 4464) = v12;
                v11 = 0;
                v13 = v12 + 1;
                v10 = v12;
              }
              *v13 = v11 + 16;
              v199 = (_DWORD *)((char *)v10 + v11 + 8);
              *(_DWORD *)((char *)v10 + v11 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v10 + v11 + 16) = "operator()";
              *(_DWORD *)((char *)v10 + v11 + 20) = "";
              break;
            case 'm':
              *(_DWORD *)a1 = v3 + 2;
              v97 = *(_DWORD **)(a1 + 4464);
              v98 = v97[1];
              if ( (unsigned int)(v98 + 16) < 0xFF8 )
              {
                v100 = v97 + 1;
              }
              else
              {
                v99 = operator new[](0x1000u);
                *v99 = v97;
                v99[1] = 0;
                *(_DWORD *)(a1 + 4464) = v99;
                v98 = 0;
                v100 = v99 + 1;
                v97 = v99;
              }
              *v100 = v98 + 16;
              v199 = (_DWORD *)((char *)v97 + v98 + 8);
              *(_DWORD *)((char *)v97 + v98 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v97 + v98 + 16) = "operator,";
              *(_DWORD *)((char *)v97 + v98 + 20) = "";
              break;
            case 'o':
              *(_DWORD *)a1 = v3 + 2;
              v101 = *(_DWORD **)(a1 + 4464);
              v102 = v101[1];
              if ( (unsigned int)(v102 + 16) < 0xFF8 )
              {
                v104 = v101 + 1;
              }
              else
              {
                v103 = operator new[](0x1000u);
                *v103 = v101;
                v103[1] = 0;
                *(_DWORD *)(a1 + 4464) = v103;
                v102 = 0;
                v104 = v103 + 1;
                v101 = v103;
              }
              *v104 = v102 + 16;
              v199 = (_DWORD *)((char *)v101 + v102 + 8);
              *(_DWORD *)((char *)v101 + v102 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v101 + v102 + 16) = "operator~";
              *(_DWORD *)((char *)v101 + v102 + 20) = "";
              break;
            case 'v':
              *(_DWORD *)a1 = v3 + 2;
              v203 = *(_BYTE *)(a1 + 360);
              v105 = *(_BYTE *)(a1 + 361);
              *(_BYTE *)(a1 + 360) = 0;
              v201 = v105;
              *(_BYTE *)(a1 + 361) = v105 != 0 || a2 != nullptr;
              v106 = sub_C2AF0((char **)a1);
              if ( v106 )
              {
                v200 = v106;
                if ( a2 )
                  *a2 = 1;
                v107 = *(_DWORD **)(a1 + 4464);
                v108 = v107[1];
                if ( (unsigned int)(v108 + 16) < 0xFF8 )
                {
                  v110 = v107 + 1;
                }
                else
                {
                  v109 = operator new[](0x1000u);
                  *v109 = v107;
                  v110 = v109 + 1;
                  v109[1] = 0;
                  *(_DWORD *)(a1 + 4464) = v109;
                  v108 = 0;
                  v107 = v109;
                }
                *v110 = v108 + 16;
                *(_DWORD *)((char *)v107 + v108 + 12) = 16843012;
                *(_DWORD *)((char *)v107 + v108 + 8) = off_13A15C;
                *(_DWORD *)((char *)v107 + v108 + 16) = v200;
                v199 = (_DWORD *)((char *)v107 + v108 + 8);
              }
              else
              {
                v199 = nullptr;
              }
              *(_BYTE *)(a1 + 361) = v201;
              *(_BYTE *)(a1 + 360) = v203;
              break;
            default:
              return v199;
          }
        }
        break;
      case 'd':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'V':
              *(_DWORD *)a1 = v3 + 2;
              v14 = *(_DWORD **)(a1 + 4464);
              v15 = v14[1];
              if ( (unsigned int)(v15 + 16) < 0xFF8 )
              {
                v17 = v14 + 1;
              }
              else
              {
                v16 = operator new[](0x1000u);
                *v16 = v14;
                v16[1] = 0;
                *(_DWORD *)(a1 + 4464) = v16;
                v15 = 0;
                v17 = v16 + 1;
                v14 = v16;
              }
              *v17 = v15 + 16;
              v199 = (_DWORD *)((char *)v14 + v15 + 8);
              *(_DWORD *)((char *)v14 + v15 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v14 + v15 + 16) = "operator/=";
              *(_DWORD *)((char *)v14 + v15 + 20) = "";
              break;
            case 'a':
              *(_DWORD *)a1 = v3 + 2;
              v135 = *(_DWORD **)(a1 + 4464);
              v136 = v135[1];
              if ( (unsigned int)(v136 + 16) < 0xFF8 )
              {
                v138 = v135 + 1;
              }
              else
              {
                v137 = operator new[](0x1000u);
                *v137 = v135;
                v137[1] = 0;
                *(_DWORD *)(a1 + 4464) = v137;
                v136 = 0;
                v138 = v137 + 1;
                v135 = v137;
              }
              *v138 = v136 + 16;
              v199 = (_DWORD *)((char *)v135 + v136 + 8);
              *(_DWORD *)((char *)v135 + v136 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v135 + v136 + 16) = "operator delete[]";
              *(_DWORD *)((char *)v135 + v136 + 20) = "";
              break;
            case 'e':
              goto LABEL_71;
            case 'l':
              *(_DWORD *)a1 = v3 + 2;
              v139 = *(_DWORD **)(a1 + 4464);
              v140 = v139[1];
              if ( (unsigned int)(v140 + 16) < 0xFF8 )
              {
                v142 = v139 + 1;
              }
              else
              {
                v141 = operator new[](0x1000u);
                *v141 = v139;
                v141[1] = 0;
                *(_DWORD *)(a1 + 4464) = v141;
                v140 = 0;
                v142 = v141 + 1;
                v139 = v141;
              }
              *v142 = v140 + 16;
              v199 = (_DWORD *)((char *)v139 + v140 + 8);
              *(_DWORD *)((char *)v139 + v140 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v139 + v140 + 16) = "operator delete";
              *(_DWORD *)((char *)v139 + v140 + 20) = "";
              break;
            case 'v':
              *(_DWORD *)a1 = v3 + 2;
              v143 = *(_DWORD **)(a1 + 4464);
              v144 = v143[1];
              if ( (unsigned int)(v144 + 16) < 0xFF8 )
              {
                v146 = v143 + 1;
              }
              else
              {
                v145 = operator new[](0x1000u);
                *v145 = v143;
                v145[1] = 0;
                *(_DWORD *)(a1 + 4464) = v145;
                v144 = 0;
                v146 = v145 + 1;
                v143 = v145;
              }
              *v146 = v144 + 16;
              v199 = (_DWORD *)((char *)v143 + v144 + 8);
              *(_DWORD *)((char *)v143 + v144 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v143 + v144 + 16) = "operator/";
              *(_DWORD *)((char *)v143 + v144 + 20) = "";
              break;
            default:
              return v199;
          }
        }
        break;
      case 'e':
        if ( v4 >= 2 )
        {
          v18 = v3[1];
          switch ( v18 )
          {
            case 'O':
              *(_DWORD *)a1 = v3 + 2;
              v81 = *(_DWORD **)(a1 + 4464);
              v82 = v81[1];
              if ( (unsigned int)(v82 + 16) < 0xFF8 )
              {
                v84 = v81 + 1;
              }
              else
              {
                v83 = operator new[](0x1000u);
                *v83 = v81;
                v83[1] = 0;
                *(_DWORD *)(a1 + 4464) = v83;
                v82 = 0;
                v84 = v83 + 1;
                v81 = v83;
              }
              *v84 = v82 + 16;
              v199 = (_DWORD *)((char *)v81 + v82 + 8);
              *(_DWORD *)((char *)v81 + v82 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v81 + v82 + 16) = "operator^=";
              *(_DWORD *)((char *)v81 + v82 + 20) = "";
              break;
            case 'q':
              *(_DWORD *)a1 = v3 + 2;
              v85 = *(_DWORD **)(a1 + 4464);
              v86 = v85[1];
              if ( (unsigned int)(v86 + 16) < 0xFF8 )
              {
                v88 = v85 + 1;
              }
              else
              {
                v87 = operator new[](0x1000u);
                *v87 = v85;
                v87[1] = 0;
                *(_DWORD *)(a1 + 4464) = v87;
                v86 = 0;
                v88 = v87 + 1;
                v85 = v87;
              }
              *v88 = v86 + 16;
              v199 = (_DWORD *)((char *)v85 + v86 + 8);
              *(_DWORD *)((char *)v85 + v86 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v85 + v86 + 16) = "operator==";
              *(_DWORD *)((char *)v85 + v86 + 20) = "";
              break;
            case 'o':
              *(_DWORD *)a1 = v3 + 2;
              v19 = *(_DWORD **)(a1 + 4464);
              v20 = v19[1];
              if ( (unsigned int)(v20 + 16) < 0xFF8 )
              {
                v22 = v19 + 1;
              }
              else
              {
                v21 = operator new[](0x1000u);
                *v21 = v19;
                v21[1] = 0;
                *(_DWORD *)(a1 + 4464) = v21;
                v20 = 0;
                v22 = v21 + 1;
                v19 = v21;
              }
              *v22 = v20 + 16;
              v199 = (_DWORD *)((char *)v19 + v20 + 8);
              *(_DWORD *)((char *)v19 + v20 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v19 + v20 + 16) = "operator^";
              *(_DWORD *)((char *)v19 + v20 + 20) = "";
              break;
          }
        }
        break;
      case 'g':
        if ( v4 >= 2 )
        {
          v23 = v3[1];
          if ( v23 == 116 )
          {
            *(_DWORD *)a1 = v3 + 2;
            v69 = *(_DWORD **)(a1 + 4464);
            v70 = v69[1];
            if ( (unsigned int)(v70 + 16) < 0xFF8 )
            {
              v72 = v69 + 1;
            }
            else
            {
              v71 = operator new[](0x1000u);
              *v71 = v69;
              v71[1] = 0;
              *(_DWORD *)(a1 + 4464) = v71;
              v70 = 0;
              v72 = v71 + 1;
              v69 = v71;
            }
            *v72 = v70 + 16;
            v199 = (_DWORD *)((char *)v69 + v70 + 8);
            *(_DWORD *)((char *)v69 + v70 + 12) = 16843015;
            *v199 = off_139CEC;
            *(_DWORD *)((char *)v69 + v70 + 16) = "operator>";
            *(_DWORD *)((char *)v69 + v70 + 20) = "";
          }
          else if ( v23 == 101 )
          {
            *(_DWORD *)a1 = v3 + 2;
            v24 = *(_DWORD **)(a1 + 4464);
            v25 = v24[1];
            if ( (unsigned int)(v25 + 16) < 0xFF8 )
            {
              v27 = v24 + 1;
            }
            else
            {
              v26 = operator new[](0x1000u);
              *v26 = v24;
              v26[1] = 0;
              *(_DWORD *)(a1 + 4464) = v26;
              v25 = 0;
              v27 = v26 + 1;
              v24 = v26;
            }
            *v27 = v25 + 16;
            v199 = (_DWORD *)((char *)v24 + v25 + 8);
            *(_DWORD *)((char *)v24 + v25 + 12) = 16843015;
            *v199 = off_139CEC;
            *(_DWORD *)((char *)v24 + v25 + 16) = "operator>=";
            *(_DWORD *)((char *)v24 + v25 + 20) = "";
          }
        }
        break;
      case 'i':
        if ( v4 >= 2 && v3[1] == 120 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v28 = *(_DWORD **)(a1 + 4464);
          v29 = v28[1];
          if ( (unsigned int)(v29 + 16) < 0xFF8 )
          {
            v31 = v28 + 1;
          }
          else
          {
            v30 = operator new[](0x1000u);
            *v30 = v28;
            v30[1] = 0;
            *(_DWORD *)(a1 + 4464) = v30;
            v29 = 0;
            v31 = v30 + 1;
            v28 = v30;
          }
          *v31 = v29 + 16;
          v199 = (_DWORD *)((char *)v28 + v29 + 8);
          *(_DWORD *)((char *)v28 + v29 + 12) = 16843015;
          *v199 = off_139CEC;
          *(_DWORD *)((char *)v28 + v29 + 16) = "operator[]";
          *(_DWORD *)((char *)v28 + v29 + 20) = "";
        }
        break;
      case 'l':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'S':
              *(_DWORD *)a1 = v3 + 2;
              v32 = *(_DWORD **)(a1 + 4464);
              v33 = v32[1];
              if ( (unsigned int)(v33 + 16) < 0xFF8 )
              {
                v35 = v32 + 1;
              }
              else
              {
                v34 = operator new[](0x1000u);
                *v34 = v32;
                v34[1] = 0;
                *(_DWORD *)(a1 + 4464) = v34;
                v33 = 0;
                v35 = v34 + 1;
                v32 = v34;
              }
              *v35 = v33 + 16;
              v199 = (_DWORD *)((char *)v32 + v33 + 8);
              *(_DWORD *)((char *)v32 + v33 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v32 + v33 + 16) = "operator<<=";
              *(_DWORD *)((char *)v32 + v33 + 20) = "";
              break;
            case 'e':
              *(_DWORD *)a1 = v3 + 2;
              v147 = *(_DWORD **)(a1 + 4464);
              v148 = v147[1];
              if ( (unsigned int)(v148 + 16) < 0xFF8 )
              {
                v150 = v147 + 1;
              }
              else
              {
                v149 = operator new[](0x1000u);
                *v149 = v147;
                v149[1] = 0;
                *(_DWORD *)(a1 + 4464) = v149;
                v148 = 0;
                v150 = v149 + 1;
                v147 = v149;
              }
              *v150 = v148 + 16;
              v199 = (_DWORD *)((char *)v147 + v148 + 8);
              *(_DWORD *)((char *)v147 + v148 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v147 + v148 + 16) = "operator<=";
              *(_DWORD *)((char *)v147 + v148 + 20) = "";
              break;
            case 'i':
              *(_DWORD *)a1 = v3 + 2;
              v202 = sub_D0EF0((char **)a1);
              if ( v202 )
              {
                v65 = *(_DWORD **)(a1 + 4464);
                v66 = v65[1];
                if ( (unsigned int)(v66 + 16) < 0xFF8 )
                {
                  v152 = v65 + 1;
                }
                else
                {
                  v151 = operator new[](0x1000u);
                  *v151 = v65;
                  v151[1] = 0;
                  *(_DWORD *)(a1 + 4464) = v151;
                  v66 = 0;
                  v152 = v151 + 1;
                  v65 = v151;
                }
                *v152 = v66 + 16;
                *(_DWORD *)((char *)v65 + v66 + 12) = 16843028;
                v181 = off_13A194;
                goto LABEL_233;
              }
              break;
            case 's':
              *(_DWORD *)a1 = v3 + 2;
              v153 = *(_DWORD **)(a1 + 4464);
              v154 = v153[1];
              if ( (unsigned int)(v154 + 16) < 0xFF8 )
              {
                v156 = v153 + 1;
              }
              else
              {
                v155 = operator new[](0x1000u);
                *v155 = v153;
                v155[1] = 0;
                *(_DWORD *)(a1 + 4464) = v155;
                v154 = 0;
                v156 = v155 + 1;
                v153 = v155;
              }
              *v156 = v154 + 16;
              v199 = (_DWORD *)((char *)v153 + v154 + 8);
              *(_DWORD *)((char *)v153 + v154 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v153 + v154 + 16) = "operator<<";
              *(_DWORD *)((char *)v153 + v154 + 20) = "";
              break;
            case 't':
              *(_DWORD *)a1 = v3 + 2;
              v157 = *(_DWORD **)(a1 + 4464);
              v158 = v157[1];
              if ( (unsigned int)(v158 + 16) < 0xFF8 )
              {
                v160 = v157 + 1;
              }
              else
              {
                v159 = operator new[](0x1000u);
                *v159 = v157;
                v159[1] = 0;
                *(_DWORD *)(a1 + 4464) = v159;
                v158 = 0;
                v160 = v159 + 1;
                v157 = v159;
              }
              *v160 = v158 + 16;
              v199 = (_DWORD *)((char *)v157 + v158 + 8);
              *(_DWORD *)((char *)v157 + v158 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v157 + v158 + 16) = "operator<";
              *(_DWORD *)((char *)v157 + v158 + 20) = "";
              break;
            default:
              return v199;
          }
        }
        break;
      case 'm':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'I':
              *(_DWORD *)a1 = v3 + 2;
              v36 = *(_DWORD **)(a1 + 4464);
              v37 = v36[1];
              if ( (unsigned int)(v37 + 16) < 0xFF8 )
              {
                v39 = v36 + 1;
              }
              else
              {
                v38 = operator new[](0x1000u);
                *v38 = v36;
                v38[1] = 0;
                *(_DWORD *)(a1 + 4464) = v38;
                v37 = 0;
                v39 = v38 + 1;
                v36 = v38;
              }
              *v39 = v37 + 16;
              v199 = (_DWORD *)((char *)v36 + v37 + 8);
              *(_DWORD *)((char *)v36 + v37 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v36 + v37 + 16) = "operator-=";
              *(_DWORD *)((char *)v36 + v37 + 20) = "";
              break;
            case 'L':
              *(_DWORD *)a1 = v3 + 2;
              v161 = *(_DWORD **)(a1 + 4464);
              v162 = v161[1];
              if ( (unsigned int)(v162 + 16) < 0xFF8 )
              {
                v164 = v161 + 1;
              }
              else
              {
                v163 = operator new[](0x1000u);
                *v163 = v161;
                v163[1] = 0;
                *(_DWORD *)(a1 + 4464) = v163;
                v162 = 0;
                v164 = v163 + 1;
                v161 = v163;
              }
              *v164 = v162 + 16;
              v199 = (_DWORD *)((char *)v161 + v162 + 8);
              *(_DWORD *)((char *)v161 + v162 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v161 + v162 + 16) = "operator*=";
              *(_DWORD *)((char *)v161 + v162 + 20) = "";
              break;
            case 'i':
              goto LABEL_73;
            case 'l':
LABEL_71:
              *(_DWORD *)a1 = v3 + 2;
              v73 = *(_DWORD **)(a1 + 4464);
              v74 = v73[1];
              if ( (unsigned int)(v74 + 16) < 0xFF8 )
              {
                v76 = v73 + 1;
              }
              else
              {
                v75 = operator new[](0x1000u);
                *v75 = v73;
                v75[1] = 0;
                *(_DWORD *)(a1 + 4464) = v75;
                v74 = 0;
                v76 = v75 + 1;
                v73 = v75;
              }
              *v76 = v74 + 16;
              v199 = (_DWORD *)((char *)v73 + v74 + 8);
              *(_DWORD *)((char *)v73 + v74 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v73 + v74 + 16) = "operator*";
              *(_DWORD *)((char *)v73 + v74 + 20) = "";
              break;
            case 'm':
              *(_DWORD *)a1 = v3 + 2;
              v165 = *(_DWORD **)(a1 + 4464);
              v166 = v165[1];
              if ( (unsigned int)(v166 + 16) < 0xFF8 )
              {
                v168 = v165 + 1;
              }
              else
              {
                v167 = operator new[](0x1000u);
                *v167 = v165;
                v167[1] = 0;
                *(_DWORD *)(a1 + 4464) = v167;
                v166 = 0;
                v168 = v167 + 1;
                v165 = v167;
              }
              *v168 = v166 + 16;
              v199 = (_DWORD *)((char *)v165 + v166 + 8);
              *(_DWORD *)((char *)v165 + v166 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v165 + v166 + 16) = "operator--";
              *(_DWORD *)((char *)v165 + v166 + 20) = "";
              break;
            default:
              return v199;
          }
        }
        break;
      case 'n':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'a':
              *(_DWORD *)a1 = v3 + 2;
              v40 = *(_DWORD **)(a1 + 4464);
              v41 = v40[1];
              if ( (unsigned int)(v41 + 16) < 0xFF8 )
              {
                v43 = v40 + 1;
              }
              else
              {
                v42 = operator new[](0x1000u);
                *v42 = v40;
                v42[1] = 0;
                *(_DWORD *)(a1 + 4464) = v42;
                v41 = 0;
                v43 = v42 + 1;
                v40 = v42;
              }
              *v43 = v41 + 16;
              v199 = (_DWORD *)((char *)v40 + v41 + 8);
              *(_DWORD *)((char *)v40 + v41 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v40 + v41 + 16) = "operator new[]";
              *(_DWORD *)((char *)v40 + v41 + 20) = "";
              break;
            case 'e':
              *(_DWORD *)a1 = v3 + 2;
              v169 = *(_DWORD **)(a1 + 4464);
              v170 = v169[1];
              if ( (unsigned int)(v170 + 16) < 0xFF8 )
              {
                v172 = v169 + 1;
              }
              else
              {
                v171 = operator new[](0x1000u);
                *v171 = v169;
                v171[1] = 0;
                *(_DWORD *)(a1 + 4464) = v171;
                v170 = 0;
                v172 = v171 + 1;
                v169 = v171;
              }
              *v172 = v170 + 16;
              v199 = (_DWORD *)((char *)v169 + v170 + 8);
              *(_DWORD *)((char *)v169 + v170 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v169 + v170 + 16) = "operator!=";
              *(_DWORD *)((char *)v169 + v170 + 20) = "";
              break;
            case 'g':
LABEL_73:
              *(_DWORD *)a1 = v3 + 2;
              v77 = *(_DWORD **)(a1 + 4464);
              v78 = v77[1];
              if ( (unsigned int)(v78 + 16) < 0xFF8 )
              {
                v80 = v77 + 1;
              }
              else
              {
                v79 = operator new[](0x1000u);
                *v79 = v77;
                v79[1] = 0;
                *(_DWORD *)(a1 + 4464) = v79;
                v78 = 0;
                v80 = v79 + 1;
                v77 = v79;
              }
              *v80 = v78 + 16;
              v199 = (_DWORD *)((char *)v77 + v78 + 8);
              *(_DWORD *)((char *)v77 + v78 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v77 + v78 + 16) = "operator-";
              *(_DWORD *)((char *)v77 + v78 + 20) = "";
              break;
            case 't':
              *(_DWORD *)a1 = v3 + 2;
              v173 = *(_DWORD **)(a1 + 4464);
              v174 = v173[1];
              if ( (unsigned int)(v174 + 16) < 0xFF8 )
              {
                v176 = v173 + 1;
              }
              else
              {
                v175 = operator new[](0x1000u);
                *v175 = v173;
                v175[1] = 0;
                *(_DWORD *)(a1 + 4464) = v175;
                v174 = 0;
                v176 = v175 + 1;
                v173 = v175;
              }
              *v176 = v174 + 16;
              v199 = (_DWORD *)((char *)v173 + v174 + 8);
              *(_DWORD *)((char *)v173 + v174 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v173 + v174 + 16) = "operator!";
              *(_DWORD *)((char *)v173 + v174 + 20) = "";
              break;
            case 'w':
              *(_DWORD *)a1 = v3 + 2;
              v177 = *(_DWORD **)(a1 + 4464);
              v178 = v177[1];
              if ( (unsigned int)(v178 + 16) < 0xFF8 )
              {
                v180 = v177 + 1;
              }
              else
              {
                v179 = operator new[](0x1000u);
                *v179 = v177;
                v179[1] = 0;
                *(_DWORD *)(a1 + 4464) = v179;
                v178 = 0;
                v180 = v179 + 1;
                v177 = v179;
              }
              *v180 = v178 + 16;
              v199 = (_DWORD *)((char *)v177 + v178 + 8);
              *(_DWORD *)((char *)v177 + v178 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v177 + v178 + 16) = "operator new";
              *(_DWORD *)((char *)v177 + v178 + 20) = "";
              break;
            default:
              return v199;
          }
        }
        break;
      case 'o':
        if ( v4 >= 2 )
        {
          v44 = v3[1];
          switch ( v44 )
          {
            case 'R':
              *(_DWORD *)a1 = v3 + 2;
              v89 = *(_DWORD **)(a1 + 4464);
              v90 = v89[1];
              if ( (unsigned int)(v90 + 16) < 0xFF8 )
              {
                v92 = v89 + 1;
              }
              else
              {
                v91 = operator new[](0x1000u);
                *v91 = v89;
                v91[1] = 0;
                *(_DWORD *)(a1 + 4464) = v91;
                v90 = 0;
                v92 = v91 + 1;
                v89 = v91;
              }
              *v92 = v90 + 16;
              v199 = (_DWORD *)((char *)v89 + v90 + 8);
              *(_DWORD *)((char *)v89 + v90 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v89 + v90 + 16) = "operator|=";
              *(_DWORD *)((char *)v89 + v90 + 20) = "";
              break;
            case 'r':
              *(_DWORD *)a1 = v3 + 2;
              v93 = *(_DWORD **)(a1 + 4464);
              v94 = v93[1];
              if ( (unsigned int)(v94 + 16) < 0xFF8 )
              {
                v96 = v93 + 1;
              }
              else
              {
                v95 = operator new[](0x1000u);
                *v95 = v93;
                v95[1] = 0;
                *(_DWORD *)(a1 + 4464) = v95;
                v94 = 0;
                v96 = v95 + 1;
                v93 = v95;
              }
              *v96 = v94 + 16;
              v199 = (_DWORD *)((char *)v93 + v94 + 8);
              *(_DWORD *)((char *)v93 + v94 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v93 + v94 + 16) = "operator|";
              *(_DWORD *)((char *)v93 + v94 + 20) = "";
              break;
            case 'o':
              *(_DWORD *)a1 = v3 + 2;
              v45 = *(_DWORD **)(a1 + 4464);
              v46 = v45[1];
              if ( (unsigned int)(v46 + 16) < 0xFF8 )
              {
                v48 = v45 + 1;
              }
              else
              {
                v47 = operator new[](0x1000u);
                *v47 = v45;
                v47[1] = 0;
                *(_DWORD *)(a1 + 4464) = v47;
                v46 = 0;
                v48 = v47 + 1;
                v45 = v47;
              }
              *v48 = v46 + 16;
              v199 = (_DWORD *)((char *)v45 + v46 + 8);
              *(_DWORD *)((char *)v45 + v46 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v45 + v46 + 16) = "operator||";
              *(_DWORD *)((char *)v45 + v46 + 20) = "";
              break;
          }
        }
        break;
      case 'p':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'L':
              *(_DWORD *)a1 = v3 + 2;
              v182 = *(_DWORD **)(a1 + 4464);
              v183 = v182[1];
              if ( (unsigned int)(v183 + 16) < 0xFF8 )
              {
                v185 = v182 + 1;
              }
              else
              {
                v184 = operator new[](0x1000u);
                *v184 = v182;
                v184[1] = 0;
                *(_DWORD *)(a1 + 4464) = v184;
                v183 = 0;
                v185 = v184 + 1;
                v182 = v184;
              }
              *v185 = v183 + 16;
              v199 = (_DWORD *)((char *)v182 + v183 + 8);
              *(_DWORD *)((char *)v182 + v183 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v182 + v183 + 16) = "operator+=";
              *(_DWORD *)((char *)v182 + v183 + 20) = "";
              break;
            case 'l':
            case 's':
              *(_DWORD *)a1 = v3 + 2;
              v49 = *(_DWORD **)(a1 + 4464);
              v50 = v49[1];
              if ( (unsigned int)(v50 + 16) < 0xFF8 )
              {
                v52 = v49 + 1;
              }
              else
              {
                v51 = operator new[](0x1000u);
                *v51 = v49;
                v51[1] = 0;
                *(_DWORD *)(a1 + 4464) = v51;
                v50 = 0;
                v52 = v51 + 1;
                v49 = v51;
              }
              *v52 = v50 + 16;
              v199 = (_DWORD *)((char *)v49 + v50 + 8);
              *(_DWORD *)((char *)v49 + v50 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v49 + v50 + 16) = "operator+";
              *(_DWORD *)((char *)v49 + v50 + 20) = "";
              break;
            case 'm':
              *(_DWORD *)a1 = v3 + 2;
              v186 = *(_DWORD **)(a1 + 4464);
              v187 = v186[1];
              if ( (unsigned int)(v187 + 16) < 0xFF8 )
              {
                v189 = v186 + 1;
              }
              else
              {
                v188 = operator new[](0x1000u);
                *v188 = v186;
                v188[1] = 0;
                *(_DWORD *)(a1 + 4464) = v188;
                v187 = 0;
                v189 = v188 + 1;
                v186 = v188;
              }
              *v189 = v187 + 16;
              v199 = (_DWORD *)((char *)v186 + v187 + 8);
              *(_DWORD *)((char *)v186 + v187 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v186 + v187 + 16) = "operator->*";
              *(_DWORD *)((char *)v186 + v187 + 20) = "";
              break;
            case 'p':
              *(_DWORD *)a1 = v3 + 2;
              v190 = *(_DWORD **)(a1 + 4464);
              v191 = v190[1];
              if ( (unsigned int)(v191 + 16) < 0xFF8 )
              {
                v193 = v190 + 1;
              }
              else
              {
                v192 = operator new[](0x1000u);
                *v192 = v190;
                v192[1] = 0;
                *(_DWORD *)(a1 + 4464) = v192;
                v191 = 0;
                v193 = v192 + 1;
                v190 = v192;
              }
              *v193 = v191 + 16;
              v199 = (_DWORD *)((char *)v190 + v191 + 8);
              *(_DWORD *)((char *)v190 + v191 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v190 + v191 + 16) = "operator++";
              *(_DWORD *)((char *)v190 + v191 + 20) = "";
              break;
            case 't':
              *(_DWORD *)a1 = v3 + 2;
              v194 = *(_DWORD **)(a1 + 4464);
              v195 = v194[1];
              if ( (unsigned int)(v195 + 16) < 0xFF8 )
              {
                v197 = v194 + 1;
              }
              else
              {
                v196 = operator new[](0x1000u);
                *v196 = v194;
                v196[1] = 0;
                *(_DWORD *)(a1 + 4464) = v196;
                v195 = 0;
                v197 = v196 + 1;
                v194 = v196;
              }
              *v197 = v195 + 16;
              v199 = (_DWORD *)((char *)v194 + v195 + 8);
              *(_DWORD *)((char *)v194 + v195 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v194 + v195 + 16) = "operator->";
              *(_DWORD *)((char *)v194 + v195 + 20) = "";
              break;
            default:
              return v199;
          }
        }
        break;
      case 'q':
        if ( v4 >= 2 && v3[1] == 117 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v53 = *(_DWORD **)(a1 + 4464);
          v54 = v53[1];
          if ( (unsigned int)(v54 + 16) < 0xFF8 )
          {
            v56 = v53 + 1;
          }
          else
          {
            v55 = operator new[](0x1000u);
            *v55 = v53;
            v55[1] = 0;
            *(_DWORD *)(a1 + 4464) = v55;
            v54 = 0;
            v56 = v55 + 1;
            v53 = v55;
          }
          *v56 = v54 + 16;
          v199 = (_DWORD *)((char *)v53 + v54 + 8);
          *(_DWORD *)((char *)v53 + v54 + 12) = 16843015;
          *v199 = off_139CEC;
          *(_DWORD *)((char *)v53 + v54 + 16) = "operator?";
          *(_DWORD *)((char *)v53 + v54 + 20) = "";
        }
        break;
      case 'r':
        if ( v4 >= 2 )
        {
          switch ( v3[1] )
          {
            case 'M':
              *(_DWORD *)a1 = v3 + 2;
              v57 = *(_DWORD **)(a1 + 4464);
              v58 = v57[1];
              if ( (unsigned int)(v58 + 16) < 0xFF8 )
              {
                v60 = v57 + 1;
              }
              else
              {
                v59 = operator new[](0x1000u);
                *v59 = v57;
                v59[1] = 0;
                *(_DWORD *)(a1 + 4464) = v59;
                v58 = 0;
                v60 = v59 + 1;
                v57 = v59;
              }
              *v60 = v58 + 16;
              v199 = (_DWORD *)((char *)v57 + v58 + 8);
              *(_DWORD *)((char *)v57 + v58 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v57 + v58 + 16) = "operator%=";
              *(_DWORD *)((char *)v57 + v58 + 20) = "";
              break;
            case 'S':
              *(_DWORD *)a1 = v3 + 2;
              v111 = *(_DWORD **)(a1 + 4464);
              v112 = v111[1];
              if ( (unsigned int)(v112 + 16) < 0xFF8 )
              {
                v114 = v111 + 1;
              }
              else
              {
                v113 = operator new[](0x1000u);
                *v113 = v111;
                v113[1] = 0;
                *(_DWORD *)(a1 + 4464) = v113;
                v112 = 0;
                v114 = v113 + 1;
                v111 = v113;
              }
              *v114 = v112 + 16;
              v199 = (_DWORD *)((char *)v111 + v112 + 8);
              *(_DWORD *)((char *)v111 + v112 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v111 + v112 + 16) = "operator>>=";
              *(_DWORD *)((char *)v111 + v112 + 20) = "";
              break;
            case 'm':
              *(_DWORD *)a1 = v3 + 2;
              v115 = *(_DWORD **)(a1 + 4464);
              v116 = v115[1];
              if ( (unsigned int)(v116 + 16) < 0xFF8 )
              {
                v118 = v115 + 1;
              }
              else
              {
                v117 = operator new[](0x1000u);
                *v117 = v115;
                v117[1] = 0;
                *(_DWORD *)(a1 + 4464) = v117;
                v116 = 0;
                v118 = v117 + 1;
                v115 = v117;
              }
              *v118 = v116 + 16;
              v199 = (_DWORD *)((char *)v115 + v116 + 8);
              *(_DWORD *)((char *)v115 + v116 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v115 + v116 + 16) = "operator%";
              *(_DWORD *)((char *)v115 + v116 + 20) = "";
              break;
            case 's':
              *(_DWORD *)a1 = v3 + 2;
              v119 = *(_DWORD **)(a1 + 4464);
              v120 = v119[1];
              if ( (unsigned int)(v120 + 16) < 0xFF8 )
              {
                v122 = v119 + 1;
              }
              else
              {
                v121 = operator new[](0x1000u);
                *v121 = v119;
                v121[1] = 0;
                *(_DWORD *)(a1 + 4464) = v121;
                v120 = 0;
                v122 = v121 + 1;
                v119 = v121;
              }
              *v122 = v120 + 16;
              v199 = (_DWORD *)((char *)v119 + v120 + 8);
              *(_DWORD *)((char *)v119 + v120 + 12) = 16843015;
              *v199 = off_139CEC;
              *(_DWORD *)((char *)v119 + v120 + 16) = "operator>>";
              *(_DWORD *)((char *)v119 + v120 + 20) = "";
              break;
            default:
              return v199;
          }
        }
        break;
      case 's':
        if ( v4 >= 2 && v3[1] == 115 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v61 = *(_DWORD **)(a1 + 4464);
          v62 = v61[1];
          if ( (unsigned int)(v62 + 16) < 0xFF8 )
          {
            v64 = v61 + 1;
          }
          else
          {
            v63 = operator new[](0x1000u);
            *v63 = v61;
            v63[1] = 0;
            *(_DWORD *)(a1 + 4464) = v63;
            v62 = 0;
            v64 = v63 + 1;
            v61 = v63;
          }
          *v64 = v62 + 16;
          v199 = (_DWORD *)((char *)v61 + v62 + 8);
          *(_DWORD *)((char *)v61 + v62 + 12) = 16843015;
          *v199 = off_139CEC;
          *(_DWORD *)((char *)v61 + v62 + 16) = "operator<=>";
          *(_DWORD *)((char *)v61 + v62 + 20) = "";
        }
        break;
      case 'v':
        if ( v4 >= 2 && (unsigned int)(v3[1] - 48) <= 9 )
        {
          *(_DWORD *)a1 = v3 + 2;
          v202 = sub_D0EF0((char **)a1);
          if ( v202 )
          {
            v65 = *(_DWORD **)(a1 + 4464);
            v66 = v65[1];
            if ( (unsigned int)(v66 + 16) < 0xFF8 )
            {
              v68 = v65 + 1;
            }
            else
            {
              v67 = operator new[](0x1000u);
              *v67 = v65;
              v67[1] = 0;
              *(_DWORD *)(a1 + 4464) = v67;
              v66 = 0;
              v68 = v67 + 1;
              v65 = v67;
            }
            *v68 = v66 + 16;
            *(_DWORD *)((char *)v65 + v66 + 12) = 16843012;
            v181 = off_13A15C;
LABEL_233:
            *(_DWORD *)((char *)v65 + v66 + 8) = v181;
            *(_DWORD *)((char *)v65 + v66 + 16) = v202;
            v199 = (_DWORD *)((char *)v65 + v66 + 8);
          }
        }
        break;
      default:
        return v199;
    }
  }
  return v199;
}
// 139CEC: using guessed type int (*off_139CEC[3])();
// 13A15C: using guessed type int (*off_13A15C[3])();
// 13A194: using guessed type int (*off_13A194[3])();
