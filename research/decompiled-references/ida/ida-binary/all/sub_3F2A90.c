unsigned __int64 __fastcall sub_3F2A90(__int64 a1)
{
  char isValid; // dl
  char v2; // al
  unsigned __int64 v4; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v5[24]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a1 )
  {
    (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(v5, a1, 257);
    v4 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    isValid = QT::QMetaType::isValid((QT::QMetaType *)&v4);
    v2 = 0;
    if ( isValid )
    {
      LODWORD(v4) = QT::QVariant::toInt((QT::QVariant *)v5, nullptr);
      v2 = 1;
    }
    BYTE4(v4) = v2;
    QT::QVariant::~QVariant((QT::QVariant *)v5);
  }
  else
  {
    BYTE4(v4) = 0;
  }
  return v4;
}
