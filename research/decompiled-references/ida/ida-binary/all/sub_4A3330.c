__int64 __fastcall sub_4A3330(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 72LL))(v1, a1);
  sub_49A0C0(*(QT::QAbstractItemView **)(v2 + 2472));
  return 1;
}
