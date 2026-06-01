__int64 __fastcall sub_2844B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // r12d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v9; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-F0h] BYREF
  _BYTE v11[64]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v13[120]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v14; // [rsp+D8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( (unsigned int)(a2 - 1) > 1 )
  {
    if ( !under_debugger )
      interr(40579, a2, a3, a4, a5);
    BUG();
  }
  v5 = a2;
  sub_283F90((__int64)v11, a1);
  v6 = sub_2836D0(a1 + 184, &v9, &v10, (__int64)v11, 0);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL);
    if ( v5 == 1 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, v7);
    else
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 80LL))(v10, v7);
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v13);
  QT::QFont::~QFont((QT::QFont *)v12);
  return v6;
}
