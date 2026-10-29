void *__fastcall sub_1B39770(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // r14
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // r13
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  _DWORD *v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbp
  char v35; // r9
  char v36; // r11
  int v37; // r13d
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int16 v42; // ax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  _WORD *v45; // rbx
  unsigned __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  char v49; // bp
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbp
  __int64 v53; // rdx
  unsigned int v54; // eax
  _BYTE *v55; // rcx
  _QWORD *v56; // rbx
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // rbp
  __int64 v60; // rax
  void *v61; // rbp
  __int64 v63; // rax
  unsigned int v64; // eax
  char v65; // al
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rbp
  __int64 v76; // rax
  __int64 v77; // r9
  unsigned int v78; // r13d
  __int64 v80; // rax
  char *v81; // rbx
  size_t v82; // rax
  __m128i *v83; // rax
  __int64 v84; // r15
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 **v88; // r12
  __int64 v89; // r14
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  unsigned __int64 v95; // rdx
  unsigned int v96; // edx
  unsigned int v97; // ecx
  unsigned int v98; // eax
  __int64 v99; // rdx
  char *v100; // r15
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rcx
  bool v104; // zf
  __int64 v105; // rax
  unsigned int v106; // [rsp+0h] [rbp-298h]
  unsigned __int64 v107; // [rsp+0h] [rbp-298h]
  unsigned int v108; // [rsp+Ch] [rbp-28Ch]
  unsigned __int64 *v109; // [rsp+10h] [rbp-288h]
  char v110; // [rsp+19h] [rbp-27Fh]
  char v111; // [rsp+1Ah] [rbp-27Eh]
  char v112; // [rsp+1Bh] [rbp-27Dh]
  int v113; // [rsp+1Ch] [rbp-27Ch]
  __int64 v115; // [rsp+48h] [rbp-250h]
  unsigned int v117; // [rsp+54h] [rbp-244h]
  __int64 v118; // [rsp+58h] [rbp-240h]
  _BOOL4 v119; // [rsp+74h] [rbp-224h] BYREF
  __int64 v120; // [rsp+78h] [rbp-220h] BYREF
  void *v121[2]; // [rsp+80h] [rbp-218h] BYREF
  _BYTE v122[16]; // [rsp+90h] [rbp-208h] BYREF
  void *v123; // [rsp+A0h] [rbp-1F8h] BYREF
  int v124; // [rsp+A8h] [rbp-1F0h]
  char v125; // [rsp+ACh] [rbp-1ECh]
  __int64 v126; // [rsp+B0h] [rbp-1E8h] BYREF
  void *v127; // [rsp+C0h] [rbp-1D8h] BYREF
  __int64 v128; // [rsp+C8h] [rbp-1D0h]
  __m128i v129; // [rsp+D0h] [rbp-1C8h] BYREF
  unsigned int v130; // [rsp+E0h] [rbp-1B8h]
  __m128i v131; // [rsp+110h] [rbp-188h] BYREF
  _BYTE v132[64]; // [rsp+120h] [rbp-178h] BYREF
  __m128i ptr; // [rsp+160h] [rbp-138h] BYREF
  _QWORD v134[8]; // [rsp+170h] [rbp-128h] BYREF
  __m128 v135; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v136; // [rsp+1C0h] [rbp-D8h] BYREF
  unsigned __int8 *v137; // [rsp+1D0h] [rbp-C8h] BYREF
  void *v138; // [rsp+200h] [rbp-98h] BYREF
  _BYTE v139[64]; // [rsp+210h] [rbp-88h] BYREF
  void *v140; // [rsp+250h] [rbp-48h] BYREF
  unsigned int v141; // [rsp+258h] [rbp-40h]
  char v142; // [rsp+25Ch] [rbp-3Ch]

  v118 = a2;
  v108 = *(_DWORD *)a2;
  LODWORD(v115) = *(_DWORD *)(a2 + 4);
  v13 = sub_1AE5FF0(a1[1]);
  if ( !v13 )
    goto LABEL_5;
  v17 = *(_DWORD *)(v13 + 976);
  if ( v17 == 47 )
  {
    v117 = v108 - 5;
    if ( v108 - 5 > 1 )
    {
      sub_168B9F0((__int64)&v135, a1, v115, 0x1217u, 0);
      if ( v139[24] )
      {
        sub_AE9DF0(&v137, (__int64)"'source' or 'sink'", 1u);
      }
      else if ( v139[36] )
      {
        sub_1B132F0((__int64)&v135, (__int64)"'source' or 'sink'");
      }
      sub_1AF81E0(&ptr, 0x16u);
      sub_1682AF0((__int64)&v135, (__int64)&ptr);
      if ( (_QWORD *)ptr.m128i_i64[0] != v134 )
        operator delete((void *)ptr.m128i_i64[0]);
      goto LABEL_143;
    }
    if ( !a3 )
      goto LABEL_89;
    v98 = sub_C00A40(a3, a2, v14, v15, v16);
    v97 = 4471;
    v96 = v98;
LABEL_142:
    sub_168B9F0((__int64)&v135, a1, v96, v97, 0);
LABEL_143:
    v61 = nullptr;
    sub_15F7200(&v135);
    return v61;
  }
  if ( v17 == 92 && v108 == 3 )
  {
    v96 = v115;
    v97 = 4623;
    goto LABEL_142;
  }
LABEL_5:
  v117 = v108 - 5;
  if ( v108 == 10
    || v108 - 5 <= 1
    || (*(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x31u
     || (v63 = sub_1AE5FF0(a1[1])) != 0 && *(_DWORD *)(v63 + 976) == 17)
    && v108 == 4 )
  {
    ptr.m128i_i64[0] = (__int64)v134;
    v134[0] = 0x600000005LL;
    v134[1] = 0x900000008LL;
    ptr.m128i_i64[1] = 0x600000004LL;
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x31u
      || (v80 = sub_1AE5FF0(a1[1])) != 0 && *(_DWORD *)(v80 + 976) == 17 )
    {
      v92 = ptr.m128i_u32[2];
      v93 = ptr.m128i_u32[2] + 1LL;
      if ( v93 > ptr.m128i_u32[3] )
      {
        sub_2237220(&ptr, v134, v93, 4);
        v92 = ptr.m128i_u32[2];
      }
      *(_DWORD *)(ptr.m128i_i64[0] + 4 * v92) = 4;
      ++ptr.m128i_i32[2];
    }
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x32u )
    {
      v94 = ptr.m128i_u32[2];
      v95 = ptr.m128i_u32[2] + 1LL;
      if ( v95 > ptr.m128i_u32[3] )
      {
        sub_2237220(&ptr, v134, v95, 4);
        v94 = ptr.m128i_u32[2];
      }
      *(_DWORD *)(ptr.m128i_i64[0] + 4 * v94) = 7;
      ++ptr.m128i_i32[2];
    }
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x31u || (v81 = "depend modifier(iterator) or ", a3) )
      v81 = (char *)&byte_22F0C30;
    v121[0] = v122;
    v82 = j__strlen(v81);
    sub_1AEB960(v121, v81, (__int64)&v81[v82]);
    sub_168B9F0((__int64)&v135, a1, v115, 0x1217u, 0);
    sub_1AEE640(&v123, 22, 0, 0xAu, ptr.m128i_i64[0], ptr.m128i_u32[2]);
    v83 = (__m128i *)sub_99BDC0(&v123, 0, 0, (_BYTE *)v121[0], (size_t)v121[1]);
    v127 = &v129;
    if ( (__m128i *)v83->m128i_i64[0] == &v83[1] )
    {
      v129 = _mm_loadu_si128(v83 + 1);
    }
    else
    {
      v127 = (void *)v83->m128i_i64[0];
      v129.m128i_i64[0] = v83[1].m128i_i64[0];
    }
    v128 = v83->m128i_i64[1];
    v83->m128i_i64[0] = (__int64)v83[1].m128i_i64;
    v83->m128i_i64[1] = 0;
    v83[1].m128i_i8[0] = 0;
    v84 = sub_1682AF0((__int64)&v135, (__int64)&v127);
    sub_1AF81E0(&v131, 0x16u);
    sub_1682AF0(v84, (__int64)&v131);
    if ( (_BYTE *)v131.m128i_i64[0] != v132 )
      operator delete((void *)v131.m128i_i64[0]);
    if ( v127 != &v129 )
      operator delete(v127);
    if ( v123 != &v126 )
      operator delete(v123);
    sub_15F7200(&v135);
    if ( v121[0] != v122 )
      operator delete(v121[0]);
    if ( (_QWORD *)ptr.m128i_i64[0] != v134 )
      free((void *)ptr.m128i_i64[0]);
    return nullptr;
  }
  if ( a3 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) != 13 || ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1FC )
    {
      v64 = sub_C00A40(a3, a2, v14, v15, v16);
      a2 = (__int64)a1;
      sub_168B9F0((__int64)&v135, a1, v64, 0x1174u, 0);
      sub_15F7200(&v135);
    }
    v125 = 1;
    v131.m128i_i64[0] = (__int64)v132;
    v131.m128i_i64[1] = 0x800000000LL;
    ptr.m128i_i64[0] = (__int64)v134;
    ptr.m128i_i64[1] = 0x400000000LL;
    v124 = 32;
    v123 = nullptr;
    goto LABEL_13;
  }
