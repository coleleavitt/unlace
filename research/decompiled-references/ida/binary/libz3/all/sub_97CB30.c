char __fastcall sub_97CB30(__int64 a1)
{
  int v1; // eax

  LOBYTE(v1) = 1;
  if ( *(_BYTE *)(a1 + 848) )
  {
    if ( (*(_BYTE *)(a1 + 812) & 1) != 0 || (*(_BYTE *)(a1 + 836) & 1) != 0 )
      return (unsigned int)sub_182EB00(*(_QWORD *)(a1 + 800), a1 + 808, a1 + 832) >> 31;
    else
      LOBYTE(v1) = *(_DWORD *)(a1 + 808) < *(_DWORD *)(a1 + 832);
  }
  return v1;
}

