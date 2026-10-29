__int64 __fastcall database_persistent_t__::vfunc_12(__int64 a1, const QT::QString *a2, QT::QByteArray *a3)
{
  __m128i v3; // xmm0
  __int64 v5; // rdx
  void *v6; // rsi
  int v7; // r13d
  unsigned int v8; // r15d
  __m128i v10; // xmm0
  __int64 v11; // r12
  void *v12; // rsi
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h]
  void *v16; // [rsp+30h] [rbp-58h] BYREF
  void *v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v18 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 24);
  v14 = v3;
  v15 = v5;
  if ( v3.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v3.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)&v14, a2);
  QT::QString::toUtf8_helper((QT::QString *)&v16, (const QT::QString *)&v14);
  v6 = v17;
  if ( !v17 )
    v6 = &QT::QByteArray::_empty;
  v7 = netnode_hashval(*(_QWORD *)(a1 + 32), v6, 0, 0, 72);
  v8 = v7;
  sub_17F470(&v16);
  sub_16D970((void **)&v14);
  if ( v7 >= 0 && (QT::QByteArray::resize(a3, v7), v7) )
  {
    if ( !*(_QWORD *)a3 || **(int **)a3 > 1 )
      QT::QByteArray::reallocData(a3, *((_QWORD *)a3 + 2), 1);
    v10 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v11 = *((_QWORD *)a3 + 1);
    v15 = *(_QWORD *)(a1 + 24);
    v14 = v10;
    if ( v10.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v10.m128i_i64[0], 1u);
    QT::QString::append((QT::QString *)&v14, a2);
    QT::QString::toUtf8_helper((QT::QString *)&v16, (const QT::QString *)&v14);
    v12 = v17;
    if ( !v17 )
      v12 = &QT::QByteArray::_empty;
    netnode_hashval(*(_QWORD *)(a1 + 32), v12, v11, v7, 72);
    sub_17F470(&v16);
    sub_16D970((void **)&v14);
  }
  else
  {
    return 0;
  }
  return v8;
}
