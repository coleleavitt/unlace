/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: asctoreal
// Address: 0x000000010006E530

//----- (000000010006E530) ----------------------------------------------------
__int64 __fastcall asctoreal(char **a1, int16x4_t *a2)
{
  int16x4_t *v2; // x23
  char **v3; // x22
  char *v4; // x1
  __int64 v5; // x8
  int v6; // t1
  int v7; // w9
  char v8; // w24
  int v9; // w21
  int v10; // w28
  unsigned int v11; // w23
  int v12; // w8
  __int16 v13; // w25
  char *v14; // x20
  int v15; // t1
  __int64 v16; // x8
  char *v17; // x22
  int v18; // t1
  char v19; // w9
  char *v20; // x22
  int v21; // t1
  int v22; // t1
  int v23; // w12
  int v24; // w11
  unsigned __int64 v25; // t2
  int v26; // w13
  int v27; // w14
  int v28; // w15
  int v29; // w16
  int v30; // w17
  int v31; // w0
  int v32; // w1
  int v33; // w2
  int v34; // w3
  int v35; // w4
  int v36; // w5
  int v37; // w6
  int v38; // w7
  unsigned __int16 v39; // w30
  unsigned __int16 v40; // w1
  unsigned __int16 v41; // w2
  unsigned __int16 v42; // w3
  unsigned __int16 v43; // w4
  unsigned __int16 v44; // w5
  __int16 v45; // w6
  unsigned int v46; // w7
  unsigned int v47; // w11
  int v48; // w12
  unsigned int v49; // w12
  unsigned int v50; // w13
  unsigned int v51; // w14
  unsigned int v52; // w15
  unsigned int v53; // w16
  int v54; // w17
  unsigned int v55; // w9
  unsigned int v56; // w9
  unsigned int v57; // w9
  unsigned int v58; // w9
  unsigned int v59; // w9
  unsigned int v60; // w9
  int v61; // w9
  int v62; // w8
  __int16 v63; // w26
  int v64; // w25
  unsigned int v65; // w8
  int v66; // w9
  int v67; // w11
  int v68; // w12
  int v69; // w13
  int v70; // w14
  int v71; // w15
  int v72; // w10
  int v73; // w16
  unsigned __int64 v74; // t2
  int v75; // w17
  int v76; // w0
  int v77; // w1
  int v78; // w2
  int v79; // w3
  unsigned __int16 v80; // w5
  unsigned __int16 v81; // w6
  unsigned __int16 v82; // w17
  unsigned __int16 v83; // w0
  unsigned __int16 v84; // w1
  unsigned __int16 v85; // w2
  int v86; // w3
  unsigned int v87; // w14
  unsigned int v88; // w13
  unsigned int v89; // w12
  unsigned int v90; // w11
  unsigned int v91; // w9
  unsigned int v92; // w8
  unsigned __int64 v93; // t2
  unsigned __int64 v94; // t2
  bool v95; // vf
  int v96; // w0
  __int16 v97; // w8
  __int16 v98; // w9
  __int16 v99; // w10
  __int16 v100; // w11
  int16x4_t v101; // d0
  __int64 result; // x0
  int v103; // w21
  int v104; // w19
  char v105; // w1
  int v106; // w19
  unsigned __int64 v107; // t2
  int v108; // w0
  int v109; // w8
  int v110; // w9
  int v111; // w9
  char *v112; // x10
  bool v113; // zf
  __int64 v114; // x11
  int v115; // w11
  char *v116; // x12
  __uint32_t v117; // w13
  int16x4_t *v118; // [xsp+8h] [xbp-128h]
  char **v119; // [xsp+10h] [xbp-120h]
  int v120; // [xsp+1Ch] [xbp-114h]
  __int128 v121; // [xsp+20h] [xbp-110h] BYREF
  char v122[82]; // [xsp+3Eh] [xbp-F2h] BYREF
  __int128 v123; // [xsp+90h] [xbp-A0h] BYREF
  int v124; // [xsp+A0h] [xbp-90h]
  __int16 v125; // [xsp+A4h] [xbp-8Ch]
  _QWORD v126[3]; // [xsp+B0h] [xbp-80h] BYREF
  int8x16x2_t v127; // 0:q0.32
  int8x16x2_t v128; // 0:q0.32
  int8x16x2_t v129; // 0:q0.32

  v2 = a2;
  v3 = a1;
  *a2 = 0;
  a2[1] = 0;
  v4 = *a1;
  if ( (**a1 & 0x80000000) == 0 )
  {
    v5 = (unsigned __int8)**a1;
    while ( (_DefaultRuneLocale.__runetype[v5] & 0x4000) != 0 )
    {
      v6 = *++v4;
      v5 = (unsigned __int8)v6;
      if ( v6 < 0 )
        goto LABEL_7;
    }
    if ( !v5 )
      return 3;
  }
LABEL_7:
  *a1 = v4;
  qstrncpy(v122, (unsigned __int8 *)v4, 80);
  memset(v126, 0, 22);
  v7 = (unsigned __int8)v122[0];
  if ( !v122[0] )
  {
    v63 = 0;
    v8 = 0;
    v62 = 0;
    v14 = v122;
    goto LABEL_58;
  }
  v118 = v2;
  v119 = v3;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v120 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = v122;
  while ( 1 )
  {
    if ( (v7 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v7] & 0x400) != 0 )
    {
      if ( v11 <= 1 )
        v11 = 1;
      v19 = v7 - 48;
      if ( v19 || v10 || v12 )
      {
        if ( WORD2(v126[0]) )
        {
          v8 |= v19 != 0;
        }
        else
        {
          v23 = v120;
          if ( v12 )
            v23 = v120 + 1;
          v120 = v23;
          HIDWORD(v25) = WORD1(v126[2]);
          LODWORD(v25) = WORD2(v126[2]) << 16;
          v24 = v25 >> 31;
          HIDWORD(v25) = LOWORD(v126[2]);
          LODWORD(v25) = WORD1(v126[2]) << 16;
          v48 = v25 >> 31;
          HIDWORD(v25) = HIWORD(v126[1]);
          LODWORD(v25) = LOWORD(v126[2]) << 16;
          v26 = v25 >> 31;
          HIDWORD(v25) = WORD2(v126[1]);
          LODWORD(v25) = HIWORD(v126[1]) << 16;
          v27 = v25 >> 31;
          HIDWORD(v25) = WORD1(v126[1]);
          LODWORD(v25) = WORD2(v126[1]) << 16;
          v28 = v25 >> 31;
          HIDWORD(v25) = LOWORD(v126[1]);
          LODWORD(v25) = WORD1(v126[1]) << 16;
          v29 = v25 >> 31;
          HIDWORD(v25) = HIWORD(v126[0]);
          LODWORD(v25) = LOWORD(v126[1]) << 16;
          v30 = v25 >> 31;
          v31 = HIWORD(v126[0]) >> 15;
          HIDWORD(v25) = v48;
          LODWORD(v25) = v24 << 16;
          v32 = v25 >> 31;
          HIDWORD(v25) = v26;
          LODWORD(v25) = v48 << 16;
          v33 = v25 >> 31;
          HIDWORD(v25) = v27;
          LODWORD(v25) = v26 << 16;
          v34 = v25 >> 31;
          HIDWORD(v25) = v28;
          LODWORD(v25) = v27 << 16;
          v35 = v25 >> 31;
          HIDWORD(v25) = v29;
          LODWORD(v25) = v28 << 16;
          v36 = v25 >> 31;
          HIDWORD(v25) = v30;
          LODWORD(v25) = v29 << 16;
          v37 = v25 >> 31;
          HIDWORD(v25) = v31;
          LODWORD(v25) = v30 << 16;
          v38 = v25 >> 31;
          HIDWORD(v25) = v32;
          LODWORD(v25) = v24 << 17;
          v39 = v25 >> 31;
          HIDWORD(v25) = v33;
          LODWORD(v25) = v32 << 16;
          v40 = v25 >> 31;
          HIDWORD(v25) = v34;
          LODWORD(v25) = v33 << 16;
          v41 = v25 >> 31;
          HIDWORD(v25) = v35;
          LODWORD(v25) = v34 << 16;
          v42 = v25 >> 31;
          HIDWORD(v25) = v36;
          LODWORD(v25) = v35 << 16;
          v43 = v25 >> 31;
          HIDWORD(v25) = v37;
          LODWORD(v25) = v36 << 16;
          v44 = v25 >> 31;
          HIDWORD(v25) = v38;
          LODWORD(v25) = v37 << 16;
          v45 = v25 >> 31;
          v46 = (4 * v24) & 0xFFFC;
          v47 = (unsigned __int16)(5 * v24);
          v48 = (unsigned __int16)v48;
          if ( v47 < v46 )
            v48 = (unsigned __int16)v48 + 1;
          v49 = v48 + v39;
          v50 = v40 + (unsigned __int16)v26 + HIWORD(v49);
          v51 = v41 + (unsigned __int16)v27 + HIWORD(v50);
          v52 = v42 + (unsigned __int16)v28 + HIWORD(v51);
          v53 = v43 + (unsigned __int16)v29 + HIWORD(v52);
          v54 = v44 + (unsigned __int16)v30 + HIWORD(v53);
          WORD2(v126[2]) *= 2;
          v55 = v47 + (unsigned __int16)v19;
          WORD1(v126[2]) = v55;
          v56 = HIWORD(v55) + (unsigned __int16)v49;
          LOWORD(v126[2]) = v56;
          v57 = HIWORD(v56) + (unsigned __int16)v50;
          HIWORD(v126[1]) = v57;
          v58 = HIWORD(v57) + (unsigned __int16)v51;
          WORD2(v126[1]) = v58;
          v59 = HIWORD(v58) + (unsigned __int16)v52;
          WORD1(v126[1]) = v59;
          v60 = HIWORD(v59) + (unsigned __int16)v53;
          LOWORD(v126[1]) = v60;
          v61 = HIWORD(v60) + (unsigned __int16)v54;
          HIWORD(v126[0]) = v61;
          WORD2(v126[0]) = v45 + v31 + HIWORD(v54) + HIWORD(v61);
        }
        ++v10;
      }
      else
      {
        v10 = 0;
      }
      goto LABEL_13;
    }
    if ( (unsigned __int8)v7 == 122 )
    {
      if ( !v9 )
        goto LABEL_128;
      v9 = 1;
      goto LABEL_13;
    }
    if ( (unsigned __int8)v7 != 46 )
      break;
    if ( v12 )
      goto LABEL_128;
    v16 = 46;
    v17 = v14;
    do
    {
      if ( (_DefaultRuneLocale.__runetype[v16] & 0x400) == 0 )
        break;
      v18 = *++v17;
      v16 = (unsigned __int8)v18;
    }
    while ( (v18 & 0x80000000) == 0 );
    if ( __tolower((unsigned __int8)v16) == 101 )
    {
      if ( !v11 && v17 == v14 )
        goto LABEL_128;
    }
    else
    {
      *v17 = 0;
    }
    if ( v17 > v122 )
    {
      v21 = (unsigned __int8)*(v17 - 1);
      v20 = v17 - 1;
      if ( v21 == 48 )
      {
        do
        {
          *v20 = 122;
          if ( v20 <= v122 )
            break;
          v22 = (unsigned __int8)*--v20;
        }
        while ( v22 == 48 );
        v9 = 1;
      }
    }
    if ( v11 <= 1 )
      v11 = 1;
    v12 = 1;
LABEL_13:
    v15 = (unsigned __int8)*++v14;
    LOBYTE(v7) = v15;
    if ( !v15 )
      goto LABEL_54;
  }
  if ( (unsigned __int8)v7 == 45 || (unsigned __int8)v7 == 43 )
  {
    if ( !v11 )
    {
      if ( (unsigned __int8)v7 == 45 )
        v13 = -1;
      v11 = -1;
      goto LABEL_13;
    }
LABEL_54:
    v62 = 0;
LABEL_55:
    v2 = v118;
    v3 = v119;
LABEL_56:
    v63 = v13;
    v7 = v120;
    goto LABEL_58;
  }
  if ( __tolower((unsigned __int8)v7) == 101 )
  {
    if ( v11 )
    {
      v112 = v14 + 1;
      v111 = (unsigned __int8)v14[1];
      v113 = v111 == 45 || v111 == 43;
      v114 = 1;
      if ( v113 )
      {
        v114 = 2;
        v112 = v14 + 2;
      }
      v115 = v14[v114];
      if ( (v115 & 0x80000000) == 0 )
      {
        v3 = v119;
        if ( (_DefaultRuneLocale.__runetype[(unsigned __int8)v115] & 0x400) == 0 )
        {
          result = 3;
          LODWORD(v14) = (_DWORD)v112;
          goto LABEL_130;
        }
        v62 = 0;
        v115 = (unsigned __int8)v115;
        v116 = v112 + 1;
        v2 = v118;
        while ( 1 )
        {
          LODWORD(v14) = (_DWORD)v116;
          v62 = v115 + 10 * v62 - 48;
          if ( (v62 & 0x8000) != 0 )
            goto LABEL_127;
          if ( (*v116 & 0x80000000) == 0 )
          {
            v115 = (unsigned __int8)*v116;
            v117 = _DefaultRuneLocale.__runetype[(unsigned __int8)*v116++];
            if ( (v117 & 0x400) != 0 )
              continue;
          }
          if ( v111 != 45 )
            goto LABEL_56;
          if ( v62 )
          {
            v63 = v13;
            v62 = -v62;
            v7 = v120;
            goto LABEL_58;
          }
          goto LABEL_127;
        }
      }
      result = 3;
      LODWORD(v14) = (_DWORD)v112;
      goto LABEL_129;
    }
LABEL_128:
    result = 3;
LABEL_129:
    v3 = v119;
    goto LABEL_130;
  }
  if ( !v11 )
    goto LABEL_128;
  v62 = 0;
  if ( (v11 & 0x80000000) == 0 )
    goto LABEL_55;
  v3 = v119;
  if ( !v10 )
  {
LABEL_127:
    result = 3;
    goto LABEL_130;
  }
  v63 = v13;
  v2 = v118;
  v7 = v120;
