unsigned __int64 __fastcall sub_1DD8D0(QT::QDockWidget **a1)
{
  int v1; // ebp
  QT::QDockWidget *v2; // rdx
  int v3; // eax
  __int64 v5; // rax
  _BYTE v6[8]; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v7[16]; // [rsp+10h] [rbp-78h] BYREF
  int v8; // [rsp+20h] [rbp-68h]
  int v9; // [rsp+24h] [rbp-64h]
  int v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+2Ch] [rbp-5Ch]
  unsigned __int64 v12; // [rsp+68h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  QT::QWidget::paintEvent();
  v1 = QT::QDockWidget::features(a1[5]) & 8;
  QT::QPainter::QPainter((QT::QPainter *)v6, (QT::QPaintDevice *)(a1 + 2));
  v2 = a1[4];
  if ( v1 )
    v3 = *((_DWORD *)v2 + 8) + 1 - *((_DWORD *)v2 + 6);
  else
    v3 = *((_DWORD *)v2 + 7) + 1 - *((_DWORD *)v2 + 5);
  if ( v3 )
  {
    QT::QStyleOptionToolBar::QStyleOptionToolBar((QT::QStyleOptionToolBar *)v7);
    sub_1DD460((QT::QWidget *)a1, (__int64)v7);
    if ( v8 <= v10 && v9 <= v11 )
    {
      v5 = QT::QWidget::style((QT::QWidget *)a1);
      (*(void (__fastcall **)(__int64, __int64, _BYTE *, _BYTE *, QT::QDockWidget **))(*(_QWORD *)v5 + 176LL))(
        v5,
        36,
        v7,
        v6,
        a1);
    }
    QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v7);
  }
  QT::QPainter::~QPainter((QT::QPainter *)v6);
  return v12 - __readfsqword(0x28u);
}
