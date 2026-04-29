__int64 __fastcall sub_23FD80(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  char tinfo_property; // r13
  char v10; // al
  __int64 tinfo_size; // rbx

  v4 = a1;
  if ( *(_DWORD *)(a1 + 8) == 51 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v6 + 8) == 48 )
    {
      v7 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v7 + 8) == 52 )
      {
        v8 = *(_QWORD *)(v7 + 24);
        tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 48), 2);
        if ( ((get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
          return 0xFFFFFFFFLL;
        v10 = get_tinfo_property(*(_QWORD *)(v8 + 48), 2);
        if ( (v10 & 0xFu) > 0xA && (v10 & 0x3F) != 0x2D )
          return 0xFFFFFFFFLL;
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
        if ( get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0) != tinfo_size )
          return 0xFFFFFFFFLL;
        if ( a2 )
          ++*a2;
        v4 = v8;
      }
    }
  }
  if ( a3 )
    *a3 = v4;
  return (get_tinfo_property(*(_QWORD *)(v4 + 48), 2) & 0xF) == 9;
}
