__int64 __fastcall sub_19249E0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int8 v8; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // r13
  unsigned int v25; // r15d
  __int64 *v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int8 v34; // cl
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r8
  _QWORD *v38; // rsi
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  bool v56; // al
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rax
  __int64 *v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // r8
  _DWORD *v94; // rax
  unsigned __int8 v95; // dl
  unsigned __int8 v96; // al
  __int64 v97; // rcx
  __int64 v98; // r8
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rbx
  unsigned int v109; // eax
  __int64 v110; // [rsp-10h] [rbp-118h]
  __int64 v111; // [rsp-8h] [rbp-110h]
  __int64 v112; // [rsp+8h] [rbp-100h]
  int v113; // [rsp+18h] [rbp-F0h] BYREF
  int v114; // [rsp+1Ch] [rbp-ECh] BYREF
  unsigned __int64 v115; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v116; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v117; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v118; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v119[12]; // [rsp+40h] [rbp-C8h] BYREF

  v8 = a5;
  v13 = *(_QWORD *)(a1 + 232);
  v115 = a4;
  v113 = 0;
  v114 = 0;
  v116 = 0;
  if ( (*(_BYTE *)(v13 + 47) & 0x20) != 0 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( a3 != 4 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7 )
      goto LABEL_5;
    v112 = *(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( sub_E3A850(v14) )
      goto LABEL_5;
    v20 = *(_QWORD *)(*(_QWORD *)(v112 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_BYTE *)(v20 + 16);
    if ( v21 == 13 )
    {
      if ( ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) != 0x1EC )
        goto LABEL_10;
LABEL_5:
      sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), a2, 0x14C6u, 0);
      v15 = &v117;
      v117 = *(_QWORD *)(a4 + 8);
      v16 = sub_162B6D0((__int64)v119, &v117);
LABEL_6:
      v17 = v16;
      v18 = 1;
      v118 = sub_EEC8C0(v115 & 0xFFFFFFFFFFFFFFFELL, (__int64)v15, *(double *)a7.m128_u64);
      sub_1587DB0(v17, &v118);
      sub_15F7200(v119);
      return v18;
    }
    if ( v21 == 41 || v21 == 11 )
      goto LABEL_5;
  }
LABEL_10:
  if ( (*(_BYTE *)(v13 + 89) & 1) != 0 && a2 )
  {
    if ( a3 == 4 )
    {
      sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), a2, 0xF43u, 0);
      LODWORD(v118) = 0;
    }
    else
    {
      if ( a3 != 5 )
        goto LABEL_14;
      sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), a2, 0xF43u, 0);
      LODWORD(v118) = 1;
    }
    v18 = 1;
    sub_1587D10((__int64)v119, (int *)&v118);
    sub_15F7200(v119);
    return v18;
  }
LABEL_14:
  if ( (*(_DWORD *)a4 & 0x10000) != 0 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1F1 )
    {
      v24 = 0;
      v25 = 0;
      v116 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_19;
    }
  }
  v22 = a3;
  switch ( a3 )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
      v24 = 0;
      v78 = sub_1908AC0(
              (__int64 *)a1,
              a4 & 0xFFFFFFFFFFFFFFFELL,
              (__int64)&v113,
              (__int64)&v114,
              a2,
              a3 & 0xFFFFFFFD ^ 1,
              (__m128i)a7,
              a8,
              a3 - 2 <= 1);
      v79 = *(_QWORD *)(a1 + 248);
      v116 = v78;
      v25 = sub_18BAE50(v79, v78, v80, v81, v82);
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_19;
    case 4u:
      v116 = sub_1909040(a1, &v115, a2, a4, a5, a6, (__m128i)a7, a8);
      sub_18C1CC0(a1, a4);
      v24 = 0;
      v25 = 0;
      if ( (*(_WORD *)a4 & 0x1FF) == 0x47 )
        sub_18BDB30(a1, a4, v83, v84, v85, v86);
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_19;
    case 5u:
      v35 = sub_19179A0(a1, (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFELL), 1u, a4, a5, a6, a7, a8);
      v115 = v35;
      if ( v35 == 1 )
        return 1;
      v37 = v8;
      v24 = 0;
      v25 = 0;
      v116 = sub_191C8F0((__int64 *)a1, (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFELL), &v113, a2, v37, v36, a7, a8);
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_19;
    case 6u:
    case 7u:
      v25 = 0;
      v38 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFELL);
      if ( a3 == 7 )
      {
        v25 = sub_18BAE50(*(_QWORD *)(a1 + 248), v38[1], 7, a4, a5);
        v38 = (_QWORD *)(v115 & 0xFFFFFFFFFFFFFFFELL);
      }
      v39 = sub_191BD20(a1, v38, a7, a8, v22, a4, a5, a6);
      v115 = v39;
      if ( v39 == 1 )
        return 1;
      v40 = *(_QWORD *)(a1 + 248);
      v24 = sub_18BD480(1u, v40, v39 & 0xFFFFFFFFFFFFFFFELL, 0);
      if ( v24 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18800LL);
        v115 = sub_18BEAC0(v115 & 0xFFFFFFFFFFFFFFFELL, v40, a1, v42, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      }
      v116 = *(_QWORD *)((v115 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v45 = sub_F610C0(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL), v40, v41, v42, v43, v44) == 0;
      v47 = v116;
      if ( !v45 )
        goto LABEL_49;
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      v48 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
        goto LABEL_47;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 13LL) & 4) == 0 )
        goto LABEL_19;
      v49 = (unsigned int)*(unsigned __int8 *)(v48 + 16) - 57;
      if ( (unsigned int)v49 > 1 )
      {
        v48 = sub_F63050(v48, v40, v49, v46);
        v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      }
      if ( ((*(_BYTE *)(v48 + 18) >> 3) & 0xF) != 3 )
        goto LABEL_19;
      v48 = *v26;
