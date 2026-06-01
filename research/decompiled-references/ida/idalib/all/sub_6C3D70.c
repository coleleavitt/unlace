__int64 __fastcall sub_6C3D70(
        __int64 a1,
        _QWORD *a2,
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
  char v14; // r10
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm0
  unsigned int v22; // r15d
  __int64 v24; // rbx
  __m128i *v25; // rax
  __m128i *v26; // r13
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r15
  const __m128i *v29; // r11
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __m128i *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r14
  __m128i *v36; // r15
  __m128i *v37; // rbp
  void *v38; // rdi
  void *v39; // rdi
  __m128i v40; // xmm2
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __m128i v43; // xmm3
  __int64 v44; // rax
  __int64 v45; // rdx
  __m128i v46; // xmm3
  __m128i v47; // xmm2
  __int64 v48; // rdi
  __int64 v49; // rdx
  __m128i v50; // xmm1
  __m128i si128; // xmm3
  __int64 v52; // rax
  __m128i v53; // xmm0
  __m128i v54; // xmm3
  void *v55; // r14
  __int64 v56; // r13
  __int64 v57; // rbx
  __int64 v58; // rbp
  void *v59; // rdi
  void *v60; // rdi
  __m128i v61; // xmm2
  __m128i v62; // xmm1
  __m128i v63; // xmm0
  __m128i v64; // xmm3
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm3
  __int64 v68; // r13
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __m128i *v71; // rbp
  size_t v72; // r14
  __m128i v73; // xmm0
  __int32 v74; // eax
  __m128i v75; // xmm0
  __int32 v76; // eax
  __m128i v77; // xmm0
  const __m128i *v78; // r10
  __m128i v79; // xmm0
  const __m128i *v80; // r15
  size_t v81; // r14
  void *v82; // rax
  void *v83; // rax
  unsigned __int64 v85; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v86; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v87; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v88; // [rsp+10h] [rbp-E8h]
  int v89; // [rsp+1Ch] [rbp-DCh]
  __int64 v90; // [rsp+20h] [rbp-D8h]
  __int64 v91; // [rsp+30h] [rbp-C8h]
  int v92[2]; // [rsp+38h] [rbp-C0h]
  _BYTE ptr[48]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+70h] [rbp-88h]
  __m128i v95; // [rsp+80h] [rbp-78h]
  __m128i v96; // [rsp+90h] [rbp-68h]
  __m128i v97; // [rsp+A0h] [rbp-58h]
  __int64 v98; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v99; // [rsp+B8h] [rbp-40h]

  v14 = *(_BYTE *)(a1 + 51);
  v89 = a5;
  v99 = __readfsqword(0x28u);
  if ( v14 )
    return (unsigned int)-5;
  v16 = *(_QWORD *)(a1 + 8);
  if ( a3 < v16 )
  {
    v18 = *(_QWORD *)(a1 + 24);
    if ( a4 >= 0 )
      goto LABEL_4;
LABEL_13:
    if ( v18 < -a4 )
      goto LABEL_80;
    v19 = v18 + a4;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 45) & 4) == 0 )
  {
LABEL_82:
    v22 = -7;
    set_error_data(0, a3, a3, v16, a5, a6);
    return v22;
  }
  v18 = *(_QWORD *)(a1 + 24);
  v14 = 1;
  if ( a4 < 0 )
    goto LABEL_13;
LABEL_4:
  v19 = a4 + v18;
  if ( __CFADD__(a4, v18) )
    goto LABEL_80;
