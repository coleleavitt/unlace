unsigned __int64 __fastcall sub_401EC0(QT::QObject *a1, __int64 a2, __int64 a3)
{
  QT::QVBoxLayout *v3; // r12
  int v4; // edx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rax
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __m128i *v16; // rax
  __m128i v17; // xmm0
  __m128i *v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v30; // [rsp+0h] [rbp-110h]
  _QWORD v31[2]; // [rsp+10h] [rbp-100h] BYREF
  _QWORD v32[2]; // [rsp+20h] [rbp-F0h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-E0h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-C0h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-B0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-A0h] BYREF
  _QWORD v38[2]; // [rsp+80h] [rbp-90h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+B0h] [rbp-60h] BYREF
  __m128i v42; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+D8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a3, 0);
  sub_525E40((char *)a1 + 40, off_86A500, 18, "xref_tree_t");
  *((_QWORD *)a1 + 35) = a2;
  *((_QWORD *)a1 + 40) = 0;
  *(_QWORD *)a1 = &xref_tree_t___vtable;
  *((_QWORD *)a1 + 5) = xref_tree_t___vtable_at__40;
  *((_QWORD *)a1 + 2) = xref_tree_t___vtable_at__16;
  *((_DWORD *)a1 + 82) = -1;
  *((_QWORD *)a1 + 44) = 0;
  *((_QWORD *)a1 + 47) = 0;
  *((_DWORD *)a1 + 96) = -1;
  *((_DWORD *)a1 + 98) = 16843009;
  *((_DWORD *)a1 + 102) = 0;
  *((_QWORD *)a1 + 52) = 0;
  *((_QWORD *)a1 + 53) = (char *)a1 + 408;
  *((_QWORD *)a1 + 54) = (char *)a1 + 408;
  *((_QWORD *)a1 + 55) = 0;
  *((_BYTE *)a1 + 448) = 0;
  *(_QWORD *)((char *)a1 + 452) = 0;
  *((_DWORD *)a1 + 115) = 0;
  *((_WORD *)a1 + 232) = 0;
  *((_OWORD *)a1 + 18) = 0;
  *((_OWORD *)a1 + 19) = 0;
  *((_OWORD *)a1 + 21) = 0;
  *(_OWORD *)((char *)a1 + 360) = 0;
  sub_3EFDB0((__int64)a1);
  sub_3F7840(a1);
  (*(void (__fastcall **)(__m128i *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    &v42,
    QT::QCoreApplication::self,
    unk_8CA0C0);
  QT::QWidget::setWindowIcon(a1, (const QT::QIcon *)&v42);
  QT::QIcon::~QIcon((QT::QIcon *)&v42);
  v3 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v3, a1);
  sub_3F4B10(a1);
  sub_3FCBC0(a1, (__int64)v3, v4, v5, v6, v7, v30, (__int64)&v42);
  sub_3FD720(a1, v3);
  sub_3F1A90(a1);
  v12 = sub_414310(a1);
  if ( v12 )
  {
    v31[1] = 0;
    v31[0] = sub_474B70;
    v13 = operator new(0x18u);
    *(_DWORD *)v13 = 1;
    *(_QWORD *)(v13 + 16) = a1;
    *(_QWORD *)(v13 + 8) = sub_3F9600;
    QT::QObject::connectImpl(&v42, v12, v31, a1, 0, v13, 2, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v42.m128i_i64[1] = 0;
    v42.m128i_i64[0] = (__int64)sub_401D70;
    v32[1] = 0;
    v32[0] = sub_474C10;
    v14 = (__m128i *)operator new(0x20u);
    v15 = _mm_load_si128(&v42);
    v14->m128i_i32[0] = 1;
    v14[1] = v15;
    v14->m128i_i64[1] = (__int64)sub_3EEF30;
    QT::QObject::connectImpl(v41, v12, v32, a1, &v42, v14, 2, &unk_5EAD30, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v41);
    v42.m128i_i64[0] = (__int64)sub_401E40;
    v42.m128i_i64[1] = 0;
    v33[0] = sub_474C70;
    v33[1] = 0;
    v16 = (__m128i *)operator new(0x20u);
    v17 = _mm_load_si128(&v42);
    v16->m128i_i32[0] = 1;
    v16->m128i_i64[1] = (__int64)sub_3EEF30;
    v16[1] = v17;
    QT::QObject::connectImpl(v41, v12, v33, a1, &v42, v16, 2, &unk_5EAD30, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v41);
    v42.m128i_i64[0] = (__int64)sub_401EA0;
    v42.m128i_i64[1] = 0;
    v34[0] = sub_474CD0;
    v34[1] = 0;
    v18 = (__m128i *)operator new(0x20u);
    v19 = _mm_load_si128(&v42);
    v18->m128i_i32[0] = 1;
    v18->m128i_i64[1] = (__int64)sub_3EEF30;
    v18[1] = v19;
    QT::QObject::connectImpl(v41, v12, v34, a1, &v42, v18, 2, &unk_5EAD30, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v41);
    v35[1] = 0;
    v35[0] = sub_474D30;
    v20 = operator new(0x18u);
    *(_DWORD *)v20 = 1;
    *(_QWORD *)(v20 + 16) = a1;
    *(_QWORD *)(v20 + 8) = &sub_402A40;
    QT::QObject::connectImpl(&v42, v12, v35, a1, 0, v20, 2, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v36[1] = 0;
    v36[0] = sub_474DA0;
    v21 = operator new(0x18u);
    *(_DWORD *)v21 = 1;
    *(_QWORD *)(v21 + 16) = a1;
    *(_QWORD *)(v21 + 8) = &sub_4029A0;
    QT::QObject::connectImpl(&v42, v12, v36, a1, 0, v21, 2, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v37[1] = 0;
    v37[0] = sub_474E10;
    v22 = operator new(0x18u);
    *(_DWORD *)v22 = 1;
    *(_QWORD *)(v22 + 16) = a1;
    *(_QWORD *)(v22 + 8) = sub_3F9780;
    QT::QObject::connectImpl(&v42, v12, v37, a1, 0, v22, 2, &unk_5EAD30, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v38[1] = 0;
    v38[0] = sub_474E70;
    v23 = operator new(0x18u);
    *(_DWORD *)v23 = 1;
    *(_QWORD *)(v23 + 8) = sub_3F9740;
    *(_QWORD *)(v23 + 16) = a1;
    QT::QObject::connectImpl(&v42, v12, v38, a1, 0, v23, 2, &unk_5EAD20, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v39[1] = 0;
    v39[0] = sub_474EF0;
    v24 = operator new(0x18u);
    *(_DWORD *)v24 = 1;
    *(_QWORD *)(v24 + 16) = a1;
    *(_QWORD *)(v24 + 8) = sub_3F77E0;
    QT::QObject::connectImpl(&v42, v12, v39, a1, 0, v24, 2, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v40[1] = 0;
    v40[0] = sub_474F80;
    v25 = operator new(0x18u);
    *(_DWORD *)v25 = 1;
    *(_QWORD *)(v25 + 16) = a1;
    *(_QWORD *)(v25 + 8) = sub_3F77A0;
    QT::QObject::connectImpl(&v42, v12, v40, a1, 0, v25, 2, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v41[1] = 0;
    v41[0] = sub_475010;
    v26 = operator new(0x18u);
    *(_QWORD *)(v26 + 8) = sub_3F9700;
    *(_DWORD *)v26 = 1;
    *(_QWORD *)(v26 + 16) = a1;
    QT::QObject::connectImpl(&v42, v12, v41, a1, 0, v26, 2, &unk_5EAD10, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v42);
    v42.m128i_i64[1] = 0;
    v42.m128i_i64[0] = (__int64)sub_475090;
    v27 = operator new(0x18u);
    *(_DWORD *)v27 = 1;
    *(_QWORD *)(v27 + 8) = sub_3F9740;
    *(_QWORD *)(v27 + 16) = a1;
    QT::QObject::connectImpl(v41, v12, &v42, a1, 0, v27, 2, &unk_5EAD20, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v41);
  }
  sub_400520((__int64)a1, *((_QWORD *)a1 + 35), v8, v9, v10, v11);
  sub_3F39C0((__int64)a1);
  *((_BYTE *)a1 + 465) = 1;
  sub_4EBBA0(a1);
  sub_3FC5F0(a1, a1);
  v28 = operator new(0x18u);
  *(_DWORD *)v28 = 1;
  *(_QWORD *)(v28 + 16) = a1;
  *(_QWORD *)(v28 + 8) = sub_3EE5B0;
  QT::QTimer::singleShotImpl(0, 0, 0);
  return v43 - __readfsqword(0x28u);
}