LABEL_89:
  v124 = 32;
  v131.m128i_i64[0] = (__int64)v132;
  v131.m128i_i64[1] = 0x800000000LL;
  ptr.m128i_i64[0] = (__int64)v134;
  ptr.m128i_i64[1] = 0x400000000LL;
  v123 = nullptr;
  v125 = 1;
  if ( v117 <= 1 )
  {
    sub_1B38B60((__int64)&v135, *a1, v108 == 5, a4, a5, a1[1], a7, a8, a10);
    sub_1AC2FD0((void **)&v131, (char **)&v135);
    sub_1AF7EA0((__int64 **)&ptr, (__int64 **)&v138);
    if ( v141 <= 0x40 )
    {
      v124 = v141;
      v123 = v140;
      v125 = v142;
    }
    else
    {
      sub_22056A0(&v123, &v140);
      v125 = v142;
      if ( v141 > 0x40 && v140 )
        operator delete[](v140);
    }
    if ( v138 != v139 )
      free(v138);
    if ( (__int64 *)v135.m128_u64[0] != &v136 )
      free((void *)v135.m128_u64[0]);
    v55 = (_BYTE *)v131.m128i_i64[0];
    v53 = v131.m128i_u32[2];
    v54 = v124;
    v56 = v123;
LABEL_46:
    if ( v54 > 0x40 )
      v56 = (_QWORD *)*v56;
    goto LABEL_48;
  }
