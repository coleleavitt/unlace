__int64 __fastcall database_persistent_t__::vfunc_8(__int64 a1, const __m128i *a2, double a3, __m128 a4)
{
  void *v5; // rsi
  __int64 v6; // r13
  __int64 result; // rax
  void *v8; // rsi
  __int64 v9; // rbp
  __m128i v10[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v11; // [rsp+20h] [rbp-48h] BYREF
  void *v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  sub_1CE9C0(v10, a2, a3, a4);
  QT::QString::toUtf8_helper((QT::QString *)&v11, (const QT::QString *)v10);
  v5 = v12;
  if ( !v12 )
    v5 = &QT::QByteArray::_empty;
  v6 = netnode_hashval(*(_QWORD *)(a1 + 32), v5, 0, 0, 72);
  sub_17F470(&v11);
  sub_16D970((void **)v10);
  result = 1;
  if ( v6 < 0 )
  {
    sub_1CE950((QT::QString *)v10, a2);
    QT::QString::toUtf8_helper((QT::QString *)&v11, (const QT::QString *)v10);
    v8 = v12;
    if ( !v12 )
      v8 = &QT::QByteArray::_empty;
    v9 = netnode_hashval(*(_QWORD *)(a1 + 32), v8, 0, 0, 72);
    sub_17F470(&v11);
    sub_16D970((void **)v10);
    return v9 >> 63;
  }
  return result;
}
