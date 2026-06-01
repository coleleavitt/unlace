void *sub_227D600()
{
  if ( (_BYTE)byte_2D0ADA0 || !__cxa_guard_acquire(&byte_2D0ADA0) )
  {
    if ( !(_BYTE)byte_2D0AD28 )
      goto LABEL_6;
    return &unk_2D0AD40;
  }
  __cxa_guard_release(&byte_2D0ADA0);
  if ( (_BYTE)byte_2D0AD28 )
    return &unk_2D0AD40;
LABEL_6:
  if ( !__cxa_guard_acquire(&byte_2D0AD28) )
    return &unk_2D0AD40;
  sub_2291510(0);
  sub_227D340((__int64)&unk_2D0AD40, 1, 1, 0, 0);
  __cxa_atexit((void (*)(void *))sub_227B600, &unk_2D0AD40, &off_2B25620);
  __cxa_guard_release(&byte_2D0AD28);
  return &unk_2D0AD40;
}
