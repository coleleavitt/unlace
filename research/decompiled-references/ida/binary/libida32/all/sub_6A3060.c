__int64 __fastcall sub_6A3060(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  char v15; // r10
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdi
  const char *m128i_i8; // rsi
  unsigned __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned int v21; // r12d
  unsigned __int64 v23; // rbp
  __m128i *v24; // rax
  __int64 v25; // rbp
  __m128i *v26; // rbx
  unsigned __int64 v27; // r15
  __m128i *v28; // r11
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __m128i *v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // r12
  __m128i *v35; // r15
  __m128i *v36; // rbp
  void *v37; // rdi
  void *v38; // rdi
  __int64 v39; // rax
  __m128i v40; // xmm2
  __m128i v41; // xmm1
  __m128i v42; // xmm3
  __m128i v43; // xmm0
  __int64 v44; // rdx
  __m128i v45; // xmm3
  __m128i v46; // xmm2
  __int64 v47; // rdi
  __int64 v48; // rdx
  __m128i v49; // xmm1
  __m128i si128; // xmm3
  __int64 v51; // rax
  __m128i v52; // xmm0
  __m128i v53; // xmm3
  void *v54; // r14
  __int64 v55; // r13
  __int64 v56; // rbx
  __int64 v57; // rbp
  void *v58; // rdi
  void *v59; // rdi
  __int64 v60; // rax
  __m128i v61; // xmm2
  __m128i v62; // xmm1
  __m128i v63; // xmm3
  __m128i v64; // xmm0
  __int64 v65; // rdx
  __m128i v66; // xmm3
  __int64 v67; // r15
  __int64 v68; // rbx
  size_t v69; // rbp
  __m128i v70; // xmm0
  __int32 v71; // eax
  __m128i v72; // xmm0
  __int32 v73; // eax
  const __m128i *v74; // r8
  __m128i v75; // xmm0
  const __m128i *v76; // r12
  size_t v77; // rbp
  void *v78; // rax
  void *v79; // rax
  __int64 v80; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v82; // [rsp+18h] [rbp-D0h]
  int v83; // [rsp+24h] [rbp-C4h]
  __int64 v84; // [rsp+28h] [rbp-C0h]
  _BYTE ptr[48]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+60h] [rbp-88h]
  __m128i v87; // [rsp+70h] [rbp-78h]
  __m128i v88; // [rsp+80h] [rbp-68h]
  __m128i v89; // [rsp+90h] [rbp-58h]
  __int64 v90; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+A8h] [rbp-40h]

  v15 = *(_BYTE *)(a1 + 51);
  v83 = a5;
  v91 = __readfsqword(0x28u);
  if ( v15 )
    return (unsigned int)-5;
  v16 = *(_QWORD *)(a1 + 8);
  v17 = a3;
  m128i_i8 = (const char *)a4;
  if ( a3 < v16 )
  {
    a3 = *(_QWORD *)(a1 + 24);
    if ( a4 >= 0 )
      goto LABEL_4;
LABEL_13:
    if ( a3 < -a4 )
      goto LABEL_81;
    v19 = a3 + a4;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 45) & 4) == 0 )
  {
LABEL_83:
    v21 = -7;
    set_error_data(0, v17, a3, a4, a5, a6);
    return v21;
  }
  a3 = *(_QWORD *)(a1 + 24);
  v15 = 1;
  if ( a4 < 0 )
    goto LABEL_13;
LABEL_4:
  v19 = a4 + a3;
  if ( __CFADD__(a4, a3) )
    goto LABEL_81;
