__int64 __fastcall database_persistent_t__::vfunc_10(__int64 a1, const QT::QString *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rsi
  unsigned int v8; // ebx
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  void *v12; // [rsp+20h] [rbp-38h] BYREF
  void *v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 24);
  v14 = __readfsqword(0x28u);
  v11 = v3;
  v10 = v2;
  if ( v2.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v2.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)&v10, a2);
  QT::QString::toUtf8_helper((QT::QString *)&v12, (const QT::QString *)&v10);
  v7 = v13;
  if ( !v13 )
    v7 = &QT::QByteArray::_empty;
  v8 = netnode_hashval_long(*(_QWORD *)(a1 + 32), v7, 72, v4, v5, v6, v10.m128i_i64[0], v10.m128i_i64[1], v11);
  sub_17F470(&v12);
  sub_16D970((void **)&v10);
  return v8;
}
