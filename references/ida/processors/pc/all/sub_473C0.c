__int64 __fastcall sub_473C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7, _BYTE *a8)
{
  __int64 _64bit; // rdx
  int flags; // eax

  if ( a5 == 8 )
  {
    _64bit = get_64bit();
    if ( _64bit == 0xFFFFFFFFLL || _64bit == 0 || _64bit == -1 )
      return -1;
  }
  else
  {
    if ( a5 != 4 )
    {
      if ( (unsigned int)get_16bit() - 1 <= 0xFFFFFFFD )
        goto LABEL_4;
      return -1;
    }
    if ( (unsigned int)get_32bit() - 1 > 0xFFFFFFFD )
      return -1;
  }
LABEL_4:
  if ( a7 )
  {
    get_word();
    a4 = 16 * sel2para();
  }
  if ( !(unsigned __int8)is_mapped() || (unsigned __int8)segtype() == 3 )
    return -1;
  add_cref();
  if ( !*a8 )
  {
    flags = get_flags_ex();
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 && (get_aflags() & 0x800) != 0 )
    {
      *a8 = 1;
      auto_apply_type();
    }
  }
  return a4;
}
