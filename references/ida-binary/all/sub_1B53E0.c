__int64 __fastcall sub_1B53E0(__int64 a1, QT::QWidget *a2, const char *a3, __int64 a4)
{
  const QT::QPalette *v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  _BYTE v10[8]; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v11[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v12[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !strcmp(a3, "color") || !strcmp(a3, "background_color") )
  {
    v6 = (const QT::QPalette *)QT::QWidget::palette(a2);
    QT::QPalette::QPalette((QT::QPalette *)v11, v6);
    v7 = strcmp(a3, "color") != 0 ? 0xA : 0;
    QT::QBrush::QBrush(v10, a4, 1);
    QT::QPalette::setBrush(v11, 5, v7, v10);
    QT::QBrush::~QBrush((QT::QBrush *)v10);
    QT::QWidget::setPalette(a2, (const QT::QPalette *)v11);
    QT::QPalette::~QPalette((QT::QPalette *)v11);
  }
  else
  {
    QT::QColor::operator QT::QVariant(v12, a4);
    QT::QObject::doSetProperty(a2, a3, (const QT::QVariant *)v12, (QT::QVariant *)v12);
    QT::QVariant::~QVariant((QT::QVariant *)v12);
  }
  v8 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, a2);
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 664LL))(v8);
  else
    return v13 - __readfsqword(0x28u);
}