LABEL_5:
  a5 = 4294967294LL;
  if ( v19 > 0xFFFFFFFE )
    goto LABEL_80;
  if ( v14 )
  {
    if ( !v16
      || (v20 = 9 * v16,
          v16 = 8 * v19,
          v21 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)a1 + 16 * v20 - 144)),
          a3 = _mm_add_epi64(v21, _mm_srli_si128(v21, 8)).m128i_u64[0],
          8 * v19 >= a3) )
    {
      *(_QWORD *)(a1 + 24) = v19;
      v22 = 0;
      *(_DWORD *)a2 = 0;
      return v22;
    }
    goto LABEL_80;
  }
  v24 = -a4;
  if ( a4 > 0 )
    v24 = a4;
  if ( !v24 )
  {
    v25 = *(__m128i **)a1;
    v91 = 0;
    *(_QWORD *)v92 = 144 * a3;
    v26 = (__m128i *)(*(_QWORD *)a1 + 144 * a3);
    goto LABEL_28;
  }
  if ( (unsigned __int64)v24 >> 61 )
  {
    set_error_data(0, v24, a3, v16, 4294967294LL, a6);
    return (unsigned int)-15;
  }
  a5 = 8 * v24;
  v25 = *(__m128i **)a1;
  v24 *= -8;
  if ( a4 > 0 )
    v24 = a5;
  *(_QWORD *)v92 = 144 * a3;
  v26 = &v25[9 * a3];
  v91 = v24;
  if ( v24 < 0 )
  {
    if ( v26->m128i_i64[0] >= a5 )
    {
      if ( a3 )
      {
        a6 = 144 * a3;
        v27 = a3;
        v28 = v26->m128i_i64[0] - a5;
        v29 = (__m128i *)((char *)v25 + *(_QWORD *)v92 - 144);
        do
        {
          v30 = _mm_loadu_si128(v29);
          --v27;
          a8 = _mm_srli_si128(v30, 8);
          a5 = _mm_add_epi64(v30, a8).m128i_u64[0];
          if ( v28 >= a5 )
            break;
          if ( (v29[8].m128i_i8[5] & 4) == 0 )
            goto LABEL_80;
          v29 -= 9;
        }
        while ( v27 );
      }
      else
      {
        *(_QWORD *)v92 = 0;
      }
      goto LABEL_28;
    }
LABEL_80:
    set_error_data(0, a4, a3, v16, a5, a6);
    return (unsigned int)-15;
  }
