int sub_8DE70()
{
  if ( !byte_256630 )
  {
    byte_256630 = 1;
    __cxa_atexit(sub_180BF0, &unk_2566A0, &off_22F2A0);
  }
  qword_256680 = 0;
  xmmword_256688 = 0;
  __cxa_atexit(sub_17E860, &qword_256680, &off_22F2A0);
  xmmword_256668 = 0;
  qword_256660 = 0;
  __cxa_atexit(sub_17E830, &qword_256660, &off_22F2A0);
  xmmword_256648 = 0;
  qword_256640 = 0;
  return __cxa_atexit(sub_17E830, &qword_256640, &off_22F2A0);
}

