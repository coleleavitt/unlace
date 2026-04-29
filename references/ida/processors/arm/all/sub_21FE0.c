__int64 __fastcall sub_21FE0(__int64 a1)
{
  int aflags; // edx
  __int64 result; // rax
  int flags; // eax
  __int64 func; // rax

  aflags = get_aflags();
  result = 1;
  if ( (aflags & 0x400000) == 0 )
  {
    flags = get_flags_ex(a1, 4);
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 && (func = get_func(a1)) != 0 )
      return *(_QWORD *)(func + 16) & 1LL;
    else
      return 0;
  }
  return result;
}
