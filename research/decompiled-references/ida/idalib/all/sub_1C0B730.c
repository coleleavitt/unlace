__int64 __fastcall sub_1C0B730(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  __int64 v9; // r14
  __m128 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r14
  unsigned __int64 *v15; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 (__fastcall ***v26)(); // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  unsigned int v32; // eax
  bool v33; // r15
  _QWORD *v34; // rax
  unsigned __int64 v35; // rax
  __int64 *v36; // rdx
  __int64 *v37; // r13
  __int64 *v38; // rbp
  __int64 *v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rbx
  _QWORD *v42; // r12
  unsigned __int8 v43; // al
  __int64 (__fastcall *v44)(__int64); // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // eax
  int v54; // eax
  __int64 v55; // r9
  __int64 *v56; // rdi
  char *v57; // rax
  char *v58; // rsi
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  bool v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // r14
  __int64 v65; // rax
  unsigned int v66; // eax
  int v67; // r13d
  __int64 v68; // r9
  int v69; // r13d
  __int64 v70; // rsi
  unsigned __int64 v71; // r15
  unsigned __int8 v72; // dl
  __int64 v73; // rsi
  void *v74; // rax
  void *v75; // rsi
  size_t v76; // r14
  unsigned int *v77; // rax
  __int64 v78; // rcx
  _BOOL8 v79; // r8
  size_t v80; // r14
  _BYTE *v81; // rcx
  signed __int64 v82; // rdx
  __int64 v83; // rsi
  void *v84; // rax
  size_t v85; // r14
  __int64 v86; // rsi
  void *v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // r14
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // rbp
  unsigned __int64 v97; // r12
  unsigned __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  char v101; // r13
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned __int16 *v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rcx
  __int64 v110; // r8
  unsigned __int16 *v111; // rax
  __int64 v113; // [rsp+8h] [rbp-2130h]
  unsigned __int64 v114; // [rsp+10h] [rbp-2128h]
  __int64 v115; // [rsp+20h] [rbp-2118h]
  __int64 *v116; // [rsp+20h] [rbp-2118h]
  unsigned int v117; // [rsp+20h] [rbp-2118h]
  unsigned __int16 v118; // [rsp+20h] [rbp-2118h]
  __int64 v119; // [rsp+40h] [rbp-20F8h]
  unsigned int v120; // [rsp+40h] [rbp-20F8h]
  __int64 v121; // [rsp+40h] [rbp-20F8h]
  __int64 v122; // [rsp+60h] [rbp-20D8h]
  __int64 v123; // [rsp+68h] [rbp-20D0h]
  unsigned __int64 *v124; // [rsp+70h] [rbp-20C8h] BYREF
  unsigned __int64 v125; // [rsp+78h] [rbp-20C0h]
  unsigned int v126; // [rsp+84h] [rbp-20B4h] BYREF
  unsigned __int64 v127; // [rsp+88h] [rbp-20B0h] BYREF
  __int64 *v128; // [rsp+90h] [rbp-20A8h] BYREF
  __int64 v129; // [rsp+98h] [rbp-20A0h] BYREF
  unsigned __int64 v130; // [rsp+A0h] [rbp-2098h] BYREF
  unsigned int v131; // [rsp+A8h] [rbp-2090h]
  _QWORD v132[2]; // [rsp+B0h] [rbp-2088h] BYREF
  void *ptr; // [rsp+C0h] [rbp-2078h] BYREF
  __int64 v134; // [rsp+C8h] [rbp-2070h]
  _BYTE v135[32]; // [rsp+D0h] [rbp-2068h] BYREF
  void *v136; // [rsp+F0h] [rbp-2048h] BYREF
  unsigned __int64 v137; // [rsp+F8h] [rbp-2040h]
  _BYTE v138[64]; // [rsp+100h] [rbp-2038h] BYREF
  void *v139; // [rsp+140h] [rbp-1FF8h] BYREF
  unsigned __int64 v140; // [rsp+148h] [rbp-1FF0h] BYREF
  unsigned __int64 v141[8]; // [rsp+150h] [rbp-1FE8h] BYREF
  __int64 (__fastcall **v142)(); // [rsp+190h] [rbp-1FA8h] BYREF
  __int64 v143; // [rsp+198h] [rbp-1FA0h]
  void **v144; // [rsp+1A0h] [rbp-1F98h]
  char v145; // [rsp+233h] [rbp-1F05h]
  _QWORD *v146; // [rsp+240h] [rbp-1EF8h] BYREF
  __int64 v147; // [rsp+248h] [rbp-1EF0h]
  _QWORD v148[338]; // [rsp+250h] [rbp-1EE8h] BYREF
  int v149; // [rsp+CE0h] [rbp-1458h]
  char v150; // [rsp+CE4h] [rbp-1454h]
  _QWORD v151[17]; // [rsp+CE8h] [rbp-1450h] BYREF
  int v152; // [rsp+D70h] [rbp-13C8h]
  __int64 v153; // [rsp+D78h] [rbp-13C0h]
  __int64 v154; // [rsp+D80h] [rbp-13B8h]
  _QWORD *v155; // [rsp+D88h] [rbp-13B0h]
  __int64 v156; // [rsp+D90h] [rbp-13A8h]
  _QWORD v157[6]; // [rsp+D98h] [rbp-13A0h] BYREF
  _QWORD v158[2]; // [rsp+DC8h] [rbp-1370h] BYREF
  unsigned int v159; // [rsp+DD8h] [rbp-1360h]
  int v160; // [rsp+DDCh] [rbp-135Ch]
  __int64 v161; // [rsp+DE0h] [rbp-1358h]
  char v162; // [rsp+DE8h] [rbp-1350h]
  int v163; // [rsp+DECh] [rbp-134Ch]
  int v164; // [rsp+20F0h] [rbp-48h]

  v9 = 1;
  v10 = a1;
  v127 = a3;
  v126 = a4;
  v124 = a5;
  v125 = a6;
  if ( (unsigned __int8)sub_1BC8220((__int64)a1, (__int64 *)&v127, (__m128i)a7, a8, a3, a4, (__int64)a5, a6) )
    return v9;
  v14 = v127;
  v15 = v124;
  ptr = v135;
  v134 = 0x200000000LL;
  if ( (_DWORD)v125 )
  {
    while ( !(unsigned __int8)sub_1BC6C10((__int64)a1, (__int64 *)v15, (__int64)&ptr, (__m128i)a7, a8, v11, v12, v13) )
    {
      if ( &v124[(unsigned int)(v125 - 1) + 1] == ++v15 )
        goto LABEL_10;
    }
    v9 = 1;
    goto LABEL_7;
  }
LABEL_10:
  v148[337] = 16;
  v139 = (void *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  v146 = v148;
  v147 = 0x1000000000LL;
  v148[336] = v151;
  v155 = v157;
  v156 = 0x400000000LL;
  v157[4] = v158;
  v17 = a1[15].m128_u64[1];
  v159 = v126;
  v149 = 0;
  v150 = 1;
  v18 = (v17 + 18264) | 6;
  v151[16] = 0;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v157[5] = 0;
  v158[0] = 0;
  v158[1] = 1;
  v160 = 1;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0;
  v19 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v142 = off_2BC64D8;
  v144 = &v139;
  v114 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v9 = 1;
  LODWORD(v143) = 3965;
  if ( !(unsigned __int8)sub_1E63C20(a1, v126, v19, 1, &v142) )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v114 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v119 = v20;
    sub_1BCD470((__int64)&v142, (__int64)a1, v18, v126, 0, 0);
    v25 = sub_F60F10(v20, (__int64)a1, v21, v22, v23, v24);
    v26 = &v142;
    if ( v25 )
      v25 += 8;
    sub_1A48440((__int64)a1, (__int64)&v142, (__int64)v25, 0);
    v31 = v143;
    v145 = 0;
    v115 = v143 + 8LL * (unsigned int)v144;
    if ( v143 != v115 )
    {
      do
      {
        v31 += 8;
        v32 = sub_C0EB40(v114, a1[15].m128_i64[1], nullptr, v28, v29);
        v26 = *(__int64 (__fastcall ****)())(v31 - 8);
        sub_1BF0CF0(
          (__int64)a1,
          (__int64)v26,
          *(_QWORD *)(v114 + 8),
          v32,
          (__int64)v124,
          v125,
          a7,
          a8,
          (unsigned int *)&v146,
          0,
          0);
      }
      while ( v115 != v31 );
    }
    v33 = (_DWORD)v147 != 1
       || (v88 = sub_F63270(v20, (__int64)v26, v27, v28, v29, v30)[16]) == 0
       || (*(_BYTE *)(v88 + 10) & 0x20) == 0
       || (v146[13] & 0x3FC01) != 15360;
    v34 = sub_F60F10(v119, (__int64)v26, v27, v28, v29, v30);
    v35 = sub_B9F870((__int64)v34);
    if ( v36 != (__int64 *)v35 && v33 )
    {
      v37 = v36;
      v38 = (__int64 *)v35;
      do
      {
        v41 = *v38 & 0xFFFFFFFFFFFFFFF8LL;
        v42 = (_QWORD *)(*(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v41 + 16) & 4) != 0 )
          v42 = (_QWORD *)*v42;
        if ( v42 )
          v42 -= 8;
        v43 = *(_BYTE *)(v41 + 28) & 0x7F;
        if ( (unsigned int)v43 - 53 <= 1 )
        {
          v41 = *(_QWORD *)(v41 + 64);
          v43 = *(_BYTE *)(v41 + 28) & 0x7F;
        }
        if ( v43 != 71 )
        {
          v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL);
          v45 = v44 == sub_B94CE0 ? sub_B709C0(v41) : v44(v41);
          if ( (*(_QWORD *)(v45 + 168) & 3LL) != 1 )
          {
            v139 = (void *)sub_AED600(v41, (__int64)v26, v46, v47);
            v50 = sub_C1BEF0((__int64)&v139, (__int64)v26, v48, v49) & 0xFFFFFFFFFFFFFFF0LL;
            v52 = *(_QWORD *)v50;
            v116 = (__int64 *)v50;
            if ( *(_BYTE *)(*(_QWORD *)v50 + 16LL) == 42
              || (v52 = sub_1BC7590(v52, (__int64)v26, v50, v51), v39 = v116, v52) )
            {
              v39 = (__int64 *)(*(_QWORD *)(v52 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            }
            v40 = *v39;
            if ( *(_BYTE *)(*v39 + 16) == 26 || (v40 = sub_1BC7360(*v39, (__int64)v26, (__int64)v39, v51)) != 0 )
            {
              v26 = (__int64 (__fastcall ***)())v41;
              sub_1C0B020(a1, v41, *v38, (__int64)v42, v40, v114, a7, a8, (__int64)v124, v125, (__int64)&v146);
            }
          }
        }
        ++v38;
      }
      while ( v37 != v38 );
      v10 = a1;
    }
    v117 = v147;
    v120 = v152 & 0x3FFFFFFF;
    v53 = sub_EEB7E0(v114, (__int64)v26, *(double *)a7.m128_u64);
    v54 = sub_1BF27B0((__int64)&v146, v10, v53, &v128, *(double *)a7.m128_u64, a8);
    switch ( v54 )
    {
      case 2:
        if ( (_DWORD)v142 == 5 )
          goto LABEL_42;
        v85 = j__strlen(&byte_22F0C30);
        sub_168B9B0((__int64)&v136, (__int64)&v10->m128_i64[1], 4746);
        v86 = *(_QWORD *)(v114 + 8);
        sub_AE9DF0((unsigned __int8 **)&v136, v86, 8u);
        v87 = (void *)sub_EEC8C0(v114, v86, *(double *)a7.m128_u64);
        LOBYTE(v140) = 1;
        v139 = v87;
        sub_AEC610((__int64 *)&v136, (__int64 *)&v139);
        LODWORD(v139) = sub_EEB7E0(v114, (__int64)&v139, *(double *)a7.m128_u64);
        sub_1582CA0((__int64)&v140, (_BYTE **)&v136);
        sub_1C022A0(
          (__int64)&v146,
          (unsigned int *)&v139,
          v10,
          2,
          (__int64)v124,
          v125,
          a7,
          a8,
          &byte_22F0C30,
          v85,
          0,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
          (__int64)&v130);
        break;
      case 3:
        if ( (*(_BYTE *)(*v128 + 83) & 8) != 0 && (v77 = *(unsigned int **)(*v128 + 128), *((_BYTE *)v77 + 4)) )
        {
          v78 = *(_QWORD *)&v77[2 * *v77 + 2];
          v79 = v78 != 0;
        }
        else
        {
          v79 = 0;
          v78 = 0;
        }
        v122 = v78;
        v123 = v79;
        v80 = j__strlen(&byte_22F0C30);
        sub_168B9B0((__int64)&v136, (__int64)&v10->m128_i64[1], 4754);
        sub_AE9DF0((unsigned __int8 **)&v136, *(_QWORD *)(v114 + 8), 8u);
        sub_AE9DF0((unsigned __int8 **)&v136, v123, 2u);
        v81 = (_BYTE *)v122;
        v82 = 0;
        if ( v122 )
        {
          v82 = *(_DWORD *)(v122 + 16) * ((*(_WORD *)(v122 + 2) >> 6) & 7u);
          v81 = (_BYTE *)(v122 + 4LL * *(unsigned int *)(v122 + 4) + 20);
        }
        v83 = (__int64)v81;
        sub_AEC220((unsigned __int8 **)&v136, v81, v82);
        v84 = (void *)sub_EEC8C0(v114, v83, *(double *)a7.m128_u64);
        LOBYTE(v140) = 1;
        v139 = v84;
        sub_AEC610((__int64 *)&v136, (__int64 *)&v139);
        LODWORD(v139) = sub_EEB7E0(v114, (__int64)&v139, *(double *)a7.m128_u64);
        sub_1582CA0((__int64)&v140, (_BYTE **)&v136);
        sub_1C022A0(
          (__int64)&v146,
          (unsigned int *)&v139,
          v10,
          0,
          (__int64)v124,
          v125,
          a7,
          a8,
          &byte_22F0C30,
          v80,
          0,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
          (__int64)&v130);
        break;
      case 1:
        v70 = (__int64)&v10->m128_i64[1];
        if ( (unsigned int)v147 | v152 & 0x3FFFFFFF )
        {
          sub_168B9B0((__int64)&v139, v70, 4766);
          v71 = v114;
          v72 = 8;
          v73 = *(_QWORD *)(v114 + 8);
        }
        else
        {
          sub_168B9B0((__int64)&v139, v70, 4760);
          v71 = v114;
          sub_AE9DF0((unsigned __int8 **)&v139, *(_QWORD *)(v114 + 8), 8u);
          v72 = 2;
          v73 = 1;
        }
        sub_AE9DF0((unsigned __int8 **)&v139, v73, v72);
        v74 = (void *)sub_EEC8C0(v71, v73, *(double *)a7.m128_u64);
        LOBYTE(v137) = 1;
        v136 = v74;
        sub_AEC610((__int64 *)&v139, (__int64 *)&v136);
        sub_1582CA0((__int64)&v136, (_BYTE **)&v139);
        v75 = v139;
        if ( v139 && v140 )
          sub_1580C40(v140, (unsigned __int64)v139);
        v76 = j__strlen(&byte_22F0C30);
        LODWORD(v139) = sub_EEB7E0(v114, (__int64)v75, *(double *)a7.m128_u64);
        sub_1582CA0((__int64)&v140, (_BYTE **)&v136);
        sub_1C022A0(
          (__int64)&v146,
          (unsigned int *)&v139,
          v10,
          0,
          (__int64)v124,
          v125,
          a7,
          a8,
          &byte_22F0C30,
          v76,
          0,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
          (__int64)&v130);
        break;
      default:
        goto LABEL_42;
    }
    if ( v140 && v141[0] )
      sub_1580C40(v141[0], v140);
    if ( v136 && v137 )
      sub_1580C40(v137, (unsigned __int64)v136);
LABEL_42:
    v56 = v128;
    if ( v128 != &v146[21 * (unsigned int)v147] )
    {
      v57 = (char *)ptr;
      v58 = (char *)ptr + 16 * (unsigned int)v134;
      if ( ptr != v58 )
      {
        do
        {
          v59 = *((_QWORD *)v57 + 1);
          v60 = *(_QWORD **)v57;
          v57 += 16;
          *v60 = v59;
        }
        while ( v58 != v57 );
      }
      v61 = v120 + (unsigned __int64)v117 > 1;
      if ( *v56 )
      {
        sub_1663420(v10, v126, v114, 0, v56[1], v55, *(double *)a7.m128_u64);
        v64 = (_QWORD *)*v128;
        if ( *(char *)(*v128 + 28) >= 0 )
        {
          v65 = *(_QWORD *)(v64[6] & 0xFFFFFFFFFFFFFFF0LL);
          v113 = v65;
          if ( *(_BYTE *)(v65 + 16) != 26 )
            v113 = sub_F63050(v65, v126, v62, v63);
          v118 = *(_WORD *)(v113 + 22);
          v130 = (v10[15].m128_u64[1] + 18264) | 6;
          v131 = v126;
          sub_B85890(v132, v130);
          v132[0] = __PAIR64__(a9, v126);
          v121 = sub_1BC7390(v10, (__int64)v64, v128[1] & 0xFFFFFFFFFFFFFFF8LL, v127, v61, v131, a7, a8, v132);
          if ( v121 != 1 )
          {
            v137 = 0x800000000LL;
            v66 = v118 + 1;
            v136 = v138;
            if ( v66 > 8 )
              sub_2237220(&v136, v138, v66, 8);
            v140 = 0x800000000LL;
            v139 = v141;
            v67 = sub_B981D0(v64, (__int64)v138);
            if ( (_BYTE)v67 )
            {
              v67 = sub_1BC8860(
                      (__int64)v10,
                      (__int64)v64,
                      v127,
                      (const void **)&v124,
                      (__int64)&v139,
                      *(double *)a7.m128_u64);
            }
            else
            {
              v94 = sub_1BF87F0((__int64)v10, v114, 0, v128[1] & 0xFFFFFFFFFFFFFFF8LL, (__int64)v64, a7, a8);
              if ( v94 == 1 )
                v67 = 1;
              else
                v114 = v94 & 0xFFFFFFFFFFFFFFFELL;
              sub_14B7B40((__int64)&v136, v114);
            }
            v69 = sub_1BCB000((__int64)v10, (__int64)&v136, (__int64)v64, (__int64)v124, v125, v126, a7, a8) | v67;
            if ( *(char *)(v113 + 19) < 0 && (unsigned int)v125 > v118 )
            {
              v95 = 8LL * v118;
              v96 = v95;
              v97 = 8 * (v118 + (unsigned __int64)((_DWORD)v125 - 1 - (unsigned int)v118) + 1);
              do
              {
                v98 = sub_192BE00((__int64)v10, *(char **)((char *)v124 + v96), 2, nullptr, v95, v68, a7, a8);
                v96 += 8;
                LOBYTE(v69) = (v98 == 1) | v69;
                sub_14B7B40((__int64)&v136, v98 & 0xFFFFFFFFFFFFFFFELL);
              }
              while ( v96 != v97 );
            }
            if ( (_BYTE)v69
              || ((sub_18CE000(
                     (__int64 *)v10,
                     (__int64)v64,
                     v126,
                     (__int64)v124,
                     v125,
                     v68,
                     (__m128i)a7,
                     *(double *)a8.m128_u64),
                   v129 = sub_C1D490((__int64)v64, (__int64)v64, v99, v100),
                   v101 = sub_18C0240(v129, (__int64)v64),
                   v129 = sub_F67970(&v129, v10[15].m128_i64[1]),
                   v102 = v10[122].m128_u32[0],
                   v10[121].m128_u64[1] == v10[122].m128_u64[0])
                ? (v103 = 0, v102 = 0)
                : (v103 = v10[122].m128_u32[1]),
                  (v104 = (unsigned __int16 *)sub_C98520(
                                                (_QWORD *)v10[15].m128_u64[1],
                                                42,
                                                v121 & 0xFFFFFFFFFFFFFFFELL,
                                                v136,
                                                (unsigned int)v137,
                                                v129,
                                                v101,
                                                a9,
                                                (v103 << 32) | v102,
                                                0),
                   v107 = sub_C1D490((__int64)v64, 42, v105, v106),
                   (unsigned __int8)sub_18C4140((__int64)v10, v107, v126, (__int64)v104, (__int64)v64))
               || (unsigned __int8)sub_16F8E60(
                                     (__int64 *)v10,
                                     (__int64)v64,
                                     (unsigned __int64)v104,
                                     v113,
                                     (__m128i)a7,
                                     *(double *)a8.m128_u64)) )
            {
              v9 = 1;
            }
            else
            {
              v111 = sub_19A3E40((__int64)v10, v104, v108, v109, v110, a7, a8);
              v9 = sub_18C3A50((__int64)v10, (unsigned __int64)v111, (__int64)v64);
            }
            if ( v139 != v141 )
              free(v139);
            if ( v136 != v138 )
              free(v136);
            goto LABEL_61;
          }
        }
      }
      else
      {
        v89 = *(_QWORD **)(v56[6] + 136);
        sub_1663420(v10, v126, v114, 0, v56[1], v55, *(double *)a7.m128_u64);
        if ( !(unsigned __int8)sub_18F5260(
                                 (__int64)v10,
                                 v128[1] & 0xFFFFFFFFFFFFFFF8LL,
                                 (int *)&v126,
                                 1u,
                                 0,
                                 0,
                                 (__m128i)a7,
                                 *(double *)a8.m128_u64,
                                 0,
                                 0,
                                 0) )
        {
          v90 = sub_1BF8E10(v10, v114, v128[1] & 0xFFFFFFFFFFFFFFF8LL, v89, v120 + (unsigned __int64)v117 > 1, a7, a8);
          if ( v90 != 1 )
          {
            v91 = v10[122].m128_u32[0];
            v92 = v10[122].m128_u32[1];
            if ( v10[121].m128_u64[1] == __PAIR64__(v92, v91) )
            {
              v92 = 0;
              v91 = 0;
            }
            v93 = sub_C0A3E0(
                    (_QWORD *)v10[15].m128_u64[1],
                    *(_QWORD *)((v90 & 0xFFFFFFFFFFFFFFFELL) + 8),
                    19,
                    v90 & 0xFFFFFFFFFFFFFFFELL,
                    0,
                    0,
                    (v92 << 32) | v91);
            v9 = sub_192A5E0(
                   (__int64)v10,
                   a2,
                   (unsigned __int16 *)(v93 & 0xFFFFFFFFFFFFFFFELL),
                   v126,
                   v124,
                   v125,
                   a7,
                   a8,
                   a9,
                   0,
                   0,
                   0);
            goto LABEL_61;
          }
        }
      }
    }
    v9 = 1;
LABEL_61:
    sub_169D230((__int64)&v142);
  }
  sub_17A20D0((__int64)&v146);
LABEL_7:
  if ( ptr != v135 )
    free(ptr);
  return v9;
}
