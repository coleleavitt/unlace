__int64 __fastcall sub_21C5E00(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = *(_DWORD *)(a1 + 8);
  if ( (_BYTE)byte_2CFF3F8 || !__cxa_guard_acquire(&byte_2CFF3F8) )
    return v1;
  __cxa_atexit((void (*)(void *))sub_21C50E0, &off_2C8F5A0, &off_2B25620);
  __cxa_guard_release(&byte_2CFF3F8);
  return v1;
}
