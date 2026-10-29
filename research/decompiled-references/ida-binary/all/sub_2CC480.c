QT::QAbstractScrollArea *__fastcall sub_2CC480(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v8; // rbp
  QT::QWidget *v9; // r13
  double v10; // xmm0_8
  __int64 v11; // rbx
  const QT::QObject *v12; // rsi
  QT::QAbstractScrollArea *v14; // rbx
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // r12
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rax
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( dword_8BA590 < 0 )
    return nullptr;
  if ( dword_8BA590 >= (unsigned __int64)xmmword_8CC398 )
    return nullptr;
  v8 = (_QWORD *)(qword_8CC390 + 56LL * dword_8BA590);
  if ( !v8 )
    return nullptr;
  v9 = qword_8CD8B8;
  v10 = QT::QString::fromUtf8(ptr, 10, "Stack view");
  v11 = sub_4C6D30(v9, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v11 )
      goto LABEL_7;
  }
  else if ( v11 )
  {
LABEL_7:
    sub_4CB2D0(qword_8CD8B8);
    v12 = (const QT::QObject *)sub_4CD6B0(v11, 0);
    return (QT::QAbstractScrollArea *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87C660, v12);
  }
  v15 = (_BYTE *)xmmword_8CC810;
  v14 = sub_2CBFE0(nullptr, xmmword_8CC810, 1);
  if ( !v14 )
    return nullptr;
  v18 = (__int64 *)qword_8CB508;
  if ( !qword_8CB508 )
  {
    v21 = operator new(0x18u);
    v10 = 0.0;
    *(_QWORD *)v21 = 0;
    v18 = (__int64 *)v21;
    qword_8CB508 = v21;
    *(_OWORD *)(v21 + 8) = 0;
  }
  if ( v8[1] )
    goto LABEL_17;
  do
  {
    if ( under_debugger )
      BUG();
    interr(1716, v15, v16, v17, v10);
LABEL_17:
    v15 = (_BYTE *)*v8;
  }
  while ( !*(_BYTE *)*v8 );
  v24 = 0;
  qstrncpy(&v24, v15, 16);
  *(_QWORD *)&v23 = 0;
  *((_QWORD *)&v23 + 1) = v14;
  sub_203F40(v18, &v23, &v24, (__m128)0LL, a2, a3, a4, v19, v20, a7, a8);
  return v14;
}
