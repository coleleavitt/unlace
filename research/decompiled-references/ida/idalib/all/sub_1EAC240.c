__int64 __fastcall sub_1EAC240(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  __int64 result; // rax

  if ( !a2 )
    return 1;
  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 == 5 || v2 <= 1 )
    return (2 * *(_DWORD *)(a2 + 2596) + 2) | 1u;
  v3 = *(_QWORD **)(a1 + 192);
  v4 = 8LL * *(unsigned int *)(a1 + 200);
  v5 = &v3[(unsigned __int64)v4 / 8];
  v6 = v4 >> 3;
  if ( !(v4 >> 5) )
  {
    v8 = *(_QWORD **)(a1 + 192);
LABEL_17:
    if ( v6 != 2 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 1 )
          return 0;
        goto LABEL_28;
      }
      if ( a2 == *v8 )
        return 6;
      ++v8;
    }
    if ( a2 == *v8 )
      return 2 * (unsigned int)(v5 - v8);
    ++v8;
LABEL_28:
    result = 0;
    if ( a2 != *v8 )
      return result;
    return 2 * (unsigned int)(v5 - v8);
  }
  if ( a2 == *v3 )
    return 2 * (unsigned int)(v4 >> 3);
  if ( a2 == v3[1] )
    return 2 * (unsigned int)((v4 - 8) >> 3);
  if ( a2 == v3[2] )
    return 2 * (unsigned int)((v4 - 16) >> 3);
  v7 = &v3[4 * (v4 >> 5)];
  if ( a2 == v3[3] )
    return 2 * (unsigned int)((v4 - 24) >> 3);
  while ( 1 )
  {
    v8 = v3 + 4;
    if ( v7 == v3 + 4 )
    {
      v6 = v5 - v8;
      goto LABEL_17;
    }
    if ( a2 == v3[4] )
      return 2 * (unsigned int)(v5 - v8);
    if ( a2 == v3[5] )
      return 2 * (unsigned int)(v5 - (v3 + 5));
    if ( a2 == v3[6] )
      return 2 * (unsigned int)(v5 - (v3 + 6));
    if ( a2 == v3[7] )
      return 2 * (unsigned int)(v5 - (v3 + 7));
    v3 += 4;
  }
}
