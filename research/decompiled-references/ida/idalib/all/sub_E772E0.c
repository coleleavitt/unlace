__int64 __fastcall sub_E772E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v6; // rax
  __int64 *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v12; // rcx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return (*(_BYTE *)(*(_QWORD *)(sub_B8C330(a1) + 2320) + 212LL) >> 2) & 3;
  v6 = (__int64 **)sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v7 = *v6;
  v8 = (unsigned __int64)&(*v6)[*((unsigned int *)v6 + 2)];
  if ( (unsigned __int64)v7 < v8 )
  {
    v12 = v7;
    while ( *(_WORD *)(*v12 + 36) != 252 )
    {
      if ( (__int64 *)v8 == ++v12 )
        return (*(_BYTE *)(*(_QWORD *)(sub_B8C330(a1) + 2320) + 212LL) >> 2) & 3;
    }
    if ( (__int64 *)v8 != v12 )
      goto LABEL_10;
    return (*(_BYTE *)(*(_QWORD *)(sub_B8C330(a1) + 2320) + 212LL) >> 2) & 3;
  }
  if ( v7 == (__int64 *)v8 )
    return (*(_BYTE *)(*(_QWORD *)(sub_B8C330(a1) + 2320) + 212LL) >> 2) & 3;
  if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 252 )
  {
    v9 = (__int64 *)(v8 + 8);
    while ( v7 != v9 )
    {
      v10 = *v9++;
      if ( *(_WORD *)(v10 + 36) == 252 )
        goto LABEL_10;
    }
    return (*(_BYTE *)(*(_QWORD *)(sub_B8C330(a1) + 2320) + 212LL) >> 2) & 3;
  }
LABEL_10:
  while ( *(_WORD *)(*v7 + 36) != 252 )
    ++v7;
  return *(unsigned int *)(*v7 + 40);
}
