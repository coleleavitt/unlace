__int64 __fastcall sub_1C8070(QT::QWidget *this, __int64 a2)
{
  QT::QScreen *v2; // rax
  int v3; // rax^4
  int v4; // rdx^4
  int v5; // ebp
  __int64 v6; // rax
  int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v11[64]; // [rsp+10h] [rbp-C8h] BYREF
  int v12; // [rsp+50h] [rbp-88h]
  void *ptr[3]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v14[16]; // [rsp+88h] [rbp-50h] BYREF
  _BYTE v15[16]; // [rsp+98h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v2 = (QT::QScreen *)QT::QGuiApplication::screenAt(a2);
  if ( !v2 )
    return 0;
  v3 = QT::QScreen::availableGeometry(v2) >> 32;
  if ( v4 - v3 == -1 )
    return 0;
  v5 = v4 - v3 + 1;
  QT::QStyleOptionMenuItem::QStyleOptionMenuItem((QT::QStyleOptionMenuItem *)v11);
  QT::QStyleOption::initFrom((QT::QStyleOption *)v11, this);
  v12 = 0;
  QT::QString::assign(ptr, "X", 1);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)&v9, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  v10 = QT::QFontMetrics::size((QT::QFontMetrics *)&v9, 256, (const QT::QString *)ptr, 0, nullptr);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)&v9);
  v6 = QT::QWidget::style(this);
  v7 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64 *, _QWORD))(*(_QWORD *)v6 + 232LL))(
                           v6,
                           7,
                           v11,
                           &v10,
                           0) >> 32;
  QT::QFont::~QFont((QT::QFont *)v15);
  QT::QIcon::~QIcon((QT::QIcon *)v14);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v11);
    return (unsigned int)(v5 / v7);
  }
  else
  {
    QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v11);
    return (unsigned int)(v5 / v7);
  }
}
