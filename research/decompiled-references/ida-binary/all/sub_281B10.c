unsigned __int64 __fastcall sub_281B10(QT::QWidget *this, QT::QEvent *a2)
{
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  QT::QWidget::changeEvent(this, a2);
  if ( *((_WORD *)a2 + 4) == 89 )
  {
    QT::QCoreApplication::translate(
      (QT::QCoreApplication *)ptr,
      "EULADialog",
      "Hex-Rays End User License Agreement",
      nullptr,
      -1);
    QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v4 - __readfsqword(0x28u);
}