LABEL_13:
  v109 = &a4[a5];
  if ( a4 == v109 )
  {
    v61 = nullptr;
    if ( v108 - 8 > 1 )
      goto LABEL_53;
    LODWORD(v56) = 0;
    v53 = 0;
    v55 = v132;
LABEL_48:
    v57 = (__int64)v55;
    v58 = v53;
    v59 = *(_QWORD *)(v118 + 8);
    v60 = sub_168B6C0((__int64)a1);
    v61 = (void *)sub_EBE7E0(v60, a6, a9, a10, (v115 << 32) | v108, v59, a3, v57, v58, (unsigned int)v56);
    if ( v117 > 1 )
      goto LABEL_49;
    v85 = a1[1];
    v86 = sub_1AE6050(v85);
    if ( !v86 || !*(_BYTE *)(v86 + 1072) )
      goto LABEL_49;
    v121[0] = v61;
    v87 = sub_1AE6050(v85);
    v88 = (__int64 **)(v87 + 1032);
    v89 = v87;
    if ( (unsigned __int8)sub_1AF7470((__int64 *)(v87 + 1032), (__int64 *)v121, &v127) )
    {
      sub_1AF93B0(
        &v135,
        v127,
        (_QWORD *)(*(_QWORD *)(v89 + 1032) + 88LL * *(unsigned int *)(v89 + 1048)),
        (__int64)v88,
        1);
LABEL_49:
      v54 = v124;
      goto LABEL_50;
    }
    v99 = *(unsigned int *)(v89 + 1048);
    v100 = (char *)v127;
    v101 = *(_DWORD *)(v89 + 1040) + 1;
    v102 = (unsigned int)(3 * v99);
    v135.m128_u64[0] = (unsigned __int64)v127;
    if ( 4 * v101 >= (unsigned int)v102 )
    {
      sub_1B016A0(v88, 2 * v99, v99, v102, v90, v91);
    }
    else
    {
      v103 = (unsigned int)(v99 - *(_DWORD *)(v89 + 1044) - v101);
      if ( (unsigned int)v103 > (unsigned int)v99 >> 3 )
      {
LABEL_153:
        v104 = *(_QWORD *)v100 == -4096;
        *(_DWORD *)(v89 + 1040) = v101;
        if ( !v104 )
          --*(_DWORD *)(v89 + 1044);
        *(void **)v100 = v121[0];
        *((_QWORD *)v100 + 1) = v100 + 24;
        *((_QWORD *)v100 + 2) = 0x400000000LL;
        if ( ptr.m128i_i32[2] )
          sub_1AF7EA0((__int64 **)v100 + 1, (__int64 **)&ptr);
        v105 = *(unsigned int *)(v89 + 1048);
        v127 = v100;
        sub_1AF93B0(&v135, v100, (_QWORD *)(*(_QWORD *)(v89 + 1032) + 88 * v105), (__int64)v88, 1);
        goto LABEL_49;
      }
      sub_1B016A0(v88, v99, v99, v103, v90, v91);
    }
    sub_1AF7470((__int64 *)v88, (__int64 *)v121, &v135);
    v100 = (char *)v135.m128_u64[0];
    v101 = *(_DWORD *)(v89 + 1040) + 1;
    goto LABEL_153;
  }
  v19 = (__int64 *)a4;
  do
  {
    while ( 1 )
    {
      v45 = (_WORD *)*v19;
      if ( (*(_WORD *)*v19 & 0x1FF) != 0x45 )
        break;
      a2 = *v19;
      sub_14B7B40((__int64)&v131, *v19);
LABEL_36:
      if ( v109 == (unsigned __int64 *)++v19 )
        goto LABEL_44;
    }
    v106 = sub_C00A40(*v19, a2, v14, v15, v16);
    v46 = sub_BFD550((unsigned __int64)v45);
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x31u )
    {
      a2 = a6;
      v65 = sub_1B14030((__int64 *)*a1, a6, a1[1], v108 == 4, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      v49 = v65;
      if ( v108 == 4 )
      {
        if ( (*(_DWORD *)v45 & 0x3C000) == 0 )
        {
          if ( v65 )
          {
            sub_168B6C0((__int64)a1);
            if ( !sub_1AE80C0(*(_QWORD *)(a1[1] + 27552), *((_QWORD *)v45 + 1)) )
            {
              sub_168B9F0((__int64)&v135, a1, v106, 0x1188u, 0);
              LODWORD(v120) = 0;
              goto LABEL_42;
            }
          }
        }
LABEL_40:
        if ( ((*((_BYTE *)v45 + 1) >> 1) & 3) != 1 )
        {
          sub_168B9F0((__int64)&v135, a1, v106, 0x1188u, 0);
          LODWORD(v120) = 1;
LABEL_42:
          v50 = sub_1587D10((__int64)&v135, (int *)&v120);
          v121[0] = *((void **)v45 + 1);
          v51 = sub_162B6D0(v50, (__int64 *)v121);
          goto LABEL_43;
        }
LABEL_33:
        v43 = sub_BFBAE0((unsigned __int64)v45);
        v15 = v131.m128i_u32[2];
        a2 = v131.m128i_u32[3];
        v44 = v131.m128i_u32[2] + 1LL;
        if ( v44 > v131.m128i_u32[3] )
        {
          v107 = v43;
          a2 = (__int64)v132;
          sub_2237220(&v131, v132, v44, 8);
          v15 = v131.m128i_u32[2];
          v43 = v107;
        }
        v14 = v131.m128i_i64[0];
        *(_QWORD *)(v131.m128i_i64[0] + 8 * v15) = v43;
        ++v131.m128i_i32[2];
        goto LABEL_36;
      }
    }
    else
    {
      v49 = 0;
      if ( v108 == 4 )
        goto LABEL_40;
    }
    v135.m128_u64[0] = *((_QWORD *)v45 + 1);
    v120 = sub_C1BEF0((__int64)&v135, a2, v47, v48);
    if ( (*(_WORD *)v46 & 0x1FF) != 0x7C )
      goto LABEL_22;
    v23 = sub_C03930(*(_QWORD *)(v46 + 24), a2) & 0xFFFFFFFFFFFFFFF0LL;
    v26 = (__int64 *)v23;
    if ( !v23 )
      goto LABEL_134;
    v27 = *(_QWORD *)v23;
    v28 = *(unsigned __int8 *)(*(_QWORD *)v23 + 16LL);
    v29 = (unsigned int)(v28 - 2);
    if ( (unsigned __int8)(v28 - 2) > 4u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        goto LABEL_102;
      v27 = sub_F63050(v27, a2, v29, v24);
      if ( !v27 )
      {
        v27 = *v26;
LABEL_102:
        v120 = sub_F68450(v27, a2, v29, v24, v25);
        goto LABEL_19;
      }
    }
    v120 = *(_QWORD *)(v27 + 32);
LABEL_19:
    if ( (v120 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_134:
      v54 = v124;
      v61 = nullptr;
      goto LABEL_50;
    }
    v120 = sub_C1BEF0((__int64)&v120, a2, v29, v24);
    v30 = *(_DWORD **)(v46 + 40);
    if ( v30 )
    {
      v20 = 0;
      v129.m128i_i8[4] &= ~1u;
      LOWORD(v127) = 0;
      v128 = 0;
      v129.m128i_i32[0] = 0;
      if ( (*v30 & 0x20000) == 0 )
      {
        v76 = sub_168B6C0((__int64)a1);
        a2 = (__int64)&v127;
        if ( (unsigned __int8)sub_C3F220((unsigned __int64)v30, (__int64)&v127, v76, 0, 0, v77) )
        {
          v78 = v130;
          if ( v130 <= 0x40 ? v129.m128i_i64[1] == 0 : v78 == (unsigned int)sub_2206780(&v129.m128i_u64[1]) )
          {
            sub_168B9F0((__int64)&v135, a1, v106, 0x1179u, 0);
            a2 = (__int64)v121;
            v121[0] = (void *)sub_EEC8C0(v46, (__int64)a1, *(double *)a7.m128_u64);
            sub_1587DB0((__int64)&v135, (__int64 *)v121);
            sub_15F7200(&v135);
            if ( v129.m128i_i32[0] > 1u )
              sub_A4F8E0(v129.m128i_i32);
            goto LABEL_36;
          }
        }
        if ( v129.m128i_i32[0] > 1u )
        {
          sub_A4F8E0(v129.m128i_i32);
          if ( (*(_DWORD *)v45 & 0x3C000) != 0 )
            goto LABEL_23;
          goto LABEL_82;
        }
      }
    }
LABEL_22:
    if ( (*(_DWORD *)v45 & 0x3C000) != 0 )
      goto LABEL_23;
LABEL_82:
    if ( ((*(_BYTE *)(sub_BFBAE0((unsigned __int64)v45) + 1) >> 1) & 3) != 1 )
      goto LABEL_75;
    if ( v49 )
    {
      v20 = v120 & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a1[1] + 27552) & 0xFFFFFFFFFFFFFFF0LL) )
        goto LABEL_75;
    }
