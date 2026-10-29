char __fastcall sub_CA0BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char result; // al
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  bool v15; // zf
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  signed __int64 v18; // rax
  __int64 v19; // rcx
  int *v20; // rbx
  int *v21; // rbp
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // r11
  int v25; // r9d
  __int64 v26; // r15
  __int64 v27; // r8
  char v28; // si
  __int64 v29; // rax
  int v30; // r14d
  char v31; // cl
  char v32; // di
  char v33; // di
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rax
  char v37; // r10
  char v38; // di
  __int64 v39; // rax
  char v40; // si
  __int64 v41; // rax
  void *v42; // r14
  signed __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  int *v45; // rbp
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // r11
  int v49; // r9d
  __int64 v50; // r15
  __int64 v51; // r8
  char v52; // si
  int v53; // r14d
  char v54; // cl
  __int64 v55; // rax
  char v56; // di
  char v57; // dl
  char v58; // di
  int v59; // edx
  __int64 v60; // rdx
  __int64 v61; // rax
  char v62; // r10
  char v63; // di
  __int64 v64; // rax
  char v65; // si
  __int64 v66; // rax
  void *v67; // r14
  unsigned __int64 v68; // rdx
  __int64 v69; // r11
  int v70; // edi
  __int64 v71; // r10
  char v72; // cl
  int v73; // r8d
  __int64 v74; // rsi
  __int64 v75; // rax
  char v76; // dl
  char v77; // r12
  char v78; // r12
  int v79; // ebp
  __int64 v80; // rbp
  __int64 v81; // rax
  char v82; // r12
  void *v83; // rbx
  char v84; // r12
  char v85; // r9
  __int64 v86; // rax
  char v87; // cl
  __int64 v88; // rbp
  __int64 v89; // rbx
  __int64 v90; // rbp
  __int64 v91; // r15
  unsigned int v92; // eax
  unsigned __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rbp
  __int64 v96; // rbx
  int v97; // eax
  __int64 v98; // r11
  int v99; // r9d
  __int64 v100; // r13
  __int64 v101; // r8
  char v102; // si
  __int64 v103; // rax
  int v104; // r12d
  char v105; // cl
  char v106; // di
  char v107; // di
  int v108; // edx
  __int64 v109; // rdx
  __int64 v110; // rax
  char v111; // r10
  char v112; // di
  __int64 v113; // rax
  char v114; // si
  __int64 v115; // rax
  void *v116; // r12
  __int64 v117; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v118; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v119; // [rsp+18h] [rbp-D0h]
  __int64 v120; // [rsp+18h] [rbp-D0h]
  __int64 v121; // [rsp+20h] [rbp-C8h]
  int *v122; // [rsp+20h] [rbp-C8h]
  __int64 v123; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v124; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v125; // [rsp+28h] [rbp-C0h]
  __int64 v127; // [rsp+38h] [rbp-B0h]
  __int64 v128; // [rsp+40h] [rbp-A8h]
  __int64 v130; // [rsp+50h] [rbp-98h]
  __int64 v131; // [rsp+58h] [rbp-90h]
  bool v132; // [rsp+66h] [rbp-82h]
  bool v133; // [rsp+67h] [rbp-81h]
  __int64 v135; // [rsp+78h] [rbp-70h]
  int v136; // [rsp+80h] [rbp-68h] BYREF
  char v137; // [rsp+84h] [rbp-64h]
  __int64 v138; // [rsp+88h] [rbp-60h]
  int v139; // [rsp+90h] [rbp-58h] BYREF
  char v140; // [rsp+94h] [rbp-54h]
  __int64 v141; // [rsp+98h] [rbp-50h]
  __int64 v142; // [rsp+A0h] [rbp-48h]

  v128 = a4;
  result = a4 == 0 || a5 == 0;
  v127 = a5;
  if ( result )
    return result;
  while ( v127 + v128 != 2 )
  {
    if ( v128 <= v127 )
    {
      v7 = a1;
      v88 = v127 / 2;
      v131 = v127 / 2;
      v9 = a2 + 40 * (v127 / 2);
      v89 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - a1) >> 3);
      if ( a2 - a1 <= 0 )
      {
        v132 = 0;
        v130 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v90 = v89 >> 1;
            v91 = v7 + 40 * (v89 >> 1);
            if ( (*(_BYTE *)(v91 + 20) & 1) != 0
              || *(_DWORD *)(v91 + 16) != 1
              || (*(_BYTE *)(v9 + 20) & 1) != 0
              || *(_DWORD *)(v9 + 16) != 1 )
            {
              LOBYTE(v92) = sub_1848D40(qword_1C7F2C0, v7 + 40 * (v89 >> 1), v9);
            }
            else if ( (*(_BYTE *)(v91 + 4) & 1) != 0 || (*(_BYTE *)(v9 + 4) & 1) != 0 )
            {
              v92 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v7 + 40 * (v89 >> 1), v9) >> 31;
            }
            else
            {
              LOBYTE(v92) = *(_DWORD *)v91 < *(_DWORD *)v9;
            }
            if ( !(_BYTE)v92 )
              break;
            v89 >>= 1;
            if ( v90 <= 0 )
              goto LABEL_44;
          }
          v7 = v91 + 40;
          v89 = v89 - v90 - 1;
        }
        while ( v89 > 0 );
