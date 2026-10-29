/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A7E7
// Address: 0x0046A7E7

//----- (0046A7E7) --------------------------------------------------------
char __usercall sub_46A7E7@<al>(int a1@<ecx>, int a2@<edi>, __m128i a3@<xmm0>)
{
  int v4; // eax
  char v5; // al
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  char v13; // dl
  bool v14; // bl
  bool v15; // al
  char v16; // al
  int *v17; // ebx
  int v18; // edi
  char v19; // [esp-4h] [ebp-14h]
  int v20; // [esp+8h] [ebp-8h]
  __int16 v21; // [esp+Ch] [ebp-4h] BYREF
  char v22; // [esp+Eh] [ebp-2h]

  v4 = *(char *)(a1 + 49);
  if ( v4 <= 100 )
  {
    if ( v4 != 100 )
    {
      if ( v4 > 88 )
      {
        v7 = v4 - 90;
        if ( !v7 )
        {
          v5 = sub_46ACDC(a1);
          goto LABEL_11;
        }
        v8 = v7 - 7;
        if ( !v8 )
          goto LABEL_30;
        if ( v8 != 2 )
          return 0;
        goto LABEL_18;
      }
      if ( v4 != 88 )
      {
        if ( v4 != 65 )
        {
          if ( v4 != 67 )
          {
            if ( v4 <= 68 )
              return 0;
            if ( v4 > 71 )
            {
              if ( v4 == 83 )
              {
LABEL_10:
                v5 = sub_46B116(a1);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_30;
          }
LABEL_18:
          v5 = sub_46AE87((__m128i *)a1, 0);
          goto LABEL_11;
        }
LABEL_30:
        v5 = sub_46AD36((int *)a1, a3);
        goto LABEL_11;
      }
      v19 = 1;
LABEL_14:
      v5 = sub_46AF1A(a1, 0, a2, 0x10u, v19);
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  if ( v4 > 112 )
  {
    v9 = v4 - 115;
    if ( !v9 )
      goto LABEL_10;
    v10 = v9 - 2;
    if ( v10 )
    {
      if ( v10 != 3 )
        return 0;
      v19 = 0;
      goto LABEL_14;
    }
LABEL_29:
    v5 = sub_46AF1A(a1, 0, a2, 0xAu, 0);
    goto LABEL_11;
  }
  if ( v4 == 112 )
  {
    v5 = sub_46B0FE(a1, 0, a2);
  }
  else
  {
    if ( v4 <= 103 )
      goto LABEL_30;
    switch ( v4 )
    {
      case 'i':
LABEL_28:
        *(_DWORD *)(a1 + 32) |= 0x10u;
        goto LABEL_29;
      case 'n':
        v5 = sub_46B06B(a1, 0);
        break;
      case 'o':
        v5 = sub_46B0DF(a1, 0, a2);
        break;
      default:
        return 0;
    }
  }
LABEL_11:
  if ( !v5 )
    return 0;
  if ( !*(_BYTE *)(a1 + 48) )
  {
    v11 = 0;
    v21 = 0;
    v22 = 0;
    v12 = *(_DWORD *)(a1 + 32);
    v20 = 0;
    if ( (v12 & 0x10) != 0 )
    {
      if ( (v12 & 0x40) != 0 )
      {
        LOBYTE(v21) = 45;
      }
      else
      {
        if ( (v12 & 1) == 0 )
        {
          if ( (v12 & 2) != 0 )
          {
            LOBYTE(v21) = 32;
            v11 = 1;
            v20 = 1;
          }
          goto LABEL_45;
        }
        LOBYTE(v21) = 43;
      }
      v11 = 1;
      v20 = 1;
    }
LABEL_45:
    v13 = *(_BYTE *)(a1 + 49);
    v14 = (v13 == 120 || v13 == 88) && (v12 & 0x20) != 0;
    v15 = v13 == 97 || v13 == 65;
    if ( v14 || v15 )
    {
      *((_BYTE *)&v21 + v11) = 48;
      if ( v13 == 88 || v13 == 65 )
        v16 = 88;
      else
        v16 = 120;
      *((_BYTE *)&v21 + v11 + 1) = v16;
      v11 += 2;
      v20 = v11;
    }
    v17 = (int *)(a1 + 24);
    v18 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 56) - v11;
    if ( (*(_BYTE *)(a1 + 32) & 0xC) == 0 )
    {
      sub_469C71((int)v17, (_DWORD **)(a1 + 1096), 32, v18, (_DWORD *)(a1 + 24));
      v11 = v20;
    }
    sub_46B413((_DWORD **)(a1 + 1096), (char *)&v21, v11, (_DWORD *)(a1 + 24), (int **)(a1 + 12));
    if ( (*(_DWORD *)(a1 + 32) & 8) != 0 && (*(_DWORD *)(a1 + 32) & 4) == 0 )
      sub_469C71((int)v17, (_DWORD **)(a1 + 1096), 48, v18, (_DWORD *)(a1 + 24));
    sub_46B2C9(a1, 0);
    if ( *v17 >= 0 && (*(_DWORD *)(a1 + 32) & 4) != 0 )
      sub_469C71((int)v17, (_DWORD **)(a1 + 1096), 32, v18, (_DWORD *)(a1 + 24));
  }
  return 1;
}
