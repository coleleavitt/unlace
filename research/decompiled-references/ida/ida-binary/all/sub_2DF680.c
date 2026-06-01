_QWORD *__fastcall sub_2DF680(__m128i *this, char *a2, int *a3, int a4)
{
  __int64 v5; // rbp
  _QWORD *result; // rax

  v5 = a4;
  sub_27D070((__int64)this, a2, a3);
  *((_DWORD *)this + 258) = v5;
  *((_BYTE *)this + 741) = 1;
  this->m128i_i64[0] = (__int64)&IDAView___vtable;
  *((_QWORD *)this + 2) = IDAView___vtable_at__16;
  *((_QWORD *)this + 5) = IDAView___vtable_at__40;
  *((_QWORD *)this + 13) = IDAView___vtable_at__104;
  sub_27D430((QT::QAbstractScrollArea *)this, a2);
  result = (_QWORD *)sub_1FC230(this, (__int64)a3);
  if ( (_DWORD)v5 != -1 )
  {
    qword_8CD320[v5] = this;
    return qword_8CD320;
  }
  return result;
}
