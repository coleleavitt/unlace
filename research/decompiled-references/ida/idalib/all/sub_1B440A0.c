_DWORD *__fastcall sub_1B440A0(
        __int64 *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v11; // r13
  signed __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // r15
  __int64 *v18; // r14
  __int64 v19; // rbp
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r15d
  int v24; // ebp
  const char *v25; // rax
  size_t v26; // rdx
  const char *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rcx
  __int64 v31; // rsi
  __int64 *v32; // rdi
  char *v33; // rdx
  char *v34; // rax
  char *v35; // rdx
  char *v36; // rcx
  __int64 *v37; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rbp
  unsigned __int64 v43; // r15
  _QWORD *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // eax
  __int64 *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rbp
  __int64 v53; // rax
  _BYTE *v54; // rbp
  __int64 v55; // rbx
  _QWORD *v56; // rax
  _DWORD *v57; // rbx
  int v59; // eax
  _QWORD *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rdi
  int v66; // r15d
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r13
  unsigned int v73; // edx
  __int64 v74; // rax
  __int64 v75; // rdi
  int v76; // ecx
  __int64 v77; // r11
  bool v78; // zf
  __int64 v79; // rdx
  __int64 *v80; // r13
  _BYTE *v81; // r15
  int v82; // eax
  __m128i *v83; // rcx
  __int64 v84; // rax
  __m128 *v85; // rax
  __int32 v86; // edx
  __int64 v87; // rax
  __int64 v88; // r8
  unsigned __int64 v89; // r15
  __int64 v90; // rax
  int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r13
  unsigned int v99; // esi
  __int64 v100; // rdi
  unsigned int v101; // r11d
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned int v104; // eax
  unsigned __int64 v105; // rdx
  const __m128i *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // r13
  __int64 v112; // rax
  _QWORD *v113; // rax
  unsigned int v114; // eax
  __int64 v115; // rax
  __int64 *v116; // r15
  __int64 *v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  unsigned int v121; // eax
  const char *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rbp
  __int64 v125; // rax
  unsigned int v126; // eax
  int v127; // ecx
  __int64 v128; // r10
  __int64 v129; // rdx
  __int64 *v130; // [rsp+8h] [rbp-1E0h]
  __int64 *v131; // [rsp+10h] [rbp-1D8h] BYREF
  _QWORD *v132; // [rsp+18h] [rbp-1D0h]
  __int64 *v133; // [rsp+20h] [rbp-1C8h]
  unsigned int v134; // [rsp+2Ch] [rbp-1BCh]
  __int64 *v135; // [rsp+30h] [rbp-1B8h]
  int v136; // [rsp+38h] [rbp-1B0h]
  int v137; // [rsp+3Ch] [rbp-1ACh]
  void **p_ptr; // [rsp+40h] [rbp-1A8h]
  __int64 v139; // [rsp+48h] [rbp-1A0h]
  __int64 v140; // [rsp+58h] [rbp-190h] BYREF
  _QWORD v141[2]; // [rsp+60h] [rbp-188h] BYREF
  void *v142; // [rsp+70h] [rbp-178h] BYREF
  __int64 v143; // [rsp+78h] [rbp-170h]
  int v144; // [rsp+80h] [rbp-168h]
  char v145; // [rsp+84h] [rbp-164h]
  __int64 v146; // [rsp+88h] [rbp-160h] BYREF
  void *ptr; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v148; // [rsp+B8h] [rbp-130h]
  _BYTE v149[96]; // [rsp+C0h] [rbp-128h] BYREF
  __int128 v150; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v151; // [rsp+130h] [rbp-B8h]
  unsigned __int8 *v152[11]; // [rsp+140h] [rbp-A8h] BYREF
  char v153; // [rsp+198h] [rbp-50h]
  char v154; // [rsp+1A4h] [rbp-44h]

  v134 = a2;
  v136 = a3;
  v137 = a4;
  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !(unsigned __int8)sub_1B13CD0(*a1, a2, a1[1], *(double *)a7.m128_u64, a8) )
    return nullptr;
  v130 = &a5[3 * a6];
  v12 = 0xAAAAAAAAAAAAAAABLL * ((24 * a6) >> 3);
  v13 = v12 >> 2;
  if ( v12 >> 2 <= 0 )
  {
    v16 = a5;
LABEL_15:
    if ( v12 != 2 )
    {
      if ( v12 != 3 )
      {
        if ( v12 != 1 )
          goto LABEL_24;
LABEL_18:
        if ( !v16[1] )
          goto LABEL_24;
LABEL_19:
        if ( v130 == v16 )
          goto LABEL_24;
        goto LABEL_20;
      }
      if ( v16[1] )
        goto LABEL_19;
      v16 += 3;
    }
    if ( v16[1] )
      goto LABEL_19;
    v16 += 3;
    goto LABEL_18;
  }
  if ( a5[1] )
  {
    v16 = a5;
    goto LABEL_19;
  }
  if ( a5[4] )
  {
    v16 = a5 + 3;
    goto LABEL_19;
  }
  if ( a5[7] )
  {
    v16 = a5 + 6;
    goto LABEL_19;
  }
  if ( a5[10] )
  {
    v16 = a5 + 9;
    goto LABEL_19;
  }
  v14 = a5;
  v15 = &a5[12 * v13];
  while ( 1 )
  {
    v16 = v14 + 12;
    if ( v15 == v14 + 12 )
    {
      v12 = 0xAAAAAAAAAAAAAAABLL * (v130 - v16);
      goto LABEL_15;
    }
    if ( v14[13] )
      goto LABEL_19;
    if ( v14[16] )
      break;
    if ( v14[19] )
    {
      if ( v130 != v14 + 18 )
        goto LABEL_20;
      goto LABEL_24;
    }
    if ( v14[22] )
    {
      if ( v130 != v14 + 21 )
        goto LABEL_20;
LABEL_24:
      v131 = a5;
      v23 = v134;
      v24 = 0;
      v145 = 1;
      v142 = &v146;
      v143 = 4;
      v144 = 0;
      while ( 2 )
      {
        v25 = sub_B155B0(v24);
        v26 = 0;
        v27 = v25;
        if ( v25 )
          v26 = strlen(v25);
        v28 = sub_6F3470(v11[2188], v27, v26);
        v29 = sub_1A5B7C0(
                *a1,
                *(__int64 **)(*a1 + 192),
                v28,
                v23,
                15,
                0,
                *(double *)a7.m128_u64,
                *(double *)a8.m128_u64);
        if ( v29 )
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
        if ( v145 )
        {
          v30 = (char *)v142;
          v31 = 8LL * HIDWORD(v143);
          v32 = (__int64 *)((char *)v142 + v31);
          if ( v142 != (char *)v142 + v31 )
          {
            v33 = (char *)v142;
            if ( v29 == *(_QWORD *)v142 )
            {
LABEL_37:
              v34 = &v30[8 * HIDWORD(v143)];
              goto LABEL_38;
            }
            while ( 1 )
            {
              v33 += 8;
              if ( v32 == (__int64 *)v33 )
                break;
              if ( v29 == *(_QWORD *)v33 )
                goto LABEL_37;
            }
          }
          if ( HIDWORD(v143) < (unsigned int)v143 )
          {
            ++HIDWORD(v143);
            *v32 = v29;
            v30 = (char *)v142;
            v33 = (char *)v142 + v31;
            goto LABEL_37;
          }
        }
        v31 = v29;
        v87 = sub_2236760(&v142, v29);
        v30 = (char *)v142;
        v33 = (char *)v87;
        if ( v145 )
          goto LABEL_37;
        v34 = (char *)v142 + 8 * (unsigned int)v143;
LABEL_38:
        if ( v33 != v34 && *(_QWORD *)v33 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v35 = v33 + 8;
          do
          {
            v36 = v35;
            if ( v34 == v35 )
              break;
            v35 += 8;
          }
          while ( *(_QWORD *)v36 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( ++v24 == 9 )
        {
          v37 = v131;
          p_ptr = &ptr;
          ptr = v149;
          v148 = 0x400000000LL;
          if ( v130 == v131 )
          {
            v55 = 0;
            v54 = v149;
LABEL_61:
            v56 = (_QWORD *)sub_168B6C0((__int64)a1);
            v57 = sub_EC0450(v56, v134, v136, v137, (__int64)v54, v55);
            if ( ptr != p_ptr + 2 )
              free(ptr);
            if ( !v145 )
              free(v142);
            return v57;
          }
          v132 = v11;
          v133 = v141;
          v135 = &v140;
          while ( 2 )
          {
            if ( (*(_DWORD *)*v37 & 0x10000) != 0 )
              goto LABEL_79;
            v38 = sub_BFBAE0(*v37);
            v39 = a1[1];
            v40 = v38;
            if ( (*(_WORD *)v38 & 0x1FF) != 0x47 )
            {
              v41 = *(_QWORD *)(v39 + 27544);
              v42 = *(_QWORD *)(v38 + 8);
              v43 = 0;
              goto LABEL_50;
            }
            if ( (*(_DWORD *)v38 & 0x3C000) == 0 )
            {
              v59 = sub_1AE80F0(*a1, v39, v38);
              v42 = *(_QWORD *)(v40 + 8);
              v41 = *(_QWORD *)(a1[1] + 27544);
              if ( v59 == 9 )
              {
                v43 = v40;
                goto LABEL_50;
              }
              v60 = v132;
              sub_F56AE0(*(_QWORD *)(v40 + 8), v132);
              v65 = v37[1];
              if ( !v65 )
              {
                v66 = 0;
                sub_19146F0(*a1, (_QWORD *)v40, v61, v62, v63, v64, a7, a8);
                v67 = a1[1];
                goto LABEL_69;
              }
              v114 = sub_C00A40(v65, (__int64)v60, v61, v62, v63);
              sub_168B9F0((__int64)&v150, a1, v114, 0x11E3u, 0);
              v115 = sub_EEC8C0(v37[1], (__int64)a1, *(double *)a7.m128_u64);
              v116 = v133;
              v141[0] = v115;
              v117 = v133;
              sub_1587DB0((__int64)&v150, v133);
              sub_15F7200(&v150);
              v121 = sub_C00A40(*v37, (__int64)v117, v118, v119, v120);
              sub_168B9F0((__int64)&v150, a1, v121, 0x1827u, 0);
              v122 = sub_995750(*(_QWORD *)(v40 + 16));
              v141[1] = v123;
              v141[0] = v122;
              v124 = sub_166BAF0((__int64)&v150, (__int64)v116);
              v125 = sub_EEC8C0(*v37, (__int64)v116, *(double *)a7.m128_u64);
              v31 = (__int64)v135;
              v140 = v125;
              sub_1587DB0(v124, v135);
              sub_15F7200(&v150);
LABEL_59:
              v37 += 3;
              if ( v130 == v37 )
              {
                v54 = ptr;
                v55 = (unsigned int)v148;
                goto LABEL_61;
              }
              continue;
            }
            break;
          }
          v41 = *(_QWORD *)(v39 + 27544);
          v42 = *(_QWORD *)(v38 + 8);
          v43 = v38;
LABEL_50:
          if ( *(_QWORD *)(*(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
            && !sub_AAC110((__int64)v132, v42, v41, 0) )
          {
            v44 = v132;
            sub_F56AE0(v42, v132);
            goto LABEL_53;
          }
          v44 = v132;
          if ( sub_F56AE0(v42, v132) || ((*(_BYTE *)(v40 + 1) >> 1) & 3) != 1 || !v43 )
          {
LABEL_53:
            v48 = sub_C00A40(*v37, (__int64)v44, v45, v46, v47);
            sub_168B9F0((__int64)&v150, a1, v48, 0x1220u, 0);
            if ( v153 )
            {
              sub_AE9DF0(v152, (__int64)"omp_allocator_handle_t", 1u);
            }
            else if ( v154 )
            {
              sub_1B132F0((__int64)&v150, (__int64)"omp_allocator_handle_t");
            }
            v49 = v135;
            LODWORD(v140) = v43 != 0;
            v50 = sub_1587D10((__int64)&v150, (int *)v135);
            v51 = *(_QWORD *)(v40 + 8);
            v52 = v50;
            if ( *(_BYTE *)(v50 + 120) )
            {
              v49 = *(__int64 **)(v40 + 8);
              sub_AE9DF0((unsigned __int8 **)(v50 + 32), (__int64)v49, 8u);
            }
            else if ( *(_BYTE *)(v50 + 132) )
            {
              v111 = sub_168B9E0((_QWORD *)v50);
              v112 = *(_QWORD *)(v52 + 16);
              if ( v112 )
                v112 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v112 + 32LL))(*(_QWORD *)(v52 + 16));
              v141[0] = v112;
              v113 = sub_1587BC0(v111, v133, v107, v108, v109, v110);
              v49 = (__int64 *)v51;
              sub_AE9DF0((unsigned __int8 **)(*v113 + 32LL * *(unsigned int *)(v52 + 128) + 8), v51, 8u);
            }
            v53 = sub_EEC8C0(*v37, (__int64)v49, *(double *)a7.m128_u64);
            v31 = (__int64)v133;
            v141[0] = v53;
            sub_1587DB0(v52, v133);
            sub_15F7200(&v150);
            goto LABEL_59;
          }
          if ( !v37[1] )
          {
            v126 = sub_C00A40(*v37, (__int64)v44, v45, v46, v47);
            v31 = (__int64)a1;
            sub_168B9F0((__int64)&v150, a1, v126, 0x11D0u, 0);
            sub_15F7200(&v150);
            goto LABEL_59;
          }
          v67 = a1[1];
          v66 = 1;
LABEL_69:
          v72 = sub_1AE5FF0(v67);
          v131 = (__int64 *)(v72 + 1304);
          if ( v70 )
            v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
          v31 = *(unsigned int *)(v72 + 1320);
          v141[0] = v70;
          if ( !(_DWORD)v31 )
          {
            *(_QWORD *)&v150 = 0;
            goto LABEL_129;
          }
          v71 = *(_QWORD *)(v72 + 1304);
          v73 = (v31 - 1) & (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4));
          v74 = v71 + 16LL * v73;
          v75 = *(_QWORD *)v74;
          if ( v70 != *(_QWORD *)v74 )
          {
            v76 = 1;
            v77 = 0;
            if ( v75 == -4096 )
            {
LABEL_74:
              v69 = *(unsigned int *)(v72 + 1312);
              *(_QWORD *)&v150 = v74;
              v68 = (unsigned int)(v69 + 1);
              v70 = (unsigned int)(4 * v68);
              if ( (unsigned int)v70 < 3 * (int)v31 )
              {
                v70 = (unsigned int)v31 >> 3;
                if ( (int)v31 - *(_DWORD *)(v72 + 1316) - (int)v68 > (unsigned int)v70 )
                  goto LABEL_76;
                goto LABEL_130;
              }
LABEL_129:
              LODWORD(v31) = 2 * v31;
LABEL_130:
              sub_1AEAA70(v131, v31, v68, v69, v70, v71);
              v31 = (__int64)v133;
              sub_1AE6300(v131, v133, &v150);
              LODWORD(v68) = *(_DWORD *)(v72 + 1312) + 1;
              v74 = v150;
LABEL_76:
              v78 = *(_QWORD *)v74 == -4096;
              *(_DWORD *)(v72 + 1312) = v68;
              if ( !v78 )
                --*(_DWORD *)(v72 + 1316);
              v79 = v141[0];
              *(_DWORD *)(v74 + 8) = v66;
              *(_QWORD *)v74 = v79;
            }
            else
            {
              while ( 1 )
              {
                if ( v77 || v75 != -8192 )
                  v74 = v77;
                v73 = (v31 - 1) & (v76 + v73);
                v75 = *(_QWORD *)(v71 + 16LL * v73);
                v139 = v71 + 16LL * v73;
                if ( v70 == v75 )
                  break;
                if ( v75 == -4096 )
                {
                  if ( !v74 )
                    v74 = v139;
                  goto LABEL_74;
                }
                ++v76;
                v77 = v74;
                v74 = v139;
              }
            }
          }
LABEL_79:
          v80 = (__int64 *)v37[1];
          if ( !v80 || (*(_DWORD *)v80 & 0x10000) != 0 )
          {
LABEL_81:
            v81 = ptr;
            v31 = HIDWORD(v148);
            v82 = v148;
            v83 = (__m128i *)((char *)ptr + 24 * (unsigned int)v148);
            if ( (unsigned int)v148 >= (unsigned __int64)HIDWORD(v148) )
            {
              v105 = (unsigned int)v148 + 1LL;
              v106 = (const __m128i *)&v150;
              v151 = 0;
              v150 = 0;
              if ( HIDWORD(v148) < v105 )
              {
                v31 = (__int64)(p_ptr + 2);
                if ( ptr > &v150 || v83 <= (__m128i *)&v150 )
                {
                  sub_2237220(p_ptr, v31, v105, 24);
                  v83 = (__m128i *)((char *)ptr + 24 * (unsigned int)v148);
                  v106 = (const __m128i *)&v150;
                }
                else
                {
                  sub_2237220(p_ptr, v31, v105, 24);
                  v106 = (const __m128i *)((char *)ptr + (char *)&v150 - v81);
                  v83 = (__m128i *)((char *)ptr + 24 * (unsigned int)v148);
                }
              }
              *v83 = _mm_loadu_si128(v106);
              v83[1].m128i_i64[0] = v106[1].m128i_i64[0];
              v82 = v148;
            }
            else
            {
              v83[1].m128i_i64[0] = 0;
              a8 = 0;
              *v83 = 0;
            }
            v84 = (unsigned int)(v82 + 1);
            LODWORD(v148) = v84;
            v131 = v80;
            v85 = (__m128 *)((char *)ptr + 24 * v84 - 24);
            v85[1].m128_i32[0] = *((_DWORD *)v37 + 4);
            v86 = *((_DWORD *)v37 + 5);
            a7 = _mm_loadh_ps((const double *)&v131);
            *v85 = a7;
            v85[1].m128_i32[1] = v86;
            goto LABEL_59;
          }
          v89 = sub_BFBAE0(v37[1]);
          v90 = *(_QWORD *)(*(_QWORD *)(v89 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          v91 = *(unsigned __int8 *)(v90 + 16);
          v92 = (unsigned int)(v91 - 2);
          if ( (unsigned __int8)(v91 - 2) > 4u )
          {
            v93 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 2;
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
            {
              v90 = sub_F63050(v90, v31, v93, v92);
              if ( v90 )
              {
                v91 = *(unsigned __int8 *)(v90 + 16);
                goto LABEL_88;
              }
LABEL_99:
              v80 = (__int64 *)v37[1];
            }
            v104 = sub_C00A40((unsigned __int64)v80, v31, v93, v92, v88);
            sub_168B9F0((__int64)&v150, a1, v104, 0x1184u, 0);
            v31 = (__int64)v133;
            v141[0] = *(_QWORD *)(v89 + 8);
            sub_162B6D0((__int64)&v150, v133);
            sub_15F7200(&v150);
            goto LABEL_59;
          }
LABEL_88:
          v93 = (unsigned int)(v91 - 2);
          if ( (unsigned int)v93 > 1 )
            goto LABEL_99;
          v31 = *(_QWORD *)(v90 + 32);
          if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) == 0
            || *(_QWORD *)(*(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1[1] + 27568) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
            && !sub_AAC110((__int64)v132, v31, *(_QWORD *)(a1[1] + 27568), 1u) )
          {
            goto LABEL_99;
          }
          v80 = (__int64 *)v89;
          if ( (*(_WORD *)v89 & 0x1FF) != 0x47 )
            goto LABEL_81;
          v98 = sub_1AE5FF0(a1[1]);
          v131 = (__int64 *)(v98 + 1304);
          if ( v96 )
            v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 32LL))(v96);
          v99 = *(_DWORD *)(v98 + 1320);
          v141[0] = v96;
          if ( v99 )
          {
            v97 = v99 - 1;
            v100 = *(_QWORD *)(v98 + 1304);
            v101 = v97 & (((unsigned int)v96 >> 9) ^ ((unsigned int)v96 >> 4));
            v102 = v100 + 16LL * v101;
            v103 = *(_QWORD *)v102;
            if ( v96 == *(_QWORD *)v102 )
            {
LABEL_96:
              v80 = (__int64 *)v89;
              goto LABEL_81;
            }
            v127 = 1;
            v128 = 0;
            if ( v103 != -4096 )
            {
              while ( 1 )
              {
                if ( v103 != -8192 || v128 )
                  v102 = v128;
                v101 = v97 & (v127 + v101);
                v103 = *(_QWORD *)(v100 + 16LL * v101);
                v139 = v100 + 16LL * v101;
                if ( v96 == v103 )
                  goto LABEL_96;
                if ( v103 == -4096 )
                {
                  if ( !v102 )
                    v102 = v139;
                  break;
                }
                ++v127;
                v128 = v102;
                v102 = v139;
              }
            }
            v95 = *(unsigned int *)(v98 + 1312);
            *(_QWORD *)&v150 = v102;
            v94 = (unsigned int)(v95 + 1);
            v96 = (unsigned int)(4 * v94);
            if ( (unsigned int)v96 < 3 * v99 )
            {
              v96 = v99 >> 3;
              if ( v99 - *(_DWORD *)(v98 + 1316) - (unsigned int)v94 > (unsigned int)v96 )
              {
LABEL_143:
                v78 = *(_QWORD *)v102 == -4096;
                *(_DWORD *)(v98 + 1312) = v94;
                if ( !v78 )
                  --*(_DWORD *)(v98 + 1316);
                v129 = v141[0];
                *(_DWORD *)(v102 + 8) = 2;
                *(_QWORD *)v102 = v129;
                goto LABEL_96;
              }
LABEL_148:
              sub_1AEAA70(v131, v99, v94, v95, v96, v97);
              sub_1AE6300(v131, v133, &v150);
              LODWORD(v94) = *(_DWORD *)(v98 + 1312) + 1;
              v102 = v150;
              goto LABEL_143;
            }
          }
          else
          {
            *(_QWORD *)&v150 = 0;
          }
          v99 *= 2;
          goto LABEL_148;
        }
        continue;
      }
    }
    v14 += 12;
  }
  if ( v130 == v14 + 15 )
    goto LABEL_24;
LABEL_20:
  v17 = a1[1];
  v18 = (__int64 *)*a1;
  if ( (*(_QWORD *)(v17 + 27568) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    goto LABEL_24;
  v19 = v18[30] + 552;
  v20 = j__strlen("omp_alloctrait_t");
  v21 = sub_6F3470(v19, "omp_alloctrait_t", v20);
  v22 = sub_18013B0(
          (__int64)v18,
          v21,
          v134,
          v18[76],
          0,
          0,
          *(double *)a7.m128_u64,
          *(double *)a8.m128_u64,
          0,
          0,
          0,
          0,
          1u,
          0,
          nullptr);
  if ( v22 && (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    *(_QWORD *)(v17 + 27568) = v22;
    goto LABEL_24;
  }
  sub_168B9F0((__int64)&v150, v18 + 1, v134, 0x1198u, 0);
  if ( v153 )
  {
    sub_AE9DF0(v152, (__int64)"omp_alloctrait_t", 1u);
  }
  else if ( v154 )
  {
    sub_1B132F0((__int64)&v150, (__int64)"omp_alloctrait_t");
  }
  v57 = nullptr;
  sub_15F7200(&v150);
  return v57;
}
