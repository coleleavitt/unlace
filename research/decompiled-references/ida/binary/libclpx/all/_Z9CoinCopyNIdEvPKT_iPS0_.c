void __fastcall CoinCopyN<double>(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rdx
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  unsigned __int64 v15; // r9
  _QWORD *v16; // r8
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // xmm0_8
  unsigned __int64 v21; // rsi
  _QWORD *v22; // rax
  unsigned __int64 v23; // r9
  _QWORD *v24; // r8
  unsigned __int64 v25; // rsi
  _QWORD *v26; // rax

  if ( a2 && a1 != a3 )
  {
    v3 = a2 + 14;
    if ( a2 + 7 >= 0 )
      v3 = a2 + 7;
    v4 = v3 >> 3;
    v5 = (unsigned int)(a2 % 8);
    if ( a1 >= a3 )
    {
      v9 = a1 - 8;
      v10 = (_QWORD *)(a3 - 8);
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
            v12 = *(_QWORD *)(v9 + 8);
            ++v10;
            v9 += 8LL;
            *v10 = v12;
LABEL_10:
            v13 = v9 + 8;
            v14 = v10 + 1;
            v10[1] = *(_QWORD *)(v9 + 8);
LABEL_11:
            v9 = v13 + 8;
            v10 = v14 + 1;
            v14[1] = *(_QWORD *)(v13 + 8);
LABEL_12:
            v15 = v9 + 8;
            v16 = v10 + 1;
            v10[1] = *(_QWORD *)(v9 + 8);
LABEL_13:
            v17 = v15 + 8;
            v18 = v16 + 1;
            v16[1] = *(_QWORD *)(v15 + 8);
LABEL_14:
            v9 = v17 + 8;
            v10 = v18 + 1;
            v18[1] = *(_QWORD *)(v17 + 8);
LABEL_15:
            --v4;
            v10[1] = *(_QWORD *)(v9 + 8);
            if ( v4 <= 0 )
              break;
            v9 += 8LL;
            ++v10;
LABEL_8:
            v11 = *(_QWORD *)(v9 + 8);
            ++v10;
            v9 += 8LL;
            *v10 = v11;
          }
          break;
        default:
          return;
      }
    }
    else
    {
      v6 = 8LL * a2;
      v7 = v6 + a1;
      v8 = (_QWORD *)(v6 + a3);
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
            v20 = *(_QWORD *)(v7 - 8);
            --v8;
            v7 -= 8LL;
            *v8 = v20;
LABEL_21:
            v21 = v7 - 8;
            v22 = v8 - 1;
            *(v8 - 1) = *(_QWORD *)(v7 - 8);
LABEL_22:
            v7 = v21 - 8;
            v8 = v22 - 1;
            *(v22 - 1) = *(_QWORD *)(v21 - 8);
LABEL_23:
            v23 = v7 - 8;
            v24 = v8 - 1;
            *(v8 - 1) = *(_QWORD *)(v7 - 8);
LABEL_24:
            v25 = v23 - 8;
            v26 = v24 - 1;
            *(v24 - 1) = *(_QWORD *)(v23 - 8);
LABEL_25:
            v7 = v25 - 8;
            v8 = v26 - 1;
            *(v26 - 1) = *(_QWORD *)(v25 - 8);
LABEL_26:
            --v4;
            *(v8 - 1) = *(_QWORD *)(v7 - 8);
            if ( v4 <= 0 )
              break;
            v7 -= 8LL;
            --v8;
LABEL_19:
            v19 = *(_QWORD *)(v7 - 8);
            --v8;
            v7 -= 8LL;
            *v8 = v19;
          }
          break;
        default:
          return;
      }
    }
  }
}

