unsigned __int64 __fastcall sub_39BBB0(
        _QWORD *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 v12; // rax
  int v14; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-C0h]
  __int64 v16; // [rsp+10h] [rbp-B8h]
  _BYTE v17[136]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v18; // [rsp+A8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  sub_532F10(v17, a1);
  if ( (unsigned int)sub_39B950(a1, (__m128i *)(a2 + 40), nullptr, a3, a4, a5, a6, v10, v11, a9, a10) )
  {
    v12 = *QT::QCoreApplication::self;
    v14 = 1;
    v15 = a2;
    v16 = 0;
    (*(void (__fastcall **)(_QWORD *, _BYTE *, int *))(v12 + 184))(QT::QCoreApplication::self, v17, &v14);
  }
  sub_531E50(v17);
  return v18 - __readfsqword(0x28u);
}
