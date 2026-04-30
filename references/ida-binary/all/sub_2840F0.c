unsigned __int64 __fastcall sub_2840F0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v6; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v7[16]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v8[96]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v9; // [rsp+B0h] [rbp-28h]
  unsigned __int64 v10; // [rsp+C8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  sub_283F90((__int64)&v6, a1);
  v3 = v9 - 1;
  v4 = *(__int16 *)(a2 + 30);
  if ( v4 <= v9 - 1 )
    v3 = v4;
  if ( v3 < 0 )
    LOWORD(v3) = 0;
  *(_WORD *)(a2 + 30) = v3;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v8);
  QT::QFont::~QFont((QT::QFont *)v7);
  return v10 - __readfsqword(0x28u);
}
