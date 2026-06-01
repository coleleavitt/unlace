_BOOL8 __fastcall sub_2845C0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  _BOOL4 v6; // ebx
  _BYTE v8[64]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v10[120]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v11; // [rsp+C8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_283F90((__int64)v8, a1);
  v6 = sub_2836D0(a1 + 184, a2, a3, (__int64)v8, a4);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v10);
  QT::QFont::~QFont((QT::QFont *)v9);
  return v6;
}
