__int64 __fastcall sub_4ECDE0(QT::QWidget *a1, __int64 a2, double a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  _QWORD *v8; // [rsp+8h] [rbp-C0h]
  _BYTE v9[16]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v10[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v12[6]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v13[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp-40h]

  v3 = (unsigned int)a1;
  v14 = __readfsqword(0x28u);
  QT::QFont::QFont((QT::QFont *)v9);
  QT::QFont::QFont((QT::QFont *)v10);
  v4 = sub_4EBE10((__int64)v9, v10, a2, a3);
  v5 = v4;
  if ( v4 )
  {
    sub_4EC870((QT::QFontDialog *)v12, v4, (const QT::QFont *)v9, (const QT::QFont *)v10, a1);
    v6 = QT::QDialog::exec((QT::QDialog *)v12);
    LOBYTE(v3) = v6 == 1;
    if ( v6 == 1 )
    {
      v8 = QT::QCoreApplication::self;
      QT::QFontDialog::currentFont((QT::QFontDialog *)v11);
      sub_47D7A0((__int64)v8, (const QT::QFont *)v11, v5);
      QT::QFont::~QFont((QT::QFont *)v11);
    }
    v12[0] = &font_picker_t___vtable;
    v12[2] = font_picker_t___vtable_at__16;
    QT::QFont::~QFont((QT::QFont *)v13);
    QT::QFontDialog::~QFontDialog((QT::QFontDialog *)v12);
  }
  else
  {
    v3 = 0;
  }
  QT::QFont::~QFont((QT::QFont *)v10);
  QT::QFont::~QFont((QT::QFont *)v9);
  return v3;
}
