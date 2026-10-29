__int64 __fastcall sub_16D2BC0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        double a7,
        double a8,
        unsigned int a9,
        int a10)
{
  unsigned __int64 v10; // rbp
  int v12; // r14d
  unsigned int v13; // r15d
  __m128i si128; // xmm0
  __int64 v15; // rax
  int v16; // r12d
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rax
  bool v19; // cf
  int v20; // eax
  __int64 *v21; // rsi
  unsigned int v22; // ecx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 result; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 *v34; // r11
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // r11
  __int64 v45; // rax
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  char *v57; // rdi
  size_t v58; // r9
  int v59; // eax
  unsigned __int64 v60; // r8
  int v61; // eax
  int v62; // eax
  __int64 v63; // rbp
  unsigned int v64; // r13d
  unsigned int v65; // r14d
  _QWORD *v66; // rdi
  __int64 v67; // rsi
  __int64 *v68; // rsi
  unsigned int v69; // ecx
  __int64 *v70; // rsi
  unsigned __int64 v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  __int64 *v80; // r11
  __int64 v81; // rdx
  __int64 *v82; // rax
  unsigned __int8 v83; // al
  _BOOL4 v84; // eax
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v91; // r11
  _QWORD *v92; // rax
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r11
  _QWORD *v96; // r15
  unsigned __int64 v97; // rbp
  __int64 v98; // rsi
  const __m128i *v99; // r13
  unsigned __int64 v100; // r15
  __int64 v101; // rsi
  __int64 v102; // rbp
  __int64 v103; // r8
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 *v108; // r11
  __int64 v109; // rsi
  __int64 v110; // rsi
  char v111; // al
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  char v116; // al
  __int64 *v117; // rsi
  unsigned int v118; // ecx
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  unsigned int v128; // edx
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rax
  _BOOL4 v132; // eax
  _QWORD *v133; // rax
  unsigned int v134; // eax
  unsigned __int64 v135; // rsi
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 *v138; // r11
  unsigned __int64 v139; // rax
  bool v140; // al
  unsigned int v141; // eax
  unsigned __int64 v142; // rsi
  __int64 *v143; // r11
  __int64 v144; // rax
  unsigned int v145; // eax
  unsigned int v146; // eax
  char v147; // dl
  unsigned int v148; // eax
  __int64 v149; // r12
  __int64 v150; // [rsp-8h] [rbp-290h]
  __int64 *v151; // [rsp+0h] [rbp-288h]
  __int64 v152; // [rsp+0h] [rbp-288h]
  __int64 v153; // [rsp+0h] [rbp-288h]
  __int64 *v154; // [rsp+0h] [rbp-288h]
  __int64 *v155; // [rsp+0h] [rbp-288h]
  unsigned int v156; // [rsp+8h] [rbp-280h]
  int v158; // [rsp+10h] [rbp-278h]
  __int64 *v159; // [rsp+10h] [rbp-278h]
  __int64 *v160; // [rsp+10h] [rbp-278h]
  __int64 v161; // [rsp+10h] [rbp-278h]
  unsigned __int64 v163; // [rsp+18h] [rbp-270h]
  bool v164; // [rsp+20h] [rbp-268h]
  __int64 *v165; // [rsp+20h] [rbp-268h]
  __int64 *v166; // [rsp+20h] [rbp-268h]
  unsigned __int64 src; // [rsp+28h] [rbp-260h]
  void *srcj; // [rsp+28h] [rbp-260h]
  __int64 *srca; // [rsp+28h] [rbp-260h]
  __int64 *srcb; // [rsp+28h] [rbp-260h]
  void *srcc; // [rsp+28h] [rbp-260h]
  bool srcd; // [rsp+28h] [rbp-260h]
  unsigned __int64 *srck; // [rsp+28h] [rbp-260h]
  void *srcl; // [rsp+28h] [rbp-260h]
  __int64 *srcm; // [rsp+28h] [rbp-260h]
  __int64 *srce; // [rsp+28h] [rbp-260h]
  __int64 *srcn; // [rsp+28h] [rbp-260h]
  __int64 *srcf; // [rsp+28h] [rbp-260h]
  __int64 *srcg; // [rsp+28h] [rbp-260h]
  __int64 *srco; // [rsp+28h] [rbp-260h]
  __int64 *srch; // [rsp+28h] [rbp-260h]
  void *srcp; // [rsp+28h] [rbp-260h]
  __int64 *srcq; // [rsp+28h] [rbp-260h]
  __int64 *srci; // [rsp+28h] [rbp-260h]
  unsigned __int64 *v185; // [rsp+30h] [rbp-258h]
  unsigned __int64 v186; // [rsp+30h] [rbp-258h]
  __int64 *v187; // [rsp+30h] [rbp-258h]
  unsigned __int64 v188; // [rsp+30h] [rbp-258h]
  __int64 *v189; // [rsp+30h] [rbp-258h]
  __int64 v190; // [rsp+38h] [rbp-250h]
  int v191; // [rsp+40h] [rbp-248h]
  __int64 *v192; // [rsp+40h] [rbp-248h]
  __int64 *v193; // [rsp+40h] [rbp-248h]
  unsigned __int64 v194; // [rsp+48h] [rbp-240h]
  __int64 *v195; // [rsp+48h] [rbp-240h]
  __int64 v196; // [rsp+58h] [rbp-230h]
  __int64 v197; // [rsp+58h] [rbp-230h]
  int v198; // [rsp+64h] [rbp-224h]
  __int64 v199; // [rsp+68h] [rbp-220h] BYREF
  bool v200; // [rsp+7Fh] [rbp-209h] BYREF
  unsigned int v201; // [rsp+80h] [rbp-208h] BYREF
  int v202; // [rsp+84h] [rbp-204h] BYREF
  __int64 v203; // [rsp+88h] [rbp-200h] BYREF
  __int64 v204; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v205; // [rsp+98h] [rbp-1F0h] BYREF
  __int64 v206; // [rsp+A0h] [rbp-1E8h] BYREF
  unsigned int v207; // [rsp+A8h] [rbp-1E0h]
  char v208; // [rsp+B0h] [rbp-1D8h]
  __int64 v209; // [rsp+C0h] [rbp-1C8h] BYREF
  unsigned int v210; // [rsp+C8h] [rbp-1C0h]
  char v211; // [rsp+D0h] [rbp-1B8h]
  _OWORD v212[2]; // [rsp+E0h] [rbp-1A8h]
  __int64 v213; // [rsp+100h] [rbp-188h]
  int v214; // [rsp+108h] [rbp-180h]
  _OWORD v215[2]; // [rsp+110h] [rbp-178h]
  __int64 v216; // [rsp+130h] [rbp-158h]
  int v217; // [rsp+138h] [rbp-150h]
  void *v218; // [rsp+140h] [rbp-148h] BYREF
  __int64 v219; // [rsp+148h] [rbp-140h]
  _BYTE dest[48]; // [rsp+150h] [rbp-138h] BYREF
  void *ptr; // [rsp+180h] [rbp-108h] BYREF
  __int64 v222; // [rsp+188h] [rbp-100h]
  _BYTE v223[48]; // [rsp+190h] [rbp-F8h] BYREF
  __m128i v224; // [rsp+1C0h] [rbp-C8h] BYREF
  unsigned __int64 v225; // [rsp+1D0h] [rbp-B8h]
  int v226; // [rsp+1D8h] [rbp-B0h]
  __int64 v227; // [rsp+1E0h] [rbp-A8h]

  v10 = a6;
  v12 = a9;
  v213 = 0x200000006LL;
  v212[0] = _mm_load_si128((const __m128i *)&xmmword_23AA8D0);
  v13 = a9 - 40;
  v212[1] = _mm_load_si128((const __m128i *)&xmmword_23AA8E0);
  v156 = a9 - 65;
  v215[0] = _mm_load_si128((const __m128i *)&xmmword_23AA8F0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA900);
  v199 = a3;
  v214 = 2;
  v215[1] = si128;
  v216 = 3;
  v217 = 0;
  if ( a9 - 26 <= 0xD )
  {
    v200 = 1;
    goto LABEL_13;
  }
  v200 = a9 - 52 <= 0xC;
  if ( a9 <= 0x16 )
  {
    v15 = 4259920;
    if ( _bittest64(&v15, a9) )
    {
      v164 = 1;
      goto LABEL_5;
    }
    goto LABEL_13;
  }
  v164 = a9 == 86 || a9 == 80;
  if ( !v164 )
LABEL_13:
    v164 = (a9 & 0xFFFFFFFD) == 68;
  if ( a9 > 0x58 )
  {
    v18 = 2;
    v17 = 0;
    v158 = 0;
    v16 = 0;
    v201 = 2;
    goto LABEL_16;
  }
LABEL_5:
  v16 = byte_26402A0[a9];
  v17 = byte_26402A0[a9];
  v158 = byte_2640240[a9];
  v18 = *((unsigned int *)v212 + v17);
  v201 = *((_DWORD *)v212 + v17);
  if ( v13 <= 0x18 )
  {
    if ( a9 == 62 )
      goto LABEL_7;
    goto LABEL_17;
  }
LABEL_16:
  if ( v156 > 0x17 )
  {
LABEL_7:
    v19 = v18 < a6;
    if ( v18 <= a6 )
      goto LABEL_8;
LABEL_18:
    v21 = (__int64 *)(a1 + 8);
    v23 = HIDWORD(a2);
    v22 = 5224;
    goto LABEL_10;
  }
LABEL_17:
  v18 = (unsigned int)(v18 + 1);
  v201 = v18;
  v19 = v18 < a6;
  if ( v18 > a6 )
    goto LABEL_18;
LABEL_8:
  if ( v19 )
  {
    v20 = sub_EEB7E0(a5[v18], a2, *(double *)si128.m128i_i64);
    v21 = (__int64 *)(a1 + 8);
    v22 = 5230;
    LODWORD(v23) = v20;
LABEL_10:
    sub_168B9F0((__int64)&v224, v21, v23, v22, 0);
    LODWORD(v209) = 0;
    v24 = sub_1587D10((__int64)&v224, (int *)&v209);
    v25 = sub_1588370(v24, &v201);
    LODWORD(v218) = v10;
    v26 = sub_16CF160(v25, (unsigned int *)&v218);
    LODWORD(ptr) = 0;
    v27 = sub_1587D10(v26, (int *)&ptr);
    sub_15884C0(v27, &v199);
    sub_15F7200(&v224);
    return 1;
  }
  v30 = *a5;
  v31 = sub_19179A0(a1, *a5, 1);
  v34 = a5;
  if ( v31 == 1 )
    return 1;
  v163 = v31 & 0xFFFFFFFFFFFFFFFELL;
  src = *(_QWORD *)((v31 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v35 = *(_QWORD *)(src & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v35 + 16) != 42 )
  {
    v73 = *(_QWORD *)(src & 0xFFFFFFFFFFFFFFF0LL);
    srck = v34;
    v74 = sub_16B68B0(v73, v30, v32, v33);
    v34 = srck;
    v35 = v74;
    if ( !v74 )
    {
      sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v199, 0xC32u, 0);
      v218 = *(void **)(v163 + 8);
      v75 = sub_162B6D0((__int64)&v224, (__int64 *)&v218);
      v70 = &v209;
      LODWORD(v209) = 0;
      v71 = v163;
      v72 = sub_1587D10(v75, (int *)&v209);
      goto LABEL_73;
    }
  }
  v36 = *(_QWORD *)(v35 + 32);
  v203 = v36;
  v204 = v36;
  if ( v200 )
  {
    v30 = v36 & 0xFFFFFFFFFFFFFFF0LL;
    v37 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 7 )
    {
      v68 = (__int64 *)(a1 + 8);
      v69 = 3129;
      goto LABEL_72;
    }
    if ( (unsigned int)(v16 - 1) <= 1 )
    {
      v38 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
    }
    else
    {
      if ( (v36 & 1) != 0 )
        goto LABEL_90;
      v38 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v38 & 1) != 0 )
        goto LABEL_90;
    }
    if ( (v38 & 8) != 0 )
    {
      v30 = v38 & 0xFFFFFFFFFFFFFFF0LL;
      v36 = (*(_DWORD *)((char *)&qword_18 + (v38 & 0xFFFFFFFFFFFFFFF0LL))
           | ((unsigned __int8)v38 | (unsigned __int8)v36) & 7u) >> 9;
      if ( (_DWORD)v36 == 3 )
      {
LABEL_90:
        sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v199, 0xC3Fu, 0);
        v84 = 0;
        if ( (v203 & 1) == 0 )
          v84 = (*(_QWORD *)&byte_8[v203 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0;
        LODWORD(v209) = v84;
        v85 = sub_1587D10((__int64)&v224, (int *)&v209);
        v218 = *(void **)(v163 + 8);
        v86 = sub_162B6D0(v85, (__int64 *)&v218);
        ptr = (void *)sub_EEC8C0(v163, (__int64)&v218, *(double *)si128.m128i_i64);
        sub_1587DB0(v86, (__int64 *)&ptr);
        sub_15F7200(&v224);
        return 1;
      }
    }
    if ( *(_BYTE *)(v37 + 16) != 7 )
    {
      v185 = v34;
      srcj = (void *)v35;
      v37 = sub_F63050(v37, v30, v36, v38);
      v34 = v185;
      v35 = (__int64)srcj;
    }
    v204 = *(_QWORD *)(v37 + 32);
  }
  else if ( (unsigned int)(v16 - 1) > 1 && ((v36 & 1) != 0 || (byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
  {
    v68 = (__int64 *)(a1 + 8);
    v69 = 3136;
    goto LABEL_72;
  }
  srca = (__int64 *)v34;
  if ( (unsigned int)(v16 - 9) > 1 )
  {
    v39 = sub_EEB7E0(v163, v30, *(double *)si128.m128i_i64);
    if ( !(unsigned __int8)sub_1E63CF0(a1, v39, v203, 1, 3968) )
    {
      v40 = *(_QWORD *)(a1 + 248);
      sub_AAE960((__int64)&v224, v40, v203);
      v44 = srca;
      if ( !v224.m128i_i64[0] )
      {
        sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v199, 0xC32u, 0);
        v218 = *(void **)(v163 + 8);
        v121 = sub_162B6D0((__int64)&v224, (__int64 *)&v218);
        LODWORD(v209) = 1;
        v122 = sub_1587D10(v121, (int *)&v209);
        ptr = (void *)sub_EEC8C0(v163, (__int64)&v209, *(double *)si128.m128i_i64);
        sub_1587DB0(v122, (__int64 *)&ptr);
        sub_15F7200(&v224);
        return 1;
      }
      v45 = *(_QWORD *)&byte_8[v203 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v45 & 8) == 0 )
        goto LABEL_34;
      goto LABEL_94;
    }
    return 1;
  }
  v76 = *(_QWORD *)(a1 + 248);
  v77 = *(_QWORD *)(v76 + 18648) & 0xFFFFFFFFFFFFFFF8LL
      | *(_DWORD *)&byte_8[*(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 7
      | *(_DWORD *)(v35 + 32) & 7
      | (unsigned int)(*(_QWORD *)(v76 + 18648) & 7);
  v203 = v77;
  v78 = sub_A70010(v76, v77);
  v80 = srca;
  v81 = v78;
  v82 = (__int64 *)(v78 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v82 + 16) != 42 )
  {
    v189 = srca;
    srcl = (void *)v81;
    sub_16B68B0(*v82, v77, v81, v79);
    v80 = v189;
    v81 = (__int64)srcl;
  }
  srcm = v80;
  v40 = v163;
  v163 = sub_160A600(a1, v163, v81, 1u, 0, 0, *(double *)si128.m128i_i64, a8, 0) & 0xFFFFFFFFFFFFFFFELL;
  v204 = v203;
  v45 = *(_QWORD *)&byte_8[v203 & 0xFFFFFFFFFFFFFFF0LL];
  v43 = v150;
  v44 = srcm;
  if ( (v45 & 8) == 0 )
    goto LABEL_83;
LABEL_94:
  v87 = *(unsigned int *)((char *)&qword_18 + (v45 & 0xFFFFFFFFFFFFFFF0LL) + 4);
  if ( v87 && (v87 & 2) != 0 )
  {
    sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v199, 0xC3Eu, 0);
    LODWORD(v209) = 0;
    v88 = sub_1587D10((__int64)&v224, (int *)&v209);
LABEL_97:
    v70 = (__int64 *)&v218;
    v218 = *(void **)(v163 + 8);
    v71 = v163;
    v72 = sub_162B6D0(v88, (__int64 *)&v218);
    goto LABEL_73;
  }
LABEL_34:
  if ( v16 != 4 )
  {
LABEL_83:
    if ( !v164
      || (v160 = v44, v116 = sub_9EC890(*(_QWORD *)(v204 & 0xFFFFFFFFFFFFFFF0LL), v40, v41, v42, v43), v44 = v160, v116)
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v204 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 42 )
    {
      v83 = v200;
      goto LABEL_85;
    }
    v117 = (__int64 *)(a1 + 8);
    v118 = 3132;
    goto LABEL_151;
  }
  srcb = v44;
  v186 = v204 & 0xFFFFFFFFFFFFFFF0LL;
  v46 = sub_9EC890(*(_QWORD *)(v204 & 0xFFFFFFFFFFFFFFF0LL), v40, v204 & 0xFFFFFFFFFFFFFFF0LL, v42, v43);
  v44 = srcb;
  if ( v46 )
    goto LABEL_42;
  v49 = *(_QWORD *)v186;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v186 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    if ( (v158 & 1) != 0 )
      goto LABEL_42;
LABEL_163:
    if ( (v158 & 2) != 0 )
    {
LABEL_164:
      v118 = 2 * (v158 != 2) + 3131;
LABEL_165:
      v117 = (__int64 *)(a1 + 8);
LABEL_151:
      sub_168B9F0((__int64)&v224, v117, v199, v118, 0);
      v88 = sub_15890D0((__int64)&v224, (unsigned __int8 *)&v200);
      goto LABEL_97;
    }
LABEL_186:
    v118 = 3130;
    goto LABEL_165;
  }
  v187 = srcb;
  srcc = (void *)(v204 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !sub_F58060(v49) )
    goto LABEL_163;
  v44 = v187;
  if ( (v158 & 2) == 0 )
    goto LABEL_186;
  v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)srcc + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v50 + 16) == 13 && ((*(_WORD *)(v50 + 18) >> 3) & 0x1FF) == 0x1E3 )
  {
    v51 = sub_21F90E0(v49, v40, srcc);
    v44 = v187;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 112LL) == v51 )
      goto LABEL_164;
  }
