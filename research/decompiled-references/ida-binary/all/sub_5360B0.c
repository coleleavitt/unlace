unsigned __int64 __fastcall sub_5360B0(__int64 a1, const char *a2, char a3)
{
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // rax
  double v8; // xmm0_8
  const void *v9; // r12
  size_t v10; // rax
  size_t v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  void **v14; // rdx
  int v15; // r12d
  unsigned int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rax
  void **v19; // r12
  __int64 v20; // r15
  size_t v21; // r13
  void *v22; // rax
  void *v23; // rdi
  size_t v24; // rdx
  bool v25; // zf
  __int64 v26; // rax
  size_t v27; // [rsp+0h] [rbp-D0h]
  bool v28; // [rsp+Fh] [rbp-C1h] BYREF
  _BYTE v29[8]; // [rsp+10h] [rbp-C0h] BYREF
  void *v30[4]; // [rsp+18h] [rbp-B8h] BYREF
  void *ptr[4]; // [rsp+38h] [rbp-98h] BYREF
  __m128i v32; // [rsp+58h] [rbp-78h] BYREF
  __int64 v33; // [rsp+68h] [rbp-68h]
  int v34[6]; // [rsp+78h] [rbp-58h]
  unsigned __int64 v35; // [rsp+90h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v4 = strlen(a2);
      v5 = v4;
      if ( v4 )
      {
        v21 = v4 + 1;
        v22 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
        *(_QWORD *)a1 = v22;
        *(_QWORD *)(a1 + 8) = v21;
        memmove(v22, a2, v5);
        *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
      }
    }
    return v35 - __readfsqword(0x28u);
  }
  v7 = 0;
  if ( a2 )
    v7 = strlen(a2);
  v8 = QT::QString::fromUtf8(ptr, v7, a2);
  if ( ptr[2] && *(_WORD *)ptr[1] == 27 )
  {
    QT::QString::split(&v32, ptr, 59, 0, 1);
    if ( !v32.m128i_i64[0] || *(int *)v32.m128i_i64[0] > 1 )
      sub_1B21C0(&v32, 0, 0, 0, v12, v13);
    v14 = (void **)v32.m128i_i64[1];
    if ( *(_QWORD *)v32.m128i_i64[1] && !_InterlockedSub(*(volatile signed __int32 **)v32.m128i_i64[1], 1u) )
      free(*v14);
    v32.m128i_i64[1] += 24;
    *(_OWORD *)v34 = 0;
    v15 = v33 - 1;
    v16 = v33-- - 2;
    v28 = v16 <= 3;
    if ( v16 > 3 )
    {
LABEL_34:
      QT::QString::fromUtf8(v30, 0, (const char *)&unk_5C2F25);
    }
    else
    {
      v17 = 0;
      do
      {
        if ( !v32.m128i_i64[0] || *(int *)v32.m128i_i64[0] > 1 )
          sub_1B21C0(&v32, 0, 0, 0, v12, v13);
        v18 = QT::QString::toIntegral_helper(
                *(_QWORD *)(v32.m128i_i64[1] + 24 * v17 + 16),
                *(_QWORD *)(v32.m128i_i64[1] + 24 * v17 + 8),
                &v28,
                16,
                0.0);
        if ( v18 != (int)v18 )
        {
          v28 = 0;
          v34[v17] = 0;
          goto LABEL_34;
        }
        v25 = !v28;
        v34[v17] = v18;
        if ( v25 )
          goto LABEL_34;
        ++v17;
      }
      while ( v15 > (int)v17 );
      QT::QKeySequence::QKeySequence((QT::QKeySequence *)v29, v34[0], v34[1], v34[2], v34[3]);
      QT::QKeySequence::toString(v30, v29, 1);
      QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v29);
    }
    if ( !v32.m128i_i64[0] || _InterlockedSub((volatile signed __int32 *)v32.m128i_i64[0], 1u) )
      goto LABEL_12;
    v19 = (void **)v32.m128i_i64[1];
    v20 = v32.m128i_i64[1] + 24 * v33;
    if ( v32.m128i_i64[1] != v20 )
    {
      do
      {
        if ( *v19 && !_InterlockedSub((volatile signed __int32 *)*v19, 1u) )
          free(*v19);
        v19 += 3;
      }
      while ( (void **)v20 != v19 );
    }
    goto LABEL_42;
  }
  sub_5326A0((QT::QString *)&v32, (const QT::QString *)ptr, 0x2Du, 0x2Bu);
  QT::QKeySequence::QKeySequence(v29, &v32, 0, v8);
  QT::QKeySequence::toString(v30, v29, 1);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v29);
  if ( v32.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v32.m128i_i64[0], 1u) )
LABEL_42:
    free((void *)v32.m128i_i64[0]);
LABEL_12:
  QT::QString::toUtf8_helper((QT::QString *)&v32, (const QT::QString *)v30);
  v9 = (const void *)v32.m128i_i64[1];
  if ( (v32.m128i_i64[1] || (v9 = &QT::QByteArray::_empty) != nullptr)
    && (v10 = strlen((const char *)v9), (v11 = v10) != 0) )
  {
    v23 = *(void **)a1;
    v24 = v10 + 1;
    if ( *(_QWORD *)(a1 + 16) < v10 + 1 )
    {
      v27 = v10 + 1;
      v26 = qvector_reserve(a1, *(_QWORD *)a1, v24, 1);
      *(_QWORD *)a1 = v26;
      v24 = v27;
      v23 = (void *)v26;
    }
    *(_QWORD *)(a1 + 8) = v24;
    memmove(v23, v9, v11);
    *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( v32.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v32.m128i_i64[0], 1u) )
    free((void *)v32.m128i_i64[0]);
  if ( v30[0] && !_InterlockedSub((volatile signed __int32 *)v30[0], 1u) )
    free(v30[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v35 - __readfsqword(0x28u);
}
