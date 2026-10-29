__int64 __fastcall sub_6C0950(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  unsigned __int64 v14; // rbp
  __int64 v17; // rbx
  __m128i *v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // xmm0
  __int32 v22; // eax
  __m128i v23; // xmm0
  __int32 v24; // eax
  __m128i v25; // xmm0
  const __m128i *v26; // r8
  __m128i v27; // xmm0
  const __m128i *v28; // r12
  void *v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm0
  unsigned __int64 v32; // rcx
  char v33; // dl
  char *v34; // rax
  char *v35; // rbp
  char *v36; // rbx
  __int64 v37; // rsi
  __m128i v38; // xmm3
  __int64 v39; // rdx
  __m128i v40; // xmm2
  __int64 v41; // rdi
  __int64 v42; // rcx
  __m128i si128; // xmm3
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __m128i v46; // xmm3
  char *v47; // rax
  unsigned int v48; // r12d
  __int64 v49; // r13
  char *v50; // rbx
  __int64 v51; // rbp
  char *v52; // r14
  void *v53; // rdi
  void *v54; // rdi
  void *v56; // rax
  char *v57; // r15
  char *v58; // r12
  void *v59; // rdi
  void *v60; // rdi
  __int64 v61; // rdx
  double v62; // xmm4_8
  double v63; // xmm5_8
  unsigned __int64 v64; // rax
  bool v65; // zf
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __m128i v68; // xmm2
  __m128i v69; // xmm3
  __m128i v70; // xmm1
  __int64 v71; // rax
  __m128i v72; // xmm3
  char *ptra; // [rsp+8h] [rbp-F0h]
  size_t na; // [rsp+28h] [rbp-D0h]
  size_t n; // [rsp+28h] [rbp-D0h]
  int v78; // [rsp+34h] [rbp-C4h]
  __int64 v79; // [rsp+38h] [rbp-C0h]
  __m128i v80; // [rsp+40h] [rbp-B8h] BYREF
  __m256i v81; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+70h] [rbp-88h]
  __m128i v83; // [rsp+80h] [rbp-78h]
  __m128i v84; // [rsp+90h] [rbp-68h]
  __m128i v85; // [rsp+A0h] [rbp-58h]
  __int64 v86; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v87; // [rsp+B8h] [rbp-40h]

  v78 = a5;
  v87 = __readfsqword(0x28u);
  if ( a3 >= a4 || (v14 = *(_QWORD *)(a1 + 8), a3 >= v14) )
  {
    v48 = -7;
    set_error_data(0, a4, a3, a4, a5, a6);
    return v48;
  }
  v17 = 0;
  v81.m256i_i64[0] = *(_QWORD *)(a1 + 8);
  v79 = qalloc_or_throw(144 * v14);
  v18 = (__m128i *)(v79 + 64);
  v80 = (__m128i)(unsigned __int64)v79;
  do
  {
    v26 = (__m128i *)((char *)v18 + -64 - v79 + *(_QWORD *)a1);
    v27 = _mm_loadu_si128(v26);
    v18[-3].m128i_i64[0] = 0;
    v28 = v26;
    *(__m128i *)((char *)&v18[-3] + 8) = 0;
    v18[-4] = v27;
    if ( v26[1].m128i_i64[1] )
    {
      na = v26[1].m128i_u64[1];
      v29 = (void *)qalloc_or_throw(na);
      v18[-3].m128i_i64[0] = (__int64)v29;
      v18[-2].m128i_i64[0] = na;
      memcpy(v29, (const void *)v28[1].m128i_i64[0], na);
      v18[-3].m128i_i64[1] = na;
    }
    v18[-2].m128i_i64[1] = 0;
    v18[-1] = 0;
    if ( v28[3].m128i_i64[0] )
    {
      n = v28[3].m128i_u64[0];
      v56 = (void *)qalloc_or_throw(n);
      v18[-2].m128i_i64[1] = (__int64)v56;
      v18[-1].m128i_i64[1] = n;
      memcpy(v56, (const void *)v28[2].m128i_i64[1], n);
      v18[-1].m128i_i64[0] = n;
    }
    v18->m128i_i64[0] = 0;
    copy_tinfo_t(v18);
    v21 = _mm_loadu_si128((const __m128i *)((char *)v28 + 72));
    ++v17;
    v18 += 9;
    v18[-6].m128i_i64[1] = v28[7].m128i_i64[1];
    v22 = v28[8].m128i_i32[0];
    *(__m128i *)((char *)v18 - 136) = v21;
    v23 = _mm_loadu_si128((const __m128i *)((char *)v28 + 88));
    v18[-5].m128i_i32[0] = v22;
    v24 = v28[8].m128i_i32[1];
    *(__m128i *)((char *)v18 - 120) = v23;
    v25 = _mm_loadu_si128((const __m128i *)((char *)v28 + 104));
    v18[-5].m128i_i32[1] = v24;
    LOBYTE(v24) = v28[8].m128i_i8[8];
    *(__m128i *)((char *)v18 - 104) = v25;
    v18[-5].m128i_i8[8] = v24;
  }
  while ( v14 != v17 );
  v30 = *(_QWORD *)(a1 + 40);
  v31 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v80.m128i_i64[1] = v14;
  v32 = *(_QWORD *)(a1 + 8);
  v81.m256i_i64[3] = v30;
  LODWORD(v30) = *(_DWORD *)(a1 + 48);
  v33 = *(_BYTE *)(a1 + 51);
  *(__m128i *)&v81.m256i_u64[1] = v31;
  LODWORD(v82) = v30;
  v34 = *(char **)a1;
  v35 = (char *)(*(_QWORD *)a1 + 144 * a3);
  if ( a4 < v32 )
  {
    v36 = &v34[144 * a4];
    if ( v33 )
      goto LABEL_30;
  }
  else
  {
    v36 = &v34[144 * v32];
    if ( v33 )
      goto LABEL_30;
  }
  v37 = *(_QWORD *)a1 + 144 * a3;
  if ( v36 == v35 )
  {
    if ( v36 == v34 )
    {
      v61 = 8 * v32;
      if ( v36 == &v36[144 * v32] )
        goto LABEL_42;
      goto LABEL_51;
    }
    goto LABEL_48;
  }
  do
  {
    if ( (*(_BYTE *)(v37 + 132) & 0x20) != 0 || *(_QWORD *)(v37 + 24) && **(_BYTE **)(v37 + 16) == 126 )
    {
      v38 = _mm_load_si128(&v80);
      v39 = *(_QWORD *)(a1 + 48);
      ptra = *(char **)a1;
      v40 = _mm_loadu_si128((const __m128i *)a1);
      v41 = v82;
      v42 = v38.m128i_i64[0];
      *(__m128i *)a1 = v38;
      si128 = _mm_load_si128((const __m128i *)&v81);
      v44 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v82 = v39;
      v45 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      v86 = v39;
      *(_QWORD *)(a1 + 48) = v41;
      *(__m128i *)(a1 + 16) = si128;
      v46 = _mm_load_si128((const __m128i *)&v81.m256i_u64[2]);
      v83 = v40;
      *(__m128i *)(a1 + 32) = v46;
      v84 = v44;
      v85 = v45;
      v80 = v40;
      *(__m128i *)v81.m256i_i8 = v44;
      *(__m128i *)&v81.m256i_u64[2] = v45;
      set_error_data(0, 0x8E38E38E38E38E39LL * ((v37 - v42) >> 4), 0x8E38E38E38E38E39LL, v42, v19, v20);
      v47 = ptra;
      v48 = -7;
      goto LABEL_18;
    }
    v37 += 144;
  }
  while ( v36 != (char *)v37 );
  if ( v35 != v34 )
  {
LABEL_48:
    if ( (*(v35 - 11) & 4) != 0 )
      v35 -= 144;
  }
  if ( v36 != &v34[144 * v32] )
  {
LABEL_51:
    if ( (v36[133] & 4) != 0 )
      v36 += 144;
  }
