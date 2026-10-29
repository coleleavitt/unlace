char __fastcall sub_B286B0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx

  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v3 = a2 + 8;
      if ( (*(_BYTE *)(a1 + 28) & 1) != 0
        || *(_DWORD *)(a1 + 24) != 1
        || (*(_BYTE *)(a2 + 28) & 1) != 0
        || *(_DWORD *)(a2 + 24) != 1 )
      {
        LOBYTE(v2) = sub_1848D40(qword_1C7F2C0, a1 + 8, v3);
      }
      else if ( (*(_BYTE *)(a1 + 12) & 1) != 0 || (*(_BYTE *)(a2 + 12) & 1) != 0 )
      {
        return (unsigned int)sub_182C7B0(qword_1C7F2C0, a1 + 8, v3) >> 31;
      }
      else
      {
        LOBYTE(v2) = *(_DWORD *)(a1 + 8) < *(_DWORD *)(a2 + 8);
      }
    }
    else
    {
      LOBYTE(v2) = *(_DWORD *)a2 != 0;
    }
  }
  else
  {
    LOBYTE(v2) = 0;
    if ( !*(_DWORD *)a1 )
      LOBYTE(v2) = *(_DWORD *)a2 != 0;
  }
  return v2;
}

