__int64 __fastcall sub_53C630(__int64 a1, const char *a2)
{
  unsigned int v2; // ebx
  bool v4; // [rsp+Fh] [rbp-49h] BYREF
  _BYTE v5[40]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QObject::property((QT::QObject *)v5, a2);
  v4 = 0;
  v2 = QT::QVariant::toInt((QT::QVariant *)v5, &v4);
  if ( !v4 )
    v2 = -1;
  QT::QVariant::~QVariant((QT::QVariant *)v5);
  return v2;
}
