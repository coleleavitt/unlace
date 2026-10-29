void __fastcall sub_9B0C0(TGroup *this)
{
  TGroup **v2; // rdi
  TGroup **v3; // rdx

  *(_QWORD *)this = &off_2359E0;
  *((_QWORD *)this + 16) = off_235AA8;
  v2 = (TGroup **)qword_250930;
  v3 = (TGroup **)(qword_250930 + 8 * xmmword_250938);
  if ( (TGroup **)qword_250930 != v3 )
  {
    while ( this != *v2 )
    {
      if ( v3 == ++v2 )
        goto LABEL_7;
    }
    if ( v3 != v2 )
    {
      memmove(v2, v2 + 1, (char *)v3 - (char *)v2 - 8);
      *(_QWORD *)&xmmword_250938 = xmmword_250938 - 1;
    }
  }
LABEL_7:
  sub_9AC10(this);
}

