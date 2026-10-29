__int64 *__fastcall sub_204C0F0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v3; // rsi
  __int64 *result; // rax
  __int64 *v5; // rdx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 == a1 + 48 )
    return nullptr;
  if ( !v1 )
    BUG();
  if ( *(_BYTE *)(v1 - 24) != 30 )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( v1 - 24 == v2 - 24 )
      return nullptr;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v1 + 16) + 56LL) == v1 )
    return nullptr;
  v3 = *(__int64 **)v1;
  if ( !*(_QWORD *)v1 )
    return nullptr;
  result = v3 - 3;
  if ( v3 == &qword_18 )
    return nullptr;
  if ( (*(_DWORD *)(v1 - 20) & 0x7FFFFFF) != 0 )
  {
    v5 = *(__int64 **)(v1 - 32LL * (*(_DWORD *)(v1 - 20) & 0x7FFFFFF) - 24);
    if ( v5 )
    {
      if ( v5 != result )
        return nullptr;
      if ( *((_BYTE *)v3 - 24) == 78 )
      {
        if ( *(__int64 **)(v3[2] + 56) == v3 )
          return nullptr;
        v6 = *v3;
        if ( !*v3 )
          return nullptr;
        result = (__int64 *)(v6 - 24);
        if ( v6 == 24 || (__int64 *)*(v3 - 7) != result )
          return nullptr;
      }
    }
  }
  if ( *(_BYTE *)result != 85 || (*((_WORD *)result + 1) & 3) != 2 )
    return nullptr;
  return result;
}
