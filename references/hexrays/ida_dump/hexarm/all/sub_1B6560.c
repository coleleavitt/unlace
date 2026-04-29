unsigned __int64 __fastcall sub_1B6560(__int64 a1, __int64 *a2, double a3, double a4, double a5, __m128 a6)
{
  __m128 v6; // xmm0
  unsigned int v8; // r12d
  int v10; // r11d
  const char *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // r13
  const char *v14; // rdi
  const char *v15; // rsi
  const char *v16; // rcx
  const char *v17; // rdx
  const char *v18; // r9
  const char *v19; // rax
  const char *v20; // r10
  const char *v21; // r9
  void *v22; // r11
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r13
  const char *v32; // rcx
  const char *v33; // rdx
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __m128i v41; // xmm1
  __int64 *v42; // r14
  __int64 v43; // rax
  __m128i si128; // xmm0
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  __m128i v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rax
  const char *v58; // rdx
  __int64 v59; // rdi
  __m128i v61; // xmm0
  __m128i v62; // xmm1
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // r13
  __int64 v66; // r13
  __m128 v67; // xmm0
  __int64 v68; // rdx
  __int64 v69; // rsi
  const char *v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // r12
  __int64 v75; // r13
  __int64 *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // r13
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // r8
  __int64 *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // r8
  bool v93; // zf
  int v94; // edx
  int v95; // esi
  __int64 v96; // r9
  unsigned __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 v99; // rax
  void *v100; // rax
  const void *v101; // rsi
  void *v102; // rax
  const void *v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  char *v107; // r12
  char *v108; // r13
  __int64 v109; // rsi
  __int64 *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rax
  const char *v117; // [rsp+0h] [rbp-C0h]
  __int64 v118; // [rsp+0h] [rbp-C0h]
  __m128i v119; // [rsp+8h] [rbp-B8h] BYREF
  __int64 *v120; // [rsp+18h] [rbp-A8h]
  __int64 v121; // [rsp+20h] [rbp-A0h] BYREF
  __m128i v122; // [rsp+28h] [rbp-98h]
  const char *v123; // [rsp+40h] [rbp-80h] BYREF
  __int128 v124; // [rsp+48h] [rbp-78h]
  _BYTE v125[24]; // [rsp+60h] [rbp-60h] BYREF
  __int128 v126; // [rsp+78h] [rbp-48h]
  unsigned __int64 v127; // [rsp+88h] [rbp-38h]

  v6.m128_u64[0] = 0;
  v8 = *(_DWORD *)(a1 + 72);
  v127 = __readfsqword(0x28u);
  v122 = 0;
  v121 = 0;
  if ( !v8 )
  {
    v79 = *(_QWORD *)(a1 + 64);
    sub_6B2B0(
      &v121,
      (__int64)&unk_418758,
      *(_QWORD *)(v79 + 80),
      *(_QWORD *)(v79 + 152),
      *(_QWORD *)(v79 + 136),
      *(_QWORD *)(v79 + 144),
      *(_QWORD *)(v79 + 168),
      *(_QWORD *)(v79 + 128),
      *(unsigned int *)(v79 + 120));
    v80 = a2[1];
    v81 = *a2;
    if ( a2[2] < (unsigned __int64)(v80 + 1) )
    {
      v104 = qvector_reserve(a2, v81, v80 + 1, 24);
      *a2 = v104;
      v80 = a2[1];
      v81 = v104;
    }
    v82 = v81 + 24 * v80;
    *(_QWORD *)v82 = 0;
    v83 = v121;
    *(_OWORD *)(v82 + 8) = 0;
    ++a2[1];
    v84 = *(_QWORD *)v82;
    *(_QWORD *)v82 = v83;
    v6 = (__m128)_mm_loadu_si128((const __m128i *)(v82 + 8));
    v121 = v84;
    *(__m128i *)(v82 + 8) = v122;
    v85 = *(_QWORD *)(a1 + 64);
    v122 = (__m128i)v6;
    v86 = *(_QWORD *)(v85 + 920);
    if ( v86 && *(_QWORD *)(v86 + 16) )
    {
      v120 = (__int64 *)v6.m128_u64[0];
      if ( v6.m128_u64[0] )
      {
        v89 = v6.m128_u64[0] + 14;
        v88 = v6.m128_u64[0] + 15;
        v120 = (__int64 *)(v6.m128_u64[0] - 1);
      }
      else
      {
        v88 = 16;
        v89 = 15;
      }
      if ( _mm_movehl_ps(a6, v6).m128_u64[0] < v88 )
      {
        v119.m128i_i64[0] = v89;
        v119.m128i_i64[1] = v88;
        v121 = qvector_reserve(&v121, v84, v88, 1);
        v89 = v119.m128i_i64[0];
        v84 = v121;
        v88 = v119.m128i_u64[1];
      }
      v122.m128i_i64[0] = v88;
      v90 = v120;
      *(_BYTE *)(v84 + v89) = 0;
      v91 = (__int64 *)((char *)v90 + v121);
      v92 = 0;
      *v91 = 0x45564153203B0301LL;
      *(_QWORD *)((char *)v91 + 7) = 0x203A534745524445LL;
      v93 = *(_QWORD *)(v86 + 16) == 0;
      v120 = (__int64 *)v125;
      if ( !v93 )
      {
        while ( 1 )
        {
          v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
          v95 = *(_DWORD *)(*(_QWORD *)(v86 + 8) + 4 * v92);
          *(_OWORD *)v125 = 0u;
          sub_63880(v120, v95, v94);
          sub_647F0((__int64)v120, (__int64)&v121);
          ++v8;
          qfree(*(_QWORD *)v125);
          v92 = (int)v8;
          if ( (unsigned __int64)(int)v8 >= *(_QWORD *)(v86 + 16) )
            break;
          v96 = v122.m128i_i64[0];
          v97 = 2;
          if ( v122.m128i_i64[0] )
          {
            v97 = v122.m128i_i64[0] + 1;
            v96 = v122.m128i_i64[0] - 1;
          }
          v98 = v121;
          if ( v122.m128i_i64[1] < v97 )
          {
            v118 = v96;
            v119.m128i_i64[0] = (int)v8;
            v119.m128i_i64[1] = v97;
            v121 = qvector_reserve(&v121, v121, v97, 1);
            v96 = v118;
            v98 = v121;
            v92 = (int)v8;
            v97 = v119.m128i_u64[1];
          }
          v122.m128i_i64[0] = v97;
          *(_BYTE *)(v98 + v96) = 44;
          *(_BYTE *)(v121 + v96 + 1) = 0;
        }
      }
      v120 = (__int64 *)v122.m128i_i64[0];
      if ( v122.m128i_i64[0] )
      {
        v108 = (char *)v120 + 1;
        v107 = (char *)v120 + 2;
        v120 = (__int64 *)((char *)v120 - 1);
      }
      else
      {
        v107 = (_BYTE *)(&word_2 + 1);
        v108 = (char *)&word_2;
      }
      v109 = v121;
      if ( v122.m128i_i64[1] < (unsigned __int64)v107 )
      {
        v121 = qvector_reserve(&v121, v121, v107, 1);
        v109 = v121;
      }
      v122.m128i_i64[0] = (__int64)v107;
      v110 = v120;
      v108[v109] = 0;
      *(_WORD *)((char *)v110 + v121) = 770;
      v111 = a2[1];
      v112 = *a2;
      if ( a2[2] < (unsigned __int64)(v111 + 1) )
      {
        v116 = qvector_reserve(a2, v112, v111 + 1, 24);
        *a2 = v116;
        v111 = a2[1];
        v112 = v116;
      }
      v113 = v112 + 24 * v111;
      *(_QWORD *)v113 = 0;
      v114 = v121;
      *(_OWORD *)(v113 + 8) = 0;
      ++a2[1];
      v115 = *(_QWORD *)v113;
      *(_QWORD *)v113 = v114;
      v6 = (__m128)_mm_loadu_si128((const __m128i *)(v113 + 8));
      v121 = v115;
      *(__m128i *)(v113 + 8) = v122;
      v122 = (__m128i)v6;
    }
    v8 = *(_DWORD *)(a1 + 72);
  }
  v10 = *(_DWORD *)(a1 + 24);
  v11 = (const char *)&unk_412793;
  v12 = (__int64 *)" EXTFRAME";
  v13 = *(int *)(a1 + 76);
  v14 = " INLINED";
  v15 = " KEEP";
  v16 = " FAKE";
  v17 = " TAILCALL";
  if ( (v10 & 0x40000) == 0 )
    v12 = (__int64 *)&unk_412793;
  v18 = " COMB";
  if ( (v10 & 0x20000) == 0 )
    v14 = (const char *)&unk_412793;
  if ( (v10 & 0x10000) == 0 )
    v15 = (const char *)&unk_412793;
  v120 = v12;
  if ( (v10 & 2) == 0 )
    v16 = (const char *)&unk_412793;
  v19 = " PUSH";
  if ( (v10 & 8) == 0 )
    v17 = (const char *)&unk_412793;
  if ( (v10 & 0x10) == 0 )
    v19 = (const char *)&unk_412793;
  if ( (v10 & 0x40) == 0 )
    v18 = (const char *)&unk_412793;
  v119.m128i_i64[1] = (__int64)v18;
  v20 = " PROP";
  v21 = " NORET";
  if ( (v10 & 0x80u) == 0 )
    v20 = (const char *)&unk_412793;
  if ( (v10 & 0x2000) == 0 )
    v21 = (const char *)&unk_412793;
  if ( (v10 & 0x4000) != 0 )
    v11 = " DSLOT";
  v119.m128i_i32[0] = v13 - 1;
  v22 = &unk_41276B;
  if ( (unsigned int)(v13 - 1) <= 5 )
    v22 = *(&off_4D8AC0 + v13);
  sub_6B2B0(&v121, (__int64)&unk_4187A0, v22, v8, v11, v21, v20, v119.m128i_i64[1], v19, v17, v16, v15, v14, v120);
  if ( *(_DWORD *)(a1 + 352) )
  {
    v120 = (__int64 *)v122.m128i_i64[0];
    if ( v122.m128i_i64[0] )
    {
      v75 = v122.m128i_i64[0] + 9;
      v74 = v122.m128i_i64[0] + 10;
      v73 = v121;
      v120 = (__int64 *)(v122.m128i_i64[0] - 1);
      if ( v122.m128i_i64[1] >= (unsigned __int64)(v122.m128i_i64[0] + 10) )
        goto LABEL_83;
    }
    else
    {
      v73 = v121;
      v74 = 11;
      v75 = 10;
      if ( v122.m128i_i64[1] >= 0xBuLL )
        goto LABEL_83;
    }
    v121 = qvector_reserve(&v121, v73, v74, 1);
    v73 = v121;
LABEL_83:
    v122.m128i_i64[0] = v74;
    v76 = v120;
    *(_BYTE *)(v73 + v75) = 0;
    qmemcpy((char *)v76 + v121, " INBOUNDS:", 10);
    if ( *(int *)(a1 + 352) > 0 )
    {
      v77 = 0;
      do
      {
        v78 = v77;
        sub_FA510(&v121, (__int64)" %d", *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4 * v77));
        v77 = v78 + 1;
      }
      while ( *(_DWORD *)(a1 + 352) > (int)v78 + 1 );
    }
  }
  if ( !*(_DWORD *)(a1 + 376) )
    goto LABEL_31;
  v120 = (__int64 *)v122.m128i_i64[0];
  if ( v122.m128i_i64[0] )
  {
    v25 = v122.m128i_i64[0] + 10;
    v24 = v122.m128i_i64[0] + 11;
    v23 = v121;
    v120 = (__int64 *)(v122.m128i_i64[0] - 1);
    if ( v122.m128i_i64[1] >= (unsigned __int64)(v122.m128i_i64[0] + 11) )
      goto LABEL_28;
  }
  else
  {
    v23 = v121;
    v24 = 12;
    v25 = 11;
    if ( v122.m128i_i64[1] >= 0xCuLL )
      goto LABEL_28;
  }
  v121 = qvector_reserve(&v121, v23, v24, 1);
  v23 = v121;
