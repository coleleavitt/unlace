__int64 __fastcall sub_5B7EE0(unsigned __int64 a1)
{
  int flags; // eax
  __int64 func; // rax

  flags = get_flags_ex(a1, 4);
  if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
    return get_ind_purged(a1);
  func = get_func(a1);
  if ( func )
    return *(unsigned int *)(func + 48);
  else
    return 0xFFFFFFFFLL;
}
