unsigned __int64 __fastcall sub_4B95D0(
        _QWORD *a1,
        __int64 *a2,
        QT::QWidget *a3,
        int *a4,
        __int64 a5,
        __int64 *a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v18; // r14
  QT::QWidget *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  double v22; // xmm4_8
  double v23; // xmm5_8
  bool v24; // r14
  QT::QWidget *v25; // rax
  QT::QWidget *v26; // rsi
  QT::QWidget *v27; // rax
  double v28; // xmm4_8
  double v29; // xmm5_8
  QT::QWidget *v30; // rax
  QT::QWidget *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v35; // rax
  int v37; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v38; // [rsp+18h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v18 = sub_47A690((__int64)QT::QCoreApplication::self);
  v19 = (QT::QWidget *)QT::QWidget::window(a3);
  v24 = v18 == (_QWORD)a3;
  if ( (unsigned __int8)sub_4B8D00((__int64)a4, v19) != 1 && v24 )
  {
    v27 = (QT::QWidget *)(*(__int64 (__fastcall **)(_QWORD *, QT::QWidget *, __int64, __int64, __int64 *))(*QT::QCoreApplication::self + 224LL))(
                           QT::QCoreApplication::self,
                           v19,
                           v20,
                           v21,
                           a6);
    QT::QWidget::showMaximized(v27);
    v37 = 0;
    v30 = sub_4B8F00(a1, (char *)&v37, a4, a5, a6, a7, a8, a9, a10, v28, v29, a13, a14);
    v31 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_86E200, v30);
    sub_4C6020(a3, v31);
  }
  else
  {
    v37 = 0;
    v25 = sub_4B8F00(a1, (char *)&v37, a4, a5, a6, a7, a8, a9, a10, v22, v23, a13, a14);
    v26 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_86E200, v25);
    sub_4C6020(a3, v26);
    if ( v37 <= 0 && !v24 )
    {
      if ( a3 )
        (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)a3 + 32LL))(a3);
      return v38 - __readfsqword(0x28u);
    }
  }
  v32 = a2[1];
  v33 = *a2;
  if ( a2[2] < (unsigned __int64)(v32 + 1) )
  {
    v35 = qvector_reserve(a2, v33, v32 + 1, 8);
    *a2 = v35;
    v33 = v35;
    v32 = a2[1];
  }
  *(_QWORD *)(v33 + 8 * v32) = a3;
  ++a2[1];
  return v38 - __readfsqword(0x28u);
}
