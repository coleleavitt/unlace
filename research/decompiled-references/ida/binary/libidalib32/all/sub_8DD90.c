int sub_8DD90()
{
  if ( !byte_255470 )
  {
    byte_255470 = 1;
    __cxa_atexit(sub_1800F0, &unk_2554E0, &off_22E220);
  }
  qword_2554C0 = 0;
  xmmword_2554C8 = 0;
  __cxa_atexit(sub_17DD60, &qword_2554C0, &off_22E220);
  xmmword_2554A8 = 0;
  qword_2554A0 = 0;
  __cxa_atexit(sub_17DD30, &qword_2554A0, &off_22E220);
  xmmword_255488 = 0;
  qword_255480 = 0;
  return __cxa_atexit(sub_17DD30, &qword_255480, &off_22E220);
}

