QT::QString *__fastcall sub_412300(QT::QString *this, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // bl
  double v6; // xmm0_8
  _BYTE *v7; // rbx
  __m128i v10[2]; // [rsp+8h] [rbp-78h] BYREF
  __m128i ptr; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-40h]

  v4 = a3;
  v12 = __readfsqword(0x28u);
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  v6 = QT::QString::fromUtf8(v10, 1, "(");
  sub_40C430(&ptr, v10, 9, v4, a4);
  QT::QString::append(this, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  if ( v10[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v10[0].m128i_i64[0], 1u) )
    free((void *)v10[0].m128i_i64[0]);
  v7 = nullptr;
  if ( *(_QWORD *)(a2 + 112) )
  {
    while ( 1 )
    {
      sub_410C80((QT::QString *)&ptr, (const char *)a2, *(_QWORD *)(a2 + 104) + 80LL * (_QWORD)v7, v7, a3, a4);
      QT::QString::append(this, (const QT::QString *)&ptr);
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      if ( (unsigned __int64)++v7 >= *(_QWORD *)(a2 + 112) )
        break;
      v6 = QT::QString::fromUtf8(v10, 2, ", ", v6);
      sub_40C430(&ptr, v10, 9, a3, a4);
      QT::QString::append(this, (const QT::QString *)&ptr);
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      if ( v10[0].m128i_i64[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v10[0].m128i_i64[0], 1u) )
          free((void *)v10[0].m128i_i64[0]);
      }
    }
  }
  QT::QString::fromUtf8(v10, 1, ")", v6);
  sub_40C430(&ptr, v10, 9, a3, a4);
  QT::QString::append(this, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  if ( v10[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v10[0].m128i_i64[0], 1u) )
    free((void *)v10[0].m128i_i64[0]);
  return this;
}
