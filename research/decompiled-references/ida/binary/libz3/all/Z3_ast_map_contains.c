bool __fastcall Z3_ast_map_contains(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  __int64 v5; // rax
  int v6; // r8d
  __int64 *v7; // rdi
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 *v11; // r9
  __int64 *v12; // rdx
  bool result; // al
  __int64 v14; // rcx
  __int64 v15; // rdx

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29EB10();
  v5 = *(unsigned int *)(a2 + 40);
  v6 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = *(__int64 **)(a2 + 32);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (__int64 *)((char *)v7 + v5);
  v10 = 16LL * (v6 & v8);
  v11 = &v7[(unsigned __int64)v10 / 8];
  v12 = &v7[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    do
    {
      v14 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
      {
        result = a3 == v14 && *(_DWORD *)(v14 + 12) == v6;
        if ( result )
          goto LABEL_10;
      }
      else if ( !v14 )
      {
        goto LABEL_9;
      }
      v12 += 2;
    }
    while ( v9 != v12 );
  }
  for ( ; v11 != v7; v7 += 2 )
  {
    v15 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      result = a3 == v15 && *(_DWORD *)(v15 + 12) == v6;
      if ( result )
        goto LABEL_10;
    }
    else if ( !v15 )
    {
      break;
    }
  }
LABEL_9:
  result = 0;
LABEL_10:
  if ( v4 )
    byte_1C7EBA0 = 1;
  return result;
}

