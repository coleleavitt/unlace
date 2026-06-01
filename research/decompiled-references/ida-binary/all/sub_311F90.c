__int64 __fastcall sub_311F90(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebp
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[3] = __readfsqword(0x28u);
  QT::QFont::QFont((QT::QFont *)v4);
  v1 = sub_4EBE10(v4, 0, *(_QWORD *)(a1 + 168));
  if ( v1 )
  {
    QT::QFont::setPointSize((QT::QFont *)v4, 10);
    sub_47D7A0(QT::QCoreApplication::self, v4, v1);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  QT::QFont::~QFont((QT::QFont *)v4);
  return v2;
}
