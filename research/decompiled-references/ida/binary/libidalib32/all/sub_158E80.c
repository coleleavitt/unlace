void __fastcall sub_158E80(TView *this)
{
  __int64 v1; // rax
  bool v2; // zf

  *(_QWORD *)this = &off_23A4B8;
  *((_QWORD *)this + 9) = &off_23A7A0;
  *((_QWORD *)this + 13) = off_23A7B8;
  *((_QWORD *)this + 20) = off_23A7E8;
  qfree();
  v1 = *((int *)this + 298);
  *((_QWORD *)this + 150) = 0;
  if ( (_DWORD)v1 != -1 )
  {
    v2 = this == (TView *)qword_2532B0;
    qword_253100[v1] = 0;
    if ( v2 )
      qword_2532B0 = 0;
  }
  sub_F9290(this);
  operator delete(this, 0x4C0u);
}

