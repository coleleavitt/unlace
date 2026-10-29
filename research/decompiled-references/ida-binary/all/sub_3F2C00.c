__int64 __fastcall sub_3F2C00(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  QT::QStandardItem *v3; // rax
  __int64 v4; // rax
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v6[5] = __readfsqword(0x28u);
  v3 = (QT::QStandardItem *)sub_3F27F0(a1, a2);
  if ( v3 && (v4 = QT::QStandardItem::parent(v3)) != 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v6, v4, 257);
    LOBYTE(v2) = (unsigned int)QT::QVariant::toInt((QT::QVariant *)v6, nullptr) == 0;
    QT::QVariant::~QVariant((QT::QVariant *)v6);
  }
  else
  {
    return 0;
  }
  return v2;
}
