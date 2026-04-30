unsigned __int64 __fastcall sub_388000(int a1, const char *a2, const char *a3)
{
  QT::QLabel *v5; // r12
  size_t v6; // rax
  double v7; // xmm0_8
  QT::QWidget *v8; // rbx
  size_t v9; // rax
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a1 < *((_QWORD *)qword_8CD748 + 43) )
  {
    v5 = *(QT::QLabel **)(*((_QWORD *)qword_8CD748 + 42) + 8LL * a1);
    v6 = 0;
    if ( a2 )
      v6 = strlen(a2);
    v7 = QT::QString::fromUtf8(ptr, v6, a2);
    QT::QLabel::setText(v5, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v8 = *(QT::QWidget **)(*((_QWORD *)qword_8CD748 + 42) + 8LL * a1);
    v9 = 0;
    if ( a3 )
      v9 = strlen(a3);
    QT::QString::fromUtf8(ptr, v9, a3, v7);
    QT::QWidget::setToolTip(v8, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v11 - __readfsqword(0x28u);
}
