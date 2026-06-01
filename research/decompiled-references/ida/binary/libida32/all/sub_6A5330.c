__int64 __fastcall sub_6A5330(
        __int64 a1,
        const char *a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        const __m128i *a15)
{
  unsigned __int64 v16; // rax
  unsigned int v18; // r15d
  __int64 v19; // r12
  size_t v20; // r13
  size_t v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rdx
  char v24; // al
  __m128i v25; // xmm0
  int *m128i_i32; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm0
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  __int64 tinfo_property; // rax
  unsigned __int64 v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  __int64 v38; // rcx
  unsigned __int64 v39; // r15
  int v40; // edi
  unsigned __int64 v41; // r14
  _QWORD *v42; // r14
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rax
  double v46; // xmm4_8
  double v47; // xmm5_8
  void *v48; // r13
  __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rbp
  void *v52; // rdi
  void *v53; // rdi
  __m128i v54; // xmm2
  __m128i v55; // xmm1
  __m128i v56; // xmm0
  __m128i si128; // xmm3
  __int64 v58; // rax
  __int64 v59; // rdx
  __m128i v60; // xmm3
  char v61; // r14
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // esi
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rbx
  __int64 v72; // r15
  __m128i v73; // xmm0
  __int32 v74; // eax
  __m128i v75; // xmm0
  __int32 v76; // eax
  const __m128i *v77; // rcx
  __m128i v78; // xmm0
  const __m128i *v79; // r13
  void *v80; // rax
  void *v81; // rax
  __m128i v82; // xmm2
  __m128i v83; // xmm1
  __m128i v84; // xmm0
  __m128i v85; // xmm3
  __int64 v86; // rax
  __int64 v87; // rdx
  __m128i v88; // xmm3
  unsigned int v89; // r14d
  int v90; // edx
  int v91; // ecx
  int v92; // r8d
  int v93; // r9d
  _QWORD *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r8
  int v97; // [rsp+0h] [rbp-188h]
  int v98; // [rsp+0h] [rbp-188h]
  int *v99; // [rsp+8h] [rbp-180h]
  int v100; // [rsp+8h] [rbp-180h]
  __int64 v101; // [rsp+10h] [rbp-178h]
  char v102; // [rsp+10h] [rbp-178h]
  void *v103; // [rsp+18h] [rbp-170h]
  _QWORD *v104; // [rsp+20h] [rbp-168h]
  __int64 v105; // [rsp+20h] [rbp-168h]
  int v106; // [rsp+28h] [rbp-160h]
  int v107; // [rsp+28h] [rbp-160h]
  unsigned int v108; // [rsp+2Ch] [rbp-15Ch]
  __int64 v109; // [rsp+30h] [rbp-158h]
  __int64 *v110; // [rsp+30h] [rbp-158h]
  __int64 v111; // [rsp+30h] [rbp-158h]
  size_t na; // [rsp+38h] [rbp-150h]
  size_t n; // [rsp+38h] [rbp-150h]
  __int64 v114; // [rsp+40h] [rbp-148h] BYREF
  int v115[2]; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v116[48]; // [rsp+50h] [rbp-138h] BYREF
  __int64 v117; // [rsp+80h] [rbp-108h]
  int v118[4]; // [rsp+90h] [rbp-F8h] BYREF
  void *v119; // [rsp+A0h] [rbp-E8h]
  int v120[4]; // [rsp+A8h] [rbp-E0h]
  void *v121; // [rsp+B8h] [rbp-D0h]
  int v122[4]; // [rsp+C0h] [rbp-C8h]
  int v123[2]; // [rsp+D0h] [rbp-B8h] BYREF
  int v124[4]; // [rsp+D8h] [rbp-B0h]
  int v125[4]; // [rsp+E8h] [rbp-A0h]
  int v126[2]; // [rsp+F8h] [rbp-90h]
  int v127[2]; // [rsp+100h] [rbp-88h]
  int v128; // [rsp+108h] [rbp-80h]
  __m128i v129; // [rsp+110h] [rbp-78h]
  __m128i v130; // [rsp+120h] [rbp-68h]
  __m128i v131; // [rsp+130h] [rbp-58h]
  __int64 v132; // [rsp+140h] [rbp-48h]
  unsigned __int64 v133; // [rsp+148h] [rbp-40h]

  v16 = *(_QWORD *)(a1 + 8);
  v101 = (__int64)a2;
  v104 = a5;
  v106 = a6;
  v133 = __readfsqword(0x28u);
  if ( a4 >= v16 )
  {
    set_error_data(0, a4, a3, a4, a5, a6);
    return (unsigned int)-7;
  }
  v18 = a3;
  if ( (int)a6 < 0 )
  {
    a2 = (const char *)*a5;
    if ( !get_tinfo_size(0, *a5, 0) )
    {
      a2 = (_BYTE *)(&qword_118 + 7);
      if ( !get_tinfo_property(*v104, 287) )
        return (unsigned int)-5;
    }
  }
  else if ( a4 + 1 != v16 )
  {
    a2 = (_BYTE *)(&qword_118 + 7);
    if ( get_tinfo_property(*a5, 287) )
      return (unsigned int)-12;
  }
  v19 = *(_QWORD *)a1 + (a4 << 7);
  if ( *(_QWORD *)(v19 + 24) <= 1u && (v106 & 0x40) != 0 )
  {
    a2 = (const char *)(*(_QWORD *)a1 + (a4 << 7));
    sub_6A0340(a1, (__int64)a2, v104, 1);
  }
  v119 = nullptr;
  *(__m128i *)v118 = _mm_loadu_si128((const __m128i *)v19);
  *(_OWORD *)v120 = 0;
  v20 = *(_QWORD *)(v19 + 24);
  if ( v20 )
  {
    v45 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 24), a2);
    *(_QWORD *)&v120[2] = v20;
    v119 = v45;
    a2 = *(const char **)(v19 + 16);
    memcpy(v45, a2, v20);
    *(_QWORD *)v120 = v20;
  }
  v121 = nullptr;
  *(_OWORD *)v122 = 0;
  v21 = *(_QWORD *)(v19 + 48);
  if ( v21 )
  {
    v121 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 48), a2);
    *(_QWORD *)&v122[2] = v21;
    memcpy(v121, *(const void **)(v19 + 40), v21);
    *(_QWORD *)v122 = v21;
  }
  *(_QWORD *)v123 = 0;
  v99 = v123;
  copy_tinfo_t(v123);
  v22 = _mm_loadu_si128((const __m128i *)(v19 + 72));
  v23 = *(_QWORD *)(v19 + 112);
  *(_QWORD *)v126 = *(_QWORD *)(v19 + 104);
  v24 = *(_BYTE *)(v19 + 120);
  *(__m128i *)v124 = v22;
  v25 = _mm_loadu_si128((const __m128i *)(v19 + 88));
  LOBYTE(v128) = v24;
  *(_QWORD *)v127 = v23;
  *(__m128i *)v125 = v25;
  sub_52B590(v101, (_QWORD *)a1, a4);
  copy_tinfo_t(v123);
  m128i_i32 = v118;
  v108 = sub_6A3860(v18, (__int64 *)v118, *(_BYTE *)(a1 + 51), v106, 0);
  if ( !v108 )
  {
    v28 = *(_QWORD *)(a1 + 8);
    memset(v116, 0, 24);
    v109 = v28;
    if ( v28 )
    {
      *(_QWORD *)&v116[16] = v28;
      v71 = qalloc_or_throw(v28 << 7, (const char *)v118);
      v72 = 0;
      *(_QWORD *)v116 = v71;
      do
      {
        v77 = (const __m128i *)(*(_QWORD *)a1 + (v72 << 7));
        v78 = _mm_loadu_si128(v77);
        *(_QWORD *)(v71 + 16) = 0;
        v79 = v77;
        *(_OWORD *)(v71 + 24) = 0;
        *(__m128i *)v71 = v78;
        if ( v77[1].m128i_i64[1] )
        {
          na = v77[1].m128i_u64[1];
          v80 = (void *)qalloc_or_throw(na, (const char *)m128i_i32);
          *(_QWORD *)(v71 + 16) = v80;
          *(_QWORD *)(v71 + 32) = na;
          m128i_i32 = (int *)v79[1].m128i_i64[0];
          memcpy(v80, m128i_i32, na);
          *(_QWORD *)(v71 + 24) = na;
        }
        *(_QWORD *)(v71 + 40) = 0;
        *(_OWORD *)(v71 + 48) = 0;
        if ( v79[3].m128i_i64[0] )
        {
          n = v79[3].m128i_u64[0];
          v81 = (void *)qalloc_or_throw(n, (const char *)m128i_i32);
          *(_QWORD *)(v71 + 40) = v81;
          *(_QWORD *)(v71 + 56) = n;
          memcpy(v81, (const void *)v79[2].m128i_i64[1], n);
          *(_QWORD *)(v71 + 48) = n;
        }
        *(_QWORD *)(v71 + 64) = 0;
        m128i_i32 = v79[4].m128i_i32;
        copy_tinfo_t(v71 + 64);
        v73 = _mm_loadu_si128((const __m128i *)((char *)v79 + 72));
        ++v72;
        v71 += 128;
        *(_QWORD *)(v71 - 24) = v79[6].m128i_i64[1];
        v74 = v79[7].m128i_i32[0];
        *(__m128i *)(v71 - 56) = v73;
        v75 = _mm_loadu_si128((const __m128i *)((char *)v79 + 88));
        *(_DWORD *)(v71 - 16) = v74;
        v76 = v79[7].m128i_i32[1];
        *(__m128i *)(v71 - 40) = v75;
        *(_DWORD *)(v71 - 12) = v76;
        *(_BYTE *)(v71 - 8) = v79[7].m128i_i8[8];
      }
      while ( v109 != v72 );
      *(_QWORD *)&v116[8] = v109;
    }
    v29 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    *(_QWORD *)&v116[40] = *(_QWORD *)(a1 + 40);
    v30 = *(_DWORD *)(a1 + 48);
    *(__m128i *)&v116[24] = v29;
    LODWORD(v117) = v30;
    if ( a15 )
    {
      *(__m128i *)(v19 + 72) = _mm_loadu_si128(a15);
      v29 = _mm_loadu_si128(a15 + 1);
      *(__m128i *)(v19 + 88) = v29;
      *(_DWORD *)(v19 + 104) = a15[2].m128i_i32[0];
    }
    else
    {
      sub_532820((__int64 *)(v19 + 72), (const char **)v123);
    }
    v31 = *(_QWORD *)(v19 + 64);
    v32 = *(_QWORD *)&v118[2];
    *(_QWORD *)(v19 + 64) = *(_QWORD *)v123;
    *(_QWORD *)v123 = v31;
    *(_QWORD *)(v19 + 8) = v32;
    v33 = *(_QWORD *)v19 + v32;
    tinfo_property = get_tinfo_property(*(_QWORD *)v123, 289);
    v114 = tinfo_property;
    v35 = tinfo_property;
    if ( (v106 & 0x88) == 0 || !(_BYTE)tinfo_property || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
    {
      v110 = &v114;
      goto LABEL_22;
    }
    *(_QWORD *)v115 = get_tinfo_property(tinfo_property, 9);
    v61 = get_tinfo_property(*(_QWORD *)v115, 2) & 0x3F;
    clear_tinfo_t(v115);
    v110 = &v114;
    if ( v61 == 48 || (v62 = 0x200020002000200LL, _bittest64(&v62, v35)) )
    {
LABEL_22:
      if ( *(_BYTE *)(a1 + 51)
        || (v36 = *(_QWORD *)a1, v37 = v19 + 128, v38 = *(_QWORD *)a1 + (*(_QWORD *)(a1 + 8) << 7), v38 == v19 + 128) )
      {
LABEL_46:
        clear_tinfo_t(v110);
      }
      else
      {
        v39 = v19 + 128;
        do
        {
          if ( *(_QWORD *)v39 >= v33 )
            break;
          v40 = *(_DWORD *)(v39 + 116);
          if ( !(v106 & 4 | v40 & 0x400) || (v40 & 0x1000) != 0 )
          {
            clear_tinfo_t(v110);
            v108 = -13;
            goto LABEL_81;
          }
          v39 += 128LL;
        }
        while ( v38 != v39 );
        if ( v37 == v39 )
          goto LABEL_46;
        if ( v37 < v39 )
        {
          v41 = v19 + 128;
          while ( 1 )
          {
            sub_52B590(v101, (_QWORD *)a1, (__int64)(v41 - v36) >> 7);
            v41 += 128LL;
            if ( v41 >= v39 )
              break;
            v36 = *(_QWORD *)a1;
          }
        }
        v42 = (_QWORD *)(v19 + 128);
        do
        {
          clear_tinfo_t(v42 + 8);
          v43 = (void *)v42[5];
          if ( v43 )
          {
            v42[6] = 0;
            qfree(v43);
          }
          v44 = (void *)v42[2];
          if ( v44 )
          {
            v42[3] = 0;
            qfree(v44);
          }
          v42 += 16;
        }
        while ( v42 != (_QWORD *)v39 );
        memmove((void *)(v19 + 128), v42, *(_QWORD *)a1 + (*(_QWORD *)(a1 + 8) << 7) - (_QWORD)v42);
        *(_QWORD *)(a1 + 8) -= (__int64)((__int64)v42 - v37) >> 7;
        clear_tinfo_t(v110);
      }
      if ( (*(_BYTE *)(v19 + 117) & 1) == 0 && (unsigned __int8)sub_5CF320(0, v19) )
        *(_DWORD *)(v19 + 116) |= 0x100u;
      if ( *(_BYTE *)(a1 + 51)
        || (v29 = _mm_loadu_si128((const __m128i *)v19),
            a8 = _mm_srli_si128(v29, 8),
            v29.m128i_i64[0] = _mm_add_epi64(v29, a8).m128i_u64[0],
            v33 == v29.m128i_i64[0]) )
      {
        sub_6A0430((__int64 *)(v101 + 96), (const __m128i *)v19);
        if ( !(unsigned int)sub_697960(
                              a1,
                              v19,
                              v106,
                              *(double *)v29.m128i_i64,
                              *(double *)a8.m128i_i64,
                              a9,
                              a10,
                              v46,
                              v47,
                              a13,
                              a14) )
          goto LABEL_51;
      }
      else if ( (unsigned __int8)sub_5501A0((__int64 *)a1, *(double *)v29.m128i_i64, *(double *)a8.m128i_i64) )
      {
        goto LABEL_51;
      }
      v54 = _mm_loadu_si128((const __m128i *)a1);
      v108 = -28;
      v55 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v56 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      *(__m128i *)a1 = _mm_load_si128((const __m128i *)v116);
      si128 = _mm_load_si128((const __m128i *)&v116[16]);
      v58 = *(_QWORD *)(a1 + 48);
      v59 = v117;
      v129 = v54;
      *(__m128i *)(a1 + 16) = si128;
      v60 = _mm_load_si128((const __m128i *)&v116[32]);
      v132 = v58;
      *(_QWORD *)(a1 + 48) = v59;
      v117 = v58;
      v130 = v55;
      v131 = v56;
      *(__m128i *)(a1 + 32) = v60;
      *(__m128i *)v116 = v54;
      *(__m128i *)&v116[16] = v55;
      *(__m128i *)&v116[32] = v56;
LABEL_51:
      v48 = *(void **)v116;
      if ( *(_QWORD *)v116 )
      {
        v49 = *(_QWORD *)&v116[8];
        v50 = *(_QWORD *)v116 + 64LL;
        v51 = 0;
        if ( *(_QWORD *)&v116[8] )
        {
          do
          {
            clear_tinfo_t(v50);
            v52 = *(void **)(v50 - 24);
            if ( v52 )
            {
              *(_QWORD *)(v50 - 16) = 0;
              qfree(v52);
            }
            v53 = *(void **)(v50 - 48);
            if ( v53 )
            {
              *(_QWORD *)(v50 - 40) = 0;
              qfree(v53);
            }
            ++v51;
            v50 += 128;
          }
          while ( v49 != v51 );
        }
        qfree(v48);
      }
      goto LABEL_10;
    }
    *(_QWORD *)v115 = 0;
    v63 = get_tinfo_property(*v104, 289);
    v64 = v114;
    *(_QWORD *)v115 = v63;
    v110 = &v114;
    if ( !(unsigned int)lexcompare_tinfo(v63, v114, 0, v65, v66) )
      goto LABEL_86;
    if ( (v106 & 0x80u) != 0 )
    {
      v89 = score_tinfo(
              (int)&v114,
              v64,
              v67,
              v68,
              v69,
              v70,
              v97,
              (int)v123,
              v101,
              v118,
              (__int64)v104,
              v106,
              (__int64)&v114);
      if ( v89 >= (unsigned int)score_tinfo((int)v115, v64, v90, v91, v92, v93, v98, v100, v102, v103, v105, v107, v111) )
      {
        if ( (unsigned __int8)compare_tinfo(*(_QWORD *)v115, v114, 0) )
        {
LABEL_86:
          v108 = 1;
          goto LABEL_87;
        }
        v108 = -35;
LABEL_87:
        clear_tinfo_t(v115);
        clear_tinfo_t(v110);
LABEL_81:
        v82 = _mm_loadu_si128((const __m128i *)a1);
        v83 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v84 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        *(__m128i *)a1 = _mm_load_si128((const __m128i *)v116);
        v85 = _mm_load_si128((const __m128i *)&v116[16]);
        v86 = *(_QWORD *)(a1 + 48);
        v87 = v117;
        v129 = v82;
        *(__m128i *)(a1 + 16) = v85;
        v88 = _mm_load_si128((const __m128i *)&v116[32]);
        v132 = v86;
        *(_QWORD *)(a1 + 48) = v87;
        v117 = v86;
        v130 = v83;
        v131 = v84;
        *(__m128i *)(a1 + 32) = v88;
        *(__m128i *)v116 = v82;
        *(__m128i *)&v116[16] = v83;
        *(__m128i *)&v116[32] = v84;
        goto LABEL_51;
      }
      *(_DWORD *)(v19 + 116) |= 0x4000u;
    }
    if ( (v106 & 8) == 0
      || (get_tinfo_property(*(_QWORD *)v123, 2) & 0x2F) != 0xD
      || (unsigned __int8)compare_tinfo(*v104, *(_QWORD *)v123, 0) )
    {
      clear_tinfo_t(v115);
      goto LABEL_22;
    }
    v94 = (_QWORD *)get_tinfo_property(*(_QWORD *)v123, 309);
    if ( v94 && v94[1] && !(unsigned int)lexcompare_tinfo(*v104, *(_QWORD *)(*v94 + 64LL), 0, v95, v96) )
      goto LABEL_86;
    v108 = -27;
    goto LABEL_87;
  }
LABEL_10:
  clear_tinfo_t(v99);
  if ( v121 )
  {
    *(_QWORD *)v122 = 0;
    qfree(v121);
  }
  if ( v119 )
  {
    *(_QWORD *)v120 = 0;
    qfree(v119);
  }
  return v108;
}

