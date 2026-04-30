__int64 __fastcall sub_233C80(__int64 a1)
{
  int v1; // eax
  int v2; // esi
  __int64 result; // rax
  int i; // ecx
  __int64 v5; // rdx
  int v6; // esi
  int j; // ecx
  __int64 v8; // rdx

  v1 = *(_DWORD *)(a1 + 44);
  if ( v1 < 0 || v1 >= *(_DWORD *)(dbg + 64) )
    return 0;
  if ( *(_BYTE *)(a1 + 32) != 0xFF )
  {
    v2 = *(char *)(a1 + 33);
    if ( v2 > 0 )
    {
      result = 0;
      for ( i = 0; i != v2; ++i )
      {
        v5 = 1LL << i;
        result |= v5;
      }
      return result;
    }
    return 0;
  }
  v6 = 4 * sub_233C20(v1);
  result = 0;
  if ( v6 > 0 )
  {
    for ( j = 0; j != v6; ++j )
    {
      v8 = 1LL << j;
      result |= v8;
    }
  }
  return result;
}
