char __fastcall sub_2F470(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v9; // rbx
  _QWORD *func; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax

  v6 = *(_WORD *)(a2 + 24);
  if ( v6 > 0x59u )
  {
    if ( v6 == 209 )
    {
      LOBYTE(v7) = 0;
      if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 4 && *(_BYTE *)(a2 + 81) == 5 )
      {
        v11 = *(_QWORD *)(a2 + 88);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
          v11 = (int)v11;
        return v11 >> 63;
      }
      return v7;
    }
    if ( v6 <= 0xD1u )
    {
      if ( v6 > 0x8Eu )
      {
        if ( (unsigned __int16)(v6 - 159) <= 1u )
          goto LABEL_24;
      }
      else
      {
        LOBYTE(v7) = 1;
        if ( v6 > 0x85u || v6 == 94 )
          return v7;
      }
    }
    return (unsigned __int16)(v6 - 736) <= 5u;
  }
  if ( v6 > 0x55u )
  {
    v9 = sub_73080(a1, a2, 0, a4, a5, a6);
    func = (_QWORD *)get_func();
    if ( func )
      return *func == v9;
    else
      return is_spec_ea();
  }
  if ( v6 > 0x12u )
  {
    if ( (unsigned __int16)(v6 - 49) <= 3u )
    {
LABEL_24:
      LOBYTE(v7) = 1;
      return v7;
    }
    return (unsigned __int16)(v6 - 736) <= 5u;
  }
  if ( v6 <= 0xFu )
  {
    if ( v6 == 6 )
    {
      LOBYTE(v7) = 0;
      if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 4 && *(_BYTE *)(a2 + 81) == 5 )
      {
        v12 = *(_QWORD *)(a2 + 88);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
          v12 = (int)v12;
        LOBYTE(v7) = v12 > 0;
      }
      return v7;
    }
    return (unsigned __int16)(v6 - 736) <= 5u;
  }
  return sub_2F310(a1, a2, a3, a4, a5, a6);
}
