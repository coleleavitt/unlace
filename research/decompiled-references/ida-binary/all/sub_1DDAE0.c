unsigned __int64 __fastcall sub_1DDAE0(__int64 a1)
{
  int v1; // eax
  QT::QWidget *v2; // r12
  double v3; // xmm0_8
  QT::QWidget *v4; // rbx
  double v6; // xmm0_8
  QT::QWidget *v7; // rbx
  void *ptr[3]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 96);
  v2 = *(QT::QWidget **)(a1 + 56);
  vars18 = __readfsqword(0x28u);
  if ( v1 )
  {
    v6 = QT::QString::fromUtf8(
           ptr,
           159,
           "QLabel { image: url(:/IDAG/resources/collapsible/closed.png) no-repeat; } QLabel:hover { image: url(:/IDAG/re"
           "sources/collapsible/closed_hover.png) no-repeat; }");
    QT::QWidget::setStyleSheet(v2, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v7 = *(QT::QWidget **)(a1 + 56);
    QT::QString::fromUtf8(ptr, 4, "Open", v6);
    QT::QWidget::setToolTip(v7, (const QT::QString *)ptr);
  }
  else
  {
    v3 = QT::QString::fromUtf8(
           ptr,
           155,
           "QLabel { image: url(:/IDAG/resources/collapsible/open.png) no-repeat; } QLabel:hover { image: url(:/IDAG/reso"
           "urces/collapsible/open_hover.png) no-repeat; }");
    QT::QWidget::setStyleSheet(v2, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v4 = *(QT::QWidget **)(a1 + 56);
    QT::QString::fromUtf8(ptr, 5, "Close", v3);
    QT::QWidget::setToolTip(v4, (const QT::QString *)ptr);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars18 - __readfsqword(0x28u);
}
