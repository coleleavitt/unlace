__int64 __fastcall sub_14D0170(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        _BYTE *a6,
        __m128i a7,
        char a8,
        __int64 *a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 a12)
{
  unsigned __int16 v13; // ax
  char v16; // r15
  int *m128i_i32; // r12
  __int32 v18; // eax
  __int64 result; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int16 v23; // ax
  __int64 *v24; // rdi
  __int32 v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  unsigned __int32 v30; // eax
  __int64 v31; // rdi
  __int32 v32; // eax
  __int64 *v33; // rdi
  bool v34; // zf
  __int64 *v35; // rdi
  unsigned __int32 v36; // ebx
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  unsigned __int64 v42; // rax
  const __m128i *v43; // rax
  __int32 v44; // edx
  __int64 v45; // rax
  int v46; // r12d
  __int32 v47; // eax
  __int64 v48; // rdi
  int v49; // eax
  int v50; // edx
  __int64 v51; // rdi
  size_t v52; // rax
  int v53; // eax
  char v54; // al
  size_t v55; // rax
  __m128i v56; // xmm7
  __int64 *v57; // rdi
  __int32 v58; // eax
  __int64 *v59; // rdi
  unsigned int v60; // eax
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  const __m128i *v63; // rax
  _BYTE *v64; // rbx
  __int64 v65; // rax
  __m128 v66; // xmm1
  __int32 v67; // edx
  __int64 v68; // rdi
  __m128i v69; // xmm2
  __m128i v70; // xmm3
  __int64 v71; // rax
  __int32 v72; // eax
  __int64 *v73; // rdi
  __int16 v74; // ax
  __int32 v75; // ebx
  __int64 v76; // rdi
  int v77; // eax
  __int64 v78; // rdi
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // rdi
  __int64 v82; // rbp
  __int64 v83; // rax
  __int16 v84; // dx
  __int64 v85; // rax
  size_t v86; // rax
  __int64 v87; // rdi
  __m128i v88; // xmm4
  __int64 *v89; // rdi
  __int32 v90; // eax
  __int64 *v91; // rdi
  __int64 v92; // rax
  __int32 v93; // ebx
  __int64 v94; // rdi
  __m128i v95; // xmm6
  __int64 v96; // rdi
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  int v99; // eax
  __int64 *v100; // rdi
  __int64 *v101; // rdi
  __int32 v102; // eax
  __int64 v103; // rdx
  __int64 *v104; // rdi
  unsigned __int16 v105; // r12
  char v106; // al
  __int64 v107; // r12
  __int32 v108; // eax
  __int64 *v109; // rdi
  __int64 *v110; // rdi
  __int64 *v111; // rdi
  __int64 v112; // r8
  __int64 v114; // [rsp+0h] [rbp-2C8h]
  bool v117; // [rsp+18h] [rbp-2B0h]
  __int64 v118; // [rsp+18h] [rbp-2B0h]
  __int32 v119; // [rsp+18h] [rbp-2B0h]
  unsigned __int32 v120; // [rsp+18h] [rbp-2B0h]
  __int32 v121; // [rsp+20h] [rbp-2A8h]
  __int64 v122; // [rsp+20h] [rbp-2A8h]
  unsigned __int32 v123; // [rsp+20h] [rbp-2A8h]
  __int64 v124; // [rsp+28h] [rbp-2A0h]
  unsigned __int32 v125; // [rsp+28h] [rbp-2A0h]
  __int64 v126; // [rsp+28h] [rbp-2A0h]
  __int32 v127; // [rsp+28h] [rbp-2A0h]
  __int8 v128; // [rsp+30h] [rbp-298h]
  __int32 v129; // [rsp+48h] [rbp-280h]
  char v130; // [rsp+4Ch] [rbp-27Ch]
  int v131; // [rsp+4Ch] [rbp-27Ch]
  _BYTE *v132; // [rsp+50h] [rbp-278h]
  __int64 (__fastcall *v133)(__int64); // [rsp+60h] [rbp-268h]
  __int64 v134; // [rsp+68h] [rbp-260h]
  char v135; // [rsp+97h] [rbp-231h] BYREF
  __int64 v136; // [rsp+98h] [rbp-230h] BYREF
  __int64 v137; // [rsp+A4h] [rbp-224h]
  char v138; // [rsp+ACh] [rbp-21Ch]
  __m128i v139; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v140; // [rsp+C0h] [rbp-208h]
  __int64 v141; // [rsp+D0h] [rbp-1F8h] BYREF
  __int64 v142; // [rsp+D8h] [rbp-1F0h]
  __int32 v143; // [rsp+E0h] [rbp-1E8h]
  __int32 v144; // [rsp+E4h] [rbp-1E4h]
  __int64 v145; // [rsp+F0h] [rbp-1D8h] BYREF
  __int64 v146; // [rsp+F8h] [rbp-1D0h]
  __int64 v147; // [rsp+108h] [rbp-1C0h]
  __m128i v148; // [rsp+110h] [rbp-1B8h] BYREF
  __int64 v149; // [rsp+120h] [rbp-1A8h]
  void *v150; // [rsp+128h] [rbp-1A0h]
  _BYTE v151[40]; // [rsp+138h] [rbp-190h] BYREF
  _BYTE v152[24]; // [rsp+160h] [rbp-168h] BYREF
  __m128i v153; // [rsp+178h] [rbp-150h]
  __int64 v154; // [rsp+188h] [rbp-140h]
  __m128i v155; // [rsp+190h] [rbp-138h]
  int v156; // [rsp+1A0h] [rbp-128h]
  __int64 v157; // [rsp+1A8h] [rbp-120h]
  __int32 v158; // [rsp+1B0h] [rbp-118h]
  __int16 v159; // [rsp+1B4h] [rbp-114h]
  char v160; // [rsp+1B6h] [rbp-112h]
  unsigned int v161; // [rsp+200h] [rbp-C8h]
  unsigned int v162; // [rsp+22Ch] [rbp-9Ch]

  v13 = a1[2].m128i_u16[0];
  if ( v13 == 416 )
  {
    v29 = a1[1].m128i_u32[1];
    v30 = a1[1].m128i_u32[0];
    v31 = a1[6].m128i_i64[0];
    if ( !(_DWORD)v29 )
      v29 = v30;
    sub_169D790(v31, a1[1].m128i_i64[1], (v29 << 32) | v30, a2);
    v32 = a1[1].m128i_i32[1];
    v33 = (__int64 *)a1->m128i_i64[1];
    if ( !v32 )
      v32 = a1[1].m128i_i32[0];
    a1[2].m128i_i32[2] = v32;
    sub_14634E0(v33, a1[1].m128i_i32);
    return 0;
  }
  v16 = 0;
  if ( a6 )
  {
    v16 = *a6;
    if ( *a6 )
      *a6 = 0;
  }
  if ( a9 )
    *a9 = 0;
  if ( v13 == 72 )
  {
    v20 = a1->m128i_i64[1];
    v21 = *(_QWORD *)(v20 + 2944);
    if ( *(unsigned int *)(v20 + 2912) <= v21 )
      v22 = sub_14180A0(v20, 1u);
    else
      v22 = *(_QWORD *)(v20 + 2904) + 24 * v21;
    v23 = *(_WORD *)(v22 + 16);
    if ( (v23 & 0xFFF7) == 0x83 )
      return 0;
    m128i_i32 = a1[1].m128i_i32;
    v24 = (__int64 *)a1->m128i_i64[1];
    v25 = a1[1].m128i_i32[0];
    if ( v23 == 24 )
    {
      a1[2].m128i_i32[2] = v25;
      sub_14634E0(v24, a1[1].m128i_i32);
      sub_1564820(v152, a1, a1[2].m128i_u32[2], 14);
      sub_AE9DF0((unsigned __int8 **)v152, 5, 4u);
      sub_AEA040((__int64)v152);
      v13 = a1[2].m128i_u16[0];
      if ( v13 != 329 )
        goto LABEL_9;
    }
    else
    {
      a1[2].m128i_i32[2] = v25;
      v118 = a1[6].m128i_i64[0];
      sub_14634E0(v24, a1[1].m128i_i32);
      result = sub_169D3C0(v118, a1[2].m128i_u32[2], a2);
      if ( (_BYTE)result )
        return result;
      v13 = a1[2].m128i_u16[0];
      v117 = 1;
      if ( v13 != 329 )
        goto LABEL_19;
    }
LABEL_41:
    v35 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v35, m128i_i32);
    v36 = a1[2].m128i_u32[2];
    if ( a1[2].m128i_i16[0] == 72 )
    {
      v81 = (__int64 *)a1->m128i_i64[1];
      v82 = a1[6].m128i_i64[0];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v81, m128i_i32);
      return sub_16A0930(v82, v36, a1[2].m128i_u32[2], a2);
    }
    else
    {
      sub_1564820(v152, a1, a1[1].m128i_u32[0], 1608);
      sub_AEA040((__int64)v152);
      return 1;
    }
  }
  m128i_i32 = a1[1].m128i_i32;
  if ( v13 == 329 )
    goto LABEL_41;
