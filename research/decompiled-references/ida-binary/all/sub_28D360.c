unsigned __int64 __fastcall sub_28D360(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __m128i *v6; // rax
  __m128i v7; // xmm0
  _BYTE v9[8]; // [rsp+8h] [rbp-48h] BYREF
  __m128i v10; // [rsp+10h] [rbp-40h] BYREF
  _QWORD v11[3]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  sub_2DB930(a1, 41, a2, a3, a4, a5);
  *(_BYTE *)(a1 + 2496) = 0;
  *(_QWORD *)(a1 + 2488) = -1;
  v10.m128i_i8[0] = 0;
  *(_QWORD *)a1 = &functions_dirtree_widget_t___vtable;
  *(_QWORD *)(a1 + 16) = functions_dirtree_widget_t___vtable_at__16;
  *(_QWORD *)(a1 + 304) = functions_dirtree_widget_t___vtable_at__304;
  *(_QWORD *)(a1 + 240) = functions_dirtree_widget_t___vtable_at__240;
  v5 = sub_5313F0(unk_8CA9C0);
  if ( v5 )
    sub_537630(v5, 7, &v10);
  v10.m128i_i64[1] = 0;
  v10.m128i_i64[0] = (__int64)sub_28D2D0;
  v11[1] = 0;
  v11[0] = sub_45E0F0;
  v6 = (__m128i *)operator new(0x20u);
  v7 = _mm_load_si128(&v10);
  v6->m128i_i32[0] = 1;
  v6->m128i_i64[1] = (__int64)sub_28D240;
  v6[1] = v7;
  QT::QObject::connectImpl(v9, &qword_8CC800, v11, a1, &v10, v6, 0, 0, &off_87B7E0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v9);
  return v12 - __readfsqword(0x28u);
}
