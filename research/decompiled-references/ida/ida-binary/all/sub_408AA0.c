unsigned __int64 __fastcall sub_408AA0(QT::QApplication *this, QT::QAbstractItemView *a2)
{
  __m128i v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)&v3);
  if ( (v3.m128i_i32[0] | v3.m128i_i32[1]) >= 0 && v4 )
  {
    if ( sub_3FC1C0((__int64)this, a2) )
    {
      if ( !(unsigned __int8)sub_3F2B40((__int64)this, (__int64)&v3)
        && !(unsigned __int8)sub_3F2C00((__int64)this, (__int64)&v3) )
      {
        if ( *((int *)this + 82) < 0 || *((_QWORD *)this + 39) == *((_QWORD *)this + 38) )
          sub_408750((__int64)this, (__int64)a2, &v3, 0);
        else
          sub_3F3940((__int64)this, 1);
      }
    }
    else
    {
      QT::QApplication::beep(this);
    }
  }
  return v5 - __readfsqword(0x28u);
}
