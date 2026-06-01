/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C49E0
// Address: 0x000C49E0

//----- (000C49E0) --------------------------------------------------------
char *__fastcall sub_C49E0(char **a1, int a2)
{
  char *v2; // edx
  char *v3; // edi
  unsigned int v4; // ecx
  char v5; // al
  char *v6; // ecx
  int v7; // esi
  char *v8; // edx
  char **v9; // edx
  char *v10; // eax
  char *v11; // ecx
  int v12; // edx
  _BYTE *v13; // edx
  char *v14; // esi
  char **v15; // edx
  char *v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  char *v21; // esi
  int v22; // ecx
  _DWORD *v23; // eax
  _DWORD *v24; // edx
  int v25; // eax
  int v26; // eax
  char *v27; // esi
  int v28; // ecx
  _DWORD *v29; // eax
  _DWORD *v30; // edx
  int v31; // edi
  char **v32; // ecx
  char *v33; // esi
  char *v34; // edx
  signed int v35; // esi
  char *v36; // eax
  _BYTE *v37; // esi
  char *v38; // esi
  int v39; // ecx
  char **v40; // edi
  _DWORD *v41; // eax
  _DWORD *v42; // edx
  int v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // edx
  int v46; // eax
  char *v47; // eax
  char *v48; // ecx
  unsigned int v49; // ecx
  _DWORD *v50; // eax
  int v51; // eax
  int v52; // esi
  char *v53; // edi
  int v54; // ecx
  _DWORD *v55; // eax
  _DWORD *v56; // edx
  int v57; // eax
  int v58; // edi
  char *v59; // esi
  int v60; // ecx
  _DWORD *v61; // eax
  _DWORD *v62; // edx
  char *v63; // esi
  int v64; // ecx
  _DWORD *v65; // eax
  _DWORD *v66; // edx
  int v67; // ecx
  char *v68; // esi
  char *v69; // ecx
  signed int v70; // esi
  char *v71; // edi
  char *v72; // esi
  char *v73; // ecx
  signed int v74; // esi
  char *v75; // edi
  int v76; // eax
  int v77; // edi
  char *v78; // esi
  int v79; // ecx
  _DWORD *v80; // eax
  _DWORD *v81; // edx
  char *v82; // eax
  int v83; // edi
  char *v84; // esi
  int v85; // ecx
  _DWORD *v86; // eax
  _DWORD *v87; // edx
  char *v88; // ecx
  signed int v89; // esi
  int v90; // eax
  char **v91; // ecx
  int v92; // eax
  char *v93; // ecx
  int v94; // esi
  char *v95; // ecx
  char *v96; // esi
  int v97; // eax
  char *v98; // ecx
  char *v99; // esi
  char *v100; // edx
  char *v101; // ecx
  char *v102; // eax
  char *v103; // edi
  char **v104; // edx
  char *v105; // esi
  char *v106; // ecx
  int v107; // eax
  int v108; // edx
  char *v109; // edx
  unsigned int v110; // eax
  char *v111; // ecx
  unsigned int v112; // edx
  bool v113; // cf
  char *v114; // eax
  _DWORD *v115; // eax
  char *v117; // edx
  char *v118; // ecx
  int v119; // eax
  int v120; // edx
  char *v121; // ecx
  char *v122; // eax
  int v123; // edx
  char **v124; // edi
  _DWORD *v125; // edx
  char *v126; // edi
  int v127; // ecx
  char **v128; // esi
  _DWORD *v129; // eax
  _DWORD *v130; // edx
  char *v131; // edi
  int v132; // ecx
  _DWORD *v133; // eax
  _DWORD *v134; // edx
  size_t v135; // [esp+8h] [ebp-44h]
  char *v137; // [esp+18h] [ebp-34h]
  int v138; // [esp+18h] [ebp-34h]
  int v139; // [esp+18h] [ebp-34h]
  int v140; // [esp+18h] [ebp-34h]
  int v141; // [esp+18h] [ebp-34h]
  int v142; // [esp+18h] [ebp-34h]
  int v143; // [esp+18h] [ebp-34h]
  int v144; // [esp+18h] [ebp-34h]
  int v145; // [esp+18h] [ebp-34h]
  int v146; // [esp+18h] [ebp-34h]
  int v147; // [esp+18h] [ebp-34h]
  int v148; // [esp+18h] [ebp-34h]
  char *v150; // [esp+1Ch] [ebp-30h]
  char *v151; // [esp+1Ch] [ebp-30h]
  void *v152; // [esp+24h] [ebp-28h]
  int v153; // [esp+24h] [ebp-28h]
  int v154; // [esp+24h] [ebp-28h]
  int v155; // [esp+24h] [ebp-28h]
  char *v156; // [esp+28h] [ebp-24h]
  int v157; // [esp+28h] [ebp-24h]
  int v158; // [esp+28h] [ebp-24h]
  int v159; // [esp+28h] [ebp-24h]
  char *v160; // [esp+28h] [ebp-24h]
  char *v161; // [esp+2Ch] [ebp-20h]
  int v162; // [esp+2Ch] [ebp-20h]
  int v163; // [esp+2Ch] [ebp-20h]
  char **v164; // [esp+2Ch] [ebp-20h]
  char *v165; // [esp+30h] [ebp-1Ch]
  char *v166; // [esp+30h] [ebp-1Ch]
  char *v167; // [esp+30h] [ebp-1Ch]
  int v168[6]; // [esp+34h] [ebp-18h] BYREF

  v2 = *a1;
  v3 = a1[1];
  if ( *a1 != v3 && *v2 == 76 )
    *a1 = ++v2;
  v4 = v3 - v2;
  if ( v3 == v2 )
    goto LABEL_50;
  v5 = *v2;
  if ( *v2 == 90 )
  {
    if ( v2 == v3 )
      return nullptr;
    *a1 = v2 + 1;
    v10 = sub_C1A20(a1);
    if ( !v10 )
      return nullptr;
    v11 = *a1;
    v137 = a1[1];
    v12 = 0;
    if ( *a1 == v137 || *v11 != 69 )
      return (char *)v12;
    v161 = v10;
    v13 = v11 + 1;
    *a1 = v11 + 1;
    if ( v11 + 1 != v137 )
    {
      if ( *v13 == 115 )
      {
        v14 = v11 + 2;
        v15 = a1;
        *a1 = v11 + 2;
        v16 = v137;
        if ( v11 + 2 != v137 )
        {
          v17 = *v14;
          if ( v17 == 95 )
          {
            if ( v11 + 3 != v137 )
            {
              v18 = v11[3];
              if ( (unsigned int)(v18 - 48) <= 9 )
              {
                v16 = v11 + 4;
LABEL_253:
                v15 = a1;
                goto LABEL_254;
              }
              if ( (_BYTE)v18 == 95 && v11 + 4 != v137 )
              {
                v120 = -4 - (_DWORD)v11;
                v121 = v11 + 5;
                v122 = &v137[v120];
                while ( 1 )
                {
                  v123 = *(v121 - 1);
                  if ( (unsigned int)(v123 - 48) > 9 )
                    break;
                  ++v121;
                  if ( !--v122 )
                    goto LABEL_252;
                }
                if ( (_BYTE)v123 == 95 )
                  v14 = v121;
              }
            }
LABEL_252:
            v16 = v14;
            goto LABEL_253;
          }
          if ( (unsigned int)(v17 - 48) > 9 )
            goto LABEL_252;
          v111 = v11 + 3;
          v15 = a1;
          do
          {
            if ( v137 == v111 )
              goto LABEL_254;
            v112 = *v111++ - 48;
            v113 = v112 < 0xA;
            v15 = a1;
          }
          while ( v113 );
          v16 = v14;
        }
LABEL_254:
        *v15 = v16;
        v126 = v15[1116];
        v127 = *((_DWORD *)v126 + 1);
        v128 = v15;
        if ( (unsigned int)(v127 + 16) < 0xFF8 )
        {
          v130 = v126 + 4;
        }
        else
        {
          v129 = operator new[](0x1000u);
          *v129 = v126;
          v129[1] = 0;
          v128[1116] = (char *)v129;
          v127 = 0;
          v130 = v129 + 1;
          v126 = (char *)v129;
        }
        *v130 = v127 + 16;
        v151 = &v126[v127 + 8];
        *(_DWORD *)&v126[v127 + 12] = 16843015;
        *(_DWORD *)v151 = off_139CEC;
        *(_DWORD *)&v126[v127 + 16] = "string literal";
        *(_DWORD *)&v126[v127 + 20] = "";
        v131 = v128[1116];
        v132 = *((_DWORD *)v131 + 1);
        if ( (unsigned int)(v132 + 16) < 0xFF8 )
        {
          v134 = v131 + 4;
        }
        else
        {
          v133 = operator new[](0x1000u);
          *v133 = v131;
          v133[1] = 0;
          v128[1116] = (char *)v133;
          v132 = 0;
          v134 = v133 + 1;
          v131 = (char *)v133;
        }
        *v134 = v132 + 16;
        *(_DWORD *)&v131[v132 + 12] = 16843033;
        *(_DWORD *)&v131[v132 + 8] = off_13A5F4;
        *(_DWORD *)&v131[v132 + 16] = v161;
        *(_DWORD *)&v131[v132 + 20] = v151;
        return &v131[v132 + 8];
      }
      if ( *v13 == 100 )
      {
        v99 = v11 + 2;
        *a1 = v11 + 2;
        if ( v11 + 2 == v137 )
        {
          v100 = v137;
        }
        else
        {
          v100 = v11 + 2;
          if ( *v99 == 110 )
          {
            *a1 = v11 + 3;
            v100 = v11 + 3;
            if ( v11 + 3 != v137 )
              goto LABEL_195;
            goto LABEL_221;
          }
        }
        if ( v99 != v137 )
        {
LABEL_195:
          if ( (unsigned int)(*v100 - 48) <= 9 )
          {
            v101 = v100 + 1;
            do
            {
              v100 = v101;
              *a1 = v101;
              if ( v137 == v101 )
                break;
              ++v101;
            }
            while ( (unsigned int)(*v100 - 48) < 0xA );
          }
          if ( v100 == v137 )
            return nullptr;
          goto LABEL_222;
        }
LABEL_221:
        if ( v100 == v137 )
          return nullptr;
LABEL_222:
        if ( *v100 != 95 )
          return nullptr;
        *a1 = v100 + 1;
        v114 = sub_C49E0(a1, a2);
        v12 = 0;
        if ( !v114 )
          return (char *)v12;
        v103 = v114;
        v21 = a1[1116];
        v22 = *((_DWORD *)v21 + 1);
        if ( (unsigned int)(v22 + 16) >= 0xFF8 )
        {
          v115 = operator new[](0x1000u);
          *v115 = v21;
          v115[1] = 0;
          a1[1116] = (char *)v115;
LABEL_244:
          v22 = 0;
          v125 = v115 + 1;
          v21 = (char *)v115;
LABEL_246:
          *v125 = v22 + 16;
          *(_DWORD *)&v21[v22 + 12] = 16843033;
          *(_DWORD *)&v21[v22 + 8] = off_13A5F4;
          *(_DWORD *)&v21[v22 + 16] = v161;
          *(_DWORD *)&v21[v22 + 20] = v103;
          return &v21[v22 + 8];
        }
        goto LABEL_245;
      }
    }
    v102 = sub_C49E0(a1, a2);
    v12 = 0;
    if ( !v102 )
      return (char *)v12;
    v103 = v102;
    v104 = a1;
    v105 = *a1;
    v106 = a1[1];
    if ( *a1 != v106 )
    {
      v107 = *v105;
      if ( v107 != 95 )
      {
        if ( (unsigned int)(v107 - 48) > 9 )
          goto LABEL_242;
        v109 = v105 + 1;
        while ( v106 != v109 )
        {
          v110 = *v109++ - 48;
          if ( v110 >= 0xA )
            goto LABEL_241;
        }
        v105 = a1[1];
        goto LABEL_241;
      }
      if ( v105 + 1 == v106 )
        goto LABEL_242;
      v108 = v105[1];
      if ( (unsigned int)(v108 - 48) <= 9 )
      {
        v105 += 2;
LABEL_241:
        v104 = a1;
        goto LABEL_242;
      }
      if ( (_BYTE)v108 != 95 || v105 + 2 == v106 )
        goto LABEL_241;
      v117 = v105 + 3;
      v118 = &v106[-2 - (_DWORD)v105];
      while ( 1 )
      {
        v119 = *(v117 - 1);
        if ( (unsigned int)(v119 - 48) > 9 )
          break;
        ++v117;
        if ( !--v118 )
          goto LABEL_249;
      }
      if ( (_BYTE)v119 == 95 )
        v105 = v117;
LABEL_249:
      v104 = a1;
    }
LABEL_242:
    *v104 = v105;
    v21 = v104[1116];
    v22 = *((_DWORD *)v21 + 1);
    if ( (unsigned int)(v22 + 16) >= 0xFF8 )
    {
      v150 = v103;
      v124 = v104;
      v115 = operator new[](0x1000u);
      *v115 = v21;
      v115[1] = 0;
      v124[1116] = (char *)v115;
      v103 = v150;
      goto LABEL_244;
    }
LABEL_245:
    v125 = v21 + 4;
    goto LABEL_246;
  }
  if ( v5 == 83 )
  {
    if ( v4 < 2 || v2[1] != 116 )
    {
      v19 = sub_C61C0(a1);
      v12 = 0;
      if ( !v19 )
        return (char *)v12;
      if ( a1[1] == *a1 )
        return (char *)v12;
      if ( **a1 != 73 )
        return (char *)v12;
      v138 = v19;
      v20 = sub_C6560(a1, a2 != 0);
      v12 = 0;
      if ( !v20 )
        return (char *)v12;
      v162 = v20;
      if ( a2 )
        *(_BYTE *)(a2 + 1) = 1;
      v21 = a1[1116];
      v22 = *((_DWORD *)v21 + 1);
      if ( (unsigned int)(v22 + 16) < 0xFF8 )
      {
        v24 = v21 + 4;
      }
      else
      {
        v23 = operator new[](0x1000u);
        *v23 = v21;
        v23[1] = 0;
        a1[1116] = (char *)v23;
        v22 = 0;
        v24 = v23 + 1;
        v21 = (char *)v23;
      }
      *v24 = v22 + 16;
      *(_DWORD *)&v21[v22 + 12] = 16843040;
      *(_DWORD *)&v21[v22 + 8] = off_13A6D4;
      *(_DWORD *)&v21[v22 + 16] = v138;
      v46 = v162;
      goto LABEL_87;
    }
  }
  else if ( v5 == 78 )
  {
    if ( v2 != v3 )
    {
      v6 = v2 + 1;
      *a1 = v2 + 1;
      v7 = 0;
      if ( v2 + 1 == v3 )
      {
        v6 = v3;
      }
      else
      {
        if ( *v6 == 114 )
        {
          v8 = v2 + 2;
          *a1 = v8;
          v7 = 4;
          v6 = v8;
        }
        if ( v6 != v3 )
        {
          v9 = a1;
          if ( *v6 == 86 )
          {
            *a1 = ++v6;
            v7 |= 2u;
          }
          if ( v6 != v3 && *v6 == 75 )
          {
            *a1 = ++v6;
            v7 |= 1u;
          }
LABEL_60:
          if ( a2 )
            *(_DWORD *)(a2 + 4) = v7;
          v37 = (_BYTE *)a2;
          if ( v6 != v3 )
          {
            if ( *v6 == 79 )
            {
              *v9 = ++v6;
              if ( a2 )
                *(_BYTE *)(a2 + 8) = 2;
LABEL_71:
              v168[0] = 0;
              if ( (unsigned int)(v3 - v6) >= 2 && *v6 == 83 && v6[1] == 116 )
              {
                *v9 = v6 + 2;
                v38 = v9[1116];
                v39 = *((_DWORD *)v38 + 1);
                if ( (unsigned int)(v39 + 16) <= 0xFF7 )
                {
                  v42 = v38 + 4;
                }
                else
                {
                  v40 = v9;
                  v41 = operator new[](0x1000u);
                  *v41 = v38;
                  v41[1] = 0;
                  v40[1116] = (char *)v41;
                  v39 = 0;
                  v42 = v41 + 1;
                  v38 = (char *)v41;
                }
                *v42 = v39 + 16;
                *(_DWORD *)&v38[v39 + 12] = 16843015;
                *(_DWORD *)&v38[v39 + 8] = off_139CEC;
                *(_DWORD *)&v38[v39 + 16] = "std";
                *(_DWORD *)&v38[v39 + 20] = "";
                v168[0] = (int)&v38[v39 + 8];
                v9 = a1;
                v37 = (_BYTE *)a2;
              }
              v164 = v9 + 40;
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
LABEL_95:
                    v47 = *v9;
                    v48 = v9[1];
                    if ( *v9 != v48 )
                    {
                      if ( *v47 == 69 )
                      {
                        *v9 = v47 + 1;
                        v97 = v168[0];
                        v141 = 0;
                        if ( v168[0] )
                        {
                          v98 = v9[38];
                          if ( v9[37] != v98 )
                          {
                            v9[38] = v98 - 4;
                            return (char *)v97;
                          }
                        }
                        return (char *)v141;
                      }
                      if ( *v47 == 76 )
                        *v9 = ++v47;
                    }
                    if ( v47 == v48 || *v47 != 77 )
                      break;
                    *v9 = v47 + 1;
                    if ( !v168[0] )
                      return nullptr;
                  }
                  v49 = v48 - v47;
                  if ( !v49 )
                    break;
                  switch ( *v47 )
                  {
                    case 'C':
                      goto LABEL_154;
                    case 'D':
                      if ( v49 < 2 )
                        goto LABEL_154;
                      if ( ((unsigned __int8)v47[1] | 0x20) == 0x74 )
                      {
                        v50 = (_DWORD *)sub_C6FD0(a1);
                        if ( !v50 )
                          return nullptr;
LABEL_120:
                        v58 = (int)v50;
                        if ( v168[0] )
                        {
                          v144 = v168[0];
                          v63 = a1[1116];
                          v64 = *((_DWORD *)v63 + 1);
                          if ( (unsigned int)(v64 + 16) < 0xFF8 )
                          {
                            v66 = v63 + 4;
                          }
                          else
                          {
                            v65 = operator new[](0x1000u);
                            *v65 = v63;
                            v65[1] = 0;
                            a1[1116] = (char *)v65;
                            v64 = 0;
                            v66 = v65 + 1;
                            v63 = (char *)v65;
                          }
                          *v66 = v64 + 16;
                          *(_DWORD *)&v63[v64 + 12] = 16843032;
                          *(_DWORD *)&v63[v64 + 8] = off_139D5C;
                          *(_DWORD *)&v63[v64 + 16] = v144;
                          *(_DWORD *)&v63[v64 + 20] = v58;
                          v58 = (int)&v63[v64 + 8];
                          v168[0] = v58;
                          v9 = a1;
                          v37 = (_BYTE *)a2;
                          if ( a2 )
LABEL_133:
                            v37[1] = 0;
                        }
                        else
                        {
                          v168[0] = (int)v50;
                          v9 = a1;
                          if ( v37 )
                            goto LABEL_133;
                        }
                        v72 = v9[38];
                        if ( v72 == v9[39] )
                        {
                          v146 = v58;
                          v73 = v9[37];
                          v74 = v72 - v73;
                          v158 = v74 >> 1;
                          if ( v164 == (char **)v73 )
                          {
                            v165 = v9[37];
                            v75 = (char *)malloc(2 * v74);
                            if ( v74 )
                              memmove(v75, v165, v74);
                          }
                          else
                          {
                            v75 = (char *)realloc(v73, 2 * v74);
                          }
                          v9 = a1;
                          a1[37] = v75;
                          v72 = &v75[4 * (v74 >> 2)];
                          a1[38] = v72;
                          a1[39] = &v75[4 * v158];
                          v58 = v146;
                        }
                        goto LABEL_182;
                      }
                      if ( v47[1] == 67 )
                        goto LABEL_148;
LABEL_154:
                      v141 = 0;
                      if ( !v168[0] )
                        return (char *)v141;
                      v82 = sub_C70E0(a1, v168, v37);
                      if ( !v82 )
                        return (char *)v141;
                      v83 = (int)v82;
                      if ( !v168[0] )
                      {
                        v168[0] = (int)v82;
                        v91 = a1;
                        if ( !v37 )
                          goto LABEL_174;
LABEL_173:
                        v37[1] = 0;
                        goto LABEL_174;
                      }
                      v153 = v168[0];
                      v84 = a1[1116];
                      v85 = *((_DWORD *)v84 + 1);
                      if ( (unsigned int)(v85 + 16) < 0xFF8 )
                      {
                        v87 = v84 + 4;
                      }
                      else
                      {
                        v86 = operator new[](0x1000u);
                        *v86 = v84;
                        v86[1] = 0;
                        a1[1116] = (char *)v86;
                        v85 = 0;
                        v87 = v86 + 1;
                        v84 = (char *)v86;
                      }
                      *v87 = v85 + 16;
                      *(_DWORD *)&v84[v85 + 12] = 16843032;
                      *(_DWORD *)&v84[v85 + 8] = off_139D5C;
                      *(_DWORD *)&v84[v85 + 16] = v153;
                      *(_DWORD *)&v84[v85 + 20] = v83;
                      v83 = (int)&v84[v85 + 8];
                      v168[0] = v83;
                      v91 = a1;
                      v37 = (_BYTE *)a2;
                      if ( a2 )
                        goto LABEL_173;
LABEL_174:
                      v92 = sub_C7320(v91, v83);
                      v9 = a1;
                      v168[0] = v92;
                      if ( !v92 )
                        return (char *)v141;
                      v58 = v92;
LABEL_176:
                      v72 = v9[38];
                      if ( v72 == v9[39] )
                      {
                        v93 = v9[37];
                        v94 = v72 - v93;
                        v148 = v94 >> 2;
                        v155 = v94 >> 1;
                        if ( v164 == (char **)v93 )
                        {
                          v160 = v9[37];
                          v95 = (char *)malloc(2 * v94);
                          if ( v94 )
                          {
                            v135 = v94;
                            v96 = v95;
                            memmove(v95, v160, v135);
                            v95 = v96;
                          }
                        }
                        else
                        {
                          v95 = (char *)realloc(v93, 2 * v94);
                        }
                        v9 = a1;
                        a1[37] = v95;
                        v72 = &v95[4 * v148];
                        a1[38] = v72;
                        a1[39] = &v95[4 * v155];
                      }
LABEL_182:
                      v9[38] = v72 + 4;
                      *(_DWORD *)v72 = v58;
                      v37 = (_BYTE *)a2;
                      break;
                    case 'I':
                      v51 = sub_C6560(a1, v37 != nullptr);
                      v141 = 0;
                      if ( !v51 )
                        return (char *)v141;
                      v52 = v168[0];
                      if ( !v168[0] )
                        return (char *)v141;
                      v142 = v51;
                      v53 = a1[1116];
                      v54 = *((_DWORD *)v53 + 1);
                      if ( (unsigned int)(v54 + 16) < 0xFF8 )
                      {
                        v56 = v53 + 4;
                      }
                      else
                      {
                        v55 = operator new[](0x1000u);
                        *v55 = v53;
                        v55[1] = 0;
                        a1[1116] = (char *)v55;
                        v54 = 0;
                        v56 = v55 + 1;
                        v53 = (char *)v55;
                      }
                      *v56 = v54 + 16;
                      *(_DWORD *)&v53[v54 + 12] = 16843040;
                      *(_DWORD *)&v53[v54 + 8] = off_13A6D4;
                      *(_DWORD *)&v53[v54 + 16] = v52;
                      *(_DWORD *)&v53[v54 + 20] = v142;
                      v67 = (int)&v53[v54 + 8];
                      v168[0] = v67;
                      if ( a2 )
                        *(_BYTE *)(a2 + 1) = 1;
                      v9 = a1;
                      v68 = a1[38];
                      if ( v68 != a1[39] )
                        goto LABEL_94;
                      v145 = v67;
                      v69 = a1[37];
                      v70 = v68 - v69;
                      v157 = v70 >> 1;
                      if ( v164 == (char **)v69 )
                      {
                        v167 = a1[37];
                        v71 = (char *)malloc(2 * v70);
                        if ( v70 )
                          memmove(v71, v167, v70);
                      }
                      else
                      {
                        v71 = (char *)realloc(v69, 2 * v70);
                      }
                      v67 = v145;
                      v9 = a1;
                      a1[37] = v71;
                      v68 = &v71[4 * (v70 >> 2)];
                      a1[38] = v68;
                      v90 = v157;
                      goto LABEL_168;
                    case 'S':
                      if ( v49 >= 2 && v47[1] == 116 )
                        goto LABEL_148;
                      v57 = sub_C61C0(a1);
                      if ( !v57 )
                        return nullptr;
                      v58 = v57;
                      if ( !v168[0] )
                      {
                        v168[0] = v57;
                        v9 = a1;
                        if ( !v37 )
                          goto LABEL_142;
LABEL_141:
                        v37[1] = 0;
                        goto LABEL_142;
                      }
                      v143 = v168[0];
                      v59 = a1[1116];
                      v60 = *((_DWORD *)v59 + 1);
                      if ( (unsigned int)(v60 + 16) < 0xFF8 )
                      {
                        v62 = v59 + 4;
                      }
                      else
                      {
                        v61 = operator new[](0x1000u);
                        *v61 = v59;
                        v61[1] = 0;
                        a1[1116] = (char *)v61;
                        v60 = 0;
                        v62 = v61 + 1;
                        v59 = (char *)v61;
                      }
                      *v62 = v60 + 16;
                      *(_DWORD *)&v59[v60 + 12] = 16843032;
                      *(_DWORD *)&v59[v60 + 8] = off_139D5C;
                      *(_DWORD *)&v59[v60 + 16] = v143;
                      *(_DWORD *)&v59[v60 + 20] = v58;
                      v57 = (int)&v59[v60 + 8];
                      v168[0] = v57;
                      v9 = a1;
                      v37 = (_BYTE *)a2;
                      if ( a2 )
                        goto LABEL_141;
LABEL_142:
                      if ( v57 != v58 )
                        goto LABEL_176;
                      goto LABEL_95;
                    case 'T':
                      v50 = sub_C6CF0((int)a1);
                      if ( !v50 )
                        return nullptr;
                      goto LABEL_120;
                    default:
                      goto LABEL_148;
                  }
                }
LABEL_148:
                v76 = sub_C74F0((int)a1, v37);
                if ( !v76 )
                  return nullptr;
                v77 = v76;
                if ( v168[0] )
                {
                  v147 = v168[0];
                  v78 = a1[1116];
                  v79 = *((_DWORD *)v78 + 1);
                  if ( (unsigned int)(v79 + 16) < 0xFF8 )
                  {
                    v81 = v78 + 4;
                  }
                  else
                  {
                    v80 = operator new[](0x1000u);
                    *v80 = v78;
                    v80[1] = 0;
                    a1[1116] = (char *)v80;
                    v79 = 0;
                    v81 = v80 + 1;
                    v78 = (char *)v80;
                  }
                  *v81 = v79 + 16;
                  *(_DWORD *)&v78[v79 + 12] = 16843032;
                  *(_DWORD *)&v78[v79 + 8] = off_139D5C;
                  *(_DWORD *)&v78[v79 + 16] = v147;
                  *(_DWORD *)&v78[v79 + 20] = v77;
                  v67 = (int)&v78[v79 + 8];
                  v168[0] = v67;
                  v9 = a1;
                  v37 = (_BYTE *)a2;
                  if ( a2 )
LABEL_161:
                    v37[1] = 0;
                }
                else
                {
                  v168[0] = v76;
                  v67 = v76;
                  v9 = a1;
                  if ( v37 )
                    goto LABEL_161;
                }
                v68 = v9[38];
                if ( v68 == v9[39] )
                {
                  v159 = v67;
                  v88 = v9[37];
                  v89 = v68 - v88;
                  v154 = v89 >> 1;
                  if ( v164 == (char **)v88 )
                  {
                    v166 = v9[37];
                    v71 = (char *)malloc(2 * v89);
                    if ( v89 )
                      memmove(v71, v166, v89);
                  }
                  else
                  {
                    v71 = (char *)realloc(v88, 2 * v89);
                  }
                  v67 = v159;
                  v9 = a1;
                  a1[37] = v71;
                  v68 = &v71[4 * (v89 >> 2)];
                  a1[38] = v68;
                  v90 = v154;
LABEL_168:
                  v9[39] = &v71[4 * v90];
                }
LABEL_94:
                v9[38] = v68 + 4;
                *(_DWORD *)v68 = v67;
                v37 = (_BYTE *)a2;
              }
            }
            if ( *v6 == 82 )
            {
              *v9 = ++v6;
              if ( a2 )
                *(_BYTE *)(a2 + 8) = 1;
              goto LABEL_71;
            }
          }
          if ( a2 )
            *(_BYTE *)(a2 + 8) = 0;
          goto LABEL_71;
        }
      }
      v9 = a1;
      goto LABEL_60;
    }
    return nullptr;
  }
  if ( v4 < 3 )
  {
    if ( v4 != 2 )
      goto LABEL_50;
LABEL_45:
    if ( *v2 != 83 )
      goto LABEL_50;
    v25 = 2;
    if ( v2[1] != 116 )
      goto LABEL_50;
    goto LABEL_47;
  }
  if ( *v2 != 83 )
  {
LABEL_50:
    v31 = sub_C74F0((int)a1, (_BYTE *)a2);
    goto LABEL_51;
  }
  if ( v2[1] != 116 )
    goto LABEL_45;
  v25 = 3;
  if ( v2[2] != 76 )
    goto LABEL_45;
