__int64 __fastcall sub_1894240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 1;
  v8 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v11 = *v8;
  v12 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( *v8 < v12 )
  {
    v14 = (__int64 *)*v8;
    while ( 1 )
    {
      v9 = *v14;
      if ( *(_WORD *)(*v14 + 36) == 421 )
        break;
      if ( (__int64 *)v12 == ++v14 )
        return 1;
    }
    if ( (__int64 *)v12 == v14 )
      return 1;
  }
  else
  {
    if ( v11 == v12 )
      return 1;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 421 )
    {
      v13 = (__int64 *)(v12 + 8);
      while ( (__int64 *)v11 != v13 )
      {
        v9 = *v13++;
        if ( *(_WORD *)(v9 + 36) == 421 )
          goto LABEL_15;
      }
      return 1;
    }
  }
LABEL_15:
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v15 = sub_B8C3D0(a1, a2, v9, v11, v12, v10);
    v16 = *v15;
    v17 = *v15 + 8LL * *((unsigned int *)v15 + 2);
    if ( *v15 >= v17 )
    {
      if ( v16 == v17 )
        return sub_18940C0(a1, a2, a3);
      while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 421 )
      {
        v17 += 8LL;
        if ( v16 == v17 )
          return sub_18940C0(a1, a2, a3);
      }
    }
    else
    {
      v18 = *v15;
      while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 421 )
      {
        v18 += 8LL;
        if ( v17 == v18 )
          return sub_18940C0(a1, a2, a3);
      }
      if ( v17 == v18 )
        return sub_18940C0(a1, a2, a3);
    }
    return 1;
  }
  return sub_18940C0(a1, a2, a3);
}
