_BOOL8 __fastcall database_persistent_t__::vfunc_9(__int64 a1, const QT::QString *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  void *v4; // rsi
  __int64 v5; // rbx
  __m128i v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  void *v9; // [rsp+20h] [rbp-38h] BYREF
  void *v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 24);
  v11 = __readfsqword(0x28u);
  v8 = v3;
  v7 = v2;
  if ( v2.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v2.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)&v7, a2);
  QT::QString::toUtf8_helper((QT::QString *)&v9, (const QT::QString *)&v7);
  v4 = v10;
  if ( !v10 )
    v4 = &QT::QByteArray::_empty;
  v5 = netnode_hashval(*(_QWORD *)(a1 + 32), v4, 0, 0, 72);
  sub_17F470(&v9);
  sub_16D970((void **)&v7);
  return v5 >= 0;
}
