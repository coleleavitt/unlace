int sub_2EC300()
{
  int result; // eax

  if ( !byte_2CCB630 )
  {
    byte_2CCB630 = 1;
    return __cxa_atexit(sub_434420, &xmmword_2CCB640, &off_2B25620);
  }
  return result;
}
