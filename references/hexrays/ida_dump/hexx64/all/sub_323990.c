__int64 __fastcall sub_323990(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdx
  char tinfo_property; // al
  int v10; // eax
  __int64 v11; // rax

  if ( (*(_DWORD *)(a2 + 8) & 0xFFFFFFFB) == 0x30 )
    return 1;
  v5 = (unsigned int)(*(_DWORD *)(a2 + 8) - 59);
  v6 = a4;
  if ( (unsigned int)v5 <= 0x18 )
  {
    v7 = 16777473;
    if ( _bittest64(&v7, v5) )
      return 1;
  }
  if ( !a4 )
    v6 = (__int64 *)(a3 + 48);
  tinfo_property = get_tinfo_property(*v6, 2);
  if ( (tinfo_property & 0xFu) <= 0xA
    || (tinfo_property & 0x3F) == 0x2D
    || (get_tinfo_property(*v6, 2) & 0xF) == 0xB && (unsigned __int8)sub_323900(a2, a3, v6) )
  {
    return 1;
  }
  v10 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v10 - 1) <= 1 || v10 > 69 )
  {
    if ( (get_tinfo_property(*v6, 2) & 0x2F) == 0xD )
      return 1;
    v10 = *(_DWORD *)(a2 + 8);
  }
  if ( v10 == 16 && *(_QWORD *)(a2 + 24) != a3 )
  {
    v11 = sub_256D70(a1 + 16, a2);
    if ( !sub_256740(a2, v11) )
      return 1;
  }
  return sub_25A100(a1, a2, a3, v6);
}
