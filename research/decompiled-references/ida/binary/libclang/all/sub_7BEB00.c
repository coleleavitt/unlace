__int64 __fastcall sub_7BEB00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v5; // rdx
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax

  v3 = *(_QWORD *)(a2 + 88);
  for ( i = sub_7A0650(a1 + 48, v3); i; i = *(_QWORD *)(v5 + 8) )
  {
    v5 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( (i & 4) == 0 )
    {
      if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x10 && (*(_BYTE *)(v5 + 58) & 2) != 0 && (*(_BYTE *)(v5 + 29) & 2) == 0 )
        return 1;
      break;
    }
    if ( !v5 )
      BUG();
    v9 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(*(_QWORD *)v5 + 28LL) & 0x7F) == 0x10
      && (*(_BYTE *)(v9 + 58) & 2) != 0
      && (*(_BYTE *)(v9 + 29) & 2) == 0 )
    {
      return 1;
    }
  }
  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v6 != 18 )
  {
LABEL_44:
    if ( v6 == 17 )
    {
      v18 = *(_QWORD *)(a1 + 104);
      if ( v18 )
      {
        if ( v18 > 7 )
        {
LABEL_47:
          v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
          v20 = *(_QWORD **)(v19 + 8);
          v21 = &v20[*(unsigned int *)(v19 + 16)];
          goto LABEL_48;
        }
      }
      else
      {
        sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v18 = *(_QWORD *)(a1 + 104);
        if ( v18 > 7 )
          goto LABEL_47;
        if ( !v18 )
        {
          sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v29 = *(_QWORD *)(a1 + 104);
          if ( v29 > 7 )
          {
            v21 = nullptr;
            v20 = *(_QWORD **)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_48:
            if ( v21 != v20 )
            {
              while ( !(unsigned __int8)sub_7BEB00(*v20, a2) )
              {
                if ( v21 == ++v20 )
                  return 0;
              }
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
  {
    if ( v7 <= 7 )
      goto LABEL_40;
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7 <= 7 )
    {
      if ( v7 )
        goto LABEL_40;
      goto LABEL_81;
    }
  }
  if ( (*(_BYTE *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1);
    v7 = *(_QWORD *)(a1 + 120);
    v8 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 56);
    if ( v8 )
      goto LABEL_13;
LABEL_31:
    if ( v7 )
    {
      if ( v7 <= 7 )
        goto LABEL_40;
      goto LABEL_33;
    }
LABEL_81:
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7 <= 7 )
      goto LABEL_101;
LABEL_33:
    v13 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
    {
      v14 = *(unsigned int *)(v13 + 48);
      if ( (_DWORD)v14 )
      {
        v15 = *(_QWORD **)(v13 + 40);
        v16 = (__int64)&v15[v14];
        goto LABEL_36;
      }
      goto LABEL_88;
    }
    sub_7B7DB0(a1);
    v7 = *(_QWORD *)(a1 + 120);
    v13 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v30 = *(unsigned int *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( (_DWORD)v30 )
    {
      v15 = *(_QWORD **)(v13 + 40);
      v16 = (__int64)&v15[v30];
      if ( v7 )
      {
        if ( v7 <= 7 )
        {
          v15 = nullptr;
          goto LABEL_38;
        }
LABEL_36:
        if ( (*(_BYTE *)(v13 + 72) & 1) == 0 )
          goto LABEL_37;
        goto LABEL_85;
      }
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v7 = *(_QWORD *)(a1 + 120);
      if ( v7 <= 7 )
      {
        v15 = nullptr;
LABEL_38:
        while ( !(unsigned __int8)sub_7BEB00(*v15, a2) )
        {
          if ( (_QWORD *)v16 == ++v15 )
            goto LABEL_40;
        }
        return 1;
      }
LABEL_90:
      v31 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
      {
        if ( *(_DWORD *)(v31 + 48) )
          goto LABEL_86;
        goto LABEL_92;
      }
LABEL_85:
      sub_7B7DB0(a1);
      v7 = *(_QWORD *)(a1 + 120);
      v31 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
      {
LABEL_86:
        v15 = *(_QWORD **)(v31 + 40);
        goto LABEL_37;
      }
      if ( !v7 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v7 = *(_QWORD *)(a1 + 120);
      }
      v15 = nullptr;
      if ( v7 <= 7 )
      {
LABEL_37:
        if ( v15 != (_QWORD *)v16 )
          goto LABEL_38;
        goto LABEL_40;
      }
LABEL_92:
      v32 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v32 + 72) & 1) != 0 )
      {
        sub_7B7DB0(a1);
        v32 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v15 = *(_QWORD **)(v32 + 16);
      goto LABEL_37;
    }
    if ( v7 )
    {
      if ( v7 <= 7 )
        goto LABEL_40;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v7 = *(_QWORD *)(a1 + 120);
      v13 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 <= 7 )
      {
LABEL_101:
        if ( !v7 )
        {
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v7 = *(_QWORD *)(a1 + 120);
          if ( v7 > 7 )
          {
            v16 = 0;
            goto LABEL_90;
          }
        }
LABEL_40:
        v17 = sub_7BACE0(a1);
        if ( v17 )
        {
          while ( !(unsigned __int8)sub_7BEB00(v17, a2) )
          {
            v17 = sub_7BACE0(v17);
            if ( !v17 )
              goto LABEL_43;
          }
          return 1;
        }
LABEL_43:
        v6 = *(_BYTE *)(a1 + 28) & 0x7F;
        goto LABEL_44;
      }
    }
LABEL_88:
    if ( (*(_BYTE *)(v13 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a1);
      v7 = *(_QWORD *)(a1 + 120);
      v16 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      if ( !v7 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v7 = *(_QWORD *)(a1 + 120);
      }
      v15 = nullptr;
      if ( v7 <= 7 )
        goto LABEL_37;
    }
    else
    {
      v16 = *(_QWORD *)(v13 + 16) + 8LL * *(unsigned int *)(v13 + 24);
    }
    goto LABEL_90;
  }
  v8 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 56);
  if ( !v8 )
    goto LABEL_33;
LABEL_13:
  while ( *(char *)(v8 + 28) < 0 || (*(_BYTE *)(v8 + 8) & 6) != 0 )
  {
    v8 = *(_QWORD *)(v8 + 128);
    if ( !v8 )
      goto LABEL_31;
  }
LABEL_25:
  v11 = sub_7BD3E0(v8, v3, 1);
  if ( v11 && (*(_BYTE *)(v11 + 29) & 2) == 0 )
    return 1;
  v12 = *(_QWORD *)(v8 + 40);
  if ( (v12 & 7) != 0 || v12 <= 7 || (v22 = sub_79C190(v8 + 48)) == 0 )
  {
LABEL_29:
    while ( 1 )
    {
      v8 = *(_QWORD *)(v8 + 128);
      if ( !v8 )
        break;
      if ( *(char *)(v8 + 28) >= 0 && (*(_BYTE *)(v8 + 8) & 6) == 0 )
        goto LABEL_25;
    }
    v7 = *(_QWORD *)(a1 + 120);
    goto LABEL_31;
  }
  while ( (*(_BYTE *)(v22 + 28) & 0x7F) != 0x49 )
  {
    v23 = *(_QWORD *)(v22 + 8);
    v22 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v23 <= 7 )
      goto LABEL_29;
  }
  v24 = *(_QWORD *)(a2 + 40) & 7LL;
  while ( 1 )
  {
    v25 = *(_QWORD *)(v22 + 40);
    if ( (v25 & 7) != 0 )
    {
      if ( (_DWORD)v24 )
        break;
      v26 = 0;
    }
    else
    {
      v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      v27 = 0;
      if ( (_DWORD)v24 )
        goto LABEL_64;
    }
    v27 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_64:
    if ( v26 == v27 )
      break;
    do
    {
      v28 = *(_QWORD *)(v22 + 8);
      v22 = v28 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 <= 7 )
        goto LABEL_29;
    }
    while ( (*(_BYTE *)(v22 + 28) & 0x7F) != 0x49 );
  }
  if ( (*(_BYTE *)(v22 + 72) & 8) == 0 )
    goto LABEL_29;
  return 1;
}

