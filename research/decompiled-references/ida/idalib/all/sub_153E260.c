__int64 __fastcall sub_153E260(__int64 a1, void *a2, __m128i a3, __m128 a4)
{
  unsigned int v5; // r14d
  int *v6; // r12
  __int16 v7; // ax
  unsigned int v8; // ebp
  _BYTE *v9; // rax
  unsigned int v10; // edx
  char v11; // al
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int16 v18; // dx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int16 v22; // ax
  char v23; // cl
  char v24; // al
  int v25; // eax
  bool v26; // zf
  unsigned __int8 **v27; // rax
  __int64 v28; // rsi
  int v29; // ecx
  bool v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  __int64 v37; // rdi
  char v38; // r13
  __int64 *v39; // rdi
  unsigned int v40; // r13d
  int v41; // eax
  __int64 v42; // rdi
  _QWORD *v43; // rdi
  __int64 v44; // r14
  _QWORD *v45; // rax
  const __m128i *v46; // r12
  const __m128i *v47; // rdi
  __int64 v48; // rax
  __int8 v49; // al
  __m128i v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int64 v61; // r12
  __int64 v62; // rdi
  unsigned __int64 v63; // r12
  bool v64; // al
  __int64 v65; // rdi
  _BOOL8 v66; // rdx
  __int16 v67; // ax
  char v68; // al
  __int64 *v69; // rdi
  __int64 v70; // rax
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // r12
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r13
  __int16 v79; // dx
  char v80; // al
  unsigned int v81; // eax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rdx
  __int64 v84; // rdi
  __int64 *v85; // rax
  __int64 v86; // rax
  __int64 *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  unsigned int v90; // eax
  unsigned __int16 v91; // cx
  __int64 v92; // rdx
  __int64 *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 *v97; // rdi
  unsigned __int16 v98; // r13
  __int64 *v99; // rdi
  unsigned int v100; // r13d
  __int64 *v101; // rdi
  char v102; // al
  __int64 v103; // rdi
  __int64 v104; // rax
  __int64 *v105; // rdi
  size_t v106; // rax
  __int64 v107; // [rsp-10h] [rbp-278h]
  __int64 v108; // [rsp-8h] [rbp-270h]
  __int64 v110; // [rsp+10h] [rbp-258h]
  unsigned int v111; // [rsp+20h] [rbp-248h]
  unsigned __int64 v112; // [rsp+20h] [rbp-248h]
  __int16 v113; // [rsp+30h] [rbp-238h]
  __int64 v114; // [rsp+30h] [rbp-238h]
  __int16 v115; // [rsp+38h] [rbp-230h]
  unsigned __int64 v116; // [rsp+38h] [rbp-230h]
  __int64 v117; // [rsp+40h] [rbp-228h]
  __int64 v118; // [rsp+40h] [rbp-228h]
  __int64 v119; // [rsp+48h] [rbp-220h]
  __int64 v120; // [rsp+48h] [rbp-220h]
  char v121; // [rsp+50h] [rbp-218h]
  __int16 v122; // [rsp+54h] [rbp-214h]
  char v123; // [rsp+54h] [rbp-214h]
  char v124; // [rsp+56h] [rbp-212h]
  char v125; // [rsp+57h] [rbp-211h]
  char v126; // [rsp+57h] [rbp-211h]
  int v127; // [rsp+58h] [rbp-210h]
  unsigned int v128; // [rsp+5Ch] [rbp-20Ch]
  __int64 v129; // [rsp+60h] [rbp-208h] BYREF
  __int64 v130; // [rsp+68h] [rbp-200h] BYREF
  __m128i v131; // [rsp+70h] [rbp-1F8h]
  __int16 v132; // [rsp+80h] [rbp-1E8h]
  char v133; // [rsp+82h] [rbp-1E6h]
  _BYTE *v134; // [rsp+90h] [rbp-1D8h] BYREF
  char v135; // [rsp+98h] [rbp-1D0h]
  __int64 v136; // [rsp+A0h] [rbp-1C8h]
  int v137; // [rsp+A8h] [rbp-1C0h]
  __int16 v138; // [rsp+ACh] [rbp-1BCh]
  __int64 (__fastcall *v139)(__int64); // [rsp+B0h] [rbp-1B8h]
  __int64 v140; // [rsp+B8h] [rbp-1B0h]
  __int64 v141; // [rsp+C0h] [rbp-1A8h]
  unsigned __int64 v142; // [rsp+D0h] [rbp-198h] BYREF
  unsigned int v143; // [rsp+D8h] [rbp-190h]
  __int64 v144; // [rsp+DCh] [rbp-18Ch]
  int v145; // [rsp+E4h] [rbp-184h]
  void *v146; // [rsp+E8h] [rbp-180h]
  __int64 v147; // [rsp+F0h] [rbp-178h]
  _BYTE v148[40]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD v149[3]; // [rsp+120h] [rbp-148h] BYREF
  char v150; // [rsp+138h] [rbp-130h] BYREF
  __int64 v151; // [rsp+148h] [rbp-120h]
  char *v152; // [rsp+150h] [rbp-118h]
  __int64 v153; // [rsp+158h] [rbp-110h]
  char v154; // [rsp+160h] [rbp-108h] BYREF
  __m128i v155; // [rsp+170h] [rbp-F8h] BYREF
  __int64 v156; // [rsp+180h] [rbp-E8h]
  __int64 v157; // [rsp+188h] [rbp-E0h] BYREF
  unsigned int v158; // [rsp+190h] [rbp-D8h]
  __int8 v159; // [rsp+194h] [rbp-D4h]
  __int64 v160; // [rsp+198h] [rbp-D0h]
  __int8 *v161; // [rsp+1A0h] [rbp-C8h]
  __m128i v162; // [rsp+1A8h] [rbp-C0h] BYREF
  char v163; // [rsp+1B8h] [rbp-B0h]
  unsigned __int8 *v164; // [rsp+1C0h] [rbp-A8h] BYREF
  __int64 v165; // [rsp+1C8h] [rbp-A0h]
  void *ptr; // [rsp+1D0h] [rbp-98h]
  __int64 v167; // [rsp+1D8h] [rbp-90h]
  _BYTE v168[64]; // [rsp+1E0h] [rbp-88h] BYREF
  __int64 v169; // [rsp+220h] [rbp-48h]

  v5 = 0;
  v6 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v7 = *(_WORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 40);
  if ( v7 == 168 )
  {
    v39 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v39, v6);
    v5 = *(_DWORD *)(a1 + 40);
    v7 = *(_WORD *)(a1 + 32);
  }
  if ( v7 != 22 )
  {
    v15 = 1;
    sub_1564840(&v164, a1, v6, 1625);
    sub_1533090(&v164, (__int64)"for");
    sub_AEA040((__int64)&v164);
    LOWORD(v164) = 63;
    sub_15680D0(a1, &v164, 1, 0);
    return v15;
  }
  v9 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*v9 & 1) != 0 || (v9[1] & 8) != 0 )
  {
    v121 = 1;
    v10 = 24;
    v124 = 1;
  }
  else
  {
    v121 = (v9[2] & 4) != 0;
    v124 = v121;
    v10 = -v121 & 0x18;
  }
  sub_146B5E0(&v129, a1, v10, 1, 0);
  v136 = a1;
  v134 = (_BYTE *)(a1 + 1952);
  v11 = *(_BYTE *)(a1 + 1952);
  v137 = 1507350;
  v135 = v11;
  v139 = sub_146A990;
  v12 = *(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 1952) = 1;
  v138 = 63;
  v140 = 0;
  v141 = 0;
  if ( v12 == 22 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
      sub_1568800(&v134);
    else
      LODWORD(v141) = sub_146A990(a1);
    v12 = *(_WORD *)(a1 + 32);
  }
  v133 = 0;
  v167 = 0x800000000LL;
  LODWORD(v164) = 0;
  v165 = 0;
  ptr = v168;
  v169 = 0;
  if ( v12 == 3 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v13 + 760) )
    {
      *(_BYTE *)(v13 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v13 + 48) + 6LL) = 1;
    }
    v14 = *(_QWORD *)(a1 + 96);
    v15 = 1;
    *(_WORD *)(a1 + 32) = 1;
    sub_172A9A0(*(_QWORD *)(v14 + 656), *(_QWORD *)(v14 + 608), v124 == 0 ? 7 : 9);
    goto LABEL_14;
  }
  v149[0] = 0;
  v149[1] = &v150;
  v149[2] = 0x200000000LL;
  v151 = a1 + 504;
  v152 = &v154;
  v153 = 0x200000000LL;
  if ( (unsigned __int16)(v12 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    sub_14AB020(a1, (unsigned int *)v149, a3, a4);
  v18 = *(_WORD *)(a1 + 32);
  if ( v18 == 63 )
  {
    v40 = 0;
    sub_1481E50(a1, (__int64)v149, 0);
    v41 = *(_DWORD *)(a1 + 16);
    if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && v41 >= 0 )
      v40 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v41;
    v28 = (__int64)v6;
    sub_14634E0(*(__int64 **)(a1 + 8), v6);
    v119 = 0;
    v112 = 0;
    goto LABEL_62;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*(_BYTE *)(v19 + 1) & 8) != 0 && v18 == 5 )
  {
    if ( (unsigned __int8)sub_15343A0((const __m128i *)a1) )
    {
      sub_1481E50(a1, (__int64)v149, 0);
      v98 = *(_WORD *)(a1 + 32);
      sub_141A630(v98);
      v99 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v99, v6);
      v100 = *(_DWORD *)(a1 + 40);
      if ( (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        sub_14AB020(a1, (unsigned int *)v149, a3, a4);
      v101 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v101, v6);
      v26 = *(_WORD *)(a1 + 32) == 24;
      LODWORD(v164) = *(_DWORD *)(a1 + 40);
      if ( v26 )
        v165 = sub_14EE310(a1, a3);
      else
        v165 = sub_14BFC10((const __m128i *)a1, 0, a3);
      sub_1564820(&v155, a1, v100, 1674);
      v102 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL);
      if ( (v102 & 0x10) != 0 && (v102 & 0x40) == 0 )
      {
        v106 = j__strlen("auto &&");
        sub_9EC740((__int64)&v142, v100, "auto &&", v106, 0);
        if ( (_DWORD)v142 && HIDWORD(v142) )
          sub_1535AC0(v155.m128i_i64, (unsigned __int64)&v142);
        if ( v146 != v148 )
          operator delete(v146);
      }
      sub_AEA040((__int64)&v155);
      v103 = *(_QWORD *)(a1 + 96);
      v28 = *(_QWORD *)(v103 + 608);
      v169 = sub_1800490(v103);
      goto LABEL_125;
    }
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  }
  if ( *(_DWORD *)(v19 + 64) )
  {
    sub_1AF3220(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL));
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  }
  if ( (*(_BYTE *)(v19 + 1) & 8) == 0 )
  {
    if ( sub_147EA80(a1, 0, 1) )
      goto LABEL_32;
    goto LABEL_96;
  }
  if ( *(_WORD *)(a1 + 32) != 153 && !(unsigned __int8)sub_1562870(a1, 1) )
  {
LABEL_96:
    sub_1481E50(a1, (__int64)v149, 0);
    v110 = sub_14BFC10((const __m128i *)a1, 0, a3);
    v64 = sub_14F5220(a1);
    v30 = v64;
    if ( v110 != 1 )
    {
      v65 = *(_QWORD *)(a1 + 96);
      if ( !v64 )
      {
        v66 = 1;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0 )
          v66 = *(_WORD *)(a1 + 32) != 62;
        v112 = sub_1C36190(v65, v110, v66);
        v67 = *(_WORD *)(a1 + 32);
        if ( v67 != 63 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0
            && v67 == 62
            && (v112 & 0xFFFFFFFFFFFFFFFELL) != 0 )
          {
            sub_1564840(&v155, a1, v6, 1673);
            v104 = sub_EEC8C0(v112 & 0xFFFFFFFFFFFFFFFELL, a1, *(double *)a3.m128i_i64);
            LOBYTE(v143) = 1;
            v142 = v104;
            sub_AEC610(v155.m128i_i64, (__int64 *)&v142);
            sub_AEA040((__int64)&v155);
            v28 = (__int64)&v155;
            v155.m128i_i16[0] = 23;
            sub_15680D0(a1, &v155, 1, 2);
            v84 = *(_QWORD *)(a1 + 96);
            v131.m128i_i64[0] = 0;
            v131.m128i_i64[1] = 1;
            LOBYTE(v132) = 1;
            v119 = 0;
            v123 = 1;
            v114 = 1;
            v118 = 0;
            goto LABEL_154;
          }
          v28 = a1;
          sub_1564840(&v155, a1, v6, 1649);
          v40 = 0;
          sub_AEA040((__int64)&v155);
          v119 = 0;
LABEL_62:
          if ( (_DWORD)v164 )
          {
            v42 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
            if ( (*(_BYTE *)(v42 + 8) & 4) != 0 )
            {
              v114 = 0;
              v38 = 0;
              v123 = 0;
              v118 = 0;
              v116 = 0;
              goto LABEL_65;
            }
LABEL_129:
            v123 = 0;
            v114 = 0;
            v118 = 0;
            goto LABEL_130;
          }
          v79 = *(_WORD *)(a1 + 32);
          if ( v79 == 23 || v79 == 63 )
          {
            v42 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
            if ( (*(_BYTE *)(v42 + 8) & 4) != 0 )
            {
              v123 = 0;
              v118 = 0;
              v114 = 0;
              if ( *(_WORD *)(a1 + 32) != 63 )
              {
LABEL_175:
                sub_1564840(&v155, a1, v6, 1649);
                sub_AEA040((__int64)&v155);
LABEL_134:
                v28 = (__int64)&v155;
                v155.m128i_i16[0] = 23;
                sub_15680D0(a1, &v155, 1, 3);
                v71 = *(_WORD *)(a1 + 32);
                if ( v71 != 63 )
                  goto LABEL_135;
              }
LABEL_176:
              v93 = *(__int64 **)(a1 + 8);
              v28 = (__int64)v6;
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              sub_14634E0(v93, v6);
              v71 = *(_WORD *)(a1 + 32);
LABEL_135:
              if ( v71 != 23 )
              {
                v72 = sub_14BFC10((const __m128i *)a1, 0, a3);
                v75 = 0;
                v76 = *(_QWORD *)(a1 + 96);
                v77 = v72 & 0xFFFFFFFFFFFFFFFELL;
                v78 = v77;
                if ( v77 )
                  v75 = (unsigned int)sub_C00A40(v77, 0, 0, v73, v74);
                v28 = v78;
                v38 = 0;
                v116 = sub_19B4A30(v76, v28, v75, 1, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
LABEL_65:
                sub_14808E0((__int64)&v134, (__int64 *)v28, v32, v33, v34, v35);
                if ( v5 )
                {
                  if ( (_DWORD)v164 )
                  {
                    if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >= 0 )
                    {
                      v43 = *(_QWORD **)(a1 + 96);
                      goto LABEL_69;
                    }
                    sub_1564820(&v155, a1, v5, 2135);
                    sub_AEA040((__int64)&v155);
                  }
                  else
                  {
                    sub_1564820(&v155, a1, v5, 1672);
                    v5 = 0;
                    sub_AEA040((__int64)&v155);
                  }
                }
                v45 = *(_QWORD **)(a1 + 96);
                v43 = v45;
                if ( !(_DWORD)v164 )
                {
                  if ( v38 )
                  {
                    v44 = 0;
                    v120 = sub_1A89A90(
                             v45[92],
                             v8,
                             v112 & 0xFFFFFFFFFFFFFFFELL,
                             v119 & 0xFFFFFFFFFFFFFFFELL,
                             HIDWORD(v141));
                    v45 = *(_QWORD **)(a1 + 96);
                  }
                  else if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL) && v112 > 1 )
                  {
                    v44 = 0;
                    sub_1B28470(v45[95], v8, v112 & 0xFFFFFFFFFFFFFFFELL);
                    v45 = *(_QWORD **)(a1 + 96);
                    v120 = 0;
                  }
                  else
                  {
                    v120 = 0;
                    v44 = 0;
                  }
                  goto LABEL_70;
                }
LABEL_69:
                v120 = 0;
                v44 = sub_1C43250(
                        (_DWORD)v43,
                        v43[76],
                        v8,
                        v5,
                        (unsigned int)v112 & 0xFFFFFFFE,
                        (unsigned int)v169 & 0xFFFFFFFE,
                        (_DWORD)v164,
                        v165 & 0xFFFFFFFFFFFFFFFELL,
                        HIDWORD(v141),
                        0,
                        (__int64)ptr,
                        (unsigned int)v167);
                v45 = *(_QWORD **)(a1 + 96);
LABEL_70:
                v46 = (const __m128i *)v45[93];
                v155.m128i_i64[0] = (__int64)v46;
                v47 = v46;
                v155.m128i_i32[2] = v46[2].m128i_i32[0];
                v48 = v46[2].m128i_i64[1];
                LOBYTE(v160) = 0;
                v26 = v46[4].m128i_i8[0] == 0;
                v156 = v48;
                if ( !v26 )
                {
                  v158 = v46[3].m128i_u32[2];
                  if ( v158 > 0x40 )
                  {
                    sub_2205510(&v157);
                    v47 = *(const __m128i **)(*(_QWORD *)(a1 + 96) + 744LL);
                  }
                  else
                  {
                    v157 = v46[3].m128i_i64[0];
                  }
                  v49 = v46[3].m128i_i8[12];
                  LOBYTE(v160) = 1;
                  v159 = v49;
                }
                LOWORD(v161) = v46[4].m128i_i16[4];
                v50 = _mm_loadu_si128(v46 + 5);
                v163 = 1;
                v162 = v50;
                if ( (_DWORD)v164 )
                  sub_1AAA260(v47, v8, v44 & 0xFFFFFFFFFFFFFFFELL);
                else
                  sub_1AAA380(v47, v8, v112 & 0xFFFFFFFFFFFFFFFELL, v114 & 0xFFFFFFFFFFFFFFFELL, v116);
                sub_146B5E0(&v130, a1, 8u, v121, *(_WORD *)(a1 + 32) == 24);
                if ( v124 )
                {
                  v51 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
                  v52 = *(_QWORD *)(v51 + 32);
                  if ( v52 )
                  {
                    --*(_WORD *)(v52 + 14);
                    --*(_WORD *)(v51 + 16);
                  }
                }
                v53 = *(_DWORD *)(a1 + 16);
                v142 = a1;
                v143 = v8;
                v54 = *(_DWORD *)(a1 + 2544);
                LODWORD(v144) = v53;
                v55 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 2296LL);
                LOBYTE(v146) = *(_WORD *)(a1 + 32) == 24;
                v145 = 2;
                HIDWORD(v144) = v55;
                if ( v54 )
                {
                  v56 = *(_DWORD *)(a1 + 2544);
                  *(_DWORD *)(a1 + 2544) = 0;
                  v143 = v56;
                }
                v61 = sub_153D810(a1, a2, 0, v50, a4);
                if ( v61 > 1 )
                  sub_15358C0(&v142, (__int64)a2, v57, v58, v59, v60);
                if ( v130 )
                {
                  sub_1564F70(v130);
                  v130 = 0;
                }
                sub_1AA5CB0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL), v8, v61);
                if ( v129 )
                {
                  sub_1564F70(v129);
                  v129 = 0;
                }
                if ( v61 == 1 )
                {
                  v15 = 1;
                }
                else
                {
                  v62 = *(_QWORD *)(a1 + 96);
                  v63 = v61 & 0xFFFFFFFFFFFFFFFELL;
                  if ( v38 )
                  {
                    v15 = sub_1A86060(*(_QWORD *)(v62 + 736), v120 & 0xFFFFFFFFFFFFFFFELL, v63);
                  }
                  else if ( (_DWORD)v164 )
                  {
                    v15 = sub_1C3E180(v62, v44 & 0xFFFFFFFFFFFFFFFELL, v63);
                  }
                  else
                  {
                    v131.m128i_i64[1] = v114;
                    LOBYTE(v132) = v123;
                    v15 = sub_1C4D120(
                            v62,
                            v8,
                            v141,
                            (unsigned int)v112 & 0xFFFFFFFE,
                            v116,
                            HIDWORD(v141),
                            v118,
                            v114,
                            v123,
                            v63);
                  }
                }
                if ( v130 )
                  sub_1564F70(v130);
                sub_15354C0((__int64)&v155);
                goto LABEL_94;
              }
