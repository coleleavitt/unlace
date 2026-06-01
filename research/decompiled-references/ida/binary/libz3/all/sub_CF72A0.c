__int64 __fastcall sub_CF72A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // esi
  __int64 *v7; // rcx
  unsigned int v8; // edx
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  unsigned int v17; // r10d
  __int64 *v18; // rdi
  __int64 v19; // r10
  __int64 *v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax

  v3 = *(unsigned int *)(a1 + 8);
  v5 = *(_DWORD *)(a3 + 12);
  v7 = *(__int64 **)a1;
  v8 = v3 - 1;
  v3 *= 8;
  v9 = (__int64 *)(*(_QWORD *)a1 + v3);
  v10 = 8LL * (v5 & v8);
  v11 = &v7[(unsigned __int64)v10 / 8];
  if ( v10 == v3 )
  {
LABEL_17:
    while ( v11 != v7 )
    {
      v23 = *v7;
      if ( (unsigned __int64)*v7 > 1 )
      {
        if ( *(_DWORD *)(v23 + 12) == v5 && v23 == a3 )
          goto LABEL_9;
      }
      else if ( !v23 )
      {
        return 0;
      }
      ++v7;
    }
    return 0;
  }
  v12 = &v7[(unsigned __int64)v10 / 8];
  while ( 1 )
  {
    v13 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
      break;
    if ( !v13 )
      return 0;
LABEL_5:
    if ( v9 == ++v12 )
      goto LABEL_17;
  }
  if ( *(_DWORD *)(v13 + 12) != v5 || v13 != a3 )
    goto LABEL_5;
LABEL_9:
  v15 = *(unsigned int *)(a2 + 8);
  v16 = *(__int64 **)a2;
  v17 = v15 - 1;
  v15 *= 8;
  v18 = (__int64 *)((char *)v16 + v15);
  v19 = 8LL * (v5 & v17);
  v20 = &v16[(unsigned __int64)v19 / 8];
  v21 = &v16[(unsigned __int64)v19 / 8];
  if ( v19 != v15 )
  {
    do
    {
      v22 = *v21;
      if ( (unsigned __int64)*v21 > 1 )
      {
        if ( *(_DWORD *)(v22 + 12) == v5 && v22 == a3 )
          return 0;
      }
      else if ( !v22 )
      {
        return 1;
      }
      ++v21;
    }
    while ( v18 != v21 );
  }
  if ( v16 == v20 )
    return 1;
  while ( 2 )
  {
    v24 = *v16;
    if ( (unsigned __int64)*v16 > 1 )
    {
      if ( *(_DWORD *)(v24 + 12) == v5 && v24 == a3 )
        return 0;
      goto LABEL_29;
    }
    if ( v24 )
    {
LABEL_29:
      if ( v20 == ++v16 )
        return 1;
      continue;
    }
    return 1;
  }
}

