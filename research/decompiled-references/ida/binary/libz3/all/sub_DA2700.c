__int64 **__fastcall sub_DA2700(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // r12
  char v14; // bp
  __int64 v15; // r10
  __int64 v16; // r8
  unsigned int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 *v24; // rdx
  __int64 *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+10h] [rbp-78h]
  unsigned int *v29; // [rsp+18h] [rbp-70h]
  unsigned int v30; // [rsp+2Ch] [rbp-5Ch]
  unsigned int *v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v33[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = *a2;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v11 = v7 ^ 1;
  v12 = v8 ^ 1;
  v13 = v11 & 1;
  v14 = v12 & 1;
  if ( *(_DWORD *)v9 )
  {
    v15 = v11;
    v16 = v12;
    v30 = *(_DWORD *)v9;
    while ( 1 )
    {
      v17 = *(_DWORD *)v10;
      if ( !*(_DWORD *)v10 )
      {
        if ( v14 )
          goto LABEL_34;
        goto LABEL_69;
      }
      if ( v9 == v10 )
      {
        if ( v13 == v14 )
        {
LABEL_69:
          v18 = v15 ^ 1;
          v10 = v15 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_35;
        }
LABEL_34:
        v22 = *(_QWORD *)(v6 + 656);
        v10 = v22 & 0xFFFFFFFFFFFFFFFELL;
        v18 = v22 ^ 1;
        goto LABEL_35;
      }
      v18 = *(_QWORD *)(v9 + 8);
      if ( !v18 )
      {
        v19 = *(_QWORD *)(v10 + 8);
        if ( !v19 )
          goto LABEL_109;
        v27 = *(_QWORD *)(v10 + 16);
        goto LABEL_23;
      }
      v29 = (unsigned int *)(v18 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v18 & 0xFFFFFFFFFFFFFFFELL) == v10 && (v18 & 1) != v14 )
      {
LABEL_37:
        if ( !v13 )
          goto LABEL_34;
LABEL_38:
        v18 = v16 ^ 1;
        v10 = v16 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_35;
      }
      v28 = *(_QWORD *)(v9 + 16);
      v31 = (unsigned int *)(v28 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v28 & 0xFFFFFFFFFFFFFFFELL) == v10 )
      {
        if ( (v28 & 1) != v14 )
          goto LABEL_37;
        if ( v18 == v16 )
        {
LABEL_41:
          if ( !v13 )
            goto LABEL_69;
          goto LABEL_42;
        }
      }
      else if ( v18 == v16 )
      {
        goto LABEL_41;
      }
      if ( v28 == v16 )
      {
        if ( !v13 )
          goto LABEL_69;
LABEL_47:
        v9 = v18 & 0xFFFFFFFFFFFFFFFELL;
        v12 = v16;
        LOBYTE(v11) = v18 ^ 1;
        v10 = v16 & 0xFFFFFFFFFFFFFFFELL;
        v15 = v18 ^ 1;
        v30 = *v29;
        goto LABEL_43;
      }
      v19 = *(_QWORD *)(v10 + 8);
      if ( !v19 )
        goto LABEL_109;
      v27 = *(_QWORD *)(v10 + 16);
      if ( (((unsigned __int8)v12 | (unsigned __int8)v11) & 1) == 0 )
      {
        if ( v29 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v18 & 1) != (v19 & 1) )
          goto LABEL_34;
        v10 = v27 & 0xFFFFFFFFFFFFFFFELL;
        if ( v29 == (unsigned int *)(v27 & 0xFFFFFFFFFFFFFFFELL) && (v18 & 1) != (v27 & 1) )
          goto LABEL_34;
        if ( v31 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v28 & 1) != (v19 & 1)
          || v31 == (unsigned int *)v10 && (v28 & 1) != (v27 & 1) )
        {
          goto LABEL_34;
        }
        if ( v18 == v19 || v28 == v19 )
        {
          LOBYTE(v12) = v27;
          LOBYTE(v11) = v15;
          v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
          v16 = v27;
          goto LABEL_31;
        }
        if ( v28 == v27 )
        {
          v9 = v18 & 0xFFFFFFFFFFFFFFFELL;
          v12 = v16;
          v15 = v18;
          v10 = v16 & 0xFFFFFFFFFFFFFFFELL;
          v30 = *v29;
          LOBYTE(v11) = v18;
          goto LABEL_43;
        }
        if ( v18 == v27 )
        {
          v10 = v19 & 0xFFFFFFFFFFFFFFFELL;
          LOBYTE(v11) = v15;
          LOBYTE(v12) = v19;
          v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
          v16 = v19;
          goto LABEL_31;
        }
      }
      if ( v14 )
      {
        if ( !v13 )
        {
LABEL_73:
          if ( v14 )
          {
            if ( v29 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v18 & 1) != (v19 & 1) )
              goto LABEL_69;
            v10 = v27 & 0xFFFFFFFFFFFFFFFELL;
            if ( v29 == (unsigned int *)(v27 & 0xFFFFFFFFFFFFFFFELL) && (v18 & 1) != (v27 & 1) )
              goto LABEL_69;
            if ( v31 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v28 & 1) != (v19 & 1)
              || v31 == (unsigned int *)v10 && (v28 & 1) != (v27 & 1) )
            {
              goto LABEL_69;
            }
            if ( v28 == v19 || v18 == v19 )
            {
              v21 = v27;
              goto LABEL_30;
            }
            if ( v28 == v27 || v18 == v27 )
            {
              v10 = v19 & 0xFFFFFFFFFFFFFFFELL;
              LOBYTE(v11) = v15;
              LOBYTE(v12) = v19 ^ 1;
              v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
              v16 = v19 ^ 1;
              goto LABEL_31;
            }
            if ( ((unsigned __int8)v12 & (unsigned __int8)v11 & 1) != 0 )
            {
LABEL_83:
              v10 = v19 & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_84;
            }
LABEL_23:
            v10 = v19 & 0xFFFFFFFFFFFFFFFELL;
LABEL_24:
            if ( v9 != v10 )
              goto LABEL_25;
            goto LABEL_32;
          }
        }
        if ( ((unsigned __int8)v12 & (unsigned __int8)v11 & 1) == 0 )
          goto LABEL_23;
        if ( v18 != v19 )
          goto LABEL_83;
        if ( v31 == (unsigned int *)(v27 & 0xFFFFFFFFFFFFFFFELL) && (v28 & 1) != (v27 & 1) )
        {
          v10 = v18 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_35;
        }
        v10 = v18 & 0xFFFFFFFFFFFFFFFELL;
