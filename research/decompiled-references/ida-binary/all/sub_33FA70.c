__int64 __fastcall sub_33FA70(QT::QWidget *this, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v2 = *((_QWORD *)this + 15);
  v9 = __readfsqword(0x28u);
  if ( v2 )
  {
    v3 = *((unsigned __int64 **)this + 14);
    v4 = v3[4 * v2 - 3];
    if ( a2 < *v3 )
      a2 = *v3;
    if ( a2 > v4 )
      a2 = v4;
  }
  v5 = sub_33FA20((__int64)this, a2);
  *((_QWORD *)this + 23) = a2;
  *((_QWORD *)this + 25) = v5;
  *((_BYTE *)this + 256) = 1;
  *((_BYTE *)this + 400) = 1;
  v8 = a2;
  v7 = &navband_t::compute_visible_addr_range_end;
  sub_33F870((__int64)this, (void (__fastcall ***)(_QWORD, __int64 *, __m128i *))&v7);
  *((_QWORD *)this + 24) = v8;
  QT::QWidget::update(this);
  return sub_46C600(this, (char *)this + 184);
}