LABEL_58:
  v64 = v62 - v7;
  if ( v62 - v7 >= 1 && !WORD2(v126[0]) )
  {
    v65 = HIWORD(v126[0]);
    v66 = LOWORD(v126[1]);
    v67 = WORD1(v126[1]);
    v68 = WORD2(v126[1]);
    v69 = HIWORD(v126[1]);
    v70 = LOWORD(v126[2]);
    v71 = WORD1(v126[2]);
    v72 = WORD2(v126[2]);
    while ( 1 )
    {
      HIDWORD(v74) = v70;
      LODWORD(v74) = v71 << 16;
      v73 = v74 >> 31;
      HIDWORD(v74) = v69;
      LODWORD(v74) = v70 << 16;
      v75 = v74 >> 31;
      HIDWORD(v74) = v68;
      LODWORD(v74) = v69 << 16;
      v76 = v74 >> 31;
      HIDWORD(v74) = v67;
      LODWORD(v74) = v68 << 16;
      v77 = v74 >> 31;
      HIDWORD(v74) = v66;
      LODWORD(v74) = v67 << 16;
      v78 = v74 >> 31;
      HIDWORD(v74) = v65;
      LODWORD(v74) = v66 << 16;
      v79 = v74 >> 31;
      HIDWORD(v74) = v73;
      LODWORD(v74) = v71 << 17;
      v80 = v74 >> 31;
      HIDWORD(v74) = v75;
      LODWORD(v74) = v73 << 16;
      v81 = v74 >> 31;
      HIDWORD(v74) = v76;
      LODWORD(v74) = v75 << 16;
      v82 = v74 >> 31;
      HIDWORD(v74) = v77;
      LODWORD(v74) = v76 << 16;
      v83 = v74 >> 31;
      HIDWORD(v74) = v78;
      LODWORD(v74) = v77 << 16;
      v84 = v74 >> 31;
      HIDWORD(v74) = v79;
      LODWORD(v74) = v78 << 16;
      v85 = v74 >> 31;
      HIDWORD(v74) = (v65 >> 15) & 1;
      LODWORD(v74) = v79 << 16;
      v86 = v74 >> 31;
      v70 = (unsigned __int16)v70;
      if ( (unsigned __int16)(5 * v71) < (unsigned int)(unsigned __int16)v71 )
        v70 = (unsigned __int16)v70 + 1;
      v87 = v70 + v80;
      v88 = v81 + (unsigned __int16)v69 + HIWORD(v87);
      v89 = v82 + (unsigned __int16)v68 + HIWORD(v88);
      v90 = v83 + (unsigned __int16)v67 + HIWORD(v89);
      v91 = v84 + (unsigned __int16)v66 + HIWORD(v90);
      v92 = (unsigned __int16)v65 + v85 + HIWORD(v91);
      HIDWORD(v93) = v86 + HIWORD(v92);
      LODWORD(v93) = v92 << 16;
      if ( (unsigned int)(v93 >> 31) )
        break;
      HIDWORD(v94) = v92;
      LODWORD(v94) = v91 << 16;
      v65 = v94 >> 31;
      HIDWORD(v94) = v91;
      LODWORD(v94) = v90 << 16;
      v66 = v94 >> 31;
      HIDWORD(v94) = v90;
      LODWORD(v94) = v89 << 16;
      v67 = v94 >> 31;
      HIDWORD(v94) = v89;
      LODWORD(v94) = v88 << 16;
      v68 = v94 >> 31;
      WORD2(v126[0]) = 0;
      HIWORD(v126[0]) = v65;
      LOWORD(v126[1]) = v66;
      HIDWORD(v94) = v88;
      LODWORD(v94) = v87 << 16;
      v69 = v94 >> 31;
      WORD1(v126[1]) = v67;
      WORD2(v126[1]) = v68;
      HIDWORD(v94) = v87;
      LODWORD(v94) = 327680 * v71;
      v70 = v94 >> 31;
      HIWORD(v126[1]) = v69;
      LOWORD(v126[2]) = v94 >> 31;
      HIDWORD(v94) = 5 * v71;
      LODWORD(v94) = v72 << 16;
      v71 = v94 >> 31;
      *(_DWORD *)((char *)&v126[2] + 2) = v71;
      v72 = 0;
      v95 = __OFSUB__(v64--, 1);
      if ( (v64 < 0) ^ v95 | (v64 == 0) )
      {
        v64 = 0;
        break;
      }
    }
  }
  v96 = sub_10006CC20((__int64)v126, v127);
  if ( v96 > 112 )
  {
    v97 = 0;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    goto LABEL_69;
  }
  if ( !(unsigned int)emdnorm((__int64)v126, v8 & 1, 0, 16494 - v96, 112, v128) )
    goto LABEL_113;
  v103 = WORD1(v126[0]);
  if ( v64 )
  {
    if ( v64 < 0 )
    {
      v104 = -v64;
      if ( -v64 > 4096 )
      {
        v123 = xmmword_10008C240;
        v124 = -2142563009;
        v125 = 0;
        sub_10006DB78((__int64)&v123, (__int16 *)v126);
        v103 -= 13606;
        LOWORD(v104) = -4096 - v64;
      }
    }
    else
    {
      LOWORD(v104) = v64;
    }
    v121 = xmmword_10008C250;
    if ( (v104 & 1) == 0 )
    {
      if ( (v104 & 2) == 0 )
        goto LABEL_82;
LABEL_97:
      emul((__int64)&v121, (__int64)&qword_10008C310, (__int64)&v121);
      if ( (v104 & 4) != 0 )
        goto LABEL_98;
LABEL_83:
      if ( (v104 & 8) == 0 )
        goto LABEL_84;
LABEL_99:
      emul((__int64)&v121, (__int64)&qword_10008C2F0, (__int64)&v121);
      if ( (v104 & 0x10) != 0 )
        goto LABEL_100;
LABEL_85:
      if ( (v104 & 0x20) == 0 )
        goto LABEL_86;
LABEL_101:
      emul((__int64)&v121, (__int64)qword_10008C2D0, (__int64)&v121);
      if ( (v104 & 0x40) != 0 )
        goto LABEL_102;
LABEL_87:
      if ( (v104 & 0x80) == 0 )
        goto LABEL_88;
LABEL_103:
      emul((__int64)&v121, (__int64)qword_10008C2B0, (__int64)&v121);
      if ( (v104 & 0x100) != 0 )
        goto LABEL_104;
LABEL_89:
      if ( (v104 & 0x200) == 0 )
        goto LABEL_90;
LABEL_105:
      emul((__int64)&v121, (__int64)qword_10008C290, (__int64)&v121);
      if ( (v104 & 0x400) != 0 )
        goto LABEL_106;
LABEL_91:
      if ( (v104 & 0x800) == 0 )
        goto LABEL_92;
LABEL_107:
      emul((__int64)&v121, (__int64)qword_10008C270, (__int64)&v121);
      if ( (v104 & 0x1000) == 0 )
        goto LABEL_94;
LABEL_93:
      emul((__int64)&v121, (__int64)qword_10008C260, (__int64)&v121);
      goto LABEL_94;
    }
    emul((__int64)&v121, (__int64)&qword_10008C320, (__int64)&v121);
    if ( (v104 & 2) != 0 )
      goto LABEL_97;
LABEL_82:
    if ( (v104 & 4) == 0 )
      goto LABEL_83;
LABEL_98:
    emul((__int64)&v121, (__int64)&qword_10008C300, (__int64)&v121);
    if ( (v104 & 8) != 0 )
      goto LABEL_99;
LABEL_84:
    if ( (v104 & 0x10) == 0 )
      goto LABEL_85;
LABEL_100:
    emul((__int64)&v121, (__int64)&qword_10008C2E0, (__int64)&v121);
    if ( (v104 & 0x20) != 0 )
      goto LABEL_101;
LABEL_86:
    if ( (v104 & 0x40) == 0 )
      goto LABEL_87;
LABEL_102:
    emul((__int64)&v121, (__int64)qword_10008C2C0, (__int64)&v121);
    if ( (v104 & 0x80) != 0 )
      goto LABEL_103;
LABEL_88:
    if ( (v104 & 0x100) == 0 )
      goto LABEL_89;
LABEL_104:
    emul((__int64)&v121, (__int64)qword_10008C2A0, (__int64)&v121);
    if ( (v104 & 0x200) != 0 )
      goto LABEL_105;
LABEL_90:
    if ( (v104 & 0x400) == 0 )
      goto LABEL_91;
LABEL_106:
    emul((__int64)&v121, (__int64)qword_10008C280, (__int64)&v121);
    if ( (v104 & 0x800) != 0 )
      goto LABEL_107;
LABEL_92:
    if ( (v104 & 0x1000) != 0 )
      goto LABEL_93;
LABEL_94:
    LOWORD(v123) = (unsigned int)SHIWORD(v121) >> 15;
    v106 = HIWORD(v121) & 0x7FFF;
    *(_DWORD *)((char *)&v123 + 2) = v106;
    *(int16x4_t *)((char *)&v123 + 6) = vrev64_s16(*(int16x4_t *)((char *)&v121 + 6));
    HIWORD(v123) = WORD2(v121);
    HIDWORD(v107) = v121;
    LODWORD(v107) = v121;
    v124 = v107 >> 16;
    v125 = 0;
    if ( v64 < 0 )
    {
      v108 = sub_10006DB78((__int64)&v123, (__int16 *)v126);
      v109 = 0x3FFF;
      v110 = v103 - v106;
    }
    else
    {
      v108 = sub_10006D754((__int64)&v123, (__int16 *)v126);
      v109 = -16382;
      v110 = v103 + v106;
    }
    v103 = v110 + v109;
    v105 = v108 != 0;
  }
  else
  {
    v105 = 0;
  }
  if ( (unsigned int)emdnorm((__int64)v126, v105, 0, v103, 112, v129) )
  {
    v100 = WORD1(v126[0]);
    v99 = HIWORD(v126[0]);
    v98 = v126[1];
    v97 = WORD1(v126[1]);
    v101 = *(int16x4_t *)((char *)&v126[1] + 4);
LABEL_69:
    if ( v63 )
      v100 |= 0x8000u;
    v2[1].i16[3] = v100;
    v2[1].i16[2] = v99;
    v2[1].i16[1] = v98;
    v2[1].i16[0] = v97;
    *v2 = vrev64_s16(v101);
    result = 1;
  }
  else
  {
LABEL_113:
    result = 2;
  }
