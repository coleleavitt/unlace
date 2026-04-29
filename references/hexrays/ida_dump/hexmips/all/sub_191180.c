__int64 __fastcall sub_191180(__int64 a1, __int64 a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  signed int v4; // eax

  if ( (*(_BYTE *)(a1 + 288) & 1) == 0 )
    sub_191160(a1);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 != 1 )
  {
    v4 = *(_DWORD *)(a2 + 64);
    if ( v4 >= *(_DWORD *)(a1 + 48) )
    {
      v3 = *(_DWORD *)(a2 + 40);
      if ( (int)v3 >= v4 )
        v4 = *(_DWORD *)(a2 + 40);
      if ( v2 == 4 )
        v3 = v4;
      LOBYTE(v3) = v3 != *(_DWORD *)(a1 + 24);
    }
  }
  return v3;
}
