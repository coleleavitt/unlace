__int64 __fastcall sub_178EA20(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // bp
  __int64 *v8; // rax
  unsigned __int64 v9; // rdi
  __int64 *i; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  unsigned __int64 v13; // rdi
  __int64 **v14; // rax
  __int64 **v15; // rax

  if ( !a2 )
    return *(unsigned int *)(a1 + 56);
  v6 = (unsigned __int8)a3;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return sub_178DD20(a2, v6, a3, a4, a5, a6);
  v8 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  a4 = *v8;
  v9 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( *v8 < v9 )
  {
    v15 = (__int64 **)*v8;
    while ( 1 )
    {
      a3 = *v15;
      if ( *((_WORD *)*v15 + 18) == 166 )
        break;
      if ( (__int64 **)v9 == ++v15 )
        goto LABEL_10;
    }
    if ( (__int64 **)v9 == v15 )
      goto LABEL_10;
    return 4;
  }
  if ( a4 != v9 )
  {
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 166 )
    {
      for ( i = (__int64 *)(v9 + 8); ; ++i )
      {
        a3 = i;
        if ( (__int64 *)a4 == i )
          break;
        v11 = *i;
        if ( *(_WORD *)(v11 + 36) == 166 )
          return 4;
      }
      goto LABEL_10;
    }
    return 4;
  }
LABEL_10:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return sub_178DD20(a2, v6, a3, a4, a5, a6);
  v12 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  a4 = *v12;
  v13 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( *v12 >= v13 )
  {
    if ( a4 == v13 )
      return sub_178DD20(a2, v6, a3, a4, a5, a6);
    while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 163 )
    {
      v13 += 8LL;
      if ( a4 == v13 )
        return sub_178DD20(a2, v6, a3, a4, a5, a6);
    }
  }
  else
  {
    v14 = (__int64 **)*v12;
    while ( 1 )
    {
      a3 = *v14;
      if ( *((_WORD *)*v14 + 18) == 163 )
        break;
      if ( (__int64 **)v13 == ++v14 )
        return sub_178DD20(a2, v6, a3, a4, a5, a6);
    }
    if ( (__int64 **)v13 == v14 )
      return sub_178DD20(a2, v6, a3, a4, a5, a6);
  }
  return 1;
}
