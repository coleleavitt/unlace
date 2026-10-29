bool __fastcall sub_B69240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 *v21; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 *v26; // rax
  unsigned __int64 i; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v7 = sub_B68580(a1);
  v8 = sub_A71BE0(*(_QWORD *)(v7 + 88), a1, a3, a4, a5, a6);
  v11 = *v8;
  v12 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( *v8 < v12 )
  {
    v26 = (__int64 *)*v8;
    while ( 1 )
    {
      v11 = *v26;
      if ( *(_WORD *)(*v26 + 36) == 411 )
        break;
      if ( (__int64 *)v12 == ++v26 )
        goto LABEL_11;
    }
    if ( (__int64 *)v12 != v26 )
      return 1;
  }
  else if ( v11 != v12 )
  {
    v13 = (__int64 *)(v12 + 8);
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 411 )
      return 1;
    while ( 1 )
    {
      v12 = (unsigned __int64)v13;
      if ( (__int64 *)v11 == v13 )
        break;
      v14 = *v13++;
      if ( *(_WORD *)(v14 + 36) == 411 )
        return 1;
    }
  }
LABEL_11:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v15 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v15 = sub_B68580(a1);
  v16 = sub_A71BE0(*(_QWORD *)(v15 + 88), a1, v11, v12, v9, v10);
  v19 = *v16;
  v20 = *v16 + 8LL * *((unsigned int *)v16 + 2);
  if ( *v16 >= v20 )
  {
    if ( v19 != v20 )
    {
      while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 415 )
      {
        v20 += 8LL;
        if ( v19 == v20 )
          goto LABEL_18;
      }
      return 1;
    }
  }
  else
  {
    v21 = (__int64 *)*v16;
    while ( 1 )
    {
      v19 = *v21;
      if ( *(_WORD *)(*v21 + 36) == 415 )
        break;
      if ( (__int64 *)v20 == ++v21 )
        goto LABEL_18;
    }
    if ( (__int64 *)v20 != v21 )
      return 1;
  }
LABEL_18:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v22 = sub_B68690(a1, a1, v19, v20, v17, v18);
  v23 = *v22;
  v24 = *v22 + 8LL * *((unsigned int *)v22 + 2);
  if ( *v22 < v24 )
  {
    v25 = *v22;
    while ( 1 )
    {
      v23 = v25;
      if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 417 )
        break;
      v25 += 8LL;
      if ( v24 == v25 )
        return 0;
    }
    return v23 != v24;
  }
  if ( v23 == v24 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 417 )
    return v23 != v24;
  for ( i = v24 + 8; ; i += 8LL )
  {
    v24 = i;
    if ( v23 == i )
      break;
    if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 417 )
      return v23 != v24;
  }
  return 0;
}

