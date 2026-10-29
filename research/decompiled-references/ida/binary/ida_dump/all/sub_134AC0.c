__int64 __fastcall sub_134AC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int flags; // eax
  char tinfo_property; // r12
  __int64 v7; // rdx
  int v8; // eax

  if ( *(_BYTE *)a2 == 10 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)v4 == 6 && (*(_QWORD *)(v4 + 8) & 1) != 0 )
    {
      flags = get_flags_ex();
      if ( (~(_WORD)flags & 0x600) == 0 )
      {
        if ( (flags & 0x10000000) != 0
          || !a3
          || (get_tinfo_property(), tinfo_property = get_tinfo_property(),
                                    clear_tinfo_t(),
                                    (tinfo_property & 0xF) == 0xC) )
        {
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) &= ~1uLL;
          v7 = *(_QWORD *)(a1 + 16);
          v8 = *(_DWORD *)(v7 + 24);
          BYTE1(v8) &= ~2u;
          LOBYTE(v8) = v8 | 0x80;
          *(_DWORD *)(v7 + 24) = v8;
        }
      }
    }
  }
  return 0;
}
