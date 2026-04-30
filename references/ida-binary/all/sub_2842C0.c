__int64 __fastcall sub_2842C0(__int64 a1, char a2)
{
  int v3; // ebp
  __int64 result; // rax
  int v5; // esi
  __int64 v6; // r8
  int v7; // edi
  __int64 v8; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v10[96]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v11; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v12; // [rsp+C8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_283F90((__int64)&v8, a1);
  v3 = v11 - 1;
  if ( a2 )
  {
    v5 = v11;
    v6 = *(_QWORD *)(a1 + 416);
    v7 = *(_DWORD *)(a1 + 424);
    if ( (v6 == 0)
       + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
       + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
       - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
       - 1 < v7 + (int)v11 )
      v5 = (v6 == 0)
         + -252645135 * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
         + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
         - 252645135 * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
         - 1
         - v7;
    v3 = v5 - 1;
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v10);
  QT::QFont::~QFont((QT::QFont *)v9);
  result = 0;
  if ( v3 >= 0 )
    return (unsigned int)v3;
  return result;
}
