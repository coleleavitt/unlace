__int64 sub_1357D0()
{
  unsigned int v0; // ebx
  unsigned int not_func; // eax

  v0 = BYTE10(xmmword_244090);
  sub_1344B0();
  BYTE1(v0) |= 8u;
  not_func = find_not_func();
  if ( not_func == -1 )
  {
    sub_108A90(1072, v0);
    return 0;
  }
  else
  {
    sub_108A90(1071, not_func);
    return (unsigned __int8)sub_120900();
  }
}

