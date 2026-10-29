void __fastcall sub_1BC8480(char *src, char *a2, __int64 a3)
{
  char *v3; // r15
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdx
  char v8; // r10
  char v9; // al
  char v10; // r9
  char v11; // di
  char v12; // si
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rsi
  char *v18; // rbx
  __int64 v19; // rdx
  char *v20; // r9
  char v21; // r8
  char v22; // al
  char v23; // di
  char v24; // si
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // esi
  int v29; // edx

  if ( src == a2 || a2 == src + 8 )
    return;
  v3 = src + 8;
  do
  {
    v5 = *(_QWORD *)v3;
    v6 = *(_QWORD *)src;
    if ( *(_QWORD *)v3 != *(_QWORD *)src )
    {
      v7 = *(unsigned __int8 *)(v6 + 16);
      if ( *(_BYTE *)(v5 + 16) != (_BYTE)v7 )
      {
        switch ( *(_BYTE *)(v5 + 16) )
        {
          case 0:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
            v8 = 0;
            v9 = 0;
            v10 = 1;
            v11 = 1;
            v12 = 1;
            goto LABEL_8;
          case 1:
          case 3:
          case 4:
            v8 = 1;
            v9 = 1;
            v10 = 1;
            v11 = 1;
            v12 = 1;
            goto LABEL_8;
          case 2:
            v8 = 0;
            v9 = 0;
            v10 = 0;
            v11 = 1;
            v12 = 1;
            goto LABEL_8;
          case 5:
          case 6:
            v8 = 0;
            v9 = 1;
            v10 = 1;
            v11 = 1;
            v12 = 1;
            goto LABEL_8;
          case 0xB:
          case 0xC:
            v8 = 0;
            v9 = 0;
            v10 = 0;
            v11 = 0;
            v12 = 0;
            goto LABEL_8;
          case 0xD:
            v8 = 0;
            v9 = 0;
            v10 = 0;
            v11 = 0;
            v12 = 1;
LABEL_8:
            switch ( v7 )
            {
              case 1LL:
              case 3LL:
              case 4LL:
                goto LABEL_21;
              case 2LL:
                v9 = v10;
                goto LABEL_14;
              case 5LL:
              case 6LL:
                v9 = v8;
                goto LABEL_14;
              case 7LL:
              case 8LL:
              case 9LL:
              case 10LL:
              case 15LL:
              case 16LL:
              case 17LL:
                goto LABEL_14;
              case 11LL:
              case 12LL:
                v9 = v12;
                goto LABEL_14;
              case 13LL:
                v9 = v11;
                goto LABEL_14;
              default:
                goto LABEL_58;
            }
          default:
            break;
        }
LABEL_58:
        BUG();
      }
      v13 = *(_QWORD *)(v5 + 8);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 24);
        v15 = *(_QWORD *)(v6 + 8);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 24);
          if ( v14 )
          {
            if ( !v16 )
              goto LABEL_15;
            v9 = sub_10246C0(*(_QWORD *)(a3 + 272), v14, v16);
            v5 = *(_QWORD *)v3;
LABEL_14:
            if ( v9 )
            {
LABEL_15:
              if ( src != v3 )
                memmove(src + 8, src, v3 - src);
              *(_QWORD *)src = v5;
              goto LABEL_18;
            }
          }
        }
        else if ( v14 )
        {
          goto LABEL_15;
        }
      }
    }
LABEL_21:
    v17 = *((_QWORD *)v3 - 1);
    v18 = v3 - 8;
    if ( v5 == v17 )
    {
      *(_QWORD *)v3 = v5;
      goto LABEL_18;
    }
    while ( 1 )
    {
      v19 = *(unsigned __int8 *)(v17 + 16);
      v20 = v18 + 8;
      if ( *(_BYTE *)(v5 + 16) != (_BYTE)v19 )
      {
        switch ( *(_BYTE *)(v5 + 16) )
        {
          case 1:
          case 3:
          case 4:
            v21 = 1;
            v22 = 1;
            v23 = 1;
            v24 = 1;
            v25 = 1;
            goto LABEL_25;
          case 2:
            v21 = 0;
            v22 = 0;
            v23 = 0;
            v24 = 1;
            v25 = 1;
            goto LABEL_25;
          case 5:
          case 6:
            v21 = 0;
            v22 = 1;
            v23 = 1;
            v24 = 1;
            v25 = 1;
            goto LABEL_25;
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xF:
          case 0x10:
          case 0x11:
            v21 = 0;
            v22 = 0;
            v23 = 1;
            v24 = 1;
            v25 = 1;
            goto LABEL_25;
          case 0xB:
          case 0xC:
            v21 = 0;
            v22 = 0;
            v23 = 0;
            v24 = 0;
            v25 = 0;
            goto LABEL_25;
          case 0xD:
            v21 = 0;
            v22 = 0;
            v23 = 0;
            v24 = 0;
            v25 = 1;
LABEL_25:
            switch ( v19 )
            {
              case 1LL:
              case 3LL:
              case 4LL:
                goto LABEL_35;
              case 2LL:
                v22 = v23;
                goto LABEL_31;
              case 5LL:
              case 6LL:
                v22 = v21;
                goto LABEL_31;
              case 7LL:
              case 8LL:
              case 9LL:
              case 10LL:
              case 15LL:
              case 16LL:
              case 17LL:
                goto LABEL_31;
              case 11LL:
              case 12LL:
                v22 = v25;
                goto LABEL_31;
              case 13LL:
                v22 = v24;
                goto LABEL_31;
              default:
                goto LABEL_58;
            }
          default:
            goto LABEL_58;
        }
        goto LABEL_58;
      }
      v26 = *(_QWORD *)(v5 + 8);
      if ( !v26 )
        goto LABEL_35;
      v27 = *(_QWORD *)(v17 + 8);
      v28 = *(_DWORD *)(v26 + 24);
      if ( v27 )
      {
        v29 = *(_DWORD *)(v27 + 24);
        if ( !v28 )
          goto LABEL_35;
        if ( v29 )
        {
          v22 = sub_10246C0(*(_QWORD *)(a3 + 272), v28, v29);
          v20 = v18 + 8;
LABEL_31:
          if ( !v22 )
            goto LABEL_35;
        }
      }
      else if ( !v28 )
      {
        goto LABEL_35;
      }
      v17 = *((_QWORD *)v18 - 1);
      *((_QWORD *)v18 + 1) = *(_QWORD *)v18;
      if ( v5 == v17 )
        break;
      v18 -= 8;
    }
    v20 = v18;
LABEL_35:
    *(_QWORD *)v20 = v5;
LABEL_18:
    v3 += 8;
  }
  while ( a2 != v3 );
}