LABEL_130:
  *v3 += (int)((_DWORD)v14 - (unsigned int)v122);
  return result;
}
// 10006EA6C: variable 'v127' is possibly undefined
// 10006EAD0: variable 'v128' is possibly undefined
// 10006ED40: variable 'v129' is possibly undefined
// 10008C240: using guessed type __int128 xmmword_10008C240;
// 10008C250: using guessed type __int128 xmmword_10008C250;
// 10008C260: using guessed type __int64 qword_10008C260[2];
// 10008C270: using guessed type __int64 qword_10008C270[2];
// 10008C280: using guessed type __int64 qword_10008C280[2];
// 10008C290: using guessed type __int64 qword_10008C290[2];
// 10008C2A0: using guessed type __int64 qword_10008C2A0[2];
// 10008C2B0: using guessed type __int64 qword_10008C2B0[2];
// 10008C2C0: using guessed type __int64 qword_10008C2C0[2];
// 10008C2D0: using guessed type __int64 qword_10008C2D0[2];
// 10008C2E0: using guessed type __int64 qword_10008C2E0;
// 10008C2F0: using guessed type __int64 qword_10008C2F0;
// 10008C300: using guessed type __int64 qword_10008C300;
// 10008C310: using guessed type __int64 qword_10008C310;
// 10008C320: using guessed type __int64 qword_10008C320;
