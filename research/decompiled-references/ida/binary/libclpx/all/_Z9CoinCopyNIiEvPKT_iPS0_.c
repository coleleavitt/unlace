void __fastcall CoinCopyN<int>(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  int v3; // eax
  int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  _DWORD *v8; // rdx
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rdx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rcx
  _DWORD *v14; // rax
  unsigned __int64 v15; // r9
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rcx
  _DWORD *v22; // rax
  unsigned __int64 v23; // r9
  _DWORD *v24; // rsi
  unsigned __int64 v25; // rcx
  _DWORD *v26; // rax

  if ( a2 && a1 != a3 )
  {
    v3 = a2 + 14;
    if ( a2 + 7 >= 0 )
      v3 = a2 + 7;
    v4 = v3 >> 3;
    v5 = (unsigned int)(a2 % 8);
    if ( a1 >= a3 )
    {
      v9 = a1 - 4;
      v10 = (_DWORD *)(a3 - 4);
      switch ( a2 % 8 )
      {
        case 0:
          goto LABEL_8;
        case 1:
          goto LABEL_15;
        case 2:
          v18 = v10;
          v17 = v9;
          goto LABEL_14;
        case 3:
          v16 = v10;
          v15 = v9;
          goto LABEL_13;
        case 4:
          goto LABEL_12;
        case 5:
          v14 = v10;
          v13 = v9;
          goto LABEL_11;
        case 6:
          goto LABEL_10;
        case 7:
          while ( 1 )
          {
            v12 = *(_DWORD *)(v9 + 4);
            ++v10;
            v9 += 4LL;
            *v10 = v12;
LABEL_10:
            v13 = v9 + 4;
            v14 = v10 + 1;
            v10[1] = *(_DWORD *)(v9 + 4);
LABEL_11:
            v9 = v13 + 4;
            v10 = v14 + 1;
            v14[1] = *(_DWORD *)(v13 + 4);
LABEL_12:
            v15 = v9 + 4;
            v16 = v10 + 1;
            v10[1] = *(_DWORD *)(v9 + 4);
LABEL_13:
            v17 = v15 + 4;
            v18 = v16 + 1;
            v16[1] = *(_DWORD *)(v15 + 4);
LABEL_14:
            v9 = v17 + 4;
            v10 = v18 + 1;
            v18[1] = *(_DWORD *)(v17 + 4);
LABEL_15:
            --v4;
            v10[1] = *(_DWORD *)(v9 + 4);
            if ( v4 <= 0 )
              break;
            v9 += 4LL;
            ++v10;
LABEL_8:
            v11 = *(_DWORD *)(v9 + 4);
            ++v10;
            v9 += 4LL;
            *v10 = v11;
          }
          break;
        default:
          return;
      }
    }
    else
    {
      v6 = 4LL * a2;
      v7 = v6 + a1;
      v8 = (_DWORD *)(v6 + a3);
      switch ( v5 )
      {
        case 0LL:
          goto LABEL_19;
        case 1LL:
          goto LABEL_26;
        case 2LL:
          v26 = v8;
          v25 = v7;
          goto LABEL_25;
        case 3LL:
          v24 = v8;
          v23 = v7;
          goto LABEL_24;
        case 4LL:
          goto LABEL_23;
        case 5LL:
          v22 = v8;
          v21 = v7;
          goto LABEL_22;
        case 6LL:
          goto LABEL_21;
        case 7LL:
          while ( 1 )
          {
            v20 = *(_DWORD *)(v7 - 4);
            --v8;
            v7 -= 4LL;
            *v8 = v20;
LABEL_21:
            v21 = v7 - 4;
            v22 = v8 - 1;
            *(v8 - 1) = *(_DWORD *)(v7 - 4);
LABEL_22:
            v7 = v21 - 4;
            v8 = v22 - 1;
            *(v22 - 1) = *(_DWORD *)(v21 - 4);
LABEL_23:
            v23 = v7 - 4;
            v24 = v8 - 1;
            *(v8 - 1) = *(_DWORD *)(v7 - 4);
LABEL_24:
            v25 = v23 - 4;
            v26 = v24 - 1;
            *(v24 - 1) = *(_DWORD *)(v23 - 4);
LABEL_25:
            v7 = v25 - 4;
            v8 = v26 - 1;
            *(v26 - 1) = *(_DWORD *)(v25 - 4);
LABEL_26:
            --v4;
            *(v8 - 1) = *(_DWORD *)(v7 - 4);
            if ( v4 <= 0 )
              break;
            v7 -= 4LL;
            --v8;
LABEL_19:
            v19 = *(_DWORD *)(v7 - 4);
            --v8;
            v7 -= 4LL;
            *v8 = v19;
          }
          break;
        default:
          return;
      }
    }
  }
}

