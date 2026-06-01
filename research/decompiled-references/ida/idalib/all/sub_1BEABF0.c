__int64 __fastcall sub_1BEABF0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8,
        char a9)
{
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 *v19; // r9
  __int64 v20; // rdi
  char v21; // cl
  int v22; // edx
  int v23; // r8d
  __int8 v24; // dl
  unsigned __int64 v25; // r11
  int v26; // r15d
  unsigned __int64 v27; // rbx
  unsigned int v28; // r15d
  __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // r15
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  char v36; // al
  __int64 v37; // r8
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rax
  char v43; // al
  __m128i v44; // xmm0
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rsi
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rcx
  char v90; // dl
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int64 v95; // rax
  __int8 v96; // al
  __int64 v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // r9
  __int64 v100; // r15
  __int64 v101; // r8
  unsigned __int64 v102; // rdx
  __int64 v103; // rax
  unsigned int v104; // edi
  int v105; // r9d
  __int64 v106; // r15
  bool v107; // al
  __int64 v108; // r11
  char v109; // al
  __int8 v110; // al
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 *v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r15
  _QWORD *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  unsigned int v120; // eax
  unsigned __int64 v121; // rdx
  __int64 v122; // r15
  __int64 v123; // rax
  __int64 v124; // rdi
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rsi
  unsigned int v128; // eax
  __int64 v129; // rax
  __int64 *v130; // rax
  __int64 v131; // rdx
  __int64 *v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  unsigned __int64 v138; // r15
  char v139; // al
  unsigned __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // r9
  __int64 v144; // r11
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 *v151; // [rsp-8h] [rbp-110h]
  __int64 v152; // [rsp-8h] [rbp-110h]
  _QWORD *v153; // [rsp+10h] [rbp-F8h]
  unsigned int v154; // [rsp+10h] [rbp-F8h]
  __m128i v155; // [rsp+18h] [rbp-F0h] BYREF
  unsigned __int64 v156; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v157; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v158; // [rsp+38h] [rbp-D0h] BYREF
  void *v159; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v160; // [rsp+48h] [rbp-C0h]
  __int64 v161; // [rsp+58h] [rbp-B0h]
  __int64 v162; // [rsp+60h] [rbp-A8h]

  v155.m128i_i64[0] = a3;
  v15 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a5 + 40) = 0;
  v16 = *(_QWORD *)a5 & 0xFFFFF80000000000LL | 0x2000000000LL;
  *(_QWORD *)(a5 + 8) = v15;
  *(_QWORD *)a5 = v16;
  v17 = *(_QWORD *)(a1 + 232);
  v18 = v15;
  v156 = v15;
  if ( (*(_BYTE *)(v17 + 1) & 8) != 0
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48) )
  {
    return 0;
  }
  if ( v15 == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL) )
  {
    v47 = sub_1BE7B70((__m128 *)a1, (_WORD *)a2, v155.m128i_i64[0], 0, &v159, nullptr, *(double *)a7.m128_u64, a8);
    v50 = v47;
    if ( !v47 )
      return 0;
    v51 = *(_QWORD *)(v47 + 48);
    v52 = v155.m128i_i64[0];
    *(_QWORD *)(a5 + 8) = v51;
    v156 = v51;
    v53 = sub_1BCC170(v52, a2, v48, v49);
    v54 = v156;
    if ( !sub_1BC70C0(v53, v156) )
    {
      v85 = sub_1BCC170(v155.m128i_i64[0], v156, v55, v56);
      v54 = v156;
      if ( !sub_1BE5710(a1, v156, v85, nullptr, nullptr) )
      {
        v86 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v86 + 16) != 13 || ((*(_WORD *)(v86 + 18) >> 3) & 0x1FF) != 0x1B4 )
          return 0;
      }
    }
    if ( (*(_BYTE *)(v50 + 28) & 0x7Fu) - 35 > 3
      || sub_B979F0((_QWORD *)v50)
      || (unsigned __int8)sub_B981D0((_QWORD *)v50, v54) )
    {
      if ( (*(_WORD *)sub_BFB9F0(a2) & 0x1FF) == 4 )
        v156 = sub_A70010(*(_QWORD *)(a1 + 248), v156);
    }
    else
    {
      v153 = *(_QWORD **)(a1 + 248);
      v78 = sub_B72690(v50 + 72);
      if ( v78 )
        v78 -= 64LL;
      v156 = sub_ABBA20(v153, v156, 0, v78, v79, v80);
    }
    v18 = v156;
    v17 = *(_QWORD *)(a1 + 232);
  }
  v19 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
  v22 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v23 = v22;
  if ( (*(_BYTE *)(v17 + 89) & 1) != 0 && (unsigned int)(v22 - 2) <= 1 )
  {
    v24 = v155.m128i_i8[0];
    v25 = v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL;
    v26 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    if ( (unsigned int)(v26 - 2) <= 1 )
    {
      if ( (_BYTE)v26 == 3 )
      {
        v87 = sub_A72990(*(_QWORD *)(a1 + 248), v156);
        v24 = v155.m128i_i8[0];
        v156 = v87;
        v25 = v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL;
      }
      else if ( (_BYTE)v23 == 3 )
      {
        v88 = sub_F56FF0(v20, *(_QWORD *)(a1 + 248));
        v24 = v155.m128i_i8[0];
        v156 = v88;
        v25 = v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL;
      }
      *(_BYTE *)a5 = 32;
      v159 = (void *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL
                    | ((unsigned __int8)*(_QWORD *)(v25 + 8) | (unsigned __int8)v24) & 7);
      v27 = sub_6D5440(&v159);
      v158 = *(_QWORD *)&byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)*(_QWORD *)&byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v156) & 7;
      if ( sub_6D5440(&v158) == v27 )
      {
        v77 = v155.m128i_i64[0];
        v28 = 1;
        *(_QWORD *)(a5 + 16) = v155.m128i_i64[0];
        *(_QWORD *)(a5 + 24) = v77;
        *(_QWORD *)(a5 + 32) = v77;
        return v28;
      }
      return 0;
    }
    v30 = (unsigned int)(v23 - 2);
    if ( !v21 )
    {
LABEL_25:
      if ( (unsigned __int8)v30 > 4u )
      {
LABEL_26:
        *(_BYTE *)a5 = 0;
        goto LABEL_19;
      }
      goto LABEL_17;
    }
    goto LABEL_37;
  }
  v30 = (unsigned int)(v22 - 2);
  if ( !v21 )
    goto LABEL_25;
  if ( (unsigned int)(v22 - 25) > 1 )
  {
LABEL_37:
    if ( (unsigned __int8)v30 > 4u )
    {
      v89 = *(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL];
      v30 = *(_QWORD *)(a1 + 248);
      v90 = v89 | v18;
      v45 = v89 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v30 + 19080) == (v45 | v90 & 7) )
        goto LABEL_26;
    }
    else if ( (_BYTE)v23 != 3
           || (v45 = *(_QWORD *)(a1 + 248),
               *(_QWORD *)(v45 + 19080) == (*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                          | ((unsigned __int8)*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL]
                                           | (unsigned __int8)v18)
                                          & 7)) )
    {
LABEL_17:
      *(_BYTE *)a5 = 2;
      v156 = sub_A72210(*(_QWORD **)(a1 + 248), v156);
      LOBYTE(v31) = sub_19A3D10(a1, a2, v155.m128i_i64[0]);
      v28 = v31;
      if ( (_BYTE)v31 )
      {
        *(_QWORD *)a5 = *(_QWORD *)a5 & 0xFFFFFFFC00FF00FFLL | 0x105000000LL;
        v63 = v156;
        *(_QWORD *)(a5 + 16) = v156;
        *(_QWORD *)(a5 + 24) = v63;
        *(_QWORD *)(a5 + 32) = v63;
        return v28;
      }
      v18 = v156;
      goto LABEL_19;
    }
    *(_BYTE *)a5 = 1;
    v46 = *v19;
    if ( *(_BYTE *)(*v19 + 16) == 7
      || (v84 = *(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v84 + 16) == 7)
      && (v46 = sub_F63050(*v19, v30, v84, v45)) != 0 )
    {
      v156 = *(_QWORD *)(v46 + 32);
    }
    v18 = sub_6D5440(&v156);
    v156 = v18;
    goto LABEL_19;
  }
  *(_BYTE *)a5 = 3;
  v81 = sub_BFD550(a2);
  if ( (*(_WORD *)v81 & 0x1FF) == 0x47 )
  {
    v83 = *(_QWORD *)(v81 + 16);
    if ( (*(_BYTE *)(v83 + 28) & 0x7Fu) - 34 <= 5 && !(unsigned __int8)sub_1BDFA80(a1, (__int128 *)v83, 0, 0, 0, v82) )
      return 0;
  }
  v18 = sub_A70010(*(_QWORD *)(a1 + 248), v156);
  v156 = v18;
