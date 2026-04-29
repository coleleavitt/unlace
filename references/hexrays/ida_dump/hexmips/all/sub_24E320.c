__int64 __fastcall sub_24E320(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbp

  v2 = *(_DWORD *)(a2 + 8) - 51;
  if ( v2 > 0xF )
  {
    return 0;
  }
  else
  {
    v3 = 1;
    if ( ((1LL << v2) & 0x8241) == 0 )
    {
      v3 = 0;
      if ( *(_DWORD *)(a2 + 8) == 64 )
      {
        v4 = *(_QWORD *)(a1 + 64);
        get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
        return (unsigned int)sub_33E560(v4, *(_QWORD *)(a2 + 24)) == 0;
      }
    }
  }
  return v3;
}
