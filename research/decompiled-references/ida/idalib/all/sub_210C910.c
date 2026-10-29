__int64 __fastcall sub_210C910(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int128 a7,
        char a8,
        __int128 a9,
        __int64 a10)
{
  __int64 v11; // r13
  __int64 v13; // rbp
  size_t v14; // rdx
  int v15; // eax
  unsigned int v16; // r15d
  size_t v17; // rdx
  __int64 v18; // rcx
  const void *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  size_t v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rcx
  _WORD *v28; // rdi
  __int64 v29; // rax
  __int64 v31; // rax
  unsigned int v32; // r11d
  __int64 *v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rbx
  __m128i *v37; // rax
  __m128i *v38; // rbx
  size_t v39; // r15
  __int64 v40; // rcx
  __int64 v41; // r13
  __int64 *v42; // rax
  size_t v43; // r12
  const void *v44; // rbx
  __int64 v45; // rbp
  __int64 *v46; // r15
  __int64 *v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // r8d
  __int32 v51; // r15d
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r9
  unsigned int v54; // r11d
  __int64 v55; // r15
  __m128i *v56; // r15
  __m128i *v57; // rdx
  __m128i *v58; // rax
  char v59; // al
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 *v62; // rax
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r12
  unsigned int v67; // ebx
  __int64 v68; // rbp
  __int64 v69; // rax
  __int64 v70; // rdx
  _BYTE *v71; // rsi
  __int64 v72; // rdx
  __m128i *v73; // rdi
  __int64 v74; // rax
  char v75; // al
  __m128i v76; // xmm2
  __m128i v77; // xmm3
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  _BYTE *v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rcx
  __m128i *v86; // rax
  __m128i *v87; // rdx
  _BYTE *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rdx
  bool v91; // zf
  void *v92; // rdi
  int v93; // edx
  __int64 *v94; // rax
  void **v95; // r15
  void **v96; // rbx
  void **v97; // r15
  __int64 *v98; // rax
  __int64 v99; // rcx
  const void *v100; // rdi
  const void *v101; // r8
  int v102; // eax
  int v103; // eax
  const void *v104; // rdi
  int v105; // eax
  unsigned __int64 v106; // rbp
  __int64 v107; // rdi
  void *srca; // [rsp+8h] [rbp-270h]
  unsigned __int16 v110; // [rsp+10h] [rbp-268h]
  char v111; // [rsp+1Eh] [rbp-25Ah]
  char v112; // [rsp+1Fh] [rbp-259h]
  unsigned int v113; // [rsp+20h] [rbp-258h]
  __int64 v114; // [rsp+20h] [rbp-258h]
  int v115; // [rsp+20h] [rbp-258h]
  __int64 v116; // [rsp+20h] [rbp-258h]
  __m128i *v117; // [rsp+20h] [rbp-258h]
  __int64 *v118; // [rsp+28h] [rbp-250h]
  unsigned __int64 v119; // [rsp+28h] [rbp-250h]
  __int64 v120; // [rsp+28h] [rbp-250h]
  int v121; // [rsp+28h] [rbp-250h]
  __int64 v122; // [rsp+30h] [rbp-248h]
  __m128i *v123; // [rsp+30h] [rbp-248h]
  __int64 v124; // [rsp+30h] [rbp-248h]
  __int64 v125; // [rsp+30h] [rbp-248h]
  const void *v126; // [rsp+30h] [rbp-248h]
  __int64 v127; // [rsp+38h] [rbp-240h]
  const void *v128; // [rsp+38h] [rbp-240h]
  __int64 v129; // [rsp+38h] [rbp-240h]
  __int64 v130; // [rsp+40h] [rbp-238h]
  __int64 v131; // [rsp+48h] [rbp-230h]
  __int64 v132; // [rsp+58h] [rbp-220h]
  __int64 *v133[5]; // [rsp+68h] [rbp-210h] BYREF
  __int64 v134; // [rsp+90h] [rbp-1E8h]
  _QWORD v135[4]; // [rsp+C0h] [rbp-1B8h] BYREF
  __int16 v136; // [rsp+E0h] [rbp-198h]
  _QWORD v137[4]; // [rsp+F0h] [rbp-188h] BYREF
  __int16 v138; // [rsp+110h] [rbp-168h]
  _BYTE ptr[24]; // [rsp+120h] [rbp-158h] BYREF
  _WORD v140[160]; // [rsp+138h] [rbp-140h] BYREF

  v11 = a1;
  v13 = a3;
  v14 = *(_QWORD *)(a3 + 8);
  v112 = a8;
  v111 = a10;
  if ( *(_QWORD *)(a2 + 408) != v14
    || v14 && (v110 = a5, v15 = memcmp(*(const void **)v13, *(const void **)(a2 + 400), v14), a5 = v110, v15) )
  {
    if ( a4[1] )
      goto LABEL_5;
  }
  else
  {
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)v13 = &byte_22F0C30;
    if ( a4[1] )
      goto LABEL_5;
  }
  a4[1] = 7;
  *a4 = (__int64)"<stdin>";
  *(_QWORD *)v13 = &byte_22F0C30;
  *(_QWORD *)(v13 + 8) = 0;