LABEL_19:
  v32 = v155.m128i_i64[0];
  v33 = v156;
  *(_QWORD *)(a5 + 16) = v18;
  v155.m128i_i8[11] = 0;
  v155.m128i_i32[3] = 0;
  if ( sub_1BC70C0(v33, v32) )
  {
    *(_BYTE *)(a5 + 1) = 0;
    goto LABEL_21;
  }
  if ( sub_1BD84A0(a1, a2, v35, v32, v35, *(double *)a7.m128_u64) )
  {
    *(_BYTE *)(a5 + 1) = 6;
    goto LABEL_61;
  }
  if ( sub_1BD2B60(a1, v156, v155.m128i_i64[0]) )
  {
    *(_BYTE *)(a5 + 1) = 7;
LABEL_61:
    v62 = sub_6D5440(&v155);
    v32 = v155.m128i_i64[0];
    v156 = v62;
    v34 = v62;
    goto LABEL_21;
  }
  v64 = v60;
  if ( sub_1BD8BB0(a1, v60, v61, v59, *(double *)a7.m128_u64) )
  {
    *(_BYTE *)(a5 + 1) = 8;
    goto LABEL_61;
  }
  v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v69 = *(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v68 + 16) == 13 && ((*(_WORD *)(v68 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    if ( sub_F610C0(v69, v64, v68, v65, v66, v67)
      || (v69 = *(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL),
          v95 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL),
          (unsigned __int8)v95 <= 0x2Au)
      && (v68 = 0x40600000800LL, _bittest64(&v68, v95)) )
    {
      *(_BYTE *)(a5 + 1) = 15;
      v32 = v155.m128i_i64[0];
      v156 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL);
      v34 = v156;
      goto LABEL_21;
    }
  }
  if ( sub_F61920(v69, v64, v68, v65, v66, v67) )
  {
    v64 = *(_QWORD *)(a1 + 248);
    if ( sub_F60F80(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), v64, v70, v71, v72, v73) )
    {
      *(_BYTE *)(a5 + 1) = 9;
      goto LABEL_61;
    }
  }
  v74 = *(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
  v75 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
  {
    if ( (_BYTE)v75 == 14 )
    {
      *(_BYTE *)(a5 + 1) = 11;
      goto LABEL_61;
    }
    if ( sub_F610C0(v74, v64, v75, v71, v72, v73) )
      goto LABEL_102;
    v75 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
  }
  if ( (_BYTE)v75 == 14 && sub_F610C0(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL), v64, v75, v71, v72, v73) )
  {
LABEL_102:
    *(_BYTE *)(a5 + 1) = 22;
    goto LABEL_61;
  }
  v76 = v156;
  if ( (unsigned __int8)sub_1BC7120((_QWORD **)(a1 + 248), v156, v155.m128i_i64[0]) )
  {
    *(_BYTE *)(a5 + 1) = 10;
    goto LABEL_61;
  }
  if ( sub_F58100(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL))
    && (v76 = *(_QWORD *)(a1 + 248),
        sub_F60F80(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), v76, v91, v92, v93, v94))
    || sub_F61920(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL), v76, v91, v92, v93, v94)
    && sub_F58100(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    *(_BYTE *)(a5 + 1) = 12;
    goto LABEL_61;
  }
  if ( (unsigned __int8)sub_1BD3980(a1, v156, v155.m128i_i64[0], (__int64 *)&v156) )
  {
    v34 = v156;
    v32 = v155.m128i_i64[0];
    *(_BYTE *)(a5 + 1) = 23;
    goto LABEL_21;
  }
  if ( a9 && sub_1A86660(*(_QWORD **)(a1 + 736), v156, v155.m128i_i64[0], &v156) )
  {
    v34 = v156;
    v32 = v155.m128i_i64[0];
    *(_BYTE *)(a5 + 1) = 25;
    goto LABEL_21;
  }
  if ( (unsigned __int8)sub_1BD3370(
                          a1,
                          a2,
                          v156,
                          v155.m128i_i64[0],
                          a4,
                          (__int64 *)&v156,
                          *(double *)a7.m128_u64,
                          &v155.m128i_i8[11]) )
  {
    v96 = v155.m128i_i8[11];
    *(_BYTE *)(a5 + 1) = 13;
    *(_BYTE *)(a5 + 4) = (4 * (v96 & 1)) | *(_BYTE *)(a5 + 4) & 0xFB;
    v32 = v155.m128i_i64[0];
    v156 = sub_6D5440(&v156);
    v34 = v156;
    goto LABEL_21;
  }
  v97 = a2;
  if ( (unsigned __int8)sub_1BEAA10(a1, a2, v156, v155.m128i_u64[0], a4, &v156, *(double *)a7.m128_u64) )
  {
    v34 = v156;
    v32 = v155.m128i_i64[0];
    *(_BYTE *)(a5 + 1) = 14;
    goto LABEL_21;
  }
  v158 = v155.m128i_i64[0];
  v157 = v156;
  v100 = *(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
  v101 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v100 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v102 = (unsigned int)(v101 - 57);
  if ( (unsigned int)v102 > 1
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 > 1 )
  {
    goto LABEL_132;
  }
  v97 = v158;
  if ( sub_1BC70C0(v157, v158) )
    goto LABEL_132;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0 )
    goto LABEL_142;
  if ( *(_BYTE *)(v100 + 16) != 58 )
  {
    if ( (_BYTE)v101 == 58 )
    {
      v100 = sub_F63050(v100, v97, v102, v98);
      v103 = *(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v103 + 16) == 58 )
      {
LABEL_197:
        LOBYTE(v102) = v103 != 0;
        if ( v100 && v103 )
          goto LABEL_124;
        if ( !v100 && v103 )
        {
          v99 = v158;
          goto LABEL_202;
        }
LABEL_142:
        v122 = *(_QWORD *)(v158 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v122 + 16) == 58 )
          goto LABEL_143;
LABEL_153:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v122 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 58 )
          goto LABEL_155;
        v122 = sub_F63050(v122, v97, v102, v98);
        if ( !v122 )
          goto LABEL_155;
        goto LABEL_143;
      }
      v102 = *(_QWORD *)(*(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v102 + 16) != 58 )
        goto LABEL_142;
    }
    else
    {
      v98 &= 0xFFFFFFFFFFFFFFF0LL;
      v103 = *(_QWORD *)v98;
      if ( *(_BYTE *)(*(_QWORD *)v98 + 16LL) == 58 )
      {
LABEL_202:
        v97 = v99;
        v109 = sub_1BC70C0(*(_QWORD *)(v103 + 32), v99);
        if ( !v109 )
        {
          v97 = v144;
          v109 = sub_1BD8C90(a1, v144, v143, &v155.m128i_i32[3], a2, *(double *)a7.m128_u64);
        }
        v99 = 31;
        goto LABEL_129;
      }
      v100 = 0;
      v102 = *(_QWORD *)(*(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v102 + 16) != 58 )
      {
        v122 = *(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_153;
      }
    }
LABEL_196:
    v103 = sub_F63050(v103, v97, v102, v98);
    goto LABEL_197;
  }
  v98 &= 0xFFFFFFFFFFFFFFF0LL;
  v103 = *(_QWORD *)v98;
  if ( *(_BYTE *)(*(_QWORD *)v98 + 16LL) == 58 )
  {
LABEL_124:
    v104 = *(_DWORD *)(v100 + 20);
    if ( *(_DWORD *)(v103 + 20) < v104 )
      goto LABEL_132;
    v105 = 0;
    v106 = *(_QWORD *)(v100 + 32);
    if ( *(_DWORD *)(v103 + 20) != v104 )
      v105 = 31;
    v154 = v105;
    v107 = sub_1BC70C0(*(_QWORD *)(v103 + 32), v106);
    LOBYTE(v99) = v154;
    if ( v107 )
      goto LABEL_130;
    v97 = v108;
    v109 = sub_1BD8C90(a1, v108, v106, &v155.m128i_i32[3], a2, *(double *)a7.m128_u64);
    v99 = v154;
    goto LABEL_129;
  }
  v102 = *(_QWORD *)(*(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v102 + 16) == 58 )
    goto LABEL_196;
  v99 &= 0xFFFFFFFFFFFFFFF0LL;
  v122 = *(_QWORD *)v99;
