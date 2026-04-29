__int64 __fastcall sub_25C6E0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  int flags; // eax
  __int64 v6; // rdi
  char tinfo_property; // al
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  flags = get_flags_ex(a2, 4);
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000
    || (v3 = sub_25C4B0(a1, a2, nullptr, nullptr), (_BYTE)v3) )
  {
    v9[0] = 0;
    if ( (unsigned __int8)get_tinfo(v9, a2) )
    {
      tinfo_property = get_tinfo_property(v9[0], 2);
      if ( tinfo_property < 0 )
      {
        v3 = 0;
        goto LABEL_7;
      }
      if ( (tinfo_property & 0x40) != 0 )
        goto LABEL_6;
      v6 = *(_QWORD *)(a1 + 96);
      if ( (*(_BYTE *)(v6 + 604) & 0x40) == 0 )
        goto LABEL_6;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 96);
      if ( (*(_BYTE *)(v6 + 604) & 0x40) == 0 )
        goto LABEL_6;
    }
    if ( a3 )
    {
      LOBYTE(v3) = (unsigned int)sub_33D3E0(v6, a2) != 0;
      goto LABEL_7;
    }
LABEL_6:
    v3 = 1;
LABEL_7:
    clear_tinfo_t(v9);
  }
  return v3;
}
