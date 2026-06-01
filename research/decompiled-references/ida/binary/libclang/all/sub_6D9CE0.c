void __fastcall sub_6D9CE0(_QWORD *a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // edx
  int v10; // edx
  unsigned __int8 v11; // al
  __int64 v12; // rsi
  unsigned __int8 v13; // dl
  __int64 v14; // rsi
  unsigned int v15; // r15d
  void *v16; // rdi
  void *v17; // rdi
  int v18; // eax
  unsigned __int8 v19; // al
  __int64 v20; // rsi
  unsigned __int8 v21; // al
  __int64 v22; // rsi
  void *v23; // rdi
  __int64 v24; // rbp
  __int64 v25; // r15
  int v26; // edx
  char v27; // al
  void *v28; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-50h]
  void *v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-40h]

  if ( a4 )
  {
    while ( 1 )
    {
      v7 = sub_6D9A50(a1, *a2);
      if ( !v7 )
        return;
      v8 = sub_6D9A50(a1, *a3);
      if ( !v8 )
        return;
      v9 = *(unsigned __int8 *)(v7 + 16);
      if ( (unsigned int)(v9 - 2) > 1 )
      {
        if ( (_BYTE)v9 != 5 )
          return;
        v18 = *(unsigned __int8 *)(v8 + 16);
        if ( (_BYTE)v18 != 5 && (*(char *)(a1[270] + 1LL) >= 0 || (unsigned int)(v18 - 2) > 1) )
          return;
      }
      else
      {
        v10 = *(unsigned __int8 *)(v8 + 16);
        if ( (unsigned int)(v10 - 2) <= 1 )
        {
          v11 = *(_BYTE *)(v8 + 19);
          v12 = *(_QWORD *)(v8 + 40);
          if ( (v11 & 2) != 0 )
          {
            v31 = *(_DWORD *)(v12 + 8);
            if ( v31 > 0x40 )
              sub_2585B30(&v30);
            else
              v30 = *(void **)v12;
          }
          else
          {
            v31 = 8 * ((v11 >> 2) & 0x1F);
            if ( (int)v31 > 64 )
              sub_2585A50(&v30, v12, 0);
            else
              v30 = (void *)v12;
          }
          v13 = *(_BYTE *)(v7 + 19);
          v14 = *(_QWORD *)(v7 + 40);
          if ( (v13 & 2) != 0 )
          {
            v15 = *(_DWORD *)(v14 + 8);
            v29 = v15;
            if ( v15 <= 0x40 )
            {
              v16 = v30;
              v28 = *(void **)v14;
              if ( v28 != v30 )
              {
LABEL_12:
                if ( *(char *)(a1[270] + 1LL) >= 0 )
                  goto LABEL_13;
                if ( *(_BYTE *)(v8 + 16) != 5 )
                {
                  if ( v15 <= 0x40 )
                    goto LABEL_17;
LABEL_14:
                  v17 = v28;
                  goto LABEL_15;
                }
                goto LABEL_43;
              }
LABEL_28:
              if ( v31 <= 0x40 )
                goto LABEL_25;
LABEL_29:
              if ( v16 )
                operator delete[](v16);
              goto LABEL_25;
            }
            sub_2585B30(&v28);
          }
          else
          {
            v15 = 8 * ((v13 >> 2) & 0x1F);
            v29 = v15;
            if ( (int)v15 <= 64 )
            {
              v16 = v30;
              v28 = (void *)v14;
              if ( v30 != (void *)v14 )
                goto LABEL_12;
              goto LABEL_28;
            }
            sub_2585A50(&v28, v14, 0);
          }
          v15 = v29;
          if ( v29 <= 0x40 )
          {
            v16 = v28;
            if ( v28 != v30 )
              goto LABEL_12;
            goto LABEL_28;
          }
          if ( !(unsigned __int8)sub_2586760(&v28, &v30) && (*(char *)(a1[270] + 1LL) >= 0 || *(_BYTE *)(v8 + 16) != 5) )
          {
LABEL_13:
            if ( v15 <= 0x40 )
              goto LABEL_17;
            goto LABEL_14;
          }
          if ( v28 )
            operator delete[](v28);
LABEL_43:
          if ( v31 <= 0x40 )
            goto LABEL_25;
          v16 = v30;
          goto LABEL_29;
        }
        if ( *(char *)(a1[270] + 1LL) >= 0 || (_BYTE)v10 != 5 )
          return;
      }
LABEL_25:
      *a2 = *(_QWORD *)(v7 + 32);
      *a3 = *(_QWORD *)(v8 + 32);
    }
  }
  while ( 1 )
  {
    v24 = sub_6D9A50(a1, *a2);
    if ( !v24 )
      break;
    v25 = sub_6D9A50(a1, *a3);
    if ( !v25 )
      break;
    v26 = *(unsigned __int8 *)(v24 + 16);
    if ( (unsigned int)(v26 - 2) > 1 )
    {
      if ( (_BYTE)v26 != 5 || *(_BYTE *)(v25 + 16) != 5 )
        return;
      goto LABEL_62;
    }
    if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 2 > 1 )
      return;
    v19 = *(_BYTE *)(v25 + 19);
    v20 = *(_QWORD *)(v25 + 40);
    if ( (v19 & 2) != 0 )
    {
      v31 = *(_DWORD *)(v20 + 8);
      if ( v31 > 0x40 )
        sub_2585B30(&v30);
      else
        v30 = *(void **)v20;
    }
    else
    {
      v31 = 8 * ((v19 >> 2) & 0x1F);
      if ( (int)v31 > 64 )
        sub_2585A50(&v30, v20, 0);
      else
        v30 = (void *)v20;
    }
    v21 = *(_BYTE *)(v24 + 19);
    v22 = *(_QWORD *)(v24 + 40);
    if ( (v21 & 2) != 0 )
    {
      v29 = *(_DWORD *)(v22 + 8);
      if ( v29 <= 0x40 )
      {
        v23 = v30;
        v28 = *(void **)v22;
        if ( v28 != v30 )
          goto LABEL_17;
        goto LABEL_59;
      }
      sub_2585B30(&v28);
    }
    else
    {
      v29 = 8 * ((v21 >> 2) & 0x1F);
      if ( (int)v29 <= 64 )
      {
        v23 = v30;
        v28 = (void *)v22;
        if ( (void *)v22 != v30 )
          goto LABEL_17;
        goto LABEL_59;
      }
      sub_2585A50(&v28, v22, 0);
    }
    if ( v29 <= 0x40 )
    {
      v23 = v28;
      if ( v28 != v30 )
        goto LABEL_17;
LABEL_59:
      if ( v31 > 0x40 && v23 )
        goto LABEL_61;
      goto LABEL_62;
    }
    v27 = sub_2586760(&v28, &v30);
    v17 = v28;
    if ( !v27 )
    {
LABEL_15:
      if ( v17 )
        operator delete[](v17);
LABEL_17:
      if ( v31 > 0x40 )
      {
        if ( v30 )
          operator delete[](v30);
      }
      return;
    }
    if ( v28 )
      operator delete[](v28);
    if ( v31 > 0x40 )
    {
      v23 = v30;
      if ( v30 )
LABEL_61:
        operator delete[](v23);
    }
LABEL_62:
    *a2 = *(_QWORD *)(v24 + 32);
    *a3 = *(_QWORD *)(v25 + 32);
  }
}