LABEL_23:
    if ( (*(_WORD *)v46 & 0x1FF) == 0x7B )
    {
      if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v20, v21, v22) )
      {
        if ( (**(_DWORD **)(v46 + 16) & 0x10000) == 0 )
          goto LABEL_69;
      }
      else if ( (**(_DWORD **)(v46 + 24) & 0x10000) == 0 )
      {
LABEL_69:
        if ( sub_9ECBA0(v46, a2, v31, v32, v33) )
          v68 = *(_QWORD *)(v46 + 16);
        else
          v68 = *(_QWORD *)(v46 + 24);
        v127 = *(void **)(v68 + 8);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1BEF0((__int64)&v127, a2, v66, v67)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v74 = sub_9ECBA0(v46, a2, v69, v70, v71) ? *(_QWORD *)(v46 + 16) : *(_QWORD *)(v46 + 24);
          v135.m128_u64[0] = *(_QWORD *)(v74 + 8);
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1BEF0((__int64)&v135, a2, v72, v73)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) > 4u )
            goto LABEL_75;
        }
      }
    }
    v34 = *a1;
    v35 = *(_BYTE *)(*a1 + 12592);
    v36 = *(_BYTE *)(*a1 + 10024);
    v110 = *(_BYTE *)(*a1 + 11248);
    v113 = *(_DWORD *)(*a1 + 11200);
    v37 = *(_DWORD *)(*(_QWORD *)(*a1 + 264) + 204LL);
    *(_BYTE *)(v34 + 12592) = 1;
    *(_BYTE *)(v34 + 11248) = 1;
    *(_BYTE *)(v34 + 10024) = 1;
    v112 = v35;
    v111 = v36;
    v38 = sub_BFBAE0((unsigned __int64)v45);
    v40 = sub_19249E0(*a1, v106, 4u, v38, 0, v39, a7, a8);
    v41 = *(_QWORD *)(v34 + 264);
    *(_BYTE *)(v34 + 10024) = v111;
    *(_DWORD *)(v34 + 11200) = v113;
    *(_BYTE *)(v34 + 12592) = v112;
    *(_BYTE *)(v34 + 11248) = v110;
    if ( *(_DWORD *)(v41 + 204) == 5 )
      *(_BYTE *)(v41 + 194) = 1;
    if ( v37 )
      v37 = 3;
    *(_DWORD *)(v41 + 204) = v37;
    if ( v40 > 1 )
      goto LABEL_33;
    v42 = *(_WORD *)v46 & 0x1FF;
    if ( v42 == 124 || v42 == 44 )
      goto LABEL_33;
