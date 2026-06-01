/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C8E4
// Address: 0x0008C8E4

//----- (0008C8E4) --------------------------------------------------------
_DWORD *__fastcall sub_8C8E4(int a1, __int64 *a2, int a3)
{
  int v3; // r5
  int v4; // r6
  __int64 *v5; // r1
  __int64 v6; // r2
  int v7; // r6
  __int64 v8; // r2
  unsigned int v9; // r6
  int v10; // r7
  unsigned int v11; // r6
  int v12; // r7
  int v13; // r0
  int v14; // r5
  unsigned __int64 v15; // r0
  unsigned __int64 v16; // kr08_8
  char *v17; // r0
  unsigned int v18; // r6
  char *v19; // r4
  int v20; // r1
  _BOOL4 v21; // r3
  int v22; // r2
  int v23; // r7
  int v24; // r5
  int v25; // r2
  int v26; // r1
  int v27; // r1
  int v28; // r0
  char *v29; // r1
  int v30; // r7
  bool v31; // zf
  int v32; // r6
  int v33; // r7
  unsigned __int64 v34; // r0
  unsigned __int64 v35; // kr28_8
  _BYTE *v36; // r0
  _BYTE *v37; // r4
  int v38; // r1
  unsigned __int64 v39; // kr30_8
  _BOOL4 v40; // r3
  int v41; // r2
  int v42; // r7
  int v43; // r5
  int v44; // r2
  int v45; // r1
  int v46; // r1
  int v47; // r0
  char *v48; // r1
  int v49; // r5
  int v50; // r5
  int v51; // r4
  int v52; // r0
  int v53; // r5
  int v54; // r4
  int v55; // r6
  int v56; // r4
  int v57; // r7
  int v58; // r4
  int v59; // r1
  int v60; // r0
  int v61; // r6
  int v62; // r7
  int v63; // r4
  int v64; // r0
  __int64 v65; // kr48_8
  int v66; // r0
  int v67; // r6
  int v68; // r7
  int v69; // r1
  unsigned int v70; // r1
  int v71; // r0
  int v72; // r6
  unsigned int v73; // r7
  int v74; // r4
  int v75; // r4
  int v76; // r0
  int v77; // r4
  int v78; // r7
  int v79; // r0
  unsigned __int64 v80; // kr50_8
  _DWORD *v81; // r0
  _DWORD *v82; // r4
  int v83; // r0
  int v84; // r1
  int v85; // r0
  char *v87; // r0
  int v88; // r4
  int v89; // r5
  _BOOL4 v90; // r0
  _BOOL4 v91; // r1
  void *v92; // r0
  int v93; // r4
  int v94; // r3
  int v95; // r7
  int v96; // r5
  int v97; // r4
  int v98; // r0
  int v99; // r7
  int v100; // r5
  int v101; // r4
  int v102; // r7
  int v103; // r4
  int v104; // r5
  int v105; // r4
  int v106; // r7
  int v107; // r4
  int v108; // r5
  int v109; // r4
  int v110; // r4
  int v111; // r4
  int v112; // r6
  int v113; // r4
  int v114; // r7
  int v115; // r0
  int v116; // r4
  int v117; // r7
  int v118; // r1
  int v119; // r4
  unsigned int v120; // [sp+1Ch] [bp-130h]
  unsigned int v121; // [sp+24h] [bp-128h]
  int v122; // [sp+30h] [bp-11Ch]
  unsigned int v123; // [sp+34h] [bp-118h]
  int v124; // [sp+34h] [bp-118h]
  int v125; // [sp+34h] [bp-118h]
  int v126; // [sp+34h] [bp-118h]
  int v127; // [sp+34h] [bp-118h]
  int v128; // [sp+38h] [bp-114h]
  unsigned __int64 v129; // [sp+38h] [bp-114h]
  int v130; // [sp+38h] [bp-114h]
  __int64 v131; // [sp+38h] [bp-114h]
  int v132; // [sp+38h] [bp-114h]
  int v133; // [sp+3Ch] [bp-110h]
  int v134; // [sp+3Ch] [bp-110h]
  unsigned int v135; // [sp+40h] [bp-10Ch]
  int v136; // [sp+40h] [bp-10Ch]
  int v137; // [sp+44h] [bp-108h]
  int v138; // [sp+48h] [bp-104h]
  int v140; // [sp+4Ch] [bp-100h]
  unsigned int v141; // [sp+4Ch] [bp-100h]
  int v142; // [sp+4Ch] [bp-100h]
  int v143; // [sp+4Ch] [bp-100h]
  int v144; // [sp+4Ch] [bp-100h]
  _QWORD v145[30]; // [sp+50h] [bp-FCh] BYREF
  __int64 v146; // [sp+140h] [bp-Ch] BYREF

  v3 = a3;
  v4 = 0;
  HIDWORD(v145[4]) = 0;
  LODWORD(v145[5]) = 0;
  if ( a2 )
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 2);
    v5 = (__int64 *)((char *)a2 + 12);
    v145[0] = v6;
    LODWORD(v145[1]) = v7;
    v8 = *v5;
    v9 = *((_DWORD *)v5 + 2);
    v10 = *((_DWORD *)v5 + 3);
    v5 += 2;
    HIDWORD(v145[1]) = v8;
    v145[2] = __PAIR64__(v9, HIDWORD(v8));
    LODWORD(v145[3]) = v10;
    HIDWORD(v8) = *((_DWORD *)v5 + 1);
    v11 = *((_DWORD *)v5 + 2);
    v12 = *((_DWORD *)v5 + 3);
    HIDWORD(v145[3]) = *(_DWORD *)v5;
    v145[4] = __PAIR64__(v11, HIDWORD(v8));
    LODWORD(v145[5]) = v12;
    v4 = 0;
    v3 = a3;
  }
  else
  {
    sub_8F2A8((FILE *(__fastcall **)(int, char *, int))v145);
  }
  HIDWORD(v145[5]) = v3;
  v13 = sub_8F110((int)v145);
  LODWORD(v145[6]) = v13;
  if ( !v13 )
    return (_DWORD *)v4;
  v14 = v13;
  v138 = -1;
  if ( !sub_8F128((int)v145, v13, 0, 0, 2) )
  {
    LODWORD(v15) = sub_8F158((int)v145);
    v16 = v15;
    v123 = HIDWORD(v15);
    if ( v15 >= 0xFFFF )
      v123 = 0;
    v133 = v14;
    v140 = v15;
    if ( v15 >= 0xFFFF )
      v140 = 0xFFFF;
    v17 = (char *)malloc(0x404u);
    v18 = v123;
    if ( v17 )
    {
      v19 = v17;
      v135 = 0;
      v20 = 4;
      do
      {
        if ( __PAIR64__(v135, v20) >= __PAIR64__(v18, v140) )
          goto LABEL_32;
        v21 = __PAIR64__(v18, v140) < __PAIR64__(v135, v20) + 1024;
        if ( __PAIR64__(v18, v140) >= __PAIR64__(v135, v20) + 1024 )
          v18 = (__PAIR64__(v135, v20) + 1024) >> 32;
        v22 = v140;
        if ( !v21 )
          v22 = v20 + 1024;
        v23 = v22;
        if ( __PAIR64__(v18, v22) >= 0x404 )
          v23 = 1028;
        v128 = v22;
        v135 = v18;
        v24 = (v16 - __PAIR64__(v18, v22)) >> 32;
        v121 = v16 - v22;
        if ( sub_8F128((int)v145, v133, v16 - v22, v24, 0)
          || (v18 = v123,
              ((int (__fastcall *)(_DWORD, int, char *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v133, v19, v23) != v23) )
        {
LABEL_32:
          free(v19);
          goto LABEL_33;
        }
        v25 = -1;
        v26 = -1;
        if ( v23 >= 4 )
        {
          v27 = v23 - 4;
          while ( 1 )
          {
            v28 = v27;
            if ( v19[v27] == 80 )
            {
              v29 = &v19[v27];
              if ( v19[v28 + 1] == 75 && v29[2] == 6 && v29[3] == 7 )
                break;
            }
            v27 = v28 - 1;
            if ( v28 <= 0 )
            {
              v25 = -1;
              v26 = -1;
              goto LABEL_29;
            }
          }
          v25 = v121 + v28;
          v26 = (__PAIR64__(v24, v121) + (unsigned int)v28) >> 32;
        }
LABEL_29:
        v30 = v26;
        v31 = (~v26 | ~v25) == 0;
        v20 = v128;
      }
      while ( v31 );
      v87 = v19;
      v88 = v25;
      free(v87);
      v89 = 0;
      if ( !sub_8F128((int)v145, v133, v88, v30, 0)
        && (((int (__fastcall *)(_DWORD, int, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v133, &v146, 4) == 4
         || !((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v133)) )
      {
        if ( ((int (__fastcall *)(_DWORD, int, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v133, &v146, 4) == 4 )
        {
          v90 = v146 == 0;
          v91 = 1;
        }
        else
        {
          v91 = ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v133) == 0;
          v90 = 1;
        }
        if ( v90 && v91 )
        {
          if ( ((int (__fastcall *)(_DWORD, int, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v133, &v146, 8) == 8 )
          {
            v95 = HIDWORD(v146);
            v89 = v146;
          }
          else
          {
            if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v133) )
              goto LABEL_33;
            v95 = 0;
          }
          if ( ((int (__fastcall *)(_DWORD, int, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v133, &v146, 4) != 4 )
            goto LABEL_140;
          if ( (_DWORD)v146 != 1 || sub_8F128((int)v145, v133, v89, v95, 0) )
            goto LABEL_33;
          v143 = 0;
          if ( ((int (__fastcall *)(_DWORD, int, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v133, &v146, 4) == 4 )
          {
            if ( ~v95 | ~v89 && (_DWORD)v146 == 101075792 )
            {
              LODWORD(v145[29]) = 1;
              v138 = v89;
              v137 = v95;
              v96 = sub_8F128((int)v145, v145[6], v89, v95, 0);
              v97 = v145[6];
              v98 = ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                      HIDWORD(v145[3]),
                      v145[6],
                      &v146,
                      4);
              v99 = -1;
              v136 = -1;
              if ( !v96 )
                v99 = 0;
              if ( v98 == 4 || (v100 = -1, !((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v97)) )
                v100 = v99;
              v101 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     8) == 8
                || (v102 = -1, !((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v101)) )
              {
                v102 = v100;
              }
              v103 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     2) == 2
                || (v104 = -1, !((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v103)) )
              {
                v104 = v102;
              }
              v105 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     2) == 2
                || (v106 = -1, !((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v105)) )
              {
                v106 = v104;
              }
              v107 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     4) == 4 )
              {
                v143 = v146;
              }
              else
              {
                v108 = -1;
                if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v107) )
                  goto LABEL_143;
              }
              v108 = v106;
LABEL_143:
              v109 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     4) == 4 )
              {
                HIDWORD(v131) = v146;
              }
              else
              {
                v131 = 0xFFFFFFFFLL;
                if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v109) )
                  goto LABEL_147;
              }
              LODWORD(v131) = v108;
LABEL_147:
              v110 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     8) == 8 )
              {
                v145[7] = v146;
              }
              else
              {
                v145[7] = 0;
                v126 = -1;
                if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v110) )
                  goto LABEL_151;
              }
              v126 = v131;
LABEL_151:
              v111 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     8) == 8 )
              {
                v132 = HIDWORD(v146);
                v112 = v146;
              }
              else
              {
                v112 = 0;
                v132 = 0;
                v122 = -1;
                if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v111) )
                  goto LABEL_155;
              }
              v122 = v126;
