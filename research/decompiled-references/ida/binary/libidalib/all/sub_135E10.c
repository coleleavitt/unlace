__int64 sub_135E10()
{
  unsigned int v0; // ebx
  __int64 error; // rax

  v0 = BYTE2(xmmword_2450C0);
  sub_134990();
  BYTE1(v0) |= 8u;
  error = find_error();
  if ( error == -1 )
  {
    sub_108D20(1072, v0);
    return 0;
  }
  else
  {
    sub_108D20(1071, error);
    return (unsigned __int8)sub_120E80();
  }
}

