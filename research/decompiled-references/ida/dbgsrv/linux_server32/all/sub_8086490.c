/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8086490
// Address: 0x08086490

//----- (08086490) --------------------------------------------------------
int __cdecl sub_8086490(int a1, unsigned __int8 *a2, char *a3, int a4)
{
  char *v4; // edi
  unsigned int v5; // esi
  _DWORD *v7; // eax
  char **v8; // edi
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // esi
  char *v14; // eax
  int v15; // eax
  char *v16; // edx
  char *v17; // eax
  _DWORD *v18; // edx
  int v19; // edx
  unsigned int v20; // eax
  int v21; // ebx
  unsigned __int8 *v22; // edx
  char *v23; // edi
  unsigned int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  bool v31; // al
  _BYTE *v32; // ecx
  char v33; // al
  int v34; // edi
  char *v35; // eax
  int v36; // eax
  char *v37; // ebx
  int v38; // edx
  unsigned int v39; // ecx
  char *v40; // eax
  unsigned int v41; // edx
  unsigned __int8 *v42; // ecx
  int v43; // edi
  int v44; // eax
  int v45; // edi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  char v52; // dl
  char *v53; // edx
  int v54; // eax
  int v55; // edx
  int v56; // edx
  unsigned __int8 *v57; // eax
  int v58; // eax
  char *v59; // edx
  char *v60; // eax
  int v61; // edx
  int v62; // eax
  unsigned int v63; // edx
  int v64; // esi
  unsigned __int8 *v65; // ebx
  int v66; // eax
  int v67; // eax
  unsigned int v68; // edx
  int v69; // edx
  int v70; // edx
  unsigned int v71; // eax
  int v72; // eax
  int v73; // edx
  int v74; // eax
  int v75; // eax
  int v76; // edx
  int v77; // edx
  char *v78; // eax
  char *v79; // eax
  int v80; // edx
  int v81; // edx
  unsigned int v82; // eax
  int v83; // eax
  int v84; // edx
  int v85; // eax
  int v86; // eax
  signed int v87; // edx
  int v88; // eax
  int v89; // ebx
  __m128i *v90; // eax
  int v91; // ecx
  int v92; // eax
  unsigned __int16 v93; // ax
  _DWORD *v94; // esi
  unsigned __int8 *v95; // edx
  unsigned int v96; // eax
  int v97; // ebx
  unsigned __int8 v98; // al
  unsigned __int8 *v99; // eax
  char v100; // al
  unsigned int v101; // eax
  int v102; // edx
  unsigned __int8 *v103; // ebx
  unsigned __int8 *v104; // eax
  unsigned __int16 v105; // ax
  unsigned __int8 *v106; // eax
  unsigned __int8 v107; // al
  unsigned __int16 v108; // ax
  unsigned __int8 v109; // al
  unsigned __int16 v110; // ax
  unsigned __int8 v111; // al
  unsigned __int16 v112; // ax
  unsigned __int8 v113; // al
  int v114; // eax
  int v115; // ebx
  unsigned __int16 v116; // ax
  int v117; // ebx
  unsigned __int8 v118; // al
  int v119; // ebx
  unsigned __int16 v120; // ax
  unsigned __int8 *v121; // edx
  unsigned int v122; // eax
  unsigned __int8 *v123; // eax
  int v124; // eax
  unsigned __int8 *v125; // edx
  int v126; // eax
  unsigned int v127; // eax
  unsigned __int8 *v128; // eax
  _DWORD *v129; // eax
  int v130; // edx
  int v131; // eax
  int v132; // ecx
  __m128i *v133; // eax
  int v134; // edi
  int v135; // edi
  int v136; // ebx
  __m128i *v137; // edx
  int v138; // eax
  unsigned int v139; // eax
  __m128i *v140; // ebx
  _DWORD *v141; // eax
  int v142; // edi
  int v143; // eax
  int v144; // edi
  int v145; // eax
  __m128i *v146; // edi
  int v147; // edi
  _BYTE *v148; // eax
  __m128i v149; // xmm0
  int v150; // edi
  int v151; // edi
  unsigned int v152; // eax
  unsigned __int16 v153; // ax
  unsigned __int8 *v154; // eax
  int v155; // edx
  char *v156; // ebx
  int v157; // ecx
  unsigned __int8 *v158; // ecx
  int v159; // eax
  int v160; // edx
  int v161; // eax
  int (__cdecl ***v162)(_DWORD, char *, __int64 *, __int64 *); // eax
  unsigned __int8 *v163; // ecx
  char *v164; // eax
  int v165; // eax
  int v166; // ecx
  int v167; // eax
  int v168; // eax
  int v169; // eax
  int v170; // eax
  int v171; // eax
  int v172; // edx
  void *v173; // eax
  int v174; // eax
  int v175; // eax
  int v176; // eax
  int v177; // edx
  _DWORD *i; // ebx
  int v179; // eax
  int v180; // [esp+8h] [ebp-108h]
  int v181; // [esp+8h] [ebp-108h]
  int v182; // [esp+8h] [ebp-108h]
  int v183; // [esp+8h] [ebp-108h]
  unsigned __int8 *v184; // [esp+Ch] [ebp-104h]
  size_t v185; // [esp+Ch] [ebp-104h]
  unsigned __int8 *v186; // [esp+10h] [ebp-100h]
  int v187; // [esp+18h] [ebp-F8h]
  int v188; // [esp+18h] [ebp-F8h]
  _BYTE *v189; // [esp+1Ch] [ebp-F4h]
  int v190; // [esp+1Ch] [ebp-F4h]
  int v191; // [esp+20h] [ebp-F0h]
  int v192; // [esp+20h] [ebp-F0h]
  int v193; // [esp+20h] [ebp-F0h]
  char *v194; // [esp+20h] [ebp-F0h]
  int v195; // [esp+28h] [ebp-E8h]
  int v196; // [esp+2Ch] [ebp-E4h]
  int v197; // [esp+2Ch] [ebp-E4h]
  char *v198; // [esp+2Ch] [ebp-E4h]
  unsigned int v199; // [esp+2Ch] [ebp-E4h]
  _BYTE *v200; // [esp+2Ch] [ebp-E4h]
  int v201; // [esp+2Ch] [ebp-E4h]
  int v202; // [esp+2Ch] [ebp-E4h]
  unsigned int v203; // [esp+30h] [ebp-E0h]
  pthread_mutex_t *v204; // [esp+34h] [ebp-DCh]
  char *v205; // [esp+34h] [ebp-DCh]
  unsigned int v206; // [esp+34h] [ebp-DCh]
  pthread_mutex_t *v207; // [esp+34h] [ebp-DCh]
  pthread_mutex_t *v208; // [esp+34h] [ebp-DCh]
  int v209; // [esp+34h] [ebp-DCh]
  char v210[15]; // [esp+40h] [ebp-D0h] BYREF
  char v211; // [esp+4Fh] [ebp-C1h] BYREF
  __m128i *v212; // [esp+50h] [ebp-C0h] BYREF
  unsigned int v213[2]; // [esp+54h] [ebp-BCh] BYREF
  int v214; // [esp+5Ch] [ebp-B4h]
  unsigned int v215; // [esp+60h] [ebp-B0h]
  unsigned __int8 v216[4]; // [esp+64h] [ebp-ACh] BYREF
  __int128 v217; // [esp+68h] [ebp-A8h] BYREF
  unsigned __int8 v218[4]; // [esp+78h] [ebp-98h] BYREF
  __int128 v219; // [esp+7Ch] [ebp-94h]
  unsigned __int8 v220[4]; // [esp+8Ch] [ebp-84h] BYREF
  __int128 v221; // [esp+90h] [ebp-80h]
  unsigned __int8 v222[4]; // [esp+A0h] [ebp-70h] BYREF
  __int128 v223; // [esp+A4h] [ebp-6Ch]
  unsigned __int8 v224[4]; // [esp+B4h] [ebp-5Ch] BYREF
  __int128 v225; // [esp+B8h] [ebp-58h]
  unsigned __int8 v226[4]; // [esp+C8h] [ebp-48h] BYREF
  __int128 v227; // [esp+CCh] [ebp-44h]
  _BYTE v228[20]; // [esp+DCh] [ebp-34h] BYREF
  unsigned int v229; // [esp+F0h] [ebp-20h]
  int v230; // [esp+120h] [ebp+10h]

  v4 = a3;
  v5 = *(_DWORD *)(a1 + 28);
  v229 = __readgsdword(0x14u);
  v216[0] = 2;
  v203 = v5;
  *(_DWORD *)(a1 + 68) = 0;
  v217 = 0;
  if ( !a3
    || (v204 = (pthread_mutex_t *)dword_811E6F8,
        sub_80D15A0((pthread_mutex_t *)dword_811E6F8),
        v230 = sub_80810B0(*(int **)(a1 + 4), a3),
        sub_80D1600(v204),
        a4 = v230,
        v230 != 0x7FFFFFFF) )
  {
    v195 = 0;
    *(_DWORD *)(a1 + 64) = a4;
    goto LABEL_4;
  }
  v195 = 0;
LABEL_16:
  sub_80C7880(88);
  sub_80C7910(0, v4);
LABEL_17:
  while ( 2 )
  {
    while ( 2 )
    {
      if ( sub_80C7850() != 90 )
        sub_808C8A0((int)v216);
      v15 = *(_DWORD *)(a1 + 16);
      v16 = *(char **)(a1 + 12);
      if ( *(_DWORD *)(a1 + 20) < (unsigned int)(v15 + 1) )
      {
        v16 = (char *)sub_80CF920(a1 + 12, v16, v15 + 1, 0x14u);
        *(_DWORD *)(a1 + 12) = v16;
        v15 = *(_DWORD *)(a1 + 16);
      }
      v17 = &v16[20 * v15];
      *v17 = 2;
      *(_OWORD *)(v17 + 4) = 0;
      ++*(_DWORD *)(a1 + 16);
      sub_808A290((unsigned __int8 *)v17, v216);
LABEL_22:
      v212 = (__m128i *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
      sub_808C590(a1, (int)v212);
LABEL_23:
      v18 = *(_DWORD **)(a1 + 68);
      if ( !v18 )
      {
LABEL_73:
        v45 = 0;
        goto LABEL_74;
      }
      while ( !(unsigned __int8)sub_807FF00(v18, *(_DWORD *)(a1 + 60) - 1, v213) )
      {
        if ( v203 >= *(_DWORD *)(a1 + 28) )
          goto LABEL_73;
        if ( !(unsigned __int8)sub_808B780(a1) )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(301, v180, (int)v184, (int)v186);
            sub_80D7AB0();
          }
LABEL_418:
          BUG();
        }
        v18 = *(_DWORD **)(a1 + 68);
        if ( !v18 )
          goto LABEL_73;
      }
      *(_DWORD *)(a1 + 60) = v213[1];
      if ( v214 == 2 )
      {
        v19 = v215 + *(_DWORD *)(a1 + 48);
        if ( v19 < 0 || (v20 = *(_DWORD *)(a1 + 16), v19 >= v20) )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(287, v180, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        goto LABEL_34;
      }
      if ( v214 != 3 )
      {
        if ( v214 != 1 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(300, v180, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        v19 = v215 + *(_DWORD *)(a1 + 52);
        if ( v19 < 0 || (v20 = *(_DWORD *)(a1 + 16), v19 >= v20) )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(286, v180, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
LABEL_34:
        v21 = *(_DWORD *)(a1 + 12);
        v22 = (unsigned __int8 *)(v21 + 20 * v19);
        v212 = (__m128i *)v22;
        goto LABEL_84;
      }
      v22 = (unsigned __int8 *)sub_8084B20(*(_DWORD *)(a1 + 4), v215);
      v21 = *(_DWORD *)(a1 + 12);
      v212 = (__m128i *)v22;
      v20 = *(_DWORD *)(a1 + 16);
LABEL_84:
      if ( !sub_808A290(v22, (unsigned __int8 *)(v21 + 20 * v20 - 20)) )
      {
        v226[0] = 2;
        v49 = *(_DWORD *)(a1 + 16);
        v227 = 0;
        sub_8089810(v226, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v49 - 20));
        v50 = *(_DWORD *)(a1 + 16);
        if ( v50 )
        {
          v165 = v50 - 1;
          v166 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 16) = v165;
          sub_8089430(v166 + 20 * v165);
        }
        sub_8089430((int)v226);
      }
LABEL_66:
      if ( !*(_BYTE *)(a1 + 76) )
      {
        off_811E568(v210);
        if ( v210[0] )
        {
          sub_80C7880(1487);
          continue;
        }
      }
      break;
    }
    v43 = sub_807FBE0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
    ++*(_DWORD *)(a1 + 60);
    v44 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(v44 + 68) )
    {
      v42 = (unsigned __int8 *)++v195;
      if ( v195 > 100 )
      {
        if ( *(_DWORD *)(v44 + 60) != -1 )
        {
          v195 = 0;
          if ( !sub_80D14A0() )
            goto LABEL_72;
          if ( time(nullptr) - *(_DWORD *)(*(_DWORD *)(a1 + 4) + 60) > 2 )
          {
            sub_8084220();
            *(_BYTE *)(*(_DWORD *)(a1 + 4) + 68) = 1;
          }
        }
        v195 = 0;
      }
    }
LABEL_72:
    v24 = (unsigned __int8)v43;
    switch ( (char)v43 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
        goto LABEL_39;
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
        a4 = (unsigned __int8)v43 - 16;
        *(_DWORD *)(a1 + 64) = a4;
        goto LABEL_4;
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
        v80 = (unsigned __int8)v43 - 32;
        goto LABEL_148;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
        v69 = (unsigned __int8)v43 - 48;
        goto LABEL_136;
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
        v67 = (unsigned __int8)v43 - 64;
        goto LABEL_130;
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
        v62 = (unsigned __int8)v43 - 80;
        goto LABEL_126;
      case 96:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
        v61 = (unsigned __int8)v43 - 96;
        goto LABEL_120;
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 121:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
      case 127:
        v55 = (unsigned __int8)v43 - 112;
        goto LABEL_110;
      case -128:
        v24 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_39;
      case -127:
        v24 = (unsigned __int16)sub_80842A0(a1);
        goto LABEL_39;
      case -126:
        a4 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_298;
      case -125:
        a4 = (unsigned __int16)sub_80842A0(a1);
LABEL_298:
        *(_DWORD *)(a1 + 64) = a4;
        goto LABEL_5;
      case -124:
        v80 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_148;
      case -123:
        v80 = (unsigned __int16)sub_80842A0(a1);
LABEL_148:
        *(_DWORD *)(a1 + 64) = v80;
        v81 = *(_DWORD *)(a1 + 52) + v80;
        if ( v81 < 0 || (v82 = *(_DWORD *)(a1 + 16), v81 >= v82) )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(286, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        if ( sub_808A290(
               (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v81),
               (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v82 - 20)) )
        {
          continue;
        }
        v83 = *(_DWORD *)(a1 + 16);
        v218[0] = 2;
        v84 = 5 * v83;
        v85 = *(_DWORD *)(a1 + 12);
        v219 = 0;
        sub_8089810(v218, (unsigned __int8 *)(v85 + 4 * v84 - 20));
        v86 = *(_DWORD *)(a1 + 16);
        if ( v86 )
        {
          v169 = v86 - 1;
          *(_DWORD *)(a1 + 16) = v169;
          sub_8089430(*(_DWORD *)(a1 + 12) + 20 * v169);
        }
        sub_8089430((int)v218);
        goto LABEL_66;
      case -122:
        v69 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_136;
      case -121:
        v69 = (unsigned __int16)sub_80842A0(a1);
LABEL_136:
        *(_DWORD *)(a1 + 64) = v69;
        v70 = *(_DWORD *)(a1 + 48) + v69;
        if ( v70 < 0 || (v71 = *(_DWORD *)(a1 + 16), v70 >= v71) )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(287, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        if ( sub_808A290(
               (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v70),
               (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v71 - 20)) )
        {
          continue;
        }
        v72 = *(_DWORD *)(a1 + 16);
        v222[0] = 2;
        v73 = 5 * v72;
        v74 = *(_DWORD *)(a1 + 12);
        v223 = 0;
        sub_8089810(v222, (unsigned __int8 *)(v74 + 4 * v73 - 20));
        v75 = *(_DWORD *)(a1 + 16);
        if ( v75 )
        {
          v174 = v75 - 1;
          *(_DWORD *)(a1 + 16) = v174;
          sub_8089430(*(_DWORD *)(a1 + 12) + 20 * v174);
        }
        sub_8089430((int)v222);
        goto LABEL_66;
      case -120:
        v67 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_130;
      case -119:
        v67 = (unsigned __int16)sub_80842A0(a1);
LABEL_130:
        v68 = *(_DWORD *)(a1 + 16);
        v64 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 64) = v67;
        v65 = (unsigned __int8 *)(v64 + 20 * v68 - 20);
        v66 = *(_DWORD *)(a1 + 52) + v67;
        if ( v66 >= 0 && v66 < v68 )
          goto LABEL_128;
        if ( !byte_811F8A1 )
        {
          if ( v229 == __readgsdword(0x14u) )
            sub_80CFF40(286, v182, (int)v184, (int)v186);
          sub_80D7AB0();
        }
        goto LABEL_418;
      case -118:
        v62 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_126;
      case -117:
        v62 = (unsigned __int16)sub_80842A0(a1);
LABEL_126:
        v63 = *(_DWORD *)(a1 + 16);
        v64 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 64) = v62;
        v65 = (unsigned __int8 *)(v64 + 20 * v63 - 20);
        v66 = *(_DWORD *)(a1 + 48) + v62;
        if ( v66 < 0 || v66 >= v63 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(287, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
LABEL_128:
        v54 = sub_8089810((unsigned __int8 *)(v64 + 20 * v66), v65);
        goto LABEL_107;
      case -116:
        v61 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_120;
      case -115:
        v61 = (unsigned __int16)sub_80842A0(a1);
LABEL_120:
        *(_DWORD *)(a1 + 64) = v61;
        v56 = *(_DWORD *)(a1 + 52) + v61;
        if ( v56 >= 0 && (unsigned int)v56 < *(_DWORD *)(a1 + 16) )
          goto LABEL_112;
        if ( !byte_811F8A1 )
        {
          if ( v229 == __readgsdword(0x14u) )
            sub_80CFF40(286, v182, (int)v184, (int)v186);
          sub_80D7AB0();
        }
        goto LABEL_418;
      case -114:
        v55 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_110;
      case -113:
        v55 = (unsigned __int16)sub_80842A0(a1);
LABEL_110:
        *(_DWORD *)(a1 + 64) = v55;
        v56 = *(_DWORD *)(a1 + 48) + v55;
        if ( v56 < 0 || (unsigned int)v56 >= *(_DWORD *)(a1 + 16) )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(287, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
LABEL_112:
        v57 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v56);
LABEL_113:
        sub_8089810(v216, v57);
LABEL_114:
        if ( v216[0] == 10 && !sub_8089920(v216, 2) )
          continue;
        v58 = *(_DWORD *)(a1 + 16);
        v59 = *(char **)(a1 + 12);
        if ( *(_DWORD *)(a1 + 20) < (unsigned int)(v58 + 1) )
        {
          v59 = (char *)sub_80CF920(a1 + 12, v59, v58 + 1, 0x14u);
          *(_DWORD *)(a1 + 12) = v59;
          v58 = *(_DWORD *)(a1 + 16);
        }
        v60 = &v59[20 * v58];
        *v60 = 2;
        *(_OWORD *)(v60 + 4) = 0;
        ++*(_DWORD *)(a1 + 16);
        sub_808A290((unsigned __int8 *)v60, v216);
        goto LABEL_66;
      case -112:
      case -111:
      case -110:
      case -109:
      case -108:
      case -107:
      case -106:
      case -105:
      case -104:
      case -103:
      case -102:
      case -101:
      case -100:
      case -99:
      case -98:
      case -97:
      case -49:
        if ( !byte_811F8A1 )
        {
          if ( v229 == __readgsdword(0x14u) )
            sub_80CFF40(299, v182, (int)v184, (int)v186);
          sub_80D7AB0();
        }
        goto LABEL_418;
      case -96:
        v76 = (char)sub_8084270(a1);
        goto LABEL_143;
      case -95:
        v76 = (__int16)sub_80842A0(a1);
        goto LABEL_143;
      case -94:
        v152 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_268;
      case -93:
        v152 = (unsigned __int16)sub_80842A0(a1);
LABEL_268:
        *(_DWORD *)(a1 + 64) = v152;
        sub_808B3A0(a1, v152);
        goto LABEL_66;
      case -92:
        v154 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
        v212 = (__m128i *)v154;
        if ( *v154 == 10 )
        {
          v186 = (unsigned __int8 *)&qword_811CFF4;
          v184 = (unsigned __int8 *)&qword_811CFF4;
          if ( !sub_8089920(v154, 2) )
            continue;
        }
        v133 = v212;
        if ( v212->m128i_i8[0] != 2 && v212->m128i_i8[0] != 9 )
          goto LABEL_216;
        if ( v212->m128i_i32[1] == -1 || dword_811D3C4[2] <= 0 )
          goto LABEL_217;
        sub_808B590(a1, v216);
        v201 = a1 + 12;
        v155 = 20 * *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * *(_DWORD *)(a1 + 40) - 4);
        v226[0] = 2;
        v227 = 0;
        v190 = v155;
        v192 = *(_DWORD *)(a1 + 12) + v155;
        sub_8089810(v226, v216);
        v156 = *(char **)(a1 + 12);
        v157 = v192 - (_DWORD)v156;
        v193 = *(_DWORD *)(a1 + 16);
        if ( *(_DWORD *)(a1 + 20) < (unsigned int)(v193 + 1) )
        {
          v188 = v157;
          v156 = (char *)sub_80CF920(v201, v156, v193 + 1, 0x14u);
          v157 = v188;
          *(_DWORD *)(a1 + 12) = v156;
          v193 = *(_DWORD *)(a1 + 16);
        }
        v186 = (unsigned __int8 *)v156;
        v185 = 20 * v193 - v157;
        v194 = &v156[v157];
        memmove(&v156[v157 + 20], &v156[v157], v185);
        *v194 = 2;
        *(_OWORD *)(v194 + 4) = 0;
        sub_8089810((unsigned __int8 *)v194, v226);
        ++*(_DWORD *)(a1 + 16);
        sub_8089430((int)v226);
        v226[0] = 2;
        v227 = 0;
        sub_808A180(v201, (char *)(*(_DWORD *)(a1 + 12) + v190 + 20), v226);
        sub_8089430((int)v226);
        a4 = -dword_811D3C4[2];
        *(_DWORD *)(a1 + 64) = -dword_811D3C4[2];
        goto LABEL_4;
      case -91:
        v153 = sub_80842A0(a1);
        v216[0] = 2;
        *(_DWORD *)(a1 + 64) = v153;
        LODWORD(v217) = 0;
        sub_808AF40((void **)(a1 + 12), (char *)(*(_DWORD *)(a1 + 16) + v153), v216);
        goto LABEL_66;
      case -90:
        goto LABEL_66;
      case -89:
        v76 = sub_80842D0(a1);
        goto LABEL_143;
      case -88:
        v147 = sub_80842D0(a1);
        v148 = sub_80CF710(v147 + 1);
        if ( !v148 )
          continue;
        v200 = v148;
        sub_807FB90(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60), v148, v147);
        v149 = _mm_cvtsi32_si128(v147 + 1);
        *(_DWORD *)(a1 + 60) += v147;
        v200[v147] = 0;
        LODWORD(v217) = v200;
        v216[0] = 7;
        *(_QWORD *)((char *)&v217 + 4) = _mm_unpacklo_epi32(v149, v149).m128i_u64[0];
        sub_808A370((char **)(a1 + 12), v216);
        goto LABEL_66;
      case -87:
        goto LABEL_219;
      case -86:
      case -44:
        v91 = *(_DWORD *)(a1 + 16);
        if ( (_BYTE)v43 == 0xD4 )
          --v91;
        v92 = *(_DWORD *)(a1 + 40);
        if ( *(_DWORD *)(a1 + 44) < (unsigned int)(v92 + 1) )
        {
          v209 = v91;
          v173 = sub_80CF920(a1 + 36, *(void **)(a1 + 36), v92 + 1, 4u);
          v91 = v209;
          *(_DWORD *)(a1 + 36) = v173;
          v92 = *(_DWORD *)(a1 + 40);
        }
        *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * v92) = v91;
        ++*(_DWORD *)(a1 + 40);
        goto LABEL_66;
      case -85:
        v114 = sub_80842D0(a1);
        sub_8080650(a1, v114);
        goto LABEL_66;
      case -84:
      case -83:
        v89 = sub_80842D0(a1);
        v212 = (__m128i *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
        if ( !(unsigned __int8)sub_808AB90((int)v212) )
          continue;
        v90 = v212;
        if ( (_BYTE)v43 == 0xAD )
          v212->m128i_i32[1] = v212->m128i_i32[1] == 0;
        if ( v90->m128i_i32[1] )
        {
          v186 = (unsigned __int8 *)v43;
          v184 = (unsigned __int8 *)v43;
          sub_8080650(a1, v89);
        }
        goto LABEL_219;
      case -82:
        v212 = (__m128i *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
        if ( sub_8089CE0((int)v212) )
          continue;
        if ( v212->m128i_i32[2] )
          v4 = (char *)v212->m128i_i32[1];
        else
          v4 = (char *)&qword_811CFF4 - 258076;
        v208 = (pthread_mutex_t *)dword_811E6F8;
        sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
        *(_DWORD *)(a1 + 64) = sub_80810B0(*(int **)(a1 + 4), v4);
        sub_80D1600(v208);
        if ( *(_DWORD *)(a1 + 64) == 0x7FFFFFFF )
        {
          v162 = *(int (__cdecl ****)(_DWORD, char *, __int64 *, __int64 *))(a1 + 72);
          if ( !v162 )
            goto LABEL_16;
          LODWORD(v217) = (**v162)(v162, v4, &qword_811CFF4, &qword_811CFF4);
          if ( (_DWORD)v217 == -1 )
            goto LABEL_16;
          v186 = v163;
          v184 = v163;
          sub_8089810((unsigned __int8 *)v212, v216);
        }
        else
        {
          sub_8089430((int)v212);
          v212->m128i_i8[0] = 6;
          v212->m128i_i32[1] = *(_DWORD *)(a1 + 64);
        }
        goto LABEL_66;
      case -81:
        if ( !(unsigned __int8)sub_808B780(a1) )
          continue;
        if ( v203 < *(_DWORD *)(a1 + 28) )
          goto LABEL_66;
        if ( !a2 )
        {
          sub_808A000(a1);
          goto LABEL_289;
        }
        v186 = v158;
        if ( sub_808A290(a2, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20)) )
          continue;
        v159 = 20 * *(_DWORD *)(a1 + 16);
        v160 = *(_DWORD *)(a1 + 12);
        v224[0] = 2;
        v225 = 0;
        sub_8089810(v224, (unsigned __int8 *)(v160 + v159 - 20));
        v161 = *(_DWORD *)(a1 + 16);
        if ( v161 )
        {
          v179 = v161 - 1;
          *(_DWORD *)(a1 + 16) = v179;
          sub_8089430(*(_DWORD *)(a1 + 12) + 20 * v179);
        }
        sub_8089430((int)v224);
        goto LABEL_289;
      case -80:
      case -79:
      case -78:
      case -77:
      case -76:
      case -75:
      case -74:
      case -73:
      case -72:
      case -71:
      case -70:
      case -69:
      case -68:
      case -67:
      case -66:
      case -65:
      case -56:
      case -55:
      case -54:
      case -53:
      case -52:
      case -51:
      case -50:
      case -48:
      case -47:
        v186 = v216;
        v184 = v216;
        v54 = sub_808FFA0((int *)(a1 + 12), v43);
        goto LABEL_107;
      case -64:
        v113 = sub_8084270(a1);
        v99 = (unsigned __int8 *)sub_8084A80((_DWORD *)a1, v113);
        goto LABEL_177;
      case -63:
        v112 = sub_80842A0(a1);
        v99 = (unsigned __int8 *)sub_8084A80((_DWORD *)a1, v112);
        goto LABEL_177;
      case -62:
        v111 = sub_8084270(a1);
        v99 = (unsigned __int8 *)sub_8084AD0((_DWORD *)a1, v111);
        goto LABEL_177;
      case -61:
        v110 = sub_80842A0(a1);
        v99 = (unsigned __int8 *)sub_8084AD0((_DWORD *)a1, v110);
        goto LABEL_177;
      case -60:
        v109 = sub_8084270(a1);
        v106 = (unsigned __int8 *)sub_8084A80((_DWORD *)a1, v109);
        goto LABEL_184;
      case -59:
        v108 = sub_80842A0(a1);
        v106 = (unsigned __int8 *)sub_8084A80((_DWORD *)a1, v108);
        goto LABEL_184;
      case -58:
        v107 = sub_8084270(a1);
        v106 = (unsigned __int8 *)sub_8084AD0((_DWORD *)a1, v107);
        goto LABEL_184;
      case -57:
        v105 = sub_80842A0(a1);
        v106 = (unsigned __int8 *)sub_8084AD0((_DWORD *)a1, v105);
        goto LABEL_184;
      case -46:
        v216[0] = 3;
        sub_807FB90(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60), &v217, 16);
        *(_DWORD *)(a1 + 60) += 16;
        sub_808A0A0((char **)(a1 + 12), v216);
        goto LABEL_66;
      case -45:
        v129 = *(_DWORD **)(a1 + 68);
        v130 = *(_DWORD *)(a1 + 60);
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) == 4 )
        {
          v176 = sub_807FC70(v129, v130);
          v132 = a1;
          v216[0] = 9;
          LODWORD(v217) = v176;
          *(_DWORD *)(a1 + 60) += 8;
          DWORD1(v217) = v177;
        }
        else
        {
          v131 = sub_807FC70(v129, v130);
          v216[0] = 2;
          LODWORD(v217) = v131;
          *(_DWORD *)(a1 + 60) += 8;
        }
        v186 = (unsigned __int8 *)v132;
        v184 = (unsigned __int8 *)v132;
        sub_808A0A0((char **)(a1 + 12), v216);
        goto LABEL_66;
      case -43:
        v127 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_206;
      case -42:
        v127 = (unsigned __int16)sub_80842A0(a1);
