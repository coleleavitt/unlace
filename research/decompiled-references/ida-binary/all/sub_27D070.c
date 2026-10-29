unsigned __int64 __fastcall sub_27D070(__int64 a1, char *a2, int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r12
  __m128i *v7; // rax
  __m128i v8; // xmm0
  _BYTE v10[8]; // [rsp+8h] [rbp-58h] BYREF
  __m128i v11; // [rsp+10h] [rbp-50h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  sub_202FB0((QT::QWidget *)a1, a2, a3);
  v3 = qword_8CC7D0;
  *(_QWORD *)a1 = &EAView___vtable;
  *(_QWORD *)(a1 + 16) = EAView___vtable_at__16;
  *(_QWORD *)(a1 + 104) = EAView___vtable_at__104;
  v4 = xmmword_8CC7D8;
  *(_QWORD *)(a1 + 40) = EAView___vtable_at__40;
  v5 = *((_QWORD *)&xmmword_8CC7D8 + 1);
  v12[0] = a1;
  *(_QWORD *)(a1 + 1000) = 0;
  *(_DWORD *)(a1 + 1024) = 1065353216;
  *(_OWORD *)(a1 + 1008) = 0;
  if ( v5 < v4 + 1 )
  {
    qword_8CC7D0 = qvector_reserve(&qword_8CC7D0, v3, v4 + 1, 8);
    v3 = qword_8CC7D0;
    v4 = xmmword_8CC7D8;
  }
  *(_QWORD *)(v3 + 8 * v4) = a1;
  *(_QWORD *)&xmmword_8CC7D8 = xmmword_8CC7D8 + 1;
  v6 = sub_414310(&qword_8CC7D0);
  v11 = (__m128i)0x469uLL;
  v12[0] = sub_475680;
  v12[1] = 0;
  v7 = (__m128i *)operator new(0x20u);
  v8 = _mm_load_si128(&v11);
  v7->m128i_i32[0] = 1;
  v7[1] = v8;
  v7->m128i_i64[1] = (__int64)sub_27CFF0;
  QT::QObject::connectImpl(v10, v6, v12, a1, &v11, v7, 0, 0, &off_893BE0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v10);
  return v13 - __readfsqword(0x28u);
}
