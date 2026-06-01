bool __fastcall sub_179AE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rcx

  v6 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v7 = *v6;
  v8 = *v6 + 8LL * *((unsigned int *)v6 + 2);
  if ( v7 < v8 )
  {
    v9 = v7;
    while ( 1 )
    {
      v7 = v9;
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 397 )
        break;
      v9 += 8LL;
      if ( v8 == v9 )
        return 0;
    }
    return v7 != v8;
  }
  if ( v7 == v8 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 397 )
  {
    for ( i = v8 + 8; ; i += 8LL )
    {
      v8 = i;
      if ( v7 == i )
        break;
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 397 )
        return v7 != v8;
    }
    return 0;
  }
  return v7 != v8;
}
