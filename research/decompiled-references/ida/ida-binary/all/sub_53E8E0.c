unsigned __int64 __fastcall sub_53E8E0(
        QT::QMainWindow *this,
        __int64 (__fastcall ***a2)(_QWORD),
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 (__fastcall **v10)(_QWORD); // rax
  QT::QMetaObject *v12; // rax
  int v13; // eax
  int v14; // ebp
  __int64 (__fastcall **v15)(_QWORD); // rax
  __int64 *v16; // r15
  QT::QMetaObject *v17; // rax
  int v18; // esi
  char *v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  QT::QMenu *v22; // rax
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  const char *v28; // r8
  __int64 *v30; // [rsp+8h] [rbp-F0h] BYREF
  __int64 *v31; // [rsp+10h] [rbp-E8h] BYREF
  __int64 *v32; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+20h] [rbp-D8h] BYREF
  int v34; // [rsp+28h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-C8h] BYREF
  int v36; // [rsp+38h] [rbp-C0h]
  __int64 v37; // [rsp+40h] [rbp-B8h] BYREF
  int v38; // [rsp+48h] [rbp-B0h]
  _QWORD v39[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v40[9]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v10 = *a2;
  v41 = __readfsqword(0x28u);
  v12 = (QT::QMetaObject *)(*v10)(a2);
  v13 = QT::QMetaObject::indexOfSlot(v12, "get_custom_menus(QObject**,QObject**,QObject**)");
  if ( v13 >= 0 )
  {
    v14 = v13;
    v15 = *a2;
    v33 = 0;
    v34 = 0;
    v16 = &v33;
    v35 = 0;
    v36 = 1;
    v37 = 0;
    v38 = 2;
    v17 = (QT::QMetaObject *)(*v15)(a2);
    v18 = v14;
    v19 = (char *)this + 192;
    v20 = QT::QMetaObject::method(v17, v18);
    v30 = &v33;
    v39[0] = 0;
    v32 = &v37;
    v31 = &v35;
    v39[1] = &v30;
    v39[2] = &v31;
    v39[3] = &v32;
    v40[1] = "QObject **";
    v40[2] = "QObject **";
    v40[3] = "QObject **";
    v40[5] = &unk_8BE660;
    v40[6] = &unk_8BE660;
    v40[7] = &unk_8BE660;
    v40[0] = 0;
    v40[4] = 0;
    QT::QMetaMethod::invokeImpl(v20, v21, a2, 1, 4, v39, v40);
    do
    {
      v22 = (QT::QMenu *)QT::QMetaObject::cast(
                           (QT::QMetaObject *)&QT::QMenu::staticMetaObject,
                           (const QT::QObject *)*v16);
      v25 = (__int64)v22;
      if ( v22 )
      {
        sub_53E780(this, *((_DWORD *)v16 + 2), v22, a3, a4, a5, a6, v23, v24, a9, a10);
        sub_478D00(v19, v25, *(double *)a3.m128_u64, v26, v27, v28);
      }
      v19 += 32;
      v16 += 2;
    }
    while ( v19 != (char *)this + 288 );
  }
  return v41 - __readfsqword(0x28u);
}
