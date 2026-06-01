unsigned __int64 __fastcall sub_536F00(__int64 a1, const char *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v8; // rax
  size_t v9; // r14
  size_t v10; // r13
  const char *i; // rax
  void *v12; // rbx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  char *v15; // rax
  void *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __m128i v19; // xmm0
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  void **p_ptr; // rsi
  QT::QKeySequence *v24; // r13
  QT::QKeySequence *v25; // r15
  QT::QKeySequence *v26; // rdi
  QT::QKeySequence *v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  int *v30; // rax
  QT::QKeySequence *v31; // rdx
  QT::QKeySequence *v32; // rbp
  QT::QKeySequence *v33; // r15
  void *v34; // r13
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  void **v37; // rax
  void *v38; // rdi
  const char *v39; // rsi
  unsigned __int64 v40; // rdi
  __m128i v41; // xmm0
  void **v42; // rax
  const char *v43; // rdi
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  void **v46; // rdx
  __int64 v47; // rbp
  __int64 v48; // rbx
  const char *v49; // rax
  __int64 v50; // rdi
  __int64 v52; // rax
  QT::QKeySequence *v53; // rbx
  QT::QKeySequence *v54; // rbp
  QT::QKeySequence *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  const char *v58; // rsi
  __int64 v59; // rax
  __m128i v60; // [rsp+0h] [rbp-110h] BYREF
  __m128i v61; // [rsp+10h] [rbp-100h] BYREF
  __int128 v62; // [rsp+20h] [rbp-F0h]
  QT::QKeySequence *v63[2]; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-C8h]
  void **v65; // [rsp+58h] [rbp-B8h] BYREF
  __m128i v66; // [rsp+60h] [rbp-B0h] BYREF
  void *v67; // [rsp+78h] [rbp-98h] BYREF
  __m128i v68; // [rsp+80h] [rbp-90h] BYREF
  void *v69[4]; // [rsp+98h] [rbp-78h] BYREF
  void *ptr; // [rsp+B8h] [rbp-58h] BYREF
  __m128i v71; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v72; // [rsp+D0h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  v62 = 0;
  v61.m128i_i64[1] = 0;
  if ( a2 )
  {
    v8 = strlen(a2);
    v9 = v8 + 1;
    v10 = v8;
    v61.m128i_i64[1] = qvector_reserve(&v61.m128i_u64[1], 0, v8 + 1, 1);
    *(_QWORD *)&v62 = v9;
    memmove((void *)v61.m128i_i64[1], a2, v10);
    *(_BYTE *)(v61.m128i_i64[1] + v10) = 0;
    if ( (unsigned __int64)v62 > 1 )
    {
      for ( i = (const char *)qstrtok(v61.m128i_i64[1], ",", v69); i; i = (const char *)qstrtok(0, ",", v69) )
      {
        sub_5360B0((__int64)&ptr, i, a3);
        v59 = *(_QWORD *)(a1 + 8);
        v58 = *(const char **)a1;
        v17 = *(_QWORD *)(a1 + 16);
        v18 = v59 + 1;
        if ( (unsigned __int64)&ptr < *(_QWORD *)a1 || &ptr >= (void **)&v58[24 * v17] )
        {
          if ( v17 < v18 )
          {
            v56 = qvector_reserve(a1, v58, v59 + 1, 24);
            *(_QWORD *)a1 = v56;
            v58 = (const char *)v56;
            v59 = *(_QWORD *)(a1 + 8);
          }
          v19 = _mm_loadu_si128(&v71);
          v20 = (char *)&v58[24 * v59];
          *(_QWORD *)v20 = ptr;
          *(__m128i *)(v20 + 8) = v19;
          ++*(_QWORD *)(a1 + 8);
        }
        else
        {
          v12 = ptr;
          v13 = _mm_loadl_epi64(&v71);
          ptr = nullptr;
          v14 = _mm_loadl_epi64((const __m128i *)&v71.m128i_u64[1]);
          v71 = 0;
          if ( v17 < v18 )
          {
            v60.m128i_i64[1] = v14.m128i_i64[0];
            v60.m128i_i64[0] = v13.m128i_i64[0];
            v57 = qvector_reserve(a1, v58, v59 + 1, 24);
            *(_QWORD *)a1 = v57;
            v58 = (const char *)v57;
            v14 = _mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
            v59 = *(_QWORD *)(a1 + 8);
            v13 = _mm_loadl_epi64(&v60);
          }
          v15 = (char *)&v58[24 * v59];
          *(_QWORD *)v15 = v12;
          *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v13, v14);
          v16 = ptr;
          ++*(_QWORD *)(a1 + 8);
          if ( v16 )
          {
            v71.m128i_i64[0] = 0;
            qfree(v16, v58);
          }
        }
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 8);
  v22 = *(_QWORD *)a1;
  v60.m128i_i64[1] = (__int64)v63;
  *(_OWORD *)v63 = 0;
  v64 = 0;
  v60.m128i_i64[0] = v22 + 24 * v21;
  if ( v60.m128i_i64[0] == v22 )
  {
    v65 = nullptr;
    v66 = 0;
LABEL_27:
    p_ptr = nullptr;
    sub_4B1FD0((__m128i *)v63, 0, 0, 0, a5, a6);
    v30 = (int *)v63[0];
    goto LABEL_28;
  }
  do
  {
    sub_532340((__int64)&ptr, v22);
    p_ptr = (void **)v64;
    if ( v64 <= 0 )
    {
LABEL_21:
      sub_536CF0((__m128i *)v60.m128i_i64[1], (__int64)p_ptr, (const QT::QKeySequence *)&ptr);
      if ( !v63[0] || *(int *)v63[0] > 1 )
      {
        p_ptr = nullptr;
        sub_4B1FD0((__m128i *)v60.m128i_i64[1], 0, 0, 0, v28, v29);
      }
    }
    else
    {
      v24 = (QT::QKeySequence *)((char *)v63[1] + 8 * v64);
      v25 = v63[1];
      do
      {
        v27 = v25;
        if ( v24 == v25 )
          goto LABEL_20;
        v26 = v25;
        p_ptr = &ptr;
        v25 = (QT::QKeySequence *)((char *)v25 + 8);
      }
      while ( !(unsigned __int8)QT::QKeySequence::operator==(v26, &ptr) );
      if ( v27 - v63[1] == -8 )
      {
LABEL_20:
        p_ptr = (void **)v64;
        goto LABEL_21;
      }
    }
    v22 += 24;
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&ptr);
  }
  while ( v60.m128i_i64[0] != v22 );
  v30 = (int *)v63[0];
  v65 = nullptr;
  v66 = 0;
  if ( !v63[0] || *(int *)v63[0] > 1 )
    goto LABEL_27;
