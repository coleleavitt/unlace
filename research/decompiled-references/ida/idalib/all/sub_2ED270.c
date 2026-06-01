int sub_2ED270()
{
  if ( !byte_2CCB630 )
  {
    byte_2CCB630 = 1;
    __cxa_atexit(sub_434420, &xmmword_2CCB640, &off_2B25620);
  }
  sub_472300(&qword_2CCBE30, "Alternative name is '");
  __cxa_atexit(sub_387760, &qword_2CCBE30, &off_2B25620);
  sub_472300(&qword_2CCBE10, "'");
  return __cxa_atexit(sub_387760, &qword_2CCBE10, &off_2B25620);
}