LABEL_5:
  a5 = 4294967294LL;
  if ( v19 > 0xFFFFFFFE )
    goto LABEL_81;
  if ( v15 )
  {
    if ( !v16
      || (v20 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)a1 + (v16 << 7) - 128)),
          a4 = 8 * v19,
          a3 = _mm_add_epi64(v20, _mm_srli_si128(v20, 8)).m128i_u64[0],
          8 * v19 >= a3) )
    {
      *(_QWORD *)(a1 + 24) = v19;
      v21 = 0;
      *(_DWORD *)a2 = 0;
      return v21;
    }
    goto LABEL_81;
  }
  v23 = -a4;
  if ( a4 > 0 )
    v23 = a4;
  v80 = v23;
  if ( !v23 )
  {
    v84 = 0;
    v24 = *(__m128i **)a1;
    a4 = v17 << 7;
    v82 = v17 << 7;
    v26 = (__m128i *)(*(_QWORD *)a1 + (v17 << 7));
    goto LABEL_28;
  }
  a4 = v23 >> 61;
  if ( v23 >> 61 )
  {
    set_error_data(0, v23, a3, a4, 4294967294LL, a6);
    return (unsigned int)-15;
  }
  v24 = *(__m128i **)a1;
  a5 = 8 * v23;
  v25 = -8LL * v23;
  if ( (__int64)m128i_i8 > 0 )
    v25 = a5;
  v82 = v17 << 7;
  v26 = &v24[8 * v17];
  v80 = v25;
  v84 = v25;
  if ( v25 < 0 )
  {
    if ( v26->m128i_i64[0] >= a5 )
    {
      if ( v17 )
      {
        v27 = v17;
        v28 = &v24[8 * v17];
        a4 = v26->m128i_i64[0] - a5;
        do
        {
          v29 = _mm_loadu_si128(v28 - 8);
          --v27;
          a8 = _mm_srli_si128(v29, 8);
          a5 = _mm_add_epi64(v29, a8).m128i_u64[0];
          if ( a4 >= a5 )
            break;
          if ( (v28[-1].m128i_i8[5] & 4) == 0 )
            goto LABEL_81;
          v28 -= 8;
        }
        while ( v27 );
      }
      else
      {
        v82 = 0;
      }
      goto LABEL_28;
    }
LABEL_81:
    set_error_data(0, m128i_i8, a3, a4, a5, a6);
    return (unsigned int)-15;
  }
