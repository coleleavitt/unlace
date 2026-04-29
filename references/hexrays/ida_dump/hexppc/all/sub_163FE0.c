__int64 __fastcall sub_163FE0(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // esi
  __int64 v4; // r8
  _DWORD *v5; // rax

  if ( *(_BYTE *)a2 == 4 )
    return 0;
  if ( *(_BYTE *)a2 != 1 )
    return 0xFFFFFFFFLL;
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 > 4 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 44);
  v4 = v3;
  if ( v3 > 0 )
  {
    v5 = (_DWORD *)(a1 + 48);
    v4 = v3;
    while ( v2 != *v5 )
    {
      if ( ++v5 == (_DWORD *)(a1 + 48 + 4LL * v3) )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  *(_DWORD *)(a1 + 44) = v3 + 1;
  *(_DWORD *)(a1 + 4 * v4 + 48) = v2;
  return 0;
}
