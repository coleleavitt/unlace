/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465177
// Address: 0x00465177

//----- (00465177) --------------------------------------------------------
int __cdecl sub_465177(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // ecx
  unsigned __int8 *v4; // edx
  unsigned __int8 *v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned __int8 *v43; // esi
  unsigned __int8 *v44; // kr00_4
  unsigned __int8 *v45; // kr0C_4
  unsigned __int8 *v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // ecx
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // eax
  int v144; // eax
  int v145; // eax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // eax
  int v152; // eax
  int v153; // eax
  int v154; // eax
  int v155; // eax
  int v156; // eax
  int v157; // eax
  int v158; // eax
  int v159; // eax
  int v160; // eax
  int v161; // eax
  int v162; // eax
  int v163; // eax
  int v164; // eax
  int v165; // eax
  int v166; // eax
  int v167; // eax
  int v168; // eax
  int v169; // eax
  int v170; // eax
  int v171; // eax
  int v172; // eax
  int v173; // eax
  int v174; // eax
  int v175; // eax
  int v176; // eax
  int v177; // eax
  int v178; // eax
  int v180; // eax
  int v181; // eax
  int v182; // eax
  int v183; // eax

  v3 = a3;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1u:
        v7 = *a1 - *a2;
        if ( v7 )
        {
          v183 = -1;
          if ( v7 > 0 )
            return 1;
          return v183;
        }
        return v7;
      case 2u:
        v6 = -1;
        v7 = *a1 - *a2;
        if ( v7 )
        {
          v182 = -1;
          if ( v7 > 0 )
            v182 = 1;
          v7 = v182;
        }
        if ( v7 )
          return v7;
        v106 = a1[1];
        v107 = a2[1];
        break;
      case 3u:
        v6 = -1;
        v7 = *a1 - *a2;
        if ( v7 )
        {
          v180 = -1;
          if ( v7 > 0 )
            v180 = 1;
          v7 = v180;
        }
        if ( v7 )
          return v7;
        v7 = a1[1] - a2[1];
        if ( v7 )
        {
          v181 = -1;
          if ( v7 > 0 )
            v181 = 1;
          v7 = v181;
        }
        if ( v7 )
          return v7;
        v106 = a1[2];
        v107 = a2[2];
        break;
      case 4u:
        v6 = -1;
        v7 = *a1 - *a2;
        if ( v7 )
        {
          v176 = -1;
          if ( v7 > 0 )
            v176 = 1;
          v7 = v176;
        }
        if ( v7 )
          return v7;
        v7 = a1[1] - a2[1];
        if ( v7 )
        {
          v177 = -1;
          if ( v7 > 0 )
            v177 = 1;
          v7 = v177;
        }
        if ( v7 )
          return v7;
        v7 = a1[2] - a2[2];
        if ( v7 )
        {
          v178 = -1;
          if ( v7 > 0 )
            v178 = 1;
          v7 = v178;
        }
        if ( v7 )
          return v7;
        v106 = a1[3];
        v107 = a2[3];
        break;
      default:
        v4 = a2;
        v5 = a1;
        v6 = -1;
        if ( a3 >= 0x20 )
        {
LABEL_7:
          if ( *(_DWORD *)v5 != *(_DWORD *)v4 )
          {
            v7 = (unsigned __int8)*(_DWORD *)v5 - *v4;
            if ( v7 )
            {
              v8 = -1;
              if ( v7 > 0 )
                v8 = 1;
              v7 = v8;
            }
            if ( v7 )
              return v7;
            v7 = v5[1] - v4[1];
            if ( v7 )
            {
              v9 = -1;
              if ( v7 > 0 )
                v9 = 1;
              v7 = v9;
            }
            if ( v7 )
              return v7;
            v7 = v5[2] - v4[2];
            if ( v7 )
            {
              v10 = -1;
              if ( v7 > 0 )
                v10 = 1;
              v7 = v10;
            }
            if ( v7 )
              return v7;
            v7 = v5[3] - v4[3];
            if ( v7 )
            {
              v11 = -1;
              if ( v7 > 0 )
                v11 = 1;
              v7 = v11;
            }
            if ( v7 )
              return v7;
          }
          if ( *((_DWORD *)v5 + 1) != *((_DWORD *)v4 + 1) )
          {
            v7 = v5[4] - v4[4];
            if ( v7 )
            {
              v12 = -1;
              if ( v7 > 0 )
                v12 = 1;
              v7 = v12;
            }
            if ( v7 )
              return v7;
            v7 = v5[5] - v4[5];
            if ( v7 )
            {
              v13 = -1;
              if ( v7 > 0 )
                v13 = 1;
              v7 = v13;
            }
            if ( v7 )
              return v7;
            v7 = v5[6] - v4[6];
            if ( v7 )
            {
              v14 = -1;
              if ( v7 > 0 )
                v14 = 1;
              v7 = v14;
            }
            if ( v7 )
              return v7;
            v7 = v5[7] - v4[7];
            if ( v7 )
            {
              v15 = -1;
              if ( v7 > 0 )
                v15 = 1;
              v7 = v15;
            }
            if ( v7 )
              return v7;
          }
          v16 = *((_DWORD *)v5 + 2);
          if ( v16 != *((_DWORD *)v4 + 2) )
          {
            v7 = (unsigned __int8)v16 - v4[8];
            if ( v7 )
            {
              v17 = -1;
              if ( v7 > 0 )
                v17 = 1;
              v7 = v17;
            }
            if ( v7 )
              return v7;
            v7 = v5[9] - v4[9];
            if ( v7 )
            {
              v18 = -1;
              if ( v7 > 0 )
                v18 = 1;
              v7 = v18;
            }
            if ( v7 )
              return v7;
            v7 = v5[10] - v4[10];
            if ( v7 )
            {
              v19 = -1;
              if ( v7 > 0 )
                v19 = 1;
              v7 = v19;
            }
            if ( v7 )
              return v7;
            v7 = v5[11] - v4[11];
            if ( v7 )
            {
              v20 = -1;
              if ( v7 > 0 )
                v20 = 1;
              v7 = v20;
            }
            if ( v7 )
              return v7;
          }
          if ( *((_DWORD *)v5 + 3) != *((_DWORD *)v4 + 3) )
          {
            v7 = v5[12] - v4[12];
            if ( v7 )
            {
              v21 = -1;
              if ( v7 > 0 )
                v21 = 1;
              v7 = v21;
            }
            if ( v7 )
              return v7;
            v7 = v5[13] - v4[13];
            if ( v7 )
            {
              v22 = -1;
              if ( v7 > 0 )
                v22 = 1;
              v7 = v22;
            }
            if ( v7 )
              return v7;
            v7 = v5[14] - v4[14];
            if ( v7 )
            {
              v23 = -1;
              if ( v7 > 0 )
                v23 = 1;
              v7 = v23;
            }
            if ( v7 )
              return v7;
            v7 = v5[15] - v4[15];
            if ( v7 )
            {
              v24 = -1;
              if ( v7 > 0 )
                v24 = 1;
              v7 = v24;
            }
            if ( v7 )
              return v7;
          }
          v25 = *((_DWORD *)v5 + 4);
          if ( v25 != *((_DWORD *)v4 + 4) )
          {
            v7 = (unsigned __int8)v25 - v4[16];
            if ( v7 )
            {
              v26 = -1;
              if ( v7 > 0 )
                v26 = 1;
              v7 = v26;
            }
            if ( v7 )
              return v7;
            v7 = v5[17] - v4[17];
            if ( v7 )
            {
              v27 = -1;
              if ( v7 > 0 )
                v27 = 1;
              v7 = v27;
            }
            if ( v7 )
              return v7;
            v7 = v5[18] - v4[18];
            if ( v7 )
            {
              v28 = -1;
              if ( v7 > 0 )
                v28 = 1;
              v7 = v28;
            }
            if ( v7 )
              return v7;
            v7 = v5[19] - v4[19];
            if ( v7 )
            {
              v29 = -1;
              if ( v7 > 0 )
                v29 = 1;
              v7 = v29;
            }
            if ( v7 )
              return v7;
          }
          if ( *((_DWORD *)v5 + 5) != *((_DWORD *)v4 + 5) )
          {
            v7 = v5[20] - v4[20];
            if ( v7 )
            {
              v30 = -1;
              if ( v7 > 0 )
                v30 = 1;
              v7 = v30;
            }
            if ( v7 )
              return v7;
            v7 = v5[21] - v4[21];
            if ( v7 )
            {
              v31 = -1;
              if ( v7 > 0 )
                v31 = 1;
              v7 = v31;
            }
            if ( v7 )
              return v7;
            v7 = v5[22] - v4[22];
            if ( v7 )
            {
              v32 = -1;
              if ( v7 > 0 )
                v32 = 1;
              v7 = v32;
            }
            if ( v7 )
              return v7;
            v7 = v5[23] - v4[23];
            if ( v7 )
            {
              v33 = -1;
              if ( v7 > 0 )
                v33 = 1;
              v7 = v33;
            }
            if ( v7 )
              return v7;
          }
          v34 = *((_DWORD *)v5 + 6);
          if ( v34 != *((_DWORD *)v4 + 6) )
          {
            v7 = (unsigned __int8)v34 - v4[24];
            if ( v7 )
            {
              v35 = -1;
              if ( v7 > 0 )
                v35 = 1;
              v7 = v35;
            }
            if ( v7 )
              return v7;
            v7 = v5[25] - v4[25];
            if ( v7 )
            {
              v36 = -1;
              if ( v7 > 0 )
                v36 = 1;
              v7 = v36;
            }
            if ( v7 )
              return v7;
            v7 = v5[26] - v4[26];
            if ( v7 )
            {
              v37 = -1;
              if ( v7 > 0 )
                v37 = 1;
              v7 = v37;
            }
            if ( v7 )
              return v7;
            v7 = v5[27] - v4[27];
            if ( v7 )
            {
              v38 = -1;
              if ( v7 > 0 )
                v38 = 1;
              v7 = v38;
            }
            if ( v7 )
              return v7;
          }
          if ( *((_DWORD *)v5 + 7) != *((_DWORD *)v4 + 7) )
          {
            v7 = v5[28] - v4[28];
            if ( v7 )
            {
              v39 = -1;
              if ( v7 > 0 )
                v39 = 1;
              v7 = v39;
            }
            if ( v7 )
              return v7;
            v7 = v5[29] - v4[29];
            if ( v7 )
            {
              v40 = -1;
              if ( v7 > 0 )
                v40 = 1;
              v7 = v40;
            }
            if ( v7 )
              return v7;
            v7 = v5[30] - v4[30];
            if ( v7 )
            {
              v41 = -1;
              if ( v7 > 0 )
                v41 = 1;
              v7 = v41;
            }
            if ( v7 )
              return v7;
            v7 = v5[31] - v4[31];
            if ( v7 )
            {
              v42 = -1;
              if ( v7 > 0 )
                v42 = 1;
              v7 = v42;
            }
            if ( v7 )
              return v7;
          }
          v3 = a3 - 32;
          v5 += 32;
          v4 += 32;
          a3 -= 32;
        }
        v44 = v4;
        v45 = v5;
        v43 = &v5[v3];
        v46 = &v4[v3];
        switch ( v3 )
        {
          case 0u:
            return 0;
          case 1u:
            goto LABEL_472;
          case 2u:
            goto LABEL_620;
          case 3u:
            goto LABEL_769;
          case 4u:
            goto LABEL_303;
          case 5u:
            goto LABEL_451;
          case 6u:
            goto LABEL_599;
          case 7u:
            goto LABEL_748;
          case 8u:
            goto LABEL_282;
          case 9u:
            goto LABEL_430;
          case 0xAu:
            goto LABEL_578;
          case 0xBu:
            goto LABEL_727;
          case 0xCu:
            goto LABEL_261;
          case 0xDu:
            goto LABEL_409;
          case 0xEu:
            goto LABEL_557;
          case 0xFu:
            goto LABEL_706;
          case 0x10u:
            goto LABEL_240;
          case 0x11u:
            goto LABEL_388;
          case 0x12u:
            goto LABEL_536;
          case 0x13u:
            goto LABEL_685;
          case 0x14u:
            goto LABEL_219;
          case 0x15u:
            goto LABEL_367;
          case 0x16u:
            goto LABEL_515;
          case 0x17u:
            goto LABEL_664;
          case 0x18u:
            goto LABEL_198;
          case 0x19u:
            goto LABEL_346;
          case 0x1Au:
            goto LABEL_494;
          case 0x1Bu:
            goto LABEL_643;
          case 0x1Cu:
            if ( *((_DWORD *)v43 - 7) != *((_DWORD *)v46 - 7) )
            {
              v7 = *(v43 - 28) - *(v46 - 28);
              if ( v7 )
              {
                v47 = -1;
                if ( v7 > 0 )
                  v47 = 1;
                v7 = v47;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 27) - *(v46 - 27);
              if ( v7 )
              {
                v48 = -1;
                if ( v7 > 0 )
                  v48 = 1;
                v7 = v48;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 26) - *(v46 - 26);
              if ( v7 )
              {
                v49 = -1;
                if ( v7 > 0 )
                  v49 = 1;
                v7 = v49;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 25) - *(v46 - 25);
              if ( v7 )
              {
                v50 = -1;
                if ( v7 > 0 )
                  v50 = 1;
                v7 = v50;
              }
              if ( v7 )
                return v7;
            }
LABEL_198:
            if ( *((_DWORD *)v43 - 6) != *((_DWORD *)v46 - 6) )
            {
              v7 = *(v43 - 24) - *(v46 - 24);
              if ( v7 )
              {
                v51 = -1;
                if ( v7 > 0 )
                  v51 = 1;
                v7 = v51;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 23) - *(v46 - 23);
              if ( v7 )
              {
                v52 = -1;
                if ( v7 > 0 )
                  v52 = 1;
                v7 = v52;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 22) - *(v46 - 22);
              if ( v7 )
              {
                v53 = -1;
                if ( v7 > 0 )
                  v53 = 1;
                v7 = v53;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 21) - *(v46 - 21);
              if ( v7 )
              {
                v54 = -1;
                if ( v7 > 0 )
                  v54 = 1;
                v7 = v54;
              }
              if ( v7 )
                return v7;
            }
LABEL_219:
            if ( *((_DWORD *)v43 - 5) != *((_DWORD *)v46 - 5) )
            {
              v7 = *(v43 - 20) - *(v46 - 20);
              if ( v7 )
              {
                v55 = -1;
                if ( v7 > 0 )
                  v55 = 1;
                v7 = v55;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 19) - *(v46 - 19);
              if ( v7 )
              {
                v56 = -1;
                if ( v7 > 0 )
                  v56 = 1;
                v7 = v56;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 18) - *(v46 - 18);
              if ( v7 )
              {
                v57 = -1;
                if ( v7 > 0 )
                  v57 = 1;
                v7 = v57;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 17) - *(v46 - 17);
              if ( v7 )
              {
                v58 = -1;
                if ( v7 > 0 )
                  v58 = 1;
                v7 = v58;
              }
              if ( v7 )
                return v7;
            }
LABEL_240:
            if ( *((_DWORD *)v43 - 4) != *((_DWORD *)v46 - 4) )
            {
              v7 = *(v43 - 16) - *(v46 - 16);
              if ( v7 )
              {
                v59 = -1;
                if ( v7 > 0 )
                  v59 = 1;
                v7 = v59;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 15) - *(v46 - 15);
              if ( v7 )
              {
                v60 = -1;
                if ( v7 > 0 )
                  v60 = 1;
                v7 = v60;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 14) - *(v46 - 14);
              if ( v7 )
              {
                v61 = -1;
                if ( v7 > 0 )
                  v61 = 1;
                v7 = v61;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 13) - *(v46 - 13);
              if ( v7 )
              {
                v62 = -1;
                if ( v7 > 0 )
                  v62 = 1;
                v7 = v62;
              }
              if ( v7 )
                return v7;
            }
LABEL_261:
            if ( *((_DWORD *)v43 - 3) != *((_DWORD *)v46 - 3) )
            {
              v7 = *(v43 - 12) - *(v46 - 12);
              if ( v7 )
              {
                v63 = -1;
                if ( v7 > 0 )
                  v63 = 1;
                v7 = v63;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 11) - *(v46 - 11);
              if ( v7 )
              {
                v64 = -1;
                if ( v7 > 0 )
                  v64 = 1;
                v7 = v64;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 10) - *(v46 - 10);
              if ( v7 )
              {
                v65 = -1;
                if ( v7 > 0 )
                  v65 = 1;
                v7 = v65;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 9) - *(v46 - 9);
              if ( v7 )
              {
                v66 = -1;
                if ( v7 > 0 )
                  v66 = 1;
                v7 = v66;
              }
              if ( v7 )
                return v7;
            }
LABEL_282:
            if ( *((_DWORD *)v43 - 2) != *((_DWORD *)v46 - 2) )
            {
              v7 = *(v43 - 8) - *(v46 - 8);
              if ( v7 )
              {
                v67 = -1;
                if ( v7 > 0 )
                  v67 = 1;
                v7 = v67;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 7) - *(v46 - 7);
              if ( v7 )
              {
                v68 = -1;
                if ( v7 > 0 )
                  v68 = 1;
                v7 = v68;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 6) - *(v46 - 6);
              if ( v7 )
              {
                v69 = -1;
                if ( v7 > 0 )
                  v69 = 1;
                v7 = v69;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 5) - *(v46 - 5);
              if ( v7 )
              {
                v70 = -1;
                if ( v7 > 0 )
                  v70 = 1;
                v7 = v70;
              }
              if ( v7 )
                return v7;
            }
LABEL_303:
            v71 = *((_DWORD *)v43 - 1);
            if ( v71 == *((_DWORD *)v46 - 1) )
              return 0;
            v7 = (unsigned __int8)v71 - *(v46 - 4);
            if ( v7 )
            {
              v72 = -1;
              if ( v7 > 0 )
                v72 = 1;
              v7 = v72;
            }
            if ( !v7 )
            {
              v7 = *(v43 - 3) - *(v46 - 3);
              if ( v7 )
              {
                v73 = -1;
                if ( v7 > 0 )
                  v73 = 1;
                v7 = v73;
              }
              if ( !v7 )
              {
                v7 = *(v43 - 2) - *(v46 - 2);
                if ( v7 )
                {
                  v74 = -1;
                  if ( v7 > 0 )
                    v74 = 1;
                  v7 = v74;
                }
                if ( !v7 )
                {
                  v7 = *(v43 - 1) - *(v46 - 1);
                  if ( v7 )
                  {
                    if ( v7 > 0 )
                      v6 = 1;
                    v7 = v6;
                  }
                  if ( !v7 )
                    return 0;
                }
              }
            }
            return v7;
          case 0x1Du:
            v75 = *(_DWORD *)(v43 - 29);
            if ( v75 != *(_DWORD *)(v46 - 29) )
            {
              v7 = (unsigned __int8)v75 - *(v46 - 29);
              if ( v7 )
              {
                v76 = -1;
                if ( v7 > 0 )
                  v76 = 1;
                v7 = v76;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 28) - *(v46 - 28);
              if ( v7 )
              {
                v77 = -1;
                if ( v7 > 0 )
                  v77 = 1;
                v7 = v77;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 27) - *(v46 - 27);
              if ( v7 )
              {
                v78 = -1;
                if ( v7 > 0 )
                  v78 = 1;
                v7 = v78;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 26) - *(v46 - 26);
              if ( v7 )
              {
                v79 = -1;
                if ( v7 > 0 )
                  v79 = 1;
                v7 = v79;
              }
              if ( v7 )
                return v7;
            }
LABEL_346:
            if ( *(_DWORD *)(v43 - 25) != *(_DWORD *)(v46 - 25) )
            {
              v7 = *(v43 - 25) - *(v46 - 25);
              if ( v7 )
              {
                v80 = -1;
                if ( v7 > 0 )
                  v80 = 1;
                v7 = v80;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 24) - *(v46 - 24);
              if ( v7 )
              {
                v81 = -1;
                if ( v7 > 0 )
                  v81 = 1;
                v7 = v81;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 23) - *(v46 - 23);
              if ( v7 )
              {
                v82 = -1;
                if ( v7 > 0 )
                  v82 = 1;
                v7 = v82;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 22) - *(v46 - 22);
              if ( v7 )
              {
                v83 = -1;
                if ( v7 > 0 )
                  v83 = 1;
                v7 = v83;
              }
              if ( v7 )
                return v7;
            }
LABEL_367:
            if ( *(_DWORD *)(v43 - 21) != *(_DWORD *)(v46 - 21) )
            {
              v7 = *(v43 - 21) - *(v46 - 21);
              if ( v7 )
              {
                v84 = -1;
                if ( v7 > 0 )
                  v84 = 1;
                v7 = v84;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 20) - *(v46 - 20);
              if ( v7 )
              {
                v85 = -1;
                if ( v7 > 0 )
                  v85 = 1;
                v7 = v85;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 19) - *(v46 - 19);
              if ( v7 )
              {
                v86 = -1;
                if ( v7 > 0 )
                  v86 = 1;
                v7 = v86;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 18) - *(v46 - 18);
              if ( v7 )
              {
                v87 = -1;
                if ( v7 > 0 )
                  v87 = 1;
                v7 = v87;
              }
              if ( v7 )
                return v7;
            }
LABEL_388:
            v88 = *(_DWORD *)(v43 - 17);
            if ( v88 != *(_DWORD *)(v46 - 17) )
            {
              v7 = (unsigned __int8)v88 - *(v46 - 17);
              if ( v7 )
              {
                v89 = -1;
                if ( v7 > 0 )
                  v89 = 1;
                v7 = v89;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 16) - *(v46 - 16);
              if ( v7 )
              {
                v90 = -1;
                if ( v7 > 0 )
                  v90 = 1;
                v7 = v90;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 15) - *(v46 - 15);
              if ( v7 )
              {
                v91 = -1;
                if ( v7 > 0 )
                  v91 = 1;
                v7 = v91;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 14) - *(v46 - 14);
              if ( v7 )
              {
                v92 = -1;
                if ( v7 > 0 )
                  v92 = 1;
                v7 = v92;
              }
              if ( v7 )
                return v7;
            }
LABEL_409:
            if ( *(_DWORD *)(v43 - 13) != *(_DWORD *)(v46 - 13) )
            {
              v7 = *(v43 - 13) - *(v46 - 13);
              if ( v7 )
              {
                v93 = -1;
                if ( v7 > 0 )
                  v93 = 1;
                v7 = v93;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 12) - *(v46 - 12);
              if ( v7 )
              {
                v94 = -1;
                if ( v7 > 0 )
                  v94 = 1;
                v7 = v94;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 11) - *(v46 - 11);
              if ( v7 )
              {
                v95 = -1;
                if ( v7 > 0 )
                  v95 = 1;
                v7 = v95;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 10) - *(v46 - 10);
              if ( v7 )
              {
                v96 = -1;
                if ( v7 > 0 )
                  v96 = 1;
                v7 = v96;
              }
              if ( v7 )
                return v7;
            }
LABEL_430:
            v97 = *(_DWORD *)(v43 - 9);
            if ( v97 != *(_DWORD *)(v46 - 9) )
            {
              v7 = (unsigned __int8)v97 - *(v46 - 9);
              if ( v7 )
              {
                v98 = -1;
                if ( v7 > 0 )
                  v98 = 1;
                v7 = v98;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 8) - *(v46 - 8);
              if ( v7 )
              {
                v99 = -1;
                if ( v7 > 0 )
                  v99 = 1;
                v7 = v99;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 7) - *(v46 - 7);
              if ( v7 )
              {
                v100 = -1;
                if ( v7 > 0 )
                  v100 = 1;
                v7 = v100;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 6) - *(v46 - 6);
              if ( v7 )
              {
                v101 = -1;
                if ( v7 > 0 )
                  v101 = 1;
                v7 = v101;
              }
              if ( v7 )
                return v7;
            }
LABEL_451:
            if ( *(_DWORD *)(v43 - 5) != *(_DWORD *)(v46 - 5) )
            {
              v7 = *(v43 - 5) - *(v46 - 5);
              if ( v7 )
              {
                v102 = -1;
                if ( v7 > 0 )
                  v102 = 1;
                v7 = v102;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 4) - *(v46 - 4);
              if ( v7 )
              {
                v103 = -1;
                if ( v7 > 0 )
                  v103 = 1;
                v7 = v103;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 3) - *(v46 - 3);
              if ( v7 )
              {
                v104 = -1;
                if ( v7 > 0 )
                  v104 = 1;
                v7 = v104;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 2) - *(v46 - 2);
              if ( v7 )
              {
                v105 = -1;
                if ( v7 > 0 )
                  v105 = 1;
                v7 = v105;
              }
              if ( v7 )
                return v7;
            }
LABEL_472:
            v106 = *(v43 - 1);
            v107 = *(v46 - 1);
            goto LABEL_796;
          case 0x1Eu:
            v108 = *(_DWORD *)(v43 - 30);
            if ( v108 != *(_DWORD *)(v46 - 30) )
            {
              v7 = (unsigned __int8)v108 - *(v46 - 30);
              if ( v7 )
              {
                v109 = -1;
                if ( v7 > 0 )
                  v109 = 1;
                v7 = v109;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 29) - *(v46 - 29);
              if ( v7 )
              {
                v110 = -1;
                if ( v7 > 0 )
                  v110 = 1;
                v7 = v110;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 28) - *(v46 - 28);
              if ( v7 )
              {
                v111 = -1;
                if ( v7 > 0 )
                  v111 = 1;
                v7 = v111;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 27) - *(v46 - 27);
              if ( v7 )
              {
                v112 = -1;
                if ( v7 > 0 )
                  v112 = 1;
                v7 = v112;
              }
              if ( v7 )
                return v7;
            }
LABEL_494:
            v113 = *(_DWORD *)(v43 - 26);
            if ( v113 != *(_DWORD *)(v46 - 26) )
            {
              v7 = (unsigned __int8)v113 - *(v46 - 26);
              if ( v7 )
              {
                v114 = -1;
                if ( v7 > 0 )
                  v114 = 1;
                v7 = v114;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 25) - *(v46 - 25);
              if ( v7 )
              {
                v115 = -1;
                if ( v7 > 0 )
                  v115 = 1;
                v7 = v115;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 24) - *(v46 - 24);
              if ( v7 )
              {
                v116 = -1;
                if ( v7 > 0 )
                  v116 = 1;
                v7 = v116;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 23) - *(v46 - 23);
              if ( v7 )
              {
                v117 = -1;
                if ( v7 > 0 )
                  v117 = 1;
                v7 = v117;
              }
              if ( v7 )
                return v7;
            }
LABEL_515:
            v118 = *(_DWORD *)(v43 - 22);
            if ( v118 != *(_DWORD *)(v46 - 22) )
            {
              v7 = (unsigned __int8)v118 - *(v46 - 22);
              if ( v7 )
              {
                v119 = -1;
                if ( v7 > 0 )
                  v119 = 1;
                v7 = v119;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 21) - *(v46 - 21);
              if ( v7 )
              {
                v120 = -1;
                if ( v7 > 0 )
                  v120 = 1;
                v7 = v120;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 20) - *(v46 - 20);
              if ( v7 )
              {
                v121 = -1;
                if ( v7 > 0 )
                  v121 = 1;
                v7 = v121;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 19) - *(v46 - 19);
              if ( v7 )
              {
                v122 = -1;
                if ( v7 > 0 )
                  v122 = 1;
                v7 = v122;
              }
              if ( v7 )
                return v7;
            }
LABEL_536:
            v123 = *(_DWORD *)(v43 - 18);
            if ( v123 != *(_DWORD *)(v46 - 18) )
            {
              v7 = (unsigned __int8)v123 - *(v46 - 18);
              if ( v7 )
              {
                v124 = -1;
                if ( v7 > 0 )
                  v124 = 1;
                v7 = v124;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 17) - *(v46 - 17);
              if ( v7 )
              {
                v125 = -1;
                if ( v7 > 0 )
                  v125 = 1;
                v7 = v125;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 16) - *(v46 - 16);
              if ( v7 )
              {
                v126 = -1;
                if ( v7 > 0 )
                  v126 = 1;
                v7 = v126;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 15) - *(v46 - 15);
              if ( v7 )
              {
                v127 = -1;
                if ( v7 > 0 )
                  v127 = 1;
                v7 = v127;
              }
              if ( v7 )
                return v7;
            }
LABEL_557:
            v128 = *(_DWORD *)(v43 - 14);
            if ( v128 != *(_DWORD *)(v46 - 14) )
            {
              v7 = (unsigned __int8)v128 - *(v46 - 14);
              if ( v7 )
              {
                v129 = -1;
                if ( v7 > 0 )
                  v129 = 1;
                v7 = v129;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 13) - *(v46 - 13);
              if ( v7 )
              {
                v130 = -1;
                if ( v7 > 0 )
                  v130 = 1;
                v7 = v130;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 12) - *(v46 - 12);
              if ( v7 )
              {
                v131 = -1;
                if ( v7 > 0 )
                  v131 = 1;
                v7 = v131;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 11) - *(v46 - 11);
              if ( v7 )
              {
                v132 = -1;
                if ( v7 > 0 )
                  v132 = 1;
                v7 = v132;
              }
              if ( v7 )
                return v7;
            }
LABEL_578:
            if ( *(_DWORD *)(v43 - 10) != *(_DWORD *)(v46 - 10) )
            {
              v7 = *(v43 - 10) - *(v46 - 10);
              if ( v7 )
              {
                v133 = -1;
                if ( v7 > 0 )
                  v133 = 1;
                v7 = v133;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 9) - *(v46 - 9);
              if ( v7 )
              {
                v134 = -1;
                if ( v7 > 0 )
                  v134 = 1;
                v7 = v134;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 8) - *(v46 - 8);
              if ( v7 )
              {
                v135 = -1;
                if ( v7 > 0 )
                  v135 = 1;
                v7 = v135;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 7) - *(v46 - 7);
              if ( v7 )
              {
                v136 = -1;
                if ( v7 > 0 )
                  v136 = 1;
                v7 = v136;
              }
              if ( v7 )
                return v7;
            }
LABEL_599:
            v137 = *(_DWORD *)(v43 - 6);
            if ( v137 != *(_DWORD *)(v46 - 6) )
            {
              v7 = (unsigned __int8)v137 - *(v46 - 6);
              if ( v7 )
              {
                v138 = -1;
                if ( v7 > 0 )
                  v138 = 1;
                v7 = v138;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 5) - *(v46 - 5);
              if ( v7 )
              {
                v139 = -1;
                if ( v7 > 0 )
                  v139 = 1;
                v7 = v139;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 4) - *(v46 - 4);
              if ( v7 )
              {
                v140 = -1;
                if ( v7 > 0 )
                  v140 = 1;
                v7 = v140;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 3) - *(v46 - 3);
              if ( v7 )
              {
                v141 = -1;
                if ( v7 > 0 )
                  v141 = 1;
                v7 = v141;
              }
              if ( v7 )
                return v7;
            }
LABEL_620:
            if ( *((_WORD *)v43 - 1) != *((_WORD *)v46 - 1) )
              goto LABEL_774;
            return 0;
          case 0x1Fu:
            if ( *(_DWORD *)(v43 - 31) != *(_DWORD *)(v46 - 31) )
            {
              v7 = *(v43 - 31) - *(v46 - 31);
              if ( v7 )
              {
                v142 = -1;
                if ( v7 > 0 )
                  v142 = 1;
                v7 = v142;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 30) - *(v46 - 30);
              if ( v7 )
              {
                v143 = -1;
                if ( v7 > 0 )
                  v143 = 1;
                v7 = v143;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 29) - *(v46 - 29);
              if ( v7 )
              {
                v144 = -1;
                if ( v7 > 0 )
                  v144 = 1;
                v7 = v144;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 28) - *(v46 - 28);
              if ( v7 )
              {
                v145 = -1;
                if ( v7 > 0 )
                  v145 = 1;
                v7 = v145;
              }
              if ( v7 )
                return v7;
            }
LABEL_643:
            v146 = *(_DWORD *)(v43 - 27);
            if ( v146 != *(_DWORD *)(v46 - 27) )
            {
              v7 = (unsigned __int8)v146 - *(v46 - 27);
              if ( v7 )
              {
                v147 = -1;
                if ( v7 > 0 )
                  v147 = 1;
                v7 = v147;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 26) - *(v46 - 26);
              if ( v7 )
              {
                v148 = -1;
                if ( v7 > 0 )
                  v148 = 1;
                v7 = v148;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 25) - *(v46 - 25);
              if ( v7 )
              {
                v149 = -1;
                if ( v7 > 0 )
                  v149 = 1;
                v7 = v149;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 24) - *(v46 - 24);
              if ( v7 )
              {
                v150 = -1;
                if ( v7 > 0 )
                  v150 = 1;
                v7 = v150;
              }
              if ( v7 )
                return v7;
            }
LABEL_664:
            v151 = *(_DWORD *)(v43 - 23);
            if ( v151 != *(_DWORD *)(v46 - 23) )
            {
              v7 = (unsigned __int8)v151 - *(v46 - 23);
              if ( v7 )
              {
                v152 = -1;
                if ( v7 > 0 )
                  v152 = 1;
                v7 = v152;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 22) - *(v46 - 22);
              if ( v7 )
              {
                v153 = -1;
                if ( v7 > 0 )
                  v153 = 1;
                v7 = v153;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 21) - *(v46 - 21);
              if ( v7 )
              {
                v154 = -1;
                if ( v7 > 0 )
                  v154 = 1;
                v7 = v154;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 20) - *(v46 - 20);
              if ( v7 )
              {
                v155 = -1;
                if ( v7 > 0 )
                  v155 = 1;
                v7 = v155;
              }
              if ( v7 )
                return v7;
            }
LABEL_685:
            if ( *(_DWORD *)(v43 - 19) != *(_DWORD *)(v46 - 19) )
            {
              v7 = *(v43 - 19) - *(v46 - 19);
              if ( v7 )
              {
                v156 = -1;
                if ( v7 > 0 )
                  v156 = 1;
                v7 = v156;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 18) - *(v46 - 18);
              if ( v7 )
              {
                v157 = -1;
                if ( v7 > 0 )
                  v157 = 1;
                v7 = v157;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 17) - *(v46 - 17);
              if ( v7 )
              {
                v158 = -1;
                if ( v7 > 0 )
                  v158 = 1;
                v7 = v158;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 16) - *(v46 - 16);
              if ( v7 )
              {
                v159 = -1;
                if ( v7 > 0 )
                  v159 = 1;
                v7 = v159;
              }
              if ( v7 )
                return v7;
            }
LABEL_706:
            v160 = *(_DWORD *)(v43 - 15);
            if ( v160 != *(_DWORD *)(v46 - 15) )
            {
              v7 = (unsigned __int8)v160 - *(v46 - 15);
              if ( v7 )
              {
                v161 = -1;
                if ( v7 > 0 )
                  v161 = 1;
                v7 = v161;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 14) - *(v46 - 14);
              if ( v7 )
              {
                v162 = -1;
                if ( v7 > 0 )
                  v162 = 1;
                v7 = v162;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 13) - *(v46 - 13);
              if ( v7 )
              {
                v163 = -1;
                if ( v7 > 0 )
                  v163 = 1;
                v7 = v163;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 12) - *(v46 - 12);
              if ( v7 )
              {
                v164 = -1;
                if ( v7 > 0 )
                  v164 = 1;
                v7 = v164;
              }
              if ( v7 )
                return v7;
            }
LABEL_727:
            v165 = *(_DWORD *)(v43 - 11);
            if ( v165 != *(_DWORD *)(v46 - 11) )
            {
              v7 = (unsigned __int8)v165 - *(v46 - 11);
              if ( v7 )
              {
                v166 = -1;
                if ( v7 > 0 )
                  v166 = 1;
                v7 = v166;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 10) - *(v46 - 10);
              if ( v7 )
              {
                v167 = -1;
                if ( v7 > 0 )
                  v167 = 1;
                v7 = v167;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 9) - *(v46 - 9);
              if ( v7 )
              {
                v168 = -1;
                if ( v7 > 0 )
                  v168 = 1;
                v7 = v168;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 8) - *(v46 - 8);
              if ( v7 )
              {
                v169 = -1;
                if ( v7 > 0 )
                  v169 = 1;
                v7 = v169;
              }
              if ( v7 )
                return v7;
            }
LABEL_748:
            if ( *(_DWORD *)(v43 - 7) != *(_DWORD *)(v46 - 7) )
            {
              v7 = *(v43 - 7) - *(v46 - 7);
              if ( v7 )
              {
                v170 = -1;
                if ( v7 > 0 )
                  v170 = 1;
                v7 = v170;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 6) - *(v46 - 6);
              if ( v7 )
              {
                v171 = -1;
                if ( v7 > 0 )
                  v171 = 1;
                v7 = v171;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 5) - *(v46 - 5);
              if ( v7 )
              {
                v172 = -1;
                if ( v7 > 0 )
                  v172 = 1;
                v7 = v172;
              }
              if ( v7 )
                return v7;
              v7 = *(v43 - 4) - *(v46 - 4);
              if ( v7 )
              {
                v173 = -1;
                if ( v7 > 0 )
                  v173 = 1;
                v7 = v173;
              }
              if ( v7 )
                return v7;
            }
LABEL_769:
            v7 = *(v43 - 3) - *(v46 - 3);
            if ( v7 )
            {
              v174 = -1;
              if ( v7 > 0 )
                v174 = 1;
              v7 = v174;
            }
            if ( v7 )
              return v7;
LABEL_774:
            v7 = *(v43 - 2) - *(v46 - 2);
            if ( v7 )
            {
              v175 = -1;
              if ( v7 > 0 )
                v175 = 1;
              v7 = v175;
            }
            if ( v7 )
              return v7;
            v107 = *(v46 - 1);
            v106 = *(v43 - 1);
            break;
          default:
            v5 = v45;
            v4 = v44;
            goto LABEL_7;
        }
        break;
    }
LABEL_796:
    v7 = v106 - v107;
    if ( v7 )
    {
      if ( v7 > 0 )
        return 1;
      return v6;
    }
    return v7;
  }
  return 0;
}
