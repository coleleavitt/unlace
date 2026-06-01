__int64 sub_135CD0()
{
  unsigned int v0; // ebx
  __int64 not_func; // rax

  v0 = BYTE2(xmmword_2450C0);
  sub_134990();
  BYTE1(v0) |= 8u;
  not_func = find_not_func();
  if ( not_func == -1 )
  {
    sub_108D20(1072, v0);
    return 0;
  }
  else
  {
    sub_108D20(1071, not_func);
    return (unsigned __int8)sub_120E80();
  }
}

