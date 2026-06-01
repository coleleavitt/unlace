__int64 __fastcall sub_178DFB0(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  __int64 *i; // rax
  __int64 v9; // rcx
  unsigned __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax

  if ( !a2 )
    return *(unsigned int *)(a1 + 56);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return sub_178DD20(a2, 0, a3, a4, a5, a6);
  v7 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  a3 = (__int64 *)*v7;
  a4 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 < a4 )
  {
    v12 = (__int64 *)*v7;
    while ( 1 )
    {
      a3 = (__int64 *)*v12;
      if ( *(_WORD *)(*v12 + 36) == 166 )
        break;
      if ( (__int64 *)a4 == ++v12 )
        goto LABEL_10;
    }
    if ( (__int64 *)a4 == v12 )
      goto LABEL_10;
    return 4;
  }
  if ( a3 != (__int64 *)a4 )
  {
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 166 )
    {
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( a3 == i )
          break;
        v9 = *i;
        if ( *(_WORD *)(v9 + 36) == 166 )
          return 4;
      }
      goto LABEL_10;
    }
    return 4;
  }
LABEL_10:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return sub_178DD20(a2, 0, a3, a4, a5, a6);
  v10 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  a3 = (__int64 *)*v10;
  a4 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( *v10 >= a4 )
  {
    if ( a3 == (__int64 *)a4 )
      return sub_178DD20(a2, 0, a3, a4, a5, a6);
    while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 163 )
    {
      a4 += 8LL;
      if ( a3 == (__int64 *)a4 )
        return sub_178DD20(a2, 0, a3, a4, a5, a6);
    }
  }
  else
  {
    v11 = (__int64 *)*v10;
    while ( 1 )
    {
      a3 = (__int64 *)*v11;
      if ( *(_WORD *)(*v11 + 36) == 163 )
        break;
      if ( (__int64 *)a4 == ++v11 )
        return sub_178DD20(a2, 0, a3, a4, a5, a6);
    }
    if ( (__int64 *)a4 == v11 )
      return sub_178DD20(a2, 0, a3, a4, a5, a6);
  }
  return 1;
}
