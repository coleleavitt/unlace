__int64 __fastcall sub_4F9CA0(QT::QString *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF
  int vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  QT::QFont::QFont((QT::QFont *)&vars0);
  if ( QT::QCoreApplication::self )
  {
    QT::QApplication::font((QT::QApplication *)&vars10);
    v2 = vars0;
    vars0 = vars10;
    vars10 = v2;
    LODWORD(v2) = vars8;
    vars8 = vars18;
    vars18 = v2;
    QT::QFont::~QFont((QT::QFont *)&vars10);
  }
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)&vars10, (const QT::QFont *)&vars0);
  v3 = QT::QFontMetrics::horizontalAdvance((QT::QFontMetrics *)&vars10, a1, -1) * a2;
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)&vars10);
  QT::QFont::~QFont((QT::QFont *)&vars0);
  return v3;
}
