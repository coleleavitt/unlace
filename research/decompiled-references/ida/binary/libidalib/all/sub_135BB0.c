__int64 sub_135BB0()
{
  unsigned int v0; // ebx
  __int64 defined; // rax

  v0 = BYTE2(xmmword_2450C0);
  sub_134990();
  BYTE1(v0) |= 8u;
  defined = find_defined();
  if ( defined == -1 )
  {
    sub_108D20(1072, v0);
    return 0;
  }
  else
  {
    sub_108D20(1071, defined);
    return (unsigned __int8)sub_120E80();
  }
}

