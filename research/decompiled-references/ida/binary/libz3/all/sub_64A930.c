bool __fastcall sub_64A930(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r9
  __int64 *i; // rax
  __int64 v12; // rdx
  bool result; // al
  __int64 v14; // rax
  int v15; // r9d
  __int64 *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 *v19; // rdi
  __int64 v20; // rcx
  __int64 *v21; // r10
  __int64 *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(unsigned int *)(a1 + 32);
  v5 = *(__int64 **)(a1 + 24);
  v6 = *(_DWORD *)(v2 + 12);
  v7 = v3 - 1;
  v3 *= 16;
  v8 = (__int64 *)((char *)v5 + v3);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != v3 )
  {
    for ( i = &v5[(unsigned __int64)v9 / 8]; v8 != i; i += 2 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && v2 == v12 )
        {
LABEL_10:
          v14 = i[1];
          v15 = *(_DWORD *)(a2 + 12);
          v16 = *(__int64 **)v14;
          v17 = *(unsigned int *)(v14 + 8);
          v18 = v17 - 1;
          v17 *= 8;
          v19 = (__int64 *)((char *)v16 + v17);
          v20 = 8LL * (v15 & v18);
          v21 = &v16[(unsigned __int64)v20 / 8];
          v22 = &v16[(unsigned __int64)v20 / 8];
          if ( v20 != v17 )
          {
            do
            {
              while ( 1 )
              {
                v23 = *v22;
                if ( (unsigned __int64)*v22 <= 1 )
                  break;
                result = v23 == a2 && *(_DWORD *)(v23 + 12) == v15;
                if ( result )
                  return result;
                if ( v19 == ++v22 )
                  goto LABEL_17;
              }
              if ( !v23 )
                return 0;
              ++v22;
            }
            while ( v19 != v22 );
          }
LABEL_17:
          while ( v21 != v16 )
          {
            v24 = *v16;
            if ( (unsigned __int64)*v16 > 1 )
            {
              result = v24 == a2 && *(_DWORD *)(v24 + 12) == v15;
              if ( result )
                return result;
            }
            else if ( !v24 )
            {
              return 0;
            }
            ++v16;
          }
          return 0;
        }
      }
      else if ( !v12 )
      {
        return 0;
      }
    }
  }
  if ( v5 == v10 )
    return 0;
  while ( 1 )
  {
    v25 = *v5;
    if ( (unsigned __int64)*v5 <= 1 )
      break;
    if ( *(_DWORD *)(v25 + 12) == v6 && v2 == v25 )
    {
      i = v5;
      goto LABEL_10;
    }
LABEL_28:
    v5 += 2;
    if ( v10 == v5 )
      return 0;
  }
  if ( v25 )
    goto LABEL_28;
  return 0;
}

