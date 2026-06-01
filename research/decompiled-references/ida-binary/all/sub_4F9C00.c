__int64 sub_4F9C00()
{
  __int64 v0; // rax
  char v2; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v0 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v0 + 56LL))(v0, &v2);
}