LABEL_9:
  v117 = v13 == 424 || v13 == 163;
  if ( v117 )
  {
    sub_147A4A0((__int64)v152, (__int64)&a1[31].m128i_i64[1]);
    v121 = a1[1].m128i_i32[0];
    v18 = sub_14A27E0((__int64)a1, (__int64)v152);
    if ( ((*(_DWORD *)v152 >> 12) & 0x7F) == 0x33 || a1[2].m128i_i16[0] != 72 )
    {
      sub_14A0250(a1, (__int64)v152, v121, v18);
      sub_147A5F0((__int64)v152);
      return 0;
    }
    v101 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v101, a1[1].m128i_i32);
    v125 = a1[2].m128i_u32[2];
    if ( (unsigned __int8)sub_169FD90(a1[6].m128i_i64[0], a2, v152, v125) )
    {
      if ( !*(_DWORD *)a2 )
        *(_DWORD *)a2 = v121;
      *(_DWORD *)(a2 + 4) = v125;
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 24) = 0;
    }
    sub_147A5F0((__int64)v152);
    v13 = a1[2].m128i_u16[0];
LABEL_19:
    v132 = a6;
    v128 = a1[3].m128i_i8[8];
    v129 = a1[3].m128i_i32[3];
    v124 = a1[4].m128i_i64[0];
    v133 = (__int64 (__fastcall *)(__int64))a1[4].m128i_i64[1];
    v134 = a1[5].m128i_i64[0];
    while ( !v117 )
    {
      v130 = v16;
      if ( v13 != 146 )
        goto LABEL_45;
      if ( !a3 )
        goto LABEL_130;
LABEL_92:
      v65 = a1[5].m128i_i64[0];
      v66 = (__m128)_mm_loadu_si128(a1 + 3);
      v67 = a1[5].m128i_i32[2];
      v68 = a1->m128i_i64[1];
      *(_QWORD *)v152 = a1;
      v154 = v65;
      LODWORD(v65) = a1[2].m128i_i32[0];
      v69 = _mm_loadu_si128(a1 + 4);
      v70 = _mm_loadu_si128(a1 + 1);
      *(__m128 *)&v152[8] = v66;
      v156 = v65;
      v71 = a1[169].m128i_u32[2];
      v153 = v69;
      v157 = v71;
      LOWORD(v71) = a1[5].m128i_i16[6];
      v155 = v70;
      v158 = v67;
      v159 = v71;
      sub_1418D30(v68, 0);
      v72 = a1[1].m128i_i32[0];
      v73 = (__int64 *)a1->m128i_i64[1];
      v160 = 1;
      a1[2].m128i_i32[2] = v72;
      sub_14634E0(v73, a1[1].m128i_i32);
      v74 = a1[2].m128i_i16[0];
      v75 = a1[2].m128i_i32[2];
      LODWORD(v145) = 0;
      v146 = 0;
      v147 = 0;
      if ( v74 == 5 )
      {
        v102 = a1[1].m128i_i32[0];
        v103 = a1[1].m128i_i64[1];
        v104 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = v102;
        v146 = v103;
        HIDWORD(v147) = v102;
        LODWORD(v147) = v102;
        sub_14634E0(v104, a1[1].m128i_i32);
      }
      else
      {
        if ( v74 != 140 )
          goto LABEL_172;
        if ( (unsigned __int8)sub_14CF100((__int64)a1, a2, (__int64)&v145, a7, v66) )
        {
          v64 = v132;
          sub_14C5EA0((__int64 *)v152);
          goto LABEL_114;
        }
        if ( (v145 & 0xFFFFFFFD) != 1 )
        {
          v64 = v132;
          sub_1564820(&v148, a1, (unsigned int)v147, 1699);
          LOBYTE(v142) = 1;
          v141 = v147;
          sub_AEC610(v148.m128i_i64, &v141);
          sub_AEA040((__int64)&v148);
          sub_14C5EA0((__int64 *)v152);
          goto LABEL_114;
        }
      }
      if ( a1[2].m128i_i16[0] != 47 )
      {
LABEL_172:
        v64 = v132;
        sub_147B460((__int64)v152);
        goto LABEL_114;
      }
      sub_14C5EA0((__int64 *)v152);
      v76 = a1[6].m128i_i64[0];
      v148.m128i_i64[0] = 0;
      v77 = sub_1CE5E60(v76, a5, (__int64)&v148, 1);
      result = sub_1556B20((_DWORD)a1, v148.m128i_i32[0], v77, a2, v75, (unsigned int)&v145, 0, 0);
      if ( (_BYTE)result )
        return result;
LABEL_98:
      v13 = a1[2].m128i_u16[0];
    }
    while ( 1 )
    {
      if ( v13 == 3 )
      {
        v26 = a1->m128i_i64[1];
        if ( *(_QWORD *)(v26 + 760) )
        {
          *(_BYTE *)(v26 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v26 + 48) + 6LL) = 1;
        }
        v27 = a1[6].m128i_i64[0];
        a1[2].m128i_i16[0] = 1;
        v28 = *(_QWORD *)(v27 + 656);
        if ( !v128 || v129 != *(_DWORD *)a2 )
        {
          v124 = 0;
          goto LABEL_27;
        }
        if ( (v124 & 0xFFFFFFFFFFFFFFF0LL) != 0 || (v124 = 0, !v133) )
        {
LABEL_27:
          sub_173BD60(v28, *(_QWORD *)(v27 + 608), a2, a5, a11, a3, v124);
        }
        else
        {
          v126 = v133(v134);
          sub_173BD60(v28, *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2, a5, a11, a3, v126);
        }
        *(_DWORD *)(a2 + 4) = a1[1].m128i_i32[0];
        return 1;
      }
      v130 = 0;
      v117 = 1;
      a3 = 0;
      if ( v13 == 146 )
        goto LABEL_92;
