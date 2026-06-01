__int128 *sub_20BFB80()
{
  if ( (_BYTE)byte_2CFDA40 )
    return &xmmword_2CFDA60;
  if ( __cxa_guard_acquire(&byte_2CFDA40) )
  {
    xmmword_2CFDA60 = 0;
    xmmword_2CFDA70 = 0;
    xmmword_2CFDA80 = 0;
    qword_2CFDA90 = 0;
    xmmword_2CFDAC0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_23A8D60);
    qword_2CFDA98 = 0;
    qword_2CFDAA0 = 0;
    qword_2CFDAA8 = 0;
    dword_2CFDAB0 = 0;
    qword_2CFDAB8 = 0;
    qword_2CFDAD0 = 0;
    qword_2CFDAD8 = 0;
    qword_2CFDAE0 = 0;
    qword_2CFDAE8 = 0;
    qword_2CFDAF0 = 0;
    qword_2CFDAF8 = 0;
    __cxa_atexit((void (*)(void *))sub_20BFA90, &xmmword_2CFDA60, &off_2B25620);
    __cxa_guard_release(&byte_2CFDA40);
  }
  return &xmmword_2CFDA60;
}