LABEL_42:
  if ( !v200 )
  {
LABEL_143:
    v110 = *(_QWORD *)(a1 + 248);
    v159 = v44;
    v111 = sub_F62A70(&v203, v110);
    v44 = v159;
    if ( v111 )
      goto LABEL_86;
    if ( sub_F61140(*(_QWORD *)(v203 & 0xFFFFFFFFFFFFFFF0LL), v110, v112, v113, v114, v115) )
    {
      v52 = v204;
      v44 = v159;
      goto LABEL_44;
    }
    v68 = (__int64 *)(a1 + 8);
    v69 = 3137;
LABEL_72:
    sub_168B9F0((__int64)&v224, v68, v199, v69, 0);
    v70 = (__int64 *)&v218;
    v218 = *(void **)(v163 + 8);
    v71 = v163;
    v72 = sub_162B6D0((__int64)&v224, (__int64 *)&v218);
LABEL_73:
    ptr = (void *)sub_EEC8C0(v71, (__int64)v70, *(double *)si128.m128i_i64);
    sub_1587DB0(v72, (__int64 *)&ptr);
    sub_15F7200(&v224);
    return 1;
  }
  v52 = v204;
  v53 = *(_QWORD *)(v204 & 0xFFFFFFFFFFFFFFF0LL);
  v54 = *(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v54 + 16) == 42 )
  {
    srci = v44;
    v161 = sub_F68450(v53, v40, v54, v47, v48);
    v146 = sub_EEB7E0(v163, v40, *(double *)si128.m128i_i64);
    v147 = sub_1E63CF0(a1, v146, v161, 1, 3968);
    result = 1;
    if ( v147 )
      return result;
    v83 = v200;
    v44 = srci;
LABEL_85:
    if ( v83 )
    {
LABEL_86:
      v52 = v204;
      goto LABEL_44;
    }
    goto LABEL_143;
  }
