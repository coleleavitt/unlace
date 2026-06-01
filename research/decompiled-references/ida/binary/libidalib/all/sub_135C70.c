__int64 sub_135C70()
{
  unsigned int v0; // ebx
  __int64 code; // rax

  v0 = BYTE2(xmmword_2450C0);
  sub_134990();
  BYTE1(v0) |= 8u;
  code = find_code();
  if ( code == -1 )
  {
    sub_108D20(1072, v0);
    return 0;
  }
  else
  {
    sub_108D20(1071, code);
    return (unsigned __int8)sub_120E80();
  }
}

