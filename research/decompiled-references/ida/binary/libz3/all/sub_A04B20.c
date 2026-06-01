__int64 __fastcall sub_A04B20(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  unsigned int v3; // esi
  unsigned __int8 v4; // dl
  int *v5; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 400) + 90LL) )
    return 1;
  if ( *(_BYTE *)(a1 + 1028) )
    return 1;
  v1 = *(_QWORD *)(a1 + 632);
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
      v4 = *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v3 + 3);
      if ( (v4 & 0x40) != 0 )
      {
        v5 = ((v4 >> 4) & 3) == 2 ? sub_9AA360(a1, v3) : (int *)(*(_QWORD *)(a1 + 664) + ((unsigned __int64)v3 << 6));
        if ( (v5[5] & 1) != 0 || v5[4] != 1 || v5[8] )
        {
          result = sub_A04260(a1, (__int64 *)v1);
          if ( !(_BYTE)result )
            break;
        }
      }
    }
    v1 += 24;
    if ( v1 == v2 )
      return 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 400) + 92LL) )
    *(_BYTE *)(a1 + 1028) = 1;
  return result;
}

