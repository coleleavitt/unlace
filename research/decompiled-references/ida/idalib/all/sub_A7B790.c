bool __fastcall sub_A7B790(__int64 a1, _BYTE *a2)
{
  bool v3; // bp
  __int64 v4; // rax
  __int64 *v5; // rdx
  unsigned __int64 v6; // rcx
  char v7; // si
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 *v15; // rax
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 i; // rcx
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 *j; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  __int64 v39; // rcx
  __int64 *v40; // rax

  if ( (a2[28] & 0x7Fu) - 40 <= 6 )
  {
    v3 = (unsigned int)sub_A7B500(a1, (__int64)a2) == 0;
    if ( (a2[29] & 1) == 0 )
      return 0;
  }
  else
  {
    v3 = 0;
    if ( (a2[29] & 1) == 0 )
      return 0;
  }
  v4 = sub_B8C3D0(a2);
  v5 = *(__int64 **)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( *(_QWORD *)v4 < v6 )
  {
    v11 = *(__int64 **)v4;
    while ( *(_WORD *)(*v11 + 36) != 160 )
    {
      if ( (__int64 *)v6 == ++v11 )
      {
        v7 = a2[29] & 1;
        goto LABEL_16;
      }
    }
    v7 = a2[29] & 1;
    if ( (__int64 *)v6 == v11 )
      goto LABEL_16;
  }
  else
  {
    v7 = a2[29] & 1;
    if ( v5 == (__int64 *)v6 )
      goto LABEL_16;
    if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) != 160 )
    {
      v8 = (__int64 *)(v6 + 8);
      while ( v8 != v5 )
      {
        v9 = *v8++;
        if ( *(_WORD *)(v9 + 36) == 160 )
          goto LABEL_37;
      }
      goto LABEL_16;
    }
  }
LABEL_37:
  if ( !v7 )
    BUG();
  v25 = sub_B8C3D0(a2);
  v26 = *(_QWORD **)v25;
  v27 = *(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8);
  if ( (unsigned __int64)v26 >= v27 )
  {
    if ( v26 != (_QWORD *)v27 )
    {
      if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 160 )
        goto LABEL_75;
      v28 = v27 + 8;
      for ( i = v28; v26 != (_QWORD *)v28; i = v28 )
      {
        v28 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 160 )
          goto LABEL_75;
      }
    }
LABEL_99:
    BUG();
  }
  v38 = v26;
  while ( *(_WORD *)(*v38 + 36LL) != 160 )
  {
    if ( (_QWORD *)v27 == ++v38 )
      goto LABEL_99;
  }
  if ( (_QWORD *)v27 == v38 )
    goto LABEL_99;
LABEL_75:
  v39 = *v26;
  if ( *(_WORD *)(*v26 + 36LL) != 160 )
  {
    v40 = v26 + 1;
    do
      v39 = *v40++;
    while ( *(_WORD *)(v39 + 36) != 160 );
  }
  v7 = a2[29] & 1;
  if ( (*(_BYTE *)(v39 + 38) & 4) == 0 )
    goto LABEL_79;
LABEL_16:
  if ( !v7 )
    return 0;
  v12 = sub_B8C3D0(a2);
  v13 = *(__int64 **)v12;
  v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
  if ( *(_QWORD *)v12 >= v14 )
  {
    if ( v13 != (__int64 *)v14 )
    {
      if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 159 )
        goto LABEL_52;
      v30 = (__int64 *)(v14 + 8);
      while ( v30 != v13 )
      {
        v31 = *v30++;
        if ( *(_WORD *)(v31 + 36) == 159 )
          goto LABEL_52;
      }
    }
  }
  else
  {
    v15 = *(__int64 **)v12;
    while ( *(_WORD *)(*v15 + 36) != 159 )
    {
      if ( (__int64 *)v14 == ++v15 )
        goto LABEL_21;
    }
    if ( (__int64 *)v14 != v15 )
    {
LABEL_52:
      if ( (a2[29] & 1) == 0 )
        goto LABEL_100;
      v32 = sub_B8C3D0(a2);
      v33 = *(_QWORD *)v32;
      v34 = *(_QWORD *)v32 + 8LL * *(unsigned int *)(v32 + 8);
      if ( v33 >= v34 )
      {
        if ( v33 == v34 )
          goto LABEL_100;
        while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 159 )
        {
          v34 += 8LL;
          if ( v33 == v34 )
            goto LABEL_100;
        }
      }
      else
      {
        v35 = v33;
        while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 159 )
        {
          v35 += 8LL;
          if ( v34 == v35 )
            goto LABEL_100;
        }
        if ( v34 == v35 )
LABEL_100:
          BUG();
      }
      while ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 159 )
        v33 += 8LL;
      v7 = a2[29] & 1;
      if ( (*(_BYTE *)(*(_QWORD *)v33 + 38LL) & 4) != 0 )
      {
        if ( !v3 )
          goto LABEL_30;
        goto LABEL_22;
      }
LABEL_79:
      if ( !v3 )
        goto LABEL_30;
      if ( !v7 )
        return 1;
      v16 = 1;
      goto LABEL_23;
    }
  }
LABEL_21:
  v7 = a2[29] & 1;
  if ( !v3 )
    goto LABEL_30;
LABEL_22:
  v16 = 0;
  if ( !v7 )
    return 0;
LABEL_23:
  v17 = sub_B8C3D0(a2);
  v18 = *(_QWORD *)v17;
  v19 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
  if ( *(_QWORD *)v17 >= v19 )
  {
    if ( v18 != v19 )
    {
      while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 224 )
      {
        v19 += 8LL;
        if ( v18 == v19 )
          goto LABEL_27;
      }
      return 1;
    }
  }
  else
  {
    v20 = *(_QWORD *)v17;
    while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 224 )
    {
      v20 += 8;
      if ( v19 == v20 )
        goto LABEL_27;
    }
    if ( v19 != v20 )
      return 1;
  }
LABEL_27:
  if ( v16 )
    return 1;
  v7 = a2[29] & 1;
LABEL_30:
  if ( !v7 )
    return 0;
  v21 = sub_B8C3D0(a2);
  v22 = *(__int64 **)v21;
  v23 = *(_QWORD *)v21 + 8LL * *(unsigned int *)(v21 + 8);
  if ( *(_QWORD *)v21 < v23 )
  {
    v24 = *(__int64 **)v21;
    while ( *(_WORD *)(*v24 + 36) != 163 )
    {
      if ( (__int64 *)v23 == ++v24 )
        return 0;
    }
    if ( (__int64 *)v23 != v24 )
      return (unsigned int)sub_A56D40(a1, a2) == 0;
    return 0;
  }
  if ( v22 == (__int64 *)v23 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 163 )
  {
    for ( j = (__int64 *)(v23 + 8); v22 != j; ++j )
    {
      v37 = *j;
      if ( *(_WORD *)(v37 + 36) == 163 )
        return (unsigned int)sub_A56D40(a1, a2) == 0;
    }
    return 0;
  }
  return (unsigned int)sub_A56D40(a1, a2) == 0;
}
