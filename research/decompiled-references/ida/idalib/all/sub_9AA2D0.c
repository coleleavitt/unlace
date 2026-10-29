bool __fastcall sub_9AA2D0(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 i; // rax
  __int64 v8; // rax

  v1 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
    return 0;
  v2 = sub_F63270(v1);
  if ( !v2 || (*(_BYTE *)(v2 + 29) & 1) == 0 )
    return 0;
  v4 = sub_B8C3D0(v2);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( *(_QWORD *)v4 < v6 )
  {
    v8 = *(_QWORD *)v4;
    while ( 1 )
    {
      v5 = v8;
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 184 )
        break;
      v8 += 8;
      if ( v6 == v8 )
        return 0;
    }
    return v5 != v6;
  }
  if ( v5 != v6 )
  {
    if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) != 184 )
    {
      for ( i = v6 + 8; ; i += 8LL )
      {
        v6 = i;
        if ( v5 == i )
          break;
        if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) == 184 )
          return v5 != v6;
      }
      return 0;
    }
    return v5 != v6;
  }
  return 0;
}
