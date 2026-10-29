unsigned __int64 __fastcall sub_3E7F80(
        QT::QAbstractItemView *this,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rax

  if ( *((_DWORD *)this + 279) == -1 && *((_QWORD *)this + 141) <= 1u && (unsigned __int8)sub_3843C0() )
  {
    v15 = sub_384360();
    sub_3E1B10(this, v15);
  }
  if ( (debug & 0x40000) != 0 )
    sub_3E25E0(
      (__int64)"watch_view_t::refresh_if_needed(); instance %p is 'marked_for_refresh'\n",
      (__int64)this,
      a11,
      a12,
      a13,
      a14);
  return sub_3E7CB0(this, a2, a3, a4, a5, a6, a7, a8, a9);
}
