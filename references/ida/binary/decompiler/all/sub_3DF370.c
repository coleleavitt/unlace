__int64 __fastcall sub_3DF370(_DWORD *a1, int a2)
{
  int v2; // eax
  __int64 result; // rax
  int v6; // esi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // r8d
  int v11; // edi
  int v12; // esi

  v2 = a1[20];
  if ( a2 > 7 && v2 + a1[102] > a2 )
    return a2 & (unsigned int)-v2;
  v6 = a1[21];
  if ( v6 == 8 && a1[103] <= a2 && v2 + a1[110] > a2 )
    return a2 & (unsigned int)-v2;
  v7 = a1[120];
  if ( v7 <= a2 && v2 + a1[122] > a2 )
    return (-v2 & (unsigned int)(a2 - v7)) + v7;
  v8 = a1[123];
  if ( v8 <= a2 )
  {
    v10 = a1[112];
    if ( v10 + a1[130] > a2 )
      return (unsigned int)(a2 - (a2 - v8) % v10);
  }
  v9 = a1[132];
  if ( v9 <= a2 && a1[139] + 8 > a2 )
    return v9 + ((a2 - v9) & 0xFFFFFFF8);
  v11 = a1[140];
  if ( v11 <= a2 && a1[155] + 16 > a2 )
    return v11 + ((a2 - v11) & 0xFFFFFFF0);
  if ( v6 == 8 )
  {
    v12 = a1[156];
    if ( v12 <= a2 && a1[171] + 32 > a2 )
      return v12 + ((a2 - v12) & 0xFFFFFFE0);
  }
  if ( a1[172] <= a2 && a1[174] >= a2 )
    return 0xFFFFFFFFLL;
  result = (unsigned int)a1[111];
  if ( (_DWORD)result + 1 != a2 )
    return (unsigned int)a2;
  return result;
}
