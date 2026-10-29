_QWORD *sub_14B6240()
{
  if ( (_BYTE)qword_2CD8AC8 || !__cxa_guard_acquire(&qword_2CD8AC8) )
    return qword_2CD8AE0;
  qword_2CD8AE0[0] = 0;
  qword_2CD8AE0[1] = &qword_2CD8AE0[3];
  qword_2CD8AE0[2] = 0x200000000LL;
  __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
  __cxa_guard_release(&qword_2CD8AC8);
  return qword_2CD8AE0;
}
