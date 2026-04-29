unsigned __int64 __fastcall sub_1050F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __m128 v12; // xmm0
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 *v17; // rbp
  unsigned __int64 v18; // r12
  size_t v19; // rcx
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 *v22; // r12
  unsigned __int64 v23; // rbp
  size_t v24; // rcx
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __int16 v27; // ax
  __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 *v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rdi
  void (*v33)(); // rax
  __int64 v35; // r12
  void *v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // r12
  __int64 v39; // r12
  void *v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // r12
  __int64 v43; // r12
  __int64 v44; // rax
  __m128i v45; // xmm0
  void *v46; // rax
  void *v47; // rax
  __int64 v48; // rbp
  __int64 *v49; // r12
  __int64 v50; // rbp
  __int64 v51; // r12
  unsigned int v52; // ebp
  int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *v63; // rbp
  __int64 v64; // rdi
  __int64 v65; // rbp
  __m128i v66; // xmm0
  __int64 v67; // rbp
  unsigned __int64 v68; // r12
  __int64 v69; // rbp
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdi
  void *v80; // rax
  const void *v81; // rsi
  __m128i v82; // [rsp+0h] [rbp-1F8h] BYREF
  size_t n; // [rsp+18h] [rbp-1E0h]
  __m128i v84; // [rsp+20h] [rbp-1D8h] BYREF
  _BYTE *v85; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 v86; // [rsp+38h] [rbp-1C0h]
  __m128i v87; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 *v88; // [rsp+50h] [rbp-1A8h]
  __int64 v89; // [rsp+58h] [rbp-1A0h]
  void **v90; // [rsp+60h] [rbp-198h]
  _QWORD *v91; // [rsp+68h] [rbp-190h]
  __int64 v92; // [rsp+70h] [rbp-188h]
  int v93; // [rsp+7Ch] [rbp-17Ch]
  _QWORD v94[2]; // [rsp+80h] [rbp-178h] BYREF
  __m128 v95; // [rsp+90h] [rbp-168h] BYREF
  void *v96; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v97; // [rsp+A8h] [rbp-150h]
  __int64 v98; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v99; // [rsp+C8h] [rbp-130h]
  _BYTE v100[24]; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v101; // [rsp+F8h] [rbp-100h]
  _QWORD v102[5]; // [rsp+110h] [rbp-E8h] BYREF
  char v103; // [rsp+138h] [rbp-C0h]
  __int64 v104; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v105; // [rsp+148h] [rbp-B0h]
  void *src; // [rsp+158h] [rbp-A0h] BYREF
  __m128i v107; // [rsp+160h] [rbp-98h]
  void *v108; // [rsp+170h] [rbp-88h] BYREF
  __m128i v109; // [rsp+178h] [rbp-80h]
  __int64 v110; // [rsp+188h] [rbp-70h]
  __int64 v111; // [rsp+190h] [rbp-68h]
  __int64 v112; // [rsp+198h] [rbp-60h] BYREF
  __m128i v113; // [rsp+1A0h] [rbp-58h]
  int v114; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v115; // [rsp+1B8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 320);
  v115 = __readfsqword(0x28u);
  v93 = *(_DWORD *)(v1 + 64);
  v86 = v93;
  sub_C3280((_QWORD *)(a1 + 200), v93);
  sub_C3280((_QWORD *)(a1 + 176), v93);
  if ( (*(_BYTE *)(a1 + 316) & 4) != 0 )
    sub_C3280((_QWORD *)(a1 + 224), v86);
  v3 = *(_QWORD *)(a1 + 320);
  v96 = nullptr;
  v97 = 0;
  v4 = *(_QWORD *)(v3 + 216);
  if ( v4 )
  {
    v80 = (void *)qalloc_or_throw(16 * v4);
    v81 = *(const void **)(v3 + 208);
    *((_QWORD *)&v97 + 1) = v4;
    v96 = v80;
    memcpy(v80, v81, 16 * v4);
    *(_QWORD *)&v97 = v4;
    v3 = *(_QWORD *)(a1 + 320);
  }
  v90 = &v96;
  sub_317F90(&v96, v3 + 600);
  v5 = *(_QWORD *)(a1 + 320);
  v98 = 0;
  v88 = &v98;
  v6 = *(_QWORD *)(v5 + 664);
  v7 = *(_QWORD *)(v5 + 672);
  v99 = 0;
  if ( v6 + v7 - 1 >= v6 )
  {
    v98 = qvector_reserve(v88, 0, 1, 16);
    *(__m128i *)(v98 + 16 * v99) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v7);
    v5 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v99 = v99 + 1;
  }
  sub_316F70(v88, v5 + 632);
  v8 = *(_QWORD *)(a1 + 320);
  v9 = *(_DWORD *)(a1 + 316);
  v105 = 0;
  v10 = *(_QWORD *)(v8 + 1504);
  v107 = 0;
  v109 = 0;
  v92 = v10;
  v11 = *(_QWORD *)(v8 + 128);
  v111 = 0;
  v112 = 0;
  v114 = v9;
  v113 = 0;
  v102[1] = v8;
  v12 = _mm_loadh_ps((const double *)(v8 + 128));
  v89 = v11;
  v82.m128i_i64[0] = (__int64)v100;
  memset(&v102[2], 0, 24);
  v103 = 0;
  v102[0] = off_4D7AF0;
  v104 = 0;
  src = nullptr;
  v108 = nullptr;
  v110 = 0;
  *(__m128 *)v100 = v12;
  sub_316F70(&v104, v100);
  v13 = 0;
  v14 = 0;
  v91 = v102;
  v15 = *(_QWORD *)(a1 + 320);
  v85 = &v100[16];
  if ( v93 > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v14 >= *(_DWORD *)(v15 + 64) )
          sub_1017B0();
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v14);
        if ( (*(_BYTE *)(a1 + 316) & 2) != 0 )
          break;
        if ( *(_QWORD *)(a1 + 336) )
        {
          if ( src )
          {
            v107.m128i_i64[0] = 0;
            qfree(src);
            src = nullptr;
            v107.m128i_i64[1] = 0;
          }
          if ( v108 )
          {
            v109.m128i_i64[0] = 0;
            qfree(v108);
            v108 = nullptr;
            v109.m128i_i64[1] = 0;
          }
          v111 = 0;
          if ( v112 )
          {
            v113.m128i_i64[0] = 0;
            qfree(v112);
            v112 = 0;
            v113.m128i_i64[1] = 0;
          }
          sub_11EFF0(v16, v91);
          v35 = v13 + *(_QWORD *)(a1 + 200);
          sub_318480(&v108, a1 + 328);
          v36 = *(void **)(v35 + 16);
          v37 = _mm_loadu_si128((const __m128i *)(v35 + 24));
          *(_QWORD *)(v35 + 16) = v108;
          *(__m128i *)(v35 + 24) = v109;
          v38 = *(_QWORD *)(a1 + 176);
          v108 = v36;
          v109 = v37;
          v39 = v13 + v38;
          sub_318480(&src, a1 + 328);
          v40 = *(void **)(v39 + 16);
          v41 = _mm_loadu_si128((const __m128i *)(v39 + 24));
          *(_QWORD *)(v39 + 16) = src;
          *(__m128i *)(v39 + 24) = v107;
          v42 = *(_QWORD *)(a1 + 224);
          src = v40;
          v107 = v41;
          v43 = v13 + v42;
          sub_318480(&v112, a1 + 328);
          v44 = *(_QWORD *)(v43 + 16);
          v45 = _mm_loadu_si128((const __m128i *)(v43 + 24));
          *(_QWORD *)(v43 + 16) = v112;
          *(__m128i *)(v43 + 24) = v113;
          v112 = v44;
          v113 = v45;
          goto LABEL_50;
        }
        ++v14;
        v13 += 40;
        if ( v86 == v14 )
          goto LABEL_51;
      }
      v17 = (__int64 *)(v13 + *(_QWORD *)(a1 + 176));
      sub_642D0(v17, (__int64 *)(v16 + 160));
      v18 = *(_QWORD *)(v16 + 184);
      v19 = 0;
      if ( v18 )
      {
        n = 16 * v18;
        v47 = (void *)qalloc_or_throw(16 * v18);
        v19 = (size_t)memcpy(v47, *(const void **)(v16 + 176), 16 * v18);
      }
      v20 = v17[2];
      v21 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
      if ( v20 )
      {
        v17[3] = 0;
        n = v19;
        v84 = v21;
        qfree(v20);
        v21 = _mm_load_si128(&v84);
        v19 = n;
      }
      v17[2] = v19;
      *(__m128i *)(v17 + 3) = v21;
      v22 = (__int64 *)(v13 + *(_QWORD *)(a1 + 200));
      v84.m128i_i32[0] = *(_DWORD *)(a1 + 316);
      sub_642D0(v22, (__int64 *)(v16 + 240));
      v23 = *(_QWORD *)(v16 + 264);
      v24 = 0;
      if ( v23 )
      {
        n = 16 * v23;
        v46 = (void *)qalloc_or_throw(16 * v23);
        v24 = (size_t)memcpy(v46, *(const void **)(v16 + 256), 16 * v23);
      }
      v25 = v22[2];
      v26 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
      if ( v25 )
      {
        v22[3] = 0;
        n = v24;
        v87 = v26;
        qfree(v25);
        v26 = _mm_load_si128(&v87);
        v24 = n;
      }
      v27 = v84.m128i_i16[0];
      v22[2] = v24;
      *(__m128i *)(v22 + 3) = v26;
      if ( (v27 & 0x180) != 0 )
      {
        v28 = *(_QWORD *)(v16 + 48);
        v87.m128i_i32[0] = v27 & 0x100;
        LODWORD(n) = v87.m128i_i32[0] | 1;
        if ( v28 )
          break;
      }
