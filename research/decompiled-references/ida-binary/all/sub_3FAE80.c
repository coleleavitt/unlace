void __fastcall sub_3FAE80(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __m128i *v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // edx
  __m128i v22; // xmm1
  __int64 v23; // rcx
  const __m128i *v24; // rdx
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rax
  void *v28; // r13
  void **v29; // rbx
  __int64 v30; // rax
  void **i; // rbp
  __int64 v32; // rsi
  const __m128i *v33; // r8
  __m128i v34; // xmm0
  __int16 v35; // cx
  unsigned __int64 v36; // rcx
  void **v37; // rcx
  void *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  struct _Unwind_Exception *v42; // rbx
  _QWORD v43[11]; // [rsp+0h] [rbp-58h] BYREF

  v9 = a1->m128i_i64[0];
  v10 = a1[1].m128i_i64[0];
  v43[3] = __readfsqword(0x28u);
  if ( v9 )
  {
    v12 = *(_QWORD *)(v9 + 8);
    v13 = v10;
    if ( v12 >= v10 )
      v13 = *(_QWORD *)(v9 + 8);
    v14 = a3 + v13;
    v15 = (__int64)(a1->m128i_i64[1] - ((v9 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 5;
    v16 = v14 - v15;
    if ( !a2 )
      v16 = v15 + v14 + v10 - v12;
    v17 = *(_QWORD *)(v9 + 8);
    if ( v16 >= v12 )
      v17 = v16;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
      v16 = v17;
  }
  else
  {
    v12 = 0;
    if ( v10 < 0 )
      v10 = 0;
    v16 = v10 + a3;
  }
  v18 = (__m128i *)QT::QArrayData::allocate(v43, 32, 16, v16, v16 <= v12, a6);
  v19 = v43[0];
  if ( v43[0] && v18 )
  {
    v20 = a1->m128i_i64[0];
    if ( a2 == 1 )
    {
      v41 = (*(_QWORD *)(v43[0] + 8LL) - a3 - a1[1].m128i_i64[0]) / 2;
      if ( v41 < 0 )
        v41 = 0;
      v18 += 2 * a3 + 2 * v41;
      v21 = 0;
      if ( !v20 )
        goto LABEL_16;
    }
    else
    {
      if ( !v20 )
      {
        *(_DWORD *)(v43[0] + 4LL) = 0;
        v22 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)(unsigned __int64)v18);
        if ( a3 > 0 )
          goto LABEL_19;
LABEL_32:
        v23 = a1[1].m128i_i64[0];
        if ( !v23 )
          goto LABEL_20;
        v23 += a3;
        goto LABEL_34;
      }
      v18 = (__m128i *)((char *)v18 + a1->m128i_i64[1] - ((v20 + 31) & 0xFFFFFFFFFFFFFFF0LL));
    }
    v21 = *(_DWORD *)(v20 + 4);
LABEL_16:
    *(_DWORD *)(v43[0] + 4LL) = v21;
  }
  v22 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)(unsigned __int64)v18);
  if ( a3 <= 0 )
    goto LABEL_32;
  if ( !v18 )
  {
    v42 = (struct _Unwind_Exception *)QT::qBadAlloc();
    v43[0] = v19;
    v43[1] = 0;
    v43[2] = 0;
    sub_3F8CE0((__int64)v43);
    _Unwind_Resume(v42);
  }
LABEL_19:
  v23 = a1[1].m128i_i64[0];
  if ( !v23 )
  {
LABEL_20:
    v24 = (const __m128i *)a1->m128i_i64[1];
    v25 = 0;
LABEL_21:
    v26 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v23;
    *a1 = v22;
    if ( a4 )
    {
      v27 = *(_QWORD *)(a4 + 16);
      *(_QWORD *)(a4 + 16) = v25;
      v28 = *(void **)a4;
      v29 = *(void ***)(a4 + 8);
      *(__m128i *)a4 = _mm_unpacklo_epi64(v26, (__m128i)(unsigned __int64)v24);
    }
    else
    {
      v27 = v25;
      v29 = (void **)v24;
      v28 = (void *)v26.m128i_i64[0];
    }
    goto LABEL_23;
  }
LABEL_34:
  v32 = 4 * v23;
  if ( !a1->m128i_i64[0] || a4 || *(int *)a1->m128i_i64[0] > 1 )
  {
    v24 = (const __m128i *)a1->m128i_i64[1];
    v33 = &v24[(unsigned __int64)v32 / 2];
    if ( &v24[(unsigned __int64)v32 / 2] == v24 || v24 >= v33 )
    {
      v25 = a1[1].m128i_i64[0];
      v23 = 0;
    }
    else
    {
      do
      {
        v34 = _mm_loadu_si128(v24);
        v18[1].m128i_i64[0] = v24[1].m128i_i64[0];
        *v18 = v34;
        if ( v34.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)v34.m128i_i64[0], 1u);
        v35 = v24[1].m128i_i16[4];
        v24 += 2;
        v18 += 2;
        v18[-1].m128i_i16[4] = v35;
        v18[-1].m128i_i32[3] = v24[-1].m128i_i32[3];
      }
      while ( v24 < v33 );
      v36 = v32 * 8 - 1;
      v24 = (const __m128i *)a1->m128i_i64[1];
      v25 = a1[1].m128i_i64[0];
      v23 = (v36 >> 5) + 1;
    }
    goto LABEL_21;
  }
  v29 = (void **)a1->m128i_i64[1];
  if ( v32 * 8 && (v37 = &v29[v32], v29 < &v29[v32]) )
  {
    do
    {
      v38 = *v29;
      *v29 = nullptr;
      v29 += 4;
      v18 += 2;
      v18[-2].m128i_i64[0] = (__int64)v38;
      v39 = (__int64)*(v29 - 3);
      *(v29 - 3) = nullptr;
      v18[-2].m128i_i64[1] = v39;
      v40 = (__int64)*(v29 - 2);
      *(v29 - 2) = nullptr;
      v18[-1].m128i_i64[0] = v40;
      v18[-1].m128i_i16[4] = *((_WORD *)v29 - 4);
      v18[-1].m128i_i32[3] = *((_DWORD *)v29 - 1);
    }
    while ( v29 < v37 );
    v29 = (void **)a1->m128i_i64[1];
    v27 = a1[1].m128i_i64[0];
    v28 = (void *)a1->m128i_i64[0];
    *a1 = v22;
    a1[1].m128i_i64[0] = ((unsigned __int64)(v32 * 8 - 1) >> 5) + 1;
  }
  else
  {
    v28 = (void *)a1->m128i_i64[0];
    v27 = a1[1].m128i_i64[0];
    *a1 = v22;
    a1[1].m128i_i64[0] = 0;
  }
LABEL_23:
  if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
  {
    v30 = 4 * v27;
    for ( i = &v29[v30]; i != v29; v29 += 4 )
    {
      if ( *v29 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)*v29, 1u) )
          free(*v29);
      }
    }
    free(v28);
  }
}