LABEL_44:
        v88 = v127 / 2;
        v93 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - a1) >> 3);
        v15 = v128 == v93;
        v128 -= v93;
        v130 = v93;
        v132 = v15;
      }
      v15 = v127 == v88;
      v127 -= v88;
      v13 = a2;
      v133 = v15;
      if ( v7 != a2 )
        goto LABEL_12;
    }
    else
    {
      v6 = v128 / 2;
      v130 = v128 / 2;
      v7 = a1 + 40 * (v128 / 2);
      v8 = 0xCCCCCCCCCCCCCCCDLL * ((a3 - a2) >> 3);
      if ( a3 - a2 <= 0 )
      {
        v15 = v128 == v6;
        v128 -= v6;
        v9 = v7;
        v133 = 0;
        v132 = v15;
        result = sub_CA0BA0(a1, v7, v7, v130, 0);
        goto LABEL_56;
      }
      v117 = v128 / 2;
      v9 = a2;
      do
      {
        while ( 1 )
        {
          v10 = v8 >> 1;
          v11 = v9 + 40 * (v8 >> 1);
          if ( (*(_BYTE *)(v7 + 20) & 1) != 0
            || *(_DWORD *)(v7 + 16) != 1
            || (*(_BYTE *)(v11 + 20) & 1) != 0
            || *(_DWORD *)(v11 + 16) != 1 )
          {
            LOBYTE(v12) = sub_1848D40(qword_1C7F2C0, v7, v9 + 40 * (v8 >> 1));
          }
          else if ( (*(_BYTE *)(v7 + 4) & 1) != 0 || (*(_BYTE *)(v11 + 4) & 1) != 0 )
          {
            v12 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v7, v9 + 40 * (v8 >> 1)) >> 31;
          }
          else
          {
            LOBYTE(v12) = *(_DWORD *)v7 < *(_DWORD *)v11;
          }
          if ( (_BYTE)v12 )
            break;
          v8 >>= 1;
          if ( v10 <= 0 )
            goto LABEL_11;
        }
        v9 = v11 + 40;
        v8 = v8 - v10 - 1;
      }
      while ( v8 > 0 );