LABEL_47:
      if ( sub_F58380(v48) )
      {
        v47 = v116;
LABEL_49:
        v26 = (__int64 *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_19;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && a3 == 6 )
      {
        v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42 )
          goto LABEL_19;
      }
      goto LABEL_89;
    case 8u:
      v50 = a4 & 0xFFFFFFFFFFFFFFFELL;
      v51 = sub_191BD20(a1, (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFELL), a7, a8, a3, a4, a5, a6);
      v115 = v51;
      if ( v51 == 1 )
        return 1;
      v116 = *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( sub_F57BD0(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL))
        || (v56 = sub_F65CC0(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL), v50, v52, v53, v54, v55), (v25 = v56) != 0) )
      {
        v25 = 0;
        sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), a2, 0x15DCu, 0);
        v61 = sub_1605D30((__int64)v119, &v116);
        v24 = 0;
        v118 = sub_EEC8C0(v115 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v116, *(double *)a7.m128_u64);
        sub_1587DB0(v61, &v118);
        sub_15F7200(v119);
        v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_19;
      }
      v24 = sub_F61A60(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL), v50, v57, v58, v59, v60);
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v24 )
        goto LABEL_103;
      v106 = *v26;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v106 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 58 )
        goto LABEL_89;
      v107 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL);
      if ( (*(_BYTE *)(v107 + 47) & 0x20) == 0 )
        goto LABEL_89;
      if ( *(_BYTE *)(v106 + 16) != 58 )
        v106 = sub_F63050(v106, v50, v107, v104);
      if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v106 + 32) & 0xFFFFFFFFFFFFFFF0LL), v50, v107, v104, v105) )
        goto LABEL_89;
      v25 = 0;
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_19;
    case 9u:
      v62 = sub_19179A0(a1, (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFELL), 1u, a4, a5, a6, a7, a8);
      v115 = v62;
      if ( v62 == 1 )
        return 1;
      v65 = v62 & 0xFFFFFFFFFFFFFFFELL;
      v116 = *(_QWORD *)(v65 + 8);
      v66 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      v67 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      v68 = *(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v69 = *(unsigned __int8 *)(v68 + 16);
      if ( (_BYTE)v69 != 13 )
        goto LABEL_94;
      v69 = *(unsigned __int16 *)(v68 + 18);
      LOWORD(v69) = ((unsigned __int16)v69 >> 3) & 0x1FF;
      if ( (_WORD)v69 != 480 )
        goto LABEL_58;
      v69 = *(_QWORD *)(a1 + 248);
      v68 = *(_QWORD *)(v69 + 2320);
      if ( (*(_BYTE *)(v68 + 60) & 4) != 0 )
        goto LABEL_58;
      v115 = sub_160A600(
               a1,
               v65,
               *(_QWORD *)(v69 + 18800),
               0x27u,
               0,
               0,
               *(double *)a7.m128_u64,
               *(double *)a8.m128_u64,
               0)
           & 0xFFFFFFFFFFFFFFFELL;
      v116 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18800LL);
      v66 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      v68 = v110;
      v67 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      v63 = v111;
      v69 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_94:
      if ( (_BYTE)v69 != 42 )
        goto LABEL_58;
      v119[0].m128_u64[0] = sub_F68450(v67, v68, (__int64)v66, v69, v63);
      if ( sub_F65EB0(v119) )
      {
        v18 = 1;
        sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), a2, 0x14C6u, 0);
        v108 = sub_1605D30((__int64)v119, &v116);
        v118 = sub_EEC8C0(v115 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v116, *(double *)a7.m128_u64);
        sub_1587DB0(v108, &v118);
        sub_15F7200(v119);
        return v18;
      }
      v66 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_58:
      if ( !sub_F61140(*v66, v68, (__int64)v66, v69, v63, v64)
        || (v96 = sub_18BAE10(v116, v68, v70, v71, v72, v73), (v25 = v96) != 0) )
      {
        v74 = *(_QWORD *)(a1 + 248);
        v75 = *(_QWORD *)(v74 + 2320);
        v76 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
        v77 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (_BYTE)v77 == 58 )
        {
          if ( (*(_BYTE *)(v75 + 47) & 0x20) != 0 && (unsigned int)sub_FEAA90(v75) <= 0x77 )
          {
            v103 = *(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v103 + 16) != 58 )
              v103 = sub_F63050(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL), v68, v77, v74);
            if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v103 + 32) & 0xFFFFFFFFFFFFFFF0LL), v68, v77, v74, v102) )
              goto LABEL_89;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v75 + 1) & 8) == 0 || (unsigned int)(v77 - 57) > 1 )
            goto LABEL_89;
          v77 = (unsigned int)*(unsigned __int8 *)(v76 + 16) - 57;
          if ( (unsigned int)v77 > 1 )
            v76 = sub_F63050(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL), v68, v77, v74);
          if ( (*(_BYTE *)(v76 + 18) & 0x78) != 0 )
            goto LABEL_89;
        }
        v24 = 0;
        v25 = 0;
        v116 = sub_18C2B90(a1, v116, v77, v74);
        v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_19;
      }
      v99 = *(_QWORD **)(a1 + 248);
      v100 = v99[290];
      if ( (*(_BYTE *)(v100 + 1) & 8) != 0 )
      {
        v109 = sub_15F1460(v116);
        v115 = sub_160A600(
                 a1,
                 v115 & 0xFFFFFFFFFFFFFFFELL,
                 *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL),
                 v109,
                 0,
                 0,
                 *(double *)a7.m128_u64,
                 *(double *)a8.m128_u64,
                 0);
      }
      else
      {
        if ( (*(_BYTE *)(v100 + 47) & 0x20) == 0 || *(_DWORD *)(v100 + 48) > 0x77u )
          goto LABEL_101;
        if ( !sub_9EC890(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL), v68, v100, v97, v98)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
LABEL_89:
          sub_168B9F0((__int64)v119, (__int64 *)(a1 + 8), a2, 0x14C6u, 0);
          v15 = &v116;
          v16 = sub_1605D30((__int64)v119, &v116);
          goto LABEL_6;
        }
      }
      v99 = *(_QWORD **)(a1 + 248);
      if ( (*(_BYTE *)(v99[290] + 1LL) & 8) == 0 )
      {
LABEL_101:
        v101 = v99[2340];
        goto LABEL_102;
      }
      v101 = v99[2330];
