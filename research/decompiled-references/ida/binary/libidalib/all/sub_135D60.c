__int64 sub_135D60()
{
  unsigned int v0; // ebx
  __int64 suspop; // rax

  v0 = BYTE2(xmmword_2450C0);
  sub_134990();
  BYTE1(v0) |= 8u;
  suspop = find_suspop();
  if ( suspop == -1 )
  {
    sub_108D20(1072, v0);
    return 0;
  }
  else
  {
    sub_108D20(1071, suspop);
    return (unsigned __int8)sub_120E80();
  }
}

