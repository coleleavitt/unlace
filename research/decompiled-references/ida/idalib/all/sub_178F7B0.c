void __fastcall sub_178F7B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 *i; // rax
  __int64 v24; // rcx
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 *v29; // rax

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v18 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v21 = *v18;
  v22 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( *v18 < v22 )
  {
    v29 = (__int64 *)*v18;
    while ( 1 )
    {
      v21 = *v29;
      if ( *(_WORD *)(*v29 + 36) == 165 )
        break;
      if ( (__int64 *)v22 == ++v29 )
        goto LABEL_9;
    }
    if ( (__int64 *)v22 != v29 )
      return;
  }
  else if ( v21 != v22 )
  {
    if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 165 )
      return;
    for ( i = (__int64 *)(v22 + 8); ; ++i )
    {
      v22 = (unsigned __int64)i;
      if ( (__int64 *)v21 == i )
        break;
      v24 = *i;
      if ( *(_WORD *)(v24 + 36) == 165 )
        return;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_2:
    v6 = sub_168B6C0(a1);
    v7 = sub_B32320(v6, 0, 0);
    sub_B8CC60(a2, v7, v8, v9, v10, v11);
    v12 = sub_168B6C0(a1);
    v13 = sub_B32290(v12, 0, 0);
    sub_B8CC60(a2, v13, v14, v15, v16, v17);
    return;
  }
  v25 = sub_B8C3D0(a2, a2, v21, v22, v19, v20);
  v26 = *v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( *v25 >= v27 )
  {
    if ( v26 != v27 )
    {
      while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 160 )
      {
        v27 += 8LL;
        if ( v26 == v27 )
          goto LABEL_2;
      }
      return;
    }
    goto LABEL_2;
  }
  v28 = *v25;
  while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 160 )
  {
    v28 += 8LL;
    if ( v27 == v28 )
      goto LABEL_2;
  }
  if ( v27 == v28 )
    goto LABEL_2;
}
