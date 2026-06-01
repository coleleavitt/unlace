__int64 __fastcall sub_C5F10(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  int v3; // esi
  int i; // ecx
  __int64 v5; // rdx
  char v6; // cl

  v1 = *(_DWORD *)(a1 + 44);
  if ( v1 < 0 )
    return -1;
  result = -1;
  if ( v1 < *(_DWORD *)(dbg + 64LL) )
  {
    v3 = sub_C5EC0(a1);
    result = 0;
    if ( v3 > 0 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 1LL << i;
        result |= v5;
      }
    }
    v6 = *(_BYTE *)(a1 + 32);
    if ( v6 != -1 )
      result <<= v6;
  }
  return result;
}

