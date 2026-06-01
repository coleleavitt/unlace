/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1A20
// Address: 0x000C1A20

//----- (000C1A20) --------------------------------------------------------
char *__fastcall sub_C1A20(char **a1)
{
  char *v1; // edi
  char *v2; // ecx
  unsigned int v3; // edx
  int v4; // eax
  char *v5; // esi
  char *v6; // eax
  int v7; // ecx
  char *v8; // edx
  char *v9; // eax
  char *v10; // ecx
  char *v11; // ecx
  char **v12; // edi
  unsigned int v13; // esi
  char *v14; // ecx
  char *v15; // eax
  unsigned int v16; // edx
  char *v17; // esi
  unsigned int v18; // edi
  unsigned int v19; // eax
  int v20; // ebx
  unsigned int v21; // ecx
  char **v22; // edi
  char *v23; // eax
  char *v24; // ecx
  unsigned int v25; // esi
  char v26; // dl
  int v27; // eax
  char *v28; // eax
  char *v29; // esi
  int v30; // ecx
  _DWORD *v31; // eax
  _DWORD *v32; // edx
  bool v33; // al
  int v34; // eax
  char *v35; // edi
  _DWORD *v36; // edx
  int v37; // ecx
  unsigned int v38; // eax
  _DWORD *v39; // eax
  char *v40; // eax
  bool v41; // cf
  int v42; // esi
  char *v43; // eax
  char *v44; // edi
  char *v45; // esi
  signed int v46; // edi
  char **v47; // edi
  char *v48; // eax
  char *v49; // eax
  char *v50; // ecx
  char v51; // dl
  char v52; // dl
  _DWORD *v53; // eax
  char *v54; // eax
  _DWORD *v55; // eax
  _DWORD *v56; // edx
  char *v57; // eax
  _DWORD *v58; // eax
  _DWORD *v59; // edx
  char *v60; // eax
  _DWORD *v61; // eax
  _DWORD *v62; // edx
  char *v63; // eax
  _DWORD *v64; // eax
  _DWORD *v65; // edx
  char *v66; // eax
  _DWORD *v67; // eax
  _DWORD *v68; // edx
  char *v69; // eax
  _DWORD *v70; // eax
  _DWORD *v71; // edx
  int v72; // eax
  _DWORD *v73; // eax
  _DWORD *v74; // edx
  char *v75; // eax
  char *v76; // eax
  _DWORD *v77; // eax
  _DWORD *v78; // edx
  char *v79; // esi
  _DWORD *v80; // eax
  _DWORD *v81; // edx
  unsigned int v82; // edi
  char *v83; // esi
  int v84; // ecx
  _DWORD *v85; // eax
  char *v86; // edi
  _DWORD *v87; // edx
  _DWORD *v88; // eax
  char *v89; // esi
  int v90; // ecx
  _DWORD *v91; // eax
  _DWORD *v92; // edx
  char *v93; // eax
  _DWORD *v94; // eax
  _DWORD *v95; // edx
  char *v96; // eax
  char **v97; // ecx
  char *v98; // edi
  char *v99; // esi
  char *v100; // ecx
  int v101; // esi
  char *v102; // edx
  char *v103; // esi
  char v104; // al
  char *v105; // edx
  unsigned int v106; // edi
  char *v107; // esi
  int v108; // ecx
  _DWORD *v109; // eax
  char *v110; // eax
  _DWORD *v111; // edx
  char v112; // al
  int v113; // edx
  int v114; // edx
  char *v115; // ecx
  _DWORD *v116; // eax
  _DWORD *v117; // edx
  size_t v119; // [esp+8h] [ebp-54h]
  char *v120; // [esp+10h] [ebp-4Ch]
  char *v121; // [esp+10h] [ebp-4Ch]
  char *v122; // [esp+10h] [ebp-4Ch]
  bool v123; // [esp+10h] [ebp-4Ch]
  char *v124; // [esp+10h] [ebp-4Ch]
  signed int v125; // [esp+10h] [ebp-4Ch]
  int v126; // [esp+10h] [ebp-4Ch]
  int v127; // [esp+10h] [ebp-4Ch]
  size_t v128; // [esp+10h] [ebp-4Ch]
  int v129; // [esp+10h] [ebp-4Ch]
  char *v131; // [esp+14h] [ebp-48h]
  unsigned int v132; // [esp+1Ch] [ebp-40h]
  int v133; // [esp+1Ch] [ebp-40h]
  char *v134; // [esp+1Ch] [ebp-40h]
  char *v135; // [esp+1Ch] [ebp-40h]
  int v136; // [esp+1Ch] [ebp-40h]
  char *v137; // [esp+1Ch] [ebp-40h]
  char **v138; // [esp+20h] [ebp-3Ch]
  char *v139; // [esp+20h] [ebp-3Ch]
  char *v140; // [esp+20h] [ebp-3Ch]
  char *v141; // [esp+24h] [ebp-38h]
  int v142; // [esp+28h] [ebp-34h]
  int v143; // [esp+28h] [ebp-34h]
  char *v144; // [esp+28h] [ebp-34h]
  int v145; // [esp+2Ch] [ebp-30h]
  int v146; // [esp+2Ch] [ebp-30h]
  int v147; // [esp+30h] [ebp-2Ch]
  int v148; // [esp+30h] [ebp-2Ch]
  char *v149; // [esp+34h] [ebp-28h]
  __int16 v150; // [esp+38h] [ebp-24h] BYREF
  int v151; // [esp+3Ch] [ebp-20h]
  char v152; // [esp+40h] [ebp-1Ch]
  unsigned int v153; // [esp+44h] [ebp-18h]

  v1 = *a1;
  v2 = a1[1];
  v3 = v2 - v1;
  if ( v2 == v1 || (v4 = *v1, v4 != 84) && (_BYTE)v4 != 71 )
  {
    v150 = 0;
    v151 = 0;
    v152 = 0;
    v153 = (a1[84] - a1[83]) >> 2;
    v15 = sub_C49E0(a1, (int)&v150);
    v7 = 0;
    if ( !v15 )
      return (char *)v7;
    v141 = v15;
    v121 = a1[83];
    v16 = (a1[84] - v121) >> 2;
    v132 = v153;
    if ( v153 < v16 )
    {
      v17 = a1[72];
      v18 = (a1[73] - v17) >> 2;
      v19 = v153;
      do
      {
        v20 = *(_DWORD *)&v121[4 * v19];
        v21 = *(_DWORD *)(v20 + 8);
        if ( v21 >= v18 )
          return nullptr;
        *(_DWORD *)(v20 + 12) = *(_DWORD *)&v17[4 * v21];
      }
      while ( ++v19 < v16 );
    }
    v22 = a1;
    a1[84] = &v121[4 * v132];
    v23 = *a1;
    v24 = a1[1];
    v25 = v24 - *a1;
    if ( !v25 )
      return v141;
    v26 = *v23;
    if ( *v23 == 46 || v26 == 69 || v26 == 95 )
      return v141;
    v149 = nullptr;
    v41 = v25 < 0xD;
    v42 = 0;
    if ( v41
      || (v42 = 0, v26 != 85)
      || (v42 = 0, v23[1] != 97)
      || (v42 = 0, v23[2] != 57)
      || (v42 = 0, v23[3] != 101)
      || (v42 = 0, v23[4] != 110)
      || (v42 = 0, v23[5] != 97)
      || (v42 = 0, v23[6] != 98)
      || (v42 = 0, v23[7] != 108)
      || (v42 = 0, v23[8] != 101)
      || (v42 = 0, v23[9] != 95)
      || (v42 = 0, v23[10] != 105)
      || (v42 = 0, v23[11] != 102)
      || (v42 = 0, v23[12] != 73) )
    {
LABEL_160:
      v148 = v42;
      if ( !(_BYTE)v150 )
      {
        if ( HIBYTE(v150) )
        {
          v149 = sub_C2AF0(v22);
          if ( !v149 )
            return nullptr;
        }
      }
      v93 = *v22;
      if ( *v22 != v22[1] && *v93 == 118 )
      {
        *v22 = v93 + 1;
        v29 = v22[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 48) < 0xFF8 )
        {
          v95 = v29 + 4;
        }
        else
        {
          v94 = operator new[](0x1000u);
          *v94 = v29;
          v94[1] = 0;
          v22[1116] = (char *)v94;
          v30 = 0;
          v95 = v94 + 1;
          v29 = (char *)v94;
        }
        *v95 = v30 + 48;
        v112 = v152;
        v113 = v151;
        *(_DWORD *)&v29[v30 + 12] = 65555;
        *(_DWORD *)&v29[v30 + 8] = off_13A7B4;
        *(_DWORD *)&v29[v30 + 16] = v149;
        *(_DWORD *)&v29[v30 + 20] = v141;
        *(_DWORD *)&v29[v30 + 24] = 0;
        *(_DWORD *)&v29[v30 + 28] = 0;
LABEL_193:
        *(_DWORD *)&v29[v30 + 32] = v148;
        *(_DWORD *)&v29[v30 + 36] = v113;
        v29[v30 + 40] = v112;
        return &v29[v30 + 8];
      }
      v145 = (v22[3] - v22[2]) >> 2;
      v138 = v22 + 5;
      do
      {
        v96 = sub_C2AF0(v22);
        if ( !v96 )
          return nullptr;
        v97 = v22;
        v98 = v96;
        v99 = v97[3];
        if ( v99 == v97[4] )
        {
          v100 = v97[2];
          v101 = v99 - v100;
          v127 = v101 >> 2;
          v136 = v101 >> 1;
          if ( v138 == (char **)v100 )
          {
            v144 = v100;
            v102 = (char *)malloc(2 * v101);
            if ( v101 )
            {
              v119 = v101;
              v103 = v102;
              memmove(v102, v144, v119);
              v102 = v103;
            }
          }
          else
          {
            v102 = (char *)realloc(v100, 2 * v101);
          }
          v97 = a1;
          a1[2] = v102;
          v99 = &v102[4 * v127];
          a1[3] = v99;
          a1[4] = &v102[4 * v136];
        }
        v97[3] = v99 + 4;
        *(_DWORD *)v99 = v98;
        v22 = v97;
        if ( v97[1] == *v97 )
          break;
        v104 = **v97;
        if ( v104 == 46 )
          break;
      }
      while ( v104 != 95 && v104 != 69 );
      v146 = 4 * v145;
      v105 = &v97[2][v146];
      v128 = v97[3] - v105;
      v106 = (v128 + 15) & 0xFFFFFFF0;
      v107 = v97[1116];
      v108 = *((_DWORD *)v107 + 1);
      v137 = v105;
      if ( v106 + v108 < 0xFF8 )
      {
        v111 = v107 + 4;
      }
      else
      {
        v139 = v107;
        if ( v106 >= 0xFF9 )
        {
          v109 = operator new[](v106 | 8);
          *v109 = *(_DWORD *)v107;
          v109[1] = 0;
          *(_DWORD *)v107 = v109;
          v110 = (char *)(v109 + 2);
LABEL_187:
          v114 = v128;
          v115 = v137;
          v140 = v110;
          if ( v128 )
          {
            memmove(v110, v137, v128);
            v114 = v128;
            v115 = &a1[2][v146];
          }
          v129 = v114 >> 2;
          a1[3] = v115;
          v29 = a1[1116];
          v30 = *((_DWORD *)v29 + 1);
          if ( (unsigned int)(v30 + 48) < 0xFF8 )
          {
            v117 = v29 + 4;
          }
          else
          {
            v116 = operator new[](0x1000u);
            *v116 = v29;
            v116[1] = 0;
            a1[1116] = (char *)v116;
            v30 = 0;
            v117 = v116 + 1;
            v29 = (char *)v116;
          }
          *v117 = v30 + 48;
          v112 = v152;
          v113 = v151;
          *(_DWORD *)&v29[v30 + 12] = 65555;
          *(_DWORD *)&v29[v30 + 8] = off_13A7B4;
          *(_DWORD *)&v29[v30 + 16] = v149;
          *(_DWORD *)&v29[v30 + 20] = v141;
          *(_DWORD *)&v29[v30 + 24] = v140;
          *(_DWORD *)&v29[v30 + 28] = v129;
          goto LABEL_193;
        }
        v107 = (char *)operator new[](0x1000u);
        *(_DWORD *)v107 = v139;
        *((_DWORD *)v107 + 1) = 0;
        a1[1116] = v107;
        v108 = 0;
        v111 = v107 + 4;
      }
      *v111 = v108 + v106;
      v110 = &v107[v108 + 8];
      goto LABEL_187;
    }
    v43 = v23 + 13;
    *a1 = v43;
    v142 = (a1[3] - a1[2]) >> 2;
    if ( v43 == v24 )
      goto LABEL_60;
LABEL_57:
    if ( *v43 != 69 )
    {
LABEL_60:
      while ( 1 )
      {
        v124 = sub_C5A80(a1);
        if ( !v124 )
          return nullptr;
        v44 = a1[3];
        if ( v44 == a1[4] )
        {
          v45 = a1[2];
          v46 = v44 - v45;
          v147 = v46 >> 1;
          if ( a1 + 5 == (char **)v45 )
          {
            v134 = (char *)malloc(2 * v46);
            if ( v46 )
              memmove(v134, v45, v46);
          }
          else
          {
            v134 = (char *)realloc(v45, 2 * v46);
          }
          a1[2] = v134;
          v44 = &v134[4 * (v46 >> 2)];
          a1[3] = v44;
          a1[4] = &v134[4 * v147];
        }
        a1[3] = v44 + 4;
        *(_DWORD *)v44 = v124;
        v43 = *a1;
        if ( *a1 != a1[1] )
          goto LABEL_57;
      }
    }
    *a1 = v43 + 1;
    v143 = 4 * v142;
    v135 = &a1[2][v143];
    v125 = a1[3] - v135;
    v82 = (v125 + 15) & 0xFFFFFFF0;
    v83 = a1[1116];
    v84 = *((_DWORD *)v83 + 1);
    if ( v82 + v84 < 0xFF8 )
    {
      v87 = v83 + 4;
    }
    else
    {
      if ( v82 >= 0xFF9 )
      {
        v85 = operator new[](v82 | 8);
        *v85 = *(_DWORD *)v83;
        v85[1] = 0;
        *(_DWORD *)v83 = v85;
        v86 = (char *)(v85 + 2);
        if ( !v125 )
          goto LABEL_156;
        goto LABEL_155;
      }
      v88 = operator new[](0x1000u);
      *v88 = v83;
      v88[1] = 0;
      a1[1116] = (char *)v88;
      v84 = 0;
      v87 = v88 + 1;
      v83 = (char *)v88;
    }
    *v87 = v84 + v82;
    v86 = &v83[v84 + 8];
    if ( !v125 )
    {
LABEL_156:
      v126 = v125 >> 2;
      a1[3] = v135;
      v89 = a1[1116];
      v90 = *((_DWORD *)v89 + 1);
      if ( (unsigned int)(v90 + 16) < 0xFF8 )
      {
        v92 = v89 + 4;
      }
      else
      {
        v91 = operator new[](0x1000u);
        *v91 = v89;
        v91[1] = 0;
        a1[1116] = (char *)v91;
        v90 = 0;
        v92 = v91 + 1;
        v89 = (char *)v91;
      }
      *v92 = v90 + 16;
      *(_DWORD *)&v89[v90 + 12] = 16843017;
      *(_DWORD *)&v89[v90 + 8] = (char *)&qword_13ACD8 - 1372;
      *(_DWORD *)&v89[v90 + 16] = v86;
      *(_DWORD *)&v89[v90 + 20] = v126;
      v42 = (int)&v89[v90 + 8];
      v22 = a1;
      goto LABEL_160;
    }
LABEL_155:
    memmove(v86, v135, v125);
    v135 = &a1[2][v143];
    goto LABEL_156;
  }
  if ( v4 == 71 )
  {
    if ( v3 < 2 )
      return nullptr;
    v27 = v1[1];
    v7 = 0;
    if ( v27 != 82 )
    {
      if ( v27 != 86 )
        return (char *)v7;
      *a1 = v1 + 2;
      v28 = sub_C49E0(a1, 0);
      v7 = 0;
      if ( !v28 )
        return (char *)v7;
      v122 = v28;
      v29 = a1[1116];
      v30 = *((_DWORD *)v29 + 1);
      if ( (unsigned int)(v30 + 32) < 0xFF8 )
      {
        v32 = v29 + 4;
      }
      else
      {
        v31 = operator new[](0x1000u);
        *v31 = v29;
        v31[1] = 0;
        a1[1116] = (char *)v31;
        v30 = 0;
        v32 = v31 + 1;
        v29 = (char *)v31;
      }
      *v32 = v30 + 32;
      *(_DWORD *)&v29[v30 + 12] = 16843029;
      *(_DWORD *)&v29[v30 + 8] = off_139C74;
      *(_DWORD *)&v29[v30 + 16] = "guard variable for ";
      v75 = "";
LABEL_140:
      *(_DWORD *)&v29[v30 + 20] = v75;
      *(_DWORD *)&v29[v30 + 24] = v122;
      return &v29[v30 + 8];
    }
    *a1 = v1 + 2;
    v47 = a1;
    v48 = sub_C49E0(a1, 0);
    if ( !v48 )
      return nullptr;
    v122 = v48;
    v49 = *a1;
    v50 = a1[1];
    v51 = 1;
    if ( v50 != *a1 )
    {
      v52 = *v49;
      if ( *v49 < 48 || v52 >= 58 && (unsigned __int8)(v52 - 65) > 0x19u )
      {
        v51 = 1;
        if ( v49 == v50 )
          goto LABEL_135;
        goto LABEL_133;
      }
      v79 = v49 + 1;
      while ( 1 )
      {
        v49 = v79;
        if ( v52 >= 58 && (unsigned __int8)(v52 - 65) > 0x19u )
          break;
        *a1 = v79;
        if ( v50 != v79 )
        {
          v52 = *v79++;
          if ( v52 > 47 )
            continue;
        }
        goto LABEL_131;
      }
      v49 = v79 - 1;
LABEL_131:
      v51 = 0;
      v47 = a1;
    }
    if ( v49 == v50 )
      goto LABEL_135;
LABEL_133:
    if ( *v49 == 95 )
    {
      *v47 = v49 + 1;
LABEL_136:
      v29 = v47[1116];
      v30 = *((_DWORD *)v29 + 1);
      if ( (unsigned int)(v30 + 32) < 0xFF8 )
      {
        v81 = v29 + 4;
      }
      else
      {
        v80 = operator new[](0x1000u);
        *v80 = v29;
        v80[1] = 0;
        v47[1116] = (char *)v80;
        v30 = 0;
        v81 = v80 + 1;
        v29 = (char *)v80;
      }
      *v81 = v30 + 32;
      *(_DWORD *)&v29[v30 + 12] = 16843029;
      *(_DWORD *)&v29[v30 + 8] = off_139C74;
      *(_DWORD *)&v29[v30 + 16] = "reference temporary for ";
      v75 = "";
      goto LABEL_140;
    }
LABEL_135:
    v7 = 0;
    if ( !v51 )
      return (char *)v7;
    goto LABEL_136;
  }
  v5 = v1 + 1;
  if ( v3 >= 2 )
  {
    switch ( *v5 )
    {
      case 'C':
        *a1 = v1 + 2;
        v6 = sub_C2AF0(a1);
        v7 = 0;
        if ( !v6 )
          return (char *)v7;
        v120 = v6;
        v8 = *a1;
        v9 = a1[1];
        if ( *a1 == v9 )
        {
          v10 = *a1;
        }
        else
        {
          v10 = *a1;
          if ( *v8 == 110 )
          {
            v10 = v8 + 1;
            *a1 = v8 + 1;
            if ( v8 + 1 == v9 )
              return nullptr;
            goto LABEL_11;
          }
        }
        if ( v10 == v9 )
          return nullptr;
LABEL_11:
        if ( (unsigned int)(*v10 - 48) > 9 )
          return nullptr;
        v11 = v10 + 1;
        v12 = a1;
        break;
      case 'H':
        *a1 = v1 + 2;
        v54 = sub_C49E0(a1, 0);
        v7 = 0;
        if ( !v54 )
          return (char *)v7;
        v122 = v54;
        v29 = a1[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 32) < 0xFF8 )
        {
          v56 = v29 + 4;
        }
        else
        {
          v55 = operator new[](0x1000u);
          *v55 = v29;
          v55[1] = 0;
          a1[1116] = (char *)v55;
          v30 = 0;
          v56 = v55 + 1;
          v29 = (char *)v55;
        }
        *v56 = v30 + 32;
        *(_DWORD *)&v29[v30 + 12] = 16843029;
        *(_DWORD *)&v29[v30 + 8] = off_139C74;
        *(_DWORD *)&v29[v30 + 16] = "thread-local initialization routine for ";
        v75 = "";
        goto LABEL_140;
      case 'I':
        *a1 = v1 + 2;
        v57 = sub_C2AF0(a1);
        v7 = 0;
        if ( !v57 )
          return (char *)v7;
        v122 = v57;
        v29 = a1[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 32) < 0xFF8 )
        {
          v59 = v29 + 4;
        }
        else
        {
          v58 = operator new[](0x1000u);
          *v58 = v29;
          v58[1] = 0;
          a1[1116] = (char *)v58;
          v30 = 0;
          v59 = v58 + 1;
          v29 = (char *)v58;
        }
        *v59 = v30 + 32;
        *(_DWORD *)&v29[v30 + 12] = 16843029;
        *(_DWORD *)&v29[v30 + 8] = off_139C74;
        *(_DWORD *)&v29[v30 + 16] = "typeinfo for ";
        v75 = "";
        goto LABEL_140;
      case 'S':
        *a1 = v1 + 2;
        v60 = sub_C2AF0(a1);
        v7 = 0;
        if ( !v60 )
          return (char *)v7;
        v122 = v60;
        v29 = a1[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 32) < 0xFF8 )
        {
          v62 = v29 + 4;
        }
        else
        {
          v61 = operator new[](0x1000u);
          *v61 = v29;
          v61[1] = 0;
          a1[1116] = (char *)v61;
          v30 = 0;
          v62 = v61 + 1;
          v29 = (char *)v61;
        }
        *v62 = v30 + 32;
        *(_DWORD *)&v29[v30 + 12] = 16843029;
        *(_DWORD *)&v29[v30 + 8] = off_139C74;
        *(_DWORD *)&v29[v30 + 16] = "typeinfo name for ";
        v75 = "";
        goto LABEL_140;
      case 'T':
        *a1 = v1 + 2;
        v63 = sub_C2AF0(a1);
        v7 = 0;
        if ( !v63 )
          return (char *)v7;
        v122 = v63;
        v29 = a1[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 32) < 0xFF8 )
        {
          v65 = v29 + 4;
        }
        else
        {
          v64 = operator new[](0x1000u);
          *v64 = v29;
          v64[1] = 0;
          a1[1116] = (char *)v64;
          v30 = 0;
          v65 = v64 + 1;
          v29 = (char *)v64;
        }
        *v65 = v30 + 32;
        *(_DWORD *)&v29[v30 + 12] = 16843029;
        *(_DWORD *)&v29[v30 + 8] = off_139C74;
        *(_DWORD *)&v29[v30 + 16] = "VTT for ";
        v75 = "";
        goto LABEL_140;
      case 'V':
        *a1 = v1 + 2;
        v66 = sub_C2AF0(a1);
        v7 = 0;
        if ( !v66 )
          return (char *)v7;
        v122 = v66;
        v29 = a1[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 32) < 0xFF8 )
        {
          v68 = v29 + 4;
        }
        else
        {
          v67 = operator new[](0x1000u);
          *v67 = v29;
          v67[1] = 0;
          a1[1116] = (char *)v67;
          v30 = 0;
          v68 = v67 + 1;
          v29 = (char *)v67;
        }
        *v68 = v30 + 32;
        *(_DWORD *)&v29[v30 + 12] = 16843029;
        *(_DWORD *)&v29[v30 + 8] = off_139C74;
        *(_DWORD *)&v29[v30 + 16] = "vtable for ";
        v75 = "";
        goto LABEL_140;
      case 'W':
        *a1 = v1 + 2;
        v69 = sub_C49E0(a1, 0);
        v7 = 0;
        if ( !v69 )
          return (char *)v7;
        v122 = v69;
        v29 = a1[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 32) < 0xFF8 )
        {
          v71 = v29 + 4;
        }
        else
        {
          v70 = operator new[](0x1000u);
          *v70 = v29;
          v70[1] = 0;
          a1[1116] = (char *)v70;
          v30 = 0;
          v71 = v70 + 1;
          v29 = (char *)v70;
        }
        *v71 = v30 + 32;
        *(_DWORD *)&v29[v30 + 12] = 16843029;
        *(_DWORD *)&v29[v30 + 8] = off_139C74;
        *(_DWORD *)&v29[v30 + 16] = "thread-local wrapper routine for ";
        v75 = "";
        goto LABEL_140;
      case 'c':
        *a1 = v1 + 2;
        if ( sub_C5D80(a1) )
          return nullptr;
        if ( sub_C5D80(a1) )
          return nullptr;
        v72 = sub_C1A20(a1);
        v7 = 0;
        if ( !v72 )
          return (char *)v7;
        v122 = (char *)v72;
        v29 = a1[1116];
        v30 = *((_DWORD *)v29 + 1);
        if ( (unsigned int)(v30 + 32) < 0xFF8 )
        {
          v74 = v29 + 4;
        }
        else
        {
          v73 = operator new[](0x1000u);
          *v73 = v29;
          v73[1] = 0;
          a1[1116] = (char *)v73;
          v30 = 0;
          v74 = v73 + 1;
          v29 = (char *)v73;
        }
        *v74 = v30 + 32;
        *(_DWORD *)&v29[v30 + 12] = 16843029;
        *(_DWORD *)&v29[v30 + 8] = off_139C74;
        *(_DWORD *)&v29[v30 + 16] = "covariant return thunk to ";
        v75 = "";
        goto LABEL_140;
      default:
        goto LABEL_33;
    }
    while ( 1 )
    {
      *a1 = v11;
      if ( v9 == v11 )
        break;
      v13 = *v11++ - 48;
      if ( v13 >= 0xA )
      {
        v14 = v11 - 1;
        if ( v8 == v14 )
          return nullptr;
        goto LABEL_118;
      }
    }
    v14 = v9;
    if ( v8 == v9 )
      return nullptr;
