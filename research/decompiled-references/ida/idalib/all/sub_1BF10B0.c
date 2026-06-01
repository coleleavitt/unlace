char __fastcall sub_1BF10B0(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9,
        char a10,
        char a11,
        unsigned __int8 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17,
        char a18)
{
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rax
  char result; // al
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // r12
  unsigned int v31; // edx
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  __int64 v42; // rbx
  unsigned int v43; // r15d
  unsigned int v44; // eax
  unsigned __int64 v45; // rax
  unsigned __int16 v46; // bx
  bool v47; // al
  unsigned int v48; // eax
  __int64 v49; // r9
  __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r10
  __int64 v55; // rdx
  __int64 v56; // r15
  __int64 v57; // rbp
  unsigned int *v58; // rcx
  __int64 v59; // rax
  int v60; // edx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // r15
  _BYTE *v64; // rbx
  __int64 v65; // r8
  unsigned __int64 v66; // rsi
  __int64 v67; // r11
  __int64 v68; // rdx
  char v69; // cl
  unsigned __int64 v70; // rdx
  char v71; // cl
  __int64 v72; // rax
  unsigned int v73; // eax
  __int64 v74; // r12
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // r9
  __int64 *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  unsigned __int16 v83; // di
  __int64 v84; // rax
  unsigned int v85; // eax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // r8
  unsigned int v89; // eax
  unsigned int v90; // eax
  unsigned int v91; // eax
  unsigned int v92; // eax
  unsigned int v93; // eax
  __int64 v94; // rsi
  __int64 v95; // rcx
  __int64 v96; // rdx
  unsigned __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // r8
  __int64 v101; // rdi
  unsigned __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  unsigned __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rsi
  __int64 v113; // r15
  unsigned __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  unsigned int v118; // ebx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // r8
  __int64 v122; // r9
  unsigned int v123; // eax
  unsigned int v124; // eax
  __int64 v129; // [rsp+20h] [rbp-168h]
  __int64 v130; // [rsp+20h] [rbp-168h]
  __int64 v131; // [rsp+28h] [rbp-160h]
  __int64 v132; // [rsp+28h] [rbp-160h]
  __int64 v133; // [rsp+28h] [rbp-160h]
  unsigned __int64 v134; // [rsp+28h] [rbp-160h]
  unsigned __int64 v136; // [rsp+38h] [rbp-150h]
  unsigned int v137; // [rsp+40h] [rbp-148h]
  __int64 v138; // [rsp+48h] [rbp-140h]
  __int64 v139; // [rsp+50h] [rbp-138h]
  unsigned __int64 v140; // [rsp+58h] [rbp-130h]
  __int64 v141; // [rsp+58h] [rbp-130h]
  __int64 v142; // [rsp+58h] [rbp-130h]
  unsigned __int64 v143; // [rsp+60h] [rbp-128h]
  unsigned __int64 v144; // [rsp+60h] [rbp-128h]
  unsigned __int64 v145; // [rsp+68h] [rbp-120h]
  __int64 v146; // [rsp+70h] [rbp-118h]
  __int64 v147; // [rsp+70h] [rbp-118h]
  __int64 v149; // [rsp+88h] [rbp-100h] BYREF
  __m128i v150; // [rsp+90h] [rbp-F8h] BYREF
  void **p_ptr; // [rsp+A0h] [rbp-E8h]
  __int64 v152; // [rsp+A8h] [rbp-E0h]
  void *ptr; // [rsp+B0h] [rbp-D8h] BYREF
  char v154; // [rsp+C0h] [rbp-C8h] BYREF
  __int16 v155; // [rsp+110h] [rbp-78h]
  __int64 *v156; // [rsp+118h] [rbp-70h]
  __int64 v157; // [rsp+120h] [rbp-68h]
  __int64 v158; // [rsp+128h] [rbp-60h] BYREF

  v19 = a2;
  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(unsigned __int8 *)(v20 + 16);
  if ( (unsigned int)(v21 - 25) > 1 )
  {
    v22 = sub_1BC7560(v20, a2, v21, (__int64)a4);
    LOBYTE(v21) = *(_BYTE *)(v22 + 16);
    v20 = v22;
  }
  if ( (_BYTE)v21 != 26 )
    v20 = 0;
  if ( ((*(_BYTE *)(a2 + 28) + 93) & 0x7Fu) > 2 )
  {
    result = sub_1BCD280((__int64)a6, a2, a16);
    if ( !result )
      return result;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 )
    {
      if ( (*(_BYTE *)(a2 + 83) & 2) != 0 )
      {
        v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
        v25 = v24 == sub_B94CC0 ? sub_B709C0(a2) : v24(a2);
        if ( (*(_BYTE *)(v25 + 82) & 0x40) != 0 )
        {
          v150.m128i_i32[0] = 0;
          result = sub_B99060(a2, &v150, v26, v27);
          if ( result )
            return result;
        }
      }
      v139 = a2;
    }
    else
    {
      v139 = 0;
    }
    sub_18C74E0((__int64)a1, 0, 0, 4);
    if ( a6[743] != 1 )
      goto LABEL_18;
    v74 = *(_QWORD *)(*a4 + 8);
    if ( a5 <= 1 )
    {
      v76 = 0;
      v75 = v74 & 0xFFFFFFFFFFFFFFF0LL;
      v77 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v77 + 17) & 4) != 0 )
        goto LABEL_18;
    }
    else
    {
      v75 = v74 & 0xFFFFFFFFFFFFFFF0LL;
      v76 = *(_QWORD *)(a4[1] + 8);
      v77 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v77 + 17) & 4) != 0 )
        goto LABEL_18;
      v78 = v76 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v76 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v79 = v76 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (*(_BYTE *)(*(_QWORD *)v78 + 17LL) & 4) != 0
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v77 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v78 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
        {
          goto LABEL_18;
        }
        goto LABEL_80;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v77 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
      goto LABEL_18;
    v79 = 0;
    v78 = 0;
