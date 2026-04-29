char __fastcall sub_31C4E0(__int64 a1, __int64 a2, int a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rax
  __int64 v6; // rdx

  v3 = *(_DWORD *)(a2 + 8);
  v4 = (unsigned int)(v3 - 51);
  if ( (unsigned int)v4 > 0xE )
    return (*(_BYTE *)(a2 + 56) & 2) != 0 || v3 == 68;
  v6 = 25473;
  if ( _bittest64(&v6, v4)
    && (*(_DWORD *)(a1 + 8) == 52 || (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 0xB || a3 <= 4)
    || (*(_BYTE *)(a2 + 56) & 2) != 0 )
  {
    return 1;
  }
  if ( v3 == 57 )
    return get_tinfo_property(*(_QWORD *)(a2 + 48), 17) != 0;
  return 0;
}
