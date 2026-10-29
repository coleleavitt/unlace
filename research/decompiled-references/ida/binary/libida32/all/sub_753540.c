void __fastcall sub_753540(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // r13
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  char v10; // dl
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // cl
  unsigned int v14; // ecx
  char v15; // si
  int v16; // edx
  char v17; // al
  char v18; // cl
  int v19; // edi
  unsigned __int8 v20; // al
  char v21; // dl
  char v22; // si
  int v23; // edx
  char v24; // al
  unsigned __int64 v25; // rax
  char v26; // dl
  char v27; // cl
  int v28; // ecx
  char v29; // dl
  int v30; // ecx
  char v31; // dl

  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 80 )
    return;
  v5 = a2;
LABEL_3:
  v7 = 0xCCCCCCCCCCCCCCCDLL * v3;
  v8 = v7 >> 1;
  if ( a3 )
  {
    v9 = 5 * v8;
    v10 = *(_BYTE *)(a1 + 9);
    --a3;
    v11 = a1 + 5;
    v12 = a1 + v9;
    v13 = *(_BYTE *)(v12 + 4);
    if ( v10 == v13 )
    {
      v14 = *(_DWORD *)(a1 + 5);
      if ( v14 < *(_DWORD *)v12 )
      {
        v15 = *(_BYTE *)(v5 - 1);
        if ( v10 == v15 )
        {
          if ( *(_DWORD *)v12 >= *(_DWORD *)(v5 - 5) )
            goto LABEL_8;
LABEL_39:
          v30 = *(_DWORD *)a1;
          v31 = *(_BYTE *)(a1 + 4);
          *(_DWORD *)a1 = *(_DWORD *)v12;
          *(_BYTE *)(a1 + 4) = *(_BYTE *)(v12 + 4);
          *(_DWORD *)v12 = v30;
          *(_BYTE *)(v12 + 4) = v31;
LABEL_27:
          v25 = v5;
LABEL_28:
          v26 = *(_BYTE *)(a1 + 4);
          while ( 1 )
          {
            v27 = *(_BYTE *)(v11 + 4);
            if ( v27 == v26 )
            {
              if ( *(_DWORD *)v11 >= *(_DWORD *)a1 )
                goto LABEL_33;
            }
            else if ( !v27 )
            {
              do
              {
LABEL_33:
                while ( 1 )
                {
                  v25 -= 5LL;
                  if ( v26 != *(_BYTE *)(v25 + 4) )
                    break;
                  if ( *(_DWORD *)a1 >= *(_DWORD *)v25 )
                  {
                    if ( v11 >= v25 )
                      goto LABEL_49;
LABEL_36:
                    v28 = *(_DWORD *)v11;
                    v11 += 5LL;
                    v29 = *(_BYTE *)(v11 - 1);
                    *(_DWORD *)(v11 - 5) = *(_DWORD *)v25;
                    *(_BYTE *)(v11 - 1) = *(_BYTE *)(v25 + 4);
                    *(_DWORD *)v25 = v28;
                    *(_BYTE *)(v25 + 4) = v29;
                    goto LABEL_28;
                  }
                }
              }
              while ( v26 );
              if ( v11 < v25 )
                goto LABEL_36;
LABEL_49:
              sub_753540(v11, v5, a3);
              v3 = v11 - a1;
              if ( (__int64)(v11 - a1) <= 80 )
                return;
              v5 = v11;
              goto LABEL_3;
            }
            v11 += 5LL;
          }
        }
        if ( v10 )
          goto LABEL_39;
        if ( v15 )
          goto LABEL_9;
LABEL_8:
        if ( v14 >= *(_DWORD *)(v5 - 5) )
        {
LABEL_9:
          v16 = *(_DWORD *)a1;
          v17 = *(_BYTE *)(a1 + 4);
          *(_DWORD *)a1 = *(_DWORD *)(a1 + 5);
          v18 = *(_BYTE *)(a1 + 9);
          *(_DWORD *)(a1 + 5) = v16;
          *(_BYTE *)(a1 + 4) = v18;
          *(_BYTE *)(a1 + 9) = v17;
          goto LABEL_27;
        }
        goto LABEL_26;
      }
      v22 = *(_BYTE *)(v5 - 1);
      if ( v10 == v22 )
      {
        if ( v14 < *(_DWORD *)(v5 - 5) )
          goto LABEL_9;
      }
      else
      {
        if ( v10 )
          goto LABEL_9;
        if ( v22 )
          goto LABEL_39;
      }
    }
    else
    {
      if ( v10 )
      {
        v21 = *(_BYTE *)(v5 - 1);
        if ( v21 == v13 )
        {
          if ( *(_DWORD *)v12 < *(_DWORD *)(v5 - 5) )
            goto LABEL_39;
        }
        else if ( v13 )
        {
          goto LABEL_39;
        }
        if ( v21 )
        {
          v14 = *(_DWORD *)(a1 + 5);
          goto LABEL_8;
        }
LABEL_26:
        v23 = *(_DWORD *)a1;
        v24 = *(_BYTE *)(a1 + 4);
        *(_DWORD *)a1 = *(_DWORD *)(v5 - 5);
        *(_BYTE *)(a1 + 4) = *(_BYTE *)(v5 - 1);
        *(_DWORD *)(v5 - 5) = v23;
        *(_BYTE *)(v5 - 1) = v24;
        goto LABEL_27;
      }
      if ( *(_BYTE *)(v5 - 1) )
      {
        if ( !v13 )
          goto LABEL_39;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 5) < *(_DWORD *)(v5 - 5) )
          goto LABEL_9;
        if ( v13 )
          goto LABEL_26;
      }
    }
    if ( *(_DWORD *)v12 >= *(_DWORD *)(v5 - 5) )
      goto LABEL_39;
    goto LABEL_26;
  }
  do
  {
    --v8;
    sub_7531A0(
      a1,
      v8,
      v7,
      (unsigned __int16)*(_DWORD *)(a1 + 5 * v8)
    | ((unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 5 * v8)) << 16)
    | ((unsigned __int64)(unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 5 * v8)) << 24)
    | ((unsigned __int64)*(unsigned __int8 *)(a1 + 5 * v8 + 4) << 32));
  }
  while ( v8 );
  while ( (__int64)(v5 - a1) > 5 )
  {
    v19 = *(_DWORD *)(v5 - 5);
    v5 -= 5LL;
    *(_DWORD *)v5 = *(_DWORD *)a1;
    v20 = *(_BYTE *)(v5 + 4);
    *(_BYTE *)(v5 + 4) = *(_BYTE *)(a1 + 4);
    sub_7531A0(
      a1,
      0,
      0xCCCCCCCCCCCCCCCDLL * (v5 - a1),
      (unsigned __int16)v19
    | ((unsigned __int64)BYTE2(v19) << 16)
    | ((unsigned __int64)HIBYTE(v19) << 24)
    | ((unsigned __int64)v20 << 32));
  }
}

