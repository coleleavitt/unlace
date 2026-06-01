__int64 __fastcall sub_284860(__int64 a1, int a2)
{
  int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v10[104]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v11; // [rsp+B8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+C8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_283F90((__int64)&v8, a1);
  if ( a2 >= v11
    || (v2 = *(_DWORD *)(a1 + 424) + a2, v2 < 0)
    || (v3 = *(_QWORD *)(a1 + 384),
        v4 = *(_QWORD *)(a1 + 360),
        v2 >= (*(_QWORD *)(a1 + 416) == 0)
            + 0xF0F0F0F0F0F0F0F1LL * ((*(_QWORD *)(a1 + 376) - v4) >> 4)
            + ((*(_QWORD *)(a1 + 416) - v3) >> 3)
            - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
            - 1) )
  {
    v6 = 0;
  }
  else
  {
    v5 = v2 - 0xF0F0F0F0F0F0F0FLL * ((v4 - *(_QWORD *)(a1 + 368)) >> 4);
    if ( v5 >= 0 && v2 == 0xF0F0F0F0F0F0F0FLL * ((v4 - *(_QWORD *)(a1 + 368)) >> 4) )
      v6 = v4 + 272LL * v2;
    else
      v6 = *(_QWORD *)(v3 + 8 * v5);
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v10);
  QT::QFont::~QFont((QT::QFont *)v9);
  return v6;
}