LABEL_206:
        *(_DWORD *)(a1 + 64) = v127;
        v128 = (unsigned __int8 *)sub_8084B20(*(_DWORD *)(a1 + 4), v127);
        sub_8089810(v216, v128);
        goto LABEL_114;
      case -41:
        v122 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_201;
      case -40:
        v122 = (unsigned __int16)sub_80842A0(a1);
LABEL_201:
        *(_DWORD *)(a1 + 64) = v122;
        v123 = (unsigned __int8 *)sub_8084B20(*(_DWORD *)(a1 + 4), v122);
        if ( sub_808A290(v123, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20)) )
          continue;
        v124 = 20 * *(_DWORD *)(a1 + 16);
        v125 = *(unsigned __int8 **)(a1 + 12);
        v220[0] = 2;
        v221 = 0;
        v186 = v125;
        v184 = v125;
        sub_8089810(v220, &v125[v124 - 20]);
        v126 = *(_DWORD *)(a1 + 16);
        if ( v126 )
        {
          v175 = v126 - 1;
          *(_DWORD *)(a1 + 16) = v175;
          sub_8089430(*(_DWORD *)(a1 + 12) + 20 * v175);
        }
        sub_8089430((int)v220);
        goto LABEL_66;
      case -39:
        v101 = (unsigned __int8)sub_8084270(a1);
        goto LABEL_181;
      case -38:
        v101 = (unsigned __int16)sub_80842A0(a1);
