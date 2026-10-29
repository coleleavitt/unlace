unsigned __int64 __fastcall sub_4AF3C0(QT::QAbstractButton *this, const QT::QString *a2, int a3)
{
  int v3; // r14d
  int v4; // eax
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v7[8]; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *((_DWORD *)this + 20) = a3;
  if ( a2 )
  {
    QT::QAbstractButton::setText(this, a2);
    a3 = *((_DWORD *)this + 20);
  }
  if ( (a3 & 2) != 0 )
  {
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)&v6, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    QT::QString::fromUtf8(ptr, 7, "DEFAULT");
    v3 = QT::QFontMetrics::horizontalAdvance((QT::QFontMetrics *)&v6, (const QT::QString *)ptr, -1);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v7, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    v4 = QT::QFontMetrics::height((QT::QFontMetrics *)v7);
    QT::QWidget::setMinimumWidth(this, v3 + v4 + 40);
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v7);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)&v6);
    sub_4AF1B0(this);
  }
  QT::QObject::connect(ptr, this, "2clicked()", this, "1on_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v9 - __readfsqword(0x28u);
}
