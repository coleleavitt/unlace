__int64 __fastcall sub_9F7E80(_QWORD *a1, unsigned int a2, char a3, int *a4, int *a5)
{
  int v8; // edx
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // di
  char v13; // si
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // di
  char v17; // si
  char v18; // si
  char v19; // di
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // si
  int v25; // edx
  char v26; // si
  __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // di
  char v30; // si
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // di
  char v34; // si
  char v35; // si
  char v36; // di
  __int64 v37; // rax
  char v38; // si
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // si
  __int64 v42; // r13
  int *v43; // rax
  int *v44; // rdx
  __int64 v45; // rsi
  int v46; // edx
  char v47; // si
  __int64 v48; // rax
  __int64 v49; // rdx
  char v50; // di
  __int64 v51; // rax
  char v52; // si
  __int64 v53; // rdx
  char v54; // di
  __int64 v55; // rax
  __int64 v56; // rdx
  char v57; // di
  char v58; // si
  __int64 v59; // rax
  char v60; // si
  __int64 v61; // rdx
  char v62; // di
  __int64 v63; // rax
  char v64; // si
  __int64 v65; // rdx
  char v66; // di
  __int64 v67; // rdx
  char v68; // si
  __int64 result; // rax
  int v70; // edx
  char v71; // si
  __int64 v72; // rax
  __int64 v73; // rdx
  char v74; // di
  __int64 v75; // rax
  char v76; // si
  __int64 v77; // rdx
  char v78; // di
  __int64 v79; // rax
  __int64 v80; // rdx
  char v81; // di
  char v82; // si
  __int64 v83; // rax
  char v84; // si
  __int64 v85; // rdx
  char v86; // di
  __int64 v87; // rax
  char v88; // si
  __int64 v89; // rdx
  char v90; // di
  __int64 v91; // rdx
  char v92; // si
  __int64 v95; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v96; // [rsp+28h] [rbp-F0h]
  __int64 v97; // [rsp+30h] [rbp-E8h]
  __int64 v98; // [rsp+38h] [rbp-E0h]
  _BYTE v99[64]; // [rsp+40h] [rbp-D8h] BYREF
  int v100; // [rsp+80h] [rbp-98h] BYREF
  char v101; // [rsp+84h] [rbp-94h]
  __int64 v102; // [rsp+88h] [rbp-90h]
  int v103; // [rsp+90h] [rbp-88h]
  char v104; // [rsp+94h] [rbp-84h]
  __int64 v105; // [rsp+98h] [rbp-80h]
  int v106; // [rsp+A0h] [rbp-78h] BYREF
  char v107; // [rsp+A4h] [rbp-74h]
  __int64 v108; // [rsp+A8h] [rbp-70h]
  int v109; // [rsp+B0h] [rbp-68h]
  char v110; // [rsp+B4h] [rbp-64h]
  __int64 v111; // [rsp+B8h] [rbp-60h]
  int v112; // [rsp+C0h] [rbp-58h] BYREF
  char v113; // [rsp+C4h] [rbp-54h]
  __int64 v114; // [rsp+C8h] [rbp-50h]
  int v115; // [rsp+D0h] [rbp-48h]
  char v116; // [rsp+D4h] [rbp-44h]
  __int64 v117; // [rsp+D8h] [rbp-40h]

  v95 = 0;
  v96 = 0;
  v97 = 1;
  v98 = 0;
  sub_91F480((__int64)v99, (__int64)&qword_1C7F1C0);
  sub_8A6550((__int64)&v100, (__int64)&v95);
  sub_1831620(qword_1C7F2C0, &v100);
  sub_1831620(qword_1C7F2C0, &v106);
  sub_1831620(qword_1C7F2C0, &v112);
  v8 = v100;
  v9 = *((_BYTE *)a4 + 4);
  v100 = *a4;
  v10 = *((_QWORD *)a4 + 1);
  *a4 = v8;
  v11 = v102;
  v102 = v10;
  LOBYTE(v10) = v101;
  v12 = v9 & 0xFD;
  *((_QWORD *)a4 + 1) = v11;
  LOBYTE(v11) = v10;
  LOBYTE(v10) = v10 & 0xFD;
  LOBYTE(v11) = v10 & 1 | v9 & 0xFC | v11 & 2;
  LOBYTE(v10) = v10 | v9 & 2;
  v13 = *((_BYTE *)a4 + 20);
  *((_BYTE *)a4 + 4) = v11;
  v101 = v12 & 1 | v10 & 0xFE;
  LODWORD(v10) = a4[4];
  a4[4] = v103;
  v103 = v10;
  v14 = *((_QWORD *)a4 + 3);
  *((_QWORD *)a4 + 3) = v105;
  v105 = v14;
  LOBYTE(v14) = v104 & 0xFC | v13 & 2;
  *((_BYTE *)a4 + 20) = v104 & 1 | v13 & 0xFC | v104 & 2;
  v104 = v13 & 1 | v14;
  LODWORD(v14) = a4[8];
  a4[8] = v106;
  v106 = v14;
  v15 = *((_QWORD *)a4 + 5);
  *((_QWORD *)a4 + 5) = v108;
  v108 = v15;
  v16 = *((_BYTE *)a4 + 36);
  v17 = v16 & 2;
  v16 &= ~2u;
  LOBYTE(v15) = v107 & 0xFD | v17;
  v18 = *((_BYTE *)a4 + 52);
  *((_BYTE *)a4 + 36) = v107 & 1 | v16 & 0xFE | v107 & 2;
  v107 = v16 & 1 | v15 & 0xFE;
  LODWORD(v15) = a4[12];
  v19 = v18 & 0xFD;
  a4[12] = v109;
  v109 = v15;
  v20 = *((_QWORD *)a4 + 7);
  *((_QWORD *)a4 + 7) = v111;
  v111 = v20;
  LOBYTE(v11) = v18 & 0xFD | v110 & 2;
  LOBYTE(v20) = v110 & 0xFD | v18 & 2;
  v21 = *((_BYTE *)a4 + 68);
  *((_BYTE *)a4 + 52) = v110 & 1 | v11 & 0xFE;
  v110 = v19 & 1 | v20 & 0xFE;
  LODWORD(v20) = a4[16];
  a4[16] = v112;
  v112 = v20;
  v22 = *((_QWORD *)a4 + 9);
  *((_QWORD *)a4 + 9) = v114;
  v114 = v22;
  LOBYTE(v22) = v113 & 0xFC | v21 & 2;
  *((_BYTE *)a4 + 68) = v113 & 1 | v21 & 0xFC | v113 & 2;
  v113 = v21 & 1 | v22;
  LODWORD(v22) = a4[20];
  a4[20] = v115;
  v115 = v22;
  v23 = v117;
  v24 = *((_BYTE *)a4 + 84);
  v117 = *((_QWORD *)a4 + 11);
  LOBYTE(v22) = v116;
  *((_QWORD *)a4 + 11) = v23;
  LOBYTE(v23) = v24 & 0xFD | v22 & 2;
  LOBYTE(v22) = v22 & 0xFD;
  *((_BYTE *)a4 + 84) = v22 & 1 | v23 & 0xFE;
  v116 = v24 & 1 | v22 & 0xFE | v24 & 2;
  sub_2A6060((__int64)&v100);
  sub_2A6060((__int64)&v95);
  v95 = 0;
  v96 = 0;
  v97 = 1;
  v98 = 0;
  sub_91F480((__int64)v99, (__int64)&qword_1C7F1C0);
  sub_8A6550((__int64)&v100, (__int64)&v95);
  sub_1831620(qword_1C7F2C0, &v100);
  sub_1831620(qword_1C7F2C0, &v106);
  sub_1831620(qword_1C7F2C0, &v112);
  v25 = v100;
  v26 = *((_BYTE *)a5 + 4);
  v100 = *a5;
  v27 = *((_QWORD *)a5 + 1);
  *a5 = v25;
  v28 = v102;
  v102 = v27;
  LOBYTE(v27) = v101;
  v29 = v26 & 0xFD;
  *((_QWORD *)a5 + 1) = v28;
  LOBYTE(v28) = v27;
  LOBYTE(v27) = v27 & 0xFD;
  LOBYTE(v28) = v27 & 1 | v26 & 0xFC | v28 & 2;
  LOBYTE(v27) = v27 | v26 & 2;
  v30 = *((_BYTE *)a5 + 20);
  *((_BYTE *)a5 + 4) = v28;
  v101 = v29 & 1 | v27 & 0xFE;
  LODWORD(v27) = a5[4];
  a5[4] = v103;
  v103 = v27;
  v31 = *((_QWORD *)a5 + 3);
  *((_QWORD *)a5 + 3) = v105;
  v105 = v31;
  LOBYTE(v31) = v104 & 0xFC | v30 & 2;
  *((_BYTE *)a5 + 20) = v104 & 1 | v30 & 0xFC | v104 & 2;
  v104 = v30 & 1 | v31;
  LODWORD(v31) = a5[8];
  a5[8] = v106;
  v106 = v31;
  v32 = *((_QWORD *)a5 + 5);
  *((_QWORD *)a5 + 5) = v108;
  v108 = v32;
  v33 = *((_BYTE *)a5 + 36);
  v34 = v33 & 2;
  v33 &= ~2u;
  LOBYTE(v32) = v107 & 0xFD | v34;
  v35 = *((_BYTE *)a5 + 52);
  *((_BYTE *)a5 + 36) = v107 & 1 | v33 & 0xFE | v107 & 2;
  v107 = v33 & 1 | v32 & 0xFE;
  LODWORD(v32) = a5[12];
  v36 = v35 & 0xFD;
  a5[12] = v109;
  v109 = v32;
  v37 = *((_QWORD *)a5 + 7);
  *((_QWORD *)a5 + 7) = v111;
  v111 = v37;
  LOBYTE(v28) = v35 & 0xFD | v110 & 2;
  LOBYTE(v37) = v110 & 0xFD | v35 & 2;
  v38 = *((_BYTE *)a5 + 68);
  *((_BYTE *)a5 + 52) = v110 & 1 | v28 & 0xFE;
  v110 = v36 & 1 | v37 & 0xFE;
  LODWORD(v37) = a5[16];
  a5[16] = v112;
  v112 = v37;
  v39 = *((_QWORD *)a5 + 9);
  *((_QWORD *)a5 + 9) = v114;
  v114 = v39;
  LOBYTE(v39) = v113 & 0xFC | v38 & 2;
  *((_BYTE *)a5 + 68) = v113 & 1 | v38 & 0xFC | v113 & 2;
  v113 = v38 & 1 | v39;
  LODWORD(v39) = a5[20];
  a5[20] = v115;
  v115 = v39;
  v40 = v117;
  v41 = *((_BYTE *)a5 + 84);
  v117 = *((_QWORD *)a5 + 11);
  LOBYTE(v39) = v116;
  *((_QWORD *)a5 + 11) = v40;
  LOBYTE(v40) = v41 & 0xFD | v39 & 2;
  LOBYTE(v39) = v39 & 0xFD;
  *((_BYTE *)a5 + 84) = v39 & 1 | v40 & 0xFE;
  v116 = v41 & 1 | v39 & 0xFE | v41 & 2;
  sub_2A6060((__int64)&v100);
  sub_2A6060((__int64)&v95);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1[94] + 8LL * a2) )
      goto LABEL_7;
    v44 = sub_9AD4F0((__int64)a1, a2);
    v45 = *(_QWORD *)(a1[94] + 8LL * a2) + 16LL;
  }
  else
  {
    v42 = *(_QWORD *)(a1[93] + 8LL * a2);
    if ( !v42 )
      goto LABEL_7;
    v43 = sub_9AD4F0((__int64)a1, a2);
    v44 = (int *)(v42 + 16);
    v45 = (__int64)v43;
  }
  sub_9F7AE0((__int64)&v100, v45, (__int64)v44);
  v46 = v100;
  v47 = v101;
  v100 = *a5;
  v48 = *((_QWORD *)a5 + 1);
  *a5 = v46;
  v49 = v102;
  v102 = v48;
  LOBYTE(v48) = *((_BYTE *)a5 + 4);
  *((_QWORD *)a5 + 1) = v49;
  LOBYTE(v49) = v47;
  v47 &= ~2u;
  v50 = v48 & 0xFD;
  v101 = v48 & 1 | v47 & 0xFE | v48 & 2;
  LODWORD(v48) = a5[4];
  *((_BYTE *)a5 + 4) = v47 & 1 | v50 & 0xFE | v49 & 2;
  LODWORD(v49) = v103;
  v103 = v48;
  v51 = *((_QWORD *)a5 + 3);
  v52 = v104;
  a5[4] = v49;
  v53 = v105;
  v105 = v51;
  LOBYTE(v51) = *((_BYTE *)a5 + 20);
  *((_QWORD *)a5 + 3) = v53;
  LOBYTE(v53) = v52;
  v52 &= ~2u;
  v54 = v51 & 0xFD;
  v104 = v51 & 1 | v52 & 0xFE | v51 & 2;
  LODWORD(v51) = a5[8];
  *((_BYTE *)a5 + 20) = v52 & 1 | v54 & 0xFE | v53 & 2;
  LODWORD(v53) = v106;
  v106 = v51;
  v55 = *((_QWORD *)a5 + 5);
  a5[8] = v53;
  v56 = v108;
  v108 = v55;
  *((_QWORD *)a5 + 5) = v56;
  v57 = *((_BYTE *)a5 + 36);
  LOBYTE(v55) = v57 & 2;
  v57 &= ~2u;
  v58 = v107 & 1;
  LOBYTE(v56) = v57 & 0xFE | v107 & 2;
  v107 = v57 & 1 | v107 & 0xFC | v55 & 0xFE;
  LODWORD(v55) = a5[12];
  *((_BYTE *)a5 + 36) = v58 | v56;
  LODWORD(v56) = v109;
  v109 = v55;
  v59 = *((_QWORD *)a5 + 7);
  v60 = v110;
  a5[12] = v56;
  v61 = v111;
  v111 = v59;
  LOBYTE(v59) = *((_BYTE *)a5 + 52);
  *((_QWORD *)a5 + 7) = v61;
  LOBYTE(v61) = v60;
  v60 &= ~2u;
  v62 = v59 & 0xFD;
  v110 = v59 & 1 | v60 & 0xFE | v59 & 2;
  LODWORD(v59) = a5[16];
  *((_BYTE *)a5 + 52) = v60 & 1 | v62 & 0xFE | v61 & 2;
  LODWORD(v61) = v112;
  v112 = v59;
  v63 = *((_QWORD *)a5 + 9);
  v64 = v113;
  a5[16] = v61;
  v65 = v114;
  v114 = v63;
  LOBYTE(v63) = *((_BYTE *)a5 + 68);
  *((_QWORD *)a5 + 9) = v65;
  LOBYTE(v65) = v64;
  v64 &= ~2u;
  v66 = v63 & 0xFD;
  v113 = v63 & 1 | v64 & 0xFE | v63 & 2;
  LODWORD(v63) = a5[20];
  *((_BYTE *)a5 + 68) = v64 & 1 | v66 & 0xFE | v65 & 2;
  LODWORD(v65) = v115;
  v115 = v63;
  a5[20] = v65;
  v67 = v117;
  v68 = v116;
  v117 = *((_QWORD *)a5 + 11);
  LOBYTE(v63) = *((_BYTE *)a5 + 84);
  *((_QWORD *)a5 + 11) = v67;
  LOBYTE(v67) = v63 & 0xFD | v68 & 2;
  v68 &= ~2u;
  *((_BYTE *)a5 + 84) = v68 & 1 | v67 & 0xFE;
  v116 = v63 & 1 | v68 & 0xFE | v63 & 2;
  sub_2A6060((__int64)&v100);
