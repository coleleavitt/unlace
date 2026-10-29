char __fastcall sub_3A2470(__int64 a1)
{
  int v1; // ebx
  char result; // al
  char v3; // [rsp+Fh] [rbp-9h]

  v1 = *(_DWORD *)(a1 + 2080);
  result = (v1 >= 0) & (auto_is_ok() ^ 1);
  if ( result )
  {
    v3 = result;
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64, __int64))(QT::QCoreApplication::self[2] + 176LL))(
      QT::QCoreApplication::self + 2,
      (unsigned __int64)((v1 & 0x40) == 0) << v1,
      (unsigned __int64)((v1 & 0x40) != 0) << v1,
      1);
    return v3;
  }
  return result;
}
