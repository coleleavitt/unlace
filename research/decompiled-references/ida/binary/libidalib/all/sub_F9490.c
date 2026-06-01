void __fastcall sub_F9490(TView *this)
{
  bool v2; // zf
  TView **v3; // rdi
  TView **v4; // rdx

  *(_QWORD *)this = &unk_2371D8;
  *((_QWORD *)this + 9) = &off_2374C0;
  *((_QWORD *)this + 13) = &unk_2374D8;
  v2 = qword_252800 == (_QWORD)this;
  *((_QWORD *)this + 20) = &unk_237508;
  if ( v2 )
    qword_252800 = 0;
  v3 = (TView **)qword_252810;
  v4 = (TView **)(qword_252810 + 8 * xmmword_252818);
  if ( (TView **)qword_252810 != v4 )
  {
    while ( this != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_9;
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
      *(_QWORD *)&xmmword_252818 = xmmword_252818 - 1;
    }
  }
LABEL_9:
  if ( *((_QWORD *)this + 146) )
  {
    *((_QWORD *)this + 147) = 0;
    qfree();
  }
  sub_F8BF0(this);
}

