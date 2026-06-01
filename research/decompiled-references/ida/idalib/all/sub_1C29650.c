__int64 __fastcall sub_1C29650(__int64 *a1, __int64 a2, unsigned int a3, unsigned __int64 a4, double a5, __m128 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 **v16; // rax
  __int64 *v17; // rdx
  unsigned __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rcx
  __m128 v21; // xmm0
  __int64 *v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  void **v27; // r8
  char *v28; // r15
  char *v29; // r13
  _BYTE *v30; // rbp
  signed __int64 v31; // rbx
  __int64 *v32; // rax
  unsigned int v33; // eax
  int v34; // eax
  __int64 (*v35)(); // rbx
  size_t v36; // rax
  size_t v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int v42; // r13d
  int v43; // r8d
  int v44; // ecx
  unsigned int v45; // edx
  void *v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rbp
  char *v49; // rax
  _QWORD *v50; // rdi
  unsigned int v52; // eax
  __int64 *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // r12
  int v56; // r8d
  int v57; // r8d
  unsigned int v58; // edx
  int v59; // r8d
  unsigned int v60; // edx
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // rbp
  _BOOL4 v63; // ebx
  unsigned int v64; // r12d
  unsigned int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rsi
  __int64 v70; // rdi
  _QWORD *v71; // rsi
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // rdx
  __int64 *v79; // r14
  _QWORD *v80; // rbx
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 **v85; // rbx
  unsigned int v86; // eax
  unsigned int v87; // r9d
  __int64 **v88; // r8
  _QWORD *v89; // r15
  unsigned int v90; // ebx
  _QWORD *v91; // rbp
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // r15
  __int64 v95; // rbp
  __int64 *v96; // r13
  size_t v97; // rax
  size_t v98; // rax
  unsigned int v99; // ebp
  int v100; // r8d
  int v101; // ecx
  unsigned int v102; // edx
  unsigned __int8 *v103; // r12
  _BYTE *v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // r12
  __int64 v111; // rax
  _QWORD *v112; // rax
  __int64 v113; // r14
  unsigned __int8 *v114; // r12
  _BYTE *v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // r13
  __int64 v122; // rax
  _QWORD *v123; // rax
  __int64 (*v124)(); // r13
  size_t v125; // rax
  size_t v126; // rax
  unsigned int v127; // eax
  __int64 v128; // rbp
  __int64 v129; // rax
  __int64 v130; // rdx
  int v131; // eax
  __int64 v132; // rdx
  int v133; // eax
  size_t v134; // rax
  size_t v135; // rax
  unsigned int v136; // eax
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // r13
  __int64 v141; // r14
  __int64 v142; // r13
  void *v143; // rdi
  __int64 v144; // rdx
  __int64 v145; // rax
  unsigned __int64 v146; // rax
  __m128 *v147; // r14
  unsigned int v148; // edx
  __int64 *v149; // rsi
  __int64 v150; // r13
  __int64 *v151; // rbp
  __int64 v152; // rax
  __int64 v153; // r15
  __int64 *v154; // rax
  __int64 *v155; // r15
  __int64 *v156; // rdi
  _QWORD *v157; // r15
  __int64 v158; // rbx
  __int64 v159; // rax
  unsigned __int64 v160; // rcx
  _BYTE *v161; // rdx
  __int64 v162; // rax
  unsigned int v163; // eax
  __int64 v164; // rdi
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // r12
  __int64 v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // r15
  _BYTE *v173; // rdx
  __int64 v174; // rax
  __int64 v175; // rdx
  int v176; // eax
  __int64 v177; // r12
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rdx
  int v181; // eax
  __int64 v182; // rbp
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // r12
  __int64 v187; // r14
  __int64 v188; // rax
  __int64 v189; // r13
  __int64 v190; // rdx
  unsigned __int64 v191; // r12
  __int64 v192; // rbp
  __int64 v193; // rbx
  void *v194; // rdi
  __int64 v195; // rax
  __int64 v196; // r12
  __int64 v197; // r15
  __int64 v198; // r12
  void *v199; // rdi
  __int64 *v200; // [rsp+0h] [rbp-198h] BYREF
  __int64 **v201; // [rsp+8h] [rbp-190h]
  __int64 *v202; // [rsp+10h] [rbp-188h]
  __int64 *v203; // [rsp+18h] [rbp-180h]
  unsigned int v204; // [rsp+24h] [rbp-174h]
  _QWORD *v205; // [rsp+28h] [rbp-170h] BYREF
  void **v206; // [rsp+30h] [rbp-168h]
  unsigned __int64 v207; // [rsp+38h] [rbp-160h] BYREF
  __int64 v208; // [rsp+40h] [rbp-158h] BYREF
  __int64 v209; // [rsp+48h] [rbp-150h] BYREF
  void *v210; // [rsp+50h] [rbp-148h] BYREF
  __m128i v211; // [rsp+58h] [rbp-140h]
  __int64 v212; // [rsp+70h] [rbp-128h] BYREF
  __int64 v213; // [rsp+78h] [rbp-120h]
  unsigned int v214; // [rsp+80h] [rbp-118h]
  void *ptr[2]; // [rsp+90h] [rbp-108h] BYREF
  _QWORD v216[6]; // [rsp+A0h] [rbp-F8h] BYREF
  __m128 v217; // [rsp+D0h] [rbp-C8h] BYREF
  unsigned __int64 v218; // [rsp+E0h] [rbp-B8h]
  int v219; // [rsp+E8h] [rbp-B0h]
  _BYTE *v220; // [rsp+F0h] [rbp-A8h]
  __int64 v221; // [rsp+F8h] [rbp-A0h]
  char v222; // [rsp+148h] [rbp-50h]
  unsigned int v223; // [rsp+150h] [rbp-48h]
  char v224; // [rsp+154h] [rbp-44h]

  v204 = a3;
  v207 = a4;
  v203 = a1;
  v6 = (_QWORD *)sub_168B6C0((__int64)a1);
  v7 = *a1;
  v8 = (__int64)v6;
  v205 = v6;
  v9 = sub_15F1640(v7, 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v210 = nullptr;
  v211 = si128;
  sub_A83E70(v8, (char **)&v210, v9);
  v11 = sub_BFBC70(*(_QWORD *)(v207 + 32));
  if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
    goto LABEL_8;
  v16 = (__int64 **)sub_B8C3D0(v11, (__int64)&v210, v12, v13, v14, v15);
  v17 = *v16;
  v18 = (unsigned __int64)&(*v16)[*((unsigned int *)v16 + 2)];
  if ( (unsigned __int64)v17 < v18 )
  {
    v22 = v17;
    while ( *(_WORD *)(*v22 + 36) != 376 )
    {
      if ( (__int64 *)v18 == ++v22 )
        goto LABEL_8;
    }
    if ( (__int64 *)v18 != v22 )
      goto LABEL_16;
LABEL_8:
    if ( v204 < 0xC2C
      || v204 > 0xC4F && v204 - 3430 > 0xB
      || (sub_A649E0(
            (__int64)ptr,
            v205,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v207 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL)),
          sub_A97D20((__int64)v205, *(_QWORD *)((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL)) != 64)
      || (v35 = *(__int64 (**)())(*(_QWORD *)a2 + 584LL), v36 = j__strlen("v"), v35 != sub_A55EE0)
      && ((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v35)(a2, "v", v36)
      || (v37 = j__strlen("v"), (unsigned __int8)sub_1068030((__int64)&v210, (__int64)"v", v37)) )
    {
      v216[1] = a2;
      v216[0] = &v207;
      v21 = _mm_loadh_ps((const double *)&v205);
      *(__m128 *)ptr = v21;
      switch ( v204 )
      {
        case 0xD36u:
        case 0xD3Cu:
        case 0xD42u:
        case 0xD48u:
        case 0xD4Eu:
        case 0xD54u:
        case 0xD5Au:
        case 0xD60u:
        case 0xD66u:
        case 0xD6Cu:
        case 0xD72u:
        case 0xD78u:
        case 0xD7Eu:
        case 0xD84u:
        case 0xD8Au:
        case 0xD90u:
        case 0xD96u:
        case 0xD9Cu:
        case 0x132Eu:
        case 0x132Fu:
        case 0x1330u:
        case 0x1331u:
        case 0x136Au:
        case 0x136Bu:
          v43 = 3;
          v44 = 0;
          v45 = 2;
          goto LABEL_40;
        case 0xD37u:
        case 0xD38u:
        case 0xD3Du:
        case 0xD3Eu:
        case 0xD43u:
        case 0xD44u:
        case 0xD49u:
        case 0xD4Au:
        case 0xD4Fu:
        case 0xD50u:
        case 0xD55u:
        case 0xD56u:
        case 0xD5Bu:
        case 0xD5Cu:
        case 0xD61u:
        case 0xD62u:
        case 0xD67u:
        case 0xD68u:
        case 0xD6Du:
        case 0xD6Eu:
        case 0xD73u:
        case 0xD74u:
        case 0xD79u:
        case 0xD7Au:
        case 0xD7Fu:
        case 0xD80u:
        case 0xD85u:
        case 0xD86u:
        case 0xD8Bu:
        case 0xD8Cu:
        case 0xD91u:
        case 0xD92u:
        case 0xD97u:
        case 0xD98u:
        case 0xD9Du:
        case 0xD9Eu:
          v43 = 3;
          v44 = 0;
          v45 = 3;
          goto LABEL_40;
        case 0xD39u:
        case 0xD3Au:
        case 0xD3Bu:
        case 0xD3Fu:
        case 0xD40u:
        case 0xD41u:
        case 0xD45u:
        case 0xD46u:
        case 0xD47u:
        case 0xD4Bu:
        case 0xD4Cu:
        case 0xD4Du:
        case 0xD51u:
        case 0xD52u:
        case 0xD53u:
        case 0xD57u:
        case 0xD58u:
        case 0xD59u:
        case 0xD5Du:
        case 0xD5Eu:
        case 0xD5Fu:
        case 0xD63u:
        case 0xD64u:
        case 0xD65u:
        case 0xD69u:
        case 0xD6Au:
        case 0xD6Bu:
        case 0xD6Fu:
        case 0xD70u:
        case 0xD71u:
        case 0xD75u:
        case 0xD76u:
        case 0xD77u:
        case 0xD7Bu:
        case 0xD7Cu:
        case 0xD7Du:
        case 0xD81u:
        case 0xD82u:
        case 0xD83u:
        case 0xD87u:
        case 0xD88u:
        case 0xD89u:
        case 0xD8Du:
        case 0xD8Eu:
        case 0xD8Fu:
        case 0xD93u:
        case 0xD94u:
        case 0xD95u:
        case 0xD99u:
        case 0xD9Au:
        case 0xD9Bu:
        case 0xD9Fu:
        case 0xDA0u:
        case 0xDA1u:
          v43 = 3;
          v44 = 0;
          v45 = 4;
          goto LABEL_40;
        case 0xDA2u:
        case 0xDA8u:
        case 0xDAEu:
        case 0xDB4u:
        case 0xDBAu:
        case 0xDC0u:
        case 0xDC6u:
        case 0xDCCu:
        case 0xDD2u:
        case 0xDD8u:
        case 0xDDEu:
        case 0xDE4u:
        case 0xDEAu:
        case 0xDF0u:
        case 0xE4Au:
        case 0xE50u:
        case 0xE56u:
        case 0xE5Cu:
        case 0xE62u:
        case 0xE68u:
        case 0xFCBu:
        case 0xFCCu:
        case 0xFD1u:
        case 0xFD2u:
        case 0x108Fu:
        case 0x1090u:
        case 0x1095u:
        case 0x1096u:
        case 0x109Bu:
        case 0x109Cu:
        case 0x10A1u:
        case 0x10A2u:
        case 0x10A7u:
        case 0x10A8u:
        case 0x10ADu:
        case 0x10AEu:
        case 0x10B3u:
        case 0x10B4u:
        case 0x10B9u:
        case 0x10BAu:
        case 0x10BFu:
        case 0x10C0u:
        case 0x10C5u:
        case 0x10C6u:
        case 0x10CBu:
        case 0x10CCu:
        case 0x114Eu:
        case 0x1152u:
        case 0x1156u:
        case 0x115Au:
          v43 = 4;
          v44 = 0;
          v45 = 2;
          goto LABEL_40;
        case 0xDA3u:
        case 0xDA4u:
        case 0xDA9u:
        case 0xDAAu:
        case 0xDAFu:
        case 0xDB0u:
        case 0xDB5u:
        case 0xDB6u:
        case 0xDBBu:
        case 0xDBCu:
        case 0xDC1u:
        case 0xDC2u:
        case 0xDC7u:
        case 0xDC8u:
        case 0xDCDu:
        case 0xDCEu:
        case 0xDD3u:
        case 0xDD4u:
        case 0xDD9u:
        case 0xDDAu:
        case 0xDDFu:
        case 0xDE0u:
        case 0xDE5u:
        case 0xDE6u:
        case 0xDEBu:
        case 0xDECu:
        case 0xDF1u:
        case 0xDF2u:
        case 0xE4Bu:
        case 0xE4Cu:
        case 0xE51u:
        case 0xE52u:
        case 0xE57u:
        case 0xE58u:
        case 0xE5Du:
        case 0xE5Eu:
        case 0xE63u:
        case 0xE64u:
        case 0xE69u:
        case 0xE6Au:
        case 0xE92u:
        case 0xE93u:
        case 0xE98u:
        case 0xE99u:
        case 0xE9Eu:
        case 0xE9Fu:
        case 0xEA4u:
        case 0xEA5u:
        case 0xEAAu:
        case 0xEABu:
        case 0xEB0u:
        case 0xEB1u:
        case 0xEB6u:
        case 0xEB7u:
        case 0xEBCu:
        case 0xEBDu:
        case 0xEC2u:
        case 0xEC3u:
        case 0xEC8u:
        case 0xEC9u:
        case 0xECEu:
        case 0xECFu:
        case 0xED4u:
        case 0xED5u:
        case 0xEDAu:
        case 0xEDBu:
        case 0xEE0u:
        case 0xEE1u:
        case 0xEE6u:
        case 0xEE7u:
        case 0xEECu:
        case 0xEEDu:
        case 0xF52u:
        case 0xF53u:
        case 0xF58u:
        case 0xF59u:
        case 0xF5Eu:
        case 0xF5Fu:
        case 0xF64u:
        case 0xF65u:
        case 0xF6Au:
        case 0xF6Bu:
        case 0xF70u:
        case 0xF71u:
        case 0xF76u:
        case 0xF77u:
        case 0xF7Cu:
        case 0xF7Du:
        case 0xFCDu:
        case 0xFCEu:
        case 0xFCFu:
        case 0xFD3u:
        case 0xFD4u:
        case 0xFD5u:
        case 0x1091u:
        case 0x1092u:
        case 0x1093u:
        case 0x1097u:
        case 0x1098u:
        case 0x1099u:
        case 0x109Du:
        case 0x109Eu:
        case 0x109Fu:
        case 0x10A3u:
        case 0x10A4u:
        case 0x10A5u:
        case 0x10A9u:
        case 0x10AAu:
        case 0x10ABu:
        case 0x10AFu:
        case 0x10B0u:
        case 0x10B1u:
        case 0x10B5u:
        case 0x10B6u:
        case 0x10B7u:
        case 0x10BBu:
        case 0x10BCu:
        case 0x10BDu:
        case 0x10C1u:
        case 0x10C2u:
        case 0x10C3u:
        case 0x10C7u:
        case 0x10C8u:
        case 0x10C9u:
        case 0x10CDu:
        case 0x10CEu:
        case 0x10CFu:
        case 0x114Fu:
        case 0x1150u:
        case 0x1153u:
        case 0x1154u:
        case 0x1157u:
        case 0x1158u:
        case 0x115Bu:
        case 0x115Cu:
          v43 = 4;
          v44 = 0;
          v45 = 3;
          goto LABEL_40;
        case 0xDA5u:
        case 0xDA6u:
        case 0xDA7u:
        case 0xDABu:
        case 0xDACu:
        case 0xDADu:
        case 0xDB1u:
        case 0xDB2u:
        case 0xDB3u:
        case 0xDB7u:
        case 0xDB8u:
        case 0xDB9u:
        case 0xDBDu:
        case 0xDBEu:
        case 0xDBFu:
        case 0xDC3u:
        case 0xDC4u:
        case 0xDC5u:
        case 0xDC9u:
        case 0xDCAu:
        case 0xDCBu:
        case 0xDCFu:
        case 0xDD0u:
        case 0xDD1u:
        case 0xDD5u:
        case 0xDD6u:
        case 0xDD7u:
        case 0xDDBu:
        case 0xDDCu:
        case 0xDDDu:
        case 0xDE1u:
        case 0xDE2u:
        case 0xDE3u:
        case 0xDE7u:
        case 0xDE8u:
        case 0xDE9u:
        case 0xDEDu:
        case 0xDEEu:
        case 0xDEFu:
        case 0xDF3u:
        case 0xDF4u:
        case 0xDF5u:
        case 0xE4Du:
        case 0xE4Eu:
        case 0xE4Fu:
        case 0xE53u:
        case 0xE54u:
        case 0xE55u:
        case 0xE59u:
        case 0xE5Au:
        case 0xE5Bu:
        case 0xE5Fu:
        case 0xE60u:
        case 0xE61u:
        case 0xE65u:
        case 0xE66u:
        case 0xE67u:
        case 0xE6Bu:
        case 0xE6Cu:
        case 0xE6Du:
        case 0xE94u:
        case 0xE95u:
        case 0xE96u:
        case 0xE97u:
        case 0xE9Au:
        case 0xE9Bu:
        case 0xE9Cu:
        case 0xE9Du:
        case 0xEA0u:
        case 0xEA1u:
        case 0xEA2u:
        case 0xEA3u:
        case 0xEA6u:
        case 0xEA7u:
        case 0xEA8u:
        case 0xEA9u:
        case 0xEACu:
        case 0xEADu:
        case 0xEAEu:
        case 0xEAFu:
        case 0xEB2u:
        case 0xEB3u:
        case 0xEB4u:
        case 0xEB5u:
        case 0xEB8u:
        case 0xEB9u:
        case 0xEBAu:
        case 0xEBBu:
        case 0xEBEu:
        case 0xEBFu:
        case 0xEC0u:
        case 0xEC1u:
        case 0xEC4u:
        case 0xEC5u:
        case 0xEC6u:
        case 0xEC7u:
        case 0xECAu:
        case 0xECBu:
        case 0xECCu:
        case 0xECDu:
        case 0xED0u:
        case 0xED1u:
        case 0xED2u:
        case 0xED3u:
        case 0xED6u:
        case 0xED7u:
        case 0xED8u:
        case 0xED9u:
        case 0xEDCu:
        case 0xEDDu:
        case 0xEDEu:
        case 0xEDFu:
        case 0xEE2u:
        case 0xEE3u:
        case 0xEE4u:
        case 0xEE5u:
        case 0xEE8u:
        case 0xEE9u:
        case 0xEEAu:
        case 0xEEBu:
        case 0xEEEu:
        case 0xEEFu:
        case 0xEF0u:
        case 0xEF1u:
        case 0xF54u:
        case 0xF55u:
        case 0xF56u:
        case 0xF57u:
        case 0xF5Au:
        case 0xF5Bu:
        case 0xF5Cu:
        case 0xF5Du:
        case 0xF60u:
        case 0xF61u:
        case 0xF62u:
        case 0xF63u:
        case 0xF66u:
        case 0xF67u:
        case 0xF68u:
        case 0xF69u:
        case 0xF6Cu:
        case 0xF6Du:
        case 0xF6Eu:
        case 0xF6Fu:
        case 0xF72u:
        case 0xF73u:
        case 0xF74u:
        case 0xF75u:
        case 0xF78u:
        case 0xF79u:
        case 0xF7Au:
        case 0xF7Bu:
        case 0xF7Eu:
        case 0xF7Fu:
        case 0xF80u:
        case 0xF81u:
        case 0x1151u:
        case 0x1155u:
        case 0x1159u:
        case 0x115Du:
          v43 = 4;
          v44 = 0;
          v45 = 4;
          goto LABEL_40;
        case 0xFCAu:
        case 0xFD0u:
        case 0x108Eu:
        case 0x1094u:
        case 0x109Au:
        case 0x10A0u:
        case 0x10A6u:
        case 0x10ACu:
        case 0x10B2u:
        case 0x10B8u:
        case 0x10BEu:
        case 0x10C4u:
        case 0x10CAu:
          v43 = 4;
          goto LABEL_64;
        case 0x11BCu:
          v80 = v205;
          sub_A649E0(
            (__int64)&v212,
            v205,
            *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v207 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
          sub_A649E0(
            (__int64)&v217,
            v80,
            *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v207
                                                                 + 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL)
                                                                 + 32)
                                                     + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL]
                      & 0xFFFFFFFFFFFFFFF0LL));
          v81 = v218;
          if ( (_DWORD)v218 == 1 )
            v81 = v217.m128_i32[2] / ((unsigned int)v213 * v214);
          v43 = v81 - 1;
          goto LABEL_64;
        case 0x11BDu:
          v89 = v205;
          sub_A649E0(
            (__int64)&v212,
            v205,
            *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v207 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
          v90 = v214;
          sub_A649E0(
            (__int64)&v217,
            v89,
            *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v207
                                                                 + 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL)
                                                                 + 48)
                                                     + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL]
                      & 0xFFFFFFFFFFFFFFF0LL));
          if ( v90 == 1 )
            v90 = (unsigned int)v213 / (v217.m128_i32[2] * (int)v218);
          v43 = v90 - 1;
          goto LABEL_64;
        case 0x122Fu:
        case 0x1230u:
        case 0x1231u:
        case 0x1232u:
        case 0x1233u:
        case 0x1234u:
        case 0x1235u:
        case 0x1236u:
        case 0x1243u:
        case 0x1244u:
        case 0x1249u:
        case 0x124Au:
        case 0x124Bu:
        case 0x124Cu:
        case 0x124Du:
        case 0x124Eu:
        case 0x124Fu:
        case 0x1250u:
        case 0x1251u:
        case 0x1252u:
        case 0x128Au:
        case 0x128Bu:
          v84 = 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL);
          v85 = *(__int64 ***)(*(_QWORD *)(v207 + v84 + 40) + 8LL);
          v86 = sub_1C28780(
                  a2,
                  (__int64)&v210,
                  v207,
                  *v203,
                  *(_QWORD *)(*(_QWORD *)(v207 + v84 + 32) + 8LL),
                  0x80u,
                  (__m128i)v21);
          v87 = 128;
          v88 = v85;
          v42 = v86;
          if ( !(_BYTE)v86 )
            goto LABEL_95;
          goto LABEL_41;
        case 0x1237u:
        case 0x1241u:
          v42 = sub_1C28780(
                  a2,
                  (__int64)&v210,
                  v207,
                  *v203,
                  *(_QWORD *)(*(_QWORD *)(v207 + 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
                  0x80u,
                  (__m128i)v21);
          if ( !(_BYTE)v42 )
            goto LABEL_93;
          goto LABEL_41;
        case 0x1238u:
        case 0x1239u:
        case 0x123Au:
        case 0x1242u:
          v82 = 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL);
          v83 = *(_QWORD *)(*(_QWORD *)(v207 + v82 + 40) + 8LL);
          if ( !(unsigned __int8)sub_1C28780(
                                   a2,
                                   (__int64)&v210,
                                   v207,
                                   *v203,
                                   *(_QWORD *)(*(_QWORD *)(v207 + v82 + 32) + 8LL),
                                   0x80u,
                                   (__m128i)v21)
            && !(unsigned __int8)sub_1C28780(a2, (__int64)&v210, v207, *v203, v83, 0x80u, (__m128i)v21) )
          {
            goto LABEL_91;
          }
          goto LABEL_58;
        case 0x123Bu:
        case 0x123Cu:
        case 0x123Du:
        case 0x123Eu:
        case 0x123Fu:
        case 0x1240u:
          v91 = v205;
          v92 = 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL);
          v93 = *(_QWORD *)(*(_QWORD *)(v207 + v92 + 32) + 8LL);
          v94 = *(_QWORD *)(*(_QWORD *)(v207 + v92 + 40) + 8LL);
          v201 = *(__int64 ***)(*(_QWORD *)(v207 + v92 + 48) + 8LL);
          sub_A649E0(
            (__int64)&v212,
            v205,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
          v95 = sub_A97D20((__int64)v91, *(_QWORD *)(v212 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v95 == 64 )
          {
            v124 = *(__int64 (**)())(*(_QWORD *)a2 + 584LL);
            v125 = j__strlen("zvknhb");
            v200 = (__int64 *)sub_A55EE0;
            if ( v124 == sub_A55EE0
              || !((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v124)(a2, "zvknhb", v125) )
            {
              v126 = j__strlen("zvknhb");
              if ( !(unsigned __int8)sub_1068030((__int64)&v210, (__int64)"zvknhb", v126) )
              {
                v127 = sub_BF6D70(v207);
                sub_168B9F0((__int64)&v217, v203, v127, 0x135Du, 0);
                LOBYTE(v208) = 1;
                v128 = sub_1588420((__int64)&v217, (unsigned __int8 *)&v208);
                v209 = sub_EEC8C0(v207, (__int64)&v208, *(double *)v21.m128_u64);
                v129 = sub_1587DB0(v128, &v209);
                v42 = *(unsigned __int8 *)(sub_162BBD0(v129, (__int64)"zvknhb") + 120);
                sub_15F7200(&v217);
                goto LABEL_41;
              }
            }
          }
          else
          {
            v200 = (__int64 *)sub_A55EE0;
          }
          v96 = *(__int64 **)(*(_QWORD *)a2 + 584LL);
          v97 = j__strlen("zvknha");
          if ( v96 == v200 || !((unsigned __int8 (__fastcall *)(__int64, const char *, size_t))v96)(a2, "zvknha", v97) )
          {
            v98 = j__strlen("zvknha");
            if ( !(unsigned __int8)sub_1068030((__int64)&v210, (__int64)"zvknha", v98) )
            {
              v202 = *(__int64 **)(*(_QWORD *)a2 + 584LL);
              v134 = j__strlen("zvknhb");
              if ( v202 == v200 || !((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v202)(a2, "zvknhb", v134) )
              {
                v135 = j__strlen("zvknhb");
                if ( !(unsigned __int8)sub_1068030((__int64)&v210, (__int64)"zvknhb", v135) )
                {
                  v136 = sub_BF6D70(v207);
                  sub_168B9F0((__int64)&v217, v203, v136, 0x135Du, 0);
                  LOBYTE(v208) = 1;
                  v137 = sub_1588420((__int64)&v217, (unsigned __int8 *)&v208);
                  v209 = sub_EEC8C0(v207, (__int64)&v208, *(double *)v21.m128_u64);
                  v138 = sub_1587DB0(v137, &v209);
                  v41 = v138;
                  if ( *(_BYTE *)(v138 + 120) )
                  {
                    sub_AE9DF0((unsigned __int8 **)(v138 + 32), (__int64)"zvknha or zvknhb", 1u);
                  }
                  else if ( *(_BYTE *)(v138 + 132) )
                  {
                    sub_1C245B0((_QWORD *)v138, (__int64)"zvknha or zvknhb");
                  }
                  goto LABEL_153;
                }
              }
            }
          }
          v99 = 4 * v95;
          if ( (unsigned __int8)sub_1C28780(a2, (__int64)&v210, v207, *v203, v93, v99, (__m128i)v21)
            || (unsigned __int8)sub_1C28780(a2, (__int64)&v210, v207, *v203, v94, v99, (__m128i)v21) )
          {
            goto LABEL_58;
          }
          v87 = v99;
          v88 = v201;
LABEL_95:
          v42 = sub_1C28780(a2, (__int64)&v210, v207, *v203, (__int64)v88, v87, (__m128i)v21);
          goto LABEL_41;
        case 0x1245u:
        case 0x1246u:
          v42 = sub_1C28780(
                  a2,
                  (__int64)&v210,
                  v207,
                  *v203,
                  *(_QWORD *)(*(_QWORD *)(v207 + 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
                  0x100u,
                  (__m128i)v21);
          if ( (_BYTE)v42 )
            goto LABEL_41;
LABEL_91:
          v43 = 31;
          v44 = 0;
          v45 = 2;
          goto LABEL_40;
        case 0x1275u:
          v42 = sub_1C29140((__int64)ptr, 1u, 2u);
          goto LABEL_41;
        case 0x1276u:
          v42 = sub_1C29140((__int64)ptr, 0, 1u);
          goto LABEL_41;
        case 0x12A0u:
        case 0x12A3u:
        case 0x12A5u:
        case 0x12ABu:
          v56 = 3;
          goto LABEL_57;
        case 0x12A1u:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, 0, 0, 3, 1u, *(double *)v21.m128_u64)
            || (unsigned __int8)sub_16D5460(*v203, v207, 1u, 0, 31, 1u, *(double *)v21.m128_u64) )
          {
            goto LABEL_58;
          }
          v100 = 31;
          v101 = 0;
          v102 = 2;
          goto LABEL_110;
        case 0x12A2u:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, 0, 0, 3, 1u, *(double *)v21.m128_u64)
            || (unsigned __int8)sub_16D5460(*v203, v207, 1u, 0, 31, 1u, *(double *)v21.m128_u64)
            || (unsigned __int8)sub_16D5460(*v203, v207, 2u, 0, 31, 1u, *(double *)v21.m128_u64) )
          {
            goto LABEL_58;
          }
          v100 = 15;
          v101 = -16;
          v102 = 3;
LABEL_110:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, v102, v101, v100, 1u, *(double *)v21.m128_u64) )
            goto LABEL_58;
          v42 = sub_1C25980(v203, v207, 5u, *(double *)v21.m128_u64);
          goto LABEL_41;
        case 0x12A4u:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, 0, 0, 3, 1u, *(double *)v21.m128_u64) )
            goto LABEL_58;
          v57 = 31;
          v58 = 1;
          goto LABEL_61;
        case 0x12A6u:
          v56 = 1;