LABEL_44:
  if ( (*(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
    && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
      & 7)
     - 2 <= 2 )
  {
    sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v199, 0xBC6u, 0);
    v70 = &v204;
    v71 = v163;
    v72 = sub_1605D30((__int64)&v224, &v204);
    goto LABEL_73;
  }
  v55 = v52 & 0xFFFFFFFFFFFFFFFALL;
  v56 = 1101;
  v19 = _bittest64(&v56, v17);
  v188 = v55;
  v204 = v55;
  v190 = v55;
  if ( v19 )
  {
    v190 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL);
  }
  else if ( (unsigned int)(v16 - 7) <= 2 )
  {
    v190 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL);
  }
  srcd = 0;
  if ( !v200 )
  {
    srcd = !v164 && v13 > 0xB;
    if ( srcd )
      v188 = *(_QWORD *)(v163 + 8);
  }
  v57 = dest;
  v218 = dest;
  v219 = 0x500000000LL;
  if ( a10 != 1 )
  {
    v58 = 8 * v10;
    v59 = 0;
    v60 = (__int64)(8 * v10) >> 3;
    if ( v60 > 5 )
    {
      v195 = v44;
      sub_2237220(&v218, dest, (__int64)(8 * v10) >> 3, 8);
      v44 = v195;
      v58 = 8 * v10;
      v59 = v219;
      v60 = (__int64)(8 * v10) >> 3;
      v57 = (char *)v218 + 8 * (unsigned int)v219;
    }
    if ( v58 )
    {
      v191 = v60;
      v165 = v44;
      memcpy(v57, v44, v58);
      LODWORD(v60) = v191;
      v44 = v165;
      v59 = v219;
    }
    LODWORD(v219) = v60 + v59;
    v61 = v60 + v59;
LABEL_57:
    if ( !v61 )
    {
LABEL_130:
      srce = v44;
      ptr = v223;
      v222 = 0x500000000LL;
      sub_14B7B40((__int64)&ptr, v163);
      v108 = srce;
      switch ( v16 )
      {
        case 1:
        case 9:
        case 10:
          sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 1));
          v91 = srce;
          goto LABEL_99;
        case 2:
        case 3:
        case 4:
        case 5:
          sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 2));
          sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 1));
          v91 = srce;
          goto LABEL_99;
        case 6:
          goto LABEL_141;
        case 7:
          goto LABEL_137;
        case 8:
          goto LABEL_134;
        default:
          sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 1));
          v91 = srce;
          goto LABEL_101;
      }
    }
