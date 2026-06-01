void __fastcall sub_CA81D0(int *a1, int *a2, int *a3)
{
  int *v3; // rbx
  int *v4; // r14
  int *v5; // r15
  void *v6; // rdi
  unsigned int v7; // eax
  int v8; // r13d
  int v9; // r11d
  char v10; // r10
  int *v11; // r12
  char v12; // r9
  char v13; // dl
  bool v14; // r10
  __int64 v15; // rax
  char v16; // cl
  bool v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // r8
  int *v22; // rax
  int *v23; // rdx
  int v24; // r10d
  int v25; // ebx
  __int64 v26; // r10
  __int64 v27; // rbx
  char v28; // r15
  __int64 v29; // r10
  __int64 v30; // rbx
  char v31; // r15
  int v32; // eax
  __int64 v33; // rax
  char v34; // dl
  __int64 v35; // rax
  char v36; // r8
  char v37; // si
  __int64 v38; // r12
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // r13
  int *v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // rbp
  int *v48; // rdi
  signed __int64 v49; // rdx
  int *v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rax
  int *v53; // r8
  __int64 v54; // r12
  __int64 v55; // r13
  __int64 v56; // rbp
  int *v57; // rdi
  signed __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rbp
  int *v61; // rdi
  char v62; // dl
  int *v63; // r12
  char v64; // al
  char v65; // dl
  __int64 v66; // rax
  __int64 v67; // rax
  char v68; // al
  int v69; // edx
  char v70; // al
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // rcx
  char v74; // al
  char v75; // al
  char v76; // al
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rax
  int *v80; // r13
  char v81; // cl
  int v82; // r8d
  char v83; // si
  int v84; // r9d
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rax
  char v88; // si
  char v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rax
  char v92; // cl
  char v93; // si
  __int64 v94; // rax
  int v95; // eax
  unsigned int v96; // eax
  __int64 v97; // r14
  __int64 v98; // [rsp+8h] [rbp-C0h]
  int *v99; // [rsp+10h] [rbp-B8h]
  __int64 v100; // [rsp+10h] [rbp-B8h]
  signed __int64 v101; // [rsp+10h] [rbp-B8h]
  __int64 v102; // [rsp+18h] [rbp-B0h]
  __int64 v103; // [rsp+18h] [rbp-B0h]
  __int64 v104; // [rsp+18h] [rbp-B0h]
  int *v105; // [rsp+20h] [rbp-A8h]
  char v106; // [rsp+2Eh] [rbp-9Ah]
  bool v107; // [rsp+2Fh] [rbp-99h]
  __int64 v108; // [rsp+30h] [rbp-98h]
  __int64 v112; // [rsp+50h] [rbp-78h]
  __int64 v113; // [rsp+58h] [rbp-70h]
  int v114; // [rsp+60h] [rbp-68h] BYREF
  char v115; // [rsp+64h] [rbp-64h]
  __int64 v116; // [rsp+68h] [rbp-60h]
  int v117; // [rsp+70h] [rbp-58h] BYREF
  char v118; // [rsp+74h] [rbp-54h]
  __int64 v119; // [rsp+78h] [rbp-50h]
  __int64 v120; // [rsp+80h] [rbp-48h]

  v3 = a1;
  v113 = (char *)a2 - (char *)a1;
  v108 = 0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 3);
  v112 = (__int64)a3 + (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 240 )
  {
    sub_C9FA70(a1, a2);
    return;
  }
  do
  {
    v4 = v3;
    v3 += 70;
    v5 = v3 - 60;
    v99 = v3 - 70;
    do
    {
      v6 = qword_1C7F2C0;
      if ( (v4[5] & 1) != 0 || *(v3 - 66) != 1 || (v5[5] & 1) != 0 || (v9 = v5[4], v9 != 1) )
      {
        LOBYTE(v7) = sub_1848D40(qword_1C7F2C0, v99, v5);
        v8 = *v5;
        v9 = v5[4];
        v6 = qword_1C7F2C0;
      }
      else if ( (v4[1] & 1) != 0 || (v5[1] & 1) != 0 )
      {
        v96 = sub_182C7B0(qword_1C7F2C0, v99, v5);
        v8 = *v5;
        v9 = v5[4];
        v6 = qword_1C7F2C0;
        v7 = v96 >> 31;
      }
      else
      {
        v8 = *v5;
        LOBYTE(v7) = *(v3 - 70) < *v5;
      }
      v114 = v8;
      if ( (_BYTE)v7 )
      {
        v10 = *((_BYTE *)v5 + 4);
        v11 = v5 + 10;
        v117 = v9;
        v12 = *((_BYTE *)v5 + 20);
        v13 = v10 & 1;
        v14 = (v10 & 2) != 0;
        v115 = (2 * v14) | v13 | v115 & 0xFC;
        v15 = *((_QWORD *)v5 + 1);
        v16 = v12 & 1;
        v17 = (v12 & 2) != 0;
        *((_QWORD *)v5 + 1) = 0;
        v102 = v15;
        v116 = v15;
        LOBYTE(v15) = (2 * v17) | v16 | v118 & 0xFC;
        v18 = *((_QWORD *)v5 + 3);
        *((_QWORD *)v5 + 3) = 0;
        v118 = v15;
        v19 = *((_QWORD *)v5 + 4);
        v20 = (char *)v5 - (char *)v4;
        v119 = v18;
        v120 = v19;
        v21 = 0xCCCCCCCCCCCCCCCDLL * (v20 >> 3);
        if ( v20 > 0 )
        {
          v105 = v3;
          v22 = v11;
          v106 = v13;
          v107 = v14;
          do
          {
            v23 = v22;
            v24 = *(v22 - 10);
            v25 = *(v22 - 20);
            v22 -= 10;
            *(v22 - 10) = v24;
            v26 = *((_QWORD *)v22 + 1);
            *v22 = v25;
            v27 = *((_QWORD *)v22 - 4);
            *((_QWORD *)v22 - 4) = v26;
            LOBYTE(v26) = *((_BYTE *)v22 + 4);
            *((_QWORD *)v22 + 1) = v27;
            *((_BYTE *)v22 + 4) = *(_BYTE *)(v23 - 19) & 2 | v26 & 0xFD;
            LOBYTE(v26) = v26 & 2 | *(_BYTE *)(v23 - 19) & 0xFD;
            *((_BYTE *)v23 - 76) = v26;
            v28 = *((_BYTE *)v22 + 4);
            *((_BYTE *)v22 + 4) = v26 & 1 | v28 & 0xFE;
            *((_BYTE *)v23 - 76) = v28 & 1 | *(_BYTE *)(v23 - 19) & 0xFE;
            LODWORD(v27) = *(v22 - 6);
            *(v22 - 6) = v22[4];
            v29 = *((_QWORD *)v22 + 3);
            v22[4] = v27;
            v30 = *((_QWORD *)v22 - 2);
            *((_QWORD *)v22 - 2) = v29;
            LOBYTE(v29) = *((_BYTE *)v22 + 20);
            *((_QWORD *)v22 + 3) = v30;
            *((_BYTE *)v22 + 20) = *(_BYTE *)(v23 - 15) & 2 | v29 & 0xFD;
            LOBYTE(v29) = v29 & 2 | *(_BYTE *)(v23 - 15) & 0xFD;
            *((_BYTE *)v23 - 60) = v29;
            v31 = v22[5] & 1;
            *((_BYTE *)v22 + 20) = v29 & 1 | v22[5] & 0xFE;
            *((_BYTE *)v23 - 60) = v31 | *(_BYTE *)(v23 - 15) & 0xFE;
            *((_QWORD *)v22 + 4) = *((_QWORD *)v22 - 1);
            --v21;
          }
          while ( v21 );
          v3 = v105;
          v13 = v106;
          v14 = v107;
        }
        v32 = *(v3 - 70);
        *(v3 - 70) = v8;
        v114 = v32;
        v33 = *((_QWORD *)v3 - 34);
        *((_QWORD *)v3 - 34) = v102;
        v116 = v33;
        LOBYTE(v33) = v4[1] & 1 | v4[1] & 2 | v115 & 0xFC;
        *((_BYTE *)v4 + 4) = v13 | v4[1] & 0xFC | (2 * v14);
        v34 = v118;
        v115 = v33;
        LODWORD(v33) = *(v3 - 66);
        *(v3 - 66) = v9;
        v117 = v33;
        v35 = *((_QWORD *)v3 - 32);
        *((_QWORD *)v3 - 32) = v18;
        v119 = v35;
        v36 = v4[5] & 2;
        v37 = v4[5] & 1;
        *((_BYTE *)v4 + 20) = v16 | v4[5] & 0xFC | (2 * v17);
        v118 = v37 | v36 | v34 & 0xFC;
        *((_QWORD *)v3 - 31) = v120;
        sub_182CBA0(v6, &v114);
        sub_182CBA0(v6, &v117);
        goto LABEL_12;
      }
      v62 = *((_BYTE *)v5 + 4);
      v117 = v9;
      v63 = v5 - 10;
      v64 = v62 & 3 | v115 & 0xFC;
      v65 = *((_BYTE *)v5 + 20);
      v115 = v64;
      v66 = *((_QWORD *)v5 + 1);
      *((_QWORD *)v5 + 1) = 0;
      v116 = v66;
      v118 = v65 & 3 | v118 & 0xFC;
      v67 = *((_QWORD *)v5 + 3);
      *((_QWORD *)v5 + 3) = 0;
      v119 = v67;
      v120 = *((_QWORD *)v5 + 4);
      while ( 1 )
      {
        v80 = v63 + 10;
        if ( (v63[5] & 1) != 0 || v63[4] != 1 || (v81 = v118, (v118 & 1) != 0) || (v82 = v117, v117 != 1) )
        {
          v68 = sub_1848D40(v6, v63, &v114);
          v6 = qword_1C7F2C0;
          if ( !v68 )
            goto LABEL_42;
LABEL_31:
          v69 = *v63;
          v70 = *((_BYTE *)v63 + 4);
          goto LABEL_32;
        }
        v70 = *((_BYTE *)v63 + 4);
        if ( (v70 & 1) != 0 )
          break;
        v83 = v115;
        if ( (v115 & 1) != 0 )
          break;
        v69 = *v63;
        v84 = v114;
        if ( *v63 >= v114 )
          goto LABEL_40;
LABEL_32:
        v71 = v63[10];
        v63[10] = v69;
        v63 -= 10;
        v72 = *((_QWORD *)v63 + 11);
        v63[10] = v71;
        v73 = *((_QWORD *)v63 + 6);
        *((_QWORD *)v63 + 6) = v72;
        *((_QWORD *)v63 + 11) = v73;
        LOBYTE(v73) = v70 & 2;
        v74 = *((_BYTE *)v80 + 4);
        *((_BYTE *)v80 + 4) = v73 | v74 & 0xFD;
        v75 = v74 & 2 | v63[11] & 0xFD;
        *((_BYTE *)v63 + 44) = v75;
        LOBYTE(v73) = *((_BYTE *)v80 + 4);
        *((_BYTE *)v80 + 4) = v75 & 1 | v73 & 0xFE;
        LODWORD(v72) = v63[14];
        v76 = v73 & 1 | v63[11] & 0xFE;
        LOBYTE(v73) = *((_BYTE *)v63 + 60);
        *((_BYTE *)v63 + 44) = v76;
        v77 = v63[24];
        v63[24] = v72;
        v78 = *((_QWORD *)v63 + 8);
        v63[14] = v77;
        v79 = *((_QWORD *)v63 + 13);
        *((_QWORD *)v63 + 13) = v78;
        *((_QWORD *)v63 + 8) = v79;
        LOBYTE(v78) = *((_BYTE *)v80 + 20);
        *((_BYTE *)v80 + 20) = v73 & 2 | v78 & 0xFD;
        LOBYTE(v79) = v78 & 2 | v63[15] & 0xFD;
        *((_BYTE *)v63 + 60) = v79;
        LOBYTE(v73) = v80[5] & 1;
        *((_BYTE *)v80 + 20) = v79 & 1 | v80[5] & 0xFE;
        *((_BYTE *)v63 + 60) = v73 | v63[15] & 0xFE;
        *((_QWORD *)v63 + 14) = *((_QWORD *)v63 + 9);
      }
      v95 = sub_182C7B0(v6, v63, &v114);
      v6 = qword_1C7F2C0;
      if ( v95 < 0 )
        goto LABEL_31;
LABEL_42:
      v84 = v114;
      v82 = v117;
      v81 = v118;
      v83 = v115;
LABEL_40:
      v85 = *v80;
      v86 = v116;
      *v80 = v84;
      v11 = v5 + 10;
      v114 = v85;
      v87 = *((_QWORD *)v80 + 1);
      *((_QWORD *)v80 + 1) = v86;
      LOBYTE(v86) = *((_BYTE *)v80 + 4);
      v116 = v87;
      LOBYTE(v87) = v83;
      v88 = v83 & 0xFD;
      v89 = v86 & 1;
      *((_BYTE *)v80 + 4) = v88 & 1 | v86 & 0xFC | v87 & 2;
      LOBYTE(v87) = v88 & 0xFE | v86 & 2;
      v90 = v119;
      v115 = v89 | v87;
      LODWORD(v87) = v80[4];
      v80[4] = v82;
      v117 = v87;
      v91 = *((_QWORD *)v80 + 3);
      *((_QWORD *)v80 + 3) = v90;
      LOBYTE(v90) = v81;
      v92 = v81 & 0xFD;
      v119 = v91;
      v93 = *((_BYTE *)v80 + 20);
      LOBYTE(v91) = v93 & 2;
      v93 &= ~2u;
      v118 = v93 & 1 | (v92 | v91) & 0xFE;
      v94 = v120;
      *((_BYTE *)v80 + 20) = v92 & 1 | v93 & 0xFE | v90 & 2;
      *((_QWORD *)v80 + 4) = v94;
      sub_182CBA0(v6, &v114);
      sub_182CBA0(v6, &v117);
LABEL_12:
      v5 = v11;
    }
    while ( v3 != v11 );
  }
  while ( (char *)a2 - (char *)v3 > 240 );
  v38 = (__int64)a2;
  sub_C9FA70(v3, a2);
  if ( v113 > 280 )
  {
    v98 = 28;
    v39 = v112;
    v40 = 7;
    while ( 1 )
    {
      v41 = 2 * v40;
      if ( v108 < 2 * v40 )
      {
        v51 = v108;
        v42 = a3;
        v50 = a1;
      }
      else
      {
        v42 = a3;
        v100 = v39;
        v43 = 80 * v40;
        v103 = v40;
        v44 = 8 * (v98 + v40) - 80 * v40;
        v45 = (__int64)a1;
        v46 = v44;
        v47 = v43;
        do
        {
          v48 = (int *)v45;
          v45 += v47;
          v42 = sub_CA7F00(v48, v45 + v46, (int *)(v45 + v46), v45, v42);
          v49 = 0xCCCCCCCCCCCCCCCDLL * ((v38 - v45) >> 3);
        }
        while ( v41 <= v49 );
        v50 = (int *)v45;
        v39 = v100;
        v40 = v103;
        v51 = v49;
      }
      if ( v51 > v40 )
        v51 = v40;
      sub_CA7F00(v50, (__int64)&v50[10 * v51], &v50[10 * v51], v38, v42);
      v52 = v98;
      v40 = v98;
      if ( v108 < v98 )
        break;
      v53 = a1;
      v101 = v41;
      v98 *= 4;
      v104 = v38;
      v54 = (__int64)a3;
      v55 = 40 * v41 - 8 * (4 * v52 + v40);
      v56 = 8 * (4 * v52 + v40);
      do
      {
        v57 = (int *)v54;
        v54 += v56;
        v53 = sub_CA7F00(v57, v54 + v55, (int *)(v54 + v55), v54, v53);
        v58 = 0xCCCCCCCCCCCCCCCDLL * ((v39 - v54) >> 3);
      }
      while ( v40 <= v58 );
      v59 = 0xCCCCCCCCCCCCCCCDLL * ((v39 - v54) >> 3);
      v60 = v54;
      v61 = (int *)v54;
      v38 = v104;
      if ( v58 > v101 )
        v59 = v101;
      sub_CA7F00(v61, v60 + 40 * v59, (int *)(v60 + 40 * v59), v39, v53);
      if ( v108 <= v40 )
        return;
    }
    v97 = v41;
    if ( v108 <= v41 )
      v97 = v108;
    sub_CA7F00(a3, (__int64)&a3[10 * v97], &a3[10 * v97], v112, a1);
  }
}

