unsigned __int64 __fastcall sub_340130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v12[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v6 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(a5), 8), a2);
  v12[1] = v7;
  v12[0] = v6;
  v8 = sub_340090(a1, a3);
  v11[1] = v9;
  v11[0] = v8;
  QT::QPainter::fillRect(a2, v11, v12);
  return v13 - __readfsqword(0x28u);
}
