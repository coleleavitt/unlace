_DWORD *__fastcall sub_CA9250(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6, __int64 a7)
{
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned int v17; // eax
  __int64 v18; // r8
  _DWORD *v19; // r12
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r15
  unsigned int v26; // eax
  _DWORD *v28; // r12
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // r13
  signed __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r11
  int v39; // r8d
  char v40; // si
  __int64 v41; // r15
  int v42; // r13d
  char v43; // cl
  char v44; // r14
  __int64 v45; // rax
  char v46; // di
  char v47; // dl
  char v48; // di
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // rax
  char v52; // r9
  __int64 v53; // rax
  char v54; // di
  char v55; // si
  __int64 v56; // rax
  void *v57; // r13
  signed __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  int *v60; // rbp
  __int64 v61; // r12
  __int64 v62; // rax
  __int64 v63; // r11
  int v64; // r8d
  char v65; // si
  __int64 v66; // r15
  int v67; // r13d
  char v68; // cl
  char v69; // r14
  __int64 v70; // rax
  char v71; // di
  char v72; // dl
  char v73; // di
  int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // rax
  char v77; // r9
  __int64 v78; // rax
  char v79; // di
  char v80; // si
  __int64 v81; // rax
  void *v82; // r13
  unsigned __int64 v83; // rdx
  char *v84; // rcx
  __int64 v85; // r14
  char *v86; // r13
  __int64 v87; // rax
  __int64 v88; // r10
  __int64 v89; // rbp
  int v90; // r8d
  int v91; // r11d
  char v92; // si
  char v93; // cl
  __int64 v94; // rax
  char v95; // di
  char v96; // dl
  char v97; // di
  int v98; // edx
  __int64 v99; // rdx
  __int64 v100; // rax
  char v101; // r9
  char v102; // di
  __int64 v103; // rax
  void *v104; // rbp
  void *v105; // rdi
  char v106; // si
  __int64 v107; // rax
  char v108; // cl
  __int64 v109; // rax
  __int64 v110; // [rsp+0h] [rbp-F8h]
  int v111; // [rsp+0h] [rbp-F8h]
  int v112; // [rsp+0h] [rbp-F8h]
  __int64 v113; // [rsp+8h] [rbp-F0h]
  __int64 v114; // [rsp+8h] [rbp-F0h]
  char *v115; // [rsp+10h] [rbp-E8h]
  __int64 v116; // [rsp+18h] [rbp-E0h]
  int v117; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v118; // [rsp+20h] [rbp-D8h]
  __int64 v120; // [rsp+30h] [rbp-C8h]
  char *v121; // [rsp+38h] [rbp-C0h]
  _DWORD *v122; // [rsp+48h] [rbp-B0h]
  __int64 v123; // [rsp+50h] [rbp-A8h]
  __int64 v124; // [rsp+58h] [rbp-A0h]
  int *v125; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v126; // [rsp+60h] [rbp-98h]
  unsigned __int64 v127; // [rsp+60h] [rbp-98h]
  __int64 v129; // [rsp+70h] [rbp-88h]
  char *v130; // [rsp+78h] [rbp-80h]
  int v131; // [rsp+80h] [rbp-78h]
  __int64 v132; // [rsp+88h] [rbp-70h]
  int v133; // [rsp+90h] [rbp-68h] BYREF
  char v134; // [rsp+94h] [rbp-64h]
  __int64 v135; // [rsp+98h] [rbp-60h]
  int v136; // [rsp+A0h] [rbp-58h] BYREF
  char v137; // [rsp+A4h] [rbp-54h]
  __int64 v138; // [rsp+A8h] [rbp-50h]
  __int64 v139; // [rsp+B0h] [rbp-48h]

  v7 = a4;
  v8 = a5;
  v9 = a4;
  if ( a5 <= a4 )
    v9 = a5;
  v10 = a3;
  v121 = a1;
  if ( a7 < v9 )
  {
    v11 = a4;
    v120 = a5;
    v122 = a6;
    if ( a5 >= a4 )
      goto LABEL_20;
LABEL_5:
    v123 = v11 / 2;
    v12 = (__int64)&v121[40 * (v11 / 2)];
    v13 = 0xCCCCCCCCCCCCCCCDLL * ((a3 - (__int64)a2) >> 3);
    if ( a3 - (__int64)a2 > 0 )
    {
      v14 = (__int64)a2;
      v110 = v11;
      v113 = v11 / 2;
      do
      {
        while ( 1 )
        {
          v15 = v13 >> 1;
          v16 = v14 + 40 * (v13 >> 1);
          if ( (*(_BYTE *)(v12 + 20) & 1) != 0
            || *(_DWORD *)(v12 + 16) != 1
            || (*(_BYTE *)(v16 + 20) & 1) != 0
            || *(_DWORD *)(v16 + 16) != 1 )
          {
            LOBYTE(v17) = sub_1848D40(qword_1C7F2C0, v12, v14 + 40 * (v13 >> 1));
          }
          else if ( (*(_BYTE *)(v12 + 4) & 1) != 0 || (*(_BYTE *)(v16 + 4) & 1) != 0 )
          {
            v17 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v12, v14 + 40 * (v13 >> 1)) >> 31;
          }
          else
          {
            LOBYTE(v17) = *(_DWORD *)v12 < *(_DWORD *)v16;
          }
          if ( (_BYTE)v17 )
            break;
          v13 >>= 1;
          if ( v15 <= 0 )
            goto LABEL_12;
        }
        v14 = v16 + 40;
        v13 = v13 - v15 - 1;
      }
      while ( v13 > 0 );
LABEL_12:
      v11 = v110 - v113;
      v18 = 0xCCCCCCCCCCCCCCCDLL * ((v14 - (__int64)a2) >> 3);
      v120 -= v18;
      if ( v18 >= v110 - v113 )
        goto LABEL_29;
LABEL_13:
      if ( a7 < v18 )
        goto LABEL_29;
      if ( v18 )
      {
        v111 = v18;
        v19 = sub_CA7DC0(a2, v14, v122);
        sub_CA8B50(v12, (__int64)a2, v14);
        v20 = sub_CA7DC0(v122, (__int64)v19, (_DWORD *)v12);
        LODWORD(v18) = v111;
        a2 = (char *)v14;
        v14 = (__int64)v20;
        goto LABEL_16;
      }
LABEL_70:
      a2 = (char *)v14;
      v14 = v12;
      goto LABEL_16;
    }
    v11 -= v11 / 2;
    if ( v11 > 0 )
    {
      LODWORD(v18) = 0;
      v14 = (__int64)a2;
      if ( a7 >= 0 )
        goto LABEL_70;
    }
    v14 = (__int64)a2;
    LODWORD(v18) = 0;
    if ( a7 < v11 )
    {
      if ( (char *)v12 == a2 )
        goto LABEL_16;
      goto LABEL_70;
    }
LABEL_30:
    if ( !v11 )
    {
LABEL_31:
      a2 = (char *)v14;
      goto LABEL_16;
    }
    v112 = v18;
    v28 = sub_CA7DC0((_DWORD *)v12, (__int64)a2, v122);
    sub_CA7DC0(a2, v14, (_DWORD *)v12);
    v29 = sub_CA8B50((__int64)v122, (__int64)v28, v14);
    a2 = (char *)v14;
    LODWORD(v18) = v112;
    v14 = v29;
    while ( 1 )
    {
LABEL_16:
      sub_CA9250((_DWORD)v121, v12, v14, v123, v18, (_DWORD)v122, a7);
      v21 = v120;
      if ( v120 > v11 )
        v21 = v11;
      if ( v21 <= a7 )
        break;
      v121 = (char *)v14;
      if ( v120 < v11 )
        goto LABEL_5;
LABEL_20:
      v12 = (__int64)v121;
      v22 = v120 / 2;
      v18 = v120 / 2;
      v14 = (__int64)&a2[40 * (v120 / 2)];
      v23 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - v121) >> 3);
      if ( a2 - v121 <= 0 )
      {
        LODWORD(v123) = 0;
      }
      else
      {
        v114 = v11;
        do
        {
          while ( 1 )
          {
            v24 = v23 >> 1;
            v25 = v12 + 40 * (v23 >> 1);
            if ( (*(_BYTE *)(v25 + 20) & 1) != 0
              || *(_DWORD *)(v25 + 16) != 1
              || (*(_BYTE *)(v14 + 20) & 1) != 0
              || *(_DWORD *)(v14 + 16) != 1 )
            {
              LOBYTE(v26) = sub_1848D40(qword_1C7F2C0, v12 + 40 * (v23 >> 1), v14);
            }
            else if ( (*(_BYTE *)(v25 + 4) & 1) != 0 || (*(_BYTE *)(v14 + 4) & 1) != 0 )
            {
              v26 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v12 + 40 * (v23 >> 1), v14) >> 31;
            }
            else
            {
              LOBYTE(v26) = *(_DWORD *)v25 < *(_DWORD *)v14;
            }
            if ( !(_BYTE)v26 )
              break;
            v23 >>= 1;
            if ( v24 <= 0 )
              goto LABEL_27;
          }
          v12 = v25 + 40;
          v23 = v23 - v24 - 1;
        }
        while ( v23 > 0 );
