__int64 __fastcall sub_41F810(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int64 a4)
{
  _QWORD *v4; // rbp
  char v6[8]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v4 = QT::QCoreApplication::self;
  sub_41E850(v6, a1, a2, a3, a4);
  LODWORD(v4) = sub_479FD0(v4, v6);
  QT::QIcon::~QIcon((QT::QIcon *)v6);
  return (unsigned int)v4;
}
