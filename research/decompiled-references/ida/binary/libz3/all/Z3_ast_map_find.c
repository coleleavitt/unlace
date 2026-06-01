__int64 __fastcall Z3_ast_map_find(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // bl
  __int64 v6; // rdx
  int v7; // edi
  __int64 *v8; // rcx
  unsigned int v9; // r9d
  __int64 *v10; // rsi
  __int64 v11; // r9
  __int64 *v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-30h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29EB50();
  v6 = *(unsigned int *)(a2 + 40);
  v7 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = *(__int64 **)(a2 + 32);
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (__int64 *)((char *)v8 + v6);
  v11 = 16LL * (v7 & v9);
  v12 = &v8[(unsigned __int64)v11 / 8];
  v13 = &v8[(unsigned __int64)v11 / 8];
  if ( v11 == v6 )
  {
LABEL_15:
    while ( v12 != v8 )
    {
      v16 = *v8;
      if ( (unsigned __int64)*v8 > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v7 && a3 == v16 )
        {
          v13 = v8;
          goto LABEL_13;
        }
      }
      else if ( !v16 )
      {
        break;
      }
      v8 += 2;
    }
LABEL_10:
    sub_24EA30(a1, 3u, nullptr);
    if ( !v5 )
      return 0;
    sub_2BB620(0);
    result = 0;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v14 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v14 )
      goto LABEL_10;
LABEL_7:
    v13 += 2;
    if ( v10 == v13 )
      goto LABEL_15;
  }
  if ( *(_DWORD *)(v14 + 12) != v7 || a3 != v14 )
    goto LABEL_7;
LABEL_13:
  result = v13[1];
  if ( v5 )
  {
    v17 = result;
    sub_2BB620(result);
    result = v17;
LABEL_24:
    byte_1C7EBA0 = 1;
  }
  return result;
}