LABEL_57:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, 0, 0, v56, 1u, *(double *)v21.m128_u64) )
            goto LABEL_58;
LABEL_93:
          v43 = 31;
          goto LABEL_64;
        case 0x12A7u:
        case 0x12A9u:
        case 0x12AEu:
        case 0x12AFu:
        case 0x12B2u:
        case 0x12B3u:
        case 0x12B6u:
        case 0x12B7u:
        case 0x12BAu:
        case 0x12BBu:
        case 0x12BEu:
        case 0x12C0u:
        case 0x12C2u:
        case 0x12C3u:
        case 0x12C6u:
        case 0x12C7u:
          v43 = 3;
          v44 = 0;
          v45 = 0;
          goto LABEL_40;
        case 0x12A8u:
        case 0x12B8u:
        case 0x12B9u:
        case 0x12BFu:
        case 0x12C4u:
        case 0x12C5u:
          v57 = 3;
          v58 = 0;
LABEL_61:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, v58, 0, v57, 1u, *(double *)v21.m128_u64) )
            goto LABEL_58;
          v43 = 15;
          v44 = -16;
          v45 = 3;
          goto LABEL_40;
        case 0x12AAu:
        case 0x12B4u:
        case 0x12B5u:
        case 0x12BCu:
        case 0x12BDu:
        case 0x12C1u:
        case 0x12C8u:
        case 0x12C9u:
          v43 = 1;
          v44 = 0;
          v45 = 0;
          goto LABEL_40;
        case 0x12ACu:
        case 0x12ADu:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, 0, 0, 3, 1u, *(double *)v21.m128_u64) )
            goto LABEL_58;
          v59 = 31;
          v60 = 1;