LABEL_170:
              v116 = 0;
              v38 = 0;
              goto LABEL_65;
            }
            goto LABEL_129;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
          {
            v80 = *(_BYTE *)(a1 + 2040);
            *(_BYTE *)(a1 + 2040) = 1;
            v126 = v80;
            v127 = *(_DWORD *)(a1 + 16);
            LODWORD(v130) = v127;
            sub_14CC110((__int64)&v155, a1, nullptr, v8, 0, 1u, a3, a4, (__int64)&v164, 1);
            a4 = (__m128)_mm_load_si128(&v155);
            v118 = v155.m128i_i64[0];
            v132 = v156;
            v32 = BYTE2(v156);
            v114 = v155.m128i_i64[1];
            v131 = (__m128i)a4;
            v123 = v156;
            v133 = BYTE2(v156);
            v33 = v107;
            v28 = v108;
            if ( (_DWORD)v164 )
            {
              if ( (v112 & 0xFFFFFFFFFFFFFFFELL) != 0 )
              {
                v128 = ((*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 31) & 0x6C) + 1984;
                v81 = sub_EEB7E0(v112 & 0xFFFFFFFFFFFFFFFELL, v108, *(double *)a3.m128i_i64);
                sub_1564820(&v155, a1, v81, v128);
                v82 = sub_EEC8C0(v112 & 0xFFFFFFFFFFFFFFFELL, a1, *(double *)a3.m128i_i64);
                v83 = HIDWORD(v82);
              }
              else
              {
                sub_1564820(
                  &v155,
                  a1,
                  (unsigned int)v164,
                  ((*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 31) & 0x6Cu) + 1984);
                LODWORD(v83) = 0;
                LODWORD(v82) = 0;
              }
              v142 = __PAIR64__(v83, v82);
              v28 = (__int64)&v142;
              LOBYTE(v143) = 1;
              sub_AEC610(v155.m128i_i64, (__int64 *)&v142);
              sub_AEA040((__int64)&v155);
              if ( v40 )
              {
                sub_1564820(&v155, a1, v40, 2137);
                sub_AE9DF0((unsigned __int8 **)&v155, 2, 2u);
                v28 = (__int64)&v142;
                v144 = 0;
                LOBYTE(v145) = 0;
                v148[0] = 0;
                v146 = v148;
                v147 = 0;
                v148[16] = 0;
                LODWORD(v142) = v40;
                HIDWORD(v142) = v40;
                LOBYTE(v143) = 1;
                sub_1535AC0(v155.m128i_i64, (unsigned __int64)&v142);
                if ( v146 != v148 )
                  operator delete(v146);
                sub_AEA040((__int64)&v155);
              }
            }
            v84 = *(_QWORD *)(a1 + 96);
            if ( v123 )
            {
              v85 = &v130;
              if ( v127 != *(_DWORD *)(a1 + 16) )
                v85 = (__int64 *)(a1 + 40);
              v28 = (unsigned int)v130;
              v86 = sub_18C4330(
                      v84,
                      (unsigned int)v130,
                      *(unsigned int *)v85,
                      0,
                      0,
                      *(_QWORD *)(*(_QWORD *)(v84 + 248) + 18640LL));
              if ( v86 == 1 )
              {
                v84 = *(_QWORD *)(a1 + 96);
              }
              else
              {
                v28 = *(_QWORD *)(a1 + 96);
                sub_1917B40((unsigned int)&v155, v28, *(_QWORD *)(v28 + 608), v8, v86 & 0xFFFFFFFE, 0, 0);
                v84 = *(_QWORD *)(a1 + 96);
                v118 = v155.m128i_i64[0];
                v131 = _mm_load_si128(&v155);
                v114 = v155.m128i_i64[1];
                v123 = v156;
                v132 = v156;
                v133 = BYTE2(v156);
                v32 = v108;
              }
            }
            *(_BYTE *)(a1 + 2040) = v126;
          }
          else
          {
            sub_15ED420(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 6);
            v28 = 0;
            v114 = sub_14BFC10((const __m128i *)a1, 0, a3);
            if ( v114 == 1 )
            {
              v131.m128i_i64[0] = 0;
              v84 = *(_QWORD *)(a1 + 96);
              v131.m128i_i64[1] = 1;
              LOBYTE(v132) = 1;
              v133 = 0;
              v123 = 1;
              v118 = 0;
            }
            else
            {
              v28 = *(_QWORD *)(a1 + 96);
              sub_1917B40((unsigned int)&v155, v28, *(_QWORD *)(v28 + 608), v8, v114 & 0xFFFFFFFE, 0, 1);
              v84 = *(_QWORD *)(a1 + 96);
              v118 = v155.m128i_i64[0];
              v131 = _mm_load_si128(&v155);
              v114 = v155.m128i_i64[1];
              v123 = v156;
              v132 = v156;
              v133 = BYTE2(v156);
            }
          }