LABEL_28:
  v31 = v63[1];
  v32 = v63[1];
  if ( !v30 || *v30 > 1 )
  {
    p_ptr = nullptr;
    sub_4B1FD0((__m128i *)v63, 0, 0, 0, a5, a6);
    v31 = v63[1];
  }
  v33 = (QT::QKeySequence *)((char *)v31 + 8 * v64);
  for ( v60.m128i_i64[0] = (__int64)v63; v33 != v32; ++v66.m128i_i64[0] )
  {
    while ( 1 )
    {
      QT::QKeySequence::toString(v69, v32, 1);
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v69);
      v39 = (const char *)v71.m128i_i64[0];
      if ( !v71.m128i_i64[0] )
        v39 = (const char *)&QT::QByteArray::_empty;
      sub_5360B0((__int64)&v67, v39, 1);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v69[0] && !_InterlockedSub((volatile signed __int32 *)v69[0], 1u) )
        free(v69[0]);
      v52 = v66.m128i_i64[0];
      p_ptr = v65;
      v40 = v66.m128i_i64[0] + 1;
      if ( &v67 < v65 || &v67 >= &v65[3 * v66.m128i_i64[1]] )
        break;
      v34 = v67;
      v35 = _mm_loadl_epi64(&v68);
      v67 = nullptr;
      v36 = _mm_loadl_epi64((const __m128i *)&v68.m128i_u64[1]);
      v68 = 0;
      if ( v66.m128i_i64[1] < v40 )
      {
        v61.m128i_i64[0] = v36.m128i_i64[0];
        v60.m128i_i64[1] = v35.m128i_i64[0];
        v65 = (void **)qvector_reserve(&v65, v65, v66.m128i_i64[0] + 1, 24);
        p_ptr = v65;
        v36 = _mm_loadl_epi64(&v61);
        v52 = v66.m128i_i64[0];
        v35 = _mm_loadl_epi64((const __m128i *)&v60.m128i_u64[1]);
      }
      v37 = &p_ptr[3 * v52];
      *v37 = v34;
      v38 = v67;
      *(__m128i *)(v37 + 1) = _mm_unpacklo_epi64(v35, v36);
      ++v66.m128i_i64[0];
      if ( v38 )
      {
        v68.m128i_i64[0] = 0;
        qfree(v38, (const char *)p_ptr);
      }
      v32 = (QT::QKeySequence *)((char *)v32 + 8);
      if ( v33 == v32 )
        goto LABEL_51;
    }
    if ( v66.m128i_i64[1] < v40 )
    {
      v65 = (void **)qvector_reserve(&v65, v65, v66.m128i_i64[0] + 1, 24);
      p_ptr = v65;
      v52 = v66.m128i_i64[0];
    }
    v32 = (QT::QKeySequence *)((char *)v32 + 8);
    v41 = _mm_loadu_si128(&v68);
    v42 = &p_ptr[3 * v52];
    *v42 = v67;
    *(__m128i *)(v42 + 1) = v41;
  }
LABEL_51:
  v43 = *(const char **)a1;
  v44 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v45 = _mm_loadu_si128(&v66);
  *(_QWORD *)a1 = v65;
  v46 = (void **)v43;
  v65 = (void **)v43;
  *(__m128i *)(a1 + 8) = v45;
  v66 = v44;
  if ( v43 )
  {
    v47 = v44.m128i_i64[0];
    if ( v44.m128i_i64[0] )
    {
      v48 = 0;
      do
      {
        v49 = &v43[24 * v48];
        v50 = *(_QWORD *)v49;
        if ( *(_QWORD *)v49 )
        {
          *((_QWORD *)v49 + 1) = 0;
          qfree(v50, (const char *)p_ptr, v46);
          v46 = v65;
        }
        ++v48;
        v43 = (const char *)v46;
      }
      while ( v47 != v48 );
    }
    v66.m128i_i64[0] = 0;
    *(double *)v44.m128i_i64 = qfree(v43, (const char *)p_ptr, v46);
  }
  if ( v63[0] && !_InterlockedSub((volatile signed __int32 *)v63[0], 1u) )
  {
    v53 = v63[1];
    v54 = (QT::QKeySequence *)((char *)v63[1] + 8 * v64);
    if ( v63[1] != v54 )
    {
      do
      {
        v55 = v53;
        v53 = (QT::QKeySequence *)((char *)v53 + 8);
        QT::QKeySequence::~QKeySequence(v55);
      }
      while ( v54 != v53 );
    }
    free(v63[0]);
  }
  if ( v61.m128i_i64[1] )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61.m128i_i64[1], (const char *)p_ptr, v46, *(double *)v44.m128i_i64);
  }
  return v72 - __readfsqword(0x28u);
}