LABEL_66:
          if ( (unsigned __int8)sub_16D5460(*v203, v207, v60, 0, v59, 1u, *(double *)v21.m128_u64) )
            goto LABEL_58;
          v43 = 15;
          v44 = -16;
          v45 = 2;
LABEL_40:
          v42 = sub_16D5460(*v203, v207, v45, v44, v43, 1u, *(double *)v21.m128_u64);
          goto LABEL_41;
        case 0x12B0u:
        case 0x12B1u:
          v59 = 3;
          v60 = 0;
          goto LABEL_66;
        case 0x1337u:
          v43 = 10;
LABEL_64:
          v44 = 0;
          v45 = 1;
          goto LABEL_40;
        case 0x1355u:
        case 0x1356u:
          v61 = v207;
          v62 = sub_BFD550(*(_QWORD *)(v207 + 32));
          v63 = v204 == 4950;
          v64 = v63 + 1;
          v65 = v63 + 2;
          if ( (unsigned __int8)sub_16EC5F0(*v203, v61, v64, *(double *)v21.m128_u64) )
            goto LABEL_58;
          v42 = sub_16EF380(*v203, v207, v65, *(double *)v21.m128_u64);
          if ( (_BYTE)v42 )
            goto LABEL_58;
          v69 = v207;
          v70 = *v203;
          if ( v65 != *(_DWORD *)(v207 + 16) )
            goto LABEL_71;
          if ( (unsigned __int8)sub_16D5460(v70, v207, v64, 2, 5, 1u, *(double *)v21.m128_u64) )
            goto LABEL_58;
          v69 = v207;
          v70 = *v203;