LABEL_154:
          v42 = *(_QWORD *)(v84 + 608);
          if ( (*(_BYTE *)(v42 + 8) & 4) != 0 )
          {
LABEL_131:
            if ( (_DWORD)v164 )
              goto LABEL_170;
            if ( *(_WORD *)(a1 + 32) != 63 )
            {
              if ( v123 )
                goto LABEL_134;
              goto LABEL_175;
            }
            goto LABEL_176;
          }
LABEL_130:
          v28 = 6;
          sub_15ED420(v42, 6);
          goto LABEL_131;
        }
        v69 = *(__int64 **)(a1 + 8);
LABEL_183:
        v28 = (__int64)v6;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v69, v6);
        v119 = 0;
LABEL_53:
        if ( v30 )
        {
LABEL_54:
          v37 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
          if ( (*(_BYTE *)(v37 + 8) & 4) == 0 )
          {
            v28 = 6;
            sub_15ED420(v37, 6);
          }
          v114 = 0;
          v38 = 1;
          v123 = 0;
          v118 = 0;
          v116 = 0;
          goto LABEL_65;
        }
        v40 = 0;
        goto LABEL_62;
      }
      v94 = sub_1C36AD0(v65, v110 & 0xFFFFFFFFFFFFFFFELL);
      v69 = *(__int64 **)(a1 + 8);
      v112 = v94;
      if ( *(_WORD *)(a1 + 32) == 63 )
        goto LABEL_183;
