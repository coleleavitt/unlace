void *sub_81FA20()
{
  void *v1; // rbp

  if ( !(_BYTE)byte_2CAD000 && __cxa_guard_acquire(&byte_2CAD000) )
  {
    v1 = (void *)operator new(0xD0u);
    sub_81F740((unsigned __int64)v1);
    arg = v1;
    __cxa_guard_release(&byte_2CAD000);
  }
  sub_81F9A0((char *)arg);
  return arg;
}

