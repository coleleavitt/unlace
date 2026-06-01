_BOOL8 __fastcall sub_4E0FB0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  bool v3; // bl

  v1 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 80LL))(v1, a1);
  v3 = v2 != 0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  return v3;
}
