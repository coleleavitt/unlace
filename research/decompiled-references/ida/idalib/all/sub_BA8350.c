bool __fastcall sub_BA8350(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 i; // rax

  if ( (unsigned int)sub_BA8080(a1, a2, a3, a4, a5, a6) != 3 || (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v11 = sub_B8C3D0(a1, a2, v6, v7, v8, v9);
  v12 = *v11;
  v13 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( *v11 < v13 )
  {
    v14 = *v11;
    while ( 1 )
    {
      v12 = v14;
      if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 427 )
        break;
      v14 += 8LL;
      if ( v13 == v14 )
        return 0;
    }
    return v12 != v13;
  }
  if ( v12 == v13 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 427 )
    return v12 != v13;
  for ( i = v13 + 8; ; i += 8LL )
  {
    v13 = i;
    if ( v12 == i )
      break;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 427 )
      return v12 != v13;
  }
  return 0;
}
