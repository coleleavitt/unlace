char __fastcall sub_B156B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
    return (unsigned int)sub_182EB00(a1, a2, a3) >> 31;
  else
    LOBYTE(v3) = *(_DWORD *)a3 > *(_DWORD *)a2;
  return v3;
}

