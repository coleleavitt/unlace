void __fastcall sub_9B200(TGroup *this)
{
  TGroup **v2; // rdi
  TGroup **v3; // rdx

  *(_QWORD *)this = &off_2369E0;
  *((_QWORD *)this + 16) = off_236AA8;
  v2 = (TGroup **)qword_2519A0;
  v3 = (TGroup **)(qword_2519A0 + 8 * xmmword_2519A8);
  if ( (TGroup **)qword_2519A0 != v3 )
  {
    while ( this != *v2 )
    {
      if ( v3 == ++v2 )
        goto LABEL_7;
    }
    if ( v3 != v2 )
    {
      memmove(v2, v2 + 1, (char *)v3 - (char *)v2 - 8);
      *(_QWORD *)&xmmword_2519A8 = xmmword_2519A8 - 1;
    }
  }
LABEL_7:
  sub_9AD50(this);
}

