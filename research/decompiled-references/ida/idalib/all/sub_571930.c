__int64 __fastcall sub_571930(__int64 a1)
{
  int flags; // eax
  __int64 v2; // rdx

  flags = get_flags_ex(a1, 4);
  v2 = flags & 0x600;
  if ( v2 == 1024 )
  {
    LODWORD(v2) = 0;
    if ( (((flags & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFE0000000LL) == 0 )
      return 0;
  }
  LOBYTE(v2) = (flags & 0xFF00000) == 0;
  return (unsigned int)v2;
}
