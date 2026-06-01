__int64 __fastcall sub_346400(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD **v10; // rbx
  void *v11; // rdi
  unsigned int v12; // eax
  double v13; // xmm4_8
  double v14; // xmm5_8

  v10 = (_QWORD **)qword_8CEFF0;
  if ( qword_8CEFF0 )
  {
    do
    {
      sub_345730(v10[3]);
      v11 = v10;
      v10 = (_QWORD **)v10[2];
      operator delete(v11, 0x30u);
    }
    while ( v10 );
  }
  qword_8CEFF0 = nullptr;
  qword_8CEFF8 = (__int64)&dword_8CEFE8;
  qword_8CF000 = (__int64)&dword_8CEFE8;
  qword_8CF008 = 0;
  sub_1C76F0((int)"Searching");
  v12 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(a1 + 704));
  sub_329AF0(
    (_QWORD *)qword_8CD7E8,
    0,
    v12,
    (__int64 (__fastcall *)(__int64 **, _QWORD *, __m256i *, __int64))sub_3494C0,
    &qword_8CEFE0,
    a2,
    a3,
    a4,
    a5,
    v13,
    v14,
    a8,
    a9);
  sub_1C78D0();
  return sub_340E20(*(_QWORD *)(a1 + 696), 0xFFFFFFFFFFFFFFFFLL);
}
