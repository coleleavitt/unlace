__int64 __fastcall sub_9FFC40(_QWORD *a1, char a2, unsigned int a3, int *a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // r13d
  int v12; // eax
  int *v13; // rax
  int v14; // edx
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r15
  int *v27; // rax
  int v28; // edx
  __int64 v29; // rdx
  char v30; // cl
  __int64 v31; // rdx
  int v32; // r11d
  int v33; // edx
  char v34; // cl
  __int64 v35; // rax
  __int64 v36; // rdx
  char v37; // si
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rdx
  char v41; // si
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // si
  char v45; // cl
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // si
  __int64 v49; // rax
  char v50; // cl
  __int64 v51; // rdx
  char v52; // si
  __int64 v53; // rdx
  char v54; // cl
  int v55; // edx
  char v56; // cl
  __int64 v57; // rax
  __int64 v58; // rdx
  char v59; // si
  __int64 v60; // rax
  char v61; // cl
  __int64 v62; // rdx
  char v63; // si
  __int64 v64; // rax
  __int64 v65; // rdx
  char v66; // si
  char v67; // cl
  __int64 v68; // rax
  __int64 v69; // rdx
  char v70; // si
  __int64 v71; // rax
  char v72; // cl
  __int64 v73; // rdx
  char v74; // si
  __int64 v75; // rdx
  char v76; // cl
  int v77; // edx
  char v78; // cl
  __int64 v79; // rax
  __int64 v80; // rdx
  char v81; // si
  __int64 v82; // rax
  char v83; // cl
  __int64 v84; // rdx
  char v85; // si
  __int64 v86; // rax
  __int64 v87; // rdx
  char v88; // si
  char v89; // cl
  __int64 v90; // rax
  __int64 v91; // rdx
  char v92; // si
  __int64 v93; // rax
  char v94; // cl
  __int64 v95; // rdx
  char v96; // si
  __int64 v97; // rdx
  char v98; // cl
  __int64 v100; // [rsp+10h] [rbp-1F8h]
  int v101[2]; // [rsp+20h] [rbp-1E8h]
  int v102[2]; // [rsp+20h] [rbp-1E8h]
  int v103[2]; // [rsp+30h] [rbp-1D8h] BYREF
  int v104[2]; // [rsp+38h] [rbp-1D0h]
  int v105[2]; // [rsp+40h] [rbp-1C8h] BYREF
  int v106[2]; // [rsp+48h] [rbp-1C0h]
  int v107; // [rsp+50h] [rbp-1B8h] BYREF
  char v108; // [rsp+54h] [rbp-1B4h]
  int v109[2]; // [rsp+58h] [rbp-1B0h]
  int v110; // [rsp+60h] [rbp-1A8h]
  char v111; // [rsp+64h] [rbp-1A4h]
  char v112[8]; // [rsp+68h] [rbp-1A0h]
  int v113; // [rsp+70h] [rbp-198h] BYREF
  char v114; // [rsp+74h] [rbp-194h]
  __int64 v115; // [rsp+78h] [rbp-190h]
  int v116; // [rsp+80h] [rbp-188h]
  char v117; // [rsp+84h] [rbp-184h]
  __int64 v118; // [rsp+88h] [rbp-180h]
  int v119; // [rsp+90h] [rbp-178h]
  char v120; // [rsp+94h] [rbp-174h]
  __int64 v121; // [rsp+98h] [rbp-170h]
  int v122; // [rsp+A0h] [rbp-168h]
  char v123; // [rsp+A4h] [rbp-164h]
  __int64 v124; // [rsp+A8h] [rbp-160h]
  char v125[96]; // [rsp+B0h] [rbp-158h] BYREF
  int v126[8]; // [rsp+110h] [rbp-F8h] BYREF
  char v127[64]; // [rsp+130h] [rbp-D8h] BYREF
  int v128; // [rsp+170h] [rbp-98h] BYREF
  char v129; // [rsp+174h] [rbp-94h]
  int v130[2]; // [rsp+178h] [rbp-90h]
  int v131; // [rsp+180h] [rbp-88h]
  char v132; // [rsp+184h] [rbp-84h]
  char v133[8]; // [rsp+188h] [rbp-80h]
  int v134; // [rsp+190h] [rbp-78h] BYREF
  char v135; // [rsp+194h] [rbp-74h]
  __int64 v136; // [rsp+198h] [rbp-70h]
  int v137; // [rsp+1A0h] [rbp-68h]
  char v138; // [rsp+1A4h] [rbp-64h]
  __int64 v139; // [rsp+1A8h] [rbp-60h]
  int v140; // [rsp+1B0h] [rbp-58h]
  char v141; // [rsp+1B4h] [rbp-54h]
  __int64 v142; // [rsp+1B8h] [rbp-50h]
  int v143; // [rsp+1C0h] [rbp-48h]
  char v144; // [rsp+1C4h] [rbp-44h]
  __int64 v145; // [rsp+1C8h] [rbp-40h]

  v10 = sub_9B5AB0((__int64)a1, a5, a6);
  if ( (_BYTE)v10 )
  {
    sub_9D4F70((__int64)&v107, (__int64)&qword_1C7F180);
    v12 = *a4;
    if ( a2 )
    {
      if ( v12 <= 0 )
        goto LABEL_5;
    }
    else if ( v12 >= 0 )
    {
LABEL_5:
      *(_QWORD *)v101 = a3;
      if ( !*(_QWORD *)(a1[94] + 8LL * a3) )
        goto LABEL_8;
      v13 = sub_9AD4F0((__int64)a1, a3);
      sub_9F7AE0((__int64)v125, *(_QWORD *)(a1[94] + 8LL * a3) + 16LL, (__int64)v13);
      sub_8A6550((__int64)v126, (__int64)v125);
      sub_98BA40(v126, (__int64)a4);
      sub_9FFB10((__int64)&v128, (__int64)v126);
      goto LABEL_7;
    }
    *(_QWORD *)v101 = a3;
    v25 = *(_QWORD *)(a1[93] + 8LL * a3);
    if ( !v25 )
    {
LABEL_8:
      *(_QWORD *)v103 = 1;
      *(_QWORD *)v104 = 0;
      *(_QWORD *)v105 = 1;
      *(_QWORD *)v106 = 0;
      sub_182CBA0(qword_1C7F2C0, v105);
      v24 = *(_QWORD *)v101;
      LOBYTE(v105[1]) &= ~1u;
      v105[0] = 1;
      *(_QWORD *)v102 = 4LL * *(_QWORD *)v101;
      if ( (*(_BYTE *)(a1[90] + 4 * v24 + 3) & 0x40) == 0 )
        goto LABEL_9;
      sub_992B90((__int64)&v128, (__int64)a4);
      v28 = v128;
      v128 = v103[0];
      v103[0] = v28;
      v29 = *(_QWORD *)v130;
      *(_QWORD *)v130 = *(_QWORD *)v104;
      *(_QWORD *)v104 = v29;
      v30 = v129 & 1;
      LOBYTE(v29) = v103[1] & 0xFC | v129 & 2;
      v129 = v103[1] & 1 | v129 & 0xFC | v103[1] & 2;
      LOBYTE(v103[1]) = v30 | v29;
      LODWORD(v29) = v131;
      v131 = v105[0];
      v105[0] = v29;
      v31 = *(_QWORD *)v133;
      *(_QWORD *)v133 = *(_QWORD *)v106;
      *(_QWORD *)v106 = v31;
      LOBYTE(v31) = v132 & 1 | v105[1] & 0xFC | v132 & 2;
      v132 = v105[1] & 1 | v132 & 0xFC | v105[1] & 2;
      LOBYTE(v105[1]) = v31;
      sub_25A130((char *)&v128);
      if ( (*(_BYTE *)(a1[90] + *(_QWORD *)v102 + 3LL) & 0x40) == 0 )
        goto LABEL_9;
      if ( (v103[1] & 1) == 0 && v103[0] == 1 && (v105[1] & 1) == 0 && v105[0] == 1 )
        goto LABEL_55;
      if ( *(int *)a5 >= 0
        && (*(_DWORD *)a5 || (v32 = *(_DWORD *)(a5 + 32), v32 >= 0) && (v32 || *(int *)(a5 + 64) >= 0)) )
      {
        v100 = a5 + 32;
        sub_992D20((__int64)v125, a5 + 32, (__int64)v103);
        sub_894960((__int64)v126, (__int64)v125);
        sub_9D4F70((__int64)&v128, (__int64)v126);
        v77 = v128;
        v78 = v129;
        v128 = *(_DWORD *)a5;
        v79 = *(_QWORD *)(a5 + 8);
        *(_DWORD *)a5 = v77;
        v80 = *(_QWORD *)v130;
        *(_QWORD *)v130 = v79;
        LOBYTE(v79) = *(_BYTE *)(a5 + 4);
        *(_QWORD *)(a5 + 8) = v80;
        LOBYTE(v80) = v78;
        v78 &= ~2u;
        v81 = v79 & 0xFD;
        v129 = v79 & 1 | v78 & 0xFE | v79 & 2;
        LODWORD(v79) = *(_DWORD *)(a5 + 16);
        *(_BYTE *)(a5 + 4) = v78 & 1 | v81 & 0xFE | v80 & 2;
        LODWORD(v80) = v131;
        v131 = v79;
        v82 = *(_QWORD *)(a5 + 24);
        v83 = v132;
        *(_DWORD *)(a5 + 16) = v80;
        v84 = *(_QWORD *)v133;
        *(_QWORD *)v133 = v82;
        LOBYTE(v82) = *(_BYTE *)(a5 + 20);
        *(_QWORD *)(a5 + 24) = v84;
        LOBYTE(v84) = v83;
        v83 &= ~2u;
        v85 = v82 & 0xFD;
        v132 = v82 & 1 | v83 & 0xFE | v82 & 2;
        LODWORD(v82) = *(_DWORD *)(a5 + 32);
        *(_BYTE *)(a5 + 20) = v83 & 1 | v85 & 0xFE | v84 & 2;
        LODWORD(v84) = v134;
        v134 = v82;
        v86 = *(_QWORD *)(a5 + 40);
        *(_DWORD *)(a5 + 32) = v84;
        v87 = v136;
        v136 = v86;
        *(_QWORD *)(a5 + 40) = v87;
        v88 = *(_BYTE *)(a5 + 36);
        LOBYTE(v86) = v88 & 2;
        v88 &= ~2u;
        LOBYTE(v87) = v135 & 1 | v88 & 0xFE | v135 & 2;
        v89 = v138;
        v135 = v88 & 1 | v135 & 0xFC | v86 & 0xFE;
        LODWORD(v86) = *(_DWORD *)(a5 + 48);
        *(_BYTE *)(a5 + 36) = v87;
        LODWORD(v87) = v137;
        v137 = v86;
        v90 = *(_QWORD *)(a5 + 56);
        *(_DWORD *)(a5 + 48) = v87;
        v91 = v139;
        v139 = v90;
        LOBYTE(v90) = *(_BYTE *)(a5 + 52);
        *(_QWORD *)(a5 + 56) = v91;
        LOBYTE(v91) = v89;
        v89 &= ~2u;
        v92 = v90 & 0xFD;
        v138 = v90 & 1 | v89 & 0xFE | v90 & 2;
        LODWORD(v90) = *(_DWORD *)(a5 + 64);
        *(_BYTE *)(a5 + 52) = v89 & 1 | v92 & 0xFE | v91 & 2;
        LODWORD(v91) = v140;
        v140 = v90;
        v93 = *(_QWORD *)(a5 + 72);
        v94 = v141;
        *(_DWORD *)(a5 + 64) = v91;
        v95 = v142;
        v142 = v93;
        LOBYTE(v93) = *(_BYTE *)(a5 + 68);
        *(_QWORD *)(a5 + 72) = v95;
        LOBYTE(v95) = v94;
        v94 &= ~2u;
        v96 = v93 & 0xFD;
        v141 = v93 & 1 | v94 & 0xFE | v93 & 2;
        LODWORD(v93) = *(_DWORD *)(a5 + 80);
        *(_BYTE *)(a5 + 68) = v94 & 1 | v96 & 0xFE | v95 & 2;
        LODWORD(v95) = v143;
        v143 = v93;
        *(_DWORD *)(a5 + 80) = v95;
        v97 = v145;
        v98 = v144;
        v145 = *(_QWORD *)(a5 + 88);
        LOBYTE(v93) = *(_BYTE *)(a5 + 84);
        *(_QWORD *)(a5 + 88) = v97;
        LOBYTE(v97) = v93 & 0xFD | v98 & 2;
        v98 &= ~2u;
        *(_BYTE *)(a5 + 84) = v98 & 1 | v97 & 0xFE;
        v144 = v93 & 1 | v98 & 0xFE | v93 & 2;
        sub_2A6060((__int64)&v128);
        sub_25A130(v127);
        sub_25A130((char *)v126);
        sub_25A130(v125);
      }
      else
      {
        sub_894960((__int64)v126, (__int64)v103);
        sub_9D4F70((__int64)&v128, (__int64)v126);
        v33 = v128;
        v34 = v129;
        v128 = *(_DWORD *)a5;
        v35 = *(_QWORD *)(a5 + 8);
        *(_DWORD *)a5 = v33;
        v36 = *(_QWORD *)v130;
        *(_QWORD *)v130 = v35;
        LOBYTE(v35) = *(_BYTE *)(a5 + 4);
        *(_QWORD *)(a5 + 8) = v36;
        LOBYTE(v36) = v34;
        v34 &= ~2u;
        v37 = v35 & 0xFD;
        v129 = v35 & 1 | v34 & 0xFE | v35 & 2;
        LODWORD(v35) = *(_DWORD *)(a5 + 16);
        *(_BYTE *)(a5 + 4) = v34 & 1 | v37 & 0xFE | v36 & 2;
        LODWORD(v36) = v131;
        v131 = v35;
        v38 = *(_QWORD *)(a5 + 24);
        v39 = v132;
        *(_DWORD *)(a5 + 16) = v36;
        v40 = *(_QWORD *)v133;
        *(_QWORD *)v133 = v38;
        LOBYTE(v38) = *(_BYTE *)(a5 + 20);
        *(_QWORD *)(a5 + 24) = v40;
        LOBYTE(v40) = v39;
        v39 &= ~2u;
        v41 = v38 & 0xFD;
        v132 = v38 & 1 | v39 & 0xFE | v38 & 2;
        LODWORD(v38) = *(_DWORD *)(a5 + 32);
        *(_BYTE *)(a5 + 20) = v39 & 1 | v41 & 0xFE | v40 & 2;
        LODWORD(v40) = v134;
        v134 = v38;
        v42 = *(_QWORD *)(a5 + 40);
        *(_DWORD *)(a5 + 32) = v40;
        v43 = v136;
        v136 = v42;
        *(_QWORD *)(a5 + 40) = v43;
        v44 = *(_BYTE *)(a5 + 36);
        LOBYTE(v42) = v44 & 2;
        v44 &= ~2u;
        LOBYTE(v43) = v135 & 1 | v44 & 0xFE | v135 & 2;
        v45 = v138;
        v135 = v44 & 1 | v135 & 0xFC | v42 & 0xFE;
        LODWORD(v42) = *(_DWORD *)(a5 + 48);
        *(_BYTE *)(a5 + 36) = v43;
        LODWORD(v43) = v137;
        v137 = v42;
        v46 = *(_QWORD *)(a5 + 56);
        *(_DWORD *)(a5 + 48) = v43;
        v47 = v139;
        v139 = v46;
        LOBYTE(v46) = *(_BYTE *)(a5 + 52);
        *(_QWORD *)(a5 + 56) = v47;
        LOBYTE(v47) = v45;
        v45 &= ~2u;
        v48 = v46 & 0xFD;
        v138 = v46 & 1 | v45 & 0xFE | v46 & 2;
        LODWORD(v46) = *(_DWORD *)(a5 + 64);
        *(_BYTE *)(a5 + 52) = v45 & 1 | v48 & 0xFE | v47 & 2;
        LODWORD(v47) = v140;
        v140 = v46;
        v49 = *(_QWORD *)(a5 + 72);
        v50 = v141;
        *(_DWORD *)(a5 + 64) = v47;
        v51 = v142;
        v142 = v49;
        LOBYTE(v49) = *(_BYTE *)(a5 + 68);
        *(_QWORD *)(a5 + 72) = v51;
        LOBYTE(v51) = v50;
        v50 &= ~2u;
        v52 = v49 & 0xFD;
        v141 = v49 & 1 | v50 & 0xFE | v49 & 2;
        LODWORD(v49) = *(_DWORD *)(a5 + 80);
        *(_BYTE *)(a5 + 68) = v50 & 1 | v52 & 0xFE | v51 & 2;
        LODWORD(v51) = v143;
        v143 = v49;
        *(_DWORD *)(a5 + 80) = v51;
        v53 = v145;
        v54 = v144;
        v145 = *(_QWORD *)(a5 + 88);
        LOBYTE(v49) = *(_BYTE *)(a5 + 84);
        *(_QWORD *)(a5 + 88) = v53;
        LOBYTE(v53) = v49 & 0xFD | v54 & 2;
        v54 &= ~2u;
        *(_BYTE *)(a5 + 84) = v54 & 1 | v53 & 0xFE;
        v144 = v49 & 1 | v54 & 0xFE | v49 & 2;
        sub_2A6060((__int64)&v128);
        sub_25A130(v127);
        sub_25A130((char *)v126);
        v100 = a5 + 32;
      }
      sub_9B0200((int)a1, v100, (int *)a6);
      if ( (*(_BYTE *)(a1[90] + *(_QWORD *)v102 + 3LL) & 0x40) != 0 )
      {
LABEL_55:
        if ( *(_DWORD *)a6 || (*(_BYTE *)(a6 + 52) & 1) != 0 || *(_DWORD *)(a6 + 48) != 1 || *(_DWORD *)(a6 + 64) )
        {
          sub_9A9130((__int64)v125, a6 + 32);
          sub_894960((__int64)v126, (__int64)v125);
          sub_9D4F70((__int64)&v128, (__int64)v126);
          v55 = v128;
          v56 = v129;
          v128 = *(_DWORD *)a6;
          v57 = *(_QWORD *)(a6 + 8);
          *(_DWORD *)a6 = v55;
          v58 = *(_QWORD *)v130;
          *(_QWORD *)v130 = v57;
          LOBYTE(v57) = *(_BYTE *)(a6 + 4);
          *(_QWORD *)(a6 + 8) = v58;
          LOBYTE(v58) = v56;
          v56 &= ~2u;
          v59 = v57 & 0xFD;
          v129 = v57 & 1 | v56 & 0xFE | v57 & 2;
          LODWORD(v57) = *(_DWORD *)(a6 + 16);
          *(_BYTE *)(a6 + 4) = v56 & 1 | v59 & 0xFE | v58 & 2;
          LODWORD(v58) = v131;
          v131 = v57;
          v60 = *(_QWORD *)(a6 + 24);
          v61 = v132;
          *(_DWORD *)(a6 + 16) = v58;
          v62 = *(_QWORD *)v133;
          *(_QWORD *)v133 = v60;
          LOBYTE(v60) = *(_BYTE *)(a6 + 20);
          *(_QWORD *)(a6 + 24) = v62;
          LOBYTE(v62) = v61;
          v61 &= ~2u;
          v63 = v60 & 0xFD;
          v132 = v60 & 1 | v61 & 0xFE | v60 & 2;
          LODWORD(v60) = *(_DWORD *)(a6 + 32);
          *(_BYTE *)(a6 + 20) = v61 & 1 | v63 & 0xFE | v62 & 2;
          LODWORD(v62) = v134;
          v134 = v60;
          v64 = *(_QWORD *)(a6 + 40);
          *(_DWORD *)(a6 + 32) = v62;
          v65 = v136;
          v136 = v64;
          *(_QWORD *)(a6 + 40) = v65;
          v66 = *(_BYTE *)(a6 + 36);
          LOBYTE(v64) = v66 & 2;
          v66 &= ~2u;
          LOBYTE(v65) = v135 & 1 | v66 & 0xFE | v135 & 2;
          v67 = v138;
          v135 = v66 & 1 | v135 & 0xFC | v64 & 0xFE;
          LODWORD(v64) = *(_DWORD *)(a6 + 48);
          *(_BYTE *)(a6 + 36) = v65;
          LODWORD(v65) = v137;
          v137 = v64;
          v68 = *(_QWORD *)(a6 + 56);
          *(_DWORD *)(a6 + 48) = v65;
          v69 = v139;
          v139 = v68;
          LOBYTE(v68) = *(_BYTE *)(a6 + 52);
          *(_QWORD *)(a6 + 56) = v69;
          LOBYTE(v69) = v67;
          v67 &= ~2u;
          v70 = v68 & 0xFD;
          v138 = v68 & 1 | v67 & 0xFE | v68 & 2;
          LODWORD(v68) = *(_DWORD *)(a6 + 64);
          *(_BYTE *)(a6 + 52) = v67 & 1 | v70 & 0xFE | v69 & 2;
          LODWORD(v69) = v140;
          v140 = v68;
          v71 = *(_QWORD *)(a6 + 72);
          v72 = v141;
          *(_DWORD *)(a6 + 64) = v69;
          v73 = v142;
          v142 = v71;
          LOBYTE(v71) = *(_BYTE *)(a6 + 68);
          *(_QWORD *)(a6 + 72) = v73;
          LOBYTE(v73) = v72;
          v72 &= ~2u;
          v74 = v71 & 0xFD;
          v141 = v71 & 1 | v72 & 0xFE | v71 & 2;
          LODWORD(v71) = *(_DWORD *)(a6 + 80);
          *(_BYTE *)(a6 + 68) = v72 & 1 | v74 & 0xFE | v73 & 2;
          LODWORD(v73) = v143;
          v143 = v71;
          *(_DWORD *)(a6 + 80) = v73;
          v75 = v145;
          v76 = v144;
          v145 = *(_QWORD *)(a6 + 88);
          LOBYTE(v71) = *(_BYTE *)(a6 + 84);
          *(_QWORD *)(a6 + 88) = v75;
          LOBYTE(v75) = v71 & 0xFD | v76 & 2;
          v76 &= ~2u;
          *(_BYTE *)(a6 + 84) = v76 & 1 | v75 & 0xFE;
          v144 = v71 & 1 | v76 & 0xFE | v71 & 2;
          sub_2A6060((__int64)&v128);
          sub_25A130(v127);
          sub_25A130((char *)v126);
          sub_25A130(v125);
          sub_9B0200((int)a1, a5 + 32, (int *)a6);
          if ( v107 )
            goto LABEL_32;
        }
        else if ( v107 )
        {
LABEL_33:
          sub_9A9130((__int64)v126, (__int64)&v113);
          sub_894960((__int64)&v128, (__int64)v126);
          sub_992B50((__int64)&v107);
          sub_98B520((__int64)&v113, &v128);
          sub_25A130((char *)&v134);
          sub_25A130((char *)&v128);
          sub_25A130((char *)v126);
          sub_9B0200((int)a1, a5 + 32, &v107);
LABEL_10:
          if ( !*(_DWORD *)a6
            && (*(_BYTE *)(a6 + 36) & 1) == 0
            && *(_DWORD *)(a6 + 32) == -1
            && (*(_BYTE *)(a6 + 52) & 1) == 0
            && *(_DWORD *)(a6 + 48) == 1
            && !*(_DWORD *)(a6 + 64)
            || sub_33D280((__int64)&v107, a6) )
          {
            sub_98B5F0(a6, &v107);
            goto LABEL_14;
          }
LABEL_13:
          v10 = 0;
LABEL_14:
          sub_25A130((char *)v103);
          sub_2A6060((__int64)&v107);
          return v10;
        }
      }
      else
      {
LABEL_9:
        if ( v107 )
          goto LABEL_10;
      }
      if ( (v114 & 1) == 0 && v113 == -1 && (v117 & 1) == 0 && v116 == 1 && !v119 )
        goto LABEL_13;
LABEL_32:
      if ( (*(_BYTE *)(a1[90] + *(_QWORD *)v102 + 3LL) & 0x40) == 0 )
        goto LABEL_10;
      goto LABEL_33;
    }
    v26 = v25 + 16;
    v27 = sub_9AD4F0((__int64)a1, a3);
    sub_9F7AE0((__int64)v125, (__int64)v27, v26);
    sub_8A6550((__int64)v126, (__int64)v125);
    sub_98BA40(v126, (__int64)a4);
    sub_9FFB10((__int64)&v128, (__int64)v126);
LABEL_7:
    v14 = v128;
    v128 = v107;
    v107 = v14;
    v15 = *(_QWORD *)v130;
    *(_QWORD *)v130 = *(_QWORD *)v109;
    *(_QWORD *)v109 = v15;
    v16 = v129 & 1;
    LOBYTE(v15) = v108 & 0xFC | v129 & 2;
    v129 = v108 & 1 | v129 & 0xFC | v108 & 2;
    v108 = v16 | v15;
    LODWORD(v15) = v131;
    v131 = v110;
    v110 = v15;
    v17 = *(_QWORD *)v133;
    *(_QWORD *)v133 = *(_QWORD *)v112;
    *(_QWORD *)v112 = v17;
    LOBYTE(v17) = v132 & 1 | v111 & 0xFC | v132 & 2;
    v132 = v111 & 1 | v132 & 0xFC | v111 & 2;
    v111 = v17;
    LODWORD(v17) = v134;
    v134 = v113;
    v113 = v17;
    v18 = v136;
    v136 = v115;
    v115 = v18;
    LOBYTE(v18) = v135 & 1 | v114 & 0xFC | v135 & 2;
    v135 = v114 & 1 | v135 & 0xFC | v114 & 2;
    v114 = v18;
    LODWORD(v18) = v137;
    v137 = v116;
    v116 = v18;
    v19 = v139;
    v139 = v118;
    v118 = v19;
    v20 = v138 & 1;
    LOBYTE(v19) = v117 & 0xFC | v138 & 2;
    v138 = v117 & 1 | v138 & 0xFC | v117 & 2;
    v117 = v20 | v19;
    LODWORD(v19) = v140;
    v140 = v119;
    v119 = v19;
    v21 = v142;
    v142 = v121;
    v121 = v21;
    LOBYTE(v21) = v141 & 1 | v120 & 0xFC | v141 & 2;
    v141 = v120 & 1 | v141 & 0xFC | v120 & 2;
    v120 = v21;
    LODWORD(v21) = v143;
    v143 = v122;
    v122 = v21;
    v22 = v145;
    v145 = v124;
    v124 = v22;
    v23 = v123 & 1 | v144 & 0xFC | v123 & 2;
    v123 = v144 & 1 | v123 & 0xFC | v144 & 2;
    v144 = v23;
    sub_2A6060((__int64)&v128);
    sub_2A6060((__int64)v126);
    sub_2A6060((__int64)v125);
    goto LABEL_8;
  }
  return v10;
}

