__int64 __fastcall sub_3E3AF0(_DWORD *a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // r8d
  __int64 result; // rax

  v3 = a1[88];
  if ( a2 >= v3 )
  {
    v4 = a1[20];
    if ( a2 <= v4 + a1[119] - 1 )
    {
      if ( ((a2 - v3) & (v4 - 1)) == 0 && a3 <= v4 )
        return (unsigned int)((a2 - v3) / v4);
      return 0xFFFFFFFFLL;
    }
  }
  if ( a1[120] != a2 )
  {
    result = 49;
    if ( a1[121] == a2 )
      return result;
    return 0xFFFFFFFFLL;
  }
  return 48;
}
