/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4890C8
// Address: 0x00000000004890C8

//----- (00000000004890C8) ----------------------------------------------------
__int64 __fastcall sub_4890C8(char *a1, unsigned __int64 a2, __int64 *a3, int a4)
{
  unsigned int v8; // w0
  unsigned int v10; // w25
  unsigned int v11; // w0
  __int64 v12; // x3
  int v13; // w0
  unsigned int v14; // w28
  unsigned int v15; // w21
  int v16; // w23
  unsigned int v17; // w0
  unsigned int v18; // w0
  unsigned __int64 v19; // x1
  const char *v20; // x0
  __int64 v21; // x21
  __int64 v22; // x21
  char *v23; // x0
  int v24; // w0
  int v25; // w2
  int v26; // w0
  int *v27; // x1
  _BYTE *v28; // x0
  int i; // w6
  char *v30; // x21
  int v31; // w7
  __int16 *v32; // x8
  __int16 v33; // w0
  __int16 v34; // w1
  bool v35; // zf
  __int16 v36; // w1
  __int16 v37; // w0
  _QWORD *v38; // x8
  __int16 v39; // w1
  _QWORD *v40; // x8
  __int16 v41; // w0
  __int16 v42; // w1
  __int64 v43; // x0
  unsigned int v44; // w1
  unsigned int v45; // w1
  int v46; // w0
  int v47; // w2
  char *v48; // x3
  int v49; // w0
  int v50; // w0
  char v51; // t1
  int v52; // w0
  int v53; // w0
  unsigned int v54; // w26
  unsigned int v55; // w24
  __int64 v56; // x21
  unsigned int v57; // w24
  unsigned __int64 v58; // x1
  const char *v59; // x7
  unsigned int v60; // w2
  unsigned int v61; // w24
  __int64 v62; // x23
  const char *v63; // x23
  const char *v64; // x3
  __int16 *v65; // x6
  __int16 v66; // w0
  __int16 v67; // w1
  _QWORD *v68; // x7
  __int16 v69; // w1
  __int16 v70; // w0
  __int16 v71; // w1
  _QWORD *v72; // x6
  __int16 v73; // w0
  __int16 v74; // w1
  __int64 v75; // x0
  unsigned int v76; // w1
  unsigned int v77; // w1
  __int64 v78; // x24
  unsigned int v79; // w0
  int v80; // w1
  size_t v81; // x0
  __int64 v82; // x6
  unsigned int v83; // w27
  __int64 v84; // x6
  __int16 v85; // w8
  int v86; // w3
  int v87; // w0
  unsigned int v88; // w1
  __int64 v89; // x0
  __int64 v90; // x2
  __int64 *v91; // x2
  __int64 *v92; // x28
  __int64 v93; // x0
  int *v94; // x3
  _BYTE *v95; // x0
  int j; // w5
  char *v97; // x7
  unsigned int v98; // w0
  unsigned int v99; // w24
  char *v100; // x0
  __int64 v101; // x3
  bool v102; // cc
  signed int v103; // w26
  unsigned int v104; // w1
  char v105; // w0
  unsigned int v106; // w5
  __int64 v107; // x0
  unsigned int v108; // w1
  unsigned int v109; // w1
  char *v110; // x0
  size_t v111; // x2
  char *v112; // x0
  int v113; // [xsp+68h] [xbp-128h]
  unsigned int v114; // [xsp+68h] [xbp-128h]
  const char *v115; // [xsp+68h] [xbp-128h]
  unsigned int v116; // [xsp+74h] [xbp-11Ch]
  int v117; // [xsp+78h] [xbp-118h]
  __int64 v118; // [xsp+78h] [xbp-118h]
  unsigned int v119; // [xsp+78h] [xbp-118h]
  const char *v120; // [xsp+80h] [xbp-110h]
  char *s; // [xsp+88h] [xbp-108h]
  int v122; // [xsp+90h] [xbp-100h]
  __int64 v123; // [xsp+B8h] [xbp-D8h] BYREF
  __int64 v124; // [xsp+C0h] [xbp-D0h]
  __int64 v125; // [xsp+C8h] [xbp-C8h] BYREF
  __int64 v126; // [xsp+D0h] [xbp-C0h]
  __int64 v127; // [xsp+D8h] [xbp-B8h] BYREF
  __int64 v128; // [xsp+E0h] [xbp-B0h]
  __int64 v129; // [xsp+E8h] [xbp-A8h] BYREF
  __int64 v130; // [xsp+F0h] [xbp-A0h]
  _QWORD v131[2]; // [xsp+F8h] [xbp-98h] BYREF
  int v132; // [xsp+108h] [xbp-88h]
  __int16 v133; // [xsp+10Ch] [xbp-84h]
  __int64 v134; // [xsp+110h] [xbp-80h] BYREF
  __int64 v135; // [xsp+118h] [xbp-78h]
  int v136; // [xsp+120h] [xbp-70h]
  _WORD v137[2]; // [xsp+124h] [xbp-6Ch] BYREF
  __int64 v138; // [xsp+128h] [xbp-68h] BYREF
  __int64 v139; // [xsp+130h] [xbp-60h]
  int v140; // [xsp+138h] [xbp-58h]
  __int16 v141; // [xsp+13Ch] [xbp-54h]
  __int64 v142; // [xsp+140h] [xbp-50h] BYREF
  __int64 v143; // [xsp+148h] [xbp-48h]
  int v144; // [xsp+150h] [xbp-40h]
  __int16 v145; // [xsp+154h] [xbp-3Ch] BYREF
  _BYTE v146[2]; // [xsp+156h] [xbp-3Ah] BYREF
  char v147[48]; // [xsp+158h] [xbp-38h] BYREF
  __int64 v148; // [xsp+188h] [xbp-8h]

  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      sub_492270(1225);
    __break(0x3E8u);
  }
  v8 = sub_489070((__int64)a3);
  if ( v8 == 2 )
  {
    sub_493350((unsigned __int64)a1, (unsigned __int8 *)&off_4DE330, a2);
    return v148 ^ _stack_chk_guard;
  }
  if ( v8 <= 2 )
  {
    if ( !v8 )
      return v148 ^ _stack_chk_guard;
  }
  else
  {
    if ( v8 == 3 )
    {
      sub_493350((unsigned __int64)a1, "+Inf", a2);
      return v148 ^ _stack_chk_guard;
    }
    if ( v8 == 4 )
    {
      sub_493350((unsigned __int64)a1, "-Inf", a2);
      return v148 ^ _stack_chk_guard;
    }
  }
  v116 = BYTE1(a4);
  v10 = BYTE2(a4);
  if ( BYTE2(a4) )
  {
    if ( BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 )
    {
      v10 = 0;
      v116 = 0;
    }
    else
    {
      if ( (unsigned int)BYTE1(a4) + 3 < a2 )
      {
        v11 = BYTE1(a4);
      }
      else
      {
        v10 = 0;
        v11 = 0;
      }
      v116 = v11;
    }
  }
  v12 = a3[1];
  v123 = *a3;
  v124 = v12;
  v129 = 0;
  v130 = 0x3FFF800000000000LL;
  v13 = HIWORD(v12);
  v120 = &byte_4B31F0;
  if ( v12 < 0 )
  {
    v13 = HIWORD(v12) & 0x7FFF;
    v120 = &byte_4C6328;
    HIWORD(v124) = HIWORD(v12) & 0x7FFF;
  }
  if ( !v13 )
  {
    if ( !v10 )
    {
      sub_49B748(a1, a2, "%s0.0", v120);
      return v148 ^ _stack_chk_guard;
    }
    strcpy(v147, "0.0");
    if ( v116 )
    {
      v14 = v10;
      v116 = v116 - v10 - 3;
      v15 = 0;
      v16 = 0;
LABEL_25:
      v17 = strlen(&v147[2]);
      if ( v10 < v17 )
      {
        v79 = v10;
        do
        {
          if ( v147[v79 + 1] != 48 )
          {
            v80 = v79 + 2;
            v14 = v10 - v79;
            goto LABEL_161;
          }
          --v79;
        }
        while ( v79 );
        v80 = 2;
LABEL_161:
        v147[v80] = 0;
      }
      else
      {
        v14 = v10 - v17;
      }
      v18 = v116 - v15;
      if ( v116 == v15 )
      {
        v19 = a2;
        v20 = a1;
        v21 = 0;
      }
      else
      {
        v99 = v116 - v15;
        v21 = v18;
        memset(a1, 32, v18);
        v20 = &a1[v99];
        *v20 = 0;
        v19 = a2 - v99;
      }
      v22 = v21 + (int)sub_49B748(v20, v19, "%s%s", v120, v147);
      if ( v14 )
        goto LABEL_30;
LABEL_32:
      if ( v16 )
        sub_49B748(&a1[v22], a2 - v22, "e%d", v16);
      return v148 ^ _stack_chk_guard;
    }
    v16 = 0;
LABEL_154:
    v22 = (int)sub_49B748(a1, a2, "%s%s", v120, v147);
    goto LABEL_32;
  }
  v24 = sub_4881E8((__int64)&qword_4DE310, (__int64)&v123);
  v16 = v24;
  if ( !v24 )
    goto LABEL_38;
  if ( v24 >= 0 )
  {
    if ( HIWORD(v124) )
    {
      v16 = 0;
      sub_487938((__int64)&v123, &v138);
      v105 = v141;
      do
      {
        if ( (v105 & 7) != 0 )
          break;
        v134 = v138;
        v135 = v139;
        v136 = v140;
        v137[0] = 0;
        sub_487230((__int64)&v134);
        sub_487230((__int64)&v134);
        v107 = 20;
        v108 = 0;
        do
        {
          v109 = *(unsigned __int16 *)((char *)&v138 + v107) + *(unsigned __int16 *)((char *)&v134 + v107) + v108;
          *(_WORD *)((char *)&v134 + v107) = v109;
          v107 -= 2;
          v108 = HIWORD(v109);
        }
        while ( v107 != 2 );
        for ( WORD1(v134) += 3; WORD2(v134); ++WORD1(v134) )
          sub_487230((__int64)&v134);
        if ( v137[0] )
          break;
        if ( WORD1(v134) > v106 )
          break;
        --v16;
        v140 = v136;
        v138 = v134;
        v139 = v135;
        v141 = 0;
        v105 = 0;
      }
      while ( v16 != -34 );
      sub_4878F8((unsigned __int16 *)&v138, (__int64)&v123);
    }
    else if ( SWORD2(v124) < 0 )
    {
      v16 = 0;
    }
    else
    {
      v16 = 0;
      do
      {
        --v16;
        sub_488350((__int64)&v123, (__int64)&qword_4DE200[1], &v123);
      }
      while ( (SWORD2(v124) & 0x80000000) == 0 );
    }
    v125 = v123;
    v126 = v124;
    v78 = 0;
    v129 = 0;
    v130 = 0x3FFF800000000000LL;
    v117 = -4096;
    do
    {
      s = (char *)&qword_4DE148[v78];
      if ( (int)sub_4881E8((__int64)&qword_4DE310, (__int64)&v125) <= 0 )
        break;
      if ( (sub_4881E8((__int64)&qword_4DE218[v78], (__int64)&v125) & 0x80000000) == 0 )
      {
        v16 += v117;
        sub_488350((__int64)&v125, (__int64)s, &v125);
        sub_488350((__int64)&v129, (__int64)s, &v129);
      }
      v78 += 2;
      v117 /= 2;
    }
    while ( v78 != 26 );
    sub_488448((__int64)&qword_4DE310, (__int64)&v129, &v129);
    goto LABEL_38;
  }
  v127 = v123;
  v128 = v124;
  v82 = 0;
  v16 = 0;
  v83 = 16;
  HIWORD(v128) = 16494;
  do
  {
    v118 = v82;
    sub_488448((__int64)&v127, (__int64)&qword_4DE148[16] + v82, &v129);
    v142 = v129;
    v143 = v130;
    v84 = v118;
    v85 = HIWORD(v130);
    v86 = (HIWORD(v130) & 0x7FFF) - 16382;
    if ( v86 <= 0 )
    {
      v125 = 0;
      v126 = 0;
    }
    else
    {
      v125 = v129;
      v126 = v130;
      v87 = 16494 - (HIWORD(v130) & 0x7FFF);
      if ( v87 <= 0 )
        goto LABEL_174;
      if ( v87 <= 15 )
      {
        v91 = &v125;
      }
      else
      {
        v88 = (16478 - (HIWORD(v130) & 0x7FFFu)) >> 4;
        v89 = 0;
        v90 = 2LL * (v88 & 0xFFFFFFF) + 2;
        do
        {
          *(_WORD *)((char *)&v125 + v89) = 0;
          v89 += 2;
        }
        while ( v90 != v89 );
        v91 = (__int64 *)((char *)&v125 + v90);
        v87 = 96 - v86 - 16 * v88;
      }
      *(_WORD *)v91 &= *((_WORD *)qword_4DE2E8 + v87);
    }
    if ( v85 < 0 )
    {
      v93 = 0;
      while ( *(unsigned __int16 *)((char *)&v142 + v93) == *(unsigned __int16 *)((char *)&v125 + v93) )
      {
        v93 += 2;
        if ( v93 == 14 )
          goto LABEL_174;
      }
      sub_487E08((__int64)&v125, (__int64)&qword_4DE310, &v125, 1u);
      v84 = v118;
    }
LABEL_174:
    if ( v129 == v125 && (_DWORD)v130 == (_DWORD)v126 && WORD2(v130) == WORD2(v126) )
    {
      v16 += v83;
      v127 = v129;
      v128 = v130;
    }
    v82 = v84 + 16;
    v83 >>= 1;
  }
  while ( v82 != 80 );
  v92 = qword_4DE148;
  HIWORD(v128) = HIWORD(v128) + HIWORD(v124) - 16494;
  v123 = v127;
  v124 = v128;
  v119 = 4096;
  v129 = 0;
  v130 = 0x3FFF800000000000LL;
  do
  {
    if ( (int)sub_4881E8((__int64)&qword_4DE200[1], (__int64)&v127) > 0 )
      break;
    if ( (int)sub_4881E8((__int64)v92, (__int64)&v127) <= 0 )
    {
      v16 += v119;
      sub_488448((__int64)&v127, (__int64)v92, &v127);
      sub_488350((__int64)&v129, (__int64)v92, &v129);
    }
    v92 += 2;
    v119 >>= 1;
  }
  while ( v92 != qword_4DE218 );