LABEL_102:
      v116 = v101;
      v26 = (__int64 *)(v101 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_103:
      v24 = 0;
LABEL_19:
      if ( !v26 )
        return 1;
      v27 = v115;
      if ( v115 == 1 )
        return 1;
LABEL_21:
      if ( a3 - 4 > 1 )
      {
        sub_16C6F10(a1, v27 & 0xFFFFFFFFFFFFFFFELL, *(double *)a7.m128_u64);
        v27 = v115;
      }
      v28 = *(unsigned int *)(a1 + 1952);
      v29 = *(unsigned int *)(a1 + 1956);
      if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v29, v28) )
      {
        v29 = 0;
        v28 = 0;
      }
      v30 = sub_C09D40(
              *(_QWORD **)(a1 + 248),
              v27 & 0xFFFFFFFFFFFFFFFELL,
              a3,
              v116,
              v113,
              v114,
              a2,
              v25,
              (v29 << 32) | v28);
      v18 = v30;
      if ( a3 == 5 )
      {
        if ( (unsigned __int8)sub_F6A690(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL), 21, v31, v32, v33) )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(sub_F6B0C0(
                                                          *(_QWORD *)(v18 + 8),
                                                          *(_QWORD *)(a1 + 248),
                                                          v92,
                                                          v32,
                                                          v93)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) > 4u )
          {
            v94 = (_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
            if ( *v94 != 3 && *v94 > 1u )
              sub_18C4BB0(v119, (__int64)(v94 + 72), v18);
          }
        }
      }
      if ( v24 )
        return sub_18BEAC0(
                 v18,
                 *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19032LL),
                 a1,
                 v32,
                 *(double *)a7.m128_u64,
                 *(double *)a8.m128_u64);
      return v18;
    case 0xAu:
    case 0xBu:
      v87 = sub_19173E0(a1, &v115, a2, a3 == 10, a7, a8, a5, a6);
      v27 = v115;
      v116 = v87;
      if ( v115 == 1 )
        return 1;
      v91 = v115 & 0xFFFFFFFFFFFFFFFELL;
      if ( a3 == 10
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 14 )
      {
        v95 = *(_BYTE *)(v91 + 1);
        if ( ((v95 >> 1) & 3) != 0 && (v95 & 0x38) == 0 )
          v113 = (v95 >> 1) & 3;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
      {
        v24 = 0;
        v25 = 0;
        v115 = sub_19146F0(a1, (_QWORD *)(v115 & 0xFFFFFFFFFFFFFFFELL), v91, v88, v89, v90, a7, a8);
        v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_19;
      }
      if ( (v116 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 1;
      v25 = 0;
      v24 = 0;
      goto LABEL_21;
    case 0xCu:
      v24 = 0;
      v25 = 0;
      v34 = *(_BYTE *)((a4 & 0xFFFFFFFFFFFFFFFELL) + 1);
      v116 = *(_QWORD *)((a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v26 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFF0LL);
      v114 = (v34 >> 3) & 7;
      v113 = (v34 >> 1) & 3;
      goto LABEL_19;
    case 0xDu:
      return v115;
    default:
      return 1;
  }
}
