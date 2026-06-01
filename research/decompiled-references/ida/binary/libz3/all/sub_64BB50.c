__int64 __fastcall sub_64BB50(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __int64 *v6; // rcx
  int v7; // edi
  unsigned int v8; // r11d
  __int64 v9; // r10
  __int64 *v10; // rsi
  __int64 v11; // r11
  __int64 *v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 *i; // rax
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax

  v3 = *(unsigned int *)(a1 + 2272);
  v6 = *(__int64 **)(a1 + 2264);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v3 - 1;
  v9 = 16 * v3;
  v10 = &v6[(unsigned __int64)v9 / 8];
  v11 = 16LL * (v7 & v8);
  v12 = &v6[(unsigned __int64)v11 / 8];
  if ( v11 == v9 )
  {
LABEL_9:
    if ( v6 != v12 )
    {
      for ( i = v6; v12 != i; i += 2 )
      {
        v17 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v17 + 12) == v7 && a2 == v17 )
          {
            v18 = &v6[(unsigned __int64)v11 / 8];
            if ( v11 != v9 )
              goto LABEL_22;
LABEL_25:
            while ( v12 != v6 )
            {
              v20 = *v6;
              if ( (unsigned __int64)*v6 > 1 )
              {
                if ( *(_DWORD *)(v20 + 12) == v7 && a2 == v20 )
                {
                  v18 = v6;
                  goto LABEL_34;
                }
              }
              else if ( !v20 )
              {
                break;
              }
              v6 += 2;
            }
LABEL_36:
            BUG();
          }
        }
        else if ( !v17 )
        {
          return 0;
        }
      }
    }
    return 0;
  }
  v13 = &v6[(unsigned __int64)v11 / 8];
  while ( 1 )
  {
    v14 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v14 )
      return 0;
LABEL_5:
    v13 += 2;
    if ( v10 == v13 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v14 + 12) != v7 || a2 != v14 )
    goto LABEL_5;
  v18 = &v6[(unsigned __int64)v11 / 8];
  while ( 1 )
  {
LABEL_22:
    while ( 1 )
    {
      v19 = *v18;
      if ( (unsigned __int64)*v18 > 1 )
        break;
      if ( !v19 )
        goto LABEL_36;
      v18 += 2;
      if ( v10 == v18 )
        goto LABEL_25;
    }
    if ( *(_DWORD *)(v19 + 12) == v7 && a2 == v19 )
      break;
    v18 += 2;
    if ( v10 == v18 )
      goto LABEL_25;
  }
LABEL_34:
  *a3 = (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18[1] + 16LL))(v18[1], v10);
  return 1;
}