LABEL_71:
          v71 = *(_QWORD **)(v69 + 8 * (((*(_BYTE *)(v69 + 2) & 8) != 0) + 1LL) + 32);
          v72 = sub_19179A0(v70, v71, 1u, v66, v67, v68, v21, a6);
          if ( v72 == 1 )
            goto LABEL_58;
          v75 = v72 & 0xFFFFFFFFFFFFFFFELL;
          v76 = *(_QWORD *)(*(_QWORD *)((v72 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v76 + 16) == 42
            || (v144 = *(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v144 + 16) == 42)
            && (v76 = sub_F63050(v76, v71, v144, v73)) != 0 )
          {
            v77 = *(_QWORD *)(*(_QWORD *)(v76 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v78 = *(_QWORD *)(v77 + 8) & 7LL | (*(__int64 *)(v77 + 8) >> 3) & 1;
            if ( v78 )
              v79 = (__int64 *)(sub_F64F00(*(_QWORD *)(v76 + 32), (__int64)v71, v78, v73, v74) & 0xFFFFFFFFFFFFFFF0LL);
            else
              v79 = (__int64 *)(v77 & 0xFFFFFFFFFFFFFFF0LL);
            if ( !sub_9EC890(*v79, (__int64)v71, v78, v73, v74) )
            {
              LOBYTE(v64) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v79 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 34
                         && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v79 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11;
              if ( (_BYTE)v64 )
              {
                if ( !sub_F58060(*v79)
                  && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v79 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 57 > 1
                  && !sub_F58350(*v79) )
                {
                  v163 = sub_16C50A0(v62);
                  sub_168B9F0((__int64)&v217, v203, v163, 0x10E0u, 0);
                  v209 = *(_QWORD *)(v75 + 8);
                  v164 = sub_162B6D0((__int64)&v217, &v209);
                  v42 = v64;
                  v212 = sub_EEC8C0(v75, (__int64)&v209, *(double *)v21.m128_u64);
                  sub_1587DB0(v164, &v212);
                  sub_15F7200(&v217);
                  goto LABEL_41;
                }
              }
            }
            if ( v204 != 4950 )
            {
              *(_QWORD *)(v207 + 8) = v79;
              goto LABEL_41;
            }
            v157 = v205;
            v158 = *(_QWORD *)(v207 + 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL) + 40);
            v217.m128_u64[1] = 0;
            v219 = 0;
            v217.m128_i32[0] = 1;
            v218 = sub_A73320(v205, (__int64)v79);
            v220 = nullptr;
            v159 = sub_1A24E20(*v203, (__int64)&v217, 0, v158, 0, 0, v21, a6);
            if ( v159 != 1 )
            {
              v160 = v207;
              *(_QWORD *)(v207 + 8 * (((*(_BYTE *)(v207 + 2) & 8) != 0) + 1LL) + 40) = v159 & 0xFFFFFFFFFFFFFFFELL;
              *(_QWORD *)(v160 + 8) = v157[2329];
              goto LABEL_41;
            }
          }
          else
          {
            if ( (*(_QWORD *)v62 & 0x80000LL) != 0 )
            {
              v145 = *(_QWORD *)(v62 + 32);
              if ( v145 )
              {
                v200 = *(__int64 **)(v62 + 40);
                v21 = _mm_loadh_ps((const double *)&v200);
                v217 = v21;
                v146 = *(_QWORD *)(v145 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v146 )
                {
                  v217.m128_u64[0] = v146;
                  while ( (*(_QWORD *)(v146 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                  {
                    LOBYTE(v42) = 1;
                    v146 = *(_QWORD *)(v146 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  if ( (_BYTE)v42 )
                    v217.m128_u64[0] = v146;
                }
                v147 = &v217;
                v148 = sub_E90530((__int64 *)&v217);
              }
              else
              {
                v148 = 0;
                v147 = &v217;
              }
            }
            else
            {
              v148 = *(_DWORD *)(v62 + 4);
              v147 = &v217;
            }
            v149 = v203;
            sub_168B9F0((__int64)&v217, v203, v148, 0x10DFu, 0);
            v150 = *(_QWORD *)(v75 + 8);
            if ( v222 )
            {
              if ( !v220 )
              {
                v180 = v221;
                v181 = *(_DWORD *)(v221 + 14976);
                if ( v181 )
                {
                  v195 = (unsigned int)(v181 - 1);
                  *(_DWORD *)(v221 + 14976) = v195;
                  v182 = *(_QWORD *)(v180 + 8 * v195 + 14848);
                  v196 = *(unsigned int *)(v182 + 536);
                  *(_BYTE *)v182 = 0;
                  v197 = *(_QWORD *)(v182 + 528);
                  *(_DWORD *)(v182 + 424) = 0;
                  v198 = v197 + (v196 << 6);
                  while ( v197 != v198 )
                  {
                    v198 -= 64;
                    v199 = *(void **)(v198 + 24);
                    if ( v199 != (void *)(v198 + 40) )
                      operator delete(v199);
                  }
                  *(_DWORD *)(v182 + 536) = 0;
                }
                else
                {
                  v182 = operator new(0x3A0u);
                  *(_BYTE *)v182 = 0;
                  v183 = v182 + 96;
                  do
                  {
                    v184 = v183 + 16;
                    *(_QWORD *)(v183 + 8) = 0;
                    v183 += 32;
                    *(_QWORD *)(v183 - 32) = v184;
                    *(_BYTE *)(v183 - 16) = 0;
                  }
                  while ( v182 + 416 != v183 );
                  *(_QWORD *)(v182 + 416) = v182 + 432;
                  *(_QWORD *)(v182 + 424) = 0x800000000LL;
                  *(_QWORD *)(v182 + 528) = v182 + 544;
                  *(_QWORD *)(v182 + 536) = 0x600000000LL;
                }
                v220 = (_BYTE *)v182;
              }
              v151 = &v212;
              v220[(unsigned __int8)*v220 + 1] = 8;
              v161 = v220;
              v162 = (unsigned __int8)*v220;
              *v220 = v162 + 1;
              *(_QWORD *)&v161[8 * v162 + 16] = v150;
            }
            else
            {
              v151 = &v212;
              if ( v224 )
              {
                v169 = sub_168B9E0(&v217);
                v170 = v218;
                if ( v218 )
                  v170 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v218 + 32LL))(v218);
                v151 = &v212;
                v212 = v170;
                v149 = &v212;
                v171 = sub_1587BC0(v169, &v212, v165, v166, v167, v168);
                v172 = *v171 + 32LL * v223;
                if ( !*(_QWORD *)(v172 + 8) )
                {
                  v175 = *(_QWORD *)(v172 + 16);
                  v176 = *(_DWORD *)(v175 + 14976);
                  if ( v176 )
                  {
                    v185 = (unsigned int)(v176 - 1);
                    v200 = &v212;
                    *(_DWORD *)(v175 + 14976) = v185;
                    v186 = *(_QWORD *)(v175 + 8 * v185 + 14848);
                    v201 = (__int64 **)&v217;
                    v187 = v150;
                    v188 = *(unsigned int *)(v186 + 536);
                    v189 = v186;
                    v190 = *(_QWORD *)(v186 + 528);
                    *(_BYTE *)v186 = 0;
                    *(_DWORD *)(v186 + 424) = 0;
                    v191 = v75;
                    v192 = v190;
                    v193 = v190 + (v188 << 6);
                    while ( v192 != v193 )
                    {
                      v193 -= 64;
                      v194 = *(void **)(v193 + 24);
                      if ( v194 != (void *)(v193 + 40) )
                        operator delete(v194);
                    }
                    v75 = v191;
                    v177 = v189;
                    v151 = v200;
                    v150 = v187;
                    *(_DWORD *)(v177 + 536) = 0;
                    v147 = (__m128 *)v201;
                  }
                  else
                  {
                    v177 = operator new(0x3A0u);
                    *(_BYTE *)v177 = 0;
                    v178 = v177 + 96;
                    do
                    {
                      v179 = v178 + 16;
                      *(_QWORD *)(v178 + 8) = 0;
                      v178 += 32;
                      *(_QWORD *)(v178 - 32) = v179;
                      *(_BYTE *)(v178 - 16) = 0;
                    }
                    while ( v177 + 416 != v178 );
                    *(_QWORD *)(v177 + 416) = v177 + 432;
                    *(_QWORD *)(v177 + 424) = 0x800000000LL;
                    *(_QWORD *)(v177 + 528) = v177 + 544;
                    *(_QWORD *)(v177 + 536) = 0x600000000LL;
                  }
                  *(_QWORD *)(v172 + 8) = v177;
                }
                *(_BYTE *)(*(_QWORD *)(v172 + 8) + **(unsigned __int8 **)(v172 + 8) + 1LL) = 8;
                v173 = *(_BYTE **)(v172 + 8);
                v174 = (unsigned __int8)*v173;
                *v173 = v174 + 1;
                *(_QWORD *)&v173[8 * v174 + 16] = v150;
              }
            }
            v212 = sub_EEC8C0(v75, (__int64)v149, *(double *)v21.m128_u64);
            sub_1587DB0((__int64)v147, v151);
            sub_15F7200(v147);
          }
LABEL_58:
          v42 = 1;
          goto LABEL_41;
        default:
          v42 = 0;
          goto LABEL_41;
      }
    }
    v38 = sub_BF6D70(v207);
    sub_168B9F0((__int64)&v217, v203, v38, 0x135Du, 0);
    LOBYTE(v209) = 1;
    v39 = sub_1588420((__int64)&v217, (unsigned __int8 *)&v209);
    v212 = sub_EEC8C0(v207, (__int64)&v209, *(double *)si128.m128i_i64);
    v40 = sub_1587DB0(v39, &v212);
    v41 = v40;
    if ( *(_BYTE *)(v40 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v40 + 32), (__int64)"v", 1u);
      v42 = *(unsigned __int8 *)(v41 + 120);
    }
    else
    {
      v42 = *(unsigned __int8 *)(v40 + 132);
      if ( (_BYTE)v42 )
      {
        sub_1C245B0((_QWORD *)v40, (__int64)"v");
LABEL_153:
        v42 = *(unsigned __int8 *)(v41 + 120);
      }
    }
    sub_15F7200(&v217);
    goto LABEL_41;
  }
  if ( v17 == (__int64 *)v18 )
    goto LABEL_8;
  if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 376 )
  {
    v19 = (__int64 *)(v18 + 8);
    while ( v17 != v19 )
    {
      v20 = *v19++;
      if ( *(_WORD *)(v20 + 36) == 376 )
        goto LABEL_16;
    }
    goto LABEL_8;
  }
