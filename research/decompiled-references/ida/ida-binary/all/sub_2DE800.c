__int64 __fastcall sub_2DE800(QT::QWidget *a1, QT::QAction *a2, double a3)
{
  __m128i ptr[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v5[9]; // [rsp+20h] [rbp-48h] BYREF

  v5[3] = (void *)__readfsqword(0x28u);
  QT::QAction::text((QT::QAction *)ptr);
  sub_2DE680((QT::QString *)v5, a1, ptr, a3);
  QT::QAction::setText(a2, (const QT::QString *)v5);
  if ( v5[0] && !_InterlockedSub((volatile signed __int32 *)v5[0], 1u) )
    free(v5[0]);
  if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
    free((void *)ptr[0].m128i_i64[0]);
  return QT::QWidget::addAction(a1, a2);
}
