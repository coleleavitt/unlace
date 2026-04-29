char __fastcall sub_3FE40(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // eax
  int v5; // r8d
  unsigned __int16 v6; // cx
  unsigned int v7; // esi
  bool v8; // dl
  char result; // al

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  v6 = *(_WORD *)(a2 + 24);
  if ( v4 < v5
    || v4 >= *(_DWORD *)(v3 + 108)
    || *(_BYTE *)(a2 + 41) != 11
    || (*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8) & 4) == 0
    || (result = 1, *(unsigned __int16 *)(a2 + 46) != a3) )
  {
    v7 = *(_DWORD *)(a2 + 28);
    v8 = a3 == 0;
    result = v8 & (v7 >> 1);
    if ( !result && (v7 & 0x2000) != 0 )
    {
      if ( v6 > 0x48Du )
      {
        return v8 && v6 == 1175;
      }
      else
      {
        result = v8;
        if ( v6 <= 0x487u )
          return (unsigned __int16)(v6 - 17) <= 3u && v8;
      }
    }
  }
  return result;
}
