__int64 __fastcall sub_848CE0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi

  if ( a2 == a3 )
    return 0;
  if ( !rangeset_t_find_range(a1, a2) )
    return 0xFFFFFFFFLL;
  v7 = *(unsigned __int64 **)(a1 + 24);
  v8 = v7[1];
  if ( v8 < a2 + a4 )
    return 4294967294LL;
  if ( a3 >= a3 + a4 )
    return 4294967293LL;
  v9 = *(unsigned __int64 **)a1;
  v10 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v10 )
    return 0;
  while ( a3 >= v9[1] )
  {
    v9 += 2;
    if ( v9 == (unsigned __int64 *)v10 )
      return 0;
  }
  if ( (unsigned __int64 *)v10 == v9 )
    return 0;
  v11 = *v9;
  if ( a3 < *v9 )
  {
    if ( v7 == v9 || v11 - a3 >= a4 )
      return 0;
    return 4294967293LL;
  }
  if ( v7 != v9 )
    return 4294967293LL;
  if ( v11 != a2 )
  {
    if ( a3 >= a2 )
      goto LABEL_14;
    return 4294967293LL;
  }
  if ( a2 >= a3 )
    goto LABEL_15;
LABEL_14:
  if ( v8 != a2 + a4 )
    return 4294967293LL;
LABEL_15:
  if ( v9 != (unsigned __int64 *)(v10 - 16) && v9[2] - a3 < a4 )
    return 4294967293LL;
  return 0;
}
