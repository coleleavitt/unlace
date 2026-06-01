__int64 __fastcall sub_B3F1E0(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // eax
  char v5; // si
  char v6; // di

  v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1F;
  v2 = (**(_DWORD **)(a1 + 24) >> 14) & 0x1F;
  v3 = (**(_DWORD **)(a1 + 32) >> 14) & 0x1F;
  if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
    return v2 | v1 | v3 | 0xEu;
  v5 = *(_BYTE *)(a1 + 2);
  v6 = (**(_DWORD **)(a1 + 32) >> 14) & 0x1F;
  if ( (v5 & 8) != 0 )
    v6 = v2;
  else
    LOBYTE(v3) = v2;
  return v6 & 0xC | ((unsigned __int8)v1 | (unsigned __int8)(v6 | v3)) & 0x13u;
}