LABEL_47:
  *a1 = &v2[v25];
  v26 = sub_C74F0((int)a1, (_BYTE *)a2);
  if ( !v26 )
    return nullptr;
  v139 = v26;
  v27 = a1[1116];
  v28 = *((_DWORD *)v27 + 1);
  if ( (unsigned int)(v28 + 16) < 0xFF8 )
  {
    v30 = v27 + 4;
  }
  else
  {
    v29 = operator new[](0x1000u);
    *v29 = v27;
    v29[1] = 0;
    a1[1116] = (char *)v29;
    v28 = 0;
    v30 = v29 + 1;
    v27 = (char *)v29;
  }
  *v30 = v28 + 16;
  *(_DWORD *)&v27[v28 + 12] = 16843042;
  *(_DWORD *)&v27[v28 + 8] = off_13A70C;
  *(_DWORD *)&v27[v28 + 16] = v139;
  v31 = (int)&v27[v28 + 8];
LABEL_51:
  v12 = 0;
  if ( v31 )
  {
    v32 = a1;
    if ( a1[1] == *a1 || **a1 != 73 )
      return (char *)v31;
    v33 = a1[38];
    if ( v33 == a1[39] )
    {
      v34 = a1[37];
      v35 = v33 - v34;
      v163 = v35 >> 1;
      if ( a1 + 40 == (char **)v34 )
      {
        v156 = a1[37];
        v152 = malloc(2 * v35);
        if ( v35 )
          memmove(v152, v156, v35);
        v32 = a1;
        v36 = (char *)v152;
        a1[37] = (char *)v152;
      }
      else
      {
        v36 = (char *)realloc(v34, 2 * v35);
        a1[37] = v36;
        v32 = a1;
      }
      v33 = &v36[4 * (v35 >> 2)];
      v32[38] = v33;
      v32[39] = &v36[4 * v163];
    }
    v32[38] = v33 + 4;
    *(_DWORD *)v33 = v31;
    v43 = sub_C6560(v32, a2 != 0);
    v12 = 0;
    if ( v43 )
    {
      v140 = v43;
      if ( a2 )
        *(_BYTE *)(a2 + 1) = 1;
      v21 = a1[1116];
      v22 = *((_DWORD *)v21 + 1);
      if ( (unsigned int)(v22 + 16) < 0xFF8 )
      {
        v45 = v21 + 4;
      }
      else
      {
        v44 = operator new[](0x1000u);
        *v44 = v21;
        v44[1] = 0;
        a1[1116] = (char *)v44;
        v22 = 0;
        v45 = v44 + 1;
        v21 = (char *)v44;
      }
      *v45 = v22 + 16;
      *(_DWORD *)&v21[v22 + 12] = 16843040;
      *(_DWORD *)&v21[v22 + 8] = off_13A6D4;
      *(_DWORD *)&v21[v22 + 16] = v31;
      v46 = v140;
LABEL_87:
      *(_DWORD *)&v21[v22 + 20] = v46;
      return &v21[v22 + 8];
    }
  }
  return (char *)v12;
}
// 139CEC: using guessed type int (*off_139CEC[3])();
// 139D5C: using guessed type int (*off_139D5C[3])();
// 13A5F4: using guessed type int (*off_13A5F4[3])();
// 13A6D4: using guessed type int (*off_13A6D4[3])();
// 13A70C: using guessed type int (*off_13A70C[3])();
