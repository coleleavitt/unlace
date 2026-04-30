__int64 __fastcall sub_4A33A0(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 72LL))(v2, a1);
  if ( !v3 )
    return 0;
  v4 = v3;
  result = 0;
  if ( dword_8C2ED8 >= 0 )
  {
    sub_49FE90(v4, dword_8C2ED8, 0, a2);
    return 1;
  }
  return result;
}
