__int64 sub_758B30()
{
  unsigned int v0; // eax
  int v1; // ebp
  unsigned int v2; // r13d
  unsigned int v4; // r13d

  v0 = sub_76E990();
  v1 = qword_2CD44B8 - (_DWORD)qword_2CD44C0;
  if ( (int)qword_2CD44B8 - (int)qword_2CD44C0 >= v0 )
  {
    sub_76E7B0(&qword_2CD44C0[v0]);
    v4 = sub_757AF0(0, 1u);
    if ( !*(qword_2CD44C0 - 1) )
      --qword_2CD44C0;
    sub_76E6E0(1);
    return v4;
  }
  else
  {
    dword_2CD44C8 |= 0x800000u;
    sub_76E7B0(&qword_2CD44C0[v1]);
    v2 = sub_757AF0(0, 1u);
    if ( !*(qword_2CD44C0 - 1) )
      --qword_2CD44C0;
    sub_76E6E0(1);
    if ( v1 )
    {
      if ( !byte_2CD44A1 )
        byte_2CD44A1 = 1;
      qword_2CD44C0 = (char *)qword_2CD44B8;
    }
    return v2;
  }
}