LABEL_75:
    sub_168B9F0((__int64)&v135, a1, v106, 0x1183u, 0);
    v119 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x31u;
    v75 = sub_1587D10((__int64)&v135, (int *)&v119);
    LODWORD(v121[0]) = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x31u;
    v51 = sub_1587D10(v75, (int *)v121);
LABEL_43:
    v52 = v51;
    ++v19;
    a2 = (__int64)&v127;
    v127 = (void *)sub_EEC8C0((unsigned __int64)v45, (__int64)v121, *(double *)a7.m128_u64);
    sub_1587DB0(v52, (__int64 *)&v127);
    sub_15F7200(&v135);
  }
  while ( v109 != (unsigned __int64 *)v19 );
LABEL_44:
  v53 = v131.m128i_u32[2];
  v54 = v124;
  if ( v108 - 8 <= 1 || (v61 = nullptr, v131.m128i_i32[2]) )
  {
    v55 = (_BYTE *)v131.m128i_i64[0];
    v56 = v123;
    goto LABEL_46;
  }
LABEL_50:
  if ( v54 > 0x40 && v123 )
    operator delete[](v123);
LABEL_53:
  if ( (_QWORD *)ptr.m128i_i64[0] != v134 )
    free((void *)ptr.m128i_i64[0]);
  if ( (_BYTE *)v131.m128i_i64[0] != v132 )
    free((void *)v131.m128i_i64[0]);
  return v61;
}