LABEL_80:
    v80 = (__int64 *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v81 = *v80;
    if ( *(_BYTE *)(*v80 + 16) != 26 )
    {
      v146 = v76;
      v143 = v79;
      v140 = v78;
      v82 = sub_F63050(*v80, v75, v76, v81);
      v76 = v146;
      v79 = v143;
      v78 = v140;
      v81 = v82;
    }
    v83 = *(_WORD *)(v81 + 22);
    if ( !v83 )
      return sub_190D5E0((__int64)a1, a7);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
    {
      v147 = v76;
      v145 = v79;
      v144 = v78;
      v142 = v81;
      v150.m128i_i64[0] = *(_QWORD *)(v81 + 48);
      v75 = sub_C1BEF0((__int64)&v150, v75, v76, v81);
      if ( sub_1BC70C0(v74, v75) )
        goto LABEL_18;
      v81 = v142;
      v76 = v147;
      v79 = v145;
      v78 = v144;
      v83 = *(_WORD *)(v142 + 22);
    }
    if ( v83 <= 1u )
      return sub_190D5E0((__int64)a1, a7);
    if ( !v78 )
      return sub_190D5E0((__int64)a1, a7);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v79 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
      return sub_190D5E0((__int64)a1, a7);
    v141 = v76;
    v150.m128i_i64[0] = *(_QWORD *)(v81 + 56);
    v84 = sub_C1BEF0((__int64)&v150, v75, v76, v81);
    if ( !sub_1BC70C0(v141, v84) )
      return sub_190D5E0((__int64)a1, a7);
LABEL_18:
    v29 = (unsigned int)a5;
    v30 = sub_1BD9C70((__int64)a6, a5, a14, a15);
    *(_QWORD *)v30 = v19;
    *(_QWORD *)(v30 + 8) = a3;
    *(_BYTE *)(v30 + 104) |= 1u;
    v31 = a6[744];
    v32 = 0;
    if ( v31 )
    {
      v32 = 1;
      v29 = *(_QWORD *)(v19 + 40) & 7LL;
      if ( (_DWORD)v29 == 6 )
        v32 = *(_DWORD *)(*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFF8LL) != v31;
    }
    *(_DWORD *)(v30 + 108) = a5;
    if ( a16 == 1 )
      v32 |= 2u;
    *(_BYTE *)(v30 + 105) = *(_BYTE *)(v30 + 105) & 0xFC | v32 & 3;
    *(_BYTE *)(v30 + 104) = (32 * (a18 & 1)) | ((a13 & 1) << 6) | *(_BYTE *)(v30 + 104) & 0x9F;
    if ( !a11 && (sub_B97670(v19) & 3) == 1 )
    {
      v85 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
      BYTE1(v85) |= 0x28u;
      *(_DWORD *)(v30 + 104) = v85;
      return sub_190D5E0((__int64)a1, a7);
    }
    if ( (*(_BYTE *)(a1[29] + 21LL) & 4) == 0 || !sub_B8D690(v19) )
      goto LABEL_26;
    v62 = sub_B77B20(v19);
    if ( v62 )
    {
      v63 = *(_QWORD *)(v62 + 16);
      v64 = (_BYTE *)(v63 & 0xFFFFFFFFFFFFFFF8LL);
      if ( sub_B8D940(v19) )
      {
        if ( (v63 & 6) == 0 )
        {
LABEL_63:
          sub_B844D0(v64);
LABEL_26:
          if ( sub_1BC6D50((_BYTE *)v19) )
          {
            v28 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
            BYTE1(v28) |= 0x34u;
            *(_DWORD *)(v30 + 104) = v28;
            return sub_190D5E0((__int64)a1, a7);
          }
          if ( v139 )
          {
            v35 = a1[31];
            v36 = sub_B72690(v139 + 72);
            if ( !v36 )
              BUG();
            v40 = *(_QWORD *)(v36 - 16);
            if ( v40 )
            {
              v41 = v40 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v29 = v36 - 64;
              v41 = sub_A7AA70(v35, v36 - 64, v37, 0, v38, v39);
            }
            if ( a5 == 1 )
            {
              if ( sub_B991E0(v139, v29, v37, v40) )
              {
                v129 = *(_QWORD *)(*a4 + 8);
                if ( sub_1BC70C0(v41, v129)
                  || (v29 = (unsigned int)sub_EEB7E0(v97, v129, *(double *)a7.m128_u64),
                      (unsigned __int8)sub_183BD10((__int64)a1, v29, v129, v41, v98, v99)) )
                {
                  v124 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
                  BYTE1(v124) |= 0x14u;
                  *(_DWORD *)(v30 + 104) = v124;
                  return sub_190D5E0((__int64)a1, a7);
                }
              }
              if ( (*(_BYTE *)((a3 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x36 )
              {
                if ( (unsigned int)sub_B76070(v139, v29, v37, v40) )
                {
                  v101 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v139 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v101 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 16LL)
                     - 43 <= 1 )
                  {
                    v130 = sub_F68450(v101, v29, v37, v40, v100);
                    v133 = a1[31];
                    v102 = sub_B72690(v139 + 72);
                    v106 = v102 - 64;
                    if ( v102 )
                      v102 -= 64LL;
                    v107 = sub_A7A9D0(v133, v102, v103, v106, v104, v105);
                    v112 = *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                    v113 = v107;
                    if ( (v112 & 4) != 0 )
                      v114 = *(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF8LL);
                    else
                      v114 = v112 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v114 )
                      v114 -= 64LL;
                    v134 = sub_A7A9D0(a1[31], v114, v108, v109, v110, v111);
                    v118 = sub_C00A40(*a4, v114, v115, v116, v117);
                    if ( sub_1BC70C0(v130, v113)
                      || (v29 = v118, (unsigned __int8)sub_183BD10((__int64)a1, v118, v130, v113, v119, v120)) )
                    {
                      if ( sub_1BC70C0(v134, v130)
                        || (v29 = v118, (unsigned __int8)sub_183BD10((__int64)a1, v118, v134, v130, v121, v122)) )
                      {
                        v123 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
                        BYTE1(v123) |= 0x30u;
                        *(_DWORD *)(v30 + 104) = v123;
                        return sub_190D5E0((__int64)a1, a7);
                      }
                    }
                  }
                }
              }
            }
            v42 = a1[31];
            v43 = a6[1964];
            v44 = (unsigned int)sub_1703690(v139, v29, v37, v40) >> 9;
            if ( v43 != v44 )
            {
              v29 = v43;
              if ( !sub_F56A30(v44, v43, v42) )
              {
                v91 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
                BYTE1(v91) |= 0x38u;
                *(_DWORD *)(v30 + 104) = v91;
              }
            }
          }
          v45 = *(unsigned __int16 *)(v20 + 22);
          v46 = *(_WORD *)(v20 + 22);
          if ( a5 && a10 )
          {
            v33 = a5 + 1;
            v47 = v45 < a5 + 1;
          }
          else
          {
            v47 = v45 < a5;
          }
          if ( v47 && *(char *)(v20 + 19) >= 0 )
          {
            v29 = v19;
            if ( (unsigned __int8)sub_1BD7850(a10, v19, v33, v34) )
            {
              *(_DWORD *)(v30 + 104) &= 0xFFFC03FE;
              return sub_190D5E0((__int64)a1, a7);
            }
          }
          v48 = sub_B770E0(v19, v29);
          if ( !a17 && v48 > a5 && !a10 )
          {
            v93 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
            BYTE1(v93) |= 4u;
            *(_DWORD *)(v30 + 104) = v93;
            return sub_190D5E0((__int64)a1, a7);
          }
          if ( (*(_BYTE *)(a1[29] + 60LL) & 0x10) != 0 )
          {
            v86 = sub_15F1640((__int64)a1, 1);
            if ( (!v86 || (*(_BYTE *)(v86 + 29) & 2) == 0)
              && !(unsigned int)sub_178F000(a1[83], v86, v19, v87, v88, v49) )
            {
              v89 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
              BYTE1(v89) |= 0x20u;
              *(_DWORD *)(v30 + 104) = v89;
              return sub_190D5E0((__int64)a1, a7);
            }
          }
          v50 = *(_QWORD *)(v19 + 56);
          if ( (v50 & 4) != 0 && *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
          {
            a7 = 0;
            v155 = 0;
            p_ptr = &ptr;
            v156 = &v158;
            v150 = 0;
            v152 = 0x400000000LL;
            v157 = 0x400000000LL;
            if ( (unsigned __int8)sub_17516B0((__int64)a1, v19, (__int64)&v150, 0, 1u, 0.0) || !(_BYTE)v155 )
            {
              v90 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
              BYTE1(v90) |= 0x3Cu;
              *(_DWORD *)(v30 + 104) = v90;
              sub_1BCD1D0(&v150);
              return sub_190D5E0((__int64)a1, a7);
            }
            sub_1BCD1D0(&v150);
          }
          v51 = v46;
          v52 = 0;
          v137 = v51;
          v53 = 0;
          if ( !a5 )
          {
LABEL_54:
            v59 = sub_1BCB950((__int64)a1, v19, a6[742], (__int64)a4, a5, v49, a7, a8);
            if ( v59 )
            {
              v60 = *(_DWORD *)(v30 + 104);
              *(_QWORD *)(v30 + 120) = v59;
              v60 &= 0xFFFC03FE;
              BYTE1(v60) |= 0x24u;
              *(_DWORD *)(v30 + 104) = v60;
            }
            return sub_190D5E0((__int64)a1, a7);
          }
          v54 = v20;
          v136 = v19;
          while ( 1 )
          {
            v55 = (unsigned int)(1 - v52);
            if ( a16 != 1 )
              v55 = v52;
            v56 = 19 * v55;
            v57 = 152 * v55;
            v58 = (unsigned int *)(152 * v55 + *(_QWORD *)(v30 + 48));
            if ( (*v58 & 0x7FFFFFFF) != 6 )
              goto LABEL_47;
            if ( v137 > (unsigned int)v52 )
            {
              v65 = 8 * v53;
              v66 = *(_QWORD *)(v54 + 16);
              v149 = *(_QWORD *)(v54 + 8 * v53 + 48);
              if ( (v66 & 0x20000000) != 0 )
              {
                v67 = 8LL * *(unsigned __int16 *)(v54 + 22) + 48;
                v68 = (v66 & 0x40000000) != 0;
                v69 = *(_BYTE *)(v54 + 19);
                if ( (v69 & 0x40) != 0 )
                  v68 += (*(_BYTE *)(((v54 + v67 + ((v69 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                v70 = ((v54 + v67 + ((SBYTE3(v66) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v68;
                v71 = ((unsigned __int8)v69 >> 1) & 0xF;
                if ( v71 != 2 )
                  __asm { jmp     rsi }
                v94 = v66 >> 24;
                v95 = *(_WORD *)((v54 + (((char)v94 >> 5) & 4) + v67 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF;
                v96 = v70 + 8 * v95;
                if ( (*(_BYTE *)(v96 + v53) & 0xFu) - 5 <= 1 )
                {
                  v138 = v54;
                  v131 = 8 * v53;
                  v72 = sub_C1BEF0((__int64)&v149, v94, v96, v95);
                  v54 = v138;
                  v65 = v131;
                  v149 = v72;
                }
              }
              v132 = v54;
              sub_1BEC520(
                &v150,
                (__int64)a1,
                *(_WORD **)((char *)a4 + v65),
                v149,
                a9,
                1u,
                a7,
                a8,
                (*(_BYTE *)(a1[29] + 107LL) & 4) != 0,
                a12);
              sub_1BD9390((__m128i *)(v57 + *(_QWORD *)(v30 + 48)), &v150);
              v54 = v132;
              if ( (v150.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v154 )
              {
                free(ptr);
                v54 = v132;
              }
              if ( (*(_DWORD *)(*(_QWORD *)(v30 + 48) + 8 * v56) & 0x7FFFFFFF) == 5 )
              {
                v73 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
                BYTE1(v73) |= 8u;
                *(_DWORD *)(v30 + 104) = v73;
                return sub_190D5E0((__int64)a1, a7);
              }
LABEL_47:
              v52 = (unsigned int)(v52 + 1);
              v53 = (unsigned int)v52;
              if ( (unsigned int)v52 >= a5 )
                goto LABEL_53;
            }
            else
            {
              v52 = (unsigned int)(v52 + 1);
              v53 = (unsigned int)v52;
              *v58 = *v58 & 0x80000000 | 4;
              if ( (unsigned int)v52 >= a5 )
              {
LABEL_53:
                v19 = v136;
                goto LABEL_54;
              }
            }
          }
        }
        goto LABEL_110;
      }
    }
    else
    {
      v64 = (_BYTE *)v19;
      if ( sub_B8D940(v19) )
      {
LABEL_110:
        if ( (*(_BYTE *)(v19 + 82) & 1) != 0 )
          goto LABEL_63;
        if ( (unsigned __int8)sub_B844D0(v64) != 2 )
          goto LABEL_26;
LABEL_112:
        v92 = *(_DWORD *)(v30 + 104) & 0xFFFC03FE;
        BYTE1(v92) |= 0x40u;
        *(_DWORD *)(v30 + 104) = v92;
        return sub_190D5E0((__int64)a1, a7);
      }
    }
    if ( (unsigned __int8)sub_B844D0(v64) != 2 )
      goto LABEL_26;
    goto LABEL_112;
  }
  v61 = sub_B72690(a2 + 72);
  if ( v61 )
    v61 -= 64LL;
  return sub_1BEF9D0(
           (__int64)a1,
           a2,
           a3,
           v61,
           0,
           (unsigned __int16)&stru_10000,
           a7,
           a8,
           (__int64)a4,
           a5,
           a6,
           a9,
           a10,
           a14,
           a15,
           a16,
           a18);
}
