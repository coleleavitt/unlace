__int64 __fastcall sub_A0B560(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  unsigned int v3; // esi
  unsigned __int8 v4; // al
  int *v5; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 464) + 90LL) )
    return 1;
  if ( *(_BYTE *)(a1 + 1124) )
    return 1;
  v1 = *(_QWORD *)(a1 + 696);
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
      v4 = *(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v3 + 3);
      if ( (v4 & 0x40) != 0 )
      {
        v5 = ((v4 >> 4) & 3) == 2 ? sub_9ACE50(a1, v3) : (int *)(*(_QWORD *)(a1 + 728) + 96LL * v3);
        if ( *v5 || (v5[13] & 1) != 0 || v5[12] != 1 || v5[16] )
        {
          result = sub_A0ACA0(a1, (__int64 *)v1);
          if ( !(_BYTE)result )
            break;
        }
      }
    }
    v1 += 24;
    if ( v1 == v2 )
      return 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 464) + 92LL) )
    *(_BYTE *)(a1 + 1124) = 1;
  return result;
}