LABEL_143:
  v123 = v157;
  v102 = v157 & 0xFFFFFFFFFFFFFFF0LL;
  v124 = *(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v124 + 16) == 58 )
    goto LABEL_132;
  v102 = *(_QWORD *)(*(_QWORD *)(v124 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v102 + 16) == 58 )
  {
    if ( sub_F63050(v124, v97, v102, v98) )
      goto LABEL_132;
    v123 = v157;
  }
  if ( sub_F610C0(*(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL), v97, v102, v98, v101, v99) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0 )
    {
      v155.m128i_i32[3] = 21;
      LOBYTE(v99) = 0;
      goto LABEL_130;
    }
    v97 = v157;
    v109 = sub_1BD8C90(a1, v157, *(_QWORD *)(v122 + 32), &v155.m128i_i32[3], a2, *(double *)a7.m128_u64);
    v99 = 33;
LABEL_129:
    if ( v109 )
    {
LABEL_130:
      v110 = v155.m128i_i8[12];
      *(_BYTE *)(a5 + 2) = v99;
      *(_BYTE *)(a5 + 1) = v110;
      goto LABEL_61;
    }
    goto LABEL_132;
  }
LABEL_155:
  if ( sub_F58320(*(_QWORD *)(v158 & 0xFFFFFFFFFFFFFFF0LL)) || sub_F58320(*(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    if ( sub_1629840(*(__int64 **)(a1 + 632), v157, v158)
      || (v97 = v157, sub_1629DB0(*(__int64 **)(a1 + 632), v157, v158)) )
    {
      v155.m128i_i32[3] = 19;
      LOBYTE(v99) = 0;
      goto LABEL_130;
    }
  }
  if ( sub_F58350(*(_QWORD *)(v158 & 0xFFFFFFFFFFFFFFF0LL)) || sub_F58350(*(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    if ( sub_AA90B0(*(_QWORD *)(a1 + 248), v157, v158, v98)
      || (v97 = v157, sub_AB1240(*(__int64 **)(a1 + 248), v157, v158)) )
    {
      v155.m128i_i32[3] = 20;
      LOBYTE(v99) = 0;
      goto LABEL_130;
    }
  }
  v102 = v158;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v158 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
  {
    v97 = v157;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 57 <= 1 )
    {
      if ( (unsigned __int8)sub_A63DE0(*(_QWORD *)(a1 + 248), v157, v158, v98, v101)
        || (v97 = v157, sub_18C27C0(a1, v157, v158, v98, v101, v99))
        && (v97 = 6, !(unsigned __int8)sub_F6A690(*(_QWORD *)(v158 & 0xFFFFFFFFFFFFFFF0LL), 6, v102, v98, v101)) )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 21) <= 3
          && sub_18C27C0(a1, v157, v158, v98, v101, v99) )
        {
          if ( (unsigned __int8)sub_18C23F0(a1, v157, v158) )
          {
            v127 = v157;
            if ( !(unsigned __int8)sub_A63DE0(*(_QWORD *)(a1 + 248), v157, v158, v125, v126) && !a4 && !a6 )
            {
              v128 = sub_EEB7E0(a2, v127, *(double *)a7.m128_u64);
              sub_168B9F0((__int64)&v159, (__int64 *)(a1 + 8), v128, 0x1AB2u, 0);
              v129 = sub_1605D30((__int64)&v159, (__int64 *)&v157);
              sub_1605D30(v129, (__int64 *)&v158);
              sub_15F7200(&v159);
            }
          }
        }
        v155.m128i_i32[3] = 18;
        LOBYTE(v99) = 0;
        goto LABEL_130;
      }
    }
  }