LABEL_58:
    v194 = v10;
    v62 = *((_DWORD *)v215 + v17);
    v63 = 0;
    v64 = 0;
    v192 = v44;
    v65 = v62 + 1;
    while ( 1 )
    {
      if ( v65 <= v64 )
      {
        v66 = *(_QWORD **)(a1 + 248);
        v67 = v66[2340];
        goto LABEL_64;
      }
      if ( v64 == 1 )
        break;
      if ( v64 )
      {
        if ( v64 != 2 )
        {
          v66 = *(_QWORD **)(a1 + 248);
          v67 = 0;
          if ( v64 == 3 )
            v67 = v66[2330];
          goto LABEL_64;
        }
        if ( srcd )
          sub_16BF5F0(a1, *((_WORD **)v218 + 2), v199, *(double *)si128.m128i_i64);
LABEL_121:
        v66 = *(_QWORD **)(a1 + 248);
        v67 = v188;
        goto LABEL_64;
      }
      sub_16BF5F0(a1, *(_WORD **)v218, v199, *(double *)si128.m128i_i64);
LABEL_66:
      v63 = v64 + 1;
      v64 = v63;
      if ( (_DWORD)v63 == (_DWORD)v219 )
      {
        v12 = a9;
        v44 = v192;
        v10 = v194;
        goto LABEL_130;
      }
    }
    if ( v16 == 4 )
    {
      v67 = v204;
      v66 = *(_QWORD **)(a1 + 248);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v204 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 42 )
      {
        v120 = sub_A63D20(v66);
        v66 = *(_QWORD **)(a1 + 248);
        v67 = v120;
      }
      goto LABEL_64;
    }
    if ( v16 )
    {
      if ( ((v16 - 3) & 0xFFFFFFFD) != 0 )
      {
        v196 = *((_QWORD *)v218 + 1);
        sub_16BF5F0(a1, (_WORD *)v196, v199, *(double *)si128.m128i_i64);
        v125 = *(_QWORD *)(*(_QWORD *)(v196 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v125 + 16) == 42
          || (v125 = sub_16B68B0(*(_QWORD *)(*(_QWORD *)(v196 + 8) & 0xFFFFFFFFFFFFFFF0LL), v196, v123, v124),
              v128 = 0,
              v125) )
        {
          LODWORD(v126) = 0;
          v127 = *(_QWORD *)&byte_8[*(_QWORD *)(v125 + 32) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v127 & 8) != 0 )
            v126 = *(__int64 *)((char *)&qword_18 + (v127 & 0xFFFFFFFFFFFFFFF0LL));
          v128 = (unsigned int)v126 >> 9;
        }
        v198 = v128;
        v197 = *(_QWORD *)(a1 + 248);
        v129 = sub_6D5440(&v204);
        v130 = sub_A70E70(v197, v129, v198);
        v131 = sub_A70010(v197, v130);
        v66 = *(_QWORD **)(a1 + 248);
        v67 = v131;
        goto LABEL_64;
      }
      if ( srcd )
        sub_16BF5F0(a1, *((_WORD **)v218 + 1), v199, *(double *)si128.m128i_i64);
      goto LABEL_121;
    }
    v67 = v204;
    v66 = *(_QWORD **)(a1 + 248);
