__int64 __fastcall sub_A08060(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  unsigned int v3; // esi
  unsigned __int8 v4; // dl
  __int64 v5; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 336) + 90LL) )
    return 1;
  if ( *(_BYTE *)(a1 + 932) )
    return 1;
  v1 = *(_QWORD *)(a1 + 568);
  if ( !v1 )
    return 1;
  v2 = v1 + 24LL * *(unsigned int *)(v1 - 4);
  if ( v2 == v1 )
    return 1;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 12);
    if ( v3 != -1 )
    {
      v4 = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v3 + 3);
      if ( (v4 & 0x40) != 0 )
      {
        v5 = ((v4 >> 4) & 3) == 2 ? sub_999840(a1, v3) : *(_QWORD *)(a1 + 600) + 32LL * v3;
        if ( (*(_BYTE *)(v5 + 20) & 1) != 0 || *(_DWORD *)(v5 + 16) != 1 )
        {
          result = sub_A077A0(a1, (__int64 *)v1);
          if ( !(_BYTE)result )
            break;
        }
      }
    }
    v1 += 24;
    if ( v1 == v2 )
      return 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 336) + 92LL) )
    *(_BYTE *)(a1 + 932) = 1;
  return result;
}