LABEL_178:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v69, v6);
      if ( *(_WORD *)(a1 + 32) == 3 )
      {
        v95 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v95 + 760) )
        {
          *(_BYTE *)(v95 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v95 + 48) + 6LL) = 1;
        }
        v96 = *(_QWORD *)(a1 + 96);
        v15 = 1;
        *(_WORD *)(a1 + 32) = 1;
        sub_172BCD0(*(_QWORD *)(v96 + 656), *(_QWORD *)(v96 + 608), 0);
        goto LABEL_94;
      }
      v28 = 0;
      v119 = sub_14BFC10((const __m128i *)a1, 0, a3);
      goto LABEL_54;
    }
    v69 = *(__int64 **)(a1 + 8);
    if ( *(_WORD *)(a1 + 32) == 63 )
    {
      v112 = 0;
      goto LABEL_183;
    }
    if ( v64 )
    {
      v112 = 0;
      goto LABEL_178;
    }
    v155.m128i_i16[0] = 23;
    v28 = (__int64)&v155;
    sub_15680D0(a1, &v155, 1, 3);
    if ( *(_WORD *)(a1 + 32) == 63 )
    {
      v105 = *(__int64 **)(a1 + 8);
      v28 = (__int64)v6;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v105, v6);
    }
LABEL_125:
    v40 = 0;
    v119 = 0;
    v112 = 0;
    goto LABEL_62;
  }
