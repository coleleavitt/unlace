bool __fastcall sub_B78240(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 *i; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_B8C3D0(a1);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 < v4 )
  {
    v7 = *(__int64 **)v2;
    while ( *(_WORD *)(*v7 + 36) != 288 )
    {
      if ( (__int64 *)v4 == ++v7 )
        return 0;
    }
    if ( (__int64 *)v4 == v7 )
      return 0;
    return sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
  }
  if ( v3 != (__int64 *)v4 )
  {
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 288 )
    {
      for ( i = (__int64 *)(v4 + 8); v3 != i; ++i )
      {
        v6 = *i;
        if ( *(_WORD *)(v6 + 36) == 288 )
          return sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
      }
      return 0;
    }
    return sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
  }
  return 0;
}
