unsigned __int64 __fastcall sub_3F5B20(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // r12
  QT::QLabel *v4; // r12
  QT::QLabel *v5; // r12
  void *v6[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v7[4]; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 352) == 0;
  v9 = __readfsqword(0x28u);
  if ( v1 )
  {
    v5 = *(QT::QLabel **)(a1 + 176);
    QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
    QT::QLabel::setText(v5, (const QT::QString *)ptr);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( (_DWORD)v2 )
    {
      QT::QString::fromUtf8(v7, 16, "%1 of %2 matches");
      QT::QString::arg(ptr, v7, *(_DWORD *)(a1 + 384) + 1, 0, 10, 32);
      QT::QString::arg(v6, ptr, (int)v2, 0, 10, 32);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v7[0] && !_InterlockedSub((volatile signed __int32 *)v7[0], 1u) )
        free(v7[0]);
      QT::QLabel::setText(*(QT::QLabel **)(a1 + 176), (const QT::QString *)v6);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 160), 1);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 168), 1);
      if ( v6[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v6[0], 1u) )
          free(v6[0]);
      }
      return v9 - __readfsqword(0x28u);
    }
    v4 = *(QT::QLabel **)(a1 + 176);
    QT::QString::fromUtf8(ptr, 10, "No matches");
    QT::QLabel::setText(v4, (const QT::QString *)ptr);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 160), 0);
  return QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 168), 0);
}
