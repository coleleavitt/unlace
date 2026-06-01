__int64 __fastcall sub_491A40(
        __int64 a1,
        const QT::QString *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        unsigned int a12,
        const __m128i *a13)
{
  __int64 *v15; // rsi
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 i; // rbp
  __int64 v24; // rax
  const char *v25; // rdx
  __int64 (__fastcall *v26)(__int64, __int64, __int64, __int64, unsigned int, __m128, __m128, __m128, __m128, double, double, __m128, __m128, __int64, char); // rax
  unsigned __int8 v27; // al
  __int64 v28; // rbp
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 *v38; // rbp
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char v44; // r14
  __int64 v45; // rax
  __int64 v46; // rsi
  char v47; // [rsp-8h] [rbp-138h]
  __int64 *v48; // [rsp+0h] [rbp-130h]
  const char *v49; // [rsp+8h] [rbp-128h]
  unsigned __int8 v50; // [rsp+13h] [rbp-11Dh]
  __int64 v52; // [rsp+20h] [rbp-110h]
  __int64 v53; // [rsp+30h] [rbp-100h]
  char v54; // [rsp+47h] [rbp-E9h]
  __int128 v55; // [rsp+48h] [rbp-E8h] BYREF
  const char *v56; // [rsp+58h] [rbp-D8h] BYREF
  __int128 v57; // [rsp+60h] [rbp-D0h]
  __int64 *v58; // [rsp+78h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+80h] [rbp-B0h]
  __int64 v60; // [rsp+98h] [rbp-98h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-90h]
  __int64 v62; // [rsp+B8h] [rbp-78h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-70h]
  __int64 v64; // [rsp+D8h] [rbp-58h] BYREF
  char v65; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v66; // [rsp+F0h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v15 = (__int64 *)&v58;
  v58 = nullptr;
  v56 = nullptr;
  v59 = 0;
  v55 = -1;
  v57 = 0;
  v50 = sub_4916A0(a1, (__int64 *)&v58, &v56, (__int64)&v55, a2, (__int64)a13);
  v49 = v56;
  if ( v50 )
  {
    v53 = v57;
    v17 = **(_QWORD **)(a1 + 208);
    v65 = 0;
    v64 = -1;
    dirtree_resolve_cursor(&v64, v17, &v55);
    v18 = *(_QWORD *)(a1 + 16);
    v60 = 0;
    v19 = v64;
    v54 = v65;
    v20 = *(_QWORD *)(v18 + 1784);
    v52 = v64;
    *(_QWORD *)(v18 + 1792) = v20;
    *(__m128i *)(v18 + 1800) = _mm_loadu_si128(a13);
    v21 = a13[1].m128i_i64[0];
    *(_QWORD *)(v18 + 1824) = v19;
    *(_QWORD *)(v18 + 1816) = v21;
    v61 = 0;
    if ( v20 )
    {
      if ( (_QWORD)v59 )
      {
        v60 = qvector_reserve(&v60, 0, v59, 1);
        v38 = v58;
        v48 = &v58[2 * v59];
        if ( v58 != v48 )
        {
          do
          {
            v39 = *(_QWORD *)(v18 + 1784);
            sub_48B610((__int64)&v64, a1, v38);
            LOBYTE(v62) = QT::QTreeView::isExpanded(v39, &v64, v40, v41, v42, v43);
            v44 = v62;
            v45 = v61;
            v46 = v60;
            if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
            {
              v60 = qvector_reserve(&v60, v60, v61 + 1, 1);
              v46 = v60;
              v45 = v61;
            }
            *(_BYTE *)(v46 + v45) = v44;
            v38 += 2;
            *(_QWORD *)&v61 = v61 + 1;
          }
          while ( v48 != v38 );
        }
      }
    }
    v22 = *(_QWORD *)(v18 + 1704);
    for ( i = v22 + 32LL * *(_QWORD *)(v18 + 1712); v22 != i; v22 += 32 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 192LL))(
        *(_QWORD *)(a1 + 16),
        *(_QWORD *)(v22 + 8));
    if ( v52 != -1 && v54 )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 192LL))(*(_QWORD *)(a1 + 16), v52);
    v24 = *(_QWORD *)a1;
    v62 = 0;
    v63 = 0;
    v25 = &s1;
    if ( v53 )
      v25 = v49;
    v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __m128, __m128, __m128, __m128, double, double, __m128, __m128, __int64, char))(v24 + 464);
    if ( v26 == sub_489F80 )
    {
      v27 = dirtree_bulk_move(**(_QWORD **)(a1 + 208), &v58, v25, a12, &v62, 0);
      if ( v27 )
      {
        v31 = dirtree_errstr(v27);
        sub_169700(
          (int)"Failed move operation: %s\n",
          v31,
          v32,
          v33,
          v34,
          v35,
          (__m128)0LL,
          (__m128)-1LL,
          a5,
          a6,
          v36,
          v37,
          a9,
          a10,
          v47);
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64 **, const char *, __int64 *, _QWORD, _QWORD))v26)(
        a1,
        &v58,
        v25,
        &v62,
        (int)a12,
        0);
    }
    v15 = (__int64 *)(v18 + 1704);
    sub_4E7B00(*(_QWORD *)(a1 + 16), v18 + 1704, 0);
    if ( *(_QWORD *)(v18 + 1784) )
    {
      v28 = v63;
      if ( (_QWORD)v63 )
      {
        v29 = 0;
        do
        {
          while ( !*(_BYTE *)(v60 + v29) )
          {
            if ( ++v29 == v28 )
              goto LABEL_25;
          }
          v30 = *(_QWORD *)(v18 + 1784);
          sub_48B610((__int64)&v64, a1, (__int64 *)(v62 + 16 * v29));
          v15 = &v64;
          QT::QTreeView::expand(v30, &v64);
          ++v29;
        }
        while ( v29 != v28 );
      }
    }
LABEL_25:
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62, (const char *)v15);
    }
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60, (const char *)v15);
    }
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58, (const char *)v15);
  }
  if ( v49 )
    qfree(v49, (const char *)v15);
  return v50;
}
