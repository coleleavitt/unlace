bool __fastcall sub_BA8D30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v11; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v8 = *v7;
  v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 < v9 )
  {
    v11 = *v7;
    while ( 1 )
    {
      v8 = v11;
      if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 431 )
        break;
      v11 += 8LL;
      if ( v9 == v11 )
        return 0;
    }
  }
  else
  {
    if ( v8 == v9 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 431 )
    {
      for ( i = v9 + 8; ; i += 8LL )
      {
        v9 = i;
        if ( v8 == i )
          break;
        if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 431 )
          return v8 != v9;
      }
      return 0;
    }
  }
  return v8 != v9;
}
