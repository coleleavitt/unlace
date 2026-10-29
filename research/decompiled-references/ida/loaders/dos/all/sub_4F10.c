__int64 __fastcall sub_4F10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  unsigned __int16 word; // ax

  if ( (unsigned __int16)get_word(a1) != 16333
    || (int)get_dword(a1 + 4) <= 0
    || !(unsigned __int16)get_word(a1 + 8)
    || (get_word(a1 + 10) & 0x8000u) != 0LL
    || (__int16)get_word(a1 + 12) <= 0
    || (unsigned __int64)(__int16)get_word(a1 + 12) > 0x1998 )
  {
    return 0;
  }
  v7 = getinf(12, a2, v3, v4, v5, v6);
  word = get_word(a1 + 14);
  return is_mapped(16 * (v7 + word));
}