LABEL_84:
        if ( v29 == (unsigned int *)v10 && (((unsigned __int8)v19 ^ (unsigned __int8)v18) & 1) != 0 && v28 == v27 )
        {
          v10 = v28 & 0xFFFFFFFFFFFFFFFELL;
          v18 = *(_QWORD *)(v9 + 16);
          goto LABEL_35;
        }
        goto LABEL_24;
      }
      if ( !v13 )
        goto LABEL_73;
      v10 = v19 & 0xFFFFFFFFFFFFFFFELL;
      if ( v29 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v18 & 1) != (v19 & 1)
        || v29 == (unsigned int *)(v27 & 0xFFFFFFFFFFFFFFFELL) && (v18 & 1) != (v27 & 1)
        || v31 == (unsigned int *)v10 && (v28 & 1) != (v19 & 1)
        || v31 == (unsigned int *)(v27 & 0xFFFFFFFFFFFFFFFELL) && (v28 & 1) != (v27 & 1) )
      {
        goto LABEL_38;
      }
      if ( v28 == v19 || v28 == v27 )
        goto LABEL_47;
      if ( v18 == v19 || v18 == v27 )
      {
LABEL_42:
        v9 = v28 & 0xFFFFFFFFFFFFFFFELL;
        v12 = v16;
        v10 = v16 & 0xFFFFFFFFFFFFFFFELL;
        LOBYTE(v11) = v28 ^ 1;
        v15 = v28 ^ 1;
        v30 = *v31;
LABEL_43:
        v13 = v11 & 1;
        v14 = v16 & 1;
        if ( !v30 )
          break;
      }
      else
      {
        if ( ((unsigned __int8)v12 & (unsigned __int8)v11 & 1) != 0 )
        {
          if ( v10 != v9 )
          {
            v20 = v27 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v27 & 0xFFFFFFFFFFFFFFFELL) != v9 )
              goto LABEL_66;
LABEL_50:
            if ( (v27 & 1) != v13 )
            {
              if ( !v14 )
                goto LABEL_34;
              goto LABEL_69;
            }
            goto LABEL_26;
          }
        }
        else if ( v10 != v9 )
        {
          v20 = v27 & 0xFFFFFFFFFFFFFFFELL;
          if ( v9 != (v27 & 0xFFFFFFFFFFFFFFFELL) )
          {
LABEL_66:
            if ( v19 == v15 )
              goto LABEL_38;
LABEL_27:
            if ( v15 != v27 )
            {
LABEL_109:
              if ( v17 >= v30 )
              {
                v32 = v15;
                v24 = v33;
                v25 = &v32;
                v33[0] = v16;
              }
              else
              {
                v33[0] = v16;
                v24 = &v32;
                v25 = v33;
                v32 = v15;
              }
              v26 = sub_DA8580(v6, v25, v24);
              v10 = v26 & 0xFFFFFFFFFFFFFFFELL;
              v18 = v26 ^ 1;
              goto LABEL_35;
            }
            if ( !v14 )
              goto LABEL_38;
            v21 = v19;
LABEL_30:
            v12 = v21 ^ 1;
            LOBYTE(v11) = v15;
            v16 = v12;
            v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_31;
          }
          goto LABEL_50;
        }
LABEL_32:
        if ( (v19 & 1) != v13 )
        {
          if ( !v14 )
            goto LABEL_34;
          goto LABEL_69;
        }
LABEL_25:
        v20 = v27 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v27 & 0xFFFFFFFFFFFFFFFELL) == v9 )
          goto LABEL_50;
LABEL_26:
        if ( v19 != v15 )
          goto LABEL_27;
        if ( !v14 )
          goto LABEL_38;
        LOBYTE(v11) = v15;
        v10 = v20;
        v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
        LOBYTE(v12) = v27 ^ 1;
        v16 = v27 ^ 1;
LABEL_31:
        v13 = v15 & 1;
        v14 = v12 & 1;
      }
    }
  }
  if ( v13 )
    goto LABEL_34;
  v18 = v12 ^ 1;
LABEL_35:
  ++*(_DWORD *)(v10 + 4);
  *a1 = a2;
  a1[1] = (__int64 *)v18;
  return a1;
}

