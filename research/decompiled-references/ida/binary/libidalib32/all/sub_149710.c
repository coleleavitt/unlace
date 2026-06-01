__int64 *__fastcall sub_149710(const char *a1)
{
  if ( (*(_BYTE *)(get_ph() + 8) & 1) == 0 )
    return nullptr;
  if ( !(_BYTE)byte_252F18 )
  {
    if ( __cxa_guard_acquire(&byte_252F18) )
    {
      qword_252F20 = 0;
      __cxa_guard_release(&byte_252F18);
    }
  }
  if ( (unsigned __int8)sub_148EF0((__int64)&qword_252F20, 1, a1) )
    return &qword_252F20;
  else
    return nullptr;
}

