void __fastcall sub_16F930(TView *this)
{
  _QWORD *v1; // rbp

  *(_QWORD *)this = &off_23BBB0;
  *((_QWORD *)this + 9) = &off_23BE80;
  *((_QWORD *)this + 13) = off_23BE98;
  *((_QWORD *)this + 20) = off_23BEC8;
  if ( (unsigned __int8)netnode_inited() && *(_QWORD *)(sub_15D8D0((__int64)this + 440) + 40) )
    netnode_set();
  v1 = *((_QWORD **)this + 95);
  qword_255530 = 0;
  if ( v1 )
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    qfree();
  }
  dword_25137C = -1;
  sub_F8BF0(this);
}

