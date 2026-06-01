__int64 __fastcall sub_3F2B40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  unsigned __int8 isChecked; // al
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v6[5] = __readfsqword(0x28u);
  v2 = sub_3F27F0(a1, a2);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v2 + 16LL))(v6, v2, 257);
    v3 = 0;
    if ( !(unsigned int)QT::QVariant::toInt((QT::QVariant *)v6, nullptr) )
    {
      isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 264));
      sub_192AA0(0, *(_QWORD *)(a1 + 280), -1, isChecked);
      v3 = 1;
    }
    QT::QVariant::~QVariant((QT::QVariant *)v6);
  }
  else
  {
    return 0;
  }
  return v3;
}