LABEL_155:
              v114 = HIDWORD(v145[7]);
              v113 = v145[7];
              v127 = v145[6];
              v115 = ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                       HIDWORD(v145[3]),
                       v145[6],
                       &v146,
                       8);
              v116 = v113 ^ v112 | v114 ^ v132;
              v117 = -103;
              v118 = -103;
              if ( !v116 )
                v118 = v122;
              if ( !(HIDWORD(v131) | v143) )
                v117 = v118;
              if ( v115 == 8 )
              {
                v145[14] = v146;
              }
              else
              {
                v145[14] = 0;
                v144 = -1;
                if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v127) )
                  goto LABEL_163;
              }
              v144 = v117;
LABEL_163:
              v119 = v145[6];
              if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(
                     HIDWORD(v145[3]),
                     v145[6],
                     &v146,
                     8) == 8 )
              {
                v145[15] = v146;
              }
              else
              {
                v145[15] = 0;
                if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v119) )
                {
LABEL_167:
                  v76 = 0;
                  goto LABEL_98;
                }
              }
              v136 = v144;
              goto LABEL_167;
            }
          }
          else
          {
LABEL_140:
            ((void (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v133);
          }
        }
      }
    }
  }
LABEL_33:
  v32 = v145[6];
  v33 = -1;
  v136 = -1;
  if ( !sub_8F128((int)v145, v145[6], 0, 0, 2) )
  {
    LODWORD(v34) = sub_8F158((int)v145);
    v35 = v34;
    HIDWORD(v129) = HIDWORD(v34);
    if ( v34 >= 0xFFFF )
      HIDWORD(v129) = 0;
    LODWORD(v129) = v34;
    if ( v34 >= 0xFFFF )
      LODWORD(v129) = 0xFFFF;
    v36 = malloc(0x404u);
    if ( v36 )
    {
      v37 = v36;
      v141 = 0;
      v38 = 4;
      while ( __PAIR64__(v141, v38) < v129 )
      {
        v39 = __PAIR64__(v141, v38) + 1024;
        v40 = v129 < __PAIR64__(v141, v38) + 1024;
        v141 = HIDWORD(v129);
        if ( v129 >= v39 )
          v141 = HIDWORD(v39);
        v41 = v129;
        if ( !v40 )
          v41 = v39;
        v42 = v41;
        if ( __PAIR64__(v141, v41) >= 0x404 )
          v42 = 1028;
        v124 = v41;
        v43 = (v35 - __PAIR64__(v141, v41)) >> 32;
        v120 = v35 - v41;
        if ( sub_8F128((int)v145, v32, v35 - v41, v43, 0)
          || ((int (__fastcall *)(_DWORD, int, _BYTE *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v32, v37, v42) != v42 )
        {
          break;
        }
        v44 = -1;
        v45 = -1;
        if ( v42 >= 4 )
        {
          v46 = v42 - 4;
          while ( 1 )
          {
            v47 = v46;
            if ( v37[v46] == 80 )
            {
              v48 = &v37[v46];
              if ( v37[v47 + 1] == 75 && v48[2] == 5 && v48[3] == 6 )
                break;
            }
            v46 = v47 - 1;
            if ( v47 <= 0 )
            {
              v44 = -1;
              v45 = -1;
              goto LABEL_57;
            }
          }
          v44 = v120 + v47;
          v45 = (__PAIR64__(v43, v120) + (unsigned int)v47) >> 32;
        }
LABEL_57:
        v49 = v45;
        v31 = (~v45 | ~v44) == 0;
        v38 = v124;
        if ( !v31 )
        {
          v92 = v37;
          v93 = v44;
          free(v92);
          v33 = 0;
          v138 = v93;
          v94 = v49;
          goto LABEL_62;
        }
      }
      free(v37);
      v33 = -1;
    }
  }
  v94 = -1;
LABEL_62:
  LODWORD(v145[29]) = 0;
  v142 = 0;
  v137 = v94;
  v50 = sub_8F128((int)v145, v145[6], v138, v94, 0);
  v51 = v145[6];
  v52 = ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 4);
  v31 = v50 == 0;
  v53 = -1;
  if ( !v31 )
    v33 = -1;
  if ( v52 == 4 || !((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v51) )
    v53 = v33;
  v54 = v145[6];
  if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 2) == 2 )
  {
    v142 = (BYTE1(v146) << 8) + (unsigned __int8)v146;
  }
  else
  {
    v55 = -1;
    if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v54) )
      goto LABEL_71;
  }
  v55 = v53;
