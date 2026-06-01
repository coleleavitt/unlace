__int64 *sub_227D790()
{
  if ( (_BYTE)byte_2D0AC60 )
    return &qword_2D0AC80;
  if ( __cxa_guard_acquire(&byte_2D0AC60) )
  {
    xmmword_2D0AC90 = 0;
    dword_2D0AC88 = 0;
    byte_2D0ACA8 = 0;
    dword_2D0ACAC = 1;
    qword_2D0ACA0 = 0;
    qword_2D0AC80 = (__int64)&off_2BEBF60;
    __cxa_atexit((void (*)(void *))sub_227B480, &qword_2D0AC80, &off_2B25620);
    __cxa_guard_release(&byte_2D0AC60);
  }
  return &qword_2D0AC80;
}
