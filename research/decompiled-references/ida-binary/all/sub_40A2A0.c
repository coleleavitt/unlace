QT::QStandardItemModel *__fastcall sub_40A2A0(QT::QStandardItemModel *this)
{
  double v1; // xmm0_8
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i ptr[2]; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars20; // [rsp+20h] [rbp+20h] BYREF
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  QT::QStandardItemModel::mimeTypes(this);
  v1 = QT::QString::fromUtf8(ptr, 9, "text/html");
  sub_1D5280((__m128i *)this, *((_QWORD *)this + 2), ptr, v2, v3, v4);
  if ( !*(_QWORD *)this || **(int **)this > 1 )
    sub_1B21C0((__m128i *)this, 0, 0, 0, v5, v6);
  QT::QString::fromUtf8(&vars20, 10, "text/plain", v1);
  sub_1D5280((__m128i *)this, *((_QWORD *)this + 2), &vars20, v7, v8, v9);
  if ( !*(_QWORD *)this || **(int **)this > 1 )
    sub_1B21C0((__m128i *)this, 0, 0, 0, v10, v11);
  if ( vars20.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)vars20.m128i_i64[0], 1u) )
    free((void *)vars20.m128i_i64[0]);
  if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
    free((void *)ptr[0].m128i_i64[0]);
  return this;
}