LABEL_71:
  v56 = v145[6];
  if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 2) == 2 )
  {
    v134 = (BYTE1(v146) << 8) + (unsigned __int8)v146;
  }
  else
  {
    v134 = 0;
    v57 = -1;
    if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v56) )
      goto LABEL_75;
  }
  v57 = v55;
LABEL_75:
  v58 = v145[6];
  if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 2) == 2 )
  {
    v59 = (BYTE1(v146) << 8) + (unsigned __int8)v146;
  }
  else
  {
    v60 = ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v58);
    v59 = 0;
    v61 = -1;
    if ( v60 )
      goto LABEL_79;
  }
  v61 = v57;
LABEL_79:
  v62 = 0;
  v145[7] = (unsigned int)v59;
  v63 = v145[6];
  if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 2) == 2 )
  {
    v62 = (BYTE1(v146) << 8) + (unsigned __int8)v146;
LABEL_83:
    v64 = v61;
    goto LABEL_84;
  }
  v31 = ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v63) == 0;
  v64 = -1;
  if ( v31 )
    goto LABEL_83;
LABEL_84:
  v125 = v64;
  v65 = v145[7];
  v130 = v145[6];
  v66 = ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 4);
  v67 = v65 ^ v62 | HIDWORD(v65);
  v68 = -103;
  v69 = -103;
  if ( !v67 )
    v69 = v125;
  if ( !(v134 | v142) )
    v68 = v69;
  if ( v66 == 4 )
  {
    v70 = v146;
  }
  else
  {
    v71 = ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v130);
    v70 = 0;
    v72 = -1;
    if ( v71 )
      goto LABEL_92;
  }
  v72 = v68;
