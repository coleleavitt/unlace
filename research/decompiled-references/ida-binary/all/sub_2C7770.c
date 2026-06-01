unsigned __int64 __fastcall sub_2C7770(
        __int64 a1,
        QT::QPainter *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rax
  __int64 (__fastcall *v15)(__int64, unsigned int *, unsigned int *); // rax
  __int64 v16; // rax
  double v17; // xmm1_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v21; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-30h]

  v13 = *(_QWORD *)a1;
  v23 = __readfsqword(0x28u);
  v15 = *(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(v13 + 776);
  if ( v15 == sub_2B24B0 )
  {
    v21 = sub_524F80(*(_QWORD *)(a1 + 16) + 40LL, 2165563961LL, 0);
    v22 = sub_524F80(*(_QWORD *)(a1 + 16) + 40LL, 2165563962LL, 0);
  }
  else
  {
    v15(a1, &v21, &v22);
  }
  sub_2B8320((__int64)a2, a3, v21, v22);
  v16 = *(_QWORD *)(a4 + 408);
  if ( v16 )
  {
    if ( *(_QWORD *)(v16 + 8) )
    {
      v17 = *(double *)(a4 + 368);
      if ( v17 > 0.0 )
      {
        QT::QPainter::save(a2);
        if ( *(double *)(a4 + 368) != 1.0 )
        {
          QT::QPainter::setRenderHint(a2, 1, 1);
          QT::QPainter::setRenderHint(a2, 4, 1);
        }
        QT::QPainter::setTransform(a2, (const QT::QTransform *)(a4 + 168), 0);
        sub_2C76F0((int *)a1, a2, a4, 1.0, v17, a7, a8, v18, v19, a11, a12);
        QT::QPainter::restore(a2);
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}