LABEL_64:
    v224.m128i_i64[1] = 0;
    v226 = 0;
    v224.m128i_i32[0] = 1;
    v225 = sub_A73320(v66, v67);
    v227 = 0;
    result = sub_1A24E20(a1, &v224, 0, *((_QWORD *)v218 + v63), 0, 0);
    if ( result == 1 )
      goto LABEL_117;
    *((_QWORD *)v218 + v63) = result & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_66;
  }
  v166 = v44;
  sub_14B7B40((__int64)&v218, *v44);
  switch ( v16 )
  {
    case 2:
    case 3:
    case 4:
    case 5:
      sub_14B7B40((__int64)&v218, v166[2]);
      sub_14B7B40((__int64)&v218, v166[1]);
      v61 = v219;
      v44 = v166;
      goto LABEL_57;
    case 6:
      sub_14B7B40((__int64)&v218, v166[2]);
      sub_14B7B40((__int64)&v218, v166[3]);
      sub_14B7B40((__int64)&v218, v166[1]);
      v44 = v166;
      if ( (_DWORD)v219 )
        goto LABEL_58;
      ptr = v223;
      v222 = 0x500000000LL;
      sub_14B7B40((__int64)&ptr, v163);
      v108 = v166;
LABEL_141:
      srcf = v108;
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 3));
      v109 = *((_QWORD *)v218 + 1);
      goto LABEL_138;
    case 7:
      sub_14B7B40((__int64)&v218, v166[2]);
      sub_14B7B40((__int64)&v218, v166[4]);
      sub_14B7B40((__int64)&v218, v166[1]);
      sub_14B7B40((__int64)&v218, v166[3]);
      v44 = v166;
      if ( (_DWORD)v219 )
        goto LABEL_58;
      ptr = v223;
      v222 = 0x500000000LL;
      sub_14B7B40((__int64)&ptr, v163);
      v108 = v166;
