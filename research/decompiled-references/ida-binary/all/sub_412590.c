QT::QString *__fastcall sub_412590(QT::QString *this, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r12d
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v5 = (a3 >> 4) & 1;
  v9 = __readfsqword(0x28u);
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  if ( (a3 & 2) != 0 )
  {
    sub_40EB30(&ptr, a2, a3, a4);
    QT::QString::append(this, (const QT::QString *)&ptr);
    if ( ptr.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
    }
  }
  sub_40C940(&ptr, a2, v5, a3, a4);
  QT::QString::append(this, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    free((void *)ptr.m128i_i64[0]);
    if ( (a3 & 0x8C) == 0 )
      return this;
  }
  else if ( (a3 & 0x8C) == 0 )
  {
    return this;
  }
  sub_412300((QT::QString *)&ptr, a2, a3, a4);
  QT::QString::append(this, (const QT::QString *)&ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  return this;
}
