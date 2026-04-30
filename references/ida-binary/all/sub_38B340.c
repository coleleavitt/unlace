unsigned __int64 __fastcall sub_38B340(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rbx
  _BYTE v5[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 64) == 16777235;
  v6 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 80);
  (*(void (__fastcall **)(_BYTE *, __int64, bool, _QWORD))(*(_QWORD *)v3 + 680LL))(v5, v3, !v2, 0);
  QT::QAbstractItemView::setCurrentIndex(v3, v5);
  return v6 - __readfsqword(0x28u);
}
