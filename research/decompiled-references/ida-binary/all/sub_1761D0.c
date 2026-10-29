unsigned __int64 __fastcall sub_1761D0(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 (__fastcall *v4)(__int64, _DWORD *, __int64, __int64); // rax
  double v5; // xmm0_8
  _BYTE v8[16]; // [rsp+8h] [rbp-F8h] BYREF
  _OWORD v9[4]; // [rsp+18h] [rbp-E8h] BYREF
  _BYTE v10[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v11[40]; // [rsp+68h] [rbp-98h] BYREF
  double x; // [rsp+90h] [rbp-70h]
  unsigned __int64 v13; // [rsp+C0h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v3 = a1[2];
  memset(v9, 0, sizeof(v9));
  QT::QFont::QFont((QT::QFont *)v10);
  QT::QFont::QFont((QT::QFont *)v8);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v11, (const QT::QFont *)v8);
  QT::QFont::~QFont((QT::QFont *)v8);
  sub_1C8200(v9, v3, 1.0);
  v4 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*a1 + 576LL);
  if ( v4 == sub_173180 )
  {
    if ( a2 )
    {
      v5 = round(x);
      *a2 = 2;
      a2[1] = (int)(v5 + 1.0);
    }
  }
  else
  {
    v4((__int64)a1, a2, a3, (__int64)v9);
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v11);
  QT::QFont::~QFont((QT::QFont *)v10);
  return v13 - __readfsqword(0x28u);
}
