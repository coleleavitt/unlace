_QWORD *__fastcall sub_538360(
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
  _QWORD *v9; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 *v13; // r12
  double v14; // xmm4_8
  double v15; // xmm5_8
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v9 = *(_QWORD **)(a1 + 24);
  if ( v9 )
  {
    v9 = QT::QCoreApplication::self;
    if ( QT::QCoreApplication::self )
    {
      v11 = QT::QCoreApplication::self[2];
      v12 = QT::QCoreApplication::self + 2;
      if ( (*(_BYTE *)(a1 + 60) & 0x10) != 0 )
        v13 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(v11 + 24))(v12);
      else
        v13 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(v11 + 32))(v12);
      v16 = (_QWORD *)sub_537F20(v13, a1, a2, a3, a4, a5, v14, v15, a8, a9);
      v9 = v16;
      if ( v16 )
        sub_535040(v13, v16, v17, v18, *(double *)a2.m128_u64);
    }
  }
  return v9;
}
