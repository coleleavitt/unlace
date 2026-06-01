unsigned __int64 __fastcall sub_4D3090(QT::QWidget *this, __int64 a2, char a3)
{
  __int64 v4; // rdi
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( (a3 & 2) != 0 )
  {
    QT::QWidget::windowIcon((QT::QWidget *)ptr);
    QT::QWidget::setWindowIcon(this, (const QT::QIcon *)ptr);
    QT::QIcon::~QIcon((QT::QIcon *)ptr);
  }
  if ( (a3 & 1) != 0 )
  {
    QT::QWidget::windowTitle((QT::QWidget *)ptr);
    QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  v4 = sub_4CD420(this, 0);
  if ( v4 )
    return sub_4D2F60(v4);
  else
    return v7 - __readfsqword(0x28u);
}
