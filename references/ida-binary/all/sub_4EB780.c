unsigned __int64 __fastcall sub_4EB780(QT::QFontDialog *this, QT::QAbstractButton *a2)
{
  QT::QDialogButtonBox *Child_helper; // rax
  int v3; // eax
  __int64 v5; // r13
  _QWORD *v6; // r12
  _BYTE v7[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  Child_helper = (QT::QDialogButtonBox *)QT::qt_qFindChild_helper(
                                           this,
                                           0,
                                           0,
                                           &QT::QDialogButtonBox::staticMetaObject,
                                           1);
  if ( !Child_helper )
    return v8 - __readfsqword(0x28u);
  v3 = QT::QDialogButtonBox::standardButton(Child_helper, a2);
  if ( v3 == 0x2000000 )
  {
    v5 = *((_QWORD *)this + 5);
    v6 = QT::QCoreApplication::self;
    QT::QFontDialog::currentFont((QT::QFontDialog *)v7);
    sub_47D7A0((__int64)v6, (const QT::QFont *)v7, v5);
    QT::QFont::~QFont((QT::QFont *)v7);
    return v8 - __readfsqword(0x28u);
  }
  if ( v3 != 0x4000000 )
    return v8 - __readfsqword(0x28u);
  return QT::QFontDialog::setCurrentFont(this, (QT::QFontDialog *)((char *)this + 48));
}
