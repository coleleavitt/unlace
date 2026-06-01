unsigned __int64 __fastcall sub_1056B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __m128 v15; // xmm0
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 *v20; // rbp
  unsigned __int64 v21; // r12
  size_t v22; // rcx
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __int64 *v25; // r12
  unsigned __int64 v26; // rbp
  size_t v27; // rcx
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int16 v30; // ax
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  void (*v42)(); // rax
  __int64 v44; // r12
  void *v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // r12
  __int64 v48; // r12
  void *v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // r12
  __int64 v52; // r12
  __int64 v53; // rax
  __m128i v54; // xmm0
  void *v55; // rax
  void *v56; // rax
  __int64 v57; // rbp
  __int64 v58; // r12
  __int64 v59; // rbp
  __int64 v60; // r12
  unsigned int v61; // ebp
  int v62; // r13d
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rbp
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rbp
  __m128i v76; // xmm0
  __int64 v77; // rbp
  unsigned __int64 v78; // r12
  __int64 v79; // rbp
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdi
  void *v90; // rax
  const void *v91; // rsi
  __m128i v92; // [rsp+0h] [rbp-1F8h] BYREF
  size_t n; // [rsp+18h] [rbp-1E0h]
  __m128i v94; // [rsp+20h] [rbp-1D8h] BYREF
  _BYTE *v95; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 v96; // [rsp+38h] [rbp-1C0h]
  __m128i v97; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 *v98; // [rsp+50h] [rbp-1A8h]
  __int64 v99; // [rsp+58h] [rbp-1A0h]
  __int64 *v100; // [rsp+60h] [rbp-198h]
  _QWORD *v101; // [rsp+68h] [rbp-190h]
  __int64 v102; // [rsp+70h] [rbp-188h]
  int v103; // [rsp+7Ch] [rbp-17Ch]
  _QWORD v104[2]; // [rsp+80h] [rbp-178h] BYREF
  __m128 v105; // [rsp+90h] [rbp-168h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v107; // [rsp+A8h] [rbp-150h]
  __int64 v108; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v109; // [rsp+C8h] [rbp-130h]
  _BYTE v110[24]; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v111; // [rsp+F8h] [rbp-100h]
  _QWORD v112[5]; // [rsp+110h] [rbp-E8h] BYREF
  char v113; // [rsp+138h] [rbp-C0h]
  __int64 v114; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v115; // [rsp+148h] [rbp-B0h]
  void *src; // [rsp+158h] [rbp-A0h] BYREF
  __m128i v117; // [rsp+160h] [rbp-98h]
  void *v118; // [rsp+170h] [rbp-88h] BYREF
  __m128i v119; // [rsp+178h] [rbp-80h]
  __int64 v120; // [rsp+188h] [rbp-70h]
  __int64 v121; // [rsp+190h] [rbp-68h]
  __int64 v122; // [rsp+198h] [rbp-60h] BYREF
  __m128i v123; // [rsp+1A0h] [rbp-58h]
  int v124; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v125; // [rsp+1B8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 320);
  v125 = __readfsqword(0x28u);
  v103 = *(_DWORD *)(v1 + 64);
  v96 = v103;
  sub_C3840((__int64 *)(a1 + 200), v103);
  v3 = v103;
  sub_C3840((__int64 *)(a1 + 176), v103);
  if ( (*(_BYTE *)(a1 + 316) & 4) != 0 )
  {
    v3 = v96;
    sub_C3840((__int64 *)(a1 + 224), v96);
  }
  v6 = *(_QWORD *)(a1 + 320);
  v106 = 0;
  v107 = 0;
  v7 = *(_QWORD *)(v6 + 216);
  if ( v7 )
  {
    v90 = (void *)qalloc_or_throw(16 * v7, v3, v4, v5);
    v91 = *(const void **)(v6 + 208);
    *((_QWORD *)&v107 + 1) = v7;
    v106 = (__int64)v90;
    memcpy(v90, v91, 16 * v7);
    *(_QWORD *)&v107 = v7;
    v6 = *(_QWORD *)(a1 + 320);
  }
  v100 = &v106;
  sub_317BD0(&v106, v6 + 600);
  v8 = *(_QWORD *)(a1 + 320);
  v108 = 0;
  v98 = &v108;
  v9 = *(_QWORD *)(v8 + 664);
  v10 = *(_QWORD *)(v8 + 672);
  v109 = 0;
  if ( v9 + v10 - 1 >= v9 )
  {
    v108 = qvector_reserve((__int64)v98, 0, 1, 16);
    *(__m128i *)(v108 + 16 * v109) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v10);
    v8 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v109 = v109 + 1;
  }
  sub_316BB0(v98, v8 + 632);
  v11 = *(_QWORD *)(a1 + 320);
  v12 = *(_DWORD *)(a1 + 316);
  v115 = 0;
  v13 = *(_QWORD *)(v11 + 1504);
  v117 = 0;
  v119 = 0;
  v102 = v13;
  v14 = *(_QWORD *)(v11 + 128);
  v121 = 0;
  v122 = 0;
  v124 = v12;
  v123 = 0;
  v112[1] = v11;
  v15 = _mm_loadh_ps((const double *)(v11 + 128));
  v99 = v14;
  v92.m128i_i64[0] = (__int64)v110;
  memset(&v112[2], 0, 24);
  v113 = 0;
  v112[0] = off_4DD430;
  v114 = 0;
  src = nullptr;
  v118 = nullptr;
  v120 = 0;
  *(__m128 *)v110 = v15;
  sub_316BB0(&v114, v110);
  v16 = 0;
  v17 = 0;
  v101 = v112;
  v18 = *(_QWORD *)(a1 + 320);
  v95 = &v110[16];
  if ( v103 > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v17 >= *(_DWORD *)(v18 + 64) )
          sub_101D70();
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 528) + 8 * v17);
        if ( (*(_BYTE *)(a1 + 316) & 2) != 0 )
          break;
        if ( *(_QWORD *)(a1 + 336) )
        {
          if ( src )
          {
            v117.m128i_i64[0] = 0;
            qfree((__int64)src);
            src = nullptr;
            v117.m128i_i64[1] = 0;
          }
          if ( v118 )
          {
            v119.m128i_i64[0] = 0;
            qfree((__int64)v118);
            v118 = nullptr;
            v119.m128i_i64[1] = 0;
          }
          v121 = 0;
          if ( v122 )
          {
            v123.m128i_i64[0] = 0;
            qfree(v122);
            v122 = 0;
            v123.m128i_i64[1] = 0;
          }
          sub_11F5B0(v19, v101);
          v44 = v16 + *(_QWORD *)(a1 + 200);
          sub_3180C0(&v118, a1 + 328);
          v45 = *(void **)(v44 + 16);
          v46 = _mm_loadu_si128((const __m128i *)(v44 + 24));
          *(_QWORD *)(v44 + 16) = v118;
          *(__m128i *)(v44 + 24) = v119;
          v47 = *(_QWORD *)(a1 + 176);
          v118 = v45;
          v119 = v46;
          v48 = v16 + v47;
          sub_3180C0(&src, a1 + 328);
          v49 = *(void **)(v48 + 16);
          v50 = _mm_loadu_si128((const __m128i *)(v48 + 24));
          *(_QWORD *)(v48 + 16) = src;
          *(__m128i *)(v48 + 24) = v117;
          v51 = *(_QWORD *)(a1 + 224);
          src = v49;
          v117 = v50;
          v52 = v16 + v51;
          sub_3180C0(&v122, a1 + 328);
          v53 = *(_QWORD *)(v52 + 16);
          v54 = _mm_loadu_si128((const __m128i *)(v52 + 24));
          *(_QWORD *)(v52 + 16) = v122;
          *(__m128i *)(v52 + 24) = v123;
          v122 = v53;
          v123 = v54;
          goto LABEL_50;
        }
        ++v17;
        v16 += 40;
        if ( v96 == v17 )
          goto LABEL_51;
      }
      v20 = (__int64 *)(v16 + *(_QWORD *)(a1 + 176));
      sub_648D0(v20, (__int64 *)(v19 + 160));
      v21 = *(_QWORD *)(v19 + 184);
      v22 = 0;
      if ( v21 )
      {
        n = 16 * v21;
        v56 = (void *)qalloc_or_throw(16 * v21, v19 + 160, 16 * v21, 0);
        v22 = (size_t)memcpy(v56, *(const void **)(v19 + 176), 16 * v21);
      }
      v23 = v20[2];
      v24 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
      if ( v23 )
      {
        v20[3] = 0;
        n = v22;
        v94 = v24;
        qfree(v23);
        v24 = _mm_load_si128(&v94);
        v22 = n;
      }
      v20[2] = v22;
      *(__m128i *)(v20 + 3) = v24;
      v25 = (__int64 *)(v16 + *(_QWORD *)(a1 + 200));
      v94.m128i_i32[0] = *(_DWORD *)(a1 + 316);
      sub_648D0(v25, (__int64 *)(v19 + 240));
      v26 = *(_QWORD *)(v19 + 264);
      v27 = 0;
      if ( v26 )
      {
        n = 16 * v26;
        v55 = (void *)qalloc_or_throw(16 * v26, v19 + 240, 16 * v26, 0);
        v27 = (size_t)memcpy(v55, *(const void **)(v19 + 256), 16 * v26);
      }
      v28 = v25[2];
      v29 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
      if ( v28 )
      {
        v25[3] = 0;
        n = v27;
        v97 = v29;
        qfree(v28);
        v29 = _mm_load_si128(&v97);
        v27 = n;
      }
      v30 = v94.m128i_i16[0];
      v25[2] = v27;
      *(__m128i *)(v25 + 3) = v29;
      if ( (v30 & 0x180) != 0 )
      {
        v31 = *(_QWORD *)(v19 + 48);
        v97.m128i_i32[0] = v30 & 0x100;
        LODWORD(n) = v97.m128i_i32[0] | 1;
        if ( v31 )
          break;
      }
