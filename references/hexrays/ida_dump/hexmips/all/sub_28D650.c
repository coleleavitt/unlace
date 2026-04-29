__int64 __fastcall sub_28D650(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r12
  int tinfo_property; // ebp

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v1 + 8) != 48 )
    return 0;
  if ( (*(_BYTE *)(v1 + 48) & 0xFu) > 9 )
    return 0;
  v3 = *(_QWORD *)(v1 + 24);
  if ( (get_tinfo_property(*(_QWORD *)(v3 + 48), 2) & 0xF) == 9 )
    return 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v1 + 48), 3);
  if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v3 + 48), 3) != tinfo_property )
    return 0;
  sub_250FD0(*(__int64 **)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
  return 1;
}
