bool __fastcall sub_B9CEB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 *i; // rax
  __int64 v18; // rcx
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax

  v6 = *(_QWORD *)(a1 + 128);
  if ( !v6 )
  {
    a2 = *(_QWORD *)(a1 + 104);
    sub_7052B0((__int64 *)(a2 + 96), a2, a3, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 128);
    if ( !v6 )
      return 0;
  }
  v7 = *(_QWORD *)(v6 + 88);
  if ( !v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_4;
  v14 = sub_B8C3D0(*(_QWORD *)(v6 + 88), a2, a3, a4, a5, a6);
  v15 = (__int64 *)*v14;
  v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
  if ( *v14 >= v16 )
  {
    if ( v15 == (__int64 *)v16 )
      goto LABEL_4;
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 214 )
    {
      for ( i = (__int64 *)(v16 + 8); v15 != i; ++i )
      {
        v18 = *i;
        if ( *(_WORD *)(v18 + 36) == 214 )
          return 1;
      }
      goto LABEL_4;
    }
    return 1;
  }
  v23 = *v14;
  while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 214 )
  {
    v23 += 8LL;
    if ( v16 == v23 )
      goto LABEL_4;
  }
  if ( v16 != v23 )
    return 1;
LABEL_4:
  v8 = sub_B97300(v7);
  if ( !v8 || (*(_BYTE *)(v8 + 29) & 1) == 0 )
    return 0;
  v19 = sub_B8C3D0(v8, a2, v9, v10, v11, v12);
  v20 = *v19;
  v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( v20 >= v21 )
  {
    if ( v20 != v21 )
    {
      while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 214 )
      {
        v21 += 8LL;
        if ( v20 == v21 )
          return 0;
      }
      return v20 != v21;
    }
    return 0;
  }
  v22 = v20;
  while ( 1 )
  {
    v20 = v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 214 )
      break;
    v22 += 8LL;
    if ( v21 == v22 )
      return 0;
  }
  return v20 != v21;
}
