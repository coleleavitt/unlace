__int64 __fastcall sub_CCDD40(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 *v6; // rcx
  int v7; // edi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 *i; // rax
  __int64 v13; // rdx
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rax

  v5 = *(unsigned int *)(a1 + 32);
  v6 = *(__int64 **)(a1 + 24);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (__int64 *)((char *)v6 + v5);
  v10 = 16LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; i += 2 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v7 && a2 == v13 )
        {
LABEL_10:
          v15 = i[1];
          if ( v15 )
            ++*(_DWORD *)(v15 + 8);
          v16 = *a3;
          if ( *a3 && (v17 = a3[1], v18 = *(_DWORD *)(v16 + 8) == 1, --*(_DWORD *)(v16 + 8), v18) )
          {
            sub_15D7BC0(v17, v16);
            *a3 = v15;
            return 1;
          }
          else
          {
            *a3 = v15;
            return 1;
          }
        }
      }
      else if ( !v13 )
      {
        return 0;
      }
    }
  }
  for ( ; v11 != v6; v6 += 2 )
  {
    v19 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(v19 + 12) == v7 && a2 == v19 )
      {
        i = v6;
        goto LABEL_10;
      }
    }
    else if ( !v19 )
    {
      return 0;
    }
  }
  return 0;
}

