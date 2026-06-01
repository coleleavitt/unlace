void __fastcall sub_1894600(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 *v12; // rax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 *i; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  if ( (unsigned __int8)sub_BA7E40(a3, a2, a3, a4, a5, a6) )
    return;
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
LABEL_3:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return;
    v13 = sub_B8C3D0(a2, a2, v7, v8, v9, v10);
    v14 = *v13;
    v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
    if ( *v13 >= v15 )
    {
      if ( v14 == v15 )
        return;
      while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 429 )
      {
        v15 += 8LL;
        if ( v14 == v15 )
          return;
      }
    }
    else
    {
      v16 = *v13;
      while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 429 )
      {
        v16 += 8LL;
        if ( v15 == v16 )
          return;
      }
      if ( v15 == v16 )
        return;
    }
    v19 = sub_B32F60(*a1, ((unsigned __int64)*(unsigned int *)(a3 + 24) << 32) | *(unsigned int *)(a3 + 24), 0);
    sub_B8CC60(a3, v19, v20, v21, v22, v23);
    return;
  }
  v11 = sub_B8C3D0(a3, a2, v7, v8, v9, v10);
  v7 = *v11;
  v8 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( *v11 >= v8 )
  {
    if ( v7 != v8 )
    {
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 386 )
        return;
      for ( i = (__int64 *)(v8 + 8); ; ++i )
      {
        v8 = (unsigned __int64)i;
        if ( (__int64 *)v7 == i )
          break;
        v18 = *i;
        if ( *(_WORD *)(v18 + 36) == 386 )
          return;
      }
    }
    goto LABEL_3;
  }
  v12 = (__int64 *)*v11;
  while ( 1 )
  {
    v7 = *v12;
    if ( *(_WORD *)(*v12 + 36) == 386 )
      break;
    if ( (__int64 *)v8 == ++v12 )
      goto LABEL_3;
  }
  if ( (__int64 *)v8 == v12 )
    goto LABEL_3;
}