LABEL_181:
        v102 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 64) = v101;
        v103 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v102 - 20);
        v104 = (unsigned __int8 *)sub_8084B20(*(_DWORD *)(a1 + 4), v101);
        v54 = sub_8089810(v104, v103);
        goto LABEL_107;
      case -37:
        v97 = *(_DWORD *)(a1 + 4);
        v98 = sub_8084270(a1);
        v99 = (unsigned __int8 *)sub_8084B20(v97, v98);
        goto LABEL_177;
      case -36:
        v119 = *(_DWORD *)(a1 + 4);
        v120 = sub_80842A0(a1);
        v99 = (unsigned __int8 *)sub_8084B20(v119, v120);
LABEL_177:
        v212 = (__m128i *)v99;
        v100 = sub_8089D20(v99, 1);
        goto LABEL_178;
      case -35:
        v117 = *(_DWORD *)(a1 + 4);
        v118 = sub_8084270(a1);
        v106 = (unsigned __int8 *)sub_8084B20(v117, v118);
        goto LABEL_184;
      case -34:
        v115 = *(_DWORD *)(a1 + 4);
        v116 = sub_80842A0(a1);
        v106 = (unsigned __int8 *)sub_8084B20(v115, v116);
LABEL_184:
        v212 = (__m128i *)v106;
        v100 = sub_8089D20(v106, -1);