LABEL_32:
  v122 = *(_WORD *)(a1 + 88);
  v115 = *(_WORD *)(a1 + 90);
  v113 = *(_WORD *)(a1 + 92);
  if ( !v124 )
  {
    sub_1564840(&v155, a1, v6, 1951);
    sub_AEA040((__int64)&v155);
    sub_1564840(&v155, a1, v6, 2146);
    sub_AEA040((__int64)&v155);
  }
  v20 = *(_DWORD *)(a1 + 16);
  LODWORD(v130) = 0;
  v111 = v20;
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  v22 = *(_WORD *)(a1 + 32);
  if ( (*(_BYTE *)(v21 + 1) & 8) != 0 )
  {
    if ( v22 != 153 )
    {
      v68 = *(_BYTE *)(a1 + 2040);
      *(_BYTE *)(a1 + 2040) = 1;
      v155.m128i_i64[0] = 0;
      v125 = v68;
      v155.m128i_i64[1] = (__int64)&v157;
      v156 = 0x200000000LL;
      v162.m128i_i64[0] = 0x200000000LL;
      v27 = &v164;
      v160 = a1 + 504;
      v161 = &v162.m128i_i8[8];
      goto LABEL_41;
    }
LABEL_117:
    v30 = 0;
    v28 = sub_14C6120(a1, 9, (__int64)v149, a3, a4);
    v119 = 0;
    v112 = sub_1C36280(*(_QWORD *)(a1 + 96), v28, v111, *(unsigned int *)(a1 + 16));
    goto LABEL_44;
  }
  if ( v22 == 119 || v22 == 166 )
  {
    v30 = 0;
    sub_1481E50(a1, (__int64)v149, 0);
    v70 = sub_14A4C70(a1, &v130);
    v28 = sub_17A2530(*(_QWORD *)(a1 + 96), v70, 0);
    v119 = 0;
    v112 = sub_1C36280(*(_QWORD *)(a1 + 96), v28, v111, *(unsigned int *)(a1 + 16));
    goto LABEL_44;
  }
  if ( v22 == 153 )
    goto LABEL_117;
  v23 = *(_BYTE *)(a1 + 2040);
  v24 = *(_BYTE *)(v21 + 2);
  v155.m128i_i64[0] = 0;
  v160 = a1 + 504;
  v125 = v23;
  v25 = v24 & 4;
  *(_BYTE *)(a1 + 2040) = v25 != 0;
  v26 = (_BYTE)v25 == 0;
  v27 = nullptr;
  v155.m128i_i64[1] = (__int64)&v157;
  if ( !v26 )
    v27 = &v164;
  v156 = 0x200000000LL;
  v161 = &v162.m128i_i8[8];
  v162.m128i_i64[0] = 0x200000000LL;
