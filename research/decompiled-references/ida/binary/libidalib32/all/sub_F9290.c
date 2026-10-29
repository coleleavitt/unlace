void __fastcall sub_F9290(TView *this)
{
  bool v2; // zf
  TView **v3; // rdi
  TView **v4; // rdx

  *(_QWORD *)this = &unk_2361D8;
  *((_QWORD *)this + 9) = &off_2364C0;
  *((_QWORD *)this + 13) = &unk_2364D8;
  v2 = qword_251660 == (_QWORD)this;
  *((_QWORD *)this + 20) = &unk_236508;
  if ( v2 )
    qword_251660 = 0;
  v3 = (TView **)qword_251670;
  v4 = (TView **)(qword_251670 + 8 * xmmword_251678);
  if ( (TView **)qword_251670 != v4 )
  {
    while ( this != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_9;
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
      *(_QWORD *)&xmmword_251678 = xmmword_251678 - 1;
    }
  }
LABEL_9:
  if ( *((_QWORD *)this + 145) )
  {
    *((_QWORD *)this + 146) = 0;
    qfree();
  }
  sub_F8830(this);
}

