__int128 *__fastcall sub_149EA0(const char *a1)
{
  if ( (*(_BYTE *)(get_ph() + 8) & 1) == 0 )
    return nullptr;
  if ( !(_BYTE)byte_2540B8 )
  {
    if ( __cxa_guard_acquire(&byte_2540B8) )
    {
      xmmword_2540C0 = 0;
      __cxa_guard_release(&byte_2540B8);
    }
  }
  if ( (unsigned __int8)sub_149680((__int64)&xmmword_2540C0, 1, a1) )
    return &xmmword_2540C0;
  else
    return nullptr;
}