LABEL_31:
      if ( *(_DWORD *)(v16 + 76) != 1
        && ((unsigned __int8)sub_318830(v13 + *(_QWORD *)(a1 + 176) + 16, v88)
         || (unsigned __int8)sub_318830(v13 + *(_QWORD *)(a1 + 200) + 16, v88)) )
      {
        if ( src )
        {
          v107.m128i_i64[0] = 0;
          qfree(src);
          src = nullptr;
          v107.m128i_i64[1] = 0;
        }
        if ( v108 )
        {
          v109.m128i_i64[0] = 0;
          qfree(v108);
          v108 = nullptr;
          v109.m128i_i64[1] = 0;
        }
        v111 = 0;
        if ( v112 )
        {
          v113.m128i_i64[0] = 0;
          qfree(v112);
          v112 = 0;
          v113.m128i_i64[1] = 0;
        }
        sub_11EFF0(v16, v91);
        if ( (unsigned __int8)sub_318830(v13 + *(_QWORD *)(a1 + 176) + 16, v88) )
        {
          v29 = v107.m128i_i64[0];
          memset(v100, 0, sizeof(v100));
          if ( v107.m128i_i64[0] )
          {
            *(_QWORD *)v100 = qalloc_or_throw(16 * v107.m128i_i64[0]);
            *(_QWORD *)&v100[16] = v29;
            memcpy(*(void **)v100, src, 16 * v29);
            *(_QWORD *)&v100[8] = v29;
          }
          v30 = v88;
          v31 = v13 + *(_QWORD *)(a1 + 176) + 16;
          sub_318020(v31, v88);
          sub_318480(v82.m128i_i64[0], v30);
          sub_317070(v31, v82.m128i_i64[0]);
          if ( *(_QWORD *)v100 )
          {
            *(_QWORD *)&v100[8] = 0;
            qfree(*(_QWORD *)v100);
          }
        }
        if ( (unsigned __int8)sub_318830(v13 + *(_QWORD *)(a1 + 200) + 16, v88) )
        {
          v48 = v109.m128i_i64[0];
          memset(v100, 0, sizeof(v100));
          if ( v109.m128i_i64[0] )
          {
            *(_QWORD *)v100 = qalloc_or_throw(16 * v109.m128i_i64[0]);
            *(_QWORD *)&v100[16] = v48;
            memcpy(*(void **)v100, v108, 16 * v48);
            *(_QWORD *)&v100[8] = v48;
          }
          v49 = v88;
          v50 = v13 + *(_QWORD *)(a1 + 200) + 16;
          sub_318020(v50, v88);
          sub_318480(v82.m128i_i64[0], v49);
          sub_317070(v50, v82.m128i_i64[0]);
          if ( *(_QWORD *)v100 )
          {
            *(_QWORD *)&v100[8] = 0;
            qfree(*(_QWORD *)v100);
          }
        }
      }
      sub_318480(v13 + *(_QWORD *)(a1 + 176) + 16, v90);
      v32 = v13 + *(_QWORD *)(a1 + 200);
      if ( !*(_DWORD *)(v16 + 72) )
      {
        sub_317070(v32 + 16, v88);
        v32 = v13 + *(_QWORD *)(a1 + 200);
        v33 = *(void (**)())(*(_QWORD *)v92 + 80LL);
        if ( v33 != nullsub_36 )
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64))v33)(v92, *(_QWORD *)(v16 + 64), v13 + *(_QWORD *)(a1 + 200));
          v32 = v13 + *(_QWORD *)(a1 + 200);
        }
      }
      sub_318480(v32 + 16, v90);
