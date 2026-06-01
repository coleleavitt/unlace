__int64 __fastcall sub_204C1C0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = *(_QWORD **)(a1 + 48);
  if ( v1 == (_QWORD *)(a1 + 48) )
    return 0;
  if ( !v1 )
    BUG();
  if ( *((_BYTE *)v1 - 24) != 30 )
    return 0;
  v2 = *(_QWORD **)(a1 + 56);
  if ( v2 )
  {
    if ( v1 == v2 )
      return 0;
  }
  if ( *(_QWORD **)(v1[2] + 56LL) == v1 )
    return 0;
  v3 = *v1;
  if ( !*v1 )
    return 0;
  result = v3 - 24;
  if ( v3 == 24 )
    return 0;
  if ( *(_BYTE *)(v3 - 24) != 85 )
    return 0;
  v5 = *(_QWORD *)(v3 - 56);
  if ( !v5 || *(_BYTE *)v5 != 13 || *(_QWORD *)(v5 + 24) != *(_QWORD *)(v3 + 56) || *(_DWORD *)(v5 + 36) != 146 )
    return 0;
  return result;
}
