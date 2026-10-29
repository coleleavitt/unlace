/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_865F0
// Address: 0x000865F0

//----- (000865F0) --------------------------------------------------------
void __fastcall sub_865F0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v11; // r3
  unsigned int v12; // r1
  _DWORD *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r0
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r6
  int v19; // r1
  int v20; // r1
  unsigned int v21; // r6
  int v22; // r3
  int v23; // r0
  int v24; // r1
  int v25; // r1
  int v26; // r0
  int v27; // r1
  int v28; // r1
  int v29; // r6
  int v30; // r6
  int v31; // r1
  unsigned int v32; // r0
  int v33; // r0
  int v34; // r0
  _DWORD *v35; // r3
  int v36; // r0
  int v37; // r0
  int v38; // r0
  char v39; // r1
  int *v40; // r0
  int v41; // r2
  int v42; // r3
  bool v43; // r0
  char v44; // r3
  char v45; // r3
  char v46; // r0
  char v47; // r3
  char v48; // r3
  char v49; // r0
  int v50; // r0
  int v51; // r1
  int v52; // r0
  int v53; // r1
  int v54; // r1
  int v55; // r1
  int v56; // r0
  char v57; // r2
  int v58; // r0
  int v59; // r0
  int v60; // r1
  _DWORD *v61; // r0
  int v62; // r0
  int v63; // r1
  int v64; // r0
  int v65; // r1
  int v66; // r0
  int v67; // r0
  int v68; // r1
  int v69; // r1
  int v70; // r1
  int v71; // r1
  int v72; // r1
  int v73; // r1
  char v74; // r2
  int v75; // r0
  int v76; // r0
  int v77; // r1
  unsigned int v78; // r0
  int v79; // r0
  int v80; // r0
  unsigned int v81; // r2
  _DWORD *v82; // r3
  int v83; // r1
  int v84; // r3
  unsigned int v85; // r0
  int v86; // r0
  int v87; // r1
  size_t v88; // r2
  int v89; // r0
  int v90; // r0
  size_t v91; // r0
  int v92; // r0
  unsigned int v93; // r1
  int v94; // r6
  size_t v95; // r2
  size_t v96; // r6
  size_t v97; // r0
  int v98; // r0
  int v99; // r2
  int v100; // r3
  int v101; // r2
  int v102; // r0
  unsigned int v103; // r1
  int v104; // r0
  int v105; // r6
  unsigned int v106; // r6
  unsigned int v107; // r0
  int v108; // r0
  int v109; // r2
  int v110; // r3
  int v111; // r2
  int v112; // r0
  unsigned int v113; // r1
  int v114; // r0
  unsigned int v115; // r0
  int v116; // r1
  int v117; // r0
  int v118; // r1
  int v119; // r0
  int v120; // r7
  unsigned int v121; // r7
  unsigned int v122; // r0
  int v123; // [sp+4h] [bp-2Ch]
  int v124; // [sp+8h] [bp-28h]
  int v125; // [sp+Ch] [bp-24h]
  int v126; // [sp+10h] [bp-20h]
  int v127; // [sp+14h] [bp-1Ch]
  int v128; // [sp+18h] [bp-18h]
  size_t v129; // [sp+18h] [bp-18h]
  int v130; // [sp+1Ch] [bp-14h]
  int v131; // [sp+1Ch] [bp-14h]
  unsigned int v132; // [sp+1Ch] [bp-14h]
  unsigned int v133; // [sp+20h] [bp-10h]
  _DWORD *v134; // [sp+20h] [bp-10h]
  unsigned int v135; // [sp+20h] [bp-10h]
  unsigned int v136; // [sp+20h] [bp-10h]
  unsigned int v137; // [sp+24h] [bp-Ch]
  int v138; // [sp+28h] [bp-8h]
  int v139; // [sp+28h] [bp-8h]
  int v140; // [sp+28h] [bp-8h]
  unsigned int v141; // [sp+28h] [bp-8h]
  int v142; // [sp+28h] [bp-8h]
  unsigned int v143; // [sp+28h] [bp-8h]
  int v144; // [sp+28h] [bp-8h]
  unsigned int v145; // [sp+28h] [bp-8h]
  int v146; // [sp+28h] [bp-8h]
  int v147; // [sp+28h] [bp-8h]
  unsigned int v148; // [sp+28h] [bp-8h]
  int v149; // [sp+2Ch] [bp-4h]

  if ( !a1 )
    return;
  if ( !*(_DWORD *)(a1 + 32) )
    return;
  if ( !*(_DWORD *)(a1 + 36) )
    return;
  v11 = *(_DWORD **)(a1 + 28);
  if ( !v11 || *v11 != a1 )
    return;
  v12 = v11[1];
  v149 = *(_DWORD *)(a1 + 28);
  v13 = (_DWORD *)v149;
  switch ( v12 )
  {
    case '9':
    case 'E':
    case 'I':
    case '[':
    case 'g':
    case 'q':
      goto LABEL_7;
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
      return;
    default:
      v13 = *(_DWORD **)(a1 + 28);
      if ( v12 != 666 && v12 != 42 )
        return;
LABEL_7:
      if ( (unsigned int)a2 > 5 )
        return;
      if ( !*(_DWORD *)(a1 + 12) || *(_DWORD *)(a1 + 4) && !*(_DWORD *)a1 || a2 != 4 && v12 == 666 )
      {
        *(_DWORD *)(a1 + 24) = "stream error";
        return;
      }
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_78;
      v14 = v13[10];
      v13[10] = a2;
      if ( v13[5] )
      {
        v138 = *(_DWORD *)(a1 + 28);
        sub_8B2BC(v138);
        v15 = *(_DWORD *)(a1 + 16);
        v14 = v15;
        if ( *(_DWORD *)(v138 + 20) <= v15 )
          v14 = *(_DWORD *)(v138 + 20);
        if ( v14 )
        {
          v137 = v14;
          qmemcpy(*(void **)(a1 + 12), *(const void **)(v138 + 16), v14);
          v14 = v137;
          *(_DWORD *)(a1 + 12) += v137;
          *(_DWORD *)(v138 + 16) += v137;
          *(_DWORD *)(a1 + 16) -= v137;
          *(_DWORD *)(a1 + 20) += v137;
          v16 = *(_DWORD *)(v138 + 20) - v137;
          *(_DWORD *)(v138 + 20) = v16;
          if ( !v16 )
            *(_DWORD *)(v138 + 16) = *(_DWORD *)(v138 + 8);
          v15 = *(_DWORD *)(a1 + 16);
        }
        if ( !v15 )
          goto LABEL_33;
        v13 = (_DWORD *)v149;
        v12 = *(_DWORD *)(v149 + 4);
      }
      else if ( !*(_DWORD *)(a1 + 4) )
      {
        v67 = 2 * v14 - 9;
        if ( (int)v14 <= 4 )
          v67 = 2 * v14;
        v14 = 2 * a2 - 9;
        if ( a2 <= 4 )
          v14 = 2 * a2;
        if ( a2 == 4 )
        {
          v13 = (_DWORD *)v149;
        }
        else
        {
          v13 = (_DWORD *)v149;
          if ( (int)v14 <= v67 )
          {
LABEL_78:
            *(_DWORD *)(a1 + 24) = "buffer error";
            return;
          }
        }
      }
      if ( v12 != 42 )
      {
        if ( v12 == 666 )
        {
          if ( !*(_DWORD *)(a1 + 4) )
          {
            sub_87034(0, 666, v14, v13, v123, v124, v125, v126, v127);
LABEL_33:
            *(_DWORD *)(v149 + 40) = -1;
            return;
          }
          goto LABEL_78;
        }
LABEL_53:
        if ( v12 == 57 )
        {
          v125 = 0;
          v34 = sub_85468(0, nullptr, 0);
          v35 = (_DWORD *)v149;
          *(_DWORD *)(a1 + 48) = v34;
          v36 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v36 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v36) = 31;
          v37 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v37 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v37) = -117;
          v38 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v38 + 1;
          v39 = 8;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v38) = 8;
          v134 = (_DWORD *)(v149 + 28);
          v40 = *(int **)(v149 + 28);
          if ( v40 )
          {
            v128 = v40[9];
            v127 = v40[7];
            v126 = v40[4];
            v41 = v40[11];
            v42 = *v40;
            v130 = *(_DWORD *)(v149 + 20);
            *(_DWORD *)(v149 + 20) = v130 + 1;
            v43 = v42 != 0;
            v44 = 2;
            if ( !v41 )
              v44 = 0;
            v45 = v44 | v43;
            v46 = 4;
            if ( !v126 )
              v46 = 0;
            v47 = v45 | v46;
            if ( !v127 )
              v39 = 0;
            v48 = v47 | v39;
            v49 = 16;
            if ( !v128 )
              v49 = 0;
            *(_BYTE *)(*(_DWORD *)(v149 + 8) + v130) = v48 | v49;
            v13 = (_DWORD *)v149;
            v50 = *(_DWORD *)(*(_DWORD *)(v149 + 28) + 4);
            v51 = *(_DWORD *)(v149 + 20);
            *(_DWORD *)(v149 + 20) = v51 + 1;
            *(_BYTE *)(*(_DWORD *)(v149 + 8) + v51) = v50;
            v52 = *(_DWORD *)(*(_DWORD *)(v149 + 28) + 4);
            v53 = *(_DWORD *)(v149 + 20);
            *(_DWORD *)(v149 + 20) = v53 + 1;
            *(_BYTE *)(*(_DWORD *)(v149 + 8) + v53) = BYTE1(v52);
            LOWORD(v52) = *(_WORD *)(*(_DWORD *)(v149 + 28) + 6);
            v54 = *(_DWORD *)(v149 + 20);
            *(_DWORD *)(v149 + 20) = v54 + 1;
            *(_BYTE *)(*(_DWORD *)(v149 + 8) + v54) = v52;
            LOBYTE(v52) = *(_BYTE *)(*(_DWORD *)(v149 + 28) + 7);
            v55 = *(_DWORD *)(v149 + 20);
            *(_DWORD *)(v149 + 20) = v55 + 1;
            *(_BYTE *)(*(_DWORD *)(v149 + 8) + v55) = v52;
            v56 = *(_DWORD *)(v149 + 132);
            v57 = 2;
            if ( v56 != 9 )
            {
              v57 = 4;
              if ( v56 >= 2 )
                v57 = 4 * (*(_DWORD *)(v149 + 136) > 1);
            }
            v58 = *(_DWORD *)(v149 + 20);
            *(_DWORD *)(v149 + 20) = v58 + 1;
            *(_BYTE *)(*(_DWORD *)(v149 + 8) + v58) = v57;
            v59 = *(_DWORD *)(*(_DWORD *)(v149 + 28) + 12);
            v60 = *(_DWORD *)(v149 + 20);
            *(_DWORD *)(v149 + 20) = v60 + 1;
            *(_BYTE *)(*(_DWORD *)(v149 + 8) + v60) = v59;
            v61 = *(_DWORD **)(v149 + 28);
            if ( v61[4] )
            {
              v62 = v61[5];
              v63 = *(_DWORD *)(v149 + 20);
              *(_DWORD *)(v149 + 20) = v63 + 1;
              *(_BYTE *)(*(_DWORD *)(v149 + 8) + v63) = v62;
              v64 = *(_DWORD *)(*(_DWORD *)(v149 + 28) + 20);
              v65 = *(_DWORD *)(v149 + 20);
              *(_DWORD *)(v149 + 20) = v65 + 1;
              *(_BYTE *)(*(_DWORD *)(v149 + 8) + v65) = BYTE1(v64);
              v61 = *(_DWORD **)(v149 + 28);
            }
            if ( v61[11] )
            {
              v66 = sub_85468(*(_DWORD *)(a1 + 48), *(unsigned __int8 **)(v149 + 8), *(_DWORD *)(v149 + 20));
              v13 = (_DWORD *)v149;
              *(_DWORD *)(a1 + 48) = v66;
            }
            v13[1] = 69;
            v13[8] = 0;
LABEL_93:
            v80 = *(_DWORD *)(*v134 + 16);
            if ( v80 )
            {
              v131 = v13[8];
              v129 = *(unsigned __int16 *)(*v134 + 20) - v131;
              v141 = v13[5];
              v81 = v13[3];
              if ( v141 + v129 <= v81 )
              {
                v82 = (_DWORD *)v149;
                v83 = v131;
              }
              else
              {
                v82 = (_DWORD *)v149;
                v83 = v131;
                do
                {
                  v132 = v81 - v141;
                  qmemcpy((void *)(v82[2] + v141), (const void *)(v80 + v83), v81 - v141);
                  v84 = v149;
                  v85 = *(_DWORD *)(v149 + 12);
                  *(_DWORD *)(v149 + 20) = v85;
                  if ( v85 > v141 && *(_DWORD *)(*(_DWORD *)(v149 + 28) + 44) )
                  {
                    v86 = sub_85468(*(_DWORD *)(a1 + 48), (unsigned __int8 *)(*(_DWORD *)(v149 + 8) + v141), v85 - v141);
                    v84 = v149;
                    *(_DWORD *)(a1 + 48) = v86;
                  }
                  *(_DWORD *)(v84 + 32) += v132;
                  v142 = *(_DWORD *)(a1 + 28);
                  sub_8B2BC(v142);
                  v88 = *(_DWORD *)(a1 + 16);
                  if ( *(_DWORD *)(v142 + 20) <= v88 )
                    v88 = *(_DWORD *)(v142 + 20);
                  if ( v88 )
                  {
                    v127 = v88;
                    qmemcpy(*(void **)(a1 + 12), *(const void **)(v142 + 16), v88);
                    v88 = v127;
                    *(_DWORD *)(a1 + 12) += v127;
                    v87 = v142;
                    *(_DWORD *)(v142 + 16) += v127;
                    *(_DWORD *)(a1 + 16) -= v127;
                    *(_DWORD *)(a1 + 20) += v127;
                    v89 = *(_DWORD *)(v142 + 20) - v127;
                    *(_DWORD *)(v142 + 20) = v89;
                    if ( !v89 )
                    {
                      v87 = v142;
                      *(_DWORD *)(v142 + 16) = *(_DWORD *)(v142 + 8);
                    }
                  }
                  v82 = (_DWORD *)v149;
                  v90 = *(_DWORD *)(v149 + 20);
                  if ( v90 )
                    sub_87616(v90, v87, v88, v149, v123, v124, v125, v126, v127);
                  v81 = v82[3];
                  v127 = *(_DWORD *)(v82[7] + 16);
                  v141 = 0;
                  v80 = v127;
                  v129 -= v132;
                  v83 = v82[8];
                }
                while ( v129 > v81 );
              }
              qmemcpy((void *)(v82[2] + v141), (const void *)(v80 + v83), v129);
              v13 = (_DWORD *)v149;
              v91 = *(_DWORD *)(v149 + 20) + v129;
              *(_DWORD *)(v149 + 20) = v91;
              if ( v91 > v141 && *(_DWORD *)(*(_DWORD *)(v149 + 28) + 44) )
              {
                v92 = sub_85468(*(_DWORD *)(a1 + 48), (unsigned __int8 *)(*(_DWORD *)(v149 + 8) + v141), v91 - v141);
                v13 = (_DWORD *)v149;
                *(_DWORD *)(a1 + 48) = v92;
              }
              v13[8] = 0;
            }
            v13[1] = 73;
LABEL_115:
            if ( *(_DWORD *)(*v134 + 28) )
            {
              v93 = v13[5];
              v143 = v93;
              while ( 1 )
              {
                if ( v93 == v13[3] )
                {
                  if ( v93 > v143 && *(_DWORD *)(*v134 + 44) )
                    *(_DWORD *)(a1 + 48) = sub_85468(
                                             *(_DWORD *)(a1 + 48),
                                             (unsigned __int8 *)(*(_DWORD *)(v149 + 8) + v143),
                                             v93 - v143);
                  v94 = *(_DWORD *)(a1 + 28);
                  sub_8B2BC(v94);
                  v95 = *(_DWORD *)(a1 + 16);
                  v144 = v94;
                  if ( *(_DWORD *)(v94 + 20) <= v95 )
                    v95 = *(_DWORD *)(v94 + 20);
                  if ( v95 )
                  {
                    v96 = v95;
                    qmemcpy(*(void **)(a1 + 12), *(const void **)(v144 + 16), v95);
                    *(_DWORD *)(a1 + 12) += v96;
                    *(_DWORD *)(v144 + 16) += v96;
                    *(_DWORD *)(a1 + 16) -= v96;
                    *(_DWORD *)(a1 + 20) += v96;
                    v97 = *(_DWORD *)(v144 + 20) - v96;
                    *(_DWORD *)(v144 + 20) = v97;
                    if ( !v97 )
                      *(_DWORD *)(v144 + 16) = *(_DWORD *)(v144 + 8);
                  }
                  v13 = (_DWORD *)v149;
                  v98 = *(_DWORD *)(v149 + 20);
                  v93 = 0;
                  v143 = 0;
                  if ( v98 )
                    sub_87616(v98, 0, v95, v149, v123, v124, v125, v126, v127);
                }
                v99 = v13[7];
                v100 = *(_DWORD *)(v149 + 32);
                v101 = *(_DWORD *)(v99 + 28);
                *(_DWORD *)(v149 + 32) = v100 + 1;
                v102 = *(unsigned __int8 *)(v101 + v100);
                v13 = (_DWORD *)v149;
                *(_DWORD *)(v149 + 20) = v93 + 1;
                *(_BYTE *)(*(_DWORD *)(v149 + 8) + v93) = v102;
                if ( !v102 )
                  break;
                v93 = *(_DWORD *)(v149 + 20);
              }
              if ( *(_DWORD *)(*v134 + 44) )
              {
                v103 = *(_DWORD *)(v149 + 20);
                if ( v103 > v143 )
                {
                  v104 = sub_85468(*(_DWORD *)(a1 + 48), (unsigned __int8 *)(*(_DWORD *)(v149 + 8) + v143), v103 - v143);
                  v13 = (_DWORD *)v149;
                  *(_DWORD *)(a1 + 48) = v104;
                }
              }
              v13[8] = 0;
            }
            v13[1] = 91;
LABEL_136:
            if ( *(_DWORD *)(*v134 + 36) )
            {
              v12 = v13[5];
              v145 = v12;
              while ( 1 )
              {
                if ( v12 == v13[3] )
                {
                  if ( v12 > v145 && *(_DWORD *)(*v134 + 44) )
                    *(_DWORD *)(a1 + 48) = sub_85468(
                                             *(_DWORD *)(a1 + 48),
                                             (unsigned __int8 *)(*(_DWORD *)(v149 + 8) + v145),
                                             v12 - v145);
                  v105 = *(_DWORD *)(a1 + 28);
                  sub_8B2BC(v105);
                  v14 = *(_DWORD *)(a1 + 16);
                  v146 = v105;
                  if ( *(_DWORD *)(v105 + 20) <= v14 )
                    v14 = *(_DWORD *)(v105 + 20);
                  if ( v14 )
                  {
                    v106 = v14;
                    qmemcpy(*(void **)(a1 + 12), *(const void **)(v146 + 16), v14);
                    *(_DWORD *)(a1 + 12) += v106;
                    *(_DWORD *)(v146 + 16) += v106;
                    *(_DWORD *)(a1 + 16) -= v106;
                    *(_DWORD *)(a1 + 20) += v106;
                    v107 = *(_DWORD *)(v146 + 20) - v106;
                    *(_DWORD *)(v146 + 20) = v107;
                    if ( !v107 )
                      *(_DWORD *)(v146 + 16) = *(_DWORD *)(v146 + 8);
                  }
                  v13 = (_DWORD *)v149;
                  v108 = *(_DWORD *)(v149 + 20);
                  v12 = 0;
                  v145 = 0;
                  if ( v108 )
                    goto LABEL_149;
                }
                v109 = v13[7];
                v110 = *(_DWORD *)(v149 + 32);
                v111 = *(_DWORD *)(v109 + 36);
                *(_DWORD *)(v149 + 32) = v110 + 1;
                v112 = *(unsigned __int8 *)(v111 + v110);
                v13 = (_DWORD *)v149;
                *(_DWORD *)(v149 + 20) = v12 + 1;
                *(_BYTE *)(*(_DWORD *)(v149 + 8) + v12) = v112;
                if ( !v112 )
                {
                  if ( *(_DWORD *)(*v134 + 44) )
                  {
                    v113 = *(_DWORD *)(v149 + 20);
                    if ( v113 > v145 )
                    {
                      v114 = sub_85468(
                               *(_DWORD *)(a1 + 48),
                               (unsigned __int8 *)(*(_DWORD *)(v149 + 8) + v145),
                               v113 - v145);
                      v13 = (_DWORD *)v149;
                      *(_DWORD *)(a1 + 48) = v114;
                    }
                  }
                  break;
                }
                v12 = *(_DWORD *)(v149 + 20);
              }
            }
            v13[1] = 103;
LABEL_156:
            if ( *(_DWORD *)(*v134 + 44) )
            {
              v108 = v13[5];
              if ( (unsigned int)(v108 + 2) > v13[3] )
              {
                v147 = *(_DWORD *)(a1 + 28);
                sub_8B2BC(v147);
                v14 = *(_DWORD *)(a1 + 16);
                if ( *(_DWORD *)(v147 + 20) <= v14 )
                  v14 = *(_DWORD *)(v147 + 20);
                if ( v14 )
                {
                  v136 = v14;
                  qmemcpy(*(void **)(a1 + 12), *(const void **)(v147 + 16), v14);
                  v14 = v136;
                  *(_DWORD *)(a1 + 12) += v136;
                  v12 = v147;
                  *(_DWORD *)(v147 + 16) += v136;
                  *(_DWORD *)(a1 + 16) -= v136;
                  *(_DWORD *)(a1 + 20) += v136;
                  v115 = *(_DWORD *)(v147 + 20) - v136;
                  *(_DWORD *)(v147 + 20) = v115;
                  if ( !v115 )
                  {
                    v12 = v147;
                    *(_DWORD *)(v147 + 16) = *(_DWORD *)(v147 + 8);
                  }
                }
                v13 = (_DWORD *)v149;
                v108 = 0;
                if ( *(_DWORD *)(v149 + 20) )
                  goto LABEL_149;
              }
              v116 = *(_DWORD *)(a1 + 48);
              v13[5] = v108 + 1;
              *(_BYTE *)(v13[2] + v108) = v116;
              v117 = *(_DWORD *)(a1 + 48);
              v118 = v13[5];
              v13[5] = v118 + 1;
              *(_BYTE *)(v13[2] + v118) = BYTE1(v117);
              v119 = sub_85468(0, nullptr, 0);
              v13 = (_DWORD *)v149;
              *(_DWORD *)(a1 + 48) = v119;
            }
            v13[1] = 113;
            v120 = *(_DWORD *)(a1 + 28);
            sub_8B2BC(v120);
            v14 = *(_DWORD *)(a1 + 16);
            v148 = v120;
            if ( *(_DWORD *)(v120 + 20) <= v14 )
              v14 = *(_DWORD *)(v120 + 20);
            if ( v14 )
            {
              v121 = v14;
              qmemcpy(*(void **)(a1 + 12), *(const void **)(v148 + 16), v14);
              *(_DWORD *)(a1 + 12) += v121;
              v12 = v148;
              *(_DWORD *)(v148 + 16) += v121;
              *(_DWORD *)(a1 + 16) -= v121;
              *(_DWORD *)(a1 + 20) += v121;
              v122 = *(_DWORD *)(v148 + 20) - v121;
              *(_DWORD *)(v148 + 20) = v122;
              if ( !v122 )
              {
                v12 = v148;
                *(_DWORD *)(v148 + 16) = *(_DWORD *)(v148 + 8);
              }
            }
            v13 = (_DWORD *)v149;
            v108 = *(_DWORD *)(v149 + 20);
            if ( !v108 )
              goto LABEL_171;
LABEL_149:
            sub_87616(v108, v12, v14, (int)v13, a5, a6, a7, a8, a9);
            return;
          }
          v68 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v68 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v68) = 0;
          v69 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v69 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v69) = 0;
          v70 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v70 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v70) = 0;
          v71 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v71 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v71) = 0;
          v72 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v72 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v72) = 0;
          v73 = *(_DWORD *)(v149 + 132);
          v74 = 2;
          if ( v73 != 9 )
          {
            v74 = 4;
            if ( v73 >= 2 )
              v74 = 4 * (*(_DWORD *)(v149 + 136) > 1);
            v35 = (_DWORD *)v149;
          }
          v75 = v35[5];
          v35[5] = v75 + 1;
          *(_BYTE *)(v35[2] + v75) = v74;
          v76 = v35[5];
          v35[5] = v76 + 1;
          *(_BYTE *)(v35[2] + v76) = 3;
          v35[1] = 113;
          v140 = *(_DWORD *)(a1 + 28);
          sub_8B2BC(v140);
          v14 = *(_DWORD *)(a1 + 16);
          if ( *(_DWORD *)(v140 + 20) <= v14 )
            v14 = *(_DWORD *)(v140 + 20);
          if ( v14 )
          {
            v135 = v14;
            qmemcpy(*(void **)(a1 + 12), *(const void **)(v140 + 16), v14);
            v14 = v135;
            *(_DWORD *)(a1 + 12) += v135;
            v77 = v140;
            *(_DWORD *)(v140 + 16) += v135;
            *(_DWORD *)(a1 + 16) -= v135;
            *(_DWORD *)(a1 + 20) += v135;
            v78 = *(_DWORD *)(v140 + 20) - v135;
            *(_DWORD *)(v140 + 20) = v78;
            if ( !v78 )
            {
              v77 = v140;
              *(_DWORD *)(v140 + 16) = *(_DWORD *)(v140 + 8);
            }
          }
          v13 = (_DWORD *)v149;
          v79 = *(_DWORD *)(v149 + 20);
          if ( v79 )
            sub_87616(v79, v77, v14, v149, v123, v124, 0, v126, v127);
          v12 = v13[1];
        }
        v12 -= 69;
        switch ( v12 )
        {
          case 0u:
            v134 = v13 + 7;
            goto LABEL_93;
          case 4u:
            v134 = v13 + 7;
            goto LABEL_115;
          case 0x16u:
            v134 = v13 + 7;
            goto LABEL_136;
          case 0x22u:
            v134 = v13 + 7;
            goto LABEL_156;
          default:
            goto LABEL_171;
        }
      }
      if ( v13[6] )
      {
        v17 = (v13[12] << 12) - 30720;
        v18 = 0;
        if ( (int)v13[34] <= 1 )
        {
          v19 = v13[33];
          if ( v19 >= 2 )
          {
            v18 = 64;
            if ( v19 >= 6 )
            {
              v18 = 128;
              if ( v19 != 6 )
                v18 = 192;
            }
          }
        }
        v20 = v13[5];
        v13[5] = v20 + 1;
        v21 = v18 | v17;
        if ( v13[27] )
          v21 |= 0x20u;
        *(_BYTE *)(v13[2] + v20) = BYTE1(v21);
        v139 = v13[5];
        v13[5] = v139 + 1;
        v22 = v149;
        *(_BYTE *)(*(_DWORD *)(v149 + 8) + v139) = ((v21 % 0x1F) | v21) ^ 0x1F;
        if ( *(_DWORD *)(v149 + 108) )
        {
          v23 = *(_DWORD *)(a1 + 48);
          v24 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v24 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v24) = HIBYTE(v23);
          v25 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v25 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v25) = BYTE2(v23);
          v26 = *(_DWORD *)(a1 + 48);
          v27 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v27 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v27) = BYTE1(v26);
          v22 = v149;
          v28 = *(_DWORD *)(v149 + 20);
          *(_DWORD *)(v149 + 20) = v28 + 1;
          *(_BYTE *)(*(_DWORD *)(v149 + 8) + v28) = v26;
        }
        v29 = v22;
        *(_DWORD *)(a1 + 48) = sub_8EC00(0, nullptr, 0);
        *(_DWORD *)(v29 + 4) = 113;
        v30 = *(_DWORD *)(a1 + 28);
        sub_8B2BC(v30);
        v14 = *(_DWORD *)(a1 + 16);
        if ( *(_DWORD *)(v30 + 20) <= v14 )
          v14 = *(_DWORD *)(v30 + 20);
        if ( v14 )
        {
          v133 = v14;
          qmemcpy(*(void **)(a1 + 12), *(const void **)(v30 + 16), v14);
          v14 = v133;
          *(_DWORD *)(a1 + 12) += v133;
          v31 = v30;
          *(_DWORD *)(v30 + 16) += v133;
          *(_DWORD *)(a1 + 16) -= v133;
          *(_DWORD *)(a1 + 20) += v133;
          v32 = *(_DWORD *)(v30 + 20) - v133;
          *(_DWORD *)(v30 + 20) = v32;
          if ( !v32 )
          {
            v31 = v30;
            *(_DWORD *)(v30 + 16) = *(_DWORD *)(v30 + 8);
          }
        }
        v13 = (_DWORD *)v149;
        v33 = *(_DWORD *)(v149 + 20);
        if ( v33 )
          sub_87616(v33, v31, v14, v149, v123, v124, v125, v126, v127);
        v12 = v13[1];
        goto LABEL_53;
      }
      v13[1] = 113;
LABEL_171:
      if ( *(_DWORD *)(a1 + 4) )
        JUMPOUT(0x8703C);
      sub_87034(0, v12, v14, v13, a5, a6, a7, a8, a9);
      return;
  }
}
// 87032: control flows out of bounds to 8703C
// 867EE: variable 'v123' is possibly undefined
// 867EE: variable 'v124' is possibly undefined
// 867EE: variable 'v125' is possibly undefined
// 867EE: variable 'v126' is possibly undefined
// 867EE: variable 'v127' is possibly undefined
// 86918: variable 'v31' is possibly undefined
// 8691C: variable 'v13' is possibly undefined
// 86B84: variable 'v77' is possibly undefined
// 86C66: variable 'v82' is possibly undefined
// 86CF6: variable 'v87' is possibly undefined
// 86DFC: variable 'v95' is possibly undefined
// 86E12: variable 'v93' is possibly undefined
// 86EE8: variable 'v12' is possibly undefined
// 86EE8: variable 'v14' is possibly undefined
