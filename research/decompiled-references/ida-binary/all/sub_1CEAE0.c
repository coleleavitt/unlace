_BOOL8 __fastcall database_persistent_t__::vfunc_3(__int64 a1, const __m128i *a2, double a3, __m128 a4)
{
  void *v4; // rsi
  __int64 v5; // rbx
  __m128i _0[2]; // [rsp+0h] [rbp+0h] BYREF
  void *vars20; // [rsp+20h] [rbp+20h] BYREF
  void *vars28; // [rsp+28h] [rbp+28h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  sub_1CE9C0(_0, a2, a3, a4);
  QT::QString::toUtf8_helper((QT::QString *)&vars20, (const QT::QString *)_0);
  v4 = vars28;
  if ( !vars28 )
    v4 = &QT::QByteArray::_empty;
  v5 = netnode_hashval(*(_QWORD *)(a1 + 32), v4, 0, 0, 72);
  sub_17F470(&vars20);
  sub_16D970((void **)_0);
  return v5 >= 0;
}
