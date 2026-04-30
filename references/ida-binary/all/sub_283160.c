unsigned __int64 __fastcall sub_283160(
        __int64 a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v12; // xmm0
  __m128 si128; // xmm0
  __int64 v14; // rax
  void *v15; // r12
  __int64 v16; // rdx
  void **v17; // rbp
  void **v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int *v22; // rax
  char *v23; // rdi
  char *v24; // r12
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const __m128i *v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  const __m128i *v37; // rdi
  double v38; // xmm0_8
  void *v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // rdx
  __int64 v42; // rcx
  int *v43; // rax
  __int64 v44; // rbp
  void **v45; // rbx
  void **v46; // rbp
  __m128i v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // rcx
  void *ptr[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v52; // [rsp+20h] [rbp-88h]
  void *v53[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v54; // [rsp+40h] [rbp-68h]
  void *v55[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v56; // [rsp+60h] [rbp-48h]
  unsigned __int64 v57; // [rsp+68h] [rbp-40h]

  v9 = _mm_loadu_si128(a2);
  v10 = a2[1].m128i_i64[0];
  v57 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = v10;
  *(__m128i *)a1 = v9;
  if ( v9.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v9.m128i_i64[0], 1u);
  v12 = _mm_loadu_si128(a3);
  *(_QWORD *)(a1 + 40) = a3[1].m128i_i64[0];
  *(__m128i *)(a1 + 24) = v12;
  if ( v12.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v12.m128i_i64[0], 1u);
  *(_OWORD *)(a1 + 48) = 0;
  ptr[0] = nullptr;
  *(_QWORD *)(a1 + 64) = 0;
  QT::QString::split(v55, a4, 59, 0, 1);
  si128 = (__m128)_mm_load_si128((const __m128i *)v55);
  v14 = v56;
  v56 = 0;
  v15 = ptr[0];
  *(_OWORD *)v55 = 0;
  v16 = 0;
  *(__m128 *)ptr = si128;
  v52 = v14;
  if ( v15 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
      free(v15);
    if ( v55[0] && !_InterlockedSub((volatile signed __int32 *)v55[0], 1u) )
    {
      v17 = (void **)v55[1];
      v18 = (void **)((char *)v55[1] + 24 * v56);
      if ( v55[1] != v18 )
      {
        do
        {
          if ( *v17 && !_InterlockedSub((volatile signed __int32 *)*v17, 1u) )
            free(*v17);
          v17 += 3;
        }
        while ( v18 != v17 );
      }
      free(v55[0]);
    }
  }
  QT::QtPrivate::QStringList_removeDuplicates(ptr, a4, v16);
  v22 = (int *)ptr[0];
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
  {
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v20, v21);
    v22 = (int *)ptr[0];
  }
  v23 = (char *)ptr[1];
  v24 = (char *)ptr[1] + 24 * v52;
  if ( !v22 || *v22 > 1 )
  {
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v20, v21);
    v23 = (char *)ptr[1];
  }
  if ( v23 != v24 )
  {
    v25 = 0xAAAAAAAAAAAAAAABLL * ((v24 - v23) >> 3);
    v26 = -2;
    if ( v25 )
    {
      _BitScanReverse64(&v25, v25);
      v26 = 2LL * (int)v25;
    }
    sub_282330((__int64)v23, v24, v26, v19, v20, v21);
    if ( v24 - v23 <= 384 )
    {
      sub_281F40((__int64)v23, (__int64)v24, si128, 0.0, a7, a8, v27, v28, v29, v30);
    }
    else
    {
      v31 = (const __m128i *)(v23 + 384);
      v32 = (__int64)(v23 + 384);
      sub_281F40((__int64)v23, (__int64)(v23 + 384), si128, 0.0, a7, a8, v27, v28, v29, v30);
      if ( v24 != v23 + 384 )
      {
        do
        {
          v37 = v31;
          v31 = (const __m128i *)((char *)v31 + 24);
          sub_281E50(v37, *(double *)si128.m128_u64, 0.0, a7, a8, v32, v33, v34, v35, v36);
        }
        while ( v24 != (char *)v31 );
      }
    }
  }
  v38 = QT::QString::fromUtf8(v55, 1, ";");
  v39 = v55[1];
  if ( !v55[1] )
    v39 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(v53, ptr, v39, v56, v38);
  v40 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v41 = *(_QWORD *)(a1 + 64);
  v42 = v54;
  *(__m128i *)(a1 + 48) = _mm_load_si128((const __m128i *)v53);
  *(_QWORD *)(a1 + 64) = v42;
  v54 = v41;
  *(__m128i *)v53 = v40;
  if ( v40.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v40.m128i_i64[0], 1u) )
    free(v53[0]);
  if ( v55[0] && !_InterlockedSub((volatile signed __int32 *)v55[0], 1u) )
    free(v55[0]);
  v43 = *(int **)(a1 + 48);
  v44 = *(_QWORD *)(a1 + 64);
  if ( !v43 || *v43 > 1 )
    QT::QString::reallocData(a1 + 48, *(_QWORD *)(a1 + 64), 1);
  if ( **(_BYTE **)(a1 + 56) == 59 )
  {
    QT::QString::mid(v55, a1 + 48, 1, (int)v44 - 1);
    v48 = _mm_loadu_si128((const __m128i *)(a1 + 48));
    v49 = *(_QWORD *)(a1 + 64);
    v50 = v56;
    *(__m128i *)(a1 + 48) = _mm_load_si128((const __m128i *)v55);
    *(_QWORD *)(a1 + 64) = v50;
    v56 = v49;
    *(__m128i *)v55 = v48;
    if ( v48.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v48.m128i_i64[0], 1u) )
        free(v55[0]);
    }
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v45 = (void **)ptr[1];
    v46 = (void **)((char *)ptr[1] + 24 * v52);
    if ( ptr[1] != v46 )
    {
      do
      {
        if ( *v45 && !_InterlockedSub((volatile signed __int32 *)*v45, 1u) )
          free(*v45);
        v45 += 3;
      }
      while ( v46 != v45 );
    }
    free(ptr[0]);
  }
  return v57 - __readfsqword(0x28u);
}
