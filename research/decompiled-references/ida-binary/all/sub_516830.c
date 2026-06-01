__int64 __fastcall MainMsgList__::vfunc_5(QT::QAbstractScrollArea *this, QT::QEvent *a2, __m128d a3, double a4)
{
  int v4; // eax

  v4 = *((unsigned __int16 *)a2 + 4);
  if ( v4 == 2008 )
  {
    if ( (*((_BYTE *)this + 96) & 1) != 0 )
    {
      sub_5149B0((__int64)this + 40);
      *((_DWORD *)this + 24) &= ~1u;
      sub_5135F0(*((QT::QAbstractScrollArea **)this + 10), *((_DWORD *)this + 22), *((_DWORD *)this + 23), a3);
    }
    if ( *((_BYTE *)a2 + 16) )
      sub_515C20(this, a3.m128d_f64[0], a4);
    return 1;
  }
  else
  {
    if ( v4 == 97 )
      sub_513840((__int64)this + 40, 1);
    return QT::QAbstractScrollArea::event(this, a2);
  }
}