LABEL_28:
  if ( (v26[8].m128i_i8[4] & 0x20) != 0 )
    goto LABEL_82;
  memset(ptr, 0, 24);
  if ( v16 )
  {
    v85 = v16;
    v68 = 0;
    v69 = qalloc_or_throw(144 * v16);
    v70 = v85;
    *(_QWORD *)ptr = v69;
    v71 = (__m128i *)(v69 + 64);
    *(_QWORD *)&ptr[16] = v85;
    v90 = -64 - v69;
    do
    {
      v78 = (__m128i *)((char *)v71 + v90 + *(_QWORD *)a1);
      v79 = _mm_loadu_si128(v78);
      v71[-3].m128i_i64[0] = 0;
      v80 = v78;
      *(__m128i *)((char *)&v71[-3] + 8) = 0;
      v71[-4] = v79;
      v81 = v78[1].m128i_u64[1];
      if ( v81 )
      {
        v87 = v70;
        v82 = (void *)qalloc_or_throw(v78[1].m128i_i64[1]);
        v71[-2].m128i_i64[0] = v81;
        v71[-3].m128i_i64[0] = (__int64)v82;
        memcpy(v82, (const void *)v80[1].m128i_i64[0], v81);
        v71[-3].m128i_i64[1] = v81;
        v70 = v87;
      }
      v71[-2].m128i_i64[1] = 0;
      v71[-1] = 0;
      v72 = v80[3].m128i_u64[0];
      if ( v72 )
      {
        v88 = v70;
        v83 = (void *)qalloc_or_throw(v80[3].m128i_i64[0]);
        v71[-2].m128i_i64[1] = (__int64)v83;
        v71[-1].m128i_i64[1] = v72;
        memcpy(v83, (const void *)v80[2].m128i_i64[1], v72);
        v71[-1].m128i_i64[0] = v72;
        v70 = v88;
      }
      v71->m128i_i64[0] = 0;
      v86 = v70;
      copy_tinfo_t(v71);
      v73 = _mm_loadu_si128((const __m128i *)((char *)v80 + 72));
      ++v68;
      v71 += 9;
      v70 = v86;
      v71[-6].m128i_i64[1] = v80[7].m128i_i64[1];
      v74 = v80[8].m128i_i32[0];
      *(__m128i *)((char *)v71 - 136) = v73;
      v75 = _mm_loadu_si128((const __m128i *)((char *)v80 + 88));
      v71[-5].m128i_i32[0] = v74;
      v76 = v80[8].m128i_i32[1];
      *(__m128i *)((char *)v71 - 120) = v75;
      v77 = _mm_loadu_si128((const __m128i *)((char *)v80 + 104));
      v71[-5].m128i_i32[1] = v76;
      LOBYTE(v76) = v80[8].m128i_i8[8];
      *(__m128i *)((char *)v71 - 104) = v77;
      v71[-5].m128i_i8[8] = v76;
    }
    while ( v86 != v68 );
    v25 = *(__m128i **)a1;
    *(_QWORD *)&ptr[8] = v86;
    v16 = *(_QWORD *)(a1 + 8);
    v14 = *(_BYTE *)(a1 + 51);
    v26 = (__m128i *)((char *)v25 + *(_QWORD *)v92);
  }
  v31 = *(_QWORD *)(a1 + 40);
  BYTE3(v94) = v14;
  v32 = (__m128i)_mm_loadh_ps((const double *)(a1 + 32));
  *(_QWORD *)&ptr[40] = v31;
  LOWORD(v31) = *(_WORD *)(a1 + 48);
  *(__m128i *)&ptr[24] = v32;
  LOWORD(v94) = v31;
  BYTE2(v94) = *(_BYTE *)(a1 + 50);
  if ( v26 >= &v25[9 * v16] )
  {
    *(_DWORD *)a2 = 0;
    goto LABEL_70;
  }
  do
  {
    v35 = v26->m128i_i64[0] + v24;
    if ( v35 < 0 )
    {
      v47 = _mm_loadu_si128((const __m128i *)a1);
      v48 = v26->m128i_i64[0] + v24;
      v49 = v94;
      v50 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(__m128i *)a1 = _mm_load_si128((const __m128i *)ptr);
      si128 = _mm_load_si128((const __m128i *)&ptr[16]);
      v52 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = v49;
      v53 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      *(__m128i *)(a1 + 16) = si128;
      v54 = _mm_load_si128((const __m128i *)&ptr[32]);
      v98 = v52;
      *(__m128i *)(a1 + 32) = v54;
      v94 = v52;
      v95 = v47;
      v96 = v50;
      v97 = v53;
      *(__m128i *)ptr = v47;
      *(__m128i *)&ptr[16] = v50;
      *(__m128i *)&ptr[32] = v53;
      sub_6C3C60(v48);
      v22 = -10;
      goto LABEL_59;
    }
    v36 = v26 - 9;
    if ( v25 != v26 )
    {
      while ( 1 )
      {
        if ( (v36[8].m128i_i8[5] & 4) == 0 )
          goto LABEL_36;
        if ( v36 == v25 )
          break;
        if ( (v36[-1].m128i_i8[5] & 4) == 0 )
        {
          if ( v91 < 0 )
          {
            v32 = _mm_loadu_si128(v36 - 9);
            a8 = _mm_srli_si128(v32, 8);
            v32.m128i_i64[0] = _mm_add_epi64(v32, a8).m128i_u64[0];
            if ( (unsigned __int64)v35 < v32.m128i_i64[0] )
            {
              v40 = _mm_loadu_si128((const __m128i *)a1);
              v22 = -4;
              v41 = _mm_loadu_si128((const __m128i *)(a1 + 16));
              v42 = _mm_loadu_si128((const __m128i *)(a1 + 32));
              *(__m128i *)a1 = _mm_load_si128((const __m128i *)ptr);
              v43 = _mm_load_si128((const __m128i *)&ptr[16]);
              v44 = *(_QWORD *)(a1 + 48);
              v45 = v94;
              v95 = v40;
              *(__m128i *)(a1 + 16) = v43;
              v46 = _mm_load_si128((const __m128i *)&ptr[32]);
              v98 = v44;
              *(_QWORD *)(a1 + 48) = v45;
              v94 = v44;
              v96 = v41;
              v97 = v42;
              *(__m128i *)(a1 + 32) = v46;
              *(__m128i *)ptr = v40;
              *(__m128i *)&ptr[16] = v41;
              *(__m128i *)&ptr[32] = v42;
              goto LABEL_59;
            }
          }
          v37 = v36;
          if ( v36 == v26 )
          {
LABEL_52:
            memmove(v36, v26, (char *)&v25[9 * v16] - (char *)v26);
            *(_QWORD *)(a1 + 8) -= 0x8E38E38E38E38E39LL * (v26 - v36);
            v26 = v36;
            goto LABEL_36;
          }
          do
          {
LABEL_46:
            clear_tinfo_t(&v37[4]);
            v38 = (void *)v37[2].m128i_i64[1];
            if ( v38 )
            {
              v37[3].m128i_i64[0] = 0;
              qfree(v38);
            }
            v39 = (void *)v37[1].m128i_i64[0];
            if ( v39 )
            {
              v37[1].m128i_i64[1] = 0;
              qfree(v39);
            }
            v37 += 9;
          }
          while ( v37 != v26 );
          v16 = *(_QWORD *)(a1 + 8);
          v25 = *(__m128i **)a1;
          goto LABEL_52;
        }
        v36 -= 9;
      }
      v37 = v36;
      goto LABEL_46;
    }
LABEL_36:
    if ( (v26[8].m128i_i8[5] & 4) != 0 )
    {
      v26->m128i_i64[0] = v35;
    }
    else
    {
      sub_544310(a2, (_QWORD *)a1, 0x8E38E38E38E38E39LL * (((__int64)v26->m128i_i64 - *(_QWORD *)a1) >> 4));
      v26->m128i_i64[0] = v35;
      if ( (v26[8].m128i_i8[5] & 4) == 0 )
        sub_6C1060(a2 + 12, (__int64)v26);
    }
    v16 = *(_QWORD *)(a1 + 8);
    v33 = *(__m128i **)a1;
    v26 += 9;
    v25 = *(__m128i **)a1;
    v34 = 9 * v16;
  }
  while ( (unsigned __int64)v26 < *(_QWORD *)a1 + 144 * v16 );
  if ( !a2[10] )
  {
    *(_DWORD *)a2 = 0;
    v33 = *(__m128i **)a1;
    v34 = 9LL * *(_QWORD *)(a1 + 8);
  }
  v22 = sub_6B8250(
          a1,
          (__int64)v33[v34 - 9].m128i_i64,
          v89,
          *(double *)v32.m128i_i64,
          *(double *)a8.m128i_i64,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14);
  if ( v22 )
  {
LABEL_70:
    v61 = _mm_loadu_si128((const __m128i *)a1);
    v22 = -28;
    v62 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v63 = _mm_loadu_si128((const __m128i *)(a1 + 32));
    *(__m128i *)a1 = _mm_load_si128((const __m128i *)ptr);
    v64 = _mm_load_si128((const __m128i *)&ptr[16]);
    v65 = *(_QWORD *)(a1 + 48);
    v66 = v94;
    v95 = v61;
    *(__m128i *)(a1 + 16) = v64;
    v67 = _mm_load_si128((const __m128i *)&ptr[32]);
    v98 = v65;
    *(_QWORD *)(a1 + 48) = v66;
    v94 = v65;
    v96 = v62;
    v97 = v63;
    *(__m128i *)(a1 + 32) = v67;
    *(__m128i *)ptr = v61;
    *(__m128i *)&ptr[16] = v62;
    *(__m128i *)&ptr[32] = v63;
  }
LABEL_59:
  v55 = *(void **)ptr;
  if ( *(_QWORD *)ptr )
  {
    v56 = *(_QWORD *)&ptr[8];
    v57 = *(_QWORD *)ptr + 64LL;
    v58 = 0;
    if ( *(_QWORD *)&ptr[8] )
    {
      do
      {
        clear_tinfo_t(v57);
        v59 = *(void **)(v57 - 24);
        if ( v59 )
        {
          *(_QWORD *)(v57 - 16) = 0;
          qfree(v59);
        }
        v60 = *(void **)(v57 - 48);
        if ( v60 )
        {
          *(_QWORD *)(v57 - 40) = 0;
          qfree(v60);
        }
        ++v58;
        v57 += 144;
      }
      while ( v56 != v58 );
    }
    qfree(v55);
  }
  return v22;
}
