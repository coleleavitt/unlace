__int64 __fastcall sub_42D280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rcx

  *(_DWORD *)(a2 + 64) |= 0x400u;
  v7 = QT::QCoreApplication::self;
  *(_DWORD *)(a2 + 136) &= ~1u;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(v7[2] + 176LL))(v7 + 2, a3, a4, 1);
}
