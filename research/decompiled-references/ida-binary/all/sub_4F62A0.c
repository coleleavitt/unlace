unsigned __int64 __fastcall sub_4F62A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __m128i *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rsi
  _BYTE v11[8]; // [rsp+8h] [rbp-58h] BYREF
  __m128i v12; // [rsp+10h] [rbp-50h] BYREF
  _QWORD v13[3]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  sub_53A8A0(a1, a3, 0);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 16) = forms_ui::dialog_t___vtable_at__16;
  *(_QWORD *)a1 = &forms_ui::dialog_t___vtable;
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, a2);
  *(_QWORD *)(a1 + 56) = v4;
  v5 = v4;
  v12.m128i_i64[1] = 0;
  v12.m128i_i64[0] = (__int64)sub_4F37D0;
  v13[1] = 0;
  v13[0] = &QT::QDialog::finished;
  v6 = (__m128i *)operator new(0x20u);
  v7 = _mm_load_si128(&v12);
  v6->m128i_i32[0] = 1;
  v6[1] = v7;
  v6->m128i_i64[1] = (__int64)sub_4F58C0;
  QT::QObject::connectImpl(v11, a1, v13, v5, &v12, v6, 0, 0, &QT::QDialog::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  v8 = xmmword_8D1E98;
  v13[0] = a1;
  v9 = qword_8D1E90;
  if ( *((_QWORD *)&xmmword_8D1E98 + 1) < (unsigned __int64)(xmmword_8D1E98 + 1) )
  {
    qword_8D1E90 = qvector_reserve(&qword_8D1E90, qword_8D1E90, xmmword_8D1E98 + 1, 8);
    v9 = qword_8D1E90;
    v8 = xmmword_8D1E98;
  }
  *(_QWORD *)(v9 + 8 * v8) = a1;
  *(_QWORD *)&xmmword_8D1E98 = xmmword_8D1E98 + 1;
  return v14 - __readfsqword(0x28u);
}
