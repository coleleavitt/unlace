unsigned __int64 __fastcall sub_1928110(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // r10
  unsigned int v10; // r12d
  __int64 v13; // rax
  unsigned __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  char v19; // r15
  unsigned int v20; // r14d
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int64 v31; // rsi
  char v32; // bl
  unsigned int v33; // edi
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _WORD *v39; // r11
  __int16 v40; // ax
  __int64 v41; // r14
  size_t v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  _WORD *v48; // rdi
  unsigned int v49; // eax
  unsigned int v50; // esi
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rax
  _WORD *v57; // rax
  __int64 v58; // rax
  size_t v59; // rdx
  const void *v60; // r15
  size_t v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // r14
  _WORD *v69; // rsi
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  char v84; // r10
  char *v85; // rax
  unsigned __int64 v86; // rdx
  __int64 v87; // rbx
  char *v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rax
  unsigned int v92; // esi
  unsigned int v93; // ecx
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned int v96; // eax
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  unsigned int v101; // eax
  int v102; // eax
  size_t v103; // r8
  unsigned int v104; // eax
  size_t v105; // rax
  unsigned __int64 v106; // rsi
  __int64 v107; // r8
  __int64 v108; // r9
  _WORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned __int64 v114; // r14
  unsigned __int16 *v115; // rax
  __int64 v116; // r15
  unsigned __int64 v117; // r14
  unsigned int v118; // eax
  __int64 v119; // r9
  unsigned __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // [rsp+10h] [rbp-2128h]
  unsigned __int64 v126; // [rsp+18h] [rbp-2120h]
  char v127; // [rsp+18h] [rbp-2120h]
  unsigned __int64 v128; // [rsp+18h] [rbp-2120h]
  size_t v129; // [rsp+18h] [rbp-2120h]
  char v130; // [rsp+20h] [rbp-2118h]
  unsigned __int64 v131; // [rsp+20h] [rbp-2118h]
  _WORD *v132; // [rsp+20h] [rbp-2118h]
  __int64 v133; // [rsp+28h] [rbp-2110h]
  char v135; // [rsp+28h] [rbp-2110h]
  char v136; // [rsp+30h] [rbp-2108h]
  _WORD *v137; // [rsp+30h] [rbp-2108h]
  size_t v138; // [rsp+30h] [rbp-2108h]
  __int64 v139; // [rsp+30h] [rbp-2108h]
  __int64 v140; // [rsp+38h] [rbp-2100h]
  _WORD *v141; // [rsp+40h] [rbp-20F8h]
  __int64 v142; // [rsp+48h] [rbp-20F0h]
  int v143; // [rsp+54h] [rbp-20E4h]
  unsigned __int64 v144; // [rsp+58h] [rbp-20E0h] BYREF
  int v145; // [rsp+64h] [rbp-20D4h] BYREF
  unsigned __int64 v146; // [rsp+68h] [rbp-20D0h] BYREF
  unsigned __int64 v147; // [rsp+70h] [rbp-20C8h] BYREF
  _DWORD v148[5]; // [rsp+78h] [rbp-20C0h] BYREF
  char v149; // [rsp+8Ch] [rbp-20ACh]
  _DWORD v150[6]; // [rsp+90h] [rbp-20A8h] BYREF
  void *v151; // [rsp+A8h] [rbp-2090h]
  __int64 v152; // [rsp+B8h] [rbp-2080h] BYREF
  char *v153; // [rsp+D0h] [rbp-2068h] BYREF
  unsigned __int64 v154; // [rsp+D8h] [rbp-2060h]
  void *v155; // [rsp+E8h] [rbp-2050h]
  __int64 v156; // [rsp+F8h] [rbp-2040h] BYREF
  unsigned __int64 v157; // [rsp+110h] [rbp-2028h] BYREF
  __int64 v158; // [rsp+118h] [rbp-2020h]
  __int64 v159; // [rsp+120h] [rbp-2018h]
  void *v160; // [rsp+128h] [rbp-2010h]
  __int64 v161; // [rsp+130h] [rbp-2008h]
  __int64 v162; // [rsp+138h] [rbp-2000h] BYREF
  __int64 v163[1021]; // [rsp+150h] [rbp-1FE8h] BYREF

  v8 = a6;
  v10 = a2;
  v13 = *(_QWORD *)(a1 + 232);
  v144 = a5;
  if ( (*(_BYTE *)(v13 + 1) & 0x10) != 0 && (*(_WORD *)a5 & 0x1FF) == 0x35 )
  {
    v126 = a5;
    v20 = sub_EEC140(a5);
    v21 = sub_EEB7E0(v126, a2, *(double *)a7.m128_u64);
    HIDWORD(v153) = sub_EEB7E0(v126, a2, *(double *)a7.m128_u64);
    v22 = *(_QWORD *)(a4 + 8);
    LOWORD(v153) = 1;
    v154 = __PAIR64__(v20, v21);
    v159 = v22;
    LODWORD(v157) = 9;
    v158 = 0;
    LODWORD(v160) = 0;
    v161 = 0;
    sub_1A19220((unsigned int)v163, a1, (unsigned int)&v157, (unsigned int)&v153, (unsigned int)&v144, 1, 0, 1);
    v23 = sub_1A1D600((unsigned int)v163, a1, (unsigned int)&v157, (unsigned int)&v153, (unsigned int)&v144, 1, 0);
    if ( v23 == 1 )
    {
      sub_1A0BB10(v163);
      return 1;
    }
    v144 = v23 & 0xFFFFFFFFFFFFFFFELL;
    sub_1A0BB10(v163);
    a5 = v144;
    v8 = a6;
  }
  v146 = a4;
  v147 = a5;
  *(_QWORD *)v148 = 0;
  v145 = 0;
  if ( a5 <= 1 || a4 <= 1 )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 47LL) & 0x20) != 0 )
  {
    v15 = *(_QWORD *)(a4 + 8);
    v130 = v8;
    v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)v17;
    v19 = *(_BYTE *)(*(_QWORD *)v17 + 16LL);
    if ( v19 == 7
      || (v133 = *(_QWORD *)(*(_QWORD *)(a5 + 8) & 0xFFFFFFFFFFFFFFF0LL),
          v140 = *(_QWORD *)(*(_QWORD *)(v133 + 8) & 0xFFFFFFFFFFFFFFF0LL),
          v136 = *(_BYTE *)(v140 + 16),
          v136 == 7) )
    {
      v24 = sub_EEC140(a5);
      v157 = __PAIR64__(v24, sub_EEB7E0(a4, v15, *(double *)a7.m128_u64));
      if ( a3 == 21 )
      {
        sub_168B9F0((__int64)v163, (__int64 *)(a1 + 8), v10, 0x1237u, 0);
        LODWORD(v153) = 0;
        v25 = sub_1587D10((__int64)v163, (int *)&v153);
        sub_15884C0(v25, (__int64 *)&v157);
        sub_15F7200(v163);
        return 1;
      }
LABEL_17:
      sub_18F40B0(a1, v10, &v146, &v147, *(double *)a7.m128_u64);
      return 1;
    }
    if ( sub_E3A850(v16) )
      goto LABEL_17;
    if ( sub_E3A850(v133) )
      goto LABEL_17;
    v8 = v130;
    if ( v19 == 13 && ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1EC )
      goto LABEL_17;
    if ( v136 == 13 && ((*(_WORD *)(v140 + 18) >> 3) & 0x1FF) == 0x1EC
      || v19 == 11
      || v136 == 41
      || v19 == 41
      || v136 == 11 )
    {
      goto LABEL_17;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a4 + 8);
  }
  v127 = v8;
  sub_160A1C0(a1, v15, v10, 0);
  sub_160A1C0(a1, *(_QWORD *)(v144 + 8), v10, 0);
  switch ( a3 )
  {
    case 0u:
    case 1u:
      v63 = sub_19C3640(a1, &v146, &v147, &v145, v10, a3);
      goto LABEL_57;
    case 2u:
    case 3u:
      v70 = sub_1922170(a1, (__int64 *)&v146, (__int64 *)&v147, v10, 0, a3 == 3, a7, a8);
      goto LABEL_65;
    case 4u:
      v63 = sub_1921D60((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, 0, a7, a8);
      goto LABEL_57;
    case 5u:
      v70 = sub_1920FA0((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, 5, nullptr, a7, a8);
      goto LABEL_65;
    case 6u:
      v70 = sub_1920300((__int64 *)a1, (__int64)&v146, (__int64 *)&v147, v10, nullptr, a7, a8);
      goto LABEL_65;
    case 7u:
    case 8u:
      v63 = sub_191EF90((__int64 *)a1, &v146, &v147, v10, a3, 0, a7, a8);
      goto LABEL_57;
    case 9u:
      v70 = sub_19259C0((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, 9, v28, a7, a8);
      goto LABEL_65;
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
      v83 = sub_19259C0((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, a3, v28, a7, a8);
      v84 = v127;
      v128 = v83;
      if ( ((*(_WORD *)a4 + 394) & 0x1FFu) > 1 || v84 || ((*(_WORD *)(a4 + 2) >> 3) & 0x3Fu) - 9 > 6 )
        goto LABEL_66;
      v30 = 0;
      sub_168B9F0((__int64)v163, (__int64 *)(a1 + 8), v10, 0x1A31u, 0);
      v85 = sub_BFA720((*(_WORD *)(a4 + 2) >> 3) & 0x3F);
      v154 = v86;
      v153 = v85;
      v87 = sub_166BAF0((__int64)v163, (__int64)&v153);
      v88 = sub_BFA720(a3);
      v89 = v87;
      v32 = 0;
      v158 = v90;
      v157 = (unsigned __int64)v88;
      sub_166BAF0(v89, (__int64)&v157);
      sub_15F7200(v163);
      v33 = 1;
      v131 = 0;
      goto LABEL_31;
    case 0xEu:
    case 0xFu:
      v70 = sub_19259C0((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, a3, v28, a7, a8);
      goto LABEL_65;
    case 0x10u:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 4) == 0 )
        goto LABEL_56;
      v54 = v146 & 0xFFFFFFFFFFFFFFFELL;
      v55 = v147 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFD550(v146 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 34 )
        goto LABEL_48;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFD550(v55) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 34 )
      {
        v56 = v54;
        v54 = v55;
        v55 = v56;
LABEL_48:
        if ( v54 && (*(_WORD *)sub_BFD550(v55) & 0x1FF) == 0x34 )
        {
          v57 = (_WORD *)sub_BFD550(v54);
          if ( (*v57 & 0x1FF) == 0x21 )
          {
            v163[0] = sub_C9AC10((__int64)v57);
            v58 = sub_FDE9A0(v163, 0);
            v129 = v59;
            v60 = (const void *)v58;
            v61 = j__strlen("performSelector");
            if ( v61 > v129 || v61 && memcmp(v60, "performSelector", v61) )
              v62 = 7191;
            else
              v62 = 7192;
          }
          else
          {
            v62 = 7191;
          }
          sub_168B9F0((__int64)v163, (__int64 *)(a1 + 8), v10, v62, 0);
          v157 = sub_EEC8C0(v54, a1 + 8, *(double *)a7.m128_u64);
          sub_1587DB0((__int64)v163, (__int64 *)&v157);
          sub_15F7200(v163);
        }
      }
LABEL_56:
      v63 = sub_191FFB0((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, a3, a7, a8);
LABEL_57:
      v128 = v63;
      v33 = 0;
      v30 = 0;
      v32 = 0;
      v131 = 0;
      goto LABEL_31;
    case 0x11u:
    case 0x12u:
      goto LABEL_56;
    case 0x13u:
    case 0x14u:
      v70 = sub_191D8B0(a1, (__int64 *)&v146, (__int64 *)&v147, v10, a3, v28, a7, a8);
LABEL_65:
      v128 = v70;
LABEL_66:
      v131 = 0;
      v33 = 1;
      v30 = 0;
      v32 = 0;
      goto LABEL_31;
    case 0x15u:
      v128 = sub_191A580(a1, v146 & 0xFFFFFFFFFFFFFFFELL, &v147, v10, 0, a7, a8);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      {
        v68 = v146;
        v65 = v146 & 0xFFFFFFFFFFFFFFFELL;
        v64 = (*(_BYTE *)((v146 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 3) & 7;
        if ( (_BYTE)v64 == 3 )
        {
          v32 = 0;
        }
        else
        {
          v145 = (*(_BYTE *)((v146 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3;
          v32 = (*(_BYTE *)(v65 + 1) >> 3) & 7;
        }
      }
      else
      {
        v32 = 0;
        v68 = v146;
      }
      v69 = (_WORD *)(v68 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v128 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        if ( (*v69 & 0x1FF) != 0x47 )
          return 1;
        goto LABEL_63;
      }
      sub_18E0200(a1, (unsigned __int64)v69, v147 & 0xFFFFFFFFFFFFFFFELL, v10, 1, *(double *)a7.m128_u64);
      v106 = v146 & 0xFFFFFFFFFFFFFFFELL;
      sub_16D7770(a1, v146 & 0xFFFFFFFFFFFFFFFELL, v147 & 0xFFFFFFFFFFFFFFFELL, v10, v107, v108, *(double *)a7.m128_u64);
      v109 = (_WORD *)sub_BFB9F0(v147 & 0xFFFFFFFFFFFFFFFELL);
      v114 = v146;
      v132 = v109;
      if ( (*v109 & 0x1FF) != 0x75 )
        goto LABEL_141;
      v115 = (unsigned __int16 *)sub_BFB9F0(v146 & 0xFFFFFFFFFFFFFFFELL);
      v110 = *v115;
      LOWORD(v110) = v110 & 0x1FF;
      if ( (_WORD)v110 != 71 )
        goto LABEL_141;
      v116 = *((_QWORD *)v115 + 2);
      if ( (*(_BYTE *)(v116 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_141;
      if ( !sub_9B48E0(v116) )
        goto LABEL_140;
      v123 = *(_QWORD *)(a1 + 608);
      if ( *(_BYTE *)(v123 + 100) )
      {
        v110 = *(_QWORD *)(v123 + 80);
        v124 = v110 + 8LL * *(unsigned int *)(v123 + 92);
        while ( v124 != v110 )
        {
          if ( v116 == *(_QWORD *)v110 )
            goto LABEL_160;
          v110 += 8;
        }
        goto LABEL_140;
      }
      v106 = v116;
      if ( !sub_2236570(v123 + 80, v116) )
      {
LABEL_140:
        v114 = v146;
        goto LABEL_141;
      }
LABEL_160:
      *(_BYTE *)(*((_QWORD *)v132 + 2) + 50LL) |= 4u;
      v114 = v146;
LABEL_141:
      v163[0] = *(_QWORD *)((v114 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( sub_179FBB0(v163, v106, v110, v111, v112, v113) )
      {
        v117 = v146 & 0xFFFFFFFFFFFFFFFELL;
        v118 = sub_C00A40(v146 & 0xFFFFFFFFFFFFFFFELL, v106, v64, v65, v66);
        sub_17D0CF0(a1, *(_QWORD *)(v117 + 8), v118, 5, 4, v119, v125, v128);
      }
      v34 = v146;
      v69 = (_WORD *)(v146 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*(_WORD *)(v146 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) == 0x47 )
      {
LABEL_63:
        v30 = 0;
        sub_18BDB30(a1, (__int64)v69, v64, v65, v66, v67);
        v33 = 0;
        v131 = 0;
        goto LABEL_31;
      }
      v131 = 0;
      v33 = 0;
      v30 = 0;
      goto LABEL_33;
    case 0x16u:
    case 0x17u:
      v30 = sub_1922170(a1, (__int64 *)&v146, (__int64 *)&v147, v10, 1u, a3 == 23, a7, a8);
      *(_QWORD *)v148 = v30;
      v131 = v30 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 || v146 == 1 || v147 == 1 )
        return 1;
      v71 = v146 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_72;
    case 0x18u:
      v30 = sub_1921D60((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, 1u, a7, a8);
      *(_QWORD *)v148 = v30;
      v131 = v30 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 || v146 == 1 || v147 == 1 )
        return 1;
      v31 = v146 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_30;
    case 0x19u:
      v30 = sub_1920FA0((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, 25, (__int64 *)v148, a7, a8);
      v131 = v30 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 || v146 == 1 || v147 == 1 )
        return 1;
      v71 = v146 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_72;
    case 0x1Au:
      v30 = sub_1920300((__int64 *)a1, (__int64)&v146, (__int64 *)&v147, v10, (unsigned __int64 *)v148, a7, a8);
      v131 = v30 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0 || v146 == 1 || v147 == 1 )
        return 1;
      v71 = v146 & 0xFFFFFFFFFFFFFFFELL;
LABEL_72:
      v32 = 0;
      v33 = 1;
      v128 = sub_191A580(a1, v71, &v147, v10, v30, a7, a8);
      goto LABEL_31;
    case 0x1Bu:
    case 0x1Cu:
      v29 = sub_191EF90((__int64 *)a1, &v146, &v147, v10, a3, 1u, a7, a8);
      goto LABEL_26;
    case 0x1Du:
    case 0x1Fu:
      sub_18E0200(a1, v146 & 0xFFFFFFFFFFFFFFFELL, v147 & 0xFFFFFFFFFFFFFFFELL, v10, 1, *(double *)a7.m128_u64);
      goto LABEL_25;
    case 0x1Eu:
LABEL_25:
      v29 = sub_191FFB0((__int64 *)a1, (__int64 *)&v146, (__int64 *)&v147, v10, a3, a7, a8);
LABEL_26:
      v30 = v29;
      *(_QWORD *)v148 = v29;
      v131 = v29 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 || v146 == 1 || v147 == 1 )
        return 1;
      v31 = v146 & 0xFFFFFFFFFFFFFFFELL;
LABEL_30:
      v32 = 0;
      v33 = 0;
      v128 = sub_191A580(a1, v31, &v147, v10, v30, a7, a8);
      goto LABEL_31;
    case 0x20u:
      v146 = sub_1907C70(a1, (_QWORD *)(v146 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a7, a8, a3, v26, v27, v28);
      v76 = sub_1907C70(a1, (_QWORD *)(v147 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a7, a8, v72, v73, v74, v75);
      v147 = v76;
      if ( v146 == 1 || v76 == 1 || (v77 = sub_19A6720(a1, v146 & 0xFFFFFFFFFFFFFFFELL), v146 = v77, v77 == 1) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
          return 1;
        v128 = 0;
        v81 = v147;
        if ( v147 == 1 )
          return 1;
        goto LABEL_98;
      }
      sub_1C45040(a1, v77 & 0xFFFFFFFFFFFFFFFELL, 7518);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
      {
        v120 = sub_19179A0(a1, (_QWORD *)(v147 & 0xFFFFFFFFFFFFFFFELL), 1u, v78, v79, v80, a7, a8);
        v147 = v120;
        if ( v120 == 1 )
          return 1;
        v121 = *(_QWORD *)((v120 & 0xFFFFFFFFFFFFFFFELL) + 8);
        v122 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v121 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v122 + 16) != 13 || ((*(_WORD *)(v122 + 18) >> 3) & 0x1FF) != 0x1B3 )
          sub_1E63CF0(a1, v10, v121, 1, 3968);
      }
      if ( (unsigned __int8)sub_FD3830(
                              *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                              0x1A12u,
                              v10,
                              *(_QWORD *)(a1 + 264),
                              v79,
                              v80) != 1 )
        sub_18CFB60(a1, v146 & 0xFFFFFFFFFFFFFFFELL, v10, (__m128i)a7, *(double *)a8.m128_u64);
      v81 = v147;
      v128 = *(_QWORD *)((v147 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && v147 != 1 )
      {
LABEL_98:
        v82 = v81 & 0xFFFFFFFFFFFFFFFELL;
        v33 = 0;
        v30 = 0;
        v131 = 0;
        v145 = (*(_BYTE *)(v82 + 1) >> 1) & 3;
        v32 = (*(_BYTE *)(v82 + 1) >> 3) & 7;
        goto LABEL_31;
      }
      v131 = 0;
      v33 = 0;
      v30 = 0;
      v32 = 0;
LABEL_31:
      if ( (v128 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 1;
      v34 = v146;
LABEL_33:
      if ( v34 == 1 || v147 == 1 )
        return 1;
      v135 = sub_18BD480(v33, *(_QWORD *)(a1 + 248), v34 & 0xFFFFFFFFFFFFFFFELL, v147 & 0xFFFFFFFFFFFFFFFELL);
      sub_16C6F10(a1, v146 & 0xFFFFFFFFFFFFFFFELL, *(double *)a7.m128_u64);
      sub_16C6F10(a1, v147 & 0xFFFFFFFFFFFFFFFELL, *(double *)a7.m128_u64);
      v39 = (_WORD *)sub_BFD550(v146 & 0xFFFFFFFFFFFFFFFELL);
      v40 = *v39 & 0x1FF;
      if ( v40 == 35 )
      {
        v137 = v39;
        v41 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
        v42 = j__strlen("object_setClass");
        v43 = sub_6F3470(v41, "object_setClass", v42);
        v44 = *(_QWORD *)(a1 + 192);
        v45 = sub_1A5B7C0(a1, v44, v43, 0, 0, 0);
        v48 = (_WORD *)(v146 & 0xFFFFFFFFFFFFFFFELL);
        if ( v45 && (*v48 & 0x1FF) == 0x23 )
        {
          v141 = v137;
          v96 = sub_EEC140(v147 & 0xFFFFFFFFFFFFFFFELL);
          v97 = v96;
          v143 = sub_15F0EF0(a1, v96, 0, (__m128i)a7, *(double *)a8.m128_u64);
          v101 = sub_C00A40(v146 & 0xFFFFFFFFFFFFFFFELL, v97, v98, v99, v100);
          sub_168B9F0((__int64)v163, (__int64 *)(a1 + 8), v101, 0x1C12u, 0);
          v138 = j__strlen("object_setClass(");
          v102 = sub_EEB7E0(v146 & 0xFFFFFFFFFFFFFFFELL, a1 + 8, *(double *)a7.m128_u64);
          sub_9EC740((__int64)v150, v102, "object_setClass(", v138, 0);
          v139 = sub_1589170((__int64)v163, v150);
          v103 = j__strlen(",");
          v149 = 1;
          v104 = *((_DWORD *)v141 + 7);
          *(_QWORD *)&v148[3] = __PAIR64__(v10, v104);
          sub_18BE5B0((__int64)&v153, __SPAIR64__(v10, v104), 1, ",", v103);
          v142 = sub_1589170(v139, &v153);
          v105 = j__strlen(")");
          sub_9EC740((__int64)&v157, v143, ")", v105, 0);
          sub_1589170(v142, &v157);
          if ( v160 != &v162 )
            operator delete(v160);
          if ( v155 != &v156 )
            operator delete(v155);
          if ( v151 != &v152 )
            operator delete(v151);
          sub_15F7200(v163);
        }
        else
        {
          v49 = sub_C00A40((unsigned __int64)v48, v44, v46, a1 + 8, v47);
          sub_168B9F0((__int64)v163, (__int64 *)(a1 + 8), v49, 0x1C12u, 0);
          sub_15F7200(v163);
        }
      }
      else if ( v40 == 34 )
      {
        sub_18CD690(
          (__int64 *)a1,
          (unsigned __int64)v39,
          v10,
          v147 & 0xFFFFFFFFFFFFFFFELL,
          v37,
          v38,
          (__m128i)a7,
          *(double *)a8.m128_u64);
      }
      if ( v131 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
        {
          v35 = v146 & 0xFFFFFFFFFFFFFFFELL;
          if ( ((*(_BYTE *)((v146 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 3) & 7) != 3 )
          {
            v145 = 1;
            v32 = (*(_BYTE *)(v35 + 1) >> 3) & 7;
          }
        }
        v91 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v131 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v91 + 16) == 13 && (((*(_WORD *)(v91 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
          *(_QWORD *)v148 = *(_QWORD *)((sub_191BD20(
                                           a1,
                                           (_QWORD *)(v146 & 0xFFFFFFFFFFFFFFFELL),
                                           a7,
                                           a8,
                                           v35,
                                           v36,
                                           v37,
                                           v38)
                                       & 0xFFFFFFFFFFFFFFFELL)
                                      + 8);
        v92 = *(_DWORD *)(a1 + 1944);
        v93 = *(_DWORD *)(a1 + 1948);
        v94 = *(unsigned int *)(a1 + 1952);
        v95 = *(unsigned int *)(a1 + 1956);
        if ( v135 )
        {
          if ( __PAIR64__(v93, v92) == __PAIR64__(v95, v94) )
          {
            v95 = 0;
            v94 = 0;
          }
          result = sub_18C2EC0(
                     a1,
                     v146,
                     v147,
                     a3,
                     v128,
                     v145,
                     *(double *)a7.m128_u64,
                     *(double *)a8.m128_u64,
                     v32,
                     1,
                     v10,
                     (v95 << 32) | v94);
        }
        else
        {
          if ( __PAIR64__(v93, v92) == __PAIR64__(v95, v94) )
          {
            v95 = 0;
            v94 = 0;
          }
          result = sub_C0BCA0(
                     *(_QWORD **)(a1 + 248),
                     v146 & 0xFFFFFFFFFFFFFFFELL,
                     v147 & 0xFFFFFFFFFFFFFFFELL,
                     a3,
                     v128,
                     (unsigned int)v145,
                     v32,
                     v10,
                     (v95 << 32) | v94,
                     *(__int64 *)v148,
                     v30);
        }
      }
      else
      {
        v50 = *(_DWORD *)(a1 + 1944);
        v51 = *(_DWORD *)(a1 + 1948);
        v52 = *(unsigned int *)(a1 + 1952);
        v53 = *(unsigned int *)(a1 + 1956);
        if ( v135 )
        {
          if ( __PAIR64__(v51, v50) == __PAIR64__(v53, v52) )
          {
            v53 = 0;
            v52 = 0;
          }
          result = sub_18C2EC0(
                     a1,
                     v146,
                     v147,
                     a3,
                     v128,
                     v145,
                     *(double *)a7.m128_u64,
                     *(double *)a8.m128_u64,
                     v32,
                     0,
                     v10,
                     (v53 << 32) | v52);
        }
        else
        {
          if ( __PAIR64__(v51, v50) == __PAIR64__(v53, v52) )
          {
            v53 = 0;
            v52 = 0;
          }
          result = sub_C09F10(
                     *(_QWORD **)(a1 + 248),
                     v146 & 0xFFFFFFFFFFFFFFFELL,
                     v147 & 0xFFFFFFFFFFFFFFFELL,
                     a3,
                     v128,
                     (unsigned int)v145,
                     v32,
                     v10,
                     (v53 << 32) | v52);
        }
      }
      break;
    default:
      return 1;
  }
  return result;
}
