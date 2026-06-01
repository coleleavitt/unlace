__int64 sub_738650()
{
  unsigned int v0; // eax
  int v1; // ebp
  unsigned int v2; // r13d
  unsigned int v4; // r13d

  v0 = sub_74E4D0();
  v1 = qword_2CAA5B8 - (_DWORD)qword_2CAA5C0;
  if ( (int)qword_2CAA5B8 - (int)qword_2CAA5C0 >= v0 )
  {
    sub_74E2F0(&qword_2CAA5C0[v0]);
    v4 = sub_737610(0, 1u);
    if ( !*(qword_2CAA5C0 - 1) )
      --qword_2CAA5C0;
    sub_74E220(1);
    return v4;
  }
  else
  {
    dword_2CAA5C8 |= 0x800000u;
    sub_74E2F0(&qword_2CAA5C0[v1]);
    v2 = sub_737610(0, 1u);
    if ( !*(qword_2CAA5C0 - 1) )
      --qword_2CAA5C0;
    sub_74E220(1);
    if ( v1 )
    {
      if ( !byte_2CAA5A1 )
        byte_2CAA5A1 = 1;
      qword_2CAA5C0 = (char *)qword_2CAA5B8;
    }
    return v2;
  }
}