LABEL_92:
  v73 = 0;
  v145[14] = v70;
  v74 = v145[6];
  if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 4) == 4 )
  {
    v73 = v146;
  }
  else if ( ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v74) )
  {
    goto LABEL_96;
  }
  v136 = v72;
LABEL_96:
  v145[15] = v73;
  v75 = v145[6];
  if ( ((int (__fastcall *)(_DWORD, _DWORD, __int64 *, int))HIDWORD(v145[0]))(HIDWORD(v145[3]), v145[6], &v146, 2) == 2 )
  {
    v76 = (BYTE1(v146) << 8) + (unsigned __int8)v146;
LABEL_98:
    LODWORD(v145[8]) = v76;
    v77 = v138;
    v78 = v137;
    goto LABEL_100;
  }
  LODWORD(v145[8]) = 0;
  v79 = ((int (__fastcall *)(_DWORD, int))LODWORD(v145[3]))(HIDWORD(v145[3]), v75);
  v77 = v138;
  v78 = v137;
  if ( v79 )
  {
LABEL_104:
    ((void (__fastcall *)(_DWORD, _DWORD))HIDWORD(v145[2]))(HIDWORD(v145[3]), v145[6]);
    return nullptr;
  }
LABEL_100:
  v80 = v145[14] + v145[15];
  if ( v136 || __PAIR64__(v78, v77) < v80 )
    goto LABEL_104;
  v4 = 0;
  v145[28] = 0;
  v145[13] = __PAIR64__(v78, v77);
  v145[9] = __PAIR64__(v78, v77) - v80;
  v81 = malloc(0xF0u);
  if ( v81 )
  {
    v82 = v81;
    qmemcpy(v81, v145, 0xF0u);
    v83 = v82[30];
    v84 = v82[31];
    v82[20] = 0;
    v82[21] = 0;
    v82[22] = v83;
    v82[23] = v84;
    sub_8D2D0((int)v82, v82 + 32, v82 + 54, 0, 0, 0, 0, 0, 0);
    v82[25] = 0;
    v82[24] = v85 == 0;
    return v82;
  }
  return (_DWORD *)v4;
}
// 8C970: variable 'v15' is possibly undefined
// 8CAAA: variable 'v34' is possibly undefined
// 8CE00: variable 'v85' is possibly undefined
