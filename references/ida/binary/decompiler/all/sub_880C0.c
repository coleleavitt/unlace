__int64 __fastcall sub_880C0(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        _BYTE *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // di
  unsigned __int8 v10; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r9
  __int64 v15; // r11
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r9
  __int64 v20; // r11
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r10
  unsigned __int8 v23; // al
  unsigned __int8 v24; // di
  unsigned __int8 v25; // cl
  _QWORD *v26; // r11
  unsigned __int8 v27; // cl
  _QWORD *v28; // r11

  if ( !a3 )
    return 0;
  *a4 = *a1;
  *a5 = 1;
  *a6 = 0;
  v8 = *a1;
  if ( !a1[1] )
  {
    *a4 = v8;
    return 1;
  }
  if ( a3 == v8 )
  {
    v12 = *(_QWORD *)(a3 + 16);
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      *a4 = a3;
      return 1;
    }
    v23 = *(_BYTE *)(v12 + 32);
    v24 = *(_BYTE *)(a2 + 8);
    if ( v23 >= v24 )
    {
      if ( v24 < v23 )
        return 0;
      if ( *(_QWORD *)(v12 + 24) >= *(_QWORD *)a2 )
      {
        if ( *(_QWORD *)(v12 + 24) <= *(_QWORD *)a2 )
        {
          *a6 = v12;
          return 1;
        }
        return 0;
      }
    }
    *a4 = v12;
    *a5 = 0;
    return 1;
  }
  v9 = *(_BYTE *)(a2 + 8);
  v10 = *(_BYTE *)(a3 + 32);
  if ( v10 < v9 )
    goto LABEL_23;
  if ( v9 < v10 )
    goto LABEL_14;
  if ( *(_QWORD *)(a3 + 24) < *(_QWORD *)a2 )
  {
LABEL_23:
    if ( (*(_QWORD *)a3 & 2) != 0 )
    {
      v22 = a3;
    }
    else
    {
      v18 = *(_QWORD *)(a3 + 16);
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v19 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
        v20 = *(_QWORD *)v19;
        if ( (*(_QWORD *)v19 & 2) != 0 )
        {
          if ( v19 == v8 )
            goto LABEL_31;
          v25 = *(_BYTE *)(v19 + 32);
          v26 = (_QWORD *)(v19 + 24);
          v22 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v9 < v25 )
            goto LABEL_31;
          goto LABEL_37;
        }
        if ( *(_QWORD *)(v19 + 16) == a3 )
        {
          while ( 1 )
          {
            v21 = v19;
            v22 = v20 & 0xFFFFFFFFFFFFFFFCLL;
            v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v20 & 2) != 0 )
              break;
            v19 = v22;
            if ( *(_QWORD *)(v22 + 16) != v21 )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          v22 = v19;
        }
        if ( v22 == v8 )
          goto LABEL_31;
      }
      else
      {
        do
        {
          v22 = v18;
          v18 = *(_QWORD *)(v18 + 8);
        }
        while ( (*(_BYTE *)v18 & 2) == 0 );
        if ( v22 == v8 )
          return 0;
      }
    }
    v25 = *(_BYTE *)(v22 + 32);
    v26 = (_QWORD *)(v22 + 24);
    if ( v9 < v25 )
    {
LABEL_39:
      if ( (**(_BYTE **)(a3 + 16) & 2) == 0 )
      {
        if ( (**(_BYTE **)(v22 + 8) & 2) != 0 )
        {
          *a4 = v22;
          *a5 = 1;
          return 1;
        }
        return 0;
      }
LABEL_31:
      *a4 = a3;
      *a5 = 0;
      return 1;
    }
LABEL_37:
    if ( v25 < v9 || *(_QWORD *)a2 >= *v26 )
      return 0;
    goto LABEL_39;
  }
  if ( *(_QWORD *)(a3 + 24) <= *(_QWORD *)a2 )
  {
    *a6 = a3;
    return 1;
  }
LABEL_14:
  if ( (*(_QWORD *)a3 & 2) != 0 )
  {
    v17 = a3;
  }
  else
  {
    v13 = *(_QWORD *)(a3 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
      v15 = *(_QWORD *)v14;
      if ( (*(_QWORD *)v14 & 2) != 0 )
      {
        if ( v14 == v8 )
          goto LABEL_22;
        v27 = *(_BYTE *)(v14 + 32);
        v28 = (_QWORD *)(v14 + 24);
        v17 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v27 < v9 )
          goto LABEL_22;
        goto LABEL_44;
      }
      if ( *(_QWORD *)(v14 + 8) == a3 )
      {
        while ( 1 )
        {
          v16 = v14;
          v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
          v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v15 & 2) != 0 )
            break;
          v14 = v17;
          if ( *(_QWORD *)(v17 + 8) != v16 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        v17 = v14;
      }
      if ( v17 == v8 )
        goto LABEL_22;
    }
    else
    {
      do
      {
        v17 = v13;
        v13 = *(_QWORD *)(v13 + 16);
      }
      while ( (*(_BYTE *)v13 & 2) == 0 );
      if ( v17 == v8 )
        return 0;
    }
  }
  v27 = *(_BYTE *)(v17 + 32);
  v28 = (_QWORD *)(v17 + 24);
  if ( v27 < v9 )
    goto LABEL_51;
LABEL_44:
  if ( v9 >= v27 && *v28 < *(_QWORD *)a2 )
  {
LABEL_51:
    if ( (**(_BYTE **)(a3 + 8) & 2) == 0 )
    {
      if ( (**(_BYTE **)(v17 + 16) & 2) != 0 )
      {
        *a4 = v17;
        *a5 = 0;
        return 1;
      }
      return 0;
    }
LABEL_22:
    *a4 = a3;
    *a5 = 1;
    return 1;
  }
  return 0;
}