LABEL_178:
        if ( v100 )
          goto LABEL_66;
        continue;
      case -33:
        sub_80C7880(90);
        goto LABEL_22;
      case -32:
      case -31:
      case -30:
      case -29:
      case -28:
      case -27:
      case -26:
      case -25:
      case -24:
      case -23:
      case -22:
      case -21:
      case -20:
      case -19:
      case -18:
      case -17:
        v76 = (unsigned __int8)v43 - 224;
LABEL_143:
        LODWORD(v217) = v76;
        v216[0] = 2;
        v226[0] = 2;
        v227 = 0;
        sub_8089810(v226, v216);
        v77 = *(_DWORD *)(a1 + 16);
        v78 = *(char **)(a1 + 12);
        if ( *(_DWORD *)(a1 + 20) < (unsigned int)(v77 + 1) )
        {
          v78 = (char *)sub_80CF920(a1 + 12, v78, v77 + 1, 0x14u);
          v77 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 12) = v78;
        }
        v79 = &v78[20 * v77];
        *v79 = 2;
        *(_OWORD *)(v79 + 4) = 0;
        sub_8089810((unsigned __int8 *)v79, v226);
        ++*(_DWORD *)(a1 + 16);
        sub_8089430((int)v226);
        goto LABEL_66;
      case -16:
        v93 = sub_80842A0(a1);
        v216[0] = 5;
        *(_DWORD *)(a1 + 64) = v93;
        v94 = (_DWORD *)operator new(0x20u);
        sub_807F610(v94, *(_DWORD *)(a1 + 64));
        v96 = *(_DWORD *)(a1 + 64);
        LODWORD(v217) = v94;
        if ( v96 != v94[7] )
        {
          v186 = v95;
          sub_80C78C0(0, v96);
          sub_80C7880(1535);
          continue;
        }
        for ( i = (_DWORD *)sub_8080DD0(v96); ; i = (_DWORD *)sub_8080D50(*(_DWORD *)(a1 + 4), i[6]) )
        {
          v170 = sub_8084920(i, (int)(i + 8));
          *(_DWORD *)(a1 + 64) = v170;
          if ( v170 != -1 )
            break;
          v170 = i[6];
          if ( !v170 )
            break;
        }
        goto LABEL_341;
      case -15:
        v212 = (__m128i *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
        v186 = (unsigned __int8 *)&qword_811CFF4;
        v184 = (unsigned __int8 *)&qword_811CFF4;
        v54 = sub_808E880((int)v212, (int)v212);
        goto LABEL_107;
      case -14:
        v212 = (__m128i *)v216;
        v186 = v42;
        if ( !(unsigned __int8)sub_808E080((_DWORD *)a1, (unsigned __int8 **)&v212) )
          goto LABEL_23;
        v186 = v121;
        v184 = v121;
        v54 = sub_808A290((unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20), v216);
        goto LABEL_107;
      case -13:
        if ( (unsigned __int8)sub_808CAC0((_DWORD *)a1) )
          goto LABEL_66;
        goto LABEL_23;
      case -12:
        if ( (unsigned __int8)sub_808CAC0((_DWORD *)a1) )
          goto LABEL_219;
        goto LABEL_23;
      case -11:
      case -10:
        v212 = (__m128i *)v216;
        v186 = (unsigned __int8 *)&qword_811CFF4;
        if ( !(unsigned __int8)sub_808E080((_DWORD *)a1, (unsigned __int8 **)&v212) )
          goto LABEL_23;
        if ( !v212 )
        {
          sub_80C7880(1534);
          continue;
        }
        v87 = -1;
        if ( (_BYTE)v43 == 0xF5 )
          v87 = 1;
        v88 = sub_8089D20((unsigned __int8 *)v212, v87);
        if ( !(_BYTE)v88 )
          continue;
        v186 = (unsigned __int8 *)v88;
        v184 = (unsigned __int8 *)v88;
        v54 = sub_808A290((unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20), v216);
LABEL_107:
        if ( v54 )
          continue;
        goto LABEL_66;
      case -9:
        v212 = (__m128i *)v216;
        v186 = (unsigned __int8 *)&qword_811CFF4;
        if ( !(unsigned __int8)sub_808DDF0((_DWORD *)a1, (int *)(a1 + 64), (unsigned __int8 **)&v212) )
          continue;
        if ( *(_DWORD *)(a1 + 64) != -1 )
        {
          v170 = sub_808B590(a1, v216);
LABEL_341:
          v226[0] = 2;
          v227 = 0;
          v186 = (unsigned __int8 *)v170;
          v212 = (__m128i *)sub_808A180(
                              a1 + 12,
                              (char *)(*(_DWORD *)(a1 + 12)
                                     + 20 * *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * *(_DWORD *)(a1 + 40) - 4)),
                              v226);
          sub_8089430((int)v226);
          if ( sub_808A290((unsigned __int8 *)v212, v216) )
            continue;
          a4 = *(_DWORD *)(a1 + 64);
          if ( a4 != -1 )
            goto LABEL_4;
          v171 = *(_DWORD *)(a1 + 40);
          v172 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * v171 - 4);
          if ( v171 )
            *(_DWORD *)(a1 + 40) = v171 - 1;
          if ( v172 != *(_DWORD *)(a1 + 16) - 1 )
          {
            sub_80C7880(56);
            continue;
          }
          goto LABEL_66;
        }
        v133 = v212;
