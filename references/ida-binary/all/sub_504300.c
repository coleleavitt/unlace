unsigned __int64 __fastcall sub_504300(__int64 a1, __int64 a2)
{
  __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // rax
  __m128i *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int *v17; // rax
  __int64 v19; // [rsp+8h] [rbp-70h] BYREF
  __m128i v20; // [rsp+10h] [rbp-68h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v20.m128i_i64[0] = (__int64)sub_5021E0;
  v20.m128i_i64[1] = 0;
  v21 = sub_54ED60;
  v22 = 0;
  v2 = (__m128i *)operator new(0x20u);
  v3 = _mm_load_si128(&v20);
  v2->m128i_i32[0] = 1;
  v2->m128i_i64[1] = (__int64)sub_4F8A80;
  v2[1] = v3;
  QT::QObject::connectImpl(&v19, a2, &v21, a1, &v20, v2, 0, 0, &off_89E260);
  sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), &v19, v4, v5, v6);
  v9 = *(int **)(a1 + 344);
  if ( !v9 || *v9 > 1 )
    sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v7, v8);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v19);
  v20.m128i_i64[1] = 0;
  v20.m128i_i64[0] = (__int64)&loc_4F8890;
  v22 = 0;
  v21 = sub_54ED70;
  v10 = (__m128i *)operator new(0x20u);
  v11 = _mm_load_si128(&v20);
  v10->m128i_i32[0] = 1;
  v10->m128i_i64[1] = (__int64)sub_4F8930;
  v10[1] = v11;
  QT::QObject::connectImpl(&v19, a2, &v21, a1, &v20, v10, 0, 0, &off_89E260);
  sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), &v19, v12, v13, v14);
  v17 = *(int **)(a1 + 344);
  if ( !v17 || *v17 > 1 )
    sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v15, v16);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v19);
  return v23 - __readfsqword(0x28u);
}