LABEL_38:
  if ( (unsigned __int8)a4 > 0x21u )
    v25 = 33;
  else
    v25 = (unsigned __int8)a4;
  v122 = v25;
  sub_487938((__int64)&v129, &v138);
  v133 = 0;
  v132 = v140;
  v131[0] = v138;
  v131[1] = v139;
  sub_487938((__int64)&v123, &v138);
  v145 = 0;
  v142 = v138;
  v143 = v139;
  v144 = v140;
  v26 = (unsigned __int16)sub_487CB0((__int64)v131);
  if ( v26 == 10 )
  {
    ++v16;
    *(_WORD *)v147 = 11825;
  }
  else
  {
    for ( ; !v26; v26 = (unsigned __int16)sub_487CB0((__int64)v131) )
    {
      v27 = &dword_4DE124;
      v28 = (char *)&v142 + 4;
      for ( i = 0; *(unsigned __int16 *)v28 == i; i = *(unsigned __int16 *)v27 )
      {
        v28 += 2;
        v27 = (int *)((char *)v27 + 2);
        if ( v28 == v146 )
        {
          *(_WORD *)v147 = 11824;
          goto LABEL_48;
        }
      }
      v65 = &v145;
      v66 = 0;
      do
      {
        v67 = 2 * (*v65 & 0x7FFF);
        if ( *v65 < 0 )
          v66 |= 1u;
        v35 = (v66 & 2) == 0;
        v66 = 2 * (v66 & 0x7FFF);
        if ( !v35 )
          v67 |= 1u;
        *v65-- = v67;
      }
      while ( v65 != (__int16 *)((char *)&v142 + 2) );
      v134 = v142;
      v135 = v143;
      v68 = v137;
      v136 = v144;
      v69 = 0;
      v70 = 0;
      v137[0] = 0;
      while ( 1 )
      {
        v35 = (v69 & 0x8000) == 0;
        v71 = 2 * (v69 & 0x7FFF);
        if ( !v35 )
          v70 |= 1u;
        v35 = (v70 & 2) == 0;
        v70 = 2 * (v70 & 0x7FFF);
        if ( !v35 )
          v71 |= 1u;
        *(_WORD *)v68 = v71;
        v68 = (_QWORD *)((char *)v68 - 2);
        if ( v68 == (__int64 *)((char *)&v134 + 2) )
          break;
        v69 = *(_WORD *)v68;
      }
      v72 = v137;
      v73 = 0;
      do
      {
        v74 = 2 * (*(_WORD *)v72 & 0x7FFF);
        if ( (*(_WORD *)v72 & 0x8000) != 0 )
          v73 |= 1u;
        v35 = (v73 & 2) == 0;
        v73 = 2 * (v73 & 0x7FFF);
        if ( !v35 )
          v74 |= 1u;
        *(_WORD *)v72 = v74;
        v72 = (_QWORD *)((char *)v72 - 2);
      }
      while ( v72 != (__int64 *)((char *)&v134 + 2) );
      v75 = 20;
      v76 = 0;
      do
      {
        v77 = *(unsigned __int16 *)((char *)&v134 + v75) + *(unsigned __int16 *)((char *)&v142 + v75) + v76;
        *(_WORD *)((char *)&v142 + v75) = v77;
        v75 -= 2;
        v76 = HIWORD(v77);
      }
      while ( v75 != 2 );
      --v16;
    }
    v147[0] = v26 + 48;
    v147[1] = 46;
  }