LABEL_50:
      v15 = *(_QWORD *)(a1 + 320);
      ++v14;
      v13 += 40;
      if ( v86 == v14 )
        goto LABEL_51;
    }
    while ( *(char *)(v28 + 4) < 0 )
    {
      if ( v84.m128i_i8[0] < 0 )
        goto LABEL_25;
LABEL_28:
      v28 = *(_QWORD *)(v28 + 8);
      if ( !v28 )
        goto LABEL_31;
    }
    if ( !v87.m128i_i32[0] )
      goto LABEL_31;
LABEL_25:
    sub_127460(v82.m128i_i64[0], v16, v28, (unsigned int)n);
    sub_63C80(v22, (__int64 *)v82.m128i_i64[0]);
    sub_317070(v22 + 2, v85);
    if ( *(_QWORD *)&v100[16] )
    {
      v101 = 0;
      qfree(*(_QWORD *)&v100[16]);
    }
    qfree(*(_QWORD *)v100);
    goto LABEL_28;
  }
LABEL_51:
  if ( *(_QWORD *)(a1 + 336) )
  {
    sub_317070(*(_QWORD *)(a1 + 200) + 16LL, v88);
    v51 = 8;
    v52 = 1;
    v53 = v93 - 1;
    if ( v93 - 1 > 1 )
    {
      do
      {
        while ( 1 )
        {
          v54 = *(_QWORD *)(a1 + 320);
          if ( v52 >= *(_DWORD *)(v54 + 64) )
            sub_1017B0();
          v55 = *(_QWORD *)(*(_QWORD *)(v54 + 528) + v51);
          if ( (get_flags_ex(*(_QWORD *)(v55 + 40), 4) & 0x10000) != 0 )
          {
            v56 = *(_QWORD *)(a1 + 320);
            v57 = *(_QWORD *)(v55 + 40);
            n = v56 + 8;
            v58 = sub_3312A0(v56, v57);
            if ( (unsigned __int8)sub_332C60(v56 + 8, v58) )
              break;
          }
          ++v52;
          v51 += 8;
          v89 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 128LL);
          if ( v52 == v53 )
            goto LABEL_86;
        }
        v59 = sub_1CF5F0(*(_QWORD *)(a1 + 320), *(_QWORD *)(v55 + 40));
        v60 = 5 * v51;
        if ( v59 > v89 )
        {
          v78 = *(_QWORD *)(a1 + 320);
          n = 5 * v51;
          v79 = *(_QWORD *)(a1 + 224) + 5 * v51 + 16;
          v94[0] = (v89 + *(_QWORD *)(v78 + 1440)) & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 1496) + 24LL) + 16LL);
          v94[1] = v59 - v89;
          sub_316F70(v79, v94);
          v60 = 5 * v51;
        }
        v61 = v60 + *(_QWORD *)(a1 + 200);
        if ( *(_QWORD *)(v61 + 24) )
        {
          v72 = *(_QWORD *)(a1 + 320);
          v73 = *(_QWORD *)(v72 + 1440);
          v74 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v72 + 1496) + 24LL) + 16LL);
          v75 = v74 & (**(_QWORD **)(v61 + 16) - v73);
          v76 = v75;
          if ( v75 < 0 )
          {
            if ( !under_debugger )
              sub_3835A0(50145);
            BUG();
          }
          if ( v59 > v75 )
          {
            v77 = v60 + *(_QWORD *)(a1 + 224);
            v95.m128_u64[0] = v74 & (v76 + v73);
            v95.m128_u64[1] = v59 - v76;
            sub_316F70(v77 + 16, &v95);
          }
        }
        ++v52;
        v89 = v59;
        v51 += 8;
      }
      while ( v52 != v53 );
    }