LABEL_28:
  if ( (v26[7].m128i_i8[4] & 0x20) != 0 )
    goto LABEL_83;
  memset(ptr, 0, 24);
  if ( v16 )
  {
    v67 = 0;
    *(_QWORD *)&ptr[16] = v16;
    *(_QWORD *)ptr = qalloc_or_throw(v16 << 7, m128i_i8, a3, a4);
    v68 = *(_QWORD *)ptr;
    do
    {
      v74 = (const __m128i *)(*(_QWORD *)a1 + (v67 << 7));
      v75 = _mm_loadu_si128(v74);
      *(_QWORD *)(v68 + 16) = 0;
      v76 = v74;
      *(_OWORD *)(v68 + 24) = 0;
      *(__m128i *)v68 = v75;
      v77 = v74[1].m128i_u64[1];
      if ( v77 )
      {
        v78 = (void *)qalloc_or_throw(v74[1].m128i_i64[1], m128i_i8);
        *(_QWORD *)(v68 + 32) = v77;
        *(_QWORD *)(v68 + 16) = v78;
        m128i_i8 = (const char *)v76[1].m128i_i64[0];
        memcpy(v78, m128i_i8, v77);
        *(_QWORD *)(v68 + 24) = v77;
      }
      *(_QWORD *)(v68 + 40) = 0;
      *(_OWORD *)(v68 + 48) = 0;
      v69 = v76[3].m128i_u64[0];
      if ( v69 )
      {
        v79 = (void *)qalloc_or_throw(v76[3].m128i_i64[0], m128i_i8);
        *(_QWORD *)(v68 + 40) = v79;
        *(_QWORD *)(v68 + 56) = v69;
        memcpy(v79, (const void *)v76[2].m128i_i64[1], v69);
        *(_QWORD *)(v68 + 48) = v69;
      }
      *(_QWORD *)(v68 + 64) = 0;
      m128i_i8 = v76[4].m128i_i8;
      copy_tinfo_t(v68 + 64);
      v70 = _mm_loadu_si128((const __m128i *)((char *)v76 + 72));
      ++v67;
      v68 += 128;
      *(_QWORD *)(v68 - 24) = v76[6].m128i_i64[1];
      v71 = v76[7].m128i_i32[0];
      *(__m128i *)(v68 - 56) = v70;
      v72 = _mm_loadu_si128((const __m128i *)((char *)v76 + 88));
      *(_DWORD *)(v68 - 16) = v71;
      v73 = v76[7].m128i_i32[1];
      *(__m128i *)(v68 - 40) = v72;
      *(_DWORD *)(v68 - 12) = v73;
      *(_BYTE *)(v68 - 8) = v76[7].m128i_i8[8];
    }
    while ( v16 != v67 );
    v24 = *(__m128i **)a1;
    *(_QWORD *)&ptr[8] = v16;
    v16 = *(_QWORD *)(a1 + 8);
    v15 = *(_BYTE *)(a1 + 51);
    v26 = (__m128i *)((char *)v24 + v82);
  }
  v30 = *(_QWORD *)(a1 + 40);
  BYTE3(v86) = v15;
  v31 = (__m128i)_mm_loadh_ps((const double *)(a1 + 32));
  *(_QWORD *)&ptr[40] = v30;
  LOWORD(v30) = *(_WORD *)(a1 + 48);
  *(__m128i *)&ptr[24] = v31;
  LOWORD(v86) = v30;
  BYTE2(v86) = *(_BYTE *)(a1 + 50);
  if ( v26 >= &v24[8 * v16] )
  {
    *(_DWORD *)a2 = 0;
    goto LABEL_70;
  }
  do
  {
    v34 = v26->m128i_i64[0] + v80;
    if ( v34 < 0 )
    {
      v46 = _mm_loadu_si128((const __m128i *)a1);
      v47 = v26->m128i_i64[0] + v80;
      v48 = v86;
      v49 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(__m128i *)a1 = _mm_load_si128((const __m128i *)ptr);
      si128 = _mm_load_si128((const __m128i *)&ptr[16]);
      v51 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = v48;
      v52 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      *(__m128i *)(a1 + 16) = si128;
      v53 = _mm_load_si128((const __m128i *)&ptr[32]);
      v90 = v51;
      *(__m128i *)(a1 + 32) = v53;
      v86 = v51;
      v87 = v46;
      v88 = v49;
      v89 = v52;
      *(__m128i *)ptr = v46;
      *(__m128i *)&ptr[16] = v49;
      *(__m128i *)&ptr[32] = v52;
      sub_6A2F50(v47);
      v21 = -10;
      goto LABEL_59;
    }
    v35 = v26 - 8;
    if ( v24 != v26 )
    {
      while ( 1 )
      {
        if ( (v35[7].m128i_i8[5] & 4) == 0 )
          goto LABEL_36;
        if ( v35 == v24 )
          break;
        if ( (v35[-1].m128i_i8[5] & 4) == 0 )
        {
          if ( v84 < 0 )
          {
            v31 = _mm_loadu_si128(v35 - 8);
            a8 = _mm_srli_si128(v31, 8);
            v31.m128i_i64[0] = _mm_add_epi64(v31, a8).m128i_u64[0];
            if ( (unsigned __int64)v34 < v31.m128i_i64[0] )
            {
              v39 = *(_QWORD *)(a1 + 48);
              v21 = -4;
              v40 = _mm_loadu_si128((const __m128i *)a1);
              v41 = _mm_loadu_si128((const __m128i *)(a1 + 16));
              *(__m128i *)a1 = _mm_load_si128((const __m128i *)ptr);
              v42 = _mm_load_si128((const __m128i *)&ptr[16]);
              v43 = _mm_loadu_si128((const __m128i *)(a1 + 32));
              v44 = v86;
              v90 = v39;
              *(__m128i *)(a1 + 16) = v42;
              v45 = _mm_load_si128((const __m128i *)&ptr[32]);
              *(_QWORD *)(a1 + 48) = v44;
              v86 = v39;
              v87 = v40;
              v88 = v41;
              v89 = v43;
              *(__m128i *)(a1 + 32) = v45;
              *(__m128i *)ptr = v40;
              *(__m128i *)&ptr[16] = v41;
              *(__m128i *)&ptr[32] = v43;
              goto LABEL_59;
            }
          }
          v36 = v35;
          if ( v35 == v26 )
          {
LABEL_52:
            memmove(v35, v26, (char *)&v24[8 * v16] - (char *)v26);
            *(_QWORD *)(a1 + 8) -= ((char *)v26 - (char *)v35) >> 7;
            v26 = v35;
            goto LABEL_36;
          }
          do
          {
LABEL_46:
            clear_tinfo_t(&v36[4]);
            v37 = (void *)v36[2].m128i_i64[1];
            if ( v37 )
            {
              v36[3].m128i_i64[0] = 0;
              qfree(v37);
            }
            v38 = (void *)v36[1].m128i_i64[0];
            if ( v38 )
            {
              v36[1].m128i_i64[1] = 0;
              qfree(v38);
            }
            v36 += 8;
          }
          while ( v36 != v26 );
          v16 = *(_QWORD *)(a1 + 8);
          v24 = *(__m128i **)a1;
          goto LABEL_52;
        }
        v35 -= 8;
      }
      v36 = v35;
      goto LABEL_46;
    }
LABEL_36:
    if ( (v26[7].m128i_i8[5] & 4) != 0 )
    {
      v26->m128i_i64[0] = v34;
    }
    else
    {
      sub_52B590(a2, (_QWORD *)a1, ((__int64)v26->m128i_i64 - *(_QWORD *)a1) >> 7);
      v26->m128i_i64[0] = v34;
      if ( (v26[7].m128i_i8[5] & 4) == 0 )
        sub_6A0430((__int64 *)(a2 + 96), v26);
    }
    v16 = *(_QWORD *)(a1 + 8);
    v32 = *(__m128i **)a1;
    v26 += 8;
    v24 = *(__m128i **)a1;
    v33 = v16 << 7;
  }
  while ( (unsigned __int64)v26 < *(_QWORD *)a1 + (v16 << 7) );
  if ( !*(_QWORD *)(a2 + 80) )
  {
    *(_DWORD *)a2 = 0;
    v32 = *(__m128i **)a1;
    v33 = *(_QWORD *)(a1 + 8) << 7;
  }
  v21 = sub_697960(
          a1,
          (__int64)v32[-8].m128i_i64 + v33,
          v83,
          *(double *)v31.m128i_i64,
          *(double *)a8.m128i_i64,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14);
  if ( v21 )
  {
LABEL_70:
    v60 = *(_QWORD *)(a1 + 48);
    v21 = -28;
    v61 = _mm_loadu_si128((const __m128i *)a1);
    v62 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    *(__m128i *)a1 = _mm_load_si128((const __m128i *)ptr);
    v63 = _mm_load_si128((const __m128i *)&ptr[16]);
    v64 = _mm_loadu_si128((const __m128i *)(a1 + 32));
    v65 = v86;
    v90 = v60;
    *(__m128i *)(a1 + 16) = v63;
    v66 = _mm_load_si128((const __m128i *)&ptr[32]);
    *(_QWORD *)(a1 + 48) = v65;
    v86 = v60;
    v87 = v61;
    v88 = v62;
    v89 = v64;
    *(__m128i *)(a1 + 32) = v66;
    *(__m128i *)ptr = v61;
    *(__m128i *)&ptr[16] = v62;
    *(__m128i *)&ptr[32] = v64;
  }
LABEL_59:
  v54 = *(void **)ptr;
  if ( *(_QWORD *)ptr )
  {
    v55 = *(_QWORD *)&ptr[8];
    v56 = *(_QWORD *)ptr + 64LL;
    v57 = 0;
    if ( *(_QWORD *)&ptr[8] )
    {
      do
      {
        clear_tinfo_t(v56);
        v58 = *(void **)(v56 - 24);
        if ( v58 )
        {
          *(_QWORD *)(v56 - 16) = 0;
          qfree(v58);
        }
        v59 = *(void **)(v56 - 48);
        if ( v59 )
        {
          *(_QWORD *)(v56 - 40) = 0;
          qfree(v59);
        }
        ++v57;
        v56 += 128;
      }
      while ( v55 != v57 );
    }
    qfree(v54);
  }
  return v21;
}