LABEL_31:
      if ( *(_DWORD *)(v19 + 76) != 1
        && ((unsigned __int8)sub_318470(v16 + *(_QWORD *)(a1 + 176) + 16, v98)
         || (unsigned __int8)sub_318470(v16 + *(_QWORD *)(a1 + 200) + 16, v98)) )
      {
        if ( src )
        {
          v117.m128i_i64[0] = 0;
          qfree((__int64)src);
          src = nullptr;
          v117.m128i_i64[1] = 0;
        }
        if ( v118 )
        {
          v119.m128i_i64[0] = 0;
          qfree((__int64)v118);
          v118 = nullptr;
          v119.m128i_i64[1] = 0;
        }
        v121 = 0;
        if ( v122 )
        {
          v123.m128i_i64[0] = 0;
          qfree(v122);
          v122 = 0;
          v123.m128i_i64[1] = 0;
        }
        sub_11F5B0(v19, v101);
        v32 = (__int64)v98;
        if ( (unsigned __int8)sub_318470(v16 + *(_QWORD *)(a1 + 176) + 16, v98) )
        {
          v35 = v117.m128i_i64[0];
          memset(v110, 0, sizeof(v110));
          if ( v117.m128i_i64[0] )
          {
            *(_QWORD *)v110 = qalloc_or_throw(16 * v117.m128i_i64[0], v32, v33, v34);
            *(_QWORD *)&v110[16] = v35;
            memcpy(*(void **)v110, src, 16 * v35);
            *(_QWORD *)&v110[8] = v35;
          }
          v36 = (__int64)v98;
          v37 = v16 + *(_QWORD *)(a1 + 176) + 16;
          sub_317C60(v37, v98);
          sub_3180C0(v92.m128i_i64[0], v36);
          sub_316CB0(v37, v92.m128i_i64[0]);
          if ( *(_QWORD *)v110 )
          {
            *(_QWORD *)&v110[8] = 0;
            qfree(*(__int64 *)v110);
          }
        }
        v38 = (__int64)v98;
        if ( (unsigned __int8)sub_318470(v16 + *(_QWORD *)(a1 + 200) + 16, v98) )
        {
          v57 = v119.m128i_i64[0];
          memset(v110, 0, sizeof(v110));
          if ( v119.m128i_i64[0] )
          {
            *(_QWORD *)v110 = qalloc_or_throw(16 * v119.m128i_i64[0], v38, v39, v40);
            *(_QWORD *)&v110[16] = v57;
            memcpy(*(void **)v110, v118, 16 * v57);
            *(_QWORD *)&v110[8] = v57;
          }
          v58 = (__int64)v98;
          v59 = v16 + *(_QWORD *)(a1 + 200) + 16;
          sub_317C60(v59, v98);
          sub_3180C0(v92.m128i_i64[0], v58);
          sub_316CB0(v59, v92.m128i_i64[0]);
          if ( *(_QWORD *)v110 )
          {
            *(_QWORD *)&v110[8] = 0;
            qfree(*(__int64 *)v110);
          }
        }
      }
      sub_3180C0(v16 + *(_QWORD *)(a1 + 176) + 16, v100);
      v41 = v16 + *(_QWORD *)(a1 + 200);
      if ( !*(_DWORD *)(v19 + 72) )
      {
        sub_316CB0(v41 + 16, v98);
        v41 = v16 + *(_QWORD *)(a1 + 200);
        v42 = *(void (**)())(*(_QWORD *)v102 + 80LL);
        if ( v42 != nullsub_36 )
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64))v42)(v102, *(_QWORD *)(v19 + 64), v16 + *(_QWORD *)(a1 + 200));
          v41 = v16 + *(_QWORD *)(a1 + 200);
        }
      }
      sub_3180C0(v41 + 16, v100);