LABEL_45:
      if ( v13 != 418 )
        goto LABEL_46;
      v78 = a1->m128i_i64[1];
      v79 = *(_QWORD *)(v78 + 2944);
      v80 = v79 >= *(unsigned int *)(v78 + 2912) ? sub_14180A0(v78, 1u) : *(_QWORD *)(v78 + 2904) + 24 * v79;
      if ( *(_WORD *)(v80 + 16) != 72 )
        break;
      v107 = sub_1565590(a1, &a1[1]);
      if ( v16 && a1[2].m128i_i16[0] != 1 && *(_WORD *)(sub_1479960(a1->m128i_i64[1], 1u) + 16) == 40 )
      {
LABEL_88:
        v64 = v132;
        goto LABEL_89;
      }
      if ( a9 )
        *a9 = *(_QWORD *)(v107 + 8);
      v108 = a1[1].m128i_i32[1];
      v109 = (__int64 *)a1->m128i_i64[1];
      if ( !v108 )
        v108 = a1[1].m128i_i32[0];
      a1[2].m128i_i32[2] = v108;
      sub_14634E0(v109, a1[1].m128i_i32);
      v110 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v110, a1[1].m128i_i32);
      v93 = a1[2].m128i_i32[2];
      if ( !*(_DWORD *)(v107 + 32)
        || *(_BYTE *)(v107 + 48)
        || (unsigned __int8)sub_16A13C0(
                              a1[6].m128i_i64[0],
                              *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                              *(_DWORD *)(v107 + 36),
                              (unsigned __int8)v107 + 56,
                              *(_DWORD *)(v107 + 44),
                              *(_DWORD *)(v107 + 40),
                              v93) )
      {
        if ( !*(_DWORD *)a2 )
          *(_DWORD *)a2 = *(_DWORD *)(v107 + 4);
LABEL_150:
        *(_DWORD *)(a2 + 4) = v93;
        *(_QWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 24) = 0;
      }
