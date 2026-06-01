__int64 __fastcall sub_3B1DC0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx
  unsigned __int64 v5; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 58 && v2 != 25 )
    return 7;
  v4 = *(_QWORD *)(a2 + 208);
  if ( *(_BYTE *)(v4 + 31) != 13 )
    return 7;
  v5 = *(_QWORD *)(v4 + 16);
  if ( v5 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( sub_3B18E0(nullptr, *(_QWORD *)(a2 + 208)) != -1 )
      return 3;
    v5 = *(_QWORD *)(v4 + 16);
  }
  if ( v5 != -2 && (get_tinfo_property(*(_QWORD *)(v4 + 8), 306) & 0x400) == 0 )
    return 7;
  return 3;
}
