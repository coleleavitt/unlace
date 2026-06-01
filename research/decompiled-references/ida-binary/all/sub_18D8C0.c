__int64 __fastcall sub_18D8C0(__int64 a1)
{
  char isChecked; // al
  int v2; // ebx
  char v3; // dl
  int v4; // eax
  int v5; // ebx
  int v6; // ebx

  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 80LL));
  v2 = -(isChecked == 0);
  LOWORD(v2) = isChecked == 0 ? 257 : 769;
  v3 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 88LL));
  v4 = v2;
  if ( !v3 )
  {
    LOBYTE(v4) = v2 | 0x80;
    v2 = v4;
  }
  v5 = ((unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 96LL)) == 0
      ? 4
      : 2)
     | v2;
  v6 = ((unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 112LL)) == 0
      ? 16
      : 8)
     | v5;
  return v6
       | ((unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 104LL)) == 0
        ? 64
        : 32);
}
