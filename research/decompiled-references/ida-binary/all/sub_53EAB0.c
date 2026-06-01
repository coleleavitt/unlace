unsigned __int64 __fastcall sub_53EAB0(
        QT::QMainWindow *this,
        __int64 (__fastcall ***a2)(_QWORD),
        __int64 a3,
        __int64 a4,
        const char *a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  QT::QMetaObject *v13; // rax
  int v14; // r12d
  double v15; // xmm4_8
  double v16; // xmm5_8
  QT::QMetaObject *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h]
  unsigned __int64 v23; // [rsp+18h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  if ( !a2 )
    return sub_53E260((char *)this, *(double *)a6.m128_u64);
  sub_478D00((char *)this + 160, (__int64)a2, *(double *)a6.m128_u64, a3, a4, a5);
  v13 = (QT::QMetaObject *)(**a2)(a2);
  v14 = QT::QMetaObject::indexOfSlot(v13, "form_activate()");
  if ( v14 >= 0 )
  {
    v17 = (QT::QMetaObject *)(**a2)(a2);
    v18 = QT::QMetaObject::method(v17, v14);
    a6 = 0;
    v22 = 0;
    v21 = 0;
    QT::QMetaMethod::invokeImpl(v18, v19, a2, 1, 1, &v21, (char *)&v21 + 8);
  }
  return sub_53E8E0(this, a2, a6, a7, a8, a9, v15, v16, a12, a13);
}