LABEL_7:
  result = a1[90];
  if ( (*(_BYTE *)(result + 4LL * a2 + 3) & 0x40) != 0 )
  {
    sub_9D4F70((__int64)&v100, (__int64)&qword_1C7F1C0);
    v70 = v100;
    v71 = v101;
    v100 = *a4;
    v72 = *((_QWORD *)a4 + 1);
    *a4 = v70;
    v73 = v102;
    v102 = v72;
    LOBYTE(v72) = *((_BYTE *)a4 + 4);
    *((_QWORD *)a4 + 1) = v73;
    LOBYTE(v73) = v71;
    v71 &= ~2u;
    v74 = v72 & 0xFD;
    v101 = v72 & 1 | v71 & 0xFE | v72 & 2;
    LODWORD(v72) = a4[4];
    *((_BYTE *)a4 + 4) = v71 & 1 | v74 & 0xFE | v73 & 2;
    LODWORD(v73) = v103;
    v103 = v72;
    v75 = *((_QWORD *)a4 + 3);
    v76 = v104;
    a4[4] = v73;
    v77 = v105;
    v105 = v75;
    LOBYTE(v75) = *((_BYTE *)a4 + 20);
    *((_QWORD *)a4 + 3) = v77;
    LOBYTE(v77) = v76;
    v76 &= ~2u;
    v78 = v75 & 0xFD;
    v104 = v75 & 1 | v76 & 0xFE | v75 & 2;
    LODWORD(v75) = a4[8];
    *((_BYTE *)a4 + 20) = v76 & 1 | v78 & 0xFE | v77 & 2;
    LODWORD(v77) = v106;
    v106 = v75;
    v79 = *((_QWORD *)a4 + 5);
    a4[8] = v77;
    v80 = v108;
    v108 = v79;
    *((_QWORD *)a4 + 5) = v80;
    v81 = *((_BYTE *)a4 + 36);
    LOBYTE(v79) = v81 & 2;
    v81 &= ~2u;
    v82 = v107 & 1;
    LOBYTE(v80) = v81 & 0xFE | v107 & 2;
    v107 = v81 & 1 | v107 & 0xFC | v79 & 0xFE;
    LODWORD(v79) = a4[12];
    *((_BYTE *)a4 + 36) = v82 | v80;
    LODWORD(v80) = v109;
    v109 = v79;
    v83 = *((_QWORD *)a4 + 7);
    v84 = v110;
    a4[12] = v80;
    v85 = v111;
    v111 = v83;
    LOBYTE(v83) = *((_BYTE *)a4 + 52);
    *((_QWORD *)a4 + 7) = v85;
    LOBYTE(v85) = v84;
    v84 &= ~2u;
    v86 = v83 & 0xFD;
    v110 = v83 & 1 | v84 & 0xFE | v83 & 2;
    LODWORD(v83) = a4[16];
    *((_BYTE *)a4 + 52) = v84 & 1 | v86 & 0xFE | v85 & 2;
    LODWORD(v85) = v112;
    v112 = v83;
    v87 = *((_QWORD *)a4 + 9);
    v88 = v113;
    a4[16] = v85;
    v89 = v114;
    v114 = v87;
    LOBYTE(v87) = *((_BYTE *)a4 + 68);
    *((_QWORD *)a4 + 9) = v89;
    LOBYTE(v89) = v88;
    v88 &= ~2u;
    v90 = v87 & 0xFD;
    v113 = v87 & 1 | v88 & 0xFE | v87 & 2;
    LODWORD(v87) = a4[20];
    *((_BYTE *)a4 + 68) = v88 & 1 | v90 & 0xFE | v89 & 2;
    LODWORD(v89) = v115;
    v115 = v87;
    a4[20] = v89;
    v91 = v117;
    v92 = v116;
    v117 = *((_QWORD *)a4 + 11);
    LOBYTE(v87) = *((_BYTE *)a4 + 84);
    *((_QWORD *)a4 + 11) = v91;
    LOBYTE(v91) = v87 & 0xFD | v92 & 2;
    v92 &= ~2u;
    *((_BYTE *)a4 + 84) = v92 & 1 | v91 & 0xFE;
    v116 = v87 & 1 | v92 & 0xFE | v87 & 2;
    return sub_2A6060((__int64)&v100);
  }
  return result;
}

