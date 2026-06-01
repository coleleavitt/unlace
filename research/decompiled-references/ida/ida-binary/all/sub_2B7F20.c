__int64 __fastcall sub_2B7F20(_QWORD *a1, unsigned __int8 *a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // esi
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ecx

  v3 = sub_47B6A0(QT::QCoreApplication::self, 0);
  v4 = a1[24];
  v5 = 20LL * a1[25];
  v6 = v4 + v5;
  if ( (v3 & 4) != 0 || (v3 & 2) == 0 )
  {
    if ( v4 != v6 )
    {
      v7 = *a2;
LABEL_5:
      while ( v7 != *(_BYTE *)v4 )
      {
LABEL_10:
        v4 += 20;
        if ( v4 == v6 )
          goto LABEL_11;
      }
      if ( v7 )
      {
        while ( *((_DWORD *)a2 + 1) != *(_DWORD *)(v4 + 4) )
        {
          v4 += 20;
          if ( v4 == v6 )
            goto LABEL_11;
          if ( !*(_BYTE *)v4 )
            goto LABEL_10;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( *((_DWORD *)a2 + 3) == *(_DWORD *)(v4 + 12) )
          {
            v13 = *(_DWORD *)(v4 + 16);
            if ( *((_DWORD *)a2 + 4) >= v13 && *((_DWORD *)a2 + 4) <= v13 && *((_DWORD *)a2 + 2) == *(_DWORD *)(v4 + 8) )
              break;
          }
          v4 += 20;
          if ( v4 == v6 )
            goto LABEL_11;
          if ( *(_BYTE *)v4 )
          {
            v4 += 20;
            if ( v4 != v6 )
              goto LABEL_5;
            goto LABEL_11;
          }
        }
      }
      if ( v4 != v6 )
        return 1;
    }
LABEL_11:
    v8 = a1[37];
    v9 = v8 + 20LL * a1[38];
    if ( v8 != v9 )
    {
      v10 = *a2;
LABEL_13:
      while ( (_BYTE)v10 != *(_BYTE *)v8 )
      {
LABEL_18:
        v8 += 20;
        if ( v9 == v8 )
          return 0;
      }
      if ( (_BYTE)v10 )
      {
        while ( *((_DWORD *)a2 + 1) != *(_DWORD *)(v8 + 4) )
        {
          v8 += 20;
          if ( v8 == v9 )
            return 0;
          if ( !*(_BYTE *)v8 )
            goto LABEL_18;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( *((_DWORD *)a2 + 3) == *(_DWORD *)(v8 + 12) )
          {
            v12 = *(_DWORD *)(v8 + 16);
            if ( *((_DWORD *)a2 + 4) >= v12 && *((_DWORD *)a2 + 4) <= v12 && *((_DWORD *)a2 + 2) == *(_DWORD *)(v8 + 8) )
              break;
          }
          v8 += 20;
          if ( v8 == v9 )
            return v10;
          if ( *(_BYTE *)v8 )
          {
            v8 += 20;
            if ( v9 != v8 )
              goto LABEL_13;
            return 0;
          }
        }
      }
      LOBYTE(v10) = v8 != v9;
      return v10;
    }
    return 0;
  }
  if ( !v5 )
    return 0;
  v10 = *a2;
LABEL_28:
  while ( (_BYTE)v10 != *(_BYTE *)v4 )
  {
LABEL_33:
    v4 += 20;
    if ( v4 == v6 )
      return 0;
  }
  if ( (_BYTE)v10 )
  {
    while ( *((_DWORD *)a2 + 1) != *(_DWORD *)(v4 + 4) )
    {
      v4 += 20;
      if ( v4 == v6 )
        return 0;
      if ( !*(_BYTE *)v4 )
        goto LABEL_33;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( *((_DWORD *)a2 + 3) == *(_DWORD *)(v4 + 12) )
      {
        v14 = *((_DWORD *)a2 + 4);
        if ( *(_DWORD *)(v4 + 16) <= v14 && *(_DWORD *)(v4 + 16) >= v14 && *((_DWORD *)a2 + 2) == *(_DWORD *)(v4 + 8) )
          break;
      }
      v4 += 20;
      if ( v4 == v6 )
        return v10;
      if ( *(_BYTE *)v4 )
      {
        v4 += 20;
        if ( v4 != v6 )
          goto LABEL_28;
        return 0;
      }
    }
  }
  if ( v4 == v6 )
    return 0;
  v15 = a1[37];
  v16 = v15 + 20LL * a1[38];
  if ( v15 == v16 )
    return 1;
LABEL_59:
  while ( (_BYTE)v10 != *(_BYTE *)v15 )
  {
LABEL_64:
    v15 += 20;
    if ( v16 == v15 )
      return 1;
  }
  if ( (_BYTE)v10 )
  {
    while ( *((_DWORD *)a2 + 1) != *(_DWORD *)(v15 + 4) )
    {
      v15 += 20;
      if ( v16 == v15 )
        return v10;
      if ( !*(_BYTE *)v15 )
        goto LABEL_64;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( *((_DWORD *)a2 + 3) == *(_DWORD *)(v15 + 12) )
      {
        v17 = *((_DWORD *)a2 + 4);
        if ( *(_DWORD *)(v15 + 16) <= v17 && *(_DWORD *)(v15 + 16) >= v17 && *((_DWORD *)a2 + 2) == *(_DWORD *)(v15 + 8) )
          break;
      }
      v15 += 20;
      if ( v16 == v15 )
        return 1;
      if ( *(_BYTE *)v15 )
      {
        v15 += 20;
        if ( v16 != v15 )
          goto LABEL_59;
        return 1;
      }
    }
  }
  LOBYTE(v10) = v16 == v15;
  return v10;
}