LABEL_216:
        if ( v133->m128i_i8[0] != 6 )
        {
LABEL_217:
          sub_80C7880(1541);
          continue;
        }
        *(_DWORD *)(a1 + 64) = v133->m128i_i32[1];
        sub_808A000(a1);
        a4 = *(_DWORD *)(a1 + 64);
LABEL_4:
        if ( a4 >= 0 )
        {
LABEL_5:
          v7 = *(_DWORD **)(a1 + 4);
          if ( (unsigned int)a4 >= v7[1] || (v8 = *(char ***)(*v7 + 4 * a4)) == nullptr )
          {
            sub_80C7880(88);
            goto LABEL_36;
          }
          if ( !v8[5] )
          {
            sub_80C7880(88);
            if ( (unsigned int)v8[1] <= 1 )
            {
LABEL_36:
              v23 = v228;
              sub_80D3B60(v228, 20, (char *)&qword_811CFF4 - 281301, *(_DWORD *)(a1 + 64));
            }
            else
            {
              v23 = *v8;
            }
            sub_80C7910(0, v23);
            continue;
          }
          v9 = *(_DWORD *)(a1 + 40);
          v10 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * v9 - 4);
          if ( v9 )
            *(_DWORD *)(a1 + 40) = v9 - 1;
          v11 = (int)v8[3];
          v12 = *(_DWORD *)(a1 + 16) - v10;
          if ( v11 > v12 )
          {
            v13 = (int)v8[9];
            if ( !v13 )
              goto LABEL_12;
            v206 = v10;
            v12 = sub_808B450((_DWORD *)a1, v12, v11, (int)v8[8], v13);
            v11 = (int)v8[3];
            v10 = v206;
          }
          if ( v12 != v11 )
          {
LABEL_12:
            sub_80C7880(56);
            v14 = (char *)&qword_811CFF4 - 258076;
            if ( v8[1] )
              v14 = *v8;
            sub_80C7910(0, v14);
            continue;
          }
          v199 = v10;
          v207 = (pthread_mutex_t *)dword_811E6F8;
          sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
          v35 = v8[17];
          if ( v35 == (char *)-1 )
          {
            v164 = (char *)&qword_811CFF4 - 258076;
            if ( v8[1] )
              v164 = *v8;
            sub_80C7910(0, v164);
            sub_80C7880(40);
            sub_80D1600(v207);
            continue;
          }
          v8[17] = v35 + 1;
          sub_80D1600(v207);
          v36 = *(_DWORD *)(a1 + 28);
          v37 = *(char **)(a1 + 24);
          v38 = v36 + 1;
          v39 = v199;
          if ( *(_DWORD *)(a1 + 32) < (unsigned int)(v36 + 1) )
          {
            v37 = (char *)sub_80CF920(a1 + 24, v37, v36 + 1, 0x10u);
            v39 = v199;
            *(_DWORD *)(a1 + 24) = v37;
            v36 = *(_DWORD *)(a1 + 28);
            v38 = v36 + 1;
          }
          v40 = &v37[16 * v36];
          *(_DWORD *)(a1 + 28) = v38;
          *((_DWORD *)v40 + 1) = *(_DWORD *)(a1 + 60);
          *(_DWORD *)v40 = *(_DWORD *)(a1 + 56);
          *((_DWORD *)v40 + 2) = *(_DWORD *)(a1 + 48);
          *((_DWORD *)v40 + 3) = *(_DWORD *)(a1 + 52);
          v41 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 68) = v8 + 4;
          *(_DWORD *)(a1 + 56) = v8;
          *(_DWORD *)(a1 + 60) = 0;
          *(_QWORD *)(a1 + 48) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(v41)).m128i_u64[0];
          goto LABEL_66;
        }
        v24 = -a4;