LABEL_16:
  v23 = *v17;
  if ( *(_WORD *)(*v17 + 36) != 376 )
  {
    v24 = v17 + 1;
    do
      v23 = *v24++;
    while ( *(_WORD *)(v23 + 36) != 376 );
  }
  v25 = *(unsigned int *)(v23 + 40);
  v26 = *(_QWORD *)(v23 + 48);
  v206 = ptr;
  v213 = v25;
  v212 = v26;
  ptr[0] = v216;
  ptr[1] = (void *)0x300000000LL;
  sub_22476F0(&v212, ptr, 44, 0xFFFFFFFFLL, 1);
  v27 = (void **)ptr[0];
  if ( (char *)ptr[0] + 16 * LODWORD(ptr[1]) == ptr[0] )
  {
LABEL_31:
    if ( v27 != v206 + 2 )
      free(v27);
    goto LABEL_8;
  }
  v28 = (char *)ptr[0] + 16 * LODWORD(ptr[1]);
  v29 = (char *)ptr[0];
  v200 = (__int64 *)sub_A55EE0;
  v201 = (__int64 **)&v217;
  while ( 1 )
  {
    while ( 1 )
    {
      v30 = *(_BYTE **)v29;
      v31 = *((_QWORD *)v29 + 1);
      v32 = *(__int64 **)(*(_QWORD *)a2 + 584LL);
      if ( v32 == v200 || !((unsigned __int8 (__fastcall *)(__int64))v32)(a2) )
        break;
      v29 += 16;
      if ( v28 == v29 )
      {
LABEL_30:
        v27 = (void **)ptr[0];
        goto LABEL_31;
      }
    }
    v33 = sub_2244B30(v30, v31);
    v34 = sub_2244E60(&v210, v30, v31, v33);
    if ( v34 == -1 )
      sub_EC0F90(v201, (__int64 *)v210 + v211.m128i_u32[0], 1);
    else
      sub_EC0F90(v201, (__int64 *)v210 + v34, 1);
    v202 = (__int64 *)v217.m128_u64[0];
    sub_EC0F90(v201, (__int64 *)v210 + v211.m128i_u32[0], 1);
    if ( (__int64 *)v217.m128_u64[0] == v202 || !*(_BYTE *)(*v202 + 8) )
      break;
    v29 += 16;
    if ( v28 == v29 )
      goto LABEL_30;
  }
  v52 = sub_BF6D70(v207);
  v53 = v203;
  sub_168B9F0((__int64)v201, v203, v52, 0x135Du, 0);
  if ( v222 )
  {
    v103 = v220;
    if ( !v220 )
    {
      v130 = v221;
      v131 = *(_DWORD *)(v221 + 14976);
      if ( v131 )
      {
        v139 = (unsigned int)(v131 - 1);
        *(_DWORD *)(v221 + 14976) = v139;
        v103 = *(unsigned __int8 **)(v130 + 8 * v139 + 14848);
        v140 = *((unsigned int *)v103 + 134);
        v141 = *((_QWORD *)v103 + 66);
        *v103 = 0;
        *((_DWORD *)v103 + 106) = 0;
        v142 = v141 + (v140 << 6);
        while ( v141 != v142 )
        {
          while ( 1 )
          {
            v142 -= 64;
            v143 = *(void **)(v142 + 24);
            if ( v143 == (void *)(v142 + 40) )
              break;
            operator delete(v143);
            if ( v141 == v142 )
              goto LABEL_158;
          }
        }
LABEL_158:
        *((_DWORD *)v103 + 134) = 0;
      }
      else
      {
        v103 = (unsigned __int8 *)operator new(0x3A0u);
        *v103 = 0;
        *((_QWORD *)v103 + 12) = v103 + 112;
        *((_QWORD *)v103 + 16) = v103 + 144;
        *((_QWORD *)v103 + 20) = v103 + 176;
        *((_QWORD *)v103 + 24) = v103 + 208;
        *((_QWORD *)v103 + 28) = v103 + 240;
        *((_QWORD *)v103 + 32) = v103 + 272;
        *((_QWORD *)v103 + 36) = v103 + 304;
        *((_QWORD *)v103 + 40) = v103 + 336;
        *((_QWORD *)v103 + 44) = v103 + 368;
        *((_QWORD *)v103 + 48) = v103 + 400;
        *((_QWORD *)v103 + 52) = v103 + 432;
        *((_QWORD *)v103 + 13) = 0;
        v103[112] = 0;
        *((_QWORD *)v103 + 17) = 0;
        v103[144] = 0;
        *((_QWORD *)v103 + 21) = 0;
        v103[176] = 0;
        *((_QWORD *)v103 + 25) = 0;
        v103[208] = 0;
        *((_QWORD *)v103 + 29) = 0;
        v103[240] = 0;
        *((_QWORD *)v103 + 33) = 0;
        v103[272] = 0;
        *((_QWORD *)v103 + 37) = 0;
        v103[304] = 0;
        *((_QWORD *)v103 + 41) = 0;
        v103[336] = 0;
        *((_QWORD *)v103 + 45) = 0;
        v103[368] = 0;
        *((_QWORD *)v103 + 49) = 0;
        v103[400] = 0;
        *((_QWORD *)v103 + 53) = 0x800000000LL;
        *((_QWORD *)v103 + 66) = v103 + 544;
        *((_QWORD *)v103 + 67) = 0x600000000LL;
      }
      v220 = v103;
    }
    v103[*v103 + 1] = 2;
    v104 = v220;
    v105 = (unsigned __int8)*v220;
    *v220 = v105 + 1;
    *(_QWORD *)&v104[8 * v105 + 16] = 1;
  }
  else if ( v224 )
  {
    v110 = sub_168B9E0(v201);
    v111 = v218;
    if ( v218 )
      v111 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v218 + 32LL))(v218);
    v209 = v111;
    v53 = &v209;
    v112 = sub_1587BC0(v110, &v209, v106, v107, v108, v109);
    v113 = *v112 + 32LL * v223;
    v114 = *(unsigned __int8 **)(v113 + 8);
    if ( !v114 )
    {
      v132 = *(_QWORD *)(v113 + 16);
      v133 = *(_DWORD *)(v132 + 14976);
      if ( v133 )
      {
        v152 = (unsigned int)(v133 - 1);
        *(_DWORD *)(v132 + 14976) = v152;
        v114 = *(unsigned __int8 **)(v132 + 8 * v152 + 14848);
        v153 = *((unsigned int *)v114 + 134);
        v154 = *((__int64 **)v114 + 66);
        *v114 = 0;
        *((_DWORD *)v114 + 106) = 0;
        v155 = &v154[8 * v153];
        while ( v154 != v155 )
        {
          while ( 1 )
          {
            v155 -= 8;
            v156 = (__int64 *)v155[3];
            if ( v156 == v155 + 5 )
              break;
            v200 = v154;
            operator delete(v156);
            v154 = v200;
            if ( v200 == v155 )
              goto LABEL_182;
          }
        }
LABEL_182:
        *((_DWORD *)v114 + 134) = 0;
      }
      else
      {
        v114 = (unsigned __int8 *)operator new(0x3A0u);
        *v114 = 0;
        *((_QWORD *)v114 + 12) = v114 + 112;
        *((_QWORD *)v114 + 16) = v114 + 144;
        *((_QWORD *)v114 + 20) = v114 + 176;
        *((_QWORD *)v114 + 24) = v114 + 208;
        *((_QWORD *)v114 + 28) = v114 + 240;
        *((_QWORD *)v114 + 32) = v114 + 272;
        *((_QWORD *)v114 + 36) = v114 + 304;
        *((_QWORD *)v114 + 40) = v114 + 336;
        *((_QWORD *)v114 + 44) = v114 + 368;
        *((_QWORD *)v114 + 48) = v114 + 400;
        *((_QWORD *)v114 + 52) = v114 + 432;
        *((_QWORD *)v114 + 13) = 0;
        v114[112] = 0;
        *((_QWORD *)v114 + 17) = 0;
        v114[144] = 0;
        *((_QWORD *)v114 + 21) = 0;
        v114[176] = 0;
        *((_QWORD *)v114 + 25) = 0;
        v114[208] = 0;
        *((_QWORD *)v114 + 29) = 0;
        v114[240] = 0;
        *((_QWORD *)v114 + 33) = 0;
        v114[272] = 0;
        *((_QWORD *)v114 + 37) = 0;
        v114[304] = 0;
        *((_QWORD *)v114 + 41) = 0;
        v114[336] = 0;
        *((_QWORD *)v114 + 45) = 0;
        v114[368] = 0;
        *((_QWORD *)v114 + 49) = 0;
        v114[400] = 0;
        *((_QWORD *)v114 + 53) = 0x800000000LL;
        *((_QWORD *)v114 + 66) = v114 + 544;
        *((_QWORD *)v114 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v113 + 8) = v114;
    }
    v114[*v114 + 1] = 2;
    v115 = *(_BYTE **)(v113 + 8);
    v116 = (unsigned __int8)*v115;
    *v115 = v116 + 1;
    *(_QWORD *)&v115[8 * v116 + 16] = 1;
  }
  v209 = sub_EEC8C0(v207, (__int64)v53, *(double *)si128.m128i_i64);
  v54 = sub_1587DB0((__int64)v201, &v209);
  v55 = v54;
  if ( *(_BYTE *)(v54 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v54 + 32), v30, v31);
    v42 = *(unsigned __int8 *)(v55 + 120);
  }
  else
  {
    v42 = *(unsigned __int8 *)(v54 + 132);
    if ( (_BYTE)v42 )
    {
      v121 = sub_168B9E0((_QWORD *)v54);
      v122 = *(_QWORD *)(v55 + 16);
      if ( v122 )
        v122 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v122 + 32LL))(*(_QWORD *)(v55 + 16));
      v208 = v122;
      v123 = sub_1587BC0(v121, &v208, v117, v118, v119, v120);
      sub_AEC220((unsigned __int8 **)(*v123 + 32LL * *(unsigned int *)(v55 + 128) + 8), v30, v31);
      v42 = *(unsigned __int8 *)(v55 + 120);
    }
  }
  sub_15F7200(v201);
  if ( ptr[0] != v206 + 2 )
    free(ptr[0]);
LABEL_41:
  v46 = v210;
  if ( v211.m128i_i32[1] && v211.m128i_i32[0] )
  {
    v47 = 0;
    v48 = 8LL * (unsigned int)(v211.m128i_i32[0] - 1) + 8;
    v49 = (char *)v210;
    do
    {
      v50 = *(_QWORD **)&v49[v47];
      if ( v50 && v50 != (_QWORD *)-8LL )
      {
        operator delete(v50, *v50 + 17LL, 8);
        v49 = (char *)v210;
      }
      v47 += 8;
    }
    while ( v48 != v47 );
    v46 = v49;
  }
  free(v46);
  return v42;
}
