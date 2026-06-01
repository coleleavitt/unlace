QT::QAbstractItemView *__fastcall sub_3E7630(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  QT::QWidget *v8; // rbx
  double v9; // xmm0_8
  __int64 v10; // rbx
  const QT::QObject *v11; // rsi
  QT::QAbstractItemView *v13; // rbx
  double v14; // xmm0_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  void *ptr[9]; // [rsp+0h] [rbp+0h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v8 = qword_8CD8B8;
  v9 = QT::QString::fromUtf8(ptr, 6, "Locals");
  v10 = sub_4C6D30(v8, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v10 )
      goto LABEL_4;
  }
  else if ( v10 )
  {
LABEL_4:
    sub_4CB2D0(qword_8CD8B8);
    v11 = (const QT::QObject *)sub_4CD6B0(v10, 0);
    return (QT::QAbstractItemView *)QT::QMetaObject::cast((QT::QMetaObject *)&off_892540, v11);
  }
  v13 = (QT::QAbstractItemView *)operator new(0x478u);
  v14 = QT::QString::fromUtf8(ptr, 6, "Locals", v9);
  sub_3E7380(v13, -1, (const QT::QString *)ptr, v14, a2, a3, a4, v15, v16, a7, a8);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v13;
}