LABEL_137:
      srcf = v108;
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 3));
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 1));
      v109 = *((_QWORD *)v218 + 4);
LABEL_138:
      sub_14B7B40((__int64)&ptr, v109);
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 2));
      v91 = srcf;
      break;
    case 8:
      sub_14B7B40((__int64)&v218, v166[2]);
      sub_14B7B40((__int64)&v218, v166[4]);
      sub_14B7B40((__int64)&v218, v166[5]);
      sub_14B7B40((__int64)&v218, v166[1]);
      sub_14B7B40((__int64)&v218, v166[3]);
      v44 = v166;
      if ( (_DWORD)v219 )
        goto LABEL_58;
      ptr = v223;
      v222 = 0x500000000LL;
      sub_14B7B40((__int64)&ptr, v163);
      v108 = v166;
LABEL_134:
      srcn = v108;
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 4));
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 1));
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 5));
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 2));
      sub_14B7B40((__int64)&ptr, *((_QWORD *)v218 + 3));
      v91 = srcn;
      break;
    default:
      sub_14B7B40((__int64)&v218, v166[1]);
      v61 = v219;
      v44 = v166;
      goto LABEL_57;
  }
LABEL_99:
  if ( (unsigned int)v222 > 1 && v16 )
  {
    srcg = v91;
    v135 = *((_QWORD *)ptr + 1);
    sub_C3EB00((__int64)&v206, v135, *(_QWORD *)(a1 + 248), nullptr, v89, v90);
    v138 = srcg;
    if ( v208 )
    {
      if ( v207 > 0x40 )
      {
        v139 = *(_QWORD *)v206;
      }
      else
      {
        if ( !v207 )
        {
          LODWORD(v139) = 0;
          goto LABEL_180;
        }
        v139 = v206 << (64 - (unsigned __int8)v207) >> (64 - (unsigned __int8)v207);
      }
      if ( v139 <= 5 )
      {
LABEL_180:
        switch ( v12 )
        {
          case 2:
          case 21:
          case 22:
          case 39:
          case 51:
          case 64:
          case 85:
          case 86:
            v140 = (unsigned int)(v139 - 1) > 1 && (_DWORD)v139 != 4;
            goto LABEL_182;
          case 15:
          case 16:
          case 38:
          case 50:
          case 63:
          case 79:
          case 80:
            v140 = (unsigned int)(v139 - 3) > 1;
LABEL_182:
            if ( v140 )
              goto LABEL_183;
            break;
          default:
            goto LABEL_183;
        }
      }
      v148 = sub_EEB7E0(*((_QWORD *)ptr + 1), v135, *(double *)si128.m128i_i64);
      sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v148, 0x1985u, 0);
      LOBYTE(v205) = (unsigned int)(v16 - 7) <= 1;
      v149 = sub_1588420((__int64)&v224, (unsigned __int8 *)&v205);
      v209 = sub_EEC8C0(*((_QWORD *)ptr + 1), (__int64)&v205, *(double *)si128.m128i_i64);
      sub_1587DB0(v149, &v209);
      sub_15F7200(&v224);
      v138 = srcg;
    }
