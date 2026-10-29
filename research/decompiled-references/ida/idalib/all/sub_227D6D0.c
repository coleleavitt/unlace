void *sub_227D6D0()
{
  if ( (_BYTE)byte_2D0AD20 || !__cxa_guard_acquire(&byte_2D0AD20) )
  {
    if ( !(_BYTE)byte_2D0ACB0 )
      goto LABEL_6;
    return &unk_2D0ACC0;
  }
  __cxa_guard_release(&byte_2D0AD20);
  if ( (_BYTE)byte_2D0ACB0 )
    return &unk_2D0ACC0;
LABEL_6:
  if ( !__cxa_guard_acquire(&byte_2D0ACB0) )
    return &unk_2D0ACC0;
  sub_227D340((__int64)&unk_2D0ACC0, 2, 0, 1u, 0);
  __cxa_atexit((void (*)(void *))sub_227B600, &unk_2D0ACC0, &off_2B25620);
  __cxa_guard_release(&byte_2D0ACB0);
  return &unk_2D0ACC0;
}
