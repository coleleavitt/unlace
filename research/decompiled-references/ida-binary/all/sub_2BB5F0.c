__int64 __fastcall sub_2BB5F0(__int64 a1)
{
  QT::QBasicTimer *v2; // rdi

  v2 = (QT::QBasicTimer *)(a1 + 420);
  *((_BYTE *)v2 - 11) = 0;
  QT::QBasicTimer::stop(v2);
  return sub_2BB510(a1, 10, *(_QWORD *)(a1 + 16));
}