LABEL_86:
    v62 = *(int *)(a1 + 312);
    if ( (_DWORD)v62 != -1 )
    {
      v63 = (__int64 *)(*(_QWORD *)(a1 + 200) + 40 * v62);
      sub_642D0((__int64 *)(a1 + 248), v63);
      memset(v100, 0, sizeof(v100));
      sub_101850(v82.m128i_i64[0], (__int64)(v63 + 2));
      v64 = *(_QWORD *)(a1 + 264);
      v65 = *(_QWORD *)v100;
      v66 = _mm_loadu_si128((const __m128i *)&v100[8]);
      if ( v64 )
      {
        *(_QWORD *)(a1 + 272) = 0;
        v82 = v66;
        qfree(v64);
        v66 = _mm_load_si128(&v82);
      }
      *(_QWORD *)(a1 + 264) = v65;
      *(__m128i *)(a1 + 272) = v66;
    }
    if ( v93 > 0 )
    {
      v67 = 0;
      v68 = 40 * v86;
      do
      {
        sub_318020(v67 + *(_QWORD *)(a1 + 200) + 16, v67 + *(_QWORD *)(a1 + 224) + 16);
        v67 += 40;
      }
      while ( v68 != v67 );
      if ( (*(_BYTE *)(a1 + 316) & 0x40) != 0 )
      {
        v69 = 0;
        do
        {
          v70 = *(_QWORD *)(a1 + 320);
          if ( (unsigned int)v69 >= *(_DWORD *)(v70 + 64) )
            sub_1017B0();
          v71 = *(_QWORD *)(a1 + 224) + 40 * v69 + 16;
          v95 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v70 + 528) + 8 * v69) + 320LL));
          sub_3175D0(v71, a1 + 328, &v95);
          ++v69;
        }
        while ( v86 != v69 );
      }
    }
  }
  v102[0] = off_4D7AF0;
  if ( v112 )
  {
    v113.m128i_i64[0] = 0;
    qfree(v112);
  }
  qfree(v110);
  if ( v108 )
  {
    v109.m128i_i64[0] = 0;
    qfree(v108);
  }
  if ( src )
  {
    v107.m128i_i64[0] = 0;
    qfree(src);
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree(v98);
  }
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree(v96);
  }
  return v115 - __readfsqword(0x28u);
}
