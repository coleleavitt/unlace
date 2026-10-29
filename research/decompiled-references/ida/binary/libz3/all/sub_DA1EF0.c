__int64 **__fastcall sub_DA1EF0(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  char v10; // bp
  char v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  unsigned int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  __int64 v19; // r11
  unsigned __int8 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h]
  unsigned int *v23; // [rsp+18h] [rbp-70h]
  unsigned int v24; // [rsp+2Ch] [rbp-5Ch]
  unsigned int *v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v27[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = *a2;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(_QWORD *)(a4 + 8);
  v21 = v7;
  v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v10 = v7 & 1;
  v11 = v8 & 1;
  v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL) )
  {
LABEL_45:
    if ( !v10 )
      goto LABEL_36;
    goto LABEL_34;
  }
  LOBYTE(v13) = v8;
  v24 = *(_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)v12;
      if ( !*(_DWORD *)v12 )
      {
        if ( v11 )
          goto LABEL_34;
        goto LABEL_71;
      }
      if ( v9 == v12 )
      {
        if ( v10 == v11 )
        {
LABEL_71:
          v8 = v7;
          v12 = v7 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_36;
        }
LABEL_34:
        v8 = *(_QWORD *)(v6 + 656);
        goto LABEL_35;
      }
      v15 = *(_QWORD *)(v9 + 8);
      if ( !v15 )
      {
        v17 = *(_QWORD *)(v12 + 8);
        if ( !v17 )
          goto LABEL_111;
        v22 = *(_QWORD *)(v12 + 16);
        goto LABEL_23;
      }
      v23 = (unsigned int *)(v15 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v15 & 0xFFFFFFFFFFFFFFFELL) == v12 && (v15 & 1) != v11 )
      {
LABEL_38:
        if ( !v10 )
          goto LABEL_34;
LABEL_35:
        v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_36;
      }
      v16 = *(_QWORD *)(v9 + 16);
      v25 = (unsigned int *)(v16 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v16 & 0xFFFFFFFFFFFFFFFELL) == v12 )
      {
        if ( (v16 & 1) != v11 )
          goto LABEL_38;
        if ( v15 == v8 )
        {
LABEL_42:
          if ( !v10 )
            goto LABEL_71;
          goto LABEL_43;
        }
      }
      else if ( v15 == v8 )
      {
        goto LABEL_42;
      }
      if ( v16 == v8 )
      {
        if ( !v10 )
          goto LABEL_71;
        v21 = v15 ^ 1;
        v7 = v15 ^ 1;
        goto LABEL_49;
      }
      v17 = *(_QWORD *)(v12 + 8);
      if ( !v17 )
        goto LABEL_111;
      v22 = *(_QWORD *)(v12 + 16);
      if ( (((unsigned __int8)v13 | v21) & 1) == 0 )
      {
        if ( v23 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v15 & 1) != (v17 & 1) )
          goto LABEL_34;
        v12 = v22 & 0xFFFFFFFFFFFFFFFELL;
        if ( v23 == (unsigned int *)(v22 & 0xFFFFFFFFFFFFFFFELL) && (v15 & 1) != (v22 & 1) )
          goto LABEL_34;
        if ( v25 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v16 & 1) != (v17 & 1)
          || v25 == (unsigned int *)v12 && (v16 & 1) != (v22 & 1) )
        {
          goto LABEL_34;
        }
        if ( v15 == v17 || v16 == v17 )
        {
          LOBYTE(v13) = v22;
          v21 = v7;
          v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
          v8 = v22;
          goto LABEL_31;
        }
        if ( v16 == v22 )
        {
          v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
          v21 = v15;
          LOBYTE(v13) = v8;
          v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
          v24 = *v23;
          v7 = v15;
          goto LABEL_44;
        }
        if ( v15 == v22 )
        {
          v21 = v7;
          v12 = v17 & 0xFFFFFFFFFFFFFFFELL;
          LOBYTE(v13) = v17;
          v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
          v8 = v17;
          goto LABEL_31;
        }
      }
      if ( v11 )
      {
        if ( !v10 )
        {
LABEL_75:
          if ( v11 )
          {
            if ( v23 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v15 & 1) != (v17 & 1) )
              goto LABEL_71;
            v12 = v22 & 0xFFFFFFFFFFFFFFFELL;
            if ( v23 == (unsigned int *)(v22 & 0xFFFFFFFFFFFFFFFELL) && (v15 & 1) != (v22 & 1) )
              goto LABEL_71;
            if ( v25 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v16 & 1) != (v17 & 1)
              || v25 == (unsigned int *)v12 && (v16 & 1) != (v22 & 1) )
            {
              goto LABEL_71;
            }
            if ( v16 == v17 || v15 == v17 )
            {
              v19 = v22;
LABEL_30:
              v21 = v7;
              v13 = v19 ^ 1;
              v8 = v13;
              v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_31;
            }
            if ( v16 == v22 || v15 == v22 )
            {
              v21 = v7;
              v12 = v17 & 0xFFFFFFFFFFFFFFFELL;
              LOBYTE(v13) = v17 ^ 1;
              v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
              v8 = v17 ^ 1;
              goto LABEL_31;
            }
            if ( ((unsigned __int8)v13 & v21 & 1) != 0 )
            {
LABEL_85:
              v12 = v17 & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_86;
            }
LABEL_23:
            v12 = v17 & 0xFFFFFFFFFFFFFFFELL;
LABEL_24:
            if ( v9 != v12 )
              goto LABEL_25;
            goto LABEL_32;
          }
        }
        if ( ((unsigned __int8)v13 & v21 & 1) == 0 )
          goto LABEL_23;
        if ( v15 != v17 )
          goto LABEL_85;
        if ( v25 == (unsigned int *)(v22 & 0xFFFFFFFFFFFFFFFELL) && (v16 & 1) != (v22 & 1) )
        {
          v8 = v15 ^ 1;
          v12 = v15 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_36;
        }
        v12 = v15 & 0xFFFFFFFFFFFFFFFELL;