LABEL_183:
    if ( (unsigned int)v222 > 4 )
    {
      srch = v138;
      v142 = *((_QWORD *)ptr + 3);
      sub_C3EB00((__int64)&v209, v142, *(_QWORD *)(a1 + 248), nullptr, v136, v137);
      v143 = srch;
      if ( v211 )
      {
        if ( v210 > 0x40 )
        {
          v144 = *(_QWORD *)v209;
        }
        else if ( v210 )
        {
          v144 = v209 << (64 - (unsigned __int8)v210) >> (64 - (unsigned __int8)v210);
        }
        else
        {
          LODWORD(v144) = 0;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA910);
        v224 = si128;
        if ( (_DWORD)v144 )
        {
          if ( (_DWORD)v144 != v224.m128i_i32[1]
            && (_DWORD)v144 != v224.m128i_i32[2]
            && (_DWORD)v144 != v224.m128i_i32[3] )
          {
            v193 = srch;
            v145 = sub_EEB7E0(*((_QWORD *)ptr + 3), v142, *(double *)si128.m128i_i64);
            sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v145, 0x1985u, 0);
            v202 = 2;
            srcp = (void *)sub_1587D10((__int64)&v224, &v202);
            v205 = sub_EEC8C0(*((_QWORD *)ptr + 3), (__int64)&v202, *(double *)si128.m128i_i64);
            sub_1587DB0((__int64)srcp, &v205);
            sub_15F7200(&v224);
            v143 = v193;
          }
        }
      }
      srcq = v143;
      sub_98E4B0((__int64)&v209);
      v138 = srcq;
    }
    srco = v138;
    sub_98E4B0((__int64)&v206);
    v91 = srco;
  }
