__int64 __fastcall sub_38B880(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD v4[9]; // [rsp+0h] [rbp-48h] BYREF

  v4[5] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 24LL))(v4, a2, 0, 256);
  v2 = (int)QT::QVariant::toInt((QT::QVariant *)v4, nullptr);
  QT::QVariant::~QVariant((QT::QVariant *)v4);
  return *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v2);
}