LABEL_30:
  v57 = v35;
  if ( v35 != v36 )
  {
    while ( 1 )
    {
      sub_544310(a2, (_QWORD *)a1, 0x8E38E38E38E38E39LL * ((v57 - v34) >> 4));
      v57 += 144;
      if ( v36 == v57 )
        break;
      v34 = *(char **)a1;
    }
    v58 = v35;
    do
    {
      clear_tinfo_t(v58 + 64);
      v59 = *((void **)v58 + 5);
      if ( v59 )
      {
        *((_QWORD *)v58 + 6) = 0;
        qfree(v59);
      }
      v60 = *((void **)v58 + 2);
      if ( v60 )
      {
        *((_QWORD *)v58 + 3) = 0;
        qfree(v60);
      }
      v58 += 144;
    }
    while ( v57 != v58 );
    v34 = *(char **)a1;
    v32 = *(_QWORD *)(a1 + 8);
  }
  v61 = 8 * v32;
LABEL_42:
  memmove(v35, v36, &v34[16 * v32 + 16 * v61] - v36);
  v64 = *(_QWORD *)(a1 + 8) - 0x8E38E38E38E38E39LL * ((v36 - v35) >> 4);
  v65 = *(_BYTE *)(a1 + 51) == 0;
  *(_QWORD *)(a1 + 8) = v64;
  if ( !v65
    || !(unsigned int)sub_6B8250(
                        a1,
                        *(_QWORD *)a1 + 144 * v64 - 144,
                        v78,
                        *(double *)v31.m128i_i64,
                        a8,
                        a9,
                        a10,
                        v62,
                        v63,
                        a13,
                        a14) )
  {
    v48 = 0;
    if ( !v79 )
      return v48;
    v49 = v80.m128i_i64[1];
    v47 = (char *)v79;
    v48 = 0;
    goto LABEL_20;
  }
  v66 = *(_QWORD *)(a1 + 48);
  v48 = -28;
  v67 = _mm_loadu_si128((const __m128i *)a1);
  v68 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(__m128i *)a1 = _mm_load_si128(&v80);
  v69 = _mm_load_si128((const __m128i *)&v81);
  v70 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v71 = v82;
  v86 = v66;
  *(__m128i *)(a1 + 16) = v69;
  v72 = _mm_load_si128((const __m128i *)&v81.m256i_u64[2]);
  *(_QWORD *)(a1 + 48) = v71;
  v47 = (char *)v67.m128i_i64[0];
  v82 = v66;
  v83 = v67;
  v84 = v68;
  v85 = v70;
  *(__m128i *)(a1 + 32) = v72;
  v80 = v67;
  *(__m128i *)v81.m256i_i8 = v68;
  *(__m128i *)&v81.m256i_u64[2] = v70;
LABEL_18:
  if ( v47 )
  {
    v49 = v80.m128i_i64[1];
    if ( !v80.m128i_i64[1] )
    {
LABEL_27:
      qfree(v47);
      return v48;
    }
LABEL_20:
    v50 = v47 + 64;
    v51 = 0;
    v52 = v47;
    do
    {
      clear_tinfo_t(v50);
      v53 = *((void **)v50 - 3);
      if ( v53 )
      {
        *((_QWORD *)v50 - 2) = 0;
        qfree(v53);
      }
      v54 = *((void **)v50 - 6);
      if ( v54 )
      {
        *((_QWORD *)v50 - 5) = 0;
        qfree(v54);
      }
      ++v51;
      v50 += 144;
    }
    while ( v49 != v51 );
    v47 = v52;
    goto LABEL_27;
  }
  return v48;
}