LABEL_48:
  v30 = &v147[2];
  v31 = 0;
  while ( 1 )
  {
    v32 = &v145;
    v33 = 0;
    do
    {
      v34 = 2 * (*v32 & 0x7FFF);
      if ( *v32 < 0 )
        v33 |= 1u;
      v35 = (v33 & 2) == 0;
      v33 = 2 * (v33 & 0x7FFF);
      if ( !v35 )
        v34 |= 1u;
      *v32-- = v34;
    }
    while ( v32 != (__int16 *)((char *)&v142 + 2) );
    v134 = v142;
    v135 = v143;
    v36 = 0;
    v136 = v144;
    v37 = 0;
    v38 = v137;
    v137[0] = 0;
    while ( 1 )
    {
      v35 = (v36 & 0x8000) == 0;
      v39 = 2 * (v36 & 0x7FFF);
      if ( !v35 )
        v37 |= 1u;
      v35 = (v37 & 2) == 0;
      v37 = 2 * (v37 & 0x7FFF);
      if ( !v35 )
        v39 |= 1u;
      *(_WORD *)v38 = v39;
      v38 = (_QWORD *)((char *)v38 - 2);
      if ( v38 == (__int64 *)((char *)&v134 + 2) )
        break;
      v36 = *(_WORD *)v38;
    }
    v40 = v137;
    v41 = 0;
    do
    {
      v42 = 2 * (*(_WORD *)v40 & 0x7FFF);
      if ( (*(_WORD *)v40 & 0x8000) != 0 )
        v41 |= 1u;
      v35 = (v41 & 2) == 0;
      v41 = 2 * (v41 & 0x7FFF);
      if ( !v35 )
        v42 |= 1u;
      *(_WORD *)v40 = v42;
      v40 = (_QWORD *)((char *)v40 - 2);
    }
    while ( v40 != (__int64 *)((char *)&v134 + 2) );
    v43 = 20;
    v44 = 0;
    do
    {
      v45 = *(unsigned __int16 *)((char *)&v134 + v43) + *(unsigned __int16 *)((char *)&v142 + v43) + v44;
      *(_WORD *)((char *)&v142 + v43) = v45;
      v43 -= 2;
      v44 = HIWORD(v45);
    }
    while ( v43 != 2 );
    v113 = v31;
    v46 = (unsigned __int16)sub_487CB0((__int64)v131);
    v31 = v113 + 1;
    *v30 = v46 + 48;
    if ( v122 < v113 + 1 )
      break;
    ++v30;
  }
  v47 = (unsigned __int8)*(v30 - 1);
  if ( v46 > 4 )
  {
    if ( v46 == 5 )
    {
      v94 = &dword_4DE124;
      v95 = (char *)&v142 + 4;
      for ( j = 0; *(unsigned __int16 *)v95 == j; j = *(unsigned __int16 *)v94 )
      {
        v95 += 2;
        v94 = (int *)((char *)v94 + 2);
        if ( v95 == v146 )
        {
          if ( (v47 & 1) == 0 )
            goto LABEL_83;
          break;
        }
      }
    }
    v48 = v30 - 1;
    if ( (v47 & 0x7F) != 0x2E )
    {
      v49 = (v47 & 0x7F) + 1;
      v47 = (unsigned __int8)((v47 & 0x7F) + 1);
      *(v30 - 1) = v49;
      if ( v49 <= 57 )
        goto LABEL_83;
      while ( 1 )
      {
        *v48 = 48;
        v51 = *--v48;
        v52 = v51 & 0x7F;
        if ( v52 == 46 )
          break;
        v50 = v52 + 1;
        *v48 = v50;
        if ( v50 <= 57 )
          goto LABEL_81;
      }
    }
    v53 = (unsigned __int8)(*(v48 - 1))++ + 1;
    if ( v53 > 57 )
    {
      ++v16;
      *(v48 - 1) = 49;
    }
LABEL_81:
    v47 = (unsigned __int8)*(v30 - 1);
  }
