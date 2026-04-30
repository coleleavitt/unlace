unsigned __int64 __fastcall sub_1B4C50(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  _BOOL4 v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // eax
  QT::QAbstractButton *v6; // rbx
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( a2 > 0x12 )
  {
    v2 = 0;
    v3 = 0;
  }
  else
  {
    v2 = dword_5DFD80[a2];
    v3 = a2 - 7 <= 6;
  }
  v4 = v3;
  v5 = sub_340F90(*(_QWORD *)(a1 + 288), v3, v2);
  v6 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 256) + 208LL);
  QT::QColor::fromRgba((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v5), 8), v4);
  sub_4AF280(v6);
  return v8 - __readfsqword(0x28u);
}