LABEL_86:
        if ( v23 == (unsigned int *)v12 && (((unsigned __int8)v17 ^ (unsigned __int8)v15) & 1) != 0 && v16 == v22 )
        {
          v12 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFELL;
          v8 = v16 ^ 1;
          goto LABEL_36;
        }
        goto LABEL_24;
      }
      if ( !v10 )
        goto LABEL_75;
      v12 = v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( v23 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v15 & 1) != (v17 & 1)
        || v23 == (unsigned int *)(v22 & 0xFFFFFFFFFFFFFFFELL) && (v15 & 1) != (v22 & 1)
        || v25 == (unsigned int *)v12 && (v16 & 1) != (v17 & 1)
        || v25 == (unsigned int *)(v22 & 0xFFFFFFFFFFFFFFFELL) && (v16 & 1) != (v22 & 1) )
      {
        goto LABEL_35;
      }
      if ( v16 == v17 || v16 == v22 )
      {
        v21 = v15 ^ 1;
        v7 = v15 ^ 1;
LABEL_49:
        v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
        LOBYTE(v13) = v8;
        v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
        v24 = *v23;
        goto LABEL_44;
      }
      if ( v15 != v17 && v15 != v22 )
        break;
LABEL_43:
      v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFELL;
      LOBYTE(v13) = v8;
      v21 = v16 ^ 1;
      v7 = v16 ^ 1;
      v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
      v24 = *v25;
LABEL_44:
      v11 = v8 & 1;
      v10 = v21 & 1;
      if ( !v24 )
        goto LABEL_45;
    }
    if ( (v21 & (unsigned __int8)v13 & 1) != 0 )
    {
      if ( v12 != v9 )
      {
        v18 = v22 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v22 & 0xFFFFFFFFFFFFFFFELL) != v9 )
          goto LABEL_68;
        goto LABEL_52;
      }
      goto LABEL_32;
    }
    if ( v12 != v9 )
      break;
LABEL_32:
    if ( (v17 & 1) != v10 )
    {
      if ( !v11 )
        goto LABEL_34;
      goto LABEL_71;
    }
LABEL_25:
    v18 = v22 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v22 & 0xFFFFFFFFFFFFFFFELL) == v9 )
      goto LABEL_52;
LABEL_26:
    if ( v17 != v7 )
      goto LABEL_27;
    if ( !v11 )
      goto LABEL_35;
    v21 = v7;
    v12 = v18;
    v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
    LOBYTE(v13) = v22 ^ 1;
    v8 = v22 ^ 1;
LABEL_31:
    v10 = v7 & 1;
    v11 = v13 & 1;
  }
  v18 = v22 & 0xFFFFFFFFFFFFFFFELL;
  if ( v9 == (v22 & 0xFFFFFFFFFFFFFFFELL) )
  {
LABEL_52:
    if ( (v22 & 1) != v10 )
    {
      if ( !v11 )
        goto LABEL_34;
      goto LABEL_71;
    }
    goto LABEL_26;
  }
LABEL_68:
  if ( v17 == v7 )
    goto LABEL_35;
LABEL_27:
  if ( v7 == v22 )
  {
    if ( !v11 )
      goto LABEL_35;
    v19 = v17;
    goto LABEL_30;
  }
LABEL_111:
  if ( v14 >= v24 )
  {
    v26 = v7;
    v27[0] = v8;
    v8 = sub_DA8580(v6, &v26, v27);
    goto LABEL_35;
  }
  v27[0] = v8;
  v26 = v7;
  v8 = sub_DA8580(v6, v27, &v26);
  v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
LABEL_36:
  ++*(_DWORD *)(v12 + 4);
  *a1 = a2;
  a1[1] = (__int64 *)v8;
  return a1;
}

