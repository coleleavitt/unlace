__int64 __fastcall sub_3E4920(_DWORD *a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  __int64 result; // rax
  int v7; // ecx
  int v8; // edx

  v4 = a1[88];
  if ( a2 >= v4 )
  {
    v5 = a1[20];
    if ( a2 <= v5 + a1[119] - 1 )
    {
      if ( ((a2 - v4) & (v5 - 1)) == 0 && a3 <= v5 )
        return (unsigned int)((a2 - v4) / v5);
      return 0xFFFFFFFFLL;
    }
  }
  v7 = a1[173];
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = a1[120];
  result = 0xFFFFFFFFLL;
  if ( a2 >= v8 && a2 <= v7 + a1[151] - 1 )
  {
    if ( ((a2 - v8) & (v7 - 1)) == 0 && a3 <= v7 )
      return (unsigned int)((a2 - v8) / v7 + 32);
    return 0xFFFFFFFFLL;
  }
  return result;
}