LABEL_50:
      v18 = *(_QWORD *)(a1 + 320);
      ++v17;
      v16 += 40;
      if ( v96 == v17 )
        goto LABEL_51;
    }
    while ( *(char *)(v31 + 4) < 0 )
    {
      if ( v94.m128i_i8[0] < 0 )
        goto LABEL_25;
LABEL_28:
      v31 = *(_QWORD *)(v31 + 8);
      if ( !v31 )
        goto LABEL_31;
    }
    if ( !v97.m128i_i32[0] )
      goto LABEL_31;
LABEL_25:
    sub_127A20(v92.m128i_i64[0], v19, v31, (unsigned int)n);
    sub_64280(v25, (__int64 *)v92.m128i_i64[0]);
    sub_316CB0(v25 + 2, v95);
    if ( *(_QWORD *)&v110[16] )
    {
      v111 = 0;
      qfree(*(__int64 *)&v110[16]);
    }
    qfree(*(__int64 *)v110);
    goto LABEL_28;
  }
LABEL_51:
  if ( *(_QWORD *)(a1 + 336) )
  {
    sub_316CB0(*(_QWORD *)(a1 + 200) + 16LL, v98);
    v60 = 8;
    v61 = 1;
    v62 = v103 - 1;
    if ( v103 - 1 > 1 )
    {
      do
      {
        while ( 1 )
        {
          v63 = *(_QWORD *)(a1 + 320);
          if ( v61 >= *(_DWORD *)(v63 + 64) )
            sub_101D70();
          v64 = *(_QWORD *)(*(_QWORD *)(v63 + 528) + v60);
          if ( (get_flags_ex() & 0x10000) != 0 )
          {
            v65 = *(_QWORD *)(a1 + 320);
            n = v65 + 8;
            v66 = sub_330F80(v65);
            if ( (unsigned __int8)sub_332920(v65 + 8, v66) )
              break;
          }
          ++v61;
          v60 += 8;
          v99 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 128LL);
          if ( v61 == v62 )
            goto LABEL_86;
        }
        v67 = sub_1CFBB0(*(_QWORD *)(a1 + 320), *(_QWORD *)(v64 + 40));
        v68 = 5 * v60;
        if ( v67 > v99 )
        {
          v88 = *(_QWORD *)(a1 + 320);
          n = 5 * v60;
          v89 = *(_QWORD *)(a1 + 224) + 5 * v60 + 16;
          v104[0] = (v99 + *(_QWORD *)(v88 + 1440)) & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v88 + 1496) + 24LL) + 16LL);
          v104[1] = v67 - v99;
          sub_316BB0(v89, v104);
          v68 = 5 * v60;
        }
        v69 = v68 + *(_QWORD *)(a1 + 200);
        if ( *(_QWORD *)(v69 + 24) )
        {
          v82 = *(_QWORD *)(a1 + 320);
          v83 = *(_QWORD *)(v82 + 1440);
          v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v82 + 1496) + 24LL) + 16LL);
          v85 = v84 & (**(_QWORD **)(v69 + 16) - v83);
          v86 = v85;
          if ( v85 < 0 )
          {
            if ( !under_debugger )
              sub_383060(50145);
            BUG();
          }
          if ( v67 > v85 )
          {
            v87 = v68 + *(_QWORD *)(a1 + 224);
            v105.m128_u64[0] = v84 & (v86 + v83);
            v105.m128_u64[1] = v67 - v86;
            sub_316BB0(v87 + 16, &v105);
          }
        }
        ++v61;
        v99 = v67;
        v60 += 8;
      }
      while ( v61 != v62 );
    }
