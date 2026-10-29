void __fastcall sub_16EF60(TView *this)
{
  _QWORD *v1; // rbp

  *(_QWORD *)this = &off_23ABB0;
  *((_QWORD *)this + 9) = &off_23AE80;
  *((_QWORD *)this + 13) = off_23AE98;
  *((_QWORD *)this + 20) = off_23AEC8;
  if ( (unsigned __int8)netnode_inited() && *(_QWORD *)(sub_15CFF0((__int64)this + 440) + 40) )
    netnode_set();
  v1 = *((_QWORD **)this + 94);
  qword_254370 = 0;
  if ( v1 )
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    qfree();
  }
  dword_25031C = -1;
  sub_F8830(this);
}