LABEL_118:
    if ( v14 != v9 && *v14 == 95 )
    {
      *a1 = v14 + 1;
      v76 = sub_C2AF0(a1);
      v7 = 0;
      if ( !v76 )
        return (char *)v7;
      v131 = v76;
      v29 = v12[1116];
      v30 = *((_DWORD *)v29 + 1);
      if ( (unsigned int)(v30 + 16) < 0xFF8 )
      {
        v78 = v29 + 4;
      }
      else
      {
        v77 = operator new[](0x1000u);
        *v77 = v29;
        v77[1] = 0;
        v12[1116] = (char *)v77;
        v30 = 0;
        v78 = v77 + 1;
        v29 = (char *)v77;
      }
      *v78 = v30 + 16;
      *(_DWORD *)&v29[v30 + 12] = 16843030;
      *(_DWORD *)&v29[v30 + 8] = off_139CB4;
      *(_DWORD *)&v29[v30 + 16] = v131;
      *(_DWORD *)&v29[v30 + 20] = v120;
      return &v29[v30 + 8];
    }
    return nullptr;
  }
LABEL_33:
  *a1 = v5;
  v33 = 0;
  if ( v2 != v5 )
    v33 = *v5 == 118;
  v123 = v33;
  if ( sub_C5D80(a1) )
    return nullptr;
  v34 = sub_C1A20(a1);
  v7 = 0;
  if ( v34 )
  {
    v133 = v34;
    v35 = a1[1116];
    v36 = v35 + 4;
    v37 = *((_DWORD *)v35 + 1);
    v38 = v37 + 32;
    if ( v123 )
    {
      if ( v38 >= 0xFF8 )
      {
        v39 = operator new[](0x1000u);
        *v39 = v35;
        v39[1] = 0;
        a1[1116] = (char *)v39;
        v37 = 0;
        v36 = v39 + 1;
        v35 = (char *)v39;
      }
      *v36 = v37 + 32;
      *(_DWORD *)&v35[v37 + 12] = 16843029;
      *(_DWORD *)&v35[v37 + 8] = off_139C74;
      *(_DWORD *)&v35[v37 + 16] = "virtual thunk to ";
      v40 = "";
    }
    else
    {
      if ( v38 >= 0xFF8 )
      {
        v53 = operator new[](0x1000u);
        *v53 = v35;
        v53[1] = 0;
        a1[1116] = (char *)v53;
        v37 = 0;
        v36 = v53 + 1;
        v35 = (char *)v53;
      }
      *v36 = v37 + 32;
      *(_DWORD *)&v35[v37 + 12] = 16843029;
      *(_DWORD *)&v35[v37 + 8] = off_139C74;
      *(_DWORD *)&v35[v37 + 16] = "non-virtual thunk to ";
      v40 = "";
    }
    *(_DWORD *)&v35[v37 + 20] = v40;
    *(_DWORD *)&v35[v37 + 24] = v133;
    return &v35[v37 + 8];
  }
  return (char *)v7;
}
// C1A73: conditional instruction was optimized away because eax.4==54
// 139C74: using guessed type int (*off_139C74[3])();
// 139CB4: using guessed type int (*off_139CB4[3])();
// 13A7B4: using guessed type int (*off_13A7B4[3])();
// 13ACD8: using guessed type __int64 qword_13ACD8;