LABEL_132:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    v97 = v155.m128i_i64[0];
    if ( sub_AAC110(*(_QWORD *)(a1 + 248), v155.m128i_i64[0], v156, 0) )
    {
      *(_BYTE *)(a5 + 1) = 16;
      goto LABEL_61;
    }
  }
  v111 = sub_F63600(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), v97, v102, v98, v101, v99);
  v116 = v111;
  if ( v111 )
  {
    v117 = sub_F60F10(v111, v97, v112, (__int64)v113, v114, v115);
    if ( (*((_BYTE *)v117 + 29) & 1) != 0 )
    {
      v130 = sub_B8C3D0((__int64)v117, v97, v118, (__int64)v113, v114, v115);
      v131 = *v130;
      v113 = (__int64 *)(*v130 + 8LL * *((unsigned int *)v130 + 2));
      if ( *v130 >= (unsigned __int64)v113 )
      {
        while ( (__int64 *)v131 != v113 )
        {
          v141 = *v113++;
          if ( *(_WORD *)(v141 + 36) == 380 )
            goto LABEL_185;
        }
      }
      else
      {
        v132 = (__int64 *)*v130;
        while ( 1 )
        {
          v131 = *v132;
          if ( *(_WORD *)(*v132 + 36) == 380 )
            break;
          if ( v113 == ++v132 )
            goto LABEL_136;
        }
        if ( v113 != v132 )
        {
LABEL_185:
          v133 = sub_F60F10(v116, v97, v131, (__int64)v113, v114, v115);
          v138 = sub_B7E900((__int64)v133, v97, v134, v135, v136, v137);
LABEL_186:
          if ( v138 )
          {
            v152 = v97;
            v97 = a2;
            v139 = sub_1BEABF0(a1, a2, *(_QWORD *)(v138 + 48), a4, a5, a6, 0);
            v114 = v152;
            if ( v139 )
            {
              v142 = *(_QWORD *)(v138 + 48);
              *(_BYTE *)(a5 + 1) = 24;
              v155.m128i_i64[0] = v142;
              v34 = v142;
              v32 = v142;
              v156 = v142;
              goto LABEL_21;
            }
            while ( 1 )
            {
              v140 = *(_QWORD *)(v138 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v138 = v140;
              if ( !v140 )
                break;
              if ( (*(_BYTE *)(v140 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_186;
            }
          }
        }
      }
    }
  }
LABEL_136:
  v119 = *(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v119 + 16) == 7
    || (v145 = *(_QWORD *)(*(_QWORD *)(v119 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v145 + 16) == 7)
    && (v119 = sub_F63050(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), v97, v145, v113)) != 0 )
  {
    v151 = (__int64 *)v119;
    v97 = a2;
    v120 = sub_1BEABF0(a1, a2, *(_QWORD *)(v119 + 32), a4, (unsigned int)&v159, a6, 0);
    v113 = v151;
    v28 = v120;
    if ( (_BYTE)v120 )
    {
      v121 = (unsigned __int64)v159 & 0x2FF00FF00LL;
      *(_QWORD *)(a5 + 24) = v161;
      *(_QWORD *)a5 = v121 | *(_QWORD *)a5 & 0xFFFFFFFD00FF00FFLL;
      *(_QWORD *)(a5 + 32) = v162;
      return v28;
    }
  }
  v146 = v155.m128i_i64[0];
  v147 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v147 + 16) == 13 && ((*(_WORD *)(v147 + 18) >> 3) & 0x1FF) == 0x1ED )
  {
    v97 = *(_QWORD *)(a1 + 248);
    if ( (unsigned __int8)sub_C3EA40(a2, v97, nullptr, (__int64)v113, v114, v115) )
    {
      sub_C3DC60((__int64)&v159, a2, *(_QWORD *)(a1 + 248), 0, v114, v115);
      v97 = 0;
      if ( (unsigned __int8)sub_AC43F0((__int64)&v159, nullptr) )
      {
        if ( v160 > 0x40 && v159 )
          operator delete[](v159);
        v32 = v155.m128i_i64[0];
        *(_BYTE *)(a5 + 1) = 26;
        v156 = v32;
        v34 = v32;
        goto LABEL_21;
      }
      if ( v160 > 0x40 && v159 )
        operator delete[](v159);
    }
    v146 = v155.m128i_i64[0];
  }
  v148 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v148 + 16) == 13 && ((*(_WORD *)(v148 + 18) >> 3) & 0x1FF) == 0x1EF )
  {
    v97 = *(_QWORD *)(a1 + 248);
    if ( (unsigned __int8)sub_C3EA40(a2, v97, nullptr, (__int64)v113, v114, v115) )
    {
      sub_C3DC60((__int64)&v159, a2, *(_QWORD *)(a1 + 248), 0, v114, v115);
      v97 = 0;
      if ( (unsigned __int8)sub_AC43F0((__int64)&v159, nullptr) )
      {
        if ( v160 > 0x40 && v159 )
          operator delete[](v159);
        v32 = v155.m128i_i64[0];
        *(_BYTE *)(a5 + 1) = 27;
        v156 = v32;
        v34 = v32;
        goto LABEL_21;
      }
      if ( v160 > 0x40 && v159 )
        operator delete[](v159);
    }
    v146 = v155.m128i_i64[0];
  }
  v149 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v149 + 16) != 13 )
    goto LABEL_215;
  if ( ((*(_WORD *)(v149 + 18) >> 3) & 0x1FF) != 0x1EC )
  {
LABEL_214:
    if ( (((*(_WORD *)(v149 + 18) >> 3) + 56) & 0x1FFu) <= 0x17
      && sub_1BCC4E0(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL), v97) )
    {
LABEL_219:
      v32 = v155.m128i_i64[0];
      *(_BYTE *)(a5 + 1) = 30;
      v156 = v32;
      v34 = v32;
      goto LABEL_21;
    }
