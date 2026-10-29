void *sub_842DE0()
{
  void *v1; // rbp

  if ( !(_BYTE)byte_2CD6F20 && __cxa_guard_acquire(&byte_2CD6F20) )
  {
    v1 = (void *)operator new(0xD0u);
    sub_842B00((unsigned __int64)v1);
    arg = v1;
    __cxa_guard_release(&byte_2CD6F20);
  }
  sub_842D60((char *)arg);
  return arg;
}