LABEL_27:
        v18 = v120 / 2;
        v22 = v120 / 2;
        v123 = 0xCCCCCCCCCCCCCCCDLL * ((v12 - (__int64)v121) >> 3);
        v11 = v114 - v123;
      }
      v120 -= v22;
      if ( v18 < v11 )
        goto LABEL_13;
LABEL_29:
      if ( a7 >= v11 )
        goto LABEL_30;
      if ( (char *)v12 == a2 )
        goto LABEL_31;
      if ( (char *)v14 == a2 )
        goto LABEL_70;
      if ( 0xCCCCCCCCCCCCCCCDLL * ((__int64)&a2[-v12] >> 3) == 0xCCCCCCCCCCCCCCCDLL * ((v14 - v12) >> 3)
                                                             - 0xCCCCCCCCCCCCCCCDLL * ((__int64)&a2[-v12] >> 3) )
      {
        v85 = v12;
        v115 = (char *)v14;
        v117 = v18;
        v86 = a2;
        do
        {
          v87 = *(_QWORD *)(v85 + 32);
          v88 = *(_QWORD *)(v85 + 24);
          *(_QWORD *)(v85 + 24) = 0;
          v89 = *(_QWORD *)(v85 + 8);
          v90 = *(_DWORD *)v85;
          *(_QWORD *)(v85 + 8) = 0;
          v91 = *(_DWORD *)(v85 + 16);
          v92 = *(_BYTE *)(v85 + 4);
          v93 = *(_BYTE *)(v85 + 20);
          v139 = v87;
          *(_DWORD *)v85 = *(_DWORD *)v86;
          v94 = *((_QWORD *)v86 + 1);
          *(_DWORD *)v86 = v90;
          *(_QWORD *)(v85 + 8) = v94;
          v95 = v86[4];
          *((_QWORD *)v86 + 1) = 0;
          v96 = *(_BYTE *)(v85 + 4);
          *(_BYTE *)(v85 + 4) = v95 & 2 | v96 & 0xFD;
          LOBYTE(v94) = v96 & 2 | v86[4] & 0xFD;
          v86[4] = v94;
          v97 = *(_BYTE *)(v85 + 4);
          *(_BYTE *)(v85 + 4) = v94 & 1 | v97 & 0xFE;
          v98 = *((_DWORD *)v86 + 4);
          v86[4] = v97 & 1 | v86[4] & 0xFE;
          LODWORD(v94) = *(_DWORD *)(v85 + 16);
          *(_DWORD *)(v85 + 16) = v98;
          v99 = *((_QWORD *)v86 + 3);
          *((_DWORD *)v86 + 4) = v94;
          v100 = *(_QWORD *)(v85 + 24);
          *(_QWORD *)(v85 + 24) = v99;
          *((_QWORD *)v86 + 3) = v100;
          LOBYTE(v99) = *(_BYTE *)(v85 + 20);
          LOBYTE(v100) = v86[20] & 2 | v99 & 0xFD;
          *(_BYTE *)(v85 + 20) = v100;
          v101 = v100 & 1;
          *(_BYTE *)(v85 + 20) = v86[20] & 1 | v100 & 0xFE;
          v102 = v134;
          *(_QWORD *)(v85 + 32) = *((_QWORD *)v86 + 4);
          LODWORD(v100) = *(_DWORD *)v86;
          *(_DWORD *)v86 = v90;
          v133 = v100;
          v103 = *((_QWORD *)v86 + 1);
          *((_QWORD *)v86 + 1) = v89;
          v104 = qword_1C7F2C0;
          v135 = v103;
          LOBYTE(v90) = v86[4];
          LOBYTE(v103) = v102 & 0xFC | v90 & 3;
          v105 = qword_1C7F2C0;
          v134 = v103;
          LODWORD(v103) = *((_DWORD *)v86 + 4);
          LOBYTE(v90) = v92 & 3 | v90 & 0xFC;
          v106 = v99;
          LOBYTE(v99) = v137;
          v86[4] = v90;
          v136 = v103;
          v107 = *((_QWORD *)v86 + 3);
          *((_DWORD *)v86 + 4) = v91;
          v138 = v107;
          LOBYTE(v107) = v86[20];
          *((_QWORD *)v86 + 3) = v88;
          v137 = v101 | v106 & 2 | v99 & 0xFC;
          v108 = v107 & 0xFC | v93 & 3;
          v109 = v139;
          v86[20] = v108;
          *((_QWORD *)v86 + 4) = v109;
          sub_182CBA0(v105, &v133);
          v85 += 40;
          v86 += 40;
          sub_182CBA0(v104, &v136);
        }
        while ( (char *)v85 != a2 );
        LODWORD(v18) = v117;
        v14 = (__int64)a2;
        a2 = v115;
      }
      else
      {
        v129 = v12;
        v30 = v12;
        v31 = 0xCCCCCCCCCCCCCCCDLL * ((v14 - v12) >> 3);
        v32 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)&a2[-v12] >> 3);
        v130 = (char *)v14;
        v131 = v18;
        v116 = v32;
        v132 = v11;
        while ( 1 )
        {
          v33 = v31 - v32;
          v118 = v31 - v32;
          if ( v32 < (__int64)(v31 - v32) )
            break;
LABEL_60:
          v59 = v30 + 40 * v31;
          v30 = v59 - 40 * v118;
          if ( v116 > 0 )
          {
            v125 = (int *)(v59 - 40 * v118);
            v60 = v125;
            v61 = 0;
            v127 = v31;
            do
            {
              v62 = *((_QWORD *)v60 - 1);
              v59 -= 40LL;
              v63 = *((_QWORD *)v60 - 2);
              v60 -= 10;
              v64 = *v60;
              v65 = *((_BYTE *)v60 + 4);
              *((_QWORD *)v60 + 3) = 0;
              v66 = *((_QWORD *)v60 + 1);
              v67 = v60[4];
              *((_QWORD *)v60 + 1) = 0;
              v68 = *((_BYTE *)v60 + 20);
              v139 = v62;
              v69 = v65 & 1;
              *v60 = *(_DWORD *)v59;
              v70 = *(_QWORD *)(v59 + 8);
              *(_DWORD *)v59 = v64;
              *((_QWORD *)v60 + 1) = v70;
              v71 = *(_BYTE *)(v59 + 4);
              *(_QWORD *)(v59 + 8) = 0;
              v72 = *((_BYTE *)v60 + 4);
              *((_BYTE *)v60 + 4) = v71 & 2 | v72 & 0xFD;
              LOBYTE(v70) = v72 & 2 | *(_BYTE *)(v59 + 4) & 0xFD;
              *(_BYTE *)(v59 + 4) = v70;
              v73 = *((_BYTE *)v60 + 4);
              *((_BYTE *)v60 + 4) = v70 & 1 | v73 & 0xFE;
              v74 = *(_DWORD *)(v59 + 16);
              *(_BYTE *)(v59 + 4) = v73 & 1 | *(_BYTE *)(v59 + 4) & 0xFE;
              LODWORD(v70) = v60[4];
              v60[4] = v74;
              v75 = *(_QWORD *)(v59 + 24);
              *(_DWORD *)(v59 + 16) = v70;
              v76 = *((_QWORD *)v60 + 3);
              *((_QWORD *)v60 + 3) = v75;
              *(_QWORD *)(v59 + 24) = v76;
              LOBYTE(v75) = *((_BYTE *)v60 + 20);
              LOBYTE(v76) = *(_BYTE *)(v59 + 20) & 2 | v75 & 0xFD;
              *((_BYTE *)v60 + 20) = v76;
              v77 = v76 & 1;
              *((_BYTE *)v60 + 20) = *(_BYTE *)(v59 + 20) & 1 | v76 & 0xFE;
              *((_QWORD *)v60 + 4) = *(_QWORD *)(v59 + 32);
              LODWORD(v76) = *(_DWORD *)v59;
              *(_DWORD *)v59 = v64;
              v133 = v76;
              v78 = *(_QWORD *)(v59 + 8);
              *(_QWORD *)(v59 + 8) = v66;
              v135 = v78;
              v79 = *(_BYTE *)(v59 + 4);
              *(_BYTE *)(v59 + 4) = v65 & 2 | v79 & 0xFD;
              v134 = v79 & 2 | v134 & 0xFD;
              v80 = *(_BYTE *)(v59 + 4);
              *(_BYTE *)(v59 + 4) = v69 | v80 & 0xFE;
              ++v61;
              v134 = v80 & 1 | v134 & 0xFE;
              LODWORD(v78) = *(_DWORD *)(v59 + 16);
              *(_DWORD *)(v59 + 16) = v67;
              v136 = v78;
              v81 = *(_QWORD *)(v59 + 24);
              *(_QWORD *)(v59 + 24) = v63;
              v138 = v81;
              *(_BYTE *)(v59 + 20) = *(_BYTE *)(v59 + 20) & 0xFD | v68 & 2;
              v137 = v137 & 0xFD | v75 & 2;
              *(_BYTE *)(v59 + 20) = v68 & 1 | *(_BYTE *)(v59 + 20) & 0xFE;
              v137 = v77 | v137 & 0xFE;
              *(_QWORD *)(v59 + 32) = v139;
              v82 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v133);
              sub_182CBA0(v82, &v136);
            }
            while ( v116 != v61 );
            v31 = v127;
            v30 = (__int64)&v125[-10 * v116];
          }
          v83 = v31 % v118;
          v116 = v31 % v118;
          if ( !(v31 % v118) )
            goto LABEL_72;
          v31 = v118;
          v32 = v83;
        }
        while ( 1 )
        {
          v34 = v30 + 40 * v32;
          if ( v33 > 0 )
          {
            v124 = v30;
            v35 = v30;
            v36 = 0;
            v126 = v31;
            do
            {
              v37 = *(_QWORD *)(v35 + 32);
              v38 = *(_QWORD *)(v35 + 24);
              *(_QWORD *)(v35 + 24) = 0;
              v39 = *(_DWORD *)v35;
              v40 = *(_BYTE *)(v35 + 4);
              v41 = *(_QWORD *)(v35 + 8);
              v42 = *(_DWORD *)(v35 + 16);
              *(_QWORD *)(v35 + 8) = 0;
              v43 = *(_BYTE *)(v35 + 20);
              v139 = v37;
              v44 = v40 & 1;
              *(_DWORD *)v35 = *(_DWORD *)v34;
              v45 = *(_QWORD *)(v34 + 8);
              *(_DWORD *)v34 = v39;
              *(_QWORD *)(v35 + 8) = v45;
              v46 = *(_BYTE *)(v34 + 4);
              *(_QWORD *)(v34 + 8) = 0;
              v47 = *(_BYTE *)(v35 + 4);
              *(_BYTE *)(v35 + 4) = v46 & 2 | v47 & 0xFD;
              LOBYTE(v45) = v47 & 2 | *(_BYTE *)(v34 + 4) & 0xFD;
              *(_BYTE *)(v34 + 4) = v45;
              v48 = *(_BYTE *)(v35 + 4);
              *(_BYTE *)(v35 + 4) = v45 & 1 | v48 & 0xFE;
              v49 = *(_DWORD *)(v34 + 16);
              *(_BYTE *)(v34 + 4) = v48 & 1 | *(_BYTE *)(v34 + 4) & 0xFE;
              LODWORD(v45) = *(_DWORD *)(v35 + 16);
              *(_DWORD *)(v35 + 16) = v49;
              v50 = *(_QWORD *)(v34 + 24);
              *(_DWORD *)(v34 + 16) = v45;
              v51 = *(_QWORD *)(v35 + 24);
              *(_QWORD *)(v35 + 24) = v50;
              *(_QWORD *)(v34 + 24) = v51;
              LOBYTE(v50) = *(_BYTE *)(v35 + 20);
              LOBYTE(v51) = *(_BYTE *)(v34 + 20) & 2 | v50 & 0xFD;
              *(_BYTE *)(v35 + 20) = v51;
              v52 = v51 & 1;
              *(_BYTE *)(v35 + 20) = *(_BYTE *)(v34 + 20) & 1 | v51 & 0xFE;
              *(_QWORD *)(v35 + 32) = *(_QWORD *)(v34 + 32);
              LODWORD(v51) = *(_DWORD *)v34;
              *(_DWORD *)v34 = v39;
              v133 = v51;
              v53 = *(_QWORD *)(v34 + 8);
              *(_QWORD *)(v34 + 8) = v41;
              v135 = v53;
              v54 = *(_BYTE *)(v34 + 4);
              *(_BYTE *)(v34 + 4) = v40 & 2 | v54 & 0xFD;
              v134 = v54 & 2 | v134 & 0xFD;
              v55 = *(_BYTE *)(v34 + 4);
              *(_BYTE *)(v34 + 4) = v44 | v55 & 0xFE;
              v35 += 40;
              v134 = v55 & 1 | v134 & 0xFE;
              LODWORD(v53) = *(_DWORD *)(v34 + 16);
              ++v36;
              v34 += 40;
              *(_DWORD *)(v34 - 24) = v42;
              v136 = v53;
              v56 = *(_QWORD *)(v34 - 16);
              *(_QWORD *)(v34 - 16) = v38;
              v138 = v56;
              *(_BYTE *)(v34 - 20) = *(_BYTE *)(v34 - 20) & 0xFD | v43 & 2;
              v137 = v137 & 0xFD | v50 & 2;
              *(_BYTE *)(v34 - 20) = v43 & 1 | *(_BYTE *)(v34 - 20) & 0xFE;
              v137 = v52 | v137 & 0xFE;
              *(_QWORD *)(v34 - 8) = v139;
              v57 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v133);
              sub_182CBA0(v57, &v136);
            }
            while ( v118 != v36 );
            v31 = v126;
            v30 = v124 + 40 * v118;
          }
          v58 = v31 % v116;
          if ( !(v31 % v116) )
            break;
          v31 = v116;
          v32 = v116 - v58;
          v116 = v32;
          v33 = v58;
          v118 = v58;
          if ( v32 >= v58 )
            goto LABEL_60;
        }
LABEL_72:
        v84 = a2;
        LODWORD(v12) = v129;
        LODWORD(v18) = v131;
        a2 = v130;
        v11 = v132;
        v14 = v129 + v130 - v84;
      }
    }
    v10 = a3;
    v8 = v120;
    a1 = (char *)v14;
    v7 = v11;
    a6 = v122;
  }
  return sub_CA8C90(a1, a2, v10, v7, v8, a6);
}

