__int64 __fastcall sub_69FDF0(
        __int64 a1,
        const char *m128i_i8,
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
  unsigned __int64 v14; // r15
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // xmm0
  __int32 v22; // eax
  __m128i v23; // xmm0
  __int32 v24; // eax
  const __m128i *v25; // rcx
  __m128i v26; // xmm0
  const __m128i *v27; // r12
  void *v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  char *v31; // r13
  char v32; // al
  char *v33; // r12
  unsigned __int64 v34; // rdx
  char *v35; // r15
  char *v36; // rsi
  __m128i v37; // xmm3
  __m128i v38; // xmm2
  __int64 v39; // rcx
  __m128i v40; // xmm1
  __int64 v41; // rdx
  __m128i si128; // xmm3
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm3
  unsigned int v46; // r14d
  __int64 v47; // r12
  char *v48; // rbx
  __int64 v49; // rbp
  void *v50; // rdi
  void *v51; // rdi
  void *v53; // rax
  char *v54; // rbx
  char *v55; // r13
  void *v56; // rdi
  void *v57; // rdi
  double v58; // xmm4_8
  double v59; // xmm5_8
  __int64 v60; // rax
  bool v61; // zf
  __m128i v62; // xmm0
  __m128i v63; // xmm2
  __m128i v64; // xmm1
  __m128i v65; // xmm3
  __int64 v66; // rax
  __int64 v67; // rdx
  __m128i v68; // xmm3
  size_t na; // [rsp+18h] [rbp-D0h]
  size_t n; // [rsp+18h] [rbp-D0h]
  int v73; // [rsp+24h] [rbp-C4h]
  __int64 v74; // [rsp+28h] [rbp-C0h]
  __m128i v75; // [rsp+30h] [rbp-B8h] BYREF
  __m256i v76; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v77; // [rsp+60h] [rbp-88h]
  __m128i v78; // [rsp+70h] [rbp-78h]
  __m128i v79; // [rsp+80h] [rbp-68h]
  __m128i v80; // [rsp+90h] [rbp-58h]
  __int64 v81; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v82; // [rsp+A8h] [rbp-40h]

  v73 = a5;
  v82 = __readfsqword(0x28u);
  if ( a3 >= a4 || (v14 = *(_QWORD *)(a1 + 8), a3 >= v14) )
  {
    v46 = -7;
    set_error_data(0, a4, a3, a4, a5, a6);
    return v46;
  }
  v16 = (__int64)m128i_i8;
  v17 = 0;
  v76.m256i_i64[0] = *(_QWORD *)(a1 + 8);
  v74 = qalloc_or_throw(v14 << 7, m128i_i8);
  v18 = v74;
  v75 = (__m128i)(unsigned __int64)v74;
  do
  {
    v25 = (const __m128i *)(*(_QWORD *)a1 + (v17 << 7));
    v26 = _mm_loadu_si128(v25);
    *(_QWORD *)(v18 + 16) = 0;
    v27 = v25;
    *(_OWORD *)(v18 + 24) = 0;
    *(__m128i *)v18 = v26;
    if ( v25[1].m128i_i64[1] )
    {
      na = v25[1].m128i_u64[1];
      v28 = (void *)qalloc_or_throw(na, m128i_i8);
      *(_QWORD *)(v18 + 16) = v28;
      *(_QWORD *)(v18 + 32) = na;
      m128i_i8 = (const char *)v27[1].m128i_i64[0];
      memcpy(v28, m128i_i8, na);
      *(_QWORD *)(v18 + 24) = na;
    }
    *(_QWORD *)(v18 + 40) = 0;
    *(_OWORD *)(v18 + 48) = 0;
    if ( v27[3].m128i_i64[0] )
    {
      n = v27[3].m128i_u64[0];
      v53 = (void *)qalloc_or_throw(n, m128i_i8);
      *(_QWORD *)(v18 + 40) = v53;
      *(_QWORD *)(v18 + 56) = n;
      memcpy(v53, (const void *)v27[2].m128i_i64[1], n);
      *(_QWORD *)(v18 + 48) = n;
    }
    *(_QWORD *)(v18 + 64) = 0;
    m128i_i8 = v27[4].m128i_i8;
    copy_tinfo_t(v18 + 64);
    v21 = _mm_loadu_si128((const __m128i *)((char *)v27 + 72));
    ++v17;
    v18 += 128;
    *(_QWORD *)(v18 - 24) = v27[6].m128i_i64[1];
    v22 = v27[7].m128i_i32[0];
    *(__m128i *)(v18 - 56) = v21;
    v23 = _mm_loadu_si128((const __m128i *)((char *)v27 + 88));
    *(_DWORD *)(v18 - 16) = v22;
    v24 = v27[7].m128i_i32[1];
    *(__m128i *)(v18 - 40) = v23;
    *(_DWORD *)(v18 - 12) = v24;
    *(_BYTE *)(v18 - 8) = v27[7].m128i_i8[8];
  }
  while ( v14 != v17 );
  v29 = *(_QWORD *)(a1 + 40);
  v75.m128i_i64[1] = v14;
  v30 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v31 = *(char **)a1;
  v76.m256i_i64[3] = v29;
  LODWORD(v29) = *(_DWORD *)(a1 + 48);
  v32 = *(_BYTE *)(a1 + 51);
  *(__m128i *)&v76.m256i_u64[1] = v30;
  v33 = &v31[128 * a3];
  LODWORD(v77) = v29;
  v34 = *(_QWORD *)(a1 + 8);
  if ( a4 < v34 )
  {
    v35 = &v31[128 * a4];
    if ( v32 )
      goto LABEL_29;
  }
  else
  {
    v35 = &v31[128 * v34];
    if ( v32 )
      goto LABEL_29;
  }
  v36 = &v31[128 * a3];
  if ( v35 == v33 )
  {
    if ( v35 == v31 )
    {
      if ( v35 == &v35[128 * v34] )
        goto LABEL_40;
      goto LABEL_49;
    }
    goto LABEL_46;
  }
  do
  {
    if ( (v36[116] & 0x20) != 0 || *((_QWORD *)v36 + 3) && **((_BYTE **)v36 + 2) == 126 )
    {
      v37 = _mm_load_si128(&v75);
      v38 = _mm_loadu_si128((const __m128i *)a1);
      v39 = v77;
      v40 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v41 = v37.m128i_i64[0];
      *(__m128i *)a1 = v37;
      si128 = _mm_load_si128((const __m128i *)&v76);
      v43 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = v39;
      v44 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      *(__m128i *)(a1 + 16) = si128;
      v45 = _mm_load_si128((const __m128i *)&v76.m256i_u64[2]);
      v81 = v43;
      *(__m128i *)(a1 + 32) = v45;
      v77 = v43;
      v78 = v38;
      v79 = v40;
      v80 = v44;
      v75 = v38;
      *(__m128i *)v76.m256i_i8 = v40;
      *(__m128i *)&v76.m256i_u64[2] = v44;
      set_error_data(0, (__int64)&v36[-v41] >> 7, v41, v39, v19, v20);
      v46 = -7;
      goto LABEL_18;
    }
    v36 += 128;
  }
  while ( v35 != v36 );
  if ( v33 != v31 )
  {
LABEL_46:
    if ( (*(v33 - 11) & 4) != 0 )
      v33 -= 128;
  }
  if ( v35 != &v31[128 * v34] )
  {
LABEL_49:
    if ( (v35[117] & 4) != 0 )
      v35 += 128;
  }
LABEL_29:
  if ( v33 != v35 )
  {
    v54 = v33;
    while ( 1 )
    {
      sub_52B590(v16, (_QWORD *)a1, (v54 - v31) >> 7);
      v54 += 128;
      if ( v35 == v54 )
        break;
      v31 = *(char **)a1;
    }
    v55 = v33;
    do
    {
      clear_tinfo_t(v55 + 64);
      v56 = *((void **)v55 + 5);
      if ( v56 )
      {
        *((_QWORD *)v55 + 6) = 0;
        qfree(v56);
      }
      v57 = *((void **)v55 + 2);
      if ( v57 )
      {
        *((_QWORD *)v55 + 3) = 0;
        qfree(v57);
      }
      v55 += 128;
    }
    while ( v54 != v55 );
    v31 = *(char **)a1;
    v34 = *(_QWORD *)(a1 + 8);
  }
LABEL_40:
  memmove(v33, v35, &v31[128 * v34] - v35);
  v60 = *(_QWORD *)(a1 + 8) - ((v35 - v33) >> 7);
  v61 = *(_BYTE *)(a1 + 51) == 0;
  *(_QWORD *)(a1 + 8) = v60;
  if ( !v61
    || !(unsigned int)sub_697960(
                        a1,
                        *(_QWORD *)a1 + (v60 << 7) - 128,
                        v73,
                        *(double *)v30.m128i_i64,
                        a8,
                        a9,
                        a10,
                        v58,
                        v59,
                        a13,
                        a14) )
  {
    v46 = 0;
    if ( !v74 )
      return v46;
    v47 = v75.m128i_i64[1];
    v31 = (char *)v74;
    v46 = 0;
    goto LABEL_20;
  }
  v62 = _mm_loadu_si128((const __m128i *)a1);
  v46 = -28;
  v63 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v64 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  *(__m128i *)a1 = _mm_load_si128(&v75);
  v65 = _mm_load_si128((const __m128i *)&v76);
  v66 = *(_QWORD *)(a1 + 48);
  v31 = (char *)v62.m128i_i64[0];
  v67 = v77;
  v78 = v62;
  *(__m128i *)(a1 + 16) = v65;
  v68 = _mm_load_si128((const __m128i *)&v76.m256i_u64[2]);
  v81 = v66;
  *(_QWORD *)(a1 + 48) = v67;
  v77 = v66;
  v79 = v63;
  v80 = v64;
  *(__m128i *)(a1 + 32) = v68;
  v75 = v62;
  *(__m128i *)v76.m256i_i8 = v63;
  *(__m128i *)&v76.m256i_u64[2] = v64;
LABEL_18:
  if ( v31 )
  {
    v47 = v75.m128i_i64[1];
    if ( !v75.m128i_i64[1] )
    {
LABEL_26:
      qfree(v31);
      return v46;
    }
LABEL_20:
    v48 = v31 + 64;
    v49 = 0;
    do
    {
      clear_tinfo_t(v48);
      v50 = *((void **)v48 - 3);
      if ( v50 )
      {
        *((_QWORD *)v48 - 2) = 0;
        qfree(v50);
      }
      v51 = *((void **)v48 - 6);
      if ( v51 )
      {
        *((_QWORD *)v48 - 5) = 0;
        qfree(v51);
      }
      ++v49;
      v48 += 128;
    }
    while ( v47 != v49 );
    goto LABEL_26;
  }
  return v46;
}