LABEL_39:
        v195 += 200;
        *(_DWORD *)(a1 + 64) = v24;
        if ( v24 >= dword_811D3A0[0]
          || (v25 = dword_811D3A0[1], v216[0] = 2, LODWORD(v217) = 0, v26 = v25 + 24 * v24, (v191 = v26) == 0) )
        {
          sub_80C7880(87);
          continue;
        }
        v27 = sub_8081160(*(char **)(v26 + 8), &v211);
        v28 = *(_DWORD *)(a1 + 40);
        v29 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * v28 - 4);
        if ( v28 )
          *(_DWORD *)(a1 + 40) = v28 - 1;
        v205 = (char *)(*(_DWORD *)(a1 + 16) - v29);
        if ( v27 > (int)v205 )
        {
          v202 = v29;
          v205 = (char *)sub_808B450((_DWORD *)a1, (int)v205, v27, *(_DWORD *)(v191 + 12), *(_DWORD *)(v191 + 16));
          v29 = v202;
        }
        if ( v211 )
        {
          LODWORD(v217) = v205;
        }
        else if ( v205 != (char *)v27 )
        {
          sub_80C7910(0, *(char **)v191);
          sub_80C7880(56);
          continue;
        }
        v30 = *(_DWORD *)(v191 + 20);
        if ( (v30 & 1) != 0 && *(_DWORD *)&algn_811D3B0[8] )
        {
          v196 = v29;
          if ( (*(unsigned __int8 (**)(void))&algn_811D3B0[8])() )
          {
            v30 = *(_DWORD *)(v191 + 20);
            v29 = v196;
            goto LABEL_51;
          }
          sub_80C7880(1489);
          continue;
        }