LABEL_86:
    v70 = *(int *)(a1 + 312);
    if ( (_DWORD)v70 != -1 )
    {
      v71 = (__int64 *)(*(_QWORD *)(a1 + 200) + 40 * v70);
      sub_648D0((__int64 *)(a1 + 248), v71);
      memset(v110, 0, sizeof(v110));
      sub_101E10(v92.m128i_i64[0], (__int64)(v71 + 2), v72, v73);
      v74 = *(_QWORD *)(a1 + 264);
      v75 = *(_QWORD *)v110;
      v76 = _mm_loadu_si128((const __m128i *)&v110[8]);
      if ( v74 )
      {
        *(_QWORD *)(a1 + 272) = 0;
        v92 = v76;
        qfree(v74);
        v76 = _mm_load_si128(&v92);
      }
      *(_QWORD *)(a1 + 264) = v75;
      *(__m128i *)(a1 + 272) = v76;
    }
    if ( v103 > 0 )
    {
      v77 = 0;
      v78 = 40 * v96;
      do
      {
        sub_317C60(v77 + *(_QWORD *)(a1 + 200) + 16, v77 + *(_QWORD *)(a1 + 224) + 16);
        v77 += 40;
      }
      while ( v78 != v77 );
      if ( (*(_BYTE *)(a1 + 316) & 0x40) != 0 )
      {
        v79 = 0;
        do
        {
          v80 = *(_QWORD *)(a1 + 320);
          if ( (unsigned int)v79 >= *(_DWORD *)(v80 + 64) )
            sub_101D70();
          v81 = *(_QWORD *)(a1 + 224) + 40 * v79 + 16;
          v105 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v80 + 528) + 8 * v79) + 320LL));
          sub_317210(v81, a1 + 328, &v105);
          ++v79;
        }
        while ( v96 != v79 );
      }
    }
  }
  v112[0] = off_4DD430;
  if ( v122 )
  {
    v123.m128i_i64[0] = 0;
    qfree(v122);
  }
  qfree(v120);
  if ( v118 )
  {
    v119.m128i_i64[0] = 0;
    qfree((__int64)v118);
  }
  if ( src )
  {
    v117.m128i_i64[0] = 0;
    qfree((__int64)src);
  }
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree(v108);
  }
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106);
  }
  return v125 - __readfsqword(0x28u);
}
