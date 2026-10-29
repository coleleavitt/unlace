__int64 *__fastcall sub_5FEA40(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 *v6; // rdx
  int v7; // edi
  unsigned int v8; // r10d
  __int64 *v9; // rsi
  __int64 v10; // r10
  __int64 *v11; // r8
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  _DWORD *v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // rdi

  v5 = *(unsigned int *)(a1 + 56);
  v6 = *(__int64 **)(a1 + 48);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (__int64 *)((char *)v6 + v5);
  v10 = 16LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 == v5 )
  {
LABEL_9:
    while ( v11 != v6 )
    {
      v14 = *v6;
      if ( (unsigned __int64)*v6 > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v7 && a2 == v14 )
        {
          v12 = v6;
          goto LABEL_18;
        }
      }
      else if ( !v14 )
      {
        break;
      }
      v6 += 2;
    }
LABEL_45:
    BUG();
  }
  v12 = &v6[(unsigned __int64)v10 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
        break;
      if ( !v13 )
        goto LABEL_45;
      v12 += 2;
      if ( v9 == v12 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v13 + 12) == v7 && a2 == v13 )
      break;
    v12 += 2;
    if ( v9 == v12 )
      goto LABEL_9;
  }
LABEL_18:
  v15 = v12[1];
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    v17 = (_DWORD *)(v15 + 4 * v16);
    v18 = (4 * v16) >> 2;
    if ( (4 * v16) >> 4 )
    {
      v19 = (_DWORD *)v12[1];
      while ( *v19 != a3 )
      {
        if ( v19[1] == a3 )
        {
          ++v19;
          goto LABEL_26;
        }
        if ( v19[2] == a3 )
        {
          v19 += 2;
          goto LABEL_26;
        }
        if ( v19[3] == a3 )
        {
          v19 += 3;
          goto LABEL_26;
        }
        v19 += 4;
        if ( (_DWORD *)(v15 + 16 * ((4 * v16) >> 4)) == v19 )
        {
          v18 = v17 - v19;
          goto LABEL_35;
        }
      }
      goto LABEL_26;
    }
    v19 = (_DWORD *)v12[1];
LABEL_35:
    if ( v18 != 2 )
    {
      if ( v18 != 3 )
      {
        if ( v18 != 1 )
          return v12 + 1;
        goto LABEL_38;
      }
      if ( *v19 == a3 )
      {
LABEL_26:
        if ( v17 != v19 )
        {
          if ( v17 != v19 + 1 )
          {
            memmove(v19, v19 + 1, (char *)(v17 - 1) - (char *)v19);
            LODWORD(v16) = *(_DWORD *)(v15 - 4);
          }
          *(_DWORD *)(v15 - 4) = v16 - 1;
        }
        return v12 + 1;
      }
      ++v19;
    }
    if ( *v19 != a3 )
    {
      ++v19;
LABEL_38:
      if ( *v19 != a3 )
        return v12 + 1;
      goto LABEL_26;
    }
    goto LABEL_26;
  }
  return v12 + 1;
}