LABEL_51:
        if ( (v30 & 4) == 0 )
        {
          v197 = v29;
          v31 = sub_80D14A0();
          v29 = v197;
          if ( !v31 )
          {
            sub_80C7910(0, *(char **)v191);
            sub_80C7880(143);
            continue;
          }
        }
        v187 = *(_DWORD *)(a1 + 12) + 20 * v29;
        v32 = *(_BYTE **)(v191 + 8);
        v33 = *v32;
        if ( (int)v205 > 0 )
        {
          v198 = nullptr;
          v34 = v187;
          do
          {
            if ( v33 != *(_BYTE *)v34 )
            {
              switch ( v33 )
              {
                case 2:
                  v189 = v32;
                  v51 = sub_808A3E0(v34);
                  goto LABEL_93;
                case 3:
                  v189 = v32;
                  v51 = sub_808A6A0(v34);
                  goto LABEL_93;
                case 4:
                  v52 = v32[1];
                  if ( v52 )
                  {
                    ++v32;
                    v33 = v52;
                    goto LABEL_95;
                  }
                  v53 = v198;
                  do
                  {
                    ++v53;
                    v34 += 20;
                    if ( v205 == v53 )
                      goto LABEL_96;
                  }
                  while ( *(_BYTE *)v34 != 4 );
                  v198 = v53;
                  break;
                case 5:
                case 8:
                  v47 = sub_80C7880(1532);
                  goto LABEL_79;
                case 6:
                  v47 = sub_80C7880(1554);
                  goto LABEL_79;
                case 7:
                  v189 = v32;
                  v51 = sub_8089CE0(v34);
                  goto LABEL_93;
                case 9:
                  v189 = v32;
                  v51 = sub_808A540(v34);
LABEL_93:
                  v32 = v189;
                  if ( !v51 )
                    break;
                  goto LABEL_17;
                case 10:
                  if ( *(_BYTE *)v34 == 2 && !*(_DWORD *)(v34 + 4) )
                    break;
                  v47 = sub_80C7880(1566);
                  goto LABEL_79;
                default:
                  if ( !byte_811F8A1 )
                  {
                    if ( v229 == __readgsdword(0x14u) )
                      sub_80CFF40(289, v181, (int)v184, (int)v186);
                    sub_80D7AB0();
                  }
                  goto LABEL_418;
              }
            }
            v33 = *++v32;
LABEL_95:
            ++v198;
            v34 += 20;
          }
          while ( v205 != v198 );
        }
