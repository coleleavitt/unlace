__int64 __fastcall sub_18B0D0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  QT::QLineEdit *v4; // r13
  void *ptr[9]; // [rsp+0h] [rbp+0h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_1864C0(a1, 1);
  v4 = *(QT::QLineEdit **)(a1 + 136);
  QT::QKeySequence::toString(ptr, a2, 1);
  QT::QLineEdit::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( *(_QWORD *)(a1 + 96) )
  {
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    sub_18AEE0(a1, (const QT::QString *)ptr, a3, a4);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 160), 0);
}
