__int64 __fastcall sub_4AF930(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Color; // [rsp+10h] [rbp-48h]

  v6 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, 0);
  Color = QT::QColorDialog::getColor(a1, a2, a3, a4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return Color;
}
