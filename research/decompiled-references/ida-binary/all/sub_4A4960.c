unsigned __int64 __fastcall sub_4A4960(
        __int64 *a1,
        const char *a2,
        __m128i *a3,
        __int64 *a4,
        __int64 a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 *v8; // rbp
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(_QWORD *); // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  __m128i v15; // xmm0
  unsigned __int64 *v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __m128i *v19; // r13
  char v20; // bp
  __int64 v21; // r12
  const char *v22; // rsi
  unsigned int *v23; // r15
  __int64 v25; // r8
  __int64 v26; // r12
  __int64 v27; // r9
  __int64 v28; // rbp
  size_t v29; // rax
  const char *v30; // r12
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  _QWORD *v40; // r10
  __int64 v41; // [rsp+0h] [rbp-108h]
  unsigned int *v42; // [rsp+0h] [rbp-108h]
  const char *v43; // [rsp+8h] [rbp-100h]
  _QWORD *v44; // [rsp+10h] [rbp-F8h]
  __int64 v45; // [rsp+18h] [rbp-F0h]
  __int64 v46; // [rsp+18h] [rbp-F0h]
  __int64 v47; // [rsp+20h] [rbp-E8h]
  __int64 v48; // [rsp+20h] [rbp-E8h]
  unsigned int v49; // [rsp+28h] [rbp-E0h]
  __int64 v50; // [rsp+28h] [rbp-E0h]
  __m128i v53; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B8h]
  _QWORD v55[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  __int128 v57; // [rsp+88h] [rbp-80h]
  const char *v58; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-60h]
  __int64 v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v62; // [rsp+C8h] [rbp-40h]

  v8 = a4;
  v43 = a2;
  v62 = __readfsqword(0x28u);
  v59 = 0;
  v58 = nullptr;
  v60 = 0;
  v61 = -1;
  v44 = nullptr;
  if ( a5 )
    v44 = *(_QWORD **)(a5 + 8);
  v10 = *a1;
  if ( a4 )
    v8 = a4 + 1;
  v11 = *(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v10 + 64LL);
  if ( v11 == folder_data_t__::vfunc_8 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, const char *, __int64 (__fastcall *)(_QWORD *), __int64 (__fastcall *)(_QWORD *)))(*(_QWORD *)v10 + 24LL))(
            v10,
            a2,
            v11,
            folder_data_t__::vfunc_8);
  }
  else
  {
    a2 = (const char *)a1[1];
    v12 = ((__int64 (__fastcall *)(__int64, const char *, __int64 (__fastcall *)(_QWORD *), __int64 (__fastcall *)(_QWORD *)))v11)(
            v10,
            a2,
            v11,
            folder_data_t__::vfunc_8);
  }
  v41 = v12;
  v13 = *a1;
  if ( !v8 )
  {
    v15.m128i_i64[0] = 0;
    v56 = 0;
    v57 = 0;
    goto LABEL_35;
  }
  v14 = v8[1];
  v15.m128i_i64[0] = 0;
  v56 = 0;
  v57 = 0;
  if ( !v14 )
  {
LABEL_35:
    v60 = 0;
    v20 = v44 == nullptr;
    v19 = nullptr;
    v14 = 0;
    if ( !v12 )
    {
      v49 = -1;
      goto LABEL_18;
    }
    goto LABEL_36;
  }
  a2 = nullptr;
  v56 = qvector_reserve(&v56, 0, v14, 8);
  v19 = (__m128i *)v56;
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    *(double *)v15.m128i_i64 = qfree(v58, nullptr);
    v58 = nullptr;
    v19 = (__m128i *)v56;
    *((_QWORD *)&v59 + 1) = 0;
  }
  v60 = 0;
  v25 = 8 * v8[1];
  v26 = 8 * v57;
  v27 = v25 >> 3;
  if ( v25 >> 3 )
  {
    v28 = *v8;
    v29 = 0;
    if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v27 + v57) )
    {
      v50 = v25 >> 3;
      v48 = v25;
      v56 = qvector_reserve(&v56, v19, v27 + v57, 8);
      v19 = (__m128i *)v56;
      v27 = v50;
      v25 = v48;
      v29 = 8 * v57 - v26;
    }
    v30 = &v19->m128i_i8[v26];
    v47 = v27;
    a2 = v30;
    v45 = v25;
    memmove((void *)&v30[v25], v30, v29);
    v31 = 0;
    if ( v45 )
    {
      do
      {
        *(_QWORD *)&v30[v31] = *(_QWORD *)(v28 + v31);
        v31 += 8;
      }
      while ( v45 != v31 );
    }
    v19 = (__m128i *)v56;
    *(_QWORD *)&v57 = v57 + v47;
    v26 = 8 * v57;
  }
  v16 = &v19->m128i_u64[(unsigned __int64)v26 / 8];
  if ( &v19->m128i_i8[v26] != (__int8 *)v19 )
  {
    v17 = v26 >> 3;
    v18 = -2;
    if ( v17 )
    {
      _BitScanReverse64(&v17, v17);
      v18 = 2LL * (int)v17;
    }
    sub_49B930(v19, v16, v18, *(double *)v15.m128i_i64, a7, a8);
    a2 = (const char *)v16;
    sub_49BFE0(v19->m128i_i8, (char *)v16);
    v19 = (__m128i *)v56;
  }
  v20 = v44 == nullptr;
  if ( v41 )
  {
LABEL_36:
    v32 = 0;
    v33 = 0;
    v49 = -1;
    while ( (unsigned __int8)v20 ^ 1 | (v33 < v14) )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * v32);
      if ( !v20 && *v44 == v34 )
      {
        v49 = v32;
        v20 = v20 ^ 1 | (v33 < v14);
      }
      a2 = &v19->m128i_i8[8 * v57];
      v35 = sub_49BCF0(v19, (__int64)a2, v34);
      v39 = v38 + 1;
      if ( v40 != v35 && *v35 == v36 )
      {
        a2 = (const char *)v55;
        v55[0] = v38;
        v55[1] = v38 + 1;
        v46 = v38 + 1;
        rangeset_t_add(&v58, v55, v36, v39, v37, v38);
        v19 = (__m128i *)v56;
        v39 = v46;
        ++v33;
      }
      if ( v41 == v39 )
        goto LABEL_16;
      v32 = v39;
    }
    v20 = 1;
    goto LABEL_16;
  }
  v49 = -1;
