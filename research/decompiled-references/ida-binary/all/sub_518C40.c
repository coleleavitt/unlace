__int64 __fastcall sub_518C40(QT::QColor *a1)
{
  __int64 v1; // rax
  _QWORD v3[7]; // [rsp+10h] [rbp-38h] BYREF

  v3[5] = __readfsqword(0x28u);
  v1 = QT::QColor::rgb(a1);
  QT::QColor::QColor(v3, (unsigned int)((v1 & 0x800000) == 0) + 2);
  return v3[0];
}
