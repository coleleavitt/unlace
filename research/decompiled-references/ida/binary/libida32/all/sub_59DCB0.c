__int64 __fastcall sub_59DCB0(__int64 a1)
{
  int flags; // eax
  __int64 func; // rax

  flags = get_flags_ex(a1, 4);
  if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
    return get_ind_purged((unsigned int)a1);
  func = get_func((unsigned int)a1);
  if ( func )
    return *(unsigned int *)(func + 28);
  else
    return 0xFFFFFFFFLL;
}

