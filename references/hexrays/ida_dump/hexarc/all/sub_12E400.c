__int64 __fastcall sub_12E400(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  int flags; // eax
  char tinfo_property; // r12
  __int64 v9; // rdx
  int v10; // eax
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 10 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)v4 == 6 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      if ( (v6 & 1) != 0 )
      {
        flags = get_flags_ex(v6 & 0xFFFFFFFFFFFFFFFELL, 4);
        if ( (~(_WORD)flags & 0x600) == 0 )
        {
          if ( (flags & 0x10000000) != 0
            || !a3
            || (v12[0] = get_tinfo_property(*a3, 9),
                tinfo_property = get_tinfo_property(v12[0], 2),
                clear_tinfo_t(v12),
                (tinfo_property & 0xF) == 0xC) )
          {
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) &= ~1uLL;
            v9 = *(_QWORD *)(a1 + 16);
            v10 = *(_DWORD *)(v9 + 24);
            BYTE1(v10) &= ~2u;
            LOBYTE(v10) = v10 | 0x80;
            *(_DWORD *)(v9 + 24) = v10;
          }
        }
      }
    }
  }
  return 0;
}