LABEL_101:
  if ( v12 == 62 || a9 - 52 > 0xC )
  {
    if ( v13 <= 0xB )
    {
      v155 = v91;
      v133 = (_QWORD *)operator new(8u);
      v95 = v155;
      v96 = v133;
      *v133 = off_2BC6568;
    }
    else
    {
      if ( v156 > 0x17 )
        goto LABEL_110;
      v154 = v91;
      v119 = (_QWORD *)operator new(8u);
      v95 = v154;
      v96 = v119;
      *v119 = off_2BC65A8;
    }
  }
  else
  {
    v151 = v91;
    v92 = (_QWORD *)operator new(8u);
    v95 = v151;
    v96 = v92;
    *v92 = off_2BC6528;
  }
  v97 = v95[v10 - 1];
  sub_C3EB00((__int64)&v209, v97, *(_QWORD *)(a1 + 248), nullptr, v93, v94);
  if ( v211 )
  {
    v98 = v209;
    if ( v210 > 0x40 )
      v98 = *(_QWORD *)v209;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v96 + 24LL))(v96, v98) )
    {
      v141 = sub_EEB7E0(v97, v98, *(double *)si128.m128i_i64);
      sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v141, 0xC38u, 0);
      v206 = sub_EEC8C0(v97, a1 + 8, *(double *)si128.m128i_i64);
      sub_1587DB0((__int64)&v224, &v206);
      sub_15F7200(&v224);
    }
  }
  sub_98E4B0((__int64)&v209);
  sub_14B7B40((__int64)&ptr, v97);
  (*(void (__fastcall **)(_QWORD *))(*v96 + 8LL))(v96);
LABEL_110:
  v99 = (const __m128i *)ptr;
  v100 = (unsigned int)v222;
  v101 = (unsigned int)v199;
  v102 = sub_EEE9A0(88, *(_QWORD **)(a1 + 248), 8u);
  sub_C03780(v102, v199, v99, v100, v190, v12, a4);
  v104 = (unsigned int)(v12 - 38);
  v105 = v150;
  if ( (unsigned int)v104 <= 0x1A )
  {
    v106 = 100675587;
    if ( _bittest64(&v106, v104) )
    {
      v101 = v102;
      if ( sub_AAFD30(*(_QWORD *)(a1 + 248), v102) )
      {
        sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), *(_DWORD *)(v102 + 76), 0xC37u, 0);
        v132 = 1;
        if ( v12 != 64 )
          v132 = ((0x8004004000000000LL >> v12) & 1) == 0;
        v101 = (__int64)&v209;
        LODWORD(v209) = v132;
        sub_1587D10((__int64)&v224, (int *)&v209);
        sub_15F7200(&v224);
      }
    }
  }
  v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v204 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  result = v102;
  if ( *(_BYTE *)(v107 + 16) == 10 )
  {
    v134 = sub_C00A40(v163, v101, v107, v105, v103);
    sub_168B9F0((__int64)&v224, (__int64 *)(a1 + 8), v134, 0xC2Fu, 0);
    sub_15F7200(&v224);
    result = 1;
  }
  if ( ptr != v223 )
  {
    v152 = result;
    free(ptr);
    result = v152;
  }
LABEL_117:
  if ( v218 != dest )
  {
    v153 = result;
    free(v218);
    return v153;
  }
  return result;
}
