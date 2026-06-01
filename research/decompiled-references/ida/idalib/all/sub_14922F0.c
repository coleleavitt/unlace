__int64 __fastcall sub_14922F0(
        __m128i *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        __m128i a7,
        __m128 a8,
        __int64 a9)
{
  __m128i *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int16 v22; // ax
  __int16 v23; // ax
  __int64 v24; // rax
  __int32 v25; // eax
  __int64 *v26; // rdi
  unsigned int v27; // r15d
  __int64 v28; // rbx
  _BYTE *v29; // rbp
  _BYTE *v30; // r12
  _BYTE *v31; // rdi
  _BYTE *v32; // rbp
  _BYTE *v33; // r12
  _BYTE *v34; // rdi
  __int64 v36; // rdi
  __int64 *v37; // rdi
  __int64 v38; // r14
  __int64 v39; // rax
  char v40; // r12
  __int64 v41; // rax
  __int64 v42; // r8
  const void *v43; // rsi
  char *v44; // rax
  void *v45; // rdi
  int v46; // edx
  void *v47; // rax
  __int64 v48; // rdi
  void *v49; // rsi
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rsi
  _BYTE *v58; // rax
  __int64 *v59; // rdi
  unsigned __int32 v60; // r14d
  char v61; // r12
  __int16 v62; // ax
  size_t v63; // rax
  __int64 v64; // rdi
  size_t v65; // rax
  __m128i *v66; // r12
  int *m128i_i32; // rbx
  __int64 *v68; // rdi
  unsigned __int32 v69; // r15d
  bool v70; // zf
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int16 v73; // ax
  __int64 v74; // rax
  __m128i *v75; // rdi
  __int64 v76; // rax
  size_t v77; // rax
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // r10
  int v80; // r15d
  char *v81; // rsi
  void *v82; // rdi
  __int64 v83; // rdx
  int v84; // eax
  int v85; // r12d
  int v86; // eax
  size_t v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r12
  unsigned __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v95; // [rsp+0h] [rbp-F58h]
  __int64 v96; // [rsp+0h] [rbp-F58h]
  __int64 v97; // [rsp+0h] [rbp-F58h]
  __int64 v98; // [rsp+0h] [rbp-F58h]
  __int64 v99; // [rsp+0h] [rbp-F58h]
  __int64 v100; // [rsp+0h] [rbp-F58h]
  __int64 v102; // [rsp+20h] [rbp-F38h]
  __int64 v103; // [rsp+20h] [rbp-F38h]
  __int8 *v106; // [rsp+38h] [rbp-F20h]
  __int64 v107; // [rsp+48h] [rbp-F10h]
  char v108[4]; // [rsp+5Ch] [rbp-EFCh] BYREF
  __int64 v109; // [rsp+60h] [rbp-EF8h] BYREF
  char v110; // [rsp+68h] [rbp-EF0h]
  void *ptr; // [rsp+70h] [rbp-EE8h] BYREF
  __int64 v112; // [rsp+78h] [rbp-EE0h]
  _BYTE v113[16]; // [rsp+80h] [rbp-ED8h] BYREF
  __int16 v114; // [rsp+90h] [rbp-EC8h]
  unsigned __int32 v115; // [rsp+A0h] [rbp-EB8h] BYREF
  unsigned __int32 v116; // [rsp+A4h] [rbp-EB4h]
  char v117; // [rsp+A8h] [rbp-EB0h]
  __int64 v118; // [rsp+ACh] [rbp-EACh]
  char v119; // [rsp+B4h] [rbp-EA4h]
  void *v120; // [rsp+B8h] [rbp-EA0h]
  __int64 v121; // [rsp+C0h] [rbp-E98h]
  _BYTE v122[24]; // [rsp+C8h] [rbp-E90h] BYREF
  _QWORD v123[3]; // [rsp+E0h] [rbp-E78h] BYREF
  _QWORD v124[5]; // [rsp+F8h] [rbp-E60h] BYREF
  __int64 v125; // [rsp+120h] [rbp-E38h] BYREF
  void *v126; // [rsp+130h] [rbp-E28h] BYREF
  __int128 v127; // [rsp+138h] [rbp-E20h] BYREF
  void *v128; // [rsp+148h] [rbp-E10h]
  __int64 v129; // [rsp+150h] [rbp-E08h]
  _BYTE v130[16]; // [rsp+158h] [rbp-E00h] BYREF
  char v131; // [rsp+168h] [rbp-DF0h]
  void *v132; // [rsp+180h] [rbp-DD8h] BYREF
  void *v133; // [rsp+188h] [rbp-DD0h]
  __int64 v134; // [rsp+190h] [rbp-DC8h] BYREF
  _BYTE v135[16]; // [rsp+198h] [rbp-DC0h] BYREF
  __int8 *v136; // [rsp+1A8h] [rbp-DB0h] BYREF
  void *v137; // [rsp+1B0h] [rbp-DA8h]
  __int64 v138; // [rsp+1B8h] [rbp-DA0h]
  _BYTE v139[16]; // [rsp+1C0h] [rbp-D98h] BYREF
  __int64 v140; // [rsp+1D0h] [rbp-D88h]
  __int64 v141; // [rsp+1D8h] [rbp-D80h] BYREF
  _BYTE *v142; // [rsp+1E0h] [rbp-D78h]
  __int64 v143; // [rsp+1E8h] [rbp-D70h]
  _BYTE v144[320]; // [rsp+1F0h] [rbp-D68h] BYREF
  __int64 v145; // [rsp+330h] [rbp-C28h]
  char v146; // [rsp+338h] [rbp-C20h]
  char v147[56]; // [rsp+340h] [rbp-C18h] BYREF
  int v148; // [rsp+378h] [rbp-BE0h]
  __int64 v149; // [rsp+380h] [rbp-BD8h]
  unsigned int v150; // [rsp+390h] [rbp-BC8h]
  unsigned int v151; // [rsp+398h] [rbp-BC0h]
  int v152; // [rsp+39Ch] [rbp-BBCh]
  int v153; // [rsp+3A0h] [rbp-BB8h]
  int v154; // [rsp+3A8h] [rbp-BB0h]
  char v155; // [rsp+610h] [rbp-948h]
  char *v156[4]; // [rsp+620h] [rbp-938h] BYREF
  _QWORD v157[235]; // [rsp+640h] [rbp-918h] BYREF
  unsigned __int32 v158; // [rsp+D98h] [rbp-1C0h]
  __int64 v159; // [rsp+DA8h] [rbp-1B0h]
  __int64 v160; // [rsp+DB0h] [rbp-1A8h] BYREF
  _BYTE *v161; // [rsp+DB8h] [rbp-1A0h]
  __int64 v162; // [rsp+DC0h] [rbp-198h]
  _BYTE v163[320]; // [rsp+DC8h] [rbp-190h] BYREF
  __int64 v164; // [rsp+F08h] [rbp-50h]
  char v165; // [rsp+F10h] [rbp-48h]

  v11 = a1;
  v106 = &a1[31].m128i_i8[8];
  v123[1] = v124;
  v124[2] = (char *)a1 + 504;
  v123[2] = 0x200000000LL;
  v124[4] = 0x200000000LL;
  v124[3] = &v125;
  v123[0] = 0;
  sub_147F860((__int64)v123, a4);
  sub_147A650((__int64)v147, a2, (__int64)v123, a3);
  v12 = a1[6].m128i_i64[0];
  v160 = a2 + 304;
  v162 = 0x400000000LL;
  v159 = v12;
  v164 = 0;
  v161 = v163;
  v13 = *(_QWORD *)(v12 + 512);
  *(_QWORD *)(v12 + 512) = &v160;
  v14 = *((__int64 **)a5 + 1);
  v164 = v13;
  v165 = 0;
  if ( v14 )
  {
    v15 = *v14;
    v16 = *((unsigned int *)v14 + 2);
    v157[8] = v15;
    v157[9] = v16;
  }
  v17 = a1[6].m128i_i64[0];
  v142 = v144;
  v18 = v151;
  v19 = *a5;
  v140 = v17;
  v141 = 0;
  v143 = 0x400000000LL;
  v145 = 0;
  if ( (unsigned int)(v19 - 2) <= 1 )
  {
    v20 = *(_QWORD *)(v17 + 512);
    v146 = 1;
    *(_QWORD *)(v17 + 512) = &v141;
    v21 = v11[6].m128i_i64[0];
    v145 = v20;
    v132 = v147;
    v133 = v11;
    sub_15F0FC0(v21, v18, sub_1498E10, &v132);
    sub_1818070(v140, v145, 0);
    v146 = 0;
    if ( v149 )
      goto LABEL_5;
LABEL_42:
    if ( !(v148 | v154) && ((1LL << v153) & 0xF91) != 0 )
    {
      v36 = (__int64)v11;
      v28 = 0;
      sub_147DEE0(v36);
      goto LABEL_26;
    }
    goto LABEL_5;
  }
  v146 = 0;
  v132 = v147;
  v133 = v11;
  sub_15F0FC0(v17, v151, sub_1498E10, &v132);
  if ( !v149 )
    goto LABEL_42;
LABEL_5:
  v22 = v11[2].m128i_i16[0];
  if ( (*(_BYTE *)(*(_QWORD *)(v11->m128i_i64[1] + 56) + 89LL) & 1) != 0 && v22 == 62 )
  {
    do
    {
      while ( 1 )
      {
        v133 = v135;
        v136 = v106;
        v132 = nullptr;
        v134 = 0x200000000LL;
        v137 = v139;
        v138 = 0x200000000LL;
        sub_14D7300(v11, &v132, 0, 0);
        sub_147F500((__int64 *)v156, v156[0], (char *)v133, (char *)v133 + 8 * (unsigned int)v134);
        LODWORD(v134) = 0;
        sub_15D8C50(v157, &v136);
        LODWORD(v138) = 0;
        if ( HIDWORD(v132) )
          v152 = HIDWORD(v132);
        sub_15DCED0(v136, &v136);
        if ( v137 != v139 )
          free(v137);
        if ( v133 == v135 )
          break;
        free(v133);
        v22 = v11[2].m128i_i16[0];
        if ( v22 != 62 )
          goto LABEL_6;
      }
      v22 = v11[2].m128i_i16[0];
    }
    while ( v22 == 62 );
  }
LABEL_6:
  if ( v22 == 176 )
    sub_14A12D0(v11, v147);
  ptr = v113;
  v112 = 0x200000000LL;
  v114 = 1;
  if ( !(unsigned __int8)sub_147B3A0((__int64)v147, &v132) )
    goto LABEL_22;
  v23 = v11[2].m128i_i16[0];
  if ( v23 == 189 )
  {
    sub_1490D80(v11, (__int64)v147, (__int64)&ptr, a7, a8);
    v23 = v11[2].m128i_i16[0];
  }
  if ( v23 == 118 )
  {
    v59 = (__int64 *)v11->m128i_i64[1];
    v11[2].m128i_i32[2] = v11[1].m128i_i32[0];
    sub_14634E0(v59, v11[1].m128i_i32);
    v60 = v11[2].m128i_u32[2];
    v61 = sub_15AF6F0(a2, v60, &v109, v108);
    v62 = v11[2].m128i_i16[0];
    if ( v62 == 189 )
    {
      sub_1490D80(v11, (__int64)v147, (__int64)&ptr, a7, a8);
      v62 = v11[2].m128i_i16[0];
    }
    if ( v62 == 24 || v62 == 63 || v62 == 150 )
    {
      sub_1564820(&v132, v11, v60, 1573);
      if ( !v61 )
      {
        v118 = 0;
        v119 = 0;
        v120 = v122;
        v121 = 0;
        v122[0] = 0;
        v122[16] = 0;
        v115 = v60;
        v116 = v60;
        v117 = 1;
        if ( v60 )
          sub_1480470((__int64 *)&v132, (unsigned __int64)&v115);
        v63 = j__strlen("_Noreturn ");
        sub_9EC740((__int64)&v126, v151, "_Noreturn ", v63, 0);
        if ( (_DWORD)v126 && HIDWORD(v126) )
          sub_1480470((__int64 *)&v132, (unsigned __int64)&v126);
        if ( v128 != v130 )
          operator delete(v128);
        if ( v120 != v122 )
          operator delete(v120);
      }
    }
    else
    {
      sub_1564820(&v132, v11, v60, 1573);
    }
    sub_AEA040((__int64)&v132);
    v23 = v11[2].m128i_i16[0];
  }
  if ( v23 == 64 )
  {
    v50 = v11->m128i_i64[1];
    v51 = *(_QWORD *)(v50 + 2944);
    v52 = v51 >= *(unsigned int *)(v50 + 2912) ? sub_14180A0(v50, 1u) : *(_QWORD *)(v50 + 2904) + 24 * v51;
    if ( *(_WORD *)(v52 + 16) == 3 )
    {
      v53 = v11->m128i_i64[1];
      if ( *(_QWORD *)(v53 + 760) )
      {
        *(_BYTE *)(v53 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v53 + 48) + 6LL) = 1;
      }
      v54 = v11[6].m128i_i64[0];
      v11[2].m128i_i16[0] = 1;
      v28 = 0;
      sub_170CB20(*(_QWORD *)(v54 + 656), v147);
      goto LABEL_24;
    }
  }
  while ( 1 )
  {
    v27 = sub_14A7DC0(v11, &v11[1]);
    if ( !v27 )
      break;
    sub_1564840(&v132, v11, &v11[1], 1933);
    v24 = sub_15AFC10(v27);
    sub_1478320((unsigned __int8 **)&v132, v24);
    v25 = v11[1].m128i_i32[0];
    *(_QWORD *)((char *)&v127 + 4) = 0;
    BYTE12(v127) = 0;
    v128 = v130;
    v129 = 0;
    v130[0] = 0;
    v131 = 0;
    LODWORD(v126) = v25;
    HIDWORD(v126) = v25;
    LOBYTE(v127) = 1;
    if ( v25 )
    {
      sub_1480470((__int64 *)&v132, (unsigned __int64)&v126);
      if ( v128 != v130 )
        operator delete(v128);
    }
    sub_AEA040((__int64)&v132);
    v26 = (__int64 *)v11->m128i_i64[1];
    v11[2].m128i_i32[2] = v11[1].m128i_i32[0];
    sub_14634E0(v26, v11[1].m128i_i32);
  }
  if ( (unsigned __int8)sub_1565160(v11) )
    goto LABEL_22;
  if ( !a3 )
  {
    if ( (unsigned __int8)sub_1565230(v11, v147) )
    {
      if ( (*(_BYTE *)a2 & 7) == 1 )
      {
        sub_1564820(&v132, v11, *(unsigned int *)(a2 + 168), 1680);
        v84 = *(_DWORD *)(a2 + 168);
        *(_QWORD *)((char *)&v127 + 4) = 0;
        BYTE12(v127) = 0;
        v128 = v130;
        v129 = 0;
        v130[0] = 0;
        v131 = 0;
        LODWORD(v126) = v84;
        HIDWORD(v126) = v84;
        LOBYTE(v127) = 1;
        if ( v84 )
        {
          sub_1480470((__int64 *)&v132, (unsigned __int64)&v126);
          if ( v128 != v130 )
            operator delete(v128);
        }
        sub_AEA040((__int64)&v132);
        *(_BYTE *)a2 &= 0xC0u;
        *(_QWORD *)(a2 + 168) = 0;
      }
      if ( *a5 == 3 )
      {
        if ( v148 == 7 )
        {
          v85 = sub_13DC060(
                  a5[5],
                  0,
                  *(__int64 **)(v11->m128i_i64[1] + 88),
                  *(_QWORD *)(v11->m128i_i64[1] + 56),
                  a7,
                  *(double *)a8.m128_u64);
          sub_1564820(&v132, v11, v150, 1663);
          v86 = a5[5];
          LOBYTE(v127) = 1;
          LODWORD(v126) = v86;
          HIDWORD(v126) = v86;
          sub_AEC610((__int64 *)&v132, (__int64 *)&v126);
          v87 = j__strlen("<>");
          sub_9EC740((__int64)&v126, v85, "<>", v87, 0);
          if ( (_DWORD)v126 && HIDWORD(v126) )
            sub_1480470((__int64 *)&v132, (unsigned __int64)&v126);
          if ( v128 != v130 )
            operator delete(v128);
          sub_AEA040((__int64)&v132);
          v132 = &v134;
          v88 = v11[6].m128i_i64[0];
          v133 = (void *)0x400000000LL;
          v89 = sub_1CB4650(v88, 0, 0, a5[5], v85, v85, 0, 0, 0);
          v90 = (unsigned int)v133;
          v91 = v89;
          v92 = (unsigned int)v133 + 1LL;
          if ( v92 > HIDWORD(v133) )
          {
            sub_2237220(&v132, &v134, v92, 8);
            v90 = (unsigned int)v133;
          }
          *((_QWORD *)v132 + v90) = v91;
          *(_QWORD *)&v127 = &v132;
          LODWORD(v133) = (_DWORD)v133 + 1;
          LODWORD(v126) = 2;
          *((_QWORD *)&v127 + 1) = 0;
          LOBYTE(v128) = 1;
          v93 = sub_156C6B0(v11, v147, &v126, &ptr);
          v57 = v93;
          if ( v132 != &v134 )
          {
            v98 = v93;
            free(v132);
            v57 = v98;
          }
        }
        else
        {
          sub_1564840(&v132, v11, &v11[1], 1894);
          sub_14780E0((unsigned __int8 **)&v132, 0);
          sub_AEA040((__int64)&v132);
          LODWORD(v132) = 0;
          v133 = nullptr;
          v134 = 0;
          v57 = sub_156C6B0(v11, v147, &v132, &ptr);
        }
      }
      else
      {
        v57 = sub_156C6B0(v11, v147, a5, &ptr);
      }
      v28 = sub_17A2530(v11[6].m128i_i64[0], v57, 0);
      goto LABEL_24;
    }
    if ( !sub_147EA80((__int64)v11, 0, 0) && v11[2].m128i_i16[0] != 138 )
    {
      sub_1564840(&v132, v11, &v11[1], 1617);
      sub_AEA040((__int64)&v132);
      LOWORD(v132) = 63;
      v75 = v11;
      v28 = 0;
      sub_15680D0(v75, &v132, 1, 0);
      goto LABEL_24;
    }
LABEL_22:
    if ( (unsigned __int8)sub_1492160(v11, (__int64)v147, a7, a8) )
    {
      v28 = 0;
      goto LABEL_24;
    }
    if ( a9 )
    {
      if ( v11[2].m128i_i16[0] == 62 )
        goto LABEL_55;
      if ( (unsigned __int8)sub_14F5220(v11) )
      {
        if ( v11[2].m128i_i16[0] != 62 )
        {
          v58 = (_BYTE *)sub_17FF1A0(v11[6].m128i_i64[0]);
          v49 = v58;
          v132 = v58;
          if ( v58 && (v58[28] & 0x7Fu) - 40 <= 6 )
            v58[97] |= 0x10u;
          goto LABEL_98;
        }
LABEL_55:
        v37 = (__int64 *)v11->m128i_i64[1];
        v11[2].m128i_i32[2] = v11[1].m128i_i32[0];
        sub_14634E0(v37, v11[1].m128i_i32);
        *(_DWORD *)a9 = v11[2].m128i_i32[2];
        v38 = v11[6].m128i_i64[0];
        v39 = *(_QWORD *)(v11->m128i_i64[1] + 56);
        v40 = *(_BYTE *)(v39 + 2) & 1;
        if ( v40 )
        {
          sub_18C74E0(v11[6].m128i_i64[0], 6, 0, 4);
          v39 = *(_QWORD *)(v11->m128i_i64[1] + 56);
          if ( (*(_BYTE *)(v39 + 2) & 1) != 0 )
          {
            v76 = *(_QWORD *)(v11[6].m128i_i64[0] + 4616) + 640LL * *(unsigned int *)(v11[6].m128i_i64[0] + 4624) - 640;
            *(_BYTE *)(v76 + 601) = 1;
            *(_BYTE *)(v76 + 603) = 1;
            v39 = *(_QWORD *)(v11->m128i_i64[1] + 56);
          }
        }
        if ( *(_DWORD *)(v39 + 64) )
          sub_1AF3320(*(_QWORD *)(v11[6].m128i_i64[0] + 760));
        if ( v11[2].m128i_i16[0] == 24 )
          v41 = sub_14EE310(v11);
        else
          v41 = sub_14BFC10(v11, 0);
        *(_QWORD *)(a9 + 8) = v41;
        v42 = *(_QWORD *)(v11[6].m128i_i64[0] + 4616) + 640LL * *(unsigned int *)(v11[6].m128i_i64[0] + 4624) - 640;
        if ( a9 + 16 != v42 + 512 )
        {
          v43 = *(const void **)(v42 + 512);
          v44 = (char *)(v42 + 528);
          if ( v43 == (const void *)(v42 + 528) )
          {
            v78 = *(unsigned int *)(v42 + 520);
            v79 = *(unsigned int *)(a9 + 24);
            v80 = *(_DWORD *)(v42 + 520);
            if ( v78 <= v79 )
            {
              if ( *(_DWORD *)(v42 + 520) )
              {
                v99 = *(_QWORD *)(v11[6].m128i_i64[0] + 4616)
                    + 640LL * *(unsigned int *)(v11[6].m128i_i64[0] + 4624)
                    - 640;
                memmove(*(void **)(a9 + 16), v43, 8 * v78);
                v42 = v99;
              }
            }
            else
            {
              if ( v78 > *(unsigned int *)(a9 + 28) )
              {
                v100 = *(_QWORD *)(v11[6].m128i_i64[0] + 4616)
                     + 640LL * *(unsigned int *)(v11[6].m128i_i64[0] + 4624)
                     - 640;
                *(_DWORD *)(a9 + 24) = 0;
                sub_2237220(a9 + 16, a9 + 32, v78, 8);
                v42 = v100;
                v79 = 0;
                v44 = *(char **)(v100 + 512);
                v78 = *(unsigned int *)(v100 + 520);
                v82 = *(void **)(a9 + 16);
                v81 = v44;
              }
              else
              {
                v81 = (char *)(v42 + 528);
                v82 = *(void **)(a9 + 16);
                if ( *(_DWORD *)(a9 + 24) )
                {
                  v103 = *(_QWORD *)(v11[6].m128i_i64[0] + 4616)
                       + 640LL * *(unsigned int *)(v11[6].m128i_i64[0] + 4624)
                       - 640;
                  v96 = 8 * v79;
                  memmove(v82, v81, 8 * v79);
                  v42 = v103;
                  v44 = *(char **)(v103 + 512);
                  v78 = *(unsigned int *)(v103 + 520);
                  v79 = v96;
                  v81 = &v44[v96];
                  v82 = (void *)(v96 + *(_QWORD *)(a9 + 16));
                }
              }
              v83 = 8 * v78;
              if ( v81 != &v44[v83] )
              {
                v97 = v42;
                memcpy(v82, v81, v83 - v79);
                v42 = v97;
              }
            }
            *(_DWORD *)(a9 + 24) = v80;
            *(_DWORD *)(v42 + 520) = 0;
          }
          else
          {
            v45 = *(void **)(a9 + 16);
            if ( v45 != (void *)(a9 + 32) )
            {
              v102 = v42 + 528;
              v95 = *(_QWORD *)(v11[6].m128i_i64[0] + 4616)
                  + 640LL * *(unsigned int *)(v11[6].m128i_i64[0] + 4624)
                  - 640;
              free(v45);
              v42 = v95;
              v44 = (char *)v102;
              v43 = *(const void **)(v95 + 512);
            }
            *(_DWORD *)(a9 + 24) = *(_DWORD *)(v42 + 520);
            v46 = *(_DWORD *)(v42 + 524);
            *(_QWORD *)(a9 + 16) = v43;
            *(_DWORD *)(a9 + 28) = v46;
            *(_QWORD *)(v42 + 512) = v44;
            *(_QWORD *)(v42 + 520) = 0;
          }
        }
        if ( v40 )
          sub_190D5E0(v38);
        v47 = (void *)sub_17FF1A0(v11[6].m128i_i64[0]);
        v48 = v11[6].m128i_i64[0];
        v132 = v47;
        sub_17C39D0(v48, v47);
        v49 = v132;
LABEL_98:
        sub_17BF6B0(v11[6].m128i_i64[0], v49);
        if ( !v165 )
        {
          sub_1818070(v159, v164, v132);
          v165 = 1;
        }
        v28 = sub_17B3220(v11[6].m128i_i64[0], *(_QWORD *)(v11[6].m128i_i64[0] + 608), a2, &v132, 1);
        goto LABEL_24;
      }
    }
    v126 = (char *)&v127 + 8;
    *(_QWORD *)&v127 = 0x800000000LL;
    v55 = sub_1481EA0((__int64)v11, (__int64)v147, (__int64)a5, a9, a7, *(double *)a8.m128_u64);
    v56 = v55;
    if ( (_DWORD)v112 )
      sub_146DD70((__int64)v11, (__int64 *)&ptr, v55, 1, 0);
    if ( !v165 )
    {
      sub_1818070(v159, v164, v56);
      v165 = 1;
    }
    if ( v56 )
      sub_147FE60((__int64)&v126, v56);
    if ( v11[2].m128i_i16[0] == 66 )
    {
      v66 = v11;
      m128i_i32 = v11[1].m128i_i32;
      while ( 1 )
      {
        v68 = (__int64 *)v66->m128i_i64[1];
        v66[2].m128i_i32[2] = v66[1].m128i_i32[0];
        sub_14634E0(v68, m128i_i32);
        v69 = v66[2].m128i_u32[2];
        if ( (v66[2].m128i_i8[2] & 1) != 0 && a3 != 9 && !sub_147DC30((__int64)v66, a3) )
          break;
        if ( *a5 && !v158 )
        {
          sub_1564820(&v132, v66, v69, 1752);
          sub_14780E0((unsigned __int8 **)&v132, *a5);
          sub_AEA040((__int64)&v132);
        }
        sub_147AE90(v147);
        if ( !v165 )
        {
          sub_1818070(v159, v164, 0);
          v165 = 1;
        }
        v70 = v66[2].m128i_i16[0] == 189;
        v71 = *(_QWORD *)(v159 + 512);
        *(_QWORD *)(v159 + 512) = &v160;
        v165 = 0;
        v164 = v71;
        v158 = v69;
        if ( v70 )
          sub_1490D80(v66, (__int64)v147, 0, a7, a8);
        if ( **(char **)(v66->m128i_i64[1] + 56) < 0 )
          sub_147B8B0((__int64)v66);
        v72 = v66[6].m128i_i64[0];
        v132 = v147;
        v133 = v66;
        sub_15F0FC0(v72, v151, sub_1498E10, &v132);
        v73 = v66[2].m128i_i16[0];
        if ( (*(_BYTE *)(*(_QWORD *)(v66->m128i_i64[1] + 56) + 89LL) & 1) != 0 && v73 == 62 )
        {
          v133 = v135;
          v134 = 0x200000000LL;
          v136 = v106;
          v138 = 0x200000000LL;
          v137 = v139;
          v132 = nullptr;
          sub_14D7300(v66, &v132, 0, 0);
          sub_147F500((__int64 *)v156, v156[0], (char *)v133, (char *)v133 + 8 * (unsigned int)v134);
          LODWORD(v134) = 0;
          sub_15D8C50(v157, &v136);
          LODWORD(v138) = 0;
          if ( HIDWORD(v132) )
            v152 = HIDWORD(v132);
          sub_15DCED0(v136, &v136);
          if ( v137 != v139 )
            free(v137);
          if ( v133 != v135 )
            free(v133);
          v73 = v66[2].m128i_i16[0];
        }
        if ( (v155 & 1) == 0 && ((**(_DWORD **)v147 >> 12) & 0x7F) != 0x45 )
        {
          if ( v73 == 176 )
            sub_14A12D0(v66, v147);
          v74 = sub_1491FD0(v66, (__int64)v147, (__int64)a5, a7, a8);
          if ( !v165 )
          {
            v107 = v74;
            sub_1818070(v159, v164, v74);
            v165 = 1;
            v74 = v107;
          }
          if ( v74 )
            sub_147FE60((__int64)&v126, v74);
          v73 = v66[2].m128i_i16[0];
        }
        if ( v73 != 66 )
        {
          v11 = v66;
          goto LABEL_82;
        }
      }
      sub_1564820(&v132, v66, v69, 1648);
      v11 = v66;
      v77 = j__strlen(";");
      LODWORD(v109) = v69;
      HIDWORD(v109) = v69;
      v110 = 1;
      sub_1478E60((__int64)&v115, v109, 1, ";", v77);
      if ( v115 && v116 )
        sub_1480470((__int64 *)&v132, (unsigned __int64)&v115);
      if ( v120 != v122 )
        operator delete(v120);
      sub_AEA040((__int64)&v132);
      if ( a6 )
        *a6 = v66[1].m128i_i32[0];
    }
    else
    {
LABEL_82:
      if ( a6 )
        *a6 = v11[1].m128i_i32[0];
      if ( a3 != 9 )
      {
        v65 = j__strlen(&byte_22F0C30);
        if ( (unsigned __int8)sub_156A150(v11, a3 == 0 ? 1713 : 1648, &byte_22F0C30, v65) )
        {
          if ( !sub_147EA80((__int64)v11, 0, 0) )
            sub_147DEE0((__int64)v11);
        }
      }
    }
    v28 = sub_17B3220(v11[6].m128i_i64[0], *(_QWORD *)(v11[6].m128i_i64[0] + 608), a2, v126, (unsigned int)v127);
    if ( v126 != (char *)&v127 + 8 )
      free(v126);
    goto LABEL_24;
  }
  if ( v11[2].m128i_i16[0] != 24 )
    goto LABEL_22;
  sub_1564840(&v132, v11, &v11[1], 1681);
  sub_AEA040((__int64)&v132);
  v64 = (__int64)v11;
  v28 = 0;
  sub_147DEE0(v64);
LABEL_24:
  if ( ptr != v113 )
    free(ptr);
LABEL_26:
  if ( v146 )
  {
    sub_1818070(v140, v145, 0);
    v146 = 0;
  }
  v29 = v142;
  v30 = &v142[80 * (unsigned int)v143];
  if ( v142 != v30 )
  {
    do
    {
      v31 = v29;
      v29 += 80;
      sub_15B6850(v31);
    }
    while ( v30 != v29 );
    v30 = v142;
  }
  if ( v30 != v144 )
    free(v30);
  if ( !v165 )
  {
    sub_1818070(v159, v164, 0);
    v165 = 1;
  }
  v32 = v161;
  v33 = &v161[80 * (unsigned int)v162];
  if ( v161 != v33 )
  {
    do
    {
      v34 = v32;
      v32 += 80;
      sub_15B6850(v34);
    }
    while ( v33 != v32 );
    v33 = v161;
  }
  if ( v33 != v163 )
    free(v33);
  sub_147A7A0(v147);
  sub_147A450(v123);
  return v28;
}
