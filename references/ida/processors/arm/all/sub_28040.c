bool __fastcall sub_28040(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  unsigned int v6; // r13d
  __int16 v7; // dx
  int dword; // eax
  char v10; // al
  char v11; // al
  __int16 v12; // ax
  __m128i si128; // [rsp+8h] [rbp-50h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    if ( (unsigned __int16)(get_word(v4) - 1) > 0xFFFDu )
      return 0;
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 == 288 )
      return 0;
  }
  else
  {
    dword = get_dword(v4);
    if ( dword == 0xFFFF || dword == 0 )
      return 0;
    if ( dword == -1 )
      return 0;
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 == 288 )
      return 0;
  }
  if ( (~*(_BYTE *)(a2 + 32) & 0xF) == 0 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 0x40) == 0 )
  {
    if ( (unsigned __int8)segtype() != 2 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_89530);
      get_fixup();
    }
    if ( (a3 & 4) != 0 && !sub_21B30(a2) )
    {
      v10 = 1;
      if ( *(_DWORD *)(a1 + 212) )
        v10 = (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL;
      if ( v10 != (unsigned __int8)(v6 >> 1) )
        return 0;
    }
    if ( (a3 & 1) != 0 && (*(_BYTE *)(a2 + 32) & 0xF) != 0xE && *(_WORD *)(a2 + 24) != 3 )
      return 0;
    v11 = *(_BYTE *)(a2 + 41);
    if ( (v11 == 2 || v11 == 7) && !(unsigned __int8)is_mapped() )
      return 0;
    if ( *(_WORD *)(a2 + 26) <= 3u )
    {
      v12 = *(_WORD *)(a2 + 24);
      if ( v12 == 4
        || v12 == 46
        || v12 == 23 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 14 && *(_BYTE *)(a2 + 81) == 5 )
      {
        return 0;
      }
    }
    if ( (a3 & 4) != 0 && (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0x1000) != 0 && (unsigned __int8)xrefblk_t_first_to() )
    {
      while ( (unsigned __int8)(si128.m128i_i8[9] - 2) > 1u )
      {
        if ( !(unsigned __int8)xrefblk_t_next_to() )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( *(_BYTE *)(a2 + 72) == 1 )
    return 1;
  if ( (unsigned int)(*(char *)(a2 + 72) - 14) > 1 )
    return 0;
  return (v7 & 0xFFFD) == 89;
}