LABEL_215:
    v150 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v150 + 16) != 13
      || (((*(_WORD *)(v150 + 18) >> 3) + 56) & 0x1FFu) > 0x17
      || !sub_1BCC4E0(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), v97) )
    {
      v34 = v156;
      v32 = v155.m128i_i64[0];
      *(_BYTE *)(a5 + 1) = 0;
      goto LABEL_21;
    }
    goto LABEL_219;
  }
  v97 = *(_QWORD *)(a1 + 248);
  if ( !(unsigned __int8)sub_C3EA40(a2, v97, nullptr, (__int64)v113, v114, v115) )
  {
    v149 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v149 + 16) != 13 )
      goto LABEL_215;
    goto LABEL_214;
  }
  v32 = v155.m128i_i64[0];
  *(_BYTE *)(a5 + 1) = 16;
  v156 = v32;
  v34 = v32;
LABEL_21:
  *(_QWORD *)(a5 + 24) = v34;
  if ( sub_1BE5710(a1, v156, v32, nullptr, nullptr) )
  {
    v156 = v32;
    *(_BYTE *)(a5 + 3) = 4;
  }
  else if ( sub_1BD41F0(a1, v156, v155.m128i_i64[0], a6, &v158) )
  {
    v36 = v158;
    *(_BYTE *)(a5 + 3) = 5;
    *(_BYTE *)(a5 + 4) = (2 * (v36 & 1)) | *(_BYTE *)(a5 + 4) & 0xFD;
    v156 = v155.m128i_i64[0];
  }
  else
  {
    *(_BYTE *)(a5 + 3) = 0;
  }
  v37 = v156;
  v38 = *(_QWORD *)&byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v156 | (unsigned __int8)*(_QWORD *)&byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
  v39 = *(_QWORD *)&byte_8[v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] | v155.m128i_i8[0]) & 7;
  v40 = *(_QWORD *)(*(_QWORD *)&byte_8[v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
      & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)(*(_QWORD *)&byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == v40 )
  {
    v57 = 0;
    if ( (byte_8[v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
      v57 = *(__int64 *)((char *)&qword_18
                       + (*(_QWORD *)&byte_8[v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
    v40 = v57 | ((unsigned __int8)*(_QWORD *)&byte_8[v155.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] | v155.m128i_i8[0]) & 7;
    v58 = 0;
    if ( (byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
      v58 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
    if ( (v58 | ((unsigned __int8)v156 | (unsigned __int8)*(_QWORD *)&byte_8[v156 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != v40 )
    {
      v28 = 1;
      *(_QWORD *)(a5 + 32) = v155.m128i_i64[0];
      return v28;
    }
  }
  *(_QWORD *)(a5 + 32) = v156;
  if ( v39 == v38 || sub_16C5A20(a1, v38, v39, v40, v37) )
    return 1;
  v28 = ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 3) ^ 1) & 1;
  LOBYTE(v28) = a4 & v28;
  if ( !(_BYTE)v28 )
    return 0;
  v159 = (void *)a2;
  v41 = sub_1919BF0((_QWORD *)a1, v155.m128i_i64[0], (unsigned __int64 *)&v159, 0, 0, 0, a7, a8);
  if ( v41 > 9 )
    return 0;
  v42 = 1LL << v41;
  if ( (v42 & 0x320) != 0 )
  {
    v43 = 29;
    goto LABEL_36;
  }
  if ( (v42 & 3) != 0 )
  {
    v43 = 28;
LABEL_36:
    v44 = _mm_loadl_epi64(&v155);
    *(_BYTE *)(a5 + 1) = v43;
    *(_BYTE *)(a5 + 3) = 0;
    *(__m128i *)(a5 + 24) = _mm_unpacklo_epi64(v44, v44);
    return v28;
  }
  return 0;
}
