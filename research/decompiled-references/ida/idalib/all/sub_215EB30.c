const char *__fastcall sub_215EB30(_QWORD *a1)
{
  unsigned __int16 *v1; // rax
  unsigned __int16 v2; // ax

  v1 = (unsigned __int16 *)a1[6];
  if ( v1 )
  {
    v2 = *v1;
    if ( a1[27] )
    {
      if ( v2 == 0x8664 )
        return "COFF-ARM64EC";
      if ( v2 == 0xAA64 )
        return "COFF-ARM64X";
    }
  }
  else
  {
    v2 = *(_WORD *)(a1[7] + 6LL);
  }
  if ( v2 == 0x8664 )
    return "COFF-x86-64";
  if ( v2 > 0x8664u )
  {
    if ( v2 == 0xA64E )
      return "COFF-ARM64X";
    if ( v2 == 0xAA64 )
      return "COFF-ARM64";
    if ( v2 != 0xA641 )
      return "COFF-<unknown arch>";
    return "COFF-ARM64EC";
  }
  if ( v2 == 358 )
    return "COFF-MIPS";
  if ( v2 == 452 )
    return "COFF-ARM";
  if ( v2 != 332 )
    return "COFF-<unknown arch>";
  return "COFF-i386";
}
