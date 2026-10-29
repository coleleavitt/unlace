/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CC680
// Address: 0x000CC680

//----- (000CC680) --------------------------------------------------------
char *__fastcall sub_CC680(char **a1)
{
  char *v1; // esi
  char *v2; // edi
  unsigned int v3; // ecx
  char v4; // al
  char *v5; // eax
  char *v6; // ecx
  char *v7; // eax
  char **v8; // edx
  char *v9; // esi
  char *v10; // edi
  char v11; // dl
  int v12; // ecx
  char *v13; // edi
  char *v14; // ecx
  unsigned int v15; // edx
  bool v16; // cf
  char *v17; // esi
  int v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  char *v21; // ecx
  char *v22; // eax
  char *v23; // esi
  char *v24; // eax
  unsigned int v25; // ecx
  char *v26; // esi
  char *v27; // ecx
  char *v28; // esi
  int v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edx
  char *v32; // ecx
  char *v33; // eax
  char *v34; // esi
  char *v35; // eax
  unsigned int v36; // ecx
  char *v37; // ecx
  _DWORD *v38; // eax
  _DWORD *v39; // edx
  _DWORD *v40; // eax
  _DWORD *v41; // edx
  char *v42; // edi
  _DWORD *v43; // eax
  _DWORD *v44; // edx
  char *v45; // ecx
  char *v46; // eax
  char *v47; // esi
  char *v48; // eax
  unsigned int v49; // ecx
  char *v50; // ecx
  char *v51; // ecx
  char *v52; // eax
  char *v53; // esi
  char *v54; // eax
  unsigned int v55; // ecx
  char *v56; // ecx
  char *v57; // ecx
  char *v58; // eax
  char *v59; // esi
  char *v60; // eax
  unsigned int v61; // ecx
  char *v62; // ecx
  char *v63; // ecx
  char *v64; // eax
  char *v65; // esi
  char *v66; // eax
  unsigned int v67; // ecx
  char *v68; // ecx
  char *v69; // ecx
  char *v70; // eax
  char *v71; // esi
  char *v72; // eax
  unsigned int v73; // ecx
  char *v74; // ecx
  char *v75; // ecx
  char *v76; // eax
  char *v77; // esi
  char *v78; // eax
  unsigned int v79; // ecx
  char *v80; // ecx
  char *v81; // ecx
  char *v82; // eax
  char *v83; // esi
  char *v84; // eax
  unsigned int v85; // ecx
  char *v86; // ecx
  char *v87; // ecx
  char *v88; // eax
  char *v89; // esi
  char *v90; // eax
  unsigned int v91; // ecx
  char *v92; // ecx
  char *v93; // ecx
  char *v94; // eax
  char *v95; // esi
  char *v96; // eax
  unsigned int v97; // ecx
  char *v98; // ecx
  char *v99; // ecx
  char *v100; // eax
  char *v101; // esi
  char *v102; // eax
  unsigned int v103; // ecx
  char *v104; // ecx
  char *v105; // ecx
  char *v106; // eax
  char *v107; // esi
  char *v108; // eax
  unsigned int v109; // ecx
  char *v110; // ecx
  char *v111; // ecx
  char *v112; // eax
  char *v113; // esi
  char *v114; // eax
  unsigned int v115; // ecx
  char *v116; // ecx
  char *v117; // edi
  int v118; // ecx
  _DWORD *v119; // eax
  _DWORD *v120; // edx
  _DWORD *v121; // eax
  _DWORD *v122; // edx
  _DWORD *v123; // eax
  _DWORD *v124; // edx
  _DWORD *v125; // eax
  _DWORD *v126; // edx
  _DWORD *v127; // eax
  _DWORD *v128; // edx
  _DWORD *v129; // eax
  _DWORD *v130; // edx
  _DWORD *v131; // eax
  _DWORD *v132; // edx
  _DWORD *v133; // eax
  _DWORD *v134; // edx
  _DWORD *v135; // eax
  _DWORD *v136; // edx
  _DWORD *v137; // eax
  _DWORD *v138; // edx
  _DWORD *v139; // eax
  _DWORD *v140; // edx
  _DWORD *v141; // eax
  _DWORD *v142; // edx
  _DWORD *v143; // eax
  _DWORD *v144; // edx
  _DWORD *v145; // eax
  _DWORD *v146; // edx
  char *v147; // esi
  int v148; // ecx
  _DWORD *v149; // eax
  _DWORD *v150; // edx
  char *v151; // eax
  char *v153; // eax
  char *v154; // [esp+8h] [ebp-24h]
  char *v155; // [esp+8h] [ebp-24h]
  char *v156; // [esp+8h] [ebp-24h]
  char *v157; // [esp+8h] [ebp-24h]
  char *v158; // [esp+8h] [ebp-24h]
  char *v159; // [esp+8h] [ebp-24h]
  char *v160; // [esp+8h] [ebp-24h]
  char *v161; // [esp+8h] [ebp-24h]
  char *v162; // [esp+8h] [ebp-24h]
  char *v163; // [esp+8h] [ebp-24h]
  char *v164; // [esp+8h] [ebp-24h]
  char *v165; // [esp+8h] [ebp-24h]
  char *v166; // [esp+8h] [ebp-24h]
  char *v167; // [esp+8h] [ebp-24h]
  char *v168; // [esp+8h] [ebp-24h]
  char *v169; // [esp+Ch] [ebp-20h]
  char *v170; // [esp+Ch] [ebp-20h]
  char *v172; // [esp+14h] [ebp-18h]
  char *v173; // [esp+14h] [ebp-18h]
  char *v174; // [esp+14h] [ebp-18h]
  _BYTE *v175; // [esp+18h] [ebp-14h]

  v1 = *a1;
  v2 = a1[1];
  v169 = nullptr;
  if ( *a1 != v2 && *v1 == 76 )
  {
    *a1 = v1 + 1;
    v3 = v2 - (v1 + 1);
    if ( v2 != v1 + 1 )
    {
      v4 = v1[1];
      switch ( v4 )
      {
        case 'T':
          return v169;
        case '_':
          if ( v3 < 2 )
            return v169;
          if ( v4 != 95 )
            return v169;
          if ( v1[2] != 90 )
            return v169;
          *a1 = v1 + 3;
          v5 = sub_C1A20(a1);
          if ( !v5 )
            return v169;
          v6 = *a1;
          if ( *a1 == a1[1] || *v6 != 69 )
            return v169;
          *a1 = v6 + 1;
          return v5;
        case 'a':
          v21 = v1 + 2;
          *a1 = v1 + 2;
          v154 = v1 + 2;
          v22 = v2;
          if ( v1 + 2 != v2 )
          {
            v22 = v1 + 2;
            v21 = v1 + 2;
            if ( *v154 == 110 )
            {
              v23 = v1 + 3;
              *a1 = v23;
              v21 = v23;
              v22 = v23;
            }
          }
          if ( v21 == v2 || (unsigned int)(*v22 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v27 = nullptr;
            if ( v22 == v2 )
              return v169;
          }
          else
          {
            v24 = v22 + 1;
            do
            {
              *a1 = v24;
              if ( v2 == v24 )
                return nullptr;
              v25 = *v24++ - 48;
            }
            while ( v25 < 0xA );
            v169 = nullptr;
            v22 = v24 - 1;
            v26 = v22;
            v27 = v154;
            if ( v22 == v2 )
              return v169;
          }
          if ( v27 == v26 )
            return v169;
          v168 = v27;
          if ( *v22 != 69 )
            return v169;
          *a1 = v22 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v120 = v117 + 4;
          }
          else
          {
            v119 = operator new[](0x1000u);
            *v119 = v117;
            v119[1] = 0;
            a1[1116] = (char *)v119;
            v118 = 0;
            v120 = v119 + 1;
            v117 = (char *)v119;
          }
          *v120 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "signed char";
          v151 = "";
          goto LABEL_344;
        case 'b':
          if ( v3 >= 3 && v4 == 98 )
          {
            if ( v1[2] == 48 && v1[3] == 69 )
            {
              *a1 = v1 + 4;
              v28 = a1[1116];
              v29 = *((_DWORD *)v28 + 1);
              if ( (unsigned int)(v29 + 16) <= 0xFF7 )
              {
                v31 = v28 + 4;
              }
              else
              {
                v30 = operator new[](0x1000u);
                *v30 = v28;
                v30[1] = 0;
                a1[1116] = (char *)v30;
                v29 = 0;
                v31 = v30 + 1;
                v28 = (char *)v30;
              }
              *v31 = v29 + 16;
              v169 = &v28[v29 + 8];
              *(_DWORD *)&v28[v29 + 12] = 16843050;
              *(_DWORD *)v169 = off_139DDC;
              v28[v29 + 16] = 0;
            }
            else if ( v1[2] == 49 && v1[3] == 69 )
            {
              *a1 = v1 + 4;
              v147 = a1[1116];
              v148 = *((_DWORD *)v147 + 1);
              if ( (unsigned int)(v148 + 16) <= 0xFF7 )
              {
                v150 = v147 + 4;
              }
              else
              {
                v149 = operator new[](0x1000u);
                *v149 = v147;
                v149[1] = 0;
                a1[1116] = (char *)v149;
                v148 = 0;
                v150 = v149 + 1;
                v147 = (char *)v149;
              }
              *v150 = v148 + 16;
              v169 = &v147[v148 + 8];
              *(_DWORD *)&v147[v148 + 12] = 16843050;
              *(_DWORD *)v169 = off_139DDC;
              v147[v148 + 16] = 1;
            }
          }
          return v169;
        case 'c':
          v32 = v1 + 2;
          *a1 = v1 + 2;
          v155 = v1 + 2;
          v33 = v2;
          if ( v1 + 2 != v2 )
          {
            v33 = v1 + 2;
            v32 = v1 + 2;
            if ( *v155 == 110 )
            {
              v34 = v1 + 3;
              *a1 = v34;
              v32 = v34;
              v33 = v34;
            }
          }
          if ( v32 == v2 || (unsigned int)(*v33 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v37 = nullptr;
            if ( v33 == v2 )
              return v169;
          }
          else
          {
            v35 = v33 + 1;
            do
            {
              *a1 = v35;
              if ( v2 == v35 )
                return nullptr;
              v36 = *v35++ - 48;
            }
            while ( v36 < 0xA );
            v169 = nullptr;
            v33 = v35 - 1;
            v26 = v33;
            v37 = v155;
            if ( v33 == v2 )
              return v169;
          }
          if ( v37 == v26 )
            return v169;
          v168 = v37;
          if ( *v33 != 69 )
            return v169;
          *a1 = v33 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v122 = v117 + 4;
          }
          else
          {
            v121 = operator new[](0x1000u);
            *v121 = v117;
            v121[1] = 0;
            a1[1116] = (char *)v121;
            v118 = 0;
            v122 = v121 + 1;
            v117 = (char *)v121;
          }
          *v122 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "char";
          v151 = "";
          goto LABEL_344;
        case 'd':
          *a1 = v1 + 2;
          if ( (unsigned int)(v2 - (v1 + 2)) < 0x11 )
            return v169;
          v173 = v1 + 2;
          if ( !isxdigit(v1[2]) )
            return v169;
          if ( !isxdigit(v1[3]) )
            return v169;
          if ( !isxdigit(v1[4]) )
            return v169;
          if ( !isxdigit(v1[5]) )
            return v169;
          if ( !isxdigit(v1[6]) )
            return v169;
          if ( !isxdigit(v1[7]) )
            return v169;
          if ( !isxdigit(v1[8]) )
            return v169;
          if ( !isxdigit(v1[9]) )
            return v169;
          if ( !isxdigit(v1[10]) )
            return v169;
          if ( !isxdigit(v1[11]) )
            return v169;
          if ( !isxdigit(v1[12]) )
            return v169;
          if ( !isxdigit(v1[13]) )
            return v169;
          if ( !isxdigit(v1[14]) )
            return v169;
          if ( !isxdigit(v1[15]) )
            return v169;
          if ( !isxdigit(v1[16]) )
            return v169;
          if ( !isxdigit(v1[17]) )
            return v169;
          *a1 = v1 + 18;
          v175 = v1 + 18;
          if ( v1 + 18 == v2 || *v175 != 69 )
            return v169;
          *a1 = v1 + 19;
          v17 = a1[1116];
          v18 = *((_DWORD *)v17 + 1);
          if ( (unsigned int)(v18 + 16) < 0xFF8 )
          {
            v39 = v17 + 4;
          }
          else
          {
            v38 = operator new[](0x1000u);
            *v38 = v17;
            v38[1] = 0;
            a1[1116] = (char *)v38;
            v18 = 0;
            v39 = v38 + 1;
            v17 = (char *)v38;
          }
          *v39 = v18 + 16;
          *(_DWORD *)&v17[v18 + 12] = 16843050;
          v153 = (char *)&qword_13ACD8 - 3724;
          goto LABEL_355;
        case 'e':
          *a1 = v1 + 2;
          if ( (unsigned int)(v2 - (v1 + 2)) < 0x15 )
            return v169;
          v173 = v1 + 2;
          if ( !isxdigit(v1[2]) )
            return v169;
          if ( !isxdigit(v1[3]) )
            return v169;
          if ( !isxdigit(v1[4]) )
            return v169;
          if ( !isxdigit(v1[5]) )
            return v169;
          if ( !isxdigit(v1[6]) )
            return v169;
          if ( !isxdigit(v1[7]) )
            return v169;
          if ( !isxdigit(v1[8]) )
            return v169;
          if ( !isxdigit(v1[9]) )
            return v169;
          if ( !isxdigit(v1[10]) )
            return v169;
          if ( !isxdigit(v1[11]) )
            return v169;
          if ( !isxdigit(v1[12]) )
            return v169;
          if ( !isxdigit(v1[13]) )
            return v169;
          if ( !isxdigit(v1[14]) )
            return v169;
          if ( !isxdigit(v1[15]) )
            return v169;
          if ( !isxdigit(v1[16]) )
            return v169;
          if ( !isxdigit(v1[17]) )
            return v169;
          if ( !isxdigit(v1[18]) )
            return v169;
          if ( !isxdigit(v1[19]) )
            return v169;
          if ( !isxdigit(v1[20]) )
            return v169;
          if ( !isxdigit(v1[21]) )
            return v169;
          *a1 = v1 + 22;
          v175 = v1 + 22;
          if ( v1 + 22 == v2 || *v175 != 69 )
            return v169;
          *a1 = v1 + 23;
          v17 = a1[1116];
          v18 = *((_DWORD *)v17 + 1);
          if ( (unsigned int)(v18 + 16) < 0xFF8 )
          {
            v41 = v17 + 4;
          }
          else
          {
            v40 = operator new[](0x1000u);
            *v40 = v17;
            v40[1] = 0;
            a1[1116] = (char *)v40;
            v18 = 0;
            v41 = v40 + 1;
            v17 = (char *)v40;
          }
          *v41 = v18 + 16;
          *(_DWORD *)&v17[v18 + 12] = 16843050;
          v153 = (char *)&qword_13ACD8 - 3668;
LABEL_355:
          *(_DWORD *)&v17[v18 + 8] = v153;
          *(_DWORD *)&v17[v18 + 16] = v173;
          *(_DWORD *)&v17[v18 + 20] = v175;
          return &v17[v18 + 8];
        case 'f':
          *a1 = v1 + 2;
          if ( (unsigned int)(v2 - (v1 + 2)) < 9 )
            return v169;
          v174 = v1 + 2;
          if ( !isxdigit(v1[2]) )
            return v169;
          if ( !isxdigit(v1[3]) )
            return v169;
          if ( !isxdigit(v1[4]) )
            return v169;
          if ( !isxdigit(v1[5]) )
            return v169;
          if ( !isxdigit(v1[6]) )
            return v169;
          if ( !isxdigit(v1[7]) )
            return v169;
          if ( !isxdigit(v1[8]) )
            return v169;
          if ( !isxdigit(v1[9]) )
            return v169;
          *a1 = v1 + 10;
          if ( v1 + 10 == v2 || v1[10] != 69 )
            return v169;
          v42 = v1 + 10;
          *a1 = v1 + 11;
          v17 = a1[1116];
          v18 = *((_DWORD *)v17 + 1);
          if ( (unsigned int)(v18 + 16) < 0xFF8 )
          {
            v44 = v17 + 4;
          }
          else
          {
            v43 = operator new[](0x1000u);
            *v43 = v17;
            v43[1] = 0;
            a1[1116] = (char *)v43;
            v18 = 0;
            v44 = v43 + 1;
            v17 = (char *)v43;
          }
          *v44 = v18 + 16;
          *(_DWORD *)&v17[v18 + 12] = 16843050;
          *(_DWORD *)&v17[v18 + 8] = (char *)&qword_13ACD8 - 3780;
          *(_DWORD *)&v17[v18 + 16] = v174;
          *(_DWORD *)&v17[v18 + 20] = v42;
          return &v17[v18 + 8];
        case 'h':
          v45 = v1 + 2;
          *a1 = v1 + 2;
          v156 = v1 + 2;
          v46 = v2;
          if ( v1 + 2 != v2 )
          {
            v46 = v1 + 2;
            v45 = v1 + 2;
            if ( *v156 == 110 )
            {
              v47 = v1 + 3;
              *a1 = v47;
              v45 = v47;
              v46 = v47;
            }
          }
          if ( v45 == v2 || (unsigned int)(*v46 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v50 = nullptr;
            if ( v46 == v2 )
              return v169;
          }
          else
          {
            v48 = v46 + 1;
            do
            {
              *a1 = v48;
              if ( v2 == v48 )
                return nullptr;
              v49 = *v48++ - 48;
            }
            while ( v49 < 0xA );
            v169 = nullptr;
            v46 = v48 - 1;
            v26 = v46;
            v50 = v156;
            if ( v46 == v2 )
              return v169;
          }
          if ( v50 == v26 )
            return v169;
          v168 = v50;
          if ( *v46 != 69 )
            return v169;
          *a1 = v46 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v124 = v117 + 4;
          }
          else
          {
            v123 = operator new[](0x1000u);
            *v123 = v117;
            v123[1] = 0;
            a1[1116] = (char *)v123;
            v118 = 0;
            v124 = v123 + 1;
            v117 = (char *)v123;
          }
          *v124 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "unsigned char";
          v151 = "";
          goto LABEL_344;
        case 'i':
          v51 = v1 + 2;
          *a1 = v1 + 2;
          v157 = v1 + 2;
          v52 = v2;
          if ( v1 + 2 != v2 )
          {
            v52 = v1 + 2;
            v51 = v1 + 2;
            if ( *v157 == 110 )
            {
              v53 = v1 + 3;
              *a1 = v53;
              v51 = v53;
              v52 = v53;
            }
          }
          if ( v51 == v2 || (unsigned int)(*v52 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v56 = nullptr;
            if ( v52 == v2 )
              return v169;
          }
          else
          {
            v54 = v52 + 1;
            do
            {
              *a1 = v54;
              if ( v2 == v54 )
                return nullptr;
              v55 = *v54++ - 48;
            }
            while ( v55 < 0xA );
            v169 = nullptr;
            v52 = v54 - 1;
            v26 = v52;
            v56 = v157;
            if ( v52 == v2 )
              return v169;
          }
          if ( v56 == v26 )
            return v169;
          v168 = v56;
          if ( *v52 != 69 )
            return v169;
          *a1 = v52 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v126 = v117 + 4;
          }
          else
          {
            v125 = operator new[](0x1000u);
            *v125 = v117;
            v125[1] = 0;
            a1[1116] = (char *)v125;
            v118 = 0;
            v126 = v125 + 1;
            v117 = (char *)v125;
          }
          *v126 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          v151 = &byte_DCEE2;
          *(_DWORD *)&v117[v118 + 16] = &byte_DCEE2;
          goto LABEL_344;
        case 'j':
          v57 = v1 + 2;
          *a1 = v1 + 2;
          v158 = v1 + 2;
          v58 = v2;
          if ( v1 + 2 != v2 )
          {
            v58 = v1 + 2;
            v57 = v1 + 2;
            if ( *v158 == 110 )
            {
              v59 = v1 + 3;
              *a1 = v59;
              v57 = v59;
              v58 = v59;
            }
          }
          if ( v57 == v2 || (unsigned int)(*v58 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v62 = nullptr;
            if ( v58 == v2 )
              return v169;
          }
          else
          {
            v60 = v58 + 1;
            do
            {
              *a1 = v60;
              if ( v2 == v60 )
                return nullptr;
              v61 = *v60++ - 48;
            }
            while ( v61 < 0xA );
            v169 = nullptr;
            v58 = v60 - 1;
            v26 = v58;
            v62 = v158;
            if ( v58 == v2 )
              return v169;
          }
          if ( v62 == v26 )
            return v169;
          v168 = v62;
          if ( *v58 != 69 )
            return v169;
          *a1 = v58 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v128 = v117 + 4;
          }
          else
          {
            v127 = operator new[](0x1000u);
            *v127 = v117;
            v127[1] = 0;
            a1[1116] = (char *)v127;
            v118 = 0;
            v128 = v127 + 1;
            v117 = (char *)v127;
          }
          *v128 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "u";
          v151 = "";
          goto LABEL_344;
        case 'l':
          v63 = v1 + 2;
          *a1 = v1 + 2;
          v159 = v1 + 2;
          v64 = v2;
          if ( v1 + 2 != v2 )
          {
            v64 = v1 + 2;
            v63 = v1 + 2;
            if ( *v159 == 110 )
            {
              v65 = v1 + 3;
              *a1 = v65;
              v63 = v65;
              v64 = v65;
            }
          }
          if ( v63 == v2 || (unsigned int)(*v64 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v68 = nullptr;
            if ( v64 == v2 )
              return v169;
          }
          else
          {
            v66 = v64 + 1;
            do
            {
              *a1 = v66;
              if ( v2 == v66 )
                return nullptr;
              v67 = *v66++ - 48;
            }
            while ( v67 < 0xA );
            v169 = nullptr;
            v64 = v66 - 1;
            v26 = v64;
            v68 = v159;
            if ( v64 == v2 )
              return v169;
          }
          if ( v68 == v26 )
            return v169;
          v168 = v68;
          if ( *v64 != 69 )
            return v169;
          *a1 = v64 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v130 = v117 + 4;
          }
          else
          {
            v129 = operator new[](0x1000u);
            *v129 = v117;
            v129[1] = 0;
            a1[1116] = (char *)v129;
            v118 = 0;
            v130 = v129 + 1;
            v117 = (char *)v129;
          }
          *v130 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "l";
          v151 = "";
          goto LABEL_344;
        case 'm':
          v69 = v1 + 2;
          *a1 = v1 + 2;
          v160 = v1 + 2;
          v70 = v2;
          if ( v1 + 2 != v2 )
          {
            v70 = v1 + 2;
            v69 = v1 + 2;
            if ( *v160 == 110 )
            {
              v71 = v1 + 3;
              *a1 = v71;
              v69 = v71;
              v70 = v71;
            }
          }
          if ( v69 == v2 || (unsigned int)(*v70 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v74 = nullptr;
            if ( v70 == v2 )
              return v169;
          }
          else
          {
            v72 = v70 + 1;
            do
            {
              *a1 = v72;
              if ( v2 == v72 )
                return nullptr;
              v73 = *v72++ - 48;
            }
            while ( v73 < 0xA );
            v169 = nullptr;
            v70 = v72 - 1;
            v26 = v70;
            v74 = v160;
            if ( v70 == v2 )
              return v169;
          }
          if ( v74 == v26 )
            return v169;
          v168 = v74;
          if ( *v70 != 69 )
            return v169;
          *a1 = v70 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v132 = v117 + 4;
          }
          else
          {
            v131 = operator new[](0x1000u);
            *v131 = v117;
            v131[1] = 0;
            a1[1116] = (char *)v131;
            v118 = 0;
            v132 = v131 + 1;
            v117 = (char *)v131;
          }
          *v132 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "ul";
          v151 = "";
          goto LABEL_344;
        case 'n':
          v75 = v1 + 2;
          *a1 = v1 + 2;
          v161 = v1 + 2;
          v76 = v2;
          if ( v1 + 2 != v2 )
          {
            v76 = v1 + 2;
            v75 = v1 + 2;
            if ( *v161 == 110 )
            {
              v77 = v1 + 3;
              *a1 = v77;
              v75 = v77;
              v76 = v77;
            }
          }
          if ( v75 == v2 || (unsigned int)(*v76 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v80 = nullptr;
            if ( v76 == v2 )
              return v169;
          }
          else
          {
            v78 = v76 + 1;
            do
            {
              *a1 = v78;
              if ( v2 == v78 )
                return nullptr;
              v79 = *v78++ - 48;
            }
            while ( v79 < 0xA );
            v169 = nullptr;
            v76 = v78 - 1;
            v26 = v76;
            v80 = v161;
            if ( v76 == v2 )
              return v169;
          }
          if ( v80 == v26 )
            return v169;
          v168 = v80;
          if ( *v76 != 69 )
            return v169;
          *a1 = v76 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v134 = v117 + 4;
          }
          else
          {
            v133 = operator new[](0x1000u);
            *v133 = v117;
            v133[1] = 0;
            a1[1116] = (char *)v133;
            v118 = 0;
            v134 = v133 + 1;
            v117 = (char *)v133;
          }
          *v134 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "__int128";
          v151 = "";
          goto LABEL_344;
        case 'o':
          v81 = v1 + 2;
          *a1 = v1 + 2;
          v162 = v1 + 2;
          v82 = v2;
          if ( v1 + 2 != v2 )
          {
            v82 = v1 + 2;
            v81 = v1 + 2;
            if ( *v162 == 110 )
            {
              v83 = v1 + 3;
              *a1 = v83;
              v81 = v83;
              v82 = v83;
            }
          }
          if ( v81 == v2 || (unsigned int)(*v82 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v86 = nullptr;
            if ( v82 == v2 )
              return v169;
          }
          else
          {
            v84 = v82 + 1;
            do
            {
              *a1 = v84;
              if ( v2 == v84 )
                return nullptr;
              v85 = *v84++ - 48;
            }
            while ( v85 < 0xA );
            v169 = nullptr;
            v82 = v84 - 1;
            v26 = v82;
            v86 = v162;
            if ( v82 == v2 )
              return v169;
          }
          if ( v86 == v26 )
            return v169;
          v168 = v86;
          if ( *v82 != 69 )
            return v169;
          *a1 = v82 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v136 = v117 + 4;
          }
          else
          {
            v135 = operator new[](0x1000u);
            *v135 = v117;
            v135[1] = 0;
            a1[1116] = (char *)v135;
            v118 = 0;
            v136 = v135 + 1;
            v117 = (char *)v135;
          }
          *v136 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "unsigned __int128";
          v151 = "";
          goto LABEL_344;
        case 's':
          v87 = v1 + 2;
          *a1 = v1 + 2;
          v163 = v1 + 2;
          v88 = v2;
          if ( v1 + 2 != v2 )
          {
            v88 = v1 + 2;
            v87 = v1 + 2;
            if ( *v163 == 110 )
            {
              v89 = v1 + 3;
              *a1 = v89;
              v87 = v89;
              v88 = v89;
            }
          }
          if ( v87 == v2 || (unsigned int)(*v88 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v92 = nullptr;
            if ( v88 == v2 )
              return v169;
          }
          else
          {
            v90 = v88 + 1;
            do
            {
              *a1 = v90;
              if ( v2 == v90 )
                return nullptr;
              v91 = *v90++ - 48;
            }
            while ( v91 < 0xA );
            v169 = nullptr;
            v88 = v90 - 1;
            v26 = v88;
            v92 = v163;
            if ( v88 == v2 )
              return v169;
          }
          if ( v92 == v26 )
            return v169;
          v168 = v92;
          if ( *v88 != 69 )
            return v169;
          *a1 = v88 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v138 = v117 + 4;
          }
          else
          {
            v137 = operator new[](0x1000u);
            *v137 = v117;
            v137[1] = 0;
            a1[1116] = (char *)v137;
            v118 = 0;
            v138 = v137 + 1;
            v117 = (char *)v137;
          }
          *v138 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "short";
          v151 = "";
          goto LABEL_344;
        case 't':
          v93 = v1 + 2;
          *a1 = v1 + 2;
          v164 = v1 + 2;
          v94 = v2;
          if ( v1 + 2 != v2 )
          {
            v94 = v1 + 2;
            v93 = v1 + 2;
            if ( *v164 == 110 )
            {
              v95 = v1 + 3;
              *a1 = v95;
              v93 = v95;
              v94 = v95;
            }
          }
          if ( v93 == v2 || (unsigned int)(*v94 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v98 = nullptr;
            if ( v94 == v2 )
              return v169;
          }
          else
          {
            v96 = v94 + 1;
            do
            {
              *a1 = v96;
              if ( v2 == v96 )
                return nullptr;
              v97 = *v96++ - 48;
            }
            while ( v97 < 0xA );
            v169 = nullptr;
            v94 = v96 - 1;
            v26 = v94;
            v98 = v164;
            if ( v94 == v2 )
              return v169;
          }
          if ( v98 == v26 )
            return v169;
          v168 = v98;
          if ( *v94 != 69 )
            return v169;
          *a1 = v94 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v140 = v117 + 4;
          }
          else
          {
            v139 = operator new[](0x1000u);
            *v139 = v117;
            v139[1] = 0;
            a1[1116] = (char *)v139;
            v118 = 0;
            v140 = v139 + 1;
            v117 = (char *)v139;
          }
          *v140 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "unsigned short";
          v151 = "";
          goto LABEL_344;
        case 'w':
          v99 = v1 + 2;
          *a1 = v1 + 2;
          v165 = v1 + 2;
          v100 = v2;
          if ( v1 + 2 != v2 )
          {
            v100 = v1 + 2;
            v99 = v1 + 2;
            if ( *v165 == 110 )
            {
              v101 = v1 + 3;
              *a1 = v101;
              v99 = v101;
              v100 = v101;
            }
          }
          if ( v99 == v2 || (unsigned int)(*v100 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v104 = nullptr;
            if ( v100 == v2 )
              return v169;
          }
          else
          {
            v102 = v100 + 1;
            do
            {
              *a1 = v102;
              if ( v2 == v102 )
                return nullptr;
              v103 = *v102++ - 48;
            }
            while ( v103 < 0xA );
            v169 = nullptr;
            v100 = v102 - 1;
            v26 = v100;
            v104 = v165;
            if ( v100 == v2 )
              return v169;
          }
          if ( v104 == v26 )
            return v169;
          v168 = v104;
          if ( *v100 != 69 )
            return v169;
          *a1 = v100 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v142 = v117 + 4;
          }
          else
          {
            v141 = operator new[](0x1000u);
            *v141 = v117;
            v141[1] = 0;
            a1[1116] = (char *)v141;
            v118 = 0;
            v142 = v141 + 1;
            v117 = (char *)v141;
          }
          *v142 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "wchar_t";
          v151 = "";
          goto LABEL_344;
        case 'x':
          v105 = v1 + 2;
          *a1 = v1 + 2;
          v166 = v1 + 2;
          v106 = v2;
          if ( v1 + 2 != v2 )
          {
            v106 = v1 + 2;
            v105 = v1 + 2;
            if ( *v166 == 110 )
            {
              v107 = v1 + 3;
              *a1 = v107;
              v105 = v107;
              v106 = v107;
            }
          }
          if ( v105 == v2 || (unsigned int)(*v106 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v110 = nullptr;
            if ( v106 == v2 )
              return v169;
          }
          else
          {
            v108 = v106 + 1;
            do
            {
              *a1 = v108;
              if ( v2 == v108 )
                return nullptr;
              v109 = *v108++ - 48;
            }
            while ( v109 < 0xA );
            v169 = nullptr;
            v106 = v108 - 1;
            v26 = v106;
            v110 = v166;
            if ( v106 == v2 )
              return v169;
          }
          if ( v110 == v26 )
            return v169;
          v168 = v110;
          if ( *v106 != 69 )
            return v169;
          *a1 = v106 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v144 = v117 + 4;
          }
          else
          {
            v143 = operator new[](0x1000u);
            *v143 = v117;
            v143[1] = 0;
            a1[1116] = (char *)v143;
            v118 = 0;
            v144 = v143 + 1;
            v117 = (char *)v143;
          }
          *v144 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "ll";
          v151 = "";
          goto LABEL_344;
        case 'y':
          v111 = v1 + 2;
          *a1 = v1 + 2;
          v167 = v1 + 2;
          v112 = v2;
          if ( v1 + 2 != v2 )
          {
            v112 = v1 + 2;
            v111 = v1 + 2;
            if ( *v167 == 110 )
            {
              v113 = v1 + 3;
              *a1 = v113;
              v111 = v113;
              v112 = v113;
            }
          }
          if ( v111 == v2 || (unsigned int)(*v112 - 48) > 9 )
          {
            v169 = nullptr;
            v26 = nullptr;
            v116 = nullptr;
            if ( v112 == v2 )
              return v169;
          }
          else
          {
            v114 = v112 + 1;
            do
            {
              *a1 = v114;
              if ( v2 == v114 )
                return nullptr;
              v115 = *v114++ - 48;
            }
            while ( v115 < 0xA );
            v169 = nullptr;
            v112 = v114 - 1;
            v26 = v112;
            v116 = v167;
            if ( v112 == v2 )
              return v169;
          }
          if ( v116 == v26 )
            return v169;
          v168 = v116;
          if ( *v112 != 69 )
            return v169;
          *a1 = v112 + 1;
          v117 = a1[1116];
          v118 = *((_DWORD *)v117 + 1);
          if ( (unsigned int)(v118 + 32) < 0xFF8 )
          {
            v146 = v117 + 4;
          }
          else
          {
            v145 = operator new[](0x1000u);
            *v145 = v117;
            v145[1] = 0;
            a1[1116] = (char *)v145;
            v118 = 0;
            v146 = v145 + 1;
            v117 = (char *)v145;
          }
          *v146 = v118 + 32;
          *(_DWORD *)&v117[v118 + 12] = 16843050;
          *(_DWORD *)&v117[v118 + 8] = off_139D94;
          *(_DWORD *)&v117[v118 + 16] = "ull";
          v151 = "";
LABEL_344:
          *(_DWORD *)&v117[v118 + 20] = v151;
          *(_DWORD *)&v117[v118 + 24] = v168;
          *(_DWORD *)&v117[v118 + 28] = v26;
          v5 = &v117[v118 + 8];
          break;
        default:
          goto LABEL_12;
      }
      return v5;
    }
LABEL_12:
    v7 = sub_C2AF0(a1);
    if ( v7 )
    {
      v8 = a1;
      v9 = a1[1];
      v10 = nullptr;
      if ( v9 == *a1 )
      {
        v172 = nullptr;
      }
      else if ( (unsigned int)(**a1 - 48) > 9 )
      {
        v14 = *a1;
        v172 = nullptr;
        if ( *a1 != v9 )
        {
LABEL_15:
          if ( *v14 == 69 )
          {
            *v8 = v14 + 1;
            v11 = 1;
            if ( v172 != v10 )
              goto LABEL_30;
            goto LABEL_17;
          }
        }
      }
      else
      {
        v172 = *a1;
        v13 = *a1 + 1;
        do
        {
          v14 = v13;
          *v8 = v13;
          if ( v9 == v13 )
          {
            v10 = v9;
            goto LABEL_29;
          }
          v15 = *v13++ - 48;
          v16 = v15 < 0xA;
          v8 = a1;
        }
        while ( v16 );
        v10 = v14;
        if ( v14 != v9 )
          goto LABEL_15;
      }
LABEL_29:
      v11 = 0;
      if ( v172 != v10 )
      {
LABEL_30:
        v169 = nullptr;
        if ( v11 )
        {
          v170 = v7;
          v17 = a1[1116];
          v18 = *((_DWORD *)v17 + 1);
          if ( (unsigned int)(v18 + 32) < 0xFF8 )
          {
            v20 = v17 + 4;
          }
          else
          {
            v19 = operator new[](0x1000u);
            *v19 = v17;
            v19[1] = 0;
            a1[1116] = (char *)v19;
            v18 = 0;
            v20 = v19 + 1;
            v17 = (char *)v19;
          }
          *v20 = v18 + 32;
          *(_DWORD *)&v17[v18 + 12] = 16843050;
          *(_DWORD *)&v17[v18 + 8] = off_139EBC;
          *(_DWORD *)&v17[v18 + 16] = v170;
          *(_DWORD *)&v17[v18 + 20] = v172;
          *(_DWORD *)&v17[v18 + 24] = v10;
          return &v17[v18 + 8];
        }
        return v169;
      }
LABEL_17:
      v12 = 0;
      if ( v11 )
        return v7;
      return (char *)v12;
    }
  }
  return v169;
}
// DCEE2: using guessed type char byte_DCEE2;
// 139D94: using guessed type int (*off_139D94[3])();
// 139DDC: using guessed type int (*off_139DDC[3])();
// 139EBC: using guessed type int (*off_139EBC[3])();
// 13ACD8: using guessed type __int64 qword_13ACD8;
