__int64 __fastcall sub_3F34E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  QT::QWidget::showEvent(a1, a2);
  sub_3F15A0(a1);
  ++*(_DWORD *)(a1 + 452);
  v2 = operator new(0x20u);
  *(_DWORD *)v2 = 1;
  *(_QWORD *)(v2 + 16) = a1;
  *(_QWORD *)(v2 + 24) = a1 + 452;
  *(_QWORD *)(v2 + 8) = sub_3EE920;
  return QT::QTimer::singleShotImpl(0, 0, a1);
}