LABEL_133:
      v13 = a1[2].m128i_u16[0];
    }
    v13 = a1[2].m128i_u16[0];
LABEL_46:
    if ( (unsigned int)v13 - 258 <= 0xF )
    {
      v37 = a1->m128i_i64[1];
      v38 = *(_QWORD *)(v37 + 2944);
      if ( v38 >= *(unsigned int *)(v37 + 2912) )
        v39 = sub_14180A0(v37, 1u);
      else
        v39 = *(_QWORD *)(v37 + 2904) + 24 * v38;
      if ( *(_WORD *)(v39 + 16) != 22 )
      {
        a1[2].m128i_i16[0] = 5;
        sub_1564840(v152, a1, &a1[1], 2001);
        v105 = a1[2].m128i_u16[0];
        v106 = sub_141A630(v105);
        if ( v105 == 1 || v106 )
          BUG();
        sub_AEC220(
          (unsigned __int8 **)v152,
          (_BYTE *)(*(_QWORD *)(a1[1].m128i_i64[1] + 16) + 16LL),
          **(unsigned int **)(a1[1].m128i_i64[1] + 16));
        sub_AE9DF0((unsigned __int8 **)v152, 0, 2u);
        sub_AEA040((__int64)v152);
        goto LABEL_98;
      }
      v13 = a1[2].m128i_u16[0];
    }
    if ( v13 != 5 )
      goto LABEL_130;
    v40 = a1->m128i_i64[1];
    v41 = a1[1].m128i_i64[1];
    v42 = *(_QWORD *)(v40 + 2944);
    if ( v42 >= *(unsigned int *)(v40 + 2912) )
      v43 = (const __m128i *)sub_14180A0(v40, 1u);
    else
      v43 = (const __m128i *)(*(_QWORD *)(v40 + 2904) + 24 * v42);
    a7 = _mm_loadu_si128(v43);
    v44 = a1[1].m128i_i32[0];
    v139 = a7;
    v45 = v43[1].m128i_i64[0];
    v143 = v44;
    v140 = v45;
    v141 = a3;
    v142 = v41;
    v144 = a7.m128i_i32[0];
    if ( (_WORD)v45 == 62 )
    {
      v46 = a5;
      if ( a1[127].m128i_i8[8] )
        goto LABEL_57;
      if ( (unsigned __int8)sub_16A7580(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2, &v141, a5) )
      {
        v96 = a1->m128i_i64[1];
        v97 = *(_QWORD *)(v96 + 2944) + 1LL;
        v98 = v97 >= *(unsigned int *)(v96 + 2912) ? sub_14180A0(v96, 2u) : *(_QWORD *)(v96 + 2904) + 24 * v97;
        if ( *(_WORD *)(v98 + 16) == 5 )
        {
          sub_1564840(v152, a1, &v139, 1910);
          v55 = j__strlen("::");
          v138 = 1;
          LODWORD(v137) = v139.m128i_i32[0];
          HIDWORD(v137) = v139.m128i_i32[0];
          sub_14C54B0((__int64)&v148, v137, 1, "::", v55);
          if ( v148.m128i_i32[0] && v148.m128i_i32[1] )
            sub_14C6E00((__int64 *)v152, (unsigned __int64)&v148);
          if ( v150 != v151 )
            operator delete(v150);
          sub_AEA040((__int64)v152);
          LOWORD(v140) = 72;
LABEL_79:
          if ( a1[2].m128i_i16[0] != 1 && *(_WORD *)(sub_1479960(a1->m128i_i64[1], 1u) + 16) == 24 )
          {
            v56 = _mm_loadu_si128(a1 + 1);
            v57 = (__int64 *)a1->m128i_i64[1];
            v149 = a1[2].m128i_i64[0];
            v58 = a1[1].m128i_i32[0];
            v148 = v56;
            a1[2].m128i_i32[2] = v58;
            sub_14634E0(v57, a1[1].m128i_i32);
            v59 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v59, a1[1].m128i_i32);
            v60 = sub_15658F0(a1);
            sub_1564820(v152, a1, v60, 14);
            sub_AE9DF0((unsigned __int8 **)v152, 5, 4u);
            sub_AEA040((__int64)v152);
            sub_14B6320(a1, &v148);
            v61 = a1->m128i_i64[1];
            v62 = *(_QWORD *)(v61 + 2944);
            if ( v62 >= *(unsigned int *)(v61 + 2912) )
              v63 = (const __m128i *)sub_14180A0(v61, 1u);
            else
              v63 = (const __m128i *)(*(_QWORD *)(v61 + 2904) + 24 * v62);
            v139 = _mm_loadu_si128(v63);
            LODWORD(v140) = v63[1].m128i_i32[0];
          }
          if ( (_WORD)v140 != 72 )
          {
LABEL_56:
            v46 = a5;
LABEL_57:
            sub_14C7A70((__int64)a1, &v139, a3, v46, v41);
            if ( (_WORD)v140 != 47 )
              goto LABEL_130;
            v47 = a1[1].m128i_i32[0];
            v48 = a1[6].m128i_i64[0];
            LODWORD(v145) = 0;
            HIDWORD(v147) = v47;
            LODWORD(v147) = v47;
            v146 = v41;
            v136 = 0;
            v49 = sub_1CE58C0(v48, v46, (__int64)&v136, (__int64)&v135, a12);
            v50 = v49;
            if ( v49 )
            {
              if ( a8 != 1 && v49 == 5 )
              {
                v99 = sub_1562FA0(a1, 1);
                v50 = 5;
                if ( v99 == 1 )
                  goto LABEL_130;
              }
              v100 = (__int64 *)a1->m128i_i64[1];
              v131 = v50;
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v100, a1[1].m128i_i32);
              v54 = sub_1556B20((_DWORD)a1, v136, v131, a2, 0, (unsigned int)&v145, 0, 0);
            }
            else
            {
              if ( v135 != 1 || a12 || !a3 && !*(_QWORD *)(a2 + 8) || !a8 && (unsigned int)sub_1562FA0(a1, 1) )
              {
LABEL_130:
                v64 = v132;
                goto LABEL_114;
              }
              v51 = a1->m128i_i64[1];
              if ( !a4 )
              {
                sub_1564820(v152, a1, a1[1].m128i_u32[0], ((**(char **)(v51 + 56) >> 31) & 0x1A6u) + 1731);
                sub_AEC220(
                  (unsigned __int8 **)v152,
                  (_BYTE *)(*(_QWORD *)(v41 + 16) + 16LL),
                  **(unsigned int **)(v41 + 16));
                v52 = j__strlen("template ");
                sub_9EC740((__int64)&v148, a1[1].m128i_i32[0], "template ", v52, 0);
                if ( v148.m128i_i32[0] && v148.m128i_i32[1] )
                  sub_14C6E00((__int64 *)v152, (unsigned __int64)&v148);
                if ( v150 != v151 )
                  operator delete(v150);
                sub_AEA040((__int64)v152);
                v51 = a1->m128i_i64[1];
              }
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0((__int64 *)v51, a1[1].m128i_i32);
              v53 = sub_1CE5E60(a1[6].m128i_i64[0], v46, (__int64)&v136, 1);
              v54 = sub_1556B20((_DWORD)a1, v136, v53, a2, 0, (unsigned int)&v145, 0, 0);
            }
            if ( v54 )
              return 1;
            goto LABEL_98;
          }
          if ( v16 && a1[2].m128i_i16[0] != 1 && *(_WORD *)(sub_1479960(a1->m128i_i64[1], 1u) + 16) == 40 )
            goto LABEL_88;
          if ( a1[127].m128i_i8[8] )
          {
            if ( a1[2].m128i_i16[0] != 1 )
            {
              v83 = sub_1479960(a1->m128i_i64[1], 1u);
              v84 = *(_WORD *)(v83 + 16);
              if ( (unsigned __int16)(v84 - 141) <= 2u || v84 == 154 )
              {
                v114 = v83;
                v64 = v132;
                sub_1564840(v152, a1, v83, 1921);
                v85 = sub_10CBF50(*(_WORD *)(v114 + 16));
                sub_AE9DF0((unsigned __int8 **)v152, v85, 1u);
                v86 = j__strlen(":");
                LOBYTE(v146) = 1;
                LODWORD(v145) = v139.m128i_i32[0];
                HIDWORD(v145) = v139.m128i_i32[0];
                sub_14C54B0((__int64)&v148, v145, 1, ":", v86);
                if ( v148.m128i_i32[0] && v148.m128i_i32[1] )
                  sub_14C6E00((__int64 *)v152, (unsigned __int64)&v148);
                if ( v150 != v151 )
                  operator delete(v150);
                sub_AEA040((__int64)v152);
                sub_14634E0((__int64 *)a1->m128i_i64[1], (int *)v152);
                v87 = a1->m128i_i64[1];
                strcpy(&v152[16], ">");
                sub_1479990(v87, (const __m128i *)v152, 1u);
LABEL_114:
                if ( v130 )
                {
                  if ( a1[2].m128i_i16[0] != 40 )
                    return 0;
LABEL_89:
                  *v64 = 1;
                }
                return 0;
              }
            }
          }
          if ( a9 )
            *a9 = v41;
          v88 = _mm_loadu_si128(a1 + 1);
          v89 = (__int64 *)a1->m128i_i64[1];
          v149 = a1[2].m128i_i64[0];
          v90 = a1[1].m128i_i32[0];
          v148 = v88;
          a1[2].m128i_i32[2] = v90;
          sub_14634E0(v89, a1[1].m128i_i32);
          v91 = (__int64 *)a1->m128i_i64[1];
          v119 = a1[2].m128i_i32[2];
          v92 = a1[2].m128i_i64[0];
          *(__m128i *)v152 = _mm_loadu_si128(a1 + 1);
          *(_QWORD *)&v152[16] = v92;
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v91, a1[1].m128i_i32);
          v93 = a1[2].m128i_i32[2];
          LOBYTE(v145) = 0;
          if ( a1[127].m128i_i8[8] )
          {
            if ( !(unsigned __int8)sub_16A7500(
                                     a1[6].m128i_i64[0],
                                     *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                                     (unsigned int)&v141,
                                     a5,
                                     a2,
                                     (unsigned int)&v145,
                                     a10) )
              goto LABEL_133;
            if ( (_BYTE)v145 )
            {
              v94 = a1->m128i_i64[1];
              strcpy(&v152[16], ">");
              v64 = v132;
              sub_1479990(v94, a1 + 1, 1u);
              sub_1479990(a1->m128i_i64[1], (const __m128i *)v152, 1u);
              v95 = _mm_load_si128(&v148);
              a1[2].m128i_i32[0] = v149;
              a1[1] = v95;
              goto LABEL_114;
            }
          }
          else if ( !(unsigned __int8)sub_16A7500(
                                        a1[6].m128i_i64[0],
                                        *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                                        (unsigned int)&v141,
                                        a5,
                                        a2,
                                        0,
                                        a10) )
          {
            goto LABEL_133;
          }
          if ( !*(_DWORD *)a2 )
            *(_DWORD *)a2 = v119;
          goto LABEL_150;
        }
      }
      LOWORD(v45) = v140;
    }
    if ( (_WORD)v45 != 72 )
      goto LABEL_56;
    goto LABEL_79;
  }
  if ( v13 != 5 )
    goto LABEL_19;
  v34 = *(_WORD *)(sub_1479960(a1->m128i_i64[1], 0) + 16) == 27;
  v13 = a1[2].m128i_u16[0];
  if ( !v34 || v13 == 1 )
    goto LABEL_19;
  if ( *(_WORD *)(sub_1479960(a1->m128i_i64[1], 1u) + 16) != 20
    || a1[2].m128i_i16[0] != 1 && *(_WORD *)(sub_1479960(a1->m128i_i64[1], 2u) + 16) == 21 )
  {
    v13 = a1[2].m128i_u16[0];
    goto LABEL_19;
  }
  v120 = a1[1].m128i_u32[0];
  sub_147A4A0((__int64)v152, (__int64)&a1[31].m128i_i64[1]);
  v127 = sub_14A2C40((__int64)a1, v152);
  if ( ((*(_DWORD *)v152 >> 12) & 0x7F) != 0x45 )
  {
    v122 = sub_1E666F0(a1[6].m128i_i64[0], *(_QWORD *)&v152[8], *(_QWORD *)&v152[16], v161, v162);
    if ( (v122 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( a1[2].m128i_i16[0] == 72
        || (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 2LL) & 2) == 0
        && (*(_BYTE *)(*(_QWORD *)(a1[6].m128i_i64[0] + 608) + 9LL) & 2) != 0
        && (sub_1564820(&v148, a1, v120, 2222),
            sub_AE9DF0((unsigned __int8 **)&v148, v122, 8u),
            sub_AEA040((__int64)&v148),
            a1[2].m128i_i16[0] == 72) )
      {
        v111 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v111, a1[1].m128i_i32);
        v112 = v122;
        v123 = a1[2].m128i_u32[2];
        if ( (unsigned __int8)sub_169FC00(a1[6].m128i_i64[0], a2, v152, v123, v112) )
        {
          if ( !*(_DWORD *)a2 )
            *(_DWORD *)a2 = v120;
          *(_DWORD *)(a2 + 4) = v123;
          *(_QWORD *)(a2 + 8) = 0;
          *(_DWORD *)(a2 + 24) = 0;
        }
        sub_147A5F0((__int64)v152);
        v13 = a1[2].m128i_u16[0];
        v117 = 1;
        goto LABEL_19;
      }
      sub_14A0380(a1, v122, v120, v127);
    }
  }
  sub_147A5F0((__int64)v152);
  return 0;
}
