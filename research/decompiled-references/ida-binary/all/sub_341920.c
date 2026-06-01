__int64 __fastcall sub_341920(QT::QWidget *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  *((_QWORD *)this + 25) = a2;
  v2 = sub_3417A0((__int64)this, 0, 0, nullptr);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    v4 = *((unsigned __int64 **)this + 14);
    v5 = v4[4 * v3 - 3];
    if ( v2 < *v4 )
      v2 = *v4;
    if ( v2 > v5 )
      v2 = v5;
  }
  *((_QWORD *)this + 23) = v2;
  *((_BYTE *)this + 256) = 1;
  *((_BYTE *)this + 400) = 1;
  v8 = v2;
  v7 = &navband_t::compute_visible_addr_range_end;
  sub_33F870((__int64)this, (void (__fastcall ***)(_QWORD, __int64 *, __m128i *))&v7);
  *((_QWORD *)this + 24) = v8;
  QT::QWidget::update(this);
  return sub_46C600(this, (char *)this + 184);
}
