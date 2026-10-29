__int64 __fastcall Z3_model_get_const_interp(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // bl
  __int64 v6; // rax
  int v7; // edi
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v18; // rax

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29B4C0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      goto LABEL_28;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      return 0;
    }
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a3 + 12);
  v8 = *(__int64 **)(v6 + 24);
  v9 = *(unsigned int *)(v6 + 32);
  v10 = v9 - 1;
  v9 *= 24;
  v11 = (__int64 *)((char *)v8 + v9);
  v12 = 24LL * (v7 & v10);
  v13 = &v8[(unsigned __int64)v12 / 8];
  if ( v12 != v9 )
  {
    for ( i = &v8[(unsigned __int64)v12 / 8]; v11 != i; i += 3 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v7 && a3 == v15 )
        {
LABEL_14:
          v16 = i[2];
          if ( v16 )
          {
            sub_251FD0(a1, i[2]);
            if ( v5 )
            {
              sub_2BB620(v16);
              goto LABEL_29;
            }
            return v16;
          }
LABEL_10:
          if ( v5 )
            goto LABEL_30;
          return 0;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_10;
      }
    }
  }
  if ( v8 == v13 )
    goto LABEL_10;
  while ( 1 )
  {
    v18 = *v8;
    if ( (unsigned __int64)*v8 <= 1 )
      break;
    if ( *(_DWORD *)(v18 + 12) == v7 && a3 == v18 )
    {
      i = v8;
      goto LABEL_14;
    }
LABEL_21:
    v8 += 3;
    if ( v13 == v8 )
      goto LABEL_10;
  }
  if ( v18 )
    goto LABEL_21;
  if ( !v5 )
    return 0;
LABEL_30:
  sub_2BB620(0);
LABEL_28:
  v16 = 0;
LABEL_29:
  byte_1C7EBA0 = 1;
  return v16;
}

