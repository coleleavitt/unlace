/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C61C0
// Address: 0x000C61C0

//----- (000C61C0) --------------------------------------------------------
int __fastcall sub_C61C0(char **a1)
{
  char *v1; // esi
  char *v2; // eax
  int v3; // edi
  char *v4; // edi
  char v5; // al
  int v6; // eax
  char *v7; // edi
  char **v8; // esi
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  char *v12; // eax
  char v13; // dl
  char *v14; // esi
  int v15; // eax
  char *v16; // ecx
  int v17; // esi
  _DWORD *v18; // eax
  int v19; // eax
  char **v20; // ecx
  int *v21; // esi
  char **v22; // edx
  signed int v23; // esi
  char **v24; // esi
  char *v25; // edi
  char *v27; // ecx
  size_t v28; // [esp+4h] [ebp-38h]
  char *v29; // [esp+18h] [ebp-24h]
  int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+18h] [ebp-24h]
  char *v33; // [esp+20h] [ebp-1Ch]
  int v34; // [esp+24h] [ebp-18h]
  int v35; // [esp+28h] [ebp-14h]

  v1 = *a1;
  v2 = a1[1];
  v3 = 0;
  if ( *a1 == v2 || *v1 != 83 )
    return v3;
  v4 = v1 + 1;
  *a1 = v1 + 1;
  v29 = v2;
  if ( v2 == v1 + 1 )
    v5 = 0;
  else
    v5 = *v4;
  if ( islower(v5) )
  {
    if ( v29 != v4 )
    {
      v6 = *v4;
      v3 = 0;
      switch ( v6 )
      {
        case 'a':
          *a1 = v1 + 2;
          v7 = a1[1116];
          v8 = a1;
          v9 = *((_DWORD *)v7 + 1);
          if ( (unsigned int)(v9 + 16) < 0xFF8 )
          {
            v11 = v7 + 4;
          }
          else
          {
            v10 = operator new[](0x1000u);
            *v10 = v7;
            v10[1] = 0;
            a1[1116] = (char *)v10;
            v9 = 0;
            v11 = v10 + 1;
            v7 = (char *)v10;
          }
          v30 = 0;
          goto LABEL_31;
        case 'b':
          *a1 = v1 + 2;
          v7 = a1[1116];
          v8 = a1;
          v9 = *((_DWORD *)v7 + 1);
          v30 = 1;
          if ( (unsigned int)(v9 + 16) < 0xFF8 )
            goto LABEL_28;
          goto LABEL_30;
        case 'c':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
          return v3;
        case 'd':
          *a1 = v1 + 2;
          v7 = a1[1116];
          v8 = a1;
          v9 = *((_DWORD *)v7 + 1);
          v30 = 5;
          if ( (unsigned int)(v9 + 16) >= 0xFF8 )
            goto LABEL_30;
          goto LABEL_28;
        case 'i':
          *a1 = v1 + 2;
          v7 = a1[1116];
          v8 = a1;
          v9 = *((_DWORD *)v7 + 1);
          v30 = 3;
          if ( (unsigned int)(v9 + 16) >= 0xFF8 )
            goto LABEL_30;
          goto LABEL_28;
        case 'o':
          *a1 = v1 + 2;
          v7 = a1[1116];
          v8 = a1;
          v9 = *((_DWORD *)v7 + 1);
          v30 = 4;
          if ( (unsigned int)(v9 + 16) >= 0xFF8 )
            goto LABEL_30;
          goto LABEL_28;
        case 's':
          *a1 = v1 + 2;
          v7 = a1[1116];
          v8 = a1;
          v9 = *((_DWORD *)v7 + 1);
          v30 = 2;
          if ( (unsigned int)(v9 + 16) < 0xFF8 )
          {
LABEL_28:
            v11 = v7 + 4;
          }
          else
          {
LABEL_30:
            v18 = operator new[](0x1000u);
            *v18 = v7;
            v18[1] = 0;
            v8[1116] = (char *)v18;
            v9 = 0;
            v11 = v18 + 1;
            v7 = (char *)v18;
          }
LABEL_31:
          *v11 = v9 + 16;
          *(_DWORD *)&v7[v9 + 12] = 16843044;
          *(_DWORD *)&v7[v9 + 8] = off_13A62C;
          *(_DWORD *)&v7[v9 + 16] = v30;
          v3 = (int)&v7[v9 + 8];
          v19 = sub_C7320(v8, v3);
          if ( v19 != v3 )
          {
            v20 = v8;
            v21 = (int *)v8[38];
            if ( v21 == (int *)v20[39] )
            {
              v31 = v19;
              v22 = (char **)v20[37];
              v23 = (char *)v21 - (char *)v22;
              v35 = v23 >> 2;
              v34 = v23 >> 1;
              if ( v20 + 40 == v22 )
              {
                v33 = v20[37];
                v25 = (char *)malloc(2 * v23);
                if ( v23 )
                  memmove(v25, v33, v23);
                v20 = a1;
                a1[37] = v25;
              }
              else
              {
                v28 = 2 * v23;
                v24 = v20;
                v25 = (char *)realloc(v22, v28);
                v24[37] = v25;
                v20 = v24;
              }
              v21 = (int *)&v25[4 * v35];
              v20[38] = (char *)v21;
              v20[39] = &v25[4 * v34];
              v19 = v31;
            }
            v20[38] = (char *)(v21 + 1);
            *v21 = v19;
            v3 = v19;
          }
          break;
        default:
          return 0;
      }
      return v3;
    }
    return 0;
  }
  if ( v4 != v29 && *v4 == 95 )
  {
    *a1 = v1 + 2;
    v12 = a1[37];
    if ( v12 != a1[38] )
      return *(_DWORD *)v12;
    return 0;
  }
  if ( v29 == v4 )
    return 0;
  v13 = *v4;
  if ( *v4 < 48 )
    return 0;
  v3 = 0;
  if ( v13 < 58 || (unsigned __int8)(v13 - 65) <= 0x19u )
  {
    v14 = v1 + 2;
    v15 = 0;
    while ( 1 )
    {
      v16 = v14;
      v17 = -48;
      if ( v13 >= 58 )
      {
        v17 = -55;
        if ( (unsigned __int8)(v13 - 65) > 0x19u )
          break;
      }
      v15 = v17 + v13 + 36 * v15;
      *a1 = v16;
      if ( v29 != v16 )
      {
        v13 = *v16;
        v14 = v16 + 1;
        if ( *v16 > 47 )
          continue;
      }
      goto LABEL_49;
    }
    --v16;
LABEL_49:
    v3 = 0;
    if ( v16 != v29 && *v16 == 95 )
    {
      *a1 = v16 + 1;
      v27 = a1[37];
      if ( v15 + 1 < (unsigned int)((a1[38] - v27) >> 2) )
        return *(_DWORD *)&v27[4 * v15 + 4];
    }
  }
  return v3;
}
// 13A62C: using guessed type int (*off_13A62C[3])();
