__int64 sub_191800()
{
  _QWORD *v0; // rax
  QT::QScrollArea *v2; // rbx

  if ( qword_8CABB8 )
  {
    v0 = (_QWORD *)sub_4CF3F0(qword_8CABB8);
    if ( v0 )
      (*(void (__fastcall **)(_QWORD *, bool))(*v0 + 104LL))(v0, !(*(_BYTE *)(v0[4] + 9LL) >> 7));
    return 1;
  }
  else
  {
    v2 = (QT::QScrollArea *)operator new(0x28u);
    sub_1916B0(v2, nullptr);
    sub_2DE3A0(v2, 553910276, 0);
    return 1;
  }
}
