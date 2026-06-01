unsigned __int64 __fastcall sub_358190(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  bool v9; // bp
  __int64 v10; // rax
  __int64 v11; // rsi
  const char *v13; // [rsp+8h] [rbp-40h] BYREF
  __m128i si128; // [rsp+10h] [rbp-38h] BYREF
  int v15; // [rsp+20h] [rbp-28h]
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v9 = 0;
  v10 = *(_QWORD *)(a1 + 56);
  v16 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v10 + 920);
  if ( (*(_BYTE *)(*(_QWORD *)(v11 + 32) + 8LL) & 1) == 0 )
  {
    v15 = 4;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
    if ( (unsigned __int8)sub_357F80(
                            &v13,
                            v11,
                            (__int128 *)si128.m128i_i8,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9) )
      v9 = v13 != nullptr;
    v10 = *(_QWORD *)(a1 + 56);
  }
  QT::QWidget::setEnabled(*(QT::QWidget **)(v10 + 936), v9);
  QT::QWidget::setEnabled(
    *(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 928LL),
    (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 936LL) + 32LL) + 8LL) & 1) == 0);
  return v16 - __readfsqword(0x28u);
}
