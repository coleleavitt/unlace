_QWORD *__fastcall sub_2DCBE0(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  int v3; // ecx

  result = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    v2 = QT::QCoreApplication::self[13];
    if ( v2 && (*(_BYTE *)(v2 + 114) & 8) != 0 && (*(_BYTE *)(v2 + 92) & 8) != 0 )
      return (_QWORD *)sub_493BC0();
    v3 = *(_DWORD *)(a1 + 2212);
    if ( v3 < 0 )
      return (_QWORD *)sub_493BC0();
    else
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64, __int64))(QT::QCoreApplication::self[2] + 176LL))(
                         QT::QCoreApplication::self + 2,
                         (unsigned __int64)((v3 & 0x40) == 0) << v3,
                         (unsigned __int64)((v3 & 0x40) != 0) << v3,
                         1);
  }
  return result;
}