LABEL_41:
  v117 = sub_14972B0((__m128i *)a1, 9, &v130, (__int64)v149, v155.m128i_i64, 0, a3, a4, (__int64)v27, nullptr);
  v112 = sub_1C36280(*(_QWORD *)(a1 + 96), v117, v111, *(unsigned int *)(a1 + 16));
  if ( (_DWORD)v164 )
  {
    v28 = a1;
    v29 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0);
    LOBYTE(v29) = v29 & 0x7A;
    sub_1564820(&v142, a1, (unsigned int)v164, (unsigned int)(v29 + 2117));
    v30 = 0;
    sub_AEA040((__int64)&v142);
    v31 = v112;
    v119 = 0;
    v112 = 0;
    v169 = v31;
LABEL_43:
    sub_147A450(&v155);
    *(_BYTE *)(a1 + 2040) = v125;
LABEL_44:
    v36 = *(_DWORD *)(a1 + 2792);
    if ( v36 )
    {
      v33 = *(unsigned __int16 *)(a1 + 88);
      v28 = 3LL * v36;
      v32 = *(_QWORD *)(a1 + 2784) + 24LL * v36 - 24;
      do
      {
        if ( (_WORD)v33 == *(_WORD *)(v32 + 14) )
        {
          v28 = *(unsigned int *)(a1 + 90);
          if ( *(_DWORD *)(v32 + 16) == (_DWORD)v28 )
            goto LABEL_47;
        }
        else if ( (unsigned __int16)v33 > *(_WORD *)(v32 + 14) )
        {
          goto LABEL_47;
        }
        v28 = *(unsigned __int16 *)(v32 + 16);
        if ( *(_WORD *)(a1 + 90) <= (unsigned __int16)v28 )
        {
          v28 = *(unsigned __int16 *)(v32 + 18);
          if ( *(_WORD *)(a1 + 92) <= (unsigned __int16)v28 )
            break;
        }
LABEL_47:
        --v36;
        v32 -= 24;
        *(_DWORD *)(a1 + 2792) = v36;
      }
      while ( v36 );
    }
    *(_WORD *)(a1 + 88) = v122;
    *(_WORD *)(a1 + 90) = v115;
    *(_WORD *)(a1 + 92) = v113;
    goto LABEL_53;
  }
  if ( *(_WORD *)(a1 + 32) == 63 )
  {
    v97 = *(__int64 **)(a1 + 8);
    v28 = (__int64)v6;
    v30 = 0;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v97, v6);
    v119 = 0;
    goto LABEL_43;
  }
  v30 = sub_14F5220(a1);
  if ( !v30 )
  {
    v28 = a1;
    sub_1564840(&v142, a1, v6, 1649);
    sub_AEA040((__int64)&v142);
    v119 = 0;
    goto LABEL_43;
  }
  sub_1C36310(*(_QWORD *)(a1 + 96), v117);
  v87 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v87, v6);
  if ( *(_WORD *)(a1 + 32) != 3 )
  {
    v28 = 0;
    v119 = sub_14BFC10((const __m128i *)a1, 0, a3);
    goto LABEL_43;
  }
  v88 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v88 + 760) )
  {
    *(_BYTE *)(v88 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v88 + 48) + 6LL) = 1;
  }
  v89 = *(_QWORD *)(a1 + 96);
  v15 = 1;
  *(_WORD *)(a1 + 32) = 1;
  sub_172BCD0(*(_QWORD *)(v89 + 656), *(_QWORD *)(v89 + 608), v117);
  sub_147A450(&v155);
  *(_BYTE *)(a1 + 2040) = v125;
  v90 = *(_DWORD *)(a1 + 2792);
  if ( v90 )
  {
    v91 = *(_WORD *)(a1 + 88);
    v92 = *(_QWORD *)(a1 + 2784) + 24LL * v90 - 24;
    do
    {
      if ( v91 == *(_WORD *)(v92 + 14) )
      {
        if ( *(_DWORD *)(v92 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_164;
      }
      else if ( v91 > *(_WORD *)(v92 + 14) )
      {
        goto LABEL_164;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v92 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v92 + 18) )
        break;
LABEL_164:
      --v90;
      v92 -= 24;
      *(_DWORD *)(a1 + 2792) = v90;
    }
    while ( v90 );
  }
  *(_WORD *)(a1 + 88) = v122;
  *(_WORD *)(a1 + 90) = v115;
  *(_WORD *)(a1 + 92) = v113;
LABEL_94:
  sub_147A450(v149);
LABEL_14:
  if ( ptr != v168 )
    free(ptr);
  v16 = v129;
  *v134 = v135;
  if ( v16 )
    sub_1564F70(v16);
  return v15;
}