LABEL_83:
  while ( v47 == 48 )
    v47 = (unsigned __int8)*(--v30 - 1);
  if ( v47 == 46 )
    *v30++ = 48;
  *v30 = 0;
  if ( !v116 )
    goto LABEL_154;
  if ( v16 >= 0 )
    v54 = v16;
  else
    v54 = -v16;
  if ( !v10 )
  {
    if ( !v16 )
    {
      sub_49B748(a1, a2, "%s%s", v120, v147);
      return v148 ^ _stack_chk_guard;
    }
    if ( v116 >= v54 )
    {
      v14 = 0;
      goto LABEL_93;
    }
    goto LABEL_154;
  }
  v14 = v10;
  v116 = v116 - 2 - (v10 + (v16 >= 0));
  if ( !v16 )
  {
    v15 = 0;
    goto LABEL_25;
  }
  if ( v116 < v54 )
  {
    v15 = (unsigned int)v16 >> 31;
    if ( !v116 )
      v15 = 0;
    goto LABEL_25;
  }
LABEL_93:
  if ( v147[2] != 48 || v147[3] )
  {
    v81 = strlen(&v147[2]);
    __memmove_chk(&v147[1], &v147[2], v81 + 1, 47);
  }
  else
  {
    v147[1] = 0;
  }
  if ( !v14 )
  {
    v97 = a1;
    v56 = 0;
    goto LABEL_197;
  }
  if ( v16 <= 0 )
  {
    v55 = v116 - 1;
    if ( v116 != 1 )
      goto LABEL_230;
    v97 = a1;
    v56 = 0;
  }
  else
  {
    v55 = v116 - v54;
    if ( v116 == v54 )
    {
      v56 = 0;
      v57 = strlen(v147);
      v58 = a2;
      v59 = a1;
      if ( v57 > v54 )
        goto LABEL_100;
      goto LABEL_104;
    }
LABEL_230:
    v56 = v55;
    memset(a1, 32, v55);
    a1[v55] = 0;
    v97 = &a1[v55];
LABEL_197:
    if ( v16 > 0 )
    {
      v115 = v97;
      v98 = strlen(v147);
      v57 = v98;
      v58 = a2 - v56;
      v59 = v115;
      if ( v98 > v54 )
      {
        v60 = v54 + 1;
        if ( v14 )
        {
LABEL_100:
          v60 = v54 + 1;
          v61 = ~v54 + v57;
          if ( v10 < v61 )
          {
            v61 = v10;
            v147[v60 + v14] = 0;
          }
          v14 = v10 - v61;
        }
        v57 = v60;
LABEL_104:
        v62 = v56 + (int)sub_49B748(v59, v58, "%s%.*s", v120, v57, v147);
        if ( v10 || v147[v57] )
        {
LABEL_106:
          if ( v54 < v57 )
            goto LABEL_107;
          goto LABEL_227;
        }
LABEL_113:
        ++v14;
        goto LABEL_106;
      }
      v114 = v98;
      v62 = v56 + (int)sub_49B748(v59, v58, "%s%.*s", v120, v98, v147);
      if ( !v10 && !v147[v114] )
        goto LABEL_113;
LABEL_227:
      v110 = &a1[v62];
      v111 = (int)(v54 + 1 - v57);
      v62 += v111;
      memset(v110, 48, v111);
LABEL_107:
      v22 = v62 + 1;
      a1[v62] = 46;
      v63 = &a1[v62 + 1];
      v64 = &v147[v57];
LABEL_108:
      v22 += (int)sub_49B748(v63, a2 - v22, "%s", v64);
      goto LABEL_109;
    }
  }
  v100 = &a1[v56 + 1];
  if ( *v120 )
  {
    v101 = v56 + 2;
    *v97 = *v120;
    ++v56;
    v97 = v100;
    v100 = &a1[v101];
  }
  *v97 = 48;
  *v100 = 46;
  v22 = v56 + 2;
  if ( v14 )
    v102 = (int)v54 <= (int)v14;
  else
    v102 = 1;
  if ( v102 )
  {
    v63 = &a1[v22];
    v103 = v54 - 1;
    if ( v103 )
    {
      v112 = &a1[v22];
      v22 += v103;
      v63 = &a1[v22];
      memset(v112, 48, v103);
      if ( v14 )
        v14 -= v103;
    }
    v64 = v147;
    if ( v10 )
    {
      v104 = strlen(v147);
      if ( v14 < v104 )
      {
        v104 = v14;
        v147[v14] = 0;
      }
      v14 -= v104;
      v64 = v147;
    }
    goto LABEL_108;
  }
LABEL_109:
  v16 = 0;
  if ( v14 )
  {
LABEL_30:
    if ( v14 <= (int)a2 - (int)v22 || (v14 = a2 - v22, (_DWORD)a2 != (_DWORD)v22) )
    {
      v23 = &a1[v22];
      v22 += (int)v14;
      memset(v23, 48, (int)v14);
      a1[v22] = 0;
    }
    goto LABEL_32;
  }
  return v148 ^ _stack_chk_guard;
}
// 489FAC: variable 'v106' is possibly undefined
// 406770: using guessed type __int64 __fastcall __memmove_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 4B31F0: using guessed type char byte_4B31F0;
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
// 4C6328: using guessed type char byte_4C6328;
// 4DE124: using guessed type int dword_4DE124;
// 4DE148: using guessed type __int64 qword_4DE148[17];
// 4DE200: using guessed type __int64[2];
// 4DE218: using guessed type __int64 qword_4DE218[26];
// 4DE2E8: using guessed type __int64 qword_4DE2E8[5];
// 4DE310: using guessed type __int64 qword_4DE310;
// 4DE330: using guessed type __int16 *off_4DE330;
// 52451C: using guessed type char under_debugger;
