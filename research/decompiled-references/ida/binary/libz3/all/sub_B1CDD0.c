__int64 __fastcall sub_B1CDD0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rax
  int v10; // r8d

  result = 0;
  if ( a2 <= 1 )
    return result;
  if ( a2 != 2 )
  {
    if ( a2 > 9 )
      return sub_B1CC50(a1, a2);
    v5 = sub_B1CC50(a1, a2);
    v6 = a2 - 1;
    v7 = v5;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = (unsigned int)(1 << (a2 - 1));
    if ( v8 == 1 )
    {
      v10 = 1 << (a2 - 1);
    }
    else
    {
      if ( !v8 )
      {
        if ( (unsigned int)v9 + 5 * a2 >= 5 * (int)v7 + HIDWORD(v7) )
          return sub_B1CC50(a1, a2);
        return (v9 << 32) | a2;
      }
      v10 = 2 << v6;
    }
    if ( v10 + 5 * a2 >= 5 * (int)v7 + HIDWORD(v7) )
      return sub_B1CC50(a1, a2);
    if ( v8 != 1 )
      v9 = (unsigned int)(2 << v6);
    return (v9 << 32) | a2;
  }
  v4 = 3;
  if ( *(_DWORD *)(a1 + 16) == 2 )
    v4 = 6;
  return (v4 << 32) | 2;
}

