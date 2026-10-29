char __fastcall sub_678330(_DWORD *a1, _DWORD *a2)
{
  char result; // al
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  bool v6; // sf
  bool v7; // of
  int v8; // eax
  unsigned int v9; // eax
  bool v10; // cf
  unsigned int v11; // edx

  if ( *a1 != *a2 )
    return *a1 < *a2;
  v3 = a1[4];
  v4 = a2[4];
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)v3) & 1) != 0 )
    return v3 & 1;
  v5 = a1[4] & 1;
  v7 = __OFSUB__(v3, v4);
  v6 = v3 - v4 < 0;
  if ( v3 != v4 )
    return v5 ^ v6 ^ v7;
  v8 = a2[3];
  v7 = __OFSUB__(a1[3], v8);
  v6 = a1[3] - v8 < 0;
  if ( a1[3] != v8 )
    return v5 ^ v6 ^ v7;
  v9 = a2[2];
  v10 = a1[2] < v9;
  if ( a1[2] != v9 )
    return v5 ^ v10;
  v11 = a2[1];
  result = 0;
  v10 = a1[1] < v11;
  if ( a1[1] != v11 )
    return v5 ^ v10;
  return result;
}

