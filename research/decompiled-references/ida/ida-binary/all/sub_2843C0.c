__int64 __fastcall sub_2843C0(__int64 a1, int a2)
{
  int v4; // esi
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v9[96]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v10; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v11; // [rsp+C8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_283F90((__int64)&v7, a1);
  v4 = *(_DWORD *)(a1 + 424);
  v5 = (*(_QWORD *)(a1 + 416) == 0)
     + -252645135 * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
     + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
     - 252645135 * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
     - 1
     - v4;
  if ( (*(_QWORD *)(a1 + 416) == 0)
     + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
     + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
     - 1 >= v4 + (int)v10 )
    v5 = v10;
  if ( a2 >= v5 )
    a2 = v5 - 1;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v9);
  QT::QFont::~QFont((QT::QFont *)v8);
  result = 0;
  if ( a2 >= 0 )
    return (unsigned int)a2;
  return result;
}