LABEL_96:
        if ( (v33 & 0xFB) != 0 )
        {
          v47 = sub_80C7880(56);
LABEL_79:
          if ( v47 )
            continue;
        }
        if ( (*(_BYTE *)(v191 + 20) & 2) != 0 )
        {
          if ( v229 == __readgsdword(0x14u) )
            sub_808B150(a1, v191, v187, v205);
          sub_80D7AB0();
        }
        v48 = (*(int (__cdecl **)(int, unsigned __int8 *))(v191 + 4))(v187, v216);
        if ( v48 )
        {
          sub_80C7880(v48);
          continue;
        }
        sub_808B3A0(a1, (unsigned int)v205);
        if ( v203 < *(_DWORD *)(a1 + 28) )
        {
          sub_80C7880(0);
          v43 = sub_807FBE0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
          ++*(_DWORD *)(a1 + 60);
          if ( (_BYTE)v43 == 0xA9 )
          {
            sub_8089430((int)v216);
            goto LABEL_66;
          }
          v167 = *(_DWORD *)(a1 + 16);
          if ( *(_DWORD *)(a1 + 20) < (unsigned int)(v167 + 1) )
          {
            *(_DWORD *)(a1 + 12) = sub_80CF920(a1 + 12, *(void **)(a1 + 12), v167 + 1, 0x14u);
            v167 = *(_DWORD *)(a1 + 16);
          }
          v168 = *(_DWORD *)(a1 + 12) + 20 * v167;
          *(_BYTE *)v168 = 2;
          *(_OWORD *)(v168 + 4) = 0;
          ++*(_DWORD *)(a1 + 16);
          sub_808A290((unsigned __int8 *)v168, v216);
          goto LABEL_72;
        }
        if ( a2 && sub_808A290(a2, v216) )
          continue;
LABEL_289:
        v45 = 1;
LABEL_74:
        sub_8089430((int)v216);
        if ( v229 != __readgsdword(0x14u) )
          sub_80D7AB0();
        return v45;
      case -8:
        v142 = *(_DWORD *)(a1 + 48);
        goto LABEL_236;
      case -7:
        v142 = *(_DWORD *)(a1 + 52);
LABEL_236:
        v212 = (__m128i *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
        if ( sub_808A3E0((int)v212) )
          continue;
        v137 = v212;
        v139 = v142 + v212->m128i_i32[1];
        if ( v139 < *(_DWORD *)(a1 + 16) )
          goto LABEL_232;
        if ( !byte_811F8A1 )
        {
          if ( v229 == __readgsdword(0x14u) )
            sub_80CFF40(292, v182, (int)v184, (int)v186);
          sub_80D7AB0();
        }
        goto LABEL_418;
      case -6:
        v212 = (__m128i *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
        if ( sub_808A3E0((int)v212) )
          continue;
        v137 = v212;
        v138 = v212->m128i_i32[1];
        if ( v138 < 0 || (unsigned int)v138 >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52) )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(294, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        v139 = ~v138;
LABEL_232:
        v137->m128i_i8[0] = 10;
        v140 = v212;
        v212->m128i_i32[2] = v139;
        v140->m128i_i32[1] = a1;
        v141 = sub_8084BA0((int)&v140->m128i_i32[1], *(_DWORD *)(a1 + 4));
        if ( !v141 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(293, v183, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        if ( *(_BYTE *)v141 == 10 )
          *(__int64 *)((char *)v140->m128i_i64 + 4) = *(_QWORD *)(v141 + 1);
        goto LABEL_66;
      case -5:
        v134 = *(_DWORD *)(a1 + 16) - 4;
        if ( v134 < 0 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(296, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        v135 = *(_DWORD *)(a1 + 12) + 20 * v134;
        v212 = (__m128i *)(v135 + 20);
        if ( sub_808A3E0(v135 + 40)
          || sub_808A3E0(v135 + 60)
          || sub_8085320((unsigned __int8 *)v212, *(_DWORD *)(v135 + 44), *(_DWORD *)(v135 + 64), v135, 0) )
        {
          continue;
        }
        v136 = a1;
        sub_808A000(a1);
        sub_808A000(a1);
        goto LABEL_227;
      case -4:
        v150 = *(_DWORD *)(a1 + 16) - 3;
        if ( v150 < 0 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(295, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        v151 = *(_DWORD *)(a1 + 12) + 20 * v150;
        v212 = (__m128i *)v151;
        if ( sub_808A3E0(v151 + 20)
          || sub_808A3E0(v151 + 40)
          || sub_808D650(v212, (unsigned __int8 *)v212, *(_DWORD *)(v151 + 24), *(_DWORD *)(v151 + 44), 0) )
        {
          continue;
        }
        sub_808A000(a1);
        sub_808A000(a1);
        goto LABEL_66;
      case -3:
        v186 = v42;
        v184 = v42;
        v57 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
        goto LABEL_113;
      case -2:
        v145 = *(_DWORD *)(a1 + 16) - 2;
        if ( v145 < 0 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(297, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        v212 = (__m128i *)(*(_DWORD *)(a1 + 12) + 20 * v145);
        v146 = v212;
        if ( sub_808A3E0((int)&v212[1].m128i_i32[1])
          || sub_808D650(v212, (unsigned __int8 *)v212, v146[1].m128i_i32[2], 0, 1) )
        {
          continue;
        }
LABEL_219:
        sub_808A000(a1);
        goto LABEL_66;
      case -1:
        v143 = *(_DWORD *)(a1 + 16) - 3;
        if ( v143 < 0 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v229 == __readgsdword(0x14u) )
              sub_80CFF40(298, v182, (int)v184, (int)v186);
            sub_80D7AB0();
          }
          goto LABEL_418;
        }
        v144 = *(_DWORD *)(a1 + 12) + 20 * v143;
        v212 = (__m128i *)(v144 + 20);
        if ( sub_808A3E0(v144 + 40) || sub_8085320((unsigned __int8 *)v212, *(_DWORD *)(v144 + 44), 0, v144, 1) )
          continue;
        v136 = a1;
        sub_808A000(a1);
LABEL_227:
        sub_808B590(v136, v216);
        sub_808A000(v136);
        sub_808A370((char **)(v136 + 12), v216);
        goto LABEL_66;
    }
  }
}
// 808703B: variable 'v182' is possibly undefined
// 808703B: variable 'v184' is possibly undefined
// 808703B: variable 'v186' is possibly undefined
// 80874DA: variable 'v95' is possibly undefined
// 80877F3: variable 'v42' is possibly undefined
// 808780D: variable 'v121' is possibly undefined
// 80879AD: variable 'v132' is possibly undefined
// 8088332: variable 'v158' is possibly undefined
// 808848A: variable 'v163' is possibly undefined
// 808861E: variable 'v180' is possibly undefined
// 8088B6B: variable 'v177' is possibly undefined
// 8088D97: variable 'v181' is possibly undefined
// 8088E9B: variable 'v183' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D3A0: using guessed type int dword_811D3A0[3];
// 811D3B0: using guessed type _BYTE algn_811D3B0[16];
// 811D3B8: using guessed type int (*)(void);
// 811D3C4: using guessed type int dword_811D3C4[7];
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
// 811E6F8: using guessed type int dword_811E6F8;
// 811F8A1: using guessed type char byte_811F8A1;
