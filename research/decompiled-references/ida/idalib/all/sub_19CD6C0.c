__int64 __fastcall sub_19CD6C0(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // eax
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 *v13; // rax
  unsigned __int64 *v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 *i; // rax
  __int64 v19; // rcx
  __int64 *j; // rax
  __int64 v21; // rcx

  if ( !a2 || (unsigned int)(*a1 - 3) > 1 && *a1 != 1 )
    return 0;
  if ( !sub_F673B0(*(_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF0LL)) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  v8 = sub_B8C3D0(a2, a2, v2, v3, v4, v5);
  v11 = *v8;
  v12 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( *v8 >= v12 )
  {
    if ( v11 != v12 )
    {
      if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 154 )
        return 2;
      for ( i = (__int64 *)(v12 + 8); ; ++i )
      {
        v12 = (unsigned __int64)i;
        if ( i == (__int64 *)v11 )
          break;
        v19 = *i;
        if ( *(_WORD *)(v19 + 36) == 154 )
          return 2;
      }
    }
  }
  else
  {
    v13 = (__int64 *)*v8;
    while ( 1 )
    {
      v11 = *v13;
      if ( *(_WORD *)(*v13 + 36) == 154 )
        break;
      if ( (__int64 *)v12 == ++v13 )
        goto LABEL_15;
    }
    if ( (__int64 *)v12 != v13 )
      return 2;
  }
LABEL_15:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  v14 = sub_B8C3D0(a2, a2, v11, v12, v9, v10);
  v15 = (__int64 *)*v14;
  v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
  if ( *v14 < v16 )
  {
    v17 = *v14;
    while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 155 )
    {
      v17 += 8LL;
      if ( v16 == v17 )
        goto LABEL_6;
    }
    if ( v16 != v17 )
      return 3;
LABEL_6:
    v6 = sub_FDEF00(*(_QWORD *)(a2 + 40));
    if ( v6 > 5 || ((1LL << v6) & 0x36) == 0 )
      return 2;
    return 3;
  }
  if ( v15 == (__int64 *)v16 )
    goto LABEL_6;
  if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 155 )
  {
    for ( j = (__int64 *)(v16 + 8); j != v15; ++j )
    {
      v21 = *j;
      if ( *(_WORD *)(v21 + 36) == 155 )
        return 3;
    }
    goto LABEL_6;
  }
  return 3;
}
