bool __fastcall sub_9AA220(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 i; // rax
  __int64 v7; // rax

  v1 = sub_F67D30(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v1 || (*(_BYTE *)(v1 + 29) & 1) == 0 )
    return 0;
  v3 = sub_B8C3D0(v1);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
  if ( *(_QWORD *)v3 < v5 )
  {
    v7 = *(_QWORD *)v3;
    while ( 1 )
    {
      v4 = v7;
      if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 186 )
        break;
      v7 += 8;
      if ( v5 == v7 )
        return 0;
    }
  }
  else
  {
    if ( v4 == v5 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) != 186 )
    {
      for ( i = v5 + 8; ; i += 8LL )
      {
        v5 = i;
        if ( v4 == i )
          break;
        if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) == 186 )
          return v4 != v5;
      }
      return 0;
    }
  }
  return v4 != v5;
}
