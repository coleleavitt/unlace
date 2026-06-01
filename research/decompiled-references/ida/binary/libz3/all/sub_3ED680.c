bool __fastcall sub_3ED680(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    if ( !(unsigned int)sub_182C7B0(a1, a2, a3) )
      goto LABEL_4;
    return 0;
  }
  if ( *(_DWORD *)a2 != *(_DWORD *)a3 )
    return 0;
LABEL_4:
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 || (*(_BYTE *)(a3 + 20) & 1) != 0 )
    return (unsigned int)sub_182C7B0(a1, a2 + 16, a3 + 16) == 0;
  else
    return *(_DWORD *)(a2 + 16) == *(_DWORD *)(a3 + 16);
}