LABEL_5:
  v16 = *(_DWORD *)(a2 + 128);
  if ( !v16 )
  {
    *(_BYTE *)(a2 + 513) &= v112;
    *(_BYTE *)(a2 + 514) |= v112;
    *(_BYTE *)(a2 + 512) |= v111;
  }
  if ( a5 > 4u )
  {
    v17 = *(_QWORD *)(a2 + 440);
    *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)&a7);
    ptr[16] = a8;
    if ( v17 )
    {
      if ( v17 == a4[1] && !memcmp(*(const void **)(a2 + 432), (const void *)*a4, v17) )
      {
        v59 = *(_BYTE *)(a2 + 484);
        if ( v59 == ptr[16] && (!v59 || !memcmp((const void *)(a2 + 468), ptr, 0x10u)) )
        {
          *(_BYTE *)(a1 + 8) &= ~1u;
          *(_DWORD *)a1 = 0;
          return v11;
        }
      }
    }
  }
  if ( !a6 )
  {
    v18 = *(_QWORD *)(v13 + 8);
    v19 = *(const void **)v13;
    if ( !v16 )
      v16 = 1;
    v20 = *a4;
    LOBYTE(v134) = 0;
    v135[1] = v18;
    v135[0] = v19;
    *(_QWORD *)ptr = v140;
    v21 = a4[1];
    v135[2] = v134;
    v136 = 2053;
    v138 = 1282;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v137[0] = v135;
    v137[2] = v20;
    v137[3] = v21;
    sub_22538C0(v137, ptr);
    v22 = *(_QWORD *)&ptr[8];
    v133[1] = *(__int64 **)ptr;
    v133[2] = *(__int64 **)&ptr[8];
    srca = *(void **)ptr;
    v23 = sub_2244B30(*(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    v24 = sub_2244CB0(a2 + 376, srca, v22, v23);
    v27 = (__int64 *)(*(_QWORD *)(a2 + 376) + 8LL * v24);
    if ( *v27 )
    {
      if ( *v27 != -8 )
      {
        sub_E37610(v133, v27, 0);
        v28 = *(_WORD **)ptr;
        v29 = *v133[0];
        *(_BYTE *)(v11 + 8) &= ~1u;
        *(_DWORD *)v11 = *(_DWORD *)(v29 + 8);
        if ( v28 != v140 )
          free(v28);
        return v11;
      }
      --*(_DWORD *)(a2 + 392);
    }
    v118 = v27;
    v113 = v24;
    v31 = sub_22300B0(v22 + 17, 8, v24, v27, v25, v26);
    v32 = v113;
    v33 = v118;
    v34 = v31;
    if ( v22 )
    {
      v122 = v31;
      memcpy((void *)(v31 + 16), srca, v22);
      v34 = v122;
      v33 = v118;
      v32 = v113;
    }
    *(_BYTE *)(v34 + v22 + 16) = 0;
    *(_QWORD *)v34 = v22;
    *(_DWORD *)(v34 + 8) = v16;
    *v33 = v34;
    ++*(_DWORD *)(a2 + 388);
    v35 = sub_22450D0(a2 + 376, v32);
    sub_E37610(v133, (__int64 *)(*(_QWORD *)(a2 + 376) + 8LL * v35), 0);
    if ( *(_WORD **)ptr != v140 )
      free(*(void **)ptr);
    a6 = v16;
    v16 = *(_DWORD *)(a2 + 128);
  }
  v36 = a6;
  if ( v16 > a6 || (v52 = a6 + 1, v53 = v16, v54 = a6 + 1, v52 == v16) )
  {
    v37 = *(__m128i **)(a2 + 120);
  }
  else
  {
    v55 = 5 * v52;
    if ( v52 < v53 )
    {
      v37 = *(__m128i **)(a2 + 120);
      v95 = (void **)&v37[v55];
      if ( &v37[5 * v53] != (__m128i *)v95 )
      {
        v96 = v95;
        v97 = (void **)&v37[5 * v53];
        do
        {
          while ( 1 )
          {
            v97 -= 10;
            if ( *v97 == v97 + 2 )
              break;
            operator delete(*v97);
            if ( v96 == v97 )
              goto LABEL_101;
          }
        }
        while ( v96 != v97 );
LABEL_101:
        v36 = a6;
        v54 = a6 + 1;
        v37 = *(__m128i **)(a2 + 120);
      }
    }
    else
    {
      if ( v52 > *(unsigned int *)(a2 + 132) )
      {
        v117 = (__m128i *)sub_2237400(a2 + 120, a2 + 136, v52, 80, ptr);
        sub_210C7E0(a2 + 120, v117);
        v92 = *(void **)(a2 + 120);
        v93 = *(_DWORD *)ptr;
        v37 = v117;
        v54 = a6 + 1;
        if ( (void *)(a2 + 136) != v92 )
        {
          v121 = *(_DWORD *)ptr;
          free(v92);
          v37 = v117;
          v93 = v121;
          v54 = a6 + 1;
        }
        *(_QWORD *)(a2 + 120) = v37;
        v53 = *(unsigned int *)(a2 + 128);
        *(_DWORD *)(a2 + 132) = v93;
      }
      else
      {
        v37 = *(__m128i **)(a2 + 120);
      }
      v56 = &v37[v55];
      v57 = &v37[5 * v53];
      if ( v57 != v56 )
      {
        do
        {
          v58 = v57 + 1;
          v57->m128i_i64[1] = 0;
          v57 += 5;
          v57[-1] = 0;
          v57[-4] = 0;
          v57[-3] = 0;
          v57[-2] = 0;
          v57[-5].m128i_i64[0] = (__int64)v58;
          v57[-1].m128i_i8[8] = 0;
        }
        while ( v56 != v57 );
        v37 = *(__m128i **)(a2 + 120);
      }
    }
    *(_DWORD *)(a2 + 128) = v54;
  }
  v38 = &v37[5 * v36];
  if ( v38->m128i_i64[1] )
  {
    v64 = sub_2220490();
    v66 = v65;
    *(_QWORD *)ptr = "file number already allocated";
    v67 = v64;
    v140[4] = 259;
    v68 = operator new(0x40u);
    sub_2220590(v68, ptr, v67, v66);
    *(_BYTE *)(v11 + 8) |= 1u;
    *(_QWORD *)v11 = v68;
    return v11;
  }
  v39 = *(_QWORD *)(v13 + 8);
  if ( !v39 )
  {
    v69 = sub_228AA60(*a4, a4[1], 0);
    if ( v70 )
    {
      v120 = v70;
      v116 = v69;
      v51 = 0;
      v89 = sub_228A4B0(*a4, a4[1], 0);
      *(_QWORD *)(v13 + 8) = v90;
      v91 = *(_QWORD *)(v13 + 8) == 0;
      *(_QWORD *)v13 = v89;
      if ( v91 )
        goto LABEL_63;
      *a4 = v116;
      a4[1] = v120;
    }
    v39 = *(_QWORD *)(v13 + 8);
    if ( !v39 )
    {
      v51 = 0;
      goto LABEL_63;
    }
  }
  v40 = *(_QWORD *)(a2 + 8);
  v119 = *(unsigned int *)(a2 + 16);
  v131 = v40;
  v132 = v40 + 32 * v119;
  v114 = (__int64)(32 * v119) >> 5;
  if ( (__int64)(32 * v119) >> 7 )
  {
    v127 = v11;
    v123 = v38;
    v41 = v40 + ((__int64)(32 * v119) >> 7 << 7);
    v42 = a4;
    v130 = v13;
    v43 = v39;
    v44 = *(const void **)v13;
    v45 = *(_QWORD *)(a2 + 8);
    v46 = v42;
    while ( *(_QWORD *)(v45 + 8) != v43 || memcmp(*(const void **)v45, v44, v43) )
    {
      if ( *(_QWORD *)(v45 + 40) == v43 && !memcmp(*(const void **)(v45 + 32), v44, v43) )
      {
        v47 = v46;
        v39 = v43;
        v38 = v123;
        a4 = v47;
        v11 = v127;
        v48 = (v45 + 32 - v131) >> 5;
        v13 = v130;
        LODWORD(v114) = v48;
        v49 = (unsigned int)v48;
        goto LABEL_38;
      }
      if ( *(_QWORD *)(v45 + 72) == v43 && !memcmp(*(const void **)(v45 + 64), v44, v43) )
      {
        v60 = v46;
        v39 = v43;
        v38 = v123;
        a4 = v60;
        v11 = v127;
        v61 = (v45 + 64 - v131) >> 5;
        v13 = v130;
        LODWORD(v114) = v61;
        v49 = (unsigned int)v61;
        goto LABEL_38;
      }
      if ( v43 == *(_QWORD *)(v45 + 104) && !memcmp(*(const void **)(v45 + 96), v44, v43) )
      {
        v62 = v46;
        v39 = v43;
        v38 = v123;
        a4 = v62;
        v11 = v127;
        v63 = (v45 + 96 - v131) >> 5;
        v13 = v130;
        LODWORD(v114) = v63;
        v49 = (unsigned int)v63;
        goto LABEL_38;
      }
      v45 += 128;
      if ( v41 == v45 )
      {
        v94 = v46;
        v39 = v43;
        v40 = v45;
        v38 = v123;
        a4 = v94;
        v11 = v127;
        v13 = v130;
        v80 = (v132 - v40) >> 5;
        goto LABEL_81;
      }
    }
    v98 = v46;
    v38 = v123;
    v99 = (v45 - v131) >> 5;
    v39 = v43;
    v11 = v127;
    a4 = v98;
    v13 = v130;
    LODWORD(v114) = v99;
    v49 = (unsigned int)v99;
    goto LABEL_38;
  }
  v80 = (__int64)(32 * v119) >> 5;
LABEL_81:
  if ( v80 != 2 )
  {
    if ( v80 != 3 )
    {
      if ( v80 != 1 )
      {
        v49 = (__int64)(32 * v119) >> 5;
        goto LABEL_38;
      }
      v100 = *(const void **)v40;
      v101 = *(const void **)v13;
      v49 = (__int64)(32 * v119) >> 5;
      if ( *(_QWORD *)(v40 + 8) == v39 )
        goto LABEL_107;
      goto LABEL_38;
    }
    v101 = *(const void **)v13;
    if ( *(_QWORD *)(v40 + 8) == v39 )
    {
      v128 = *(const void **)v13;
      v125 = v40;
      v103 = memcmp(*(const void **)v40, *(const void **)v13, v39);
      v40 = v125;
      v101 = v128;
      if ( !v103 )
        goto LABEL_109;
    }
    v91 = *(_QWORD *)(v40 + 40) == v39;
    v104 = *(const void **)(v40 + 32);
    v40 += 32;
    if ( !v91 )
      goto LABEL_114;
LABEL_113:
    v129 = v40;
    v126 = v101;
    v105 = memcmp(v104, v101, v39);
    v101 = v126;
    v40 = v129;
    if ( v105 )
      goto LABEL_114;
LABEL_109:
    v114 = (v40 - v131) >> 5;
    v49 = (unsigned int)v114;
    goto LABEL_38;
  }
  v104 = *(const void **)v40;
  v101 = *(const void **)v13;
  if ( *(_QWORD *)(v40 + 8) == v39 )
    goto LABEL_113;
LABEL_114:
  v100 = *(const void **)(v40 + 32);
  v49 = (__int64)(32 * v119) >> 5;
  if ( *(_QWORD *)(v40 + 40) == v39 )
  {
    v40 += 32;
LABEL_107:
    v124 = v40;
    v102 = memcmp(v100, v101, v39);
    v49 = (__int64)(32 * v119) >> 5;
    if ( v102 )
      goto LABEL_38;
    v40 = v124;
    goto LABEL_109;
  }
LABEL_38:
  v50 = v114;
  if ( v49 >= v119 )
  {
    v81 = *(_BYTE **)v13;
    v82 = *(_QWORD *)v13 + v39;
    *(_QWORD *)ptr = &ptr[16];
    sub_210B7B0(ptr, v81, v82);
    v83 = *(unsigned int *)(a2 + 16);
    v50 = v114;
    v84 = v83 + 1;
    if ( v83 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 20) )
    {
      v106 = *(_QWORD *)(a2 + 8);
      v107 = a2 + 8;
      if ( v106 > (unsigned __int64)ptr || (unsigned __int64)ptr >= v106 + 32 * v83 )
      {
        sub_A8C1F0(v107, v84);
        v85 = *(_QWORD *)(a2 + 8);
        v83 = *(unsigned int *)(a2 + 16);
        v86 = (__m128i *)ptr;
        v50 = v114;
      }
      else
      {
        sub_A8C1F0(v107, v84);
        v85 = *(_QWORD *)(a2 + 8);
        v83 = *(unsigned int *)(a2 + 16);
        v50 = v114;
        v86 = (__m128i *)&ptr[v85 - v106];
      }
    }
    else
    {
      v85 = *(_QWORD *)(a2 + 8);
      v86 = (__m128i *)ptr;
    }
    v87 = (__m128i *)(v85 + 32 * v83);
    v87->m128i_i64[0] = (__int64)v87[1].m128i_i64;
    if ( (__m128i *)v86->m128i_i64[0] == &v86[1] )
    {
      v87[1] = _mm_loadu_si128(v86 + 1);
    }
    else
    {
      v87->m128i_i64[0] = v86->m128i_i64[0];
      v87[1].m128i_i64[0] = v86[1].m128i_i64[0];
    }
    v87->m128i_i64[1] = v86->m128i_i64[1];
    v86->m128i_i64[0] = (__int64)v86[1].m128i_i64;
    v86->m128i_i64[1] = 0;
    v86[1].m128i_i8[0] = 0;
    v88 = *(_BYTE **)ptr;
    ++*(_DWORD *)(a2 + 16);
    if ( v88 != &ptr[16] )
    {
      v115 = v50;
      operator delete(v88);
      v50 = v115;
    }
  }
  v51 = v50 + 1;
LABEL_63:
  v71 = (_BYTE *)*a4;
  v72 = *a4 + a4[1];
  *(_QWORD *)ptr = &ptr[16];
  sub_210B7B0(ptr, v71, v72);
  v73 = (__m128i *)v38->m128i_i64[0];
  if ( *(_BYTE **)ptr == &ptr[16] )
  {
    v79 = *(_QWORD *)&ptr[8];
    if ( *(_QWORD *)&ptr[8] )
    {
      if ( *(_QWORD *)&ptr[8] == 1 )
        v73->m128i_i8[0] = ptr[16];
      else
        memcpy(v73, *(const void **)ptr, *(size_t *)&ptr[8]);
      v79 = *(_QWORD *)&ptr[8];
      v73 = (__m128i *)v38->m128i_i64[0];
    }
    v38->m128i_i64[1] = v79;
    v73->m128i_i8[v79] = 0;
    v73 = *(__m128i **)ptr;
    goto LABEL_67;
  }
  if ( v73 == &v38[1] )
  {
    v38->m128i_i64[0] = *(_QWORD *)ptr;
    v38->m128i_i64[1] = *(_QWORD *)&ptr[8];
    v38[1].m128i_i64[0] = *(_QWORD *)&ptr[16];
    goto LABEL_78;
  }
  v38->m128i_i64[0] = *(_QWORD *)ptr;
  v74 = v38[1].m128i_i64[0];
  v38->m128i_i64[1] = *(_QWORD *)&ptr[8];
  v38[1].m128i_i64[0] = *(_QWORD *)&ptr[16];
  if ( !v73 )
  {
LABEL_78:
    v73 = (__m128i *)&ptr[16];
    *(_QWORD *)ptr = &ptr[16];
    goto LABEL_67;
  }
  *(_QWORD *)ptr = v73;
  *(_QWORD *)&ptr[16] = v74;
LABEL_67:
  *(_QWORD *)&ptr[8] = 0;
  v73->m128i_i8[0] = 0;
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
  v75 = a8;
  v38[2].m128i_i32[0] = v51;
  v76 = _mm_loadu_si128((const __m128i *)&a7);
  v77 = _mm_loadu_si128((const __m128i *)&a9);
  v38[3].m128i_i8[4] = v75;
  *(__m128i *)((char *)v38 + 36) = v76;
  *(_BYTE *)(a2 + 513) &= v112;
  *(_BYTE *)(a2 + 514) |= v112;
  v78 = a10;
  *(__m128i *)((char *)v38 + 56) = v77;
  v38[4].m128i_i64[1] = v78;
  if ( v111 )
    *(_BYTE *)(a2 + 512) = 1;
  *(_BYTE *)(v11 + 8) &= ~1u;
  *(_DWORD *)v11 = a6;
  return v11;
}
