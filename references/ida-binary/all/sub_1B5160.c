unsigned __int64 __fastcall sub_1B5160(__int64 a1, double a2)
{
  int v3; // eax
  int v4; // eax

  v3 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 256) + 160LL));
  *(_DWORD *)(a1 + 336) = v3;
  sub_1B4910(a1, v3, (__int64)&unk_5DFF40, 0x31u, 1, *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 256) + 168LL), a2);
  v4 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 256) + 136LL));
  *(_DWORD *)(a1 + 340) = v4;
  return sub_1B4910(
           a1,
           v4,
           (__int64)&unk_5DFDE0,
           0x2Au,
           0,
           *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 256) + 144LL),
           a2);
}