LABEL_16:
  if ( v19 )
  {
    *(_QWORD *)&v57 = 0;
    *(double *)v15.m128i_i64 = qfree(v19, a2, *(double *)v15.m128i_i64);
  }
LABEL_18:
  v21 = QT::QAbstractItemView::model((QT::QAbstractItemView *)a1[1]);
  v22 = &v58[16 * v59];
  v23 = (unsigned int *)v58;
  v42 = (unsigned int *)v22;
  if ( v22 != v58 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, __int64, double))(*(_QWORD *)v21 + 96LL))(
        v55,
        v21,
        *v23,
        *((unsigned int *)a1 + 6),
        a1[2],
        *(double *)v15.m128i_i64);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v21 + 96LL))(
        &v56,
        v21,
        v23[2] - 1,
        *((unsigned int *)a1 + 6),
        a1[2]);
      v22 = (const char *)v55;
      QT::QItemSelection::select(v43, v55, &v56);
      v23 += 4;
    }
    while ( v42 != v23 );
  }
  if ( a5 && v20 )
  {
    v22 = (const char *)QT::QAbstractItemView::model((QT::QAbstractItemView *)a1[1]);
    (*(void (__fastcall **)(__m128i *, const char *, _QWORD, _QWORD, __int64, double))(*(_QWORD *)v22 + 96LL))(
      &v53,
      v22,
      v49,
      *((unsigned int *)a1 + 6),
      a1[2],
      *(double *)v15.m128i_i64);
    v15 = _mm_loadu_si128(&v53);
    *a3 = v15;
    a3[1].m128i_i64[0] = v54;
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58, v22, *(double *)v15.m128i_i64);
  }
  return v62 - __readfsqword(0x28u);
}
