__int64 __fastcall sub_816B50(__int64 a1)
{
  __int64 result; // rax
  unsigned int default_radix; // edi

  if ( (_DWORD)a1 )
  {
    if ( (((_DWORD)a1 - 8) & 0xFFFFFFF7) == 0 )
      return (unsigned int)a1;
    result = 16;
    if ( (a1 & 0xFFFFFFF7) == 2 )
      return (unsigned int)a1;
  }
  else
  {
    default_radix = get_default_radix(a1);
    if ( ((default_radix - 8) & 0xFFFFFFF7) == 0 )
      return default_radix;
    result = 16;
    if ( (default_radix & 0xFFFFFFF7) == 2 )
      return default_radix;
  }
  return result;
}

