void __fastcall sub_159700(TView *this)
{
  __int64 v1; // rax
  bool v2; // zf

  *(_QWORD *)this = &off_23B4B8;
  *((_QWORD *)this + 9) = &off_23B7A0;
  *((_QWORD *)this + 13) = off_23B7B8;
  *((_QWORD *)this + 20) = off_23B7E8;
  qfree();
  v1 = *((int *)this + 300);
  *((_QWORD *)this + 151) = 0;
  if ( (_DWORD)v1 != -1 )
  {
    v2 = this == (TView *)qword_254470;
    qword_2542C0[v1] = 0;
    if ( v2 )
      qword_254470 = 0;
  }
  sub_F9490(this);
  operator delete(this, 0x4C8u);
}