LABEL_28:
  v122.m128i_i64[0] = v24;
  v26 = v120;
  *(_BYTE *)(v23 + v25) = 0;
  qmemcpy((char *)v26 + v121, " OUTBOUNDS:", 11);
  if ( *(int *)(a1 + 376) > 0 )
  {
    v27 = 0;
    do
    {
      v28 = v27;
      sub_FA510(&v121, (__int64)" %d", *(_DWORD *)(*(_QWORD *)(a1 + 368) + 4 * v27));
      v27 = v28 + 1;
    }
    while ( *(_DWORD *)(a1 + 376) > (int)v28 + 1 );
  }
LABEL_31:
  v29 = *(_QWORD *)(a1 + 40);
  v30 = *(_QWORD *)(a1 + 64);
  v31 = *(_QWORD *)(a1 + 320);
  v119 = *(__m128i *)(a1 + 328);
  v120 = (__int64 *)v125;
  sub_1B5DB0((__int64)v125, v30, v29, *(double *)v6.m128_u64, a4);
  v32 = s1;
  if ( *(_QWORD *)&v125[8] )
    v32 = *(const char **)v125;
  v117 = v32;
  sub_1B5DB0((__int64)&v123, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), *(double *)v6.m128_u64, a4);
  v33 = s1;
  if ( (_QWORD)v124 )
    v33 = v123;
  sub_FA510(&v121, (__int64)&unk_4187C8, v33, v117, *(_OWORD *)&v119, v31);
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123);
  }
  if ( *(_QWORD *)v125 )
  {
    *(_QWORD *)&v125[8] = 0;
    qfree(*(_QWORD *)v125);
  }
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 512);
    v35 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1472LL) + 40 * v34 + 8));
    sub_FA510(
      &v121,
      (__int64)" SUBFRAME #%zu %a..%a/MINSTKREF=%a",
      v34,
      v35.m128i_i64[0],
      _mm_add_epi64(_mm_srli_si128(v35, 8), v35).m128i_u64[0],
      *(_QWORD *)(a1 + 520));
  }
  v36 = a2[1];
  v37 = *a2;
  if ( a2[2] < (unsigned __int64)(v36 + 1) )
  {
    v72 = qvector_reserve(a2, v37, v36 + 1, 24);
    *a2 = v72;
    v36 = a2[1];
    v37 = v72;
  }
  v38 = v37 + 24 * v36;
  *(_QWORD *)v38 = 0;
  v39 = v121;
  *(_OWORD *)(v38 + 8) = 0;
  ++a2[1];
  v40 = *(_QWORD *)v38;
  *(_QWORD *)v38 = v39;
  v41 = _mm_loadu_si128((const __m128i *)(v38 + 8));
  v121 = v40;
  *(__m128i *)(v38 + 8) = v122;
  LODWORD(v38) = *(_DWORD *)(a1 + 24);
  v122 = v41;
  if ( (v38 & 0x600) == 0x200 )
  {
    sub_63A00(v120, a1 + 160);
    v65 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)&v125[16] = 0;
    v126 = 0;
    if ( v65 )
    {
      v102 = (void *)qalloc_or_throw(16 * v65);
      v103 = *(const void **)(a1 + 176);
      *(_QWORD *)&v125[16] = v102;
      *((_QWORD *)&v126 + 1) = v65;
      memcpy(v102, v103, 16 * v65);
      *(_QWORD *)&v126 = v65;
    }
    sub_1B6220(a2, (__int64)&unk_412774, (__int64 *)(a1 + 120), v120, 0.0, *(double *)v41.m128i_i64);
    if ( *(_QWORD *)&v125[16] )
    {
      *(_QWORD *)&v126 = 0;
      qfree(*(_QWORD *)&v125[16]);
    }
    qfree(*(_QWORD *)v125);
    sub_63A00(v120, a1 + 240);
    v66 = *(_QWORD *)(a1 + 264);
    *(_QWORD *)&v125[16] = 0;
    v126 = 0;
    if ( v66 )
    {
      v100 = (void *)qalloc_or_throw(16 * v66);
      v101 = *(const void **)(a1 + 256);
      *(_QWORD *)&v125[16] = v100;
      *((_QWORD *)&v126 + 1) = v66;
      memcpy(v100, v101, 16 * v66);
      *(_QWORD *)&v126 = v66;
    }
    sub_1B6220(a2, (__int64)&unk_412778, (__int64 *)(a1 + 200), v120, 0.0, *(double *)v41.m128i_i64);
    if ( *(_QWORD *)&v125[16] )
    {
      *(_QWORD *)&v126 = 0;
      qfree(*(_QWORD *)&v125[16]);
    }
    qfree(*(_QWORD *)v125);
    if ( !(unsigned __int8)sub_64280((_QWORD *)(a1 + 280)) || *(_QWORD *)(a1 + 304) )
    {
      v123 = nullptr;
      v124 = 0;
      v67 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4EB8F8) + 1344));
      *(_QWORD *)&v125[16] = 0;
      *(__m128 *)v125 = v67;
      sub_1B3640(
        (_QWORD *)(a1 + 280),
        (__int64 *)&v123,
        (__int64)v120,
        *(double *)v67.m128_u64,
        *(double *)v41.m128i_i64);
      v68 = a2[1];
      v69 = *a2;
      if ( a2[2] < (unsigned __int64)(v68 + 1) )
      {
        v106 = qvector_reserve(a2, v69, v68 + 1, 24);
        *a2 = v106;
        v68 = a2[1];
        v69 = v106;
      }
      v70 = s1;
      v71 = v69 + 24 * v68;
      *(_QWORD *)v71 = 0;
      *(_OWORD *)(v71 + 8) = 0;
      ++a2[1];
      if ( (_QWORD)v124 )
        v70 = v123;
      sub_6B2B0((__int64 *)v71, (__int64)&unk_412715, &unk_41277C, v70);
      if ( v123 )
      {
        *(_QWORD *)&v124 = 0;
        qfree(v123);
      }
    }
  }
  else
  {
    v42 = v120;
    memset(v125, 0, sizeof(v125));
    v43 = qvector_reserve(v120, 0, 34, 1);
    *(_QWORD *)v125 = v43;
    *(_QWORD *)&v125[8] = 34;
    *(__m128i *)v43 = _mm_load_si128((const __m128i *)&xmmword_41F930);
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F940);
    *(_BYTE *)(v43 + 32) = 3;
    *(__m128i *)(v43 + 16) = si128;
    v45 = *(_QWORD *)v125;
    *(_BYTE *)(*(_QWORD *)v125 + 33LL) = 0;
    v46 = a2[1];
    v47 = *a2;
    v48 = a2[2];
    v49 = v46 + 1;
    if ( (unsigned __int64)v42 < *a2 || (unsigned __int64)v120 >= v47 + 24 * v48 )
    {
      if ( v48 < v49 )
      {
        v99 = qvector_reserve(a2, v47, v46 + 1, 24);
        *a2 = v99;
        v47 = v99;
        v45 = *(_QWORD *)v125;
        v46 = a2[1];
      }
      v50 = _mm_loadu_si128((const __m128i *)&v125[8]);
      v51 = v47 + 24 * v46;
      *(_QWORD *)v51 = v45;
      *(__m128i *)(v51 + 8) = v50;
      ++a2[1];
    }
    else
    {
      v61 = _mm_loadl_epi64((const __m128i *)&v125[8]);
      v62 = _mm_loadl_epi64((const __m128i *)&v125[16]);
      memset(v125, 0, sizeof(v125));
      if ( v48 < v49 )
      {
        v119.m128i_i64[0] = v62.m128i_i64[0];
        v119.m128i_i64[1] = v61.m128i_i64[0];
        v105 = qvector_reserve(a2, v47, v46 + 1, 24);
        v62 = _mm_loadl_epi64(&v119);
        *a2 = v105;
        v47 = v105;
        v61 = _mm_loadl_epi64((const __m128i *)&v119.m128i_u64[1]);
        v46 = a2[1];
      }
      v63 = v47 + 24 * v46;
      *(_QWORD *)v63 = v45;
      *(__m128i *)(v63 + 8) = _mm_unpacklo_epi64(v61, v62);
      v64 = *(_QWORD *)v125;
      ++a2[1];
      if ( v64 )
      {
        *(_QWORD *)&v125[8] = 0;
        qfree(v64);
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 440) && *(_QWORD *)(a1 + 432) )
  {
    memset(v125, 0, sizeof(v125));
    sub_1AFEE0((__int64 *)(a1 + 416), v120, 0.0);
    v55 = a2[1];
    v56 = *a2;
    if ( a2[2] < (unsigned __int64)(v55 + 1) )
    {
      v87 = qvector_reserve(a2, v56, v55 + 1, 24);
      *a2 = v87;
      v55 = a2[1];
      v56 = v87;
    }
    v57 = 3 * v55;
    v58 = s1;
    v59 = v56 + 8 * v57;
    *(_QWORD *)v59 = 0;
    *(_OWORD *)(v59 + 8) = 0;
    ++a2[1];
    if ( *(_QWORD *)&v125[8] )
      v58 = *(const char **)v125;
    sub_6B2B0((__int64 *)v59, (__int64)&unk_412780, v58, v52, v53, v54, v117, *(_OWORD *)&v119);
    if ( *(_QWORD *)v125 )
    {
      *(_QWORD *)&v125[8] = 0;
      qfree(*(_QWORD *)v125);
    }
  }
  if ( v121 )
  {
    v122.m128i_i64[0] = 0;
    qfree(v121);
  }
  return v127 - __readfsqword(0x28u);
}
