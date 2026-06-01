__int64 __fastcall sub_431700(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  int v6; // esi
  __int64 *v7; // rdx
  unsigned int v8; // r9d
  __int64 *v9; // rcx
  __int64 v10; // r9
  __int64 *v11; // rdi
  __int64 *i; // rax
  __int64 v13; // rbx
  unsigned int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf

  v5 = *(unsigned int *)(a1 + 56);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(__int64 **)(a1 + 48);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (__int64 *)((char *)v7 + v5);
  v10 = 16LL * (v6 & v8);
  v11 = &v7[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    for ( i = &v7[(unsigned __int64)v10 / 8]; v9 != i; i += 2 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v6 && a2 == v13 )
          goto LABEL_10;
      }
      else if ( !v13 )
      {
LABEL_8:
        v14 = 0;
        goto LABEL_13;
      }
    }
  }
  if ( v7 == v11 )
  {
LABEL_24:
    v13 = 0;
    v14 = 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *v7;
        if ( (unsigned __int64)*v7 > 1 )
          break;
        if ( !v13 )
          goto LABEL_8;
        v7 += 2;
        if ( v11 == v7 )
          goto LABEL_24;
      }
      if ( *(_DWORD *)(v13 + 12) == v6 && a2 == v13 )
        break;
      v7 += 2;
      if ( v11 == v7 )
        goto LABEL_24;
    }
    i = v7;
LABEL_10:
    v13 = i[1];
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v14 = 1;
  }
LABEL_13:
  v15 = *a3;
  if ( *a3 && (v16 = a3[1], v17 = *(_DWORD *)(v15 + 8) == 1, --*(_DWORD *)(v15 + 8), v17) )
  {
    sub_15D7BC0(v16, v15);
    *a3 = v13;
    return v14;
  }
  else
  {
    *a3 = v13;
    return v14;
  }
}

