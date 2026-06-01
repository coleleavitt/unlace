__int64 __fastcall sub_311E90(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebp
  int v4; // eax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[3] = __readfsqword(0x28u);
  QT::QFont::QFont((QT::QFont *)v5);
  v1 = sub_4EBE10(v5, 0, *(_QWORD *)(a1 + 168));
  if ( v1 )
  {
    if ( (int)QT::QFont::pointSize((QT::QFont *)v5) > 1 )
    {
      v4 = QT::QFont::pointSize((QT::QFont *)v5);
      QT::QFont::setPointSize((QT::QFont *)v5, v4 - 1);
      sub_47D7A0(QT::QCoreApplication::self, v5, v1);
    }
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  QT::QFont::~QFont((QT::QFont *)v5);
  return v2;
}
