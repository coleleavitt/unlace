void __fastcall sub_4F4020(__m128i *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  QT::QMetaObject::Connection *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rbp
  const Connection *v22; // rbx
  __int64 v23; // rax
  __m128i si128; // xmm2
  __m128i v25; // xmm0
  __int64 v26; // rdx
  void *v27; // r12
  QT::QMetaObject::Connection *v28; // rbp
  __int64 v29; // rax
  const Connection *v30; // r14
  QT::QMetaObject::Connection *v31; // r12
  QT::QMetaObject::Connection *v32; // rbx
  QT::QMetaObject::Connection *v33; // rdi
  QT::QMetaObject::Connection *v34; // rcx
  QT::QMetaObject::Connection *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38; // xmm6
  struct _Unwind_Exception *v39; // rbx
  QT::QMetaObject::Connection *v40; // rbp
  QT::QMetaObject::Connection *v41; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  __m128 v43; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v44[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a2;
  v9 = a1->m128i_i64[0];
  v10 = a1[1].m128i_i64[0];
  v44[1] = __readfsqword(0x28u);
  if ( v9 )
  {
    v12 = *(_QWORD *)(v9 + 8);
    v13 = v10;
    if ( v12 >= v10 )
      v13 = *(_QWORD *)(v9 + 8);
    v14 = a3 + v13;
    v15 = (__int64)(a1->m128i_i64[1] - ((v9 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
    v16 = v14 - v15;
    if ( !(_DWORD)v7 )
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
  v18 = (QT::QMetaObject::Connection *)QT::QArrayData::allocate(v44, 8, 16, v16, v12 >= v16, a6);
  v41 = v18;
  ptr = (void *)v44[0];
  if ( v44[0] && v18 )
  {
    v19 = a1->m128i_i64[0];
    if ( (_DWORD)v7 == 1 )
    {
      v43.m128_u64[0] = *(_QWORD *)(v44[0] + 8LL);
      v37 = (signed __int64)(v43.m128_u64[0] - a3 - a1[1].m128i_i64[0]) / 2;
      if ( v37 < 0 )
        v37 = 0;
      v41 = (QT::QMetaObject::Connection *)((char *)v41 + 8 * a3 + 8 * v37);
      v20 = 0;
      if ( !v19 )
        goto LABEL_16;
    }
    else
    {
      if ( !v19 )
      {
        *((_DWORD *)ptr + 1) = 0;
        v43 = _mm_loadh_ps((const double *)&v41);
        if ( a3 > 0 )
          goto LABEL_19;
LABEL_27:
        v21 = a1[1].m128i_i64[0];
        if ( !v21 )
          goto LABEL_20;
        v21 += a3;
        goto LABEL_29;
      }
      v41 = (QT::QMetaObject::Connection *)((char *)v41 + a1->m128i_i64[1] - ((v19 + 31) & 0xFFFFFFFFFFFFFFF0LL));
    }
    v20 = *(_DWORD *)(v19 + 4);
LABEL_16:
    *((_DWORD *)ptr + 1) = v20;
  }
  v43 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&ptr), (__m128i)(unsigned __int64)v41);
  if ( a3 <= 0 )
    goto LABEL_27;
  if ( !v41 )
  {
    v39 = (struct _Unwind_Exception *)QT::qBadAlloc();
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      v40 = (QT::QMetaObject::Connection *)((char *)v41 + 8 * v7);
      while ( v40 != v41 )
      {
        QT::QMetaObject::Connection::~Connection(v41);
        v41 = (QT::QMetaObject::Connection *)((char *)v41 + 8);
      }
      free(ptr);
    }
    _Unwind_Resume(v39);
  }
LABEL_19:
  v21 = a1[1].m128i_i64[0];
  if ( !v21 )
  {
LABEL_20:
    v22 = (const Connection *)a1->m128i_i64[1];
    v23 = 0;
LABEL_21:
    si128 = _mm_load_si128((const __m128i *)&v43);
    v25 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v21;
    *a1 = si128;
    if ( a4 )
    {
      v26 = *(_QWORD *)(a4 + 16);
      v27 = *(void **)a4;
      *(_QWORD *)(a4 + 16) = v23;
      v28 = *(QT::QMetaObject::Connection **)(a4 + 8);
      *(__m128i *)a4 = _mm_unpacklo_epi64(v25, (__m128i)(unsigned __int64)v22);
    }
    else
    {
      v26 = v23;
      v28 = (QT::QMetaObject::Connection *)v22;
      v27 = (void *)v25.m128i_i64[0];
    }
    goto LABEL_23;
  }
LABEL_29:
  v29 = 8 * v21;
  if ( !a1->m128i_i64[0] || a4 || *(int *)a1->m128i_i64[0] > 1 )
  {
    v22 = (const Connection *)a1->m128i_i64[1];
    v30 = &v22[(unsigned __int64)v29 / 2];
    if ( &v22[(unsigned __int64)v29 / 2] == v22 )
    {
      v23 = a1[1].m128i_i64[0];
      v21 = 0;
    }
    else
    {
      v31 = v41;
      v21 = 0;
      if ( v22 < v30 )
      {
        do
        {
          QT::QMetaObject::Connection::Connection(v31, v22);
          v22 += 4;
          ++v21;
          v31 = (QT::QMetaObject::Connection *)((char *)v31 + 8);
        }
        while ( v22 < v30 );
        v22 = (const Connection *)a1->m128i_i64[1];
      }
      v23 = a1[1].m128i_i64[0];
    }
    goto LABEL_21;
  }
  v28 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
  if ( v29
    && (v34 = (QT::QMetaObject::Connection *)((char *)v28 + v29),
        v28 < (QT::QMetaObject::Connection *)((char *)v28 + v29)) )
  {
    v35 = v41;
    do
    {
      v36 = *(_QWORD *)v28;
      *(_QWORD *)v28 = 0;
      v28 = (QT::QMetaObject::Connection *)((char *)v28 + 8);
      v35 = (QT::QMetaObject::Connection *)((char *)v35 + 8);
      *((_QWORD *)v35 - 1) = v36;
    }
    while ( v28 < v34 );
    v28 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
    v26 = a1[1].m128i_i64[0];
    v27 = (void *)a1->m128i_i64[0];
    *a1 = _mm_load_si128((const __m128i *)&v43);
    a1[1].m128i_i64[0] = ((unsigned __int64)(v29 - 1) >> 3) + 1;
  }
  else
  {
    v38 = _mm_load_si128((const __m128i *)&v43);
    v27 = (void *)a1->m128i_i64[0];
    v26 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = 0;
    *a1 = v38;
  }
LABEL_23:
  if ( v27 && !_InterlockedSub((volatile signed __int32 *)v27, 1u) )
  {
    v32 = (QT::QMetaObject::Connection *)((char *)v28 + 8 * v26);
    while ( v32 != v28 )
    {
      v33 = v28;
      v28 = (QT::QMetaObject::Connection *)((char *)v28 + 8);
      QT::QMetaObject::Connection::~Connection(v33);
    }
    free(v27);
  }
}
