__int64 __fastcall sub_36D670(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1504);
  if ( (*(_BYTE *)(v3 + 49) & 8) == 0 )
    return 0;
  v4 = *(_DWORD *)(v3 + 80);
  if ( *(_DWORD *)(a3 + 88) != v4
    || *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 131LL) == v4
    || (get_tinfo_property(*a2, 2) & 0xF) != 8 )
  {
    return 0;
  }
  v6[0] = 8;
  copy_tinfo_t(a2, v6);
  clear_tinfo_t(v6);
  return 1;
}