LABEL_11:
      v13 = a2;
      v14 = 0xCCCCCCCCCCCCCCCDLL * ((v9 - a2) >> 3);
      v15 = v127 == v14;
      v127 -= v14;
      v131 = v14;
      v133 = v15;
      v15 = v128 == v117;
      v128 -= v117;
      v132 = v15;
      if ( v7 != a2 )
      {
LABEL_12:
        if ( v9 == v13 )
        {
          v9 = v7;
        }
        else
        {
          v16 = 0xCCCCCCCCCCCCCCCDLL * ((v9 - v7) >> 3);
          v118 = 0xCCCCCCCCCCCCCCCDLL * ((v13 - v7) >> 3);
          if ( v118 == v16 - v118 )
          {
            v120 = v7;
            v95 = v7;
            v96 = a2;
            v123 = v9;
            do
            {
              v97 = *(_DWORD *)v96;
              v98 = *(_QWORD *)(v95 + 24);
              *(_QWORD *)(v95 + 24) = 0;
              v99 = *(_DWORD *)v95;
              v100 = *(_QWORD *)(v95 + 8);
              *(_QWORD *)(v95 + 8) = 0;
              v101 = *(_QWORD *)(v95 + 32);
              v102 = *(_BYTE *)(v95 + 4);
              *(_DWORD *)v95 = v97;
              v103 = *(_QWORD *)(v96 + 8);
              v104 = *(_DWORD *)(v95 + 16);
              v105 = *(_BYTE *)(v95 + 20);
              *(_DWORD *)v96 = v99;
              *(_QWORD *)(v95 + 8) = v103;
              v106 = *(_BYTE *)(v96 + 4);
              *(_QWORD *)(v96 + 8) = 0;
              LOBYTE(v103) = *(_BYTE *)(v95 + 4);
              v142 = v101;
              *(_BYTE *)(v95 + 4) = v106 & 2 | v103 & 0xFD;
              LOBYTE(v103) = v103 & 2 | *(_BYTE *)(v96 + 4) & 0xFD;
              *(_BYTE *)(v96 + 4) = v103;
              v107 = *(_BYTE *)(v95 + 4);
              *(_BYTE *)(v95 + 4) = v103 & 1 | v107 & 0xFE;
              v108 = *(_DWORD *)(v96 + 16);
              *(_BYTE *)(v96 + 4) = v107 & 1 | *(_BYTE *)(v96 + 4) & 0xFE;
              LODWORD(v103) = *(_DWORD *)(v95 + 16);
              *(_DWORD *)(v95 + 16) = v108;
              v109 = *(_QWORD *)(v96 + 24);
              *(_DWORD *)(v96 + 16) = v103;
              v110 = *(_QWORD *)(v95 + 24);
              *(_QWORD *)(v95 + 24) = v109;
              *(_QWORD *)(v96 + 24) = v110;
              LOBYTE(v109) = *(_BYTE *)(v95 + 20);
              LOBYTE(v110) = *(_BYTE *)(v96 + 20) & 2 | v109 & 0xFD;
              *(_BYTE *)(v95 + 20) = v110;
              v111 = v110 & 1;
              v112 = v137;
              *(_BYTE *)(v95 + 20) = *(_BYTE *)(v96 + 20) & 1 | v110 & 0xFE;
              *(_QWORD *)(v95 + 32) = *(_QWORD *)(v96 + 32);
              LODWORD(v110) = *(_DWORD *)v96;
              *(_DWORD *)v96 = v99;
              v136 = v110;
              v113 = *(_QWORD *)(v96 + 8);
              *(_QWORD *)(v96 + 32) = v101;
              v138 = v113;
              LOBYTE(v113) = *(_BYTE *)(v96 + 4);
              *(_QWORD *)(v96 + 8) = v100;
              LOBYTE(v99) = v113;
              v137 = v112 & 0xFC | v113 & 3;
              LODWORD(v113) = *(_DWORD *)(v96 + 16);
              LOBYTE(v99) = v102 & 3 | v99 & 0xFC;
              v114 = v109;
              LOBYTE(v109) = v140;
              *(_BYTE *)(v96 + 4) = v99;
              v139 = v113;
              v115 = *(_QWORD *)(v96 + 24);
              *(_DWORD *)(v96 + 16) = v104;
              v116 = qword_1C7F2C0;
              v141 = v115;
              LOBYTE(v115) = *(_BYTE *)(v96 + 20);
              *(_QWORD *)(v96 + 24) = v98;
              v140 = v111 | v114 & 2 | v109 & 0xFC;
              *(_BYTE *)(v96 + 20) = v115 & 0xFC | v105 & 3;
              sub_182CBA0(v116, &v136);
              v95 += 40;
              v96 += 40;
              sub_182CBA0(v116, &v139);
            }
            while ( v95 != a2 );
            v9 = a2;
            v7 = v120;
            a2 = v123;
          }
          else
          {
            v17 = v7;
            v18 = 0xCCCCCCCCCCCCCCCDLL * ((v13 - v7) >> 3);
            v135 = v9;
            while ( 1 )
            {
              v19 = v16 - v18;
              v119 = v16 - v18;
              if ( v18 < (__int64)(v16 - v18) )
                break;
LABEL_22:
              v44 = v17 + 40 * v16;
              v17 = v44 - 40 * v119;
              if ( (__int64)v118 > 0 )
              {
                v122 = (int *)(v44 - 40 * v119);
                v45 = v122;
                v46 = 0;
                v125 = v16;
                do
                {
                  v47 = *(_DWORD *)(v44 - 40);
                  v48 = *((_QWORD *)v45 - 2);
                  v44 -= 40LL;
                  v45 -= 10;
                  v49 = *v45;
                  v50 = *((_QWORD *)v45 + 1);
                  *((_QWORD *)v45 + 3) = 0;
                  v51 = *((_QWORD *)v45 + 4);
                  v52 = *((_BYTE *)v45 + 4);
                  *((_QWORD *)v45 + 1) = 0;
                  v53 = v45[4];
                  v54 = *((_BYTE *)v45 + 20);
                  *v45 = v47;
                  v55 = *(_QWORD *)(v44 + 8);
                  *(_DWORD *)v44 = v49;
                  v142 = v51;
                  *((_QWORD *)v45 + 1) = v55;
                  v56 = *(_BYTE *)(v44 + 4);
                  *(_QWORD *)(v44 + 8) = 0;
                  v57 = *((_BYTE *)v45 + 4);
                  *((_BYTE *)v45 + 4) = v56 & 2 | v57 & 0xFD;
                  LOBYTE(v55) = v57 & 2 | *(_BYTE *)(v44 + 4) & 0xFD;
                  *(_BYTE *)(v44 + 4) = v55;
                  v58 = *((_BYTE *)v45 + 4);
                  *((_BYTE *)v45 + 4) = v55 & 1 | v58 & 0xFE;
                  v59 = *(_DWORD *)(v44 + 16);
                  *(_BYTE *)(v44 + 4) = v58 & 1 | *(_BYTE *)(v44 + 4) & 0xFE;
                  LODWORD(v55) = v45[4];
                  v45[4] = v59;
                  v60 = *(_QWORD *)(v44 + 24);
                  *(_DWORD *)(v44 + 16) = v55;
                  v61 = *((_QWORD *)v45 + 3);
                  *((_QWORD *)v45 + 3) = v60;
                  *(_QWORD *)(v44 + 24) = v61;
                  LOBYTE(v60) = *((_BYTE *)v45 + 20);
                  LOBYTE(v61) = *(_BYTE *)(v44 + 20) & 2 | v60 & 0xFD;
                  *((_BYTE *)v45 + 20) = v61;
                  v62 = v61 & 1;
                  v63 = v137;
                  *((_BYTE *)v45 + 20) = *(_BYTE *)(v44 + 20) & 1 | v61 & 0xFE;
                  *((_QWORD *)v45 + 4) = *(_QWORD *)(v44 + 32);
                  LODWORD(v61) = *(_DWORD *)v44;
                  *(_DWORD *)v44 = v49;
                  v136 = v61;
                  v64 = *(_QWORD *)(v44 + 8);
                  *(_QWORD *)(v44 + 32) = v51;
                  v138 = v64;
                  LOBYTE(v64) = *(_BYTE *)(v44 + 4);
                  *(_QWORD *)(v44 + 8) = v50;
                  LOBYTE(v49) = v64;
                  v137 = v63 & 0xFC | v64 & 3;
                  LODWORD(v64) = *(_DWORD *)(v44 + 16);
                  LOBYTE(v49) = v52 & 3 | v49 & 0xFC;
                  v65 = *(_BYTE *)(v44 + 20);
                  *(_BYTE *)(v44 + 4) = v49;
                  v139 = v64;
                  v66 = *(_QWORD *)(v44 + 24);
                  *(_DWORD *)(v44 + 16) = v53;
                  v67 = qword_1C7F2C0;
                  v141 = v66;
                  LOBYTE(v66) = v60;
                  LOBYTE(v60) = v140;
                  *(_QWORD *)(v44 + 24) = v48;
                  *(_BYTE *)(v44 + 20) = v65 & 0xFC | v54 & 3;
                  ++v46;
                  v140 = v62 | v66 & 2 | v60 & 0xFC;
                  sub_182CBA0(v67, &v136);
                  sub_182CBA0(v67, &v139);
                }
                while ( v118 != v46 );
                v16 = v125;
                v17 = (__int64)&v122[-10 * v118];
              }
              v68 = v16 % v119;
              v118 = v16 % v119;
              if ( !(v16 % v119) )
                goto LABEL_54;
              v16 = v119;
              v18 = v68;
            }
            while ( 1 )
            {
              v20 = (int *)(v17 + 40 * v18);
              if ( v19 > 0 )
              {
                v121 = v17;
                v21 = (int *)v17;
                v22 = 0;
                v124 = v16;
                do
                {
                  v23 = *v20;
                  v24 = *((_QWORD *)v21 + 3);
                  *((_QWORD *)v21 + 3) = 0;
                  v25 = *v21;
                  v26 = *((_QWORD *)v21 + 1);
                  *((_QWORD *)v21 + 1) = 0;
                  v27 = *((_QWORD *)v21 + 4);
                  v28 = *((_BYTE *)v21 + 4);
                  *v21 = v23;
                  v29 = *((_QWORD *)v20 + 1);
                  v30 = v21[4];
                  v31 = *((_BYTE *)v21 + 20);
                  *v20 = v25;
                  *((_QWORD *)v21 + 1) = v29;
                  v32 = *((_BYTE *)v20 + 4);
                  *((_QWORD *)v20 + 1) = 0;
                  LOBYTE(v29) = *((_BYTE *)v21 + 4);
                  v142 = v27;
                  *((_BYTE *)v21 + 4) = v32 & 2 | v29 & 0xFD;
                  LOBYTE(v29) = v29 & 2 | v20[1] & 0xFD;
                  *((_BYTE *)v20 + 4) = v29;
                  v33 = *((_BYTE *)v21 + 4);
                  *((_BYTE *)v21 + 4) = v29 & 1 | v33 & 0xFE;
                  v34 = v20[4];
                  *((_BYTE *)v20 + 4) = v33 & 1 | v20[1] & 0xFE;
                  LODWORD(v29) = v21[4];
                  v21[4] = v34;
                  v35 = *((_QWORD *)v20 + 3);
                  v20[4] = v29;
                  v36 = *((_QWORD *)v21 + 3);
                  *((_QWORD *)v21 + 3) = v35;
                  *((_QWORD *)v20 + 3) = v36;
                  LOBYTE(v35) = *((_BYTE *)v21 + 20);
                  LOBYTE(v36) = v20[5] & 2 | v35 & 0xFD;
                  *((_BYTE *)v21 + 20) = v36;
                  v37 = v36 & 1;
                  v38 = v137;
                  *((_BYTE *)v21 + 20) = v20[5] & 1 | v36 & 0xFE;
                  *((_QWORD *)v21 + 4) = *((_QWORD *)v20 + 4);
                  LODWORD(v36) = *v20;
                  *v20 = v25;
                  v136 = v36;
                  v39 = *((_QWORD *)v20 + 1);
                  *((_QWORD *)v20 + 4) = v27;
                  v138 = v39;
                  LOBYTE(v39) = *((_BYTE *)v20 + 4);
                  *((_QWORD *)v20 + 1) = v26;
                  LOBYTE(v25) = v39;
                  v137 = v38 & 0xFC | v39 & 3;
                  LODWORD(v39) = v20[4];
                  LOBYTE(v25) = v28 & 3 | v25 & 0xFC;
                  v40 = *((_BYTE *)v20 + 20);
                  *((_BYTE *)v20 + 4) = v25;
                  v139 = v39;
                  v41 = *((_QWORD *)v20 + 3);
                  v20[4] = v30;
                  v42 = qword_1C7F2C0;
                  v141 = v41;
                  LOBYTE(v41) = v35;
                  LOBYTE(v35) = v140;
                  *((_QWORD *)v20 + 3) = v24;
                  *((_BYTE *)v20 + 20) = v40 & 0xFC | v31 & 3;
                  v140 = v37 | v41 & 2 | v35 & 0xFC;
                  sub_182CBA0(v42, &v136);
                  v21 += 10;
                  v20 += 10;
                  ++v22;
                  sub_182CBA0(v42, &v139);
                }
                while ( v119 != v22 );
                v16 = v124;
                v17 = v121 + 40 * v119;
              }
              v43 = v16 % v118;
              if ( !(v16 % v118) )
                break;
              v16 = v118;
              v18 = v118 - v43;
              v118 = v18;
              v19 = v43;
              v119 = v43;
              if ( v18 >= v43 )
                goto LABEL_22;
            }
LABEL_54:
            v94 = a2;
            a2 = v135;
            v9 = v7 + v135 - v94;
          }
        }
        goto LABEL_55;
      }
    }
    a2 = v9;
