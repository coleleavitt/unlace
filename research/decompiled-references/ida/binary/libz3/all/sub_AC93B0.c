__int64 __fastcall sub_AC93B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // rax

  v4 = *(unsigned int *)(a1 + 48);
  v5 = *(__int64 **)(a1 + 40);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 == v4 )
  {
LABEL_26:
    while ( v10 != v5 )
    {
      v22 = *v5;
      if ( (unsigned __int64)*v5 > 1 )
      {
        if ( *(_DWORD *)(v22 + 12) == v6 && a2 == v22 )
        {
LABEL_24:
          v11 = v5;
          return v11[1];
        }
      }
      else if ( !v22 )
      {
        break;
      }
      v5 += 2;
    }
LABEL_8:
    sub_AC8B40(a1, a2);
    v13 = *(unsigned int *)(a1 + 48);
    v14 = *(_DWORD *)(a2 + 12);
    v5 = *(__int64 **)(a1 + 40);
    v15 = v13 - 1;
    v13 *= 16;
    v16 = (__int64 *)((char *)v5 + v13);
    v17 = 16LL * (v14 & v15);
    v18 = &v5[(unsigned __int64)v17 / 8];
    if ( v17 != v13 )
    {
      v11 = &v5[(unsigned __int64)v17 / 8];
      do
      {
        while ( 1 )
        {
          v19 = *v11;
          if ( (unsigned __int64)*v11 <= 1 )
            break;
          if ( *(_DWORD *)(v19 + 12) == v14 && a2 == v19 )
            return v11[1];
          v11 += 2;
          if ( v16 == v11 )
            goto LABEL_16;
        }
        if ( !v19 )
          goto LABEL_34;
        v11 += 2;
      }
      while ( v16 != v11 );
    }
LABEL_16:
    while ( v18 != v5 )
    {
      v20 = *v5;
      if ( (unsigned __int64)*v5 > 1 )
      {
        if ( *(_DWORD *)(v20 + 12) == v14 && a2 == v20 )
          goto LABEL_24;
      }
      else if ( !v20 )
      {
        break;
      }
      v5 += 2;
    }
LABEL_34:
    BUG();
  }
  v11 = &v5[(unsigned __int64)v9 / 8];
  while ( 1 )
  {
    v12 = *v11;
    if ( (unsigned __int64)*v11 > 1 )
      break;
    if ( !v12 )
      goto LABEL_8;
LABEL_5:
    v11 += 2;
    if ( v8 == v11 )
      goto LABEL_26;
  }
  if ( *(_DWORD *)(v12 + 12) != v6 || a2 != v12 )
    goto LABEL_5;
  return v11[1];
}

