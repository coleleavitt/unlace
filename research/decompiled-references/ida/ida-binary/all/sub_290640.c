__int64 __fastcall sub_290640(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // edx

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = 0;
  if ( v2 < v3 != v5 < v4 )
    return v6;
  if ( v2 != v5 )
  {
    if ( v3 == v4 )
    {
      v6 = v3 - v2;
      v8 = v2 - v3;
      if ( v2 - v3 < 0 )
        v8 = v3 - v2;
      v9 = v3 - v5;
      if ( v9 <= 0 )
        v9 = -v9;
      LOBYTE(v6) = v8 < (unsigned __int64)v9;
    }
    else if ( v2 >= v3 )
    {
      LOBYTE(v6) = v2 < v5;
    }
    else
    {
      LOBYTE(v6) = v2 > v5;
    }
    return v6;
  }
  v10 = v3 - v2;
  v11 = -v10;
  if ( v10 <= 0 )
    v10 = -v10;
  v12 = v4 - v2;
  v13 = -v12;
  if ( v12 > 0 )
    v13 = v12;
  LOBYTE(v11) = v13 < (unsigned __int64)v10;
  return v11;
}