LABEL_55:
    result = sub_CA0BA0(a1, v7, v9, v130, v131);
LABEL_56:
    if ( v132 || v133 )
      return result;
    a1 = v9;
  }
  result = sub_3ED700((__int64)qword_1C7F2C0, a1, a2);
  if ( result )
  {
    v69 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0;
    v70 = *(_DWORD *)a1;
    v71 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0;
    v72 = *(_BYTE *)(a1 + 4);
    v73 = *(_DWORD *)(a1 + 16);
    v74 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    v75 = *(_QWORD *)(a2 + 8);
    v76 = *(_BYTE *)(a1 + 20);
    *(_DWORD *)a2 = v70;
    *(_QWORD *)(a1 + 8) = v75;
    v77 = *(_BYTE *)(a2 + 4);
    *(_QWORD *)(a2 + 8) = 0;
    LOBYTE(v75) = *(_BYTE *)(a1 + 4);
    v142 = v74;
    *(_BYTE *)(a1 + 4) = v77 & 2 | v75 & 0xFD;
    LOBYTE(v75) = v75 & 2 | *(_BYTE *)(a2 + 4) & 0xFD;
    *(_BYTE *)(a2 + 4) = v75;
    v78 = *(_BYTE *)(a1 + 4);
    *(_BYTE *)(a1 + 4) = v78 & 0xFE | v75 & 1;
    v79 = *(_DWORD *)(a2 + 16);
    *(_BYTE *)(a2 + 4) = v78 & 1 | *(_BYTE *)(a2 + 4) & 0xFE;
    LODWORD(v75) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v79;
    v80 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 16) = v75;
    v81 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v80;
    v82 = *(_BYTE *)(a2 + 20);
    *(_QWORD *)(a2 + 24) = v81;
    v83 = qword_1C7F2C0;
    LOBYTE(v80) = *(_BYTE *)(a1 + 20) & 2;
    LOBYTE(v81) = v82 & 2 | *(_BYTE *)(a1 + 20) & 0xFD;
    *(_BYTE *)(a1 + 20) = v81;
    v84 = v81 & 1;
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20) & 1 | v81 & 0xFE;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    LODWORD(v81) = *(_DWORD *)a2;
    v85 = v137;
    *(_DWORD *)a2 = v70;
    v136 = v81;
    v86 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 32) = v74;
    v138 = v86;
    LOBYTE(v86) = *(_BYTE *)(a2 + 4);
    *(_QWORD *)(a2 + 8) = v69;
    LOBYTE(v70) = v86;
    v137 = v85 & 0xFC | v86 & 3;
    LODWORD(v86) = *(_DWORD *)(a2 + 16);
    *(_BYTE *)(a2 + 4) = v70 & 0xFC | v72 & 3;
    v87 = *(_BYTE *)(a2 + 20);
    v139 = v86;
    v141 = *(_QWORD *)(a2 + 24);
    LOBYTE(v86) = v140;
    *(_QWORD *)(a2 + 24) = v71;
    *(_DWORD *)(a2 + 16) = v73;
    *(_BYTE *)(a2 + 20) = v87 & 0xFC | v76 & 3;
    v140 = v84 | v80 | v86 & 0xFC;
    sub_182CBA0(v83, &v136);
    return sub_182CBA0(v83, &v139);
  }
  return result;
}

