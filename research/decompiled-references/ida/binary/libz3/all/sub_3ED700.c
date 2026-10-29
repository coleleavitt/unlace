char __fastcall sub_3ED700(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    LOBYTE(v3) = sub_1848D40(a1, a2, a3);
  }
  else if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    return (unsigned int)sub_182C7B0(a1, a2, a3) >> 31;
  }
  else
  {
    LOBYTE(v3) = *(_DWORD *)a2 < *(_DWORD *)a3;
  }
  return v3;
}

