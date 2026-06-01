/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432050
// Address: 0x00432050

//----- (00432050) --------------------------------------------------------
int __userpurge sub_432050@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, _BYTE *a4)
{
  char v5; // bl
  char v6; // bh
  int v7; // esi
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  char *v10; // eax
  char v11; // bl
  int *v12; // eax
  int v13; // edx
  char v14; // bh
  int v15; // esi
  int v16; // esi
  char v17; // bl
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // eax
  int *v24; // eax
  _BYTE *v25; // [esp+10h] [ebp-20h] BYREF
  int v26; // [esp+14h] [ebp-1Ch]
  int v27; // [esp+18h] [ebp-18h]
  int v28; // [esp+1Ch] [ebp-14h]
  char v29; // [esp+22h] [ebp-Eh]
  char v30; // [esp+23h] [ebp-Dh]
  int v31; // [esp+2Ch] [ebp-4h]

  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v5 = 0;
  v6 = 0;
  v31 = 0;
  v30 = 0;
  v28 = 0;
  v29 = 0;
  *a4 = 1;
  v7 = sub_437CF0(a1, a2);
  if ( v7 == 34 )
    goto LABEL_40;
  while ( 1 )
  {
    if ( v7 )
      goto LABEL_43;
    if ( !v5 )
      break;
    while ( 2 )
    {
      v10 = *(char **)(a1 + 4);
      v11 = *v10;
      switch ( *v10 )
      {
        case 0:
          goto LABEL_37;
        case 9:
        case 10:
        case 32:
          if ( v6 )
          {
            *(_DWORD *)(a1 + 4) = v10 + 1;
            continue;
          }
          v6 = 1;
LABEL_35:
          v29 = v6;
          goto LABEL_36;
        case 34:
          if ( v11 )
          {
            v13 = *(_DWORD *)(a1 + 4);
            v14 = *v10;
            do
            {
              v15 = v26;
              *(_DWORD *)(a1 + 4) = v13 + 1;
              v16 = v15 != 0 ? v15 - 1 : 0;
              sub_402940((int)&v25, v16 + 2);
              v25[v16] = v14;
              v25[v16 + 1] = 0;
              if ( v14 == 92 )
              {
                v17 = **(_BYTE **)(a1 + 4);
                if ( v17 )
                {
                  v18 = v26 != 0 ? v26 - 1 : 0;
                  sub_402940((int)&v25, v18 + 2);
                  v25[v18] = v17;
                  v25[v18 + 1] = 0;
                  ++*(_DWORD *)(a1 + 4);
                }
              }
              v10 = *(char **)(a1 + 4);
              v11 = *v10;
              if ( *v10 == 34 )
                break;
              v13 = *(_DWORD *)(a1 + 4);
              v14 = *v10;
            }
            while ( *v10 );
            v6 = v29;
          }
          if ( v11 )
          {
            v11 = *v10;
LABEL_36:
            v19 = v26;
            *(_DWORD *)(a1 + 4) = v10 + 1;
            v20 = v19 != 0 ? v19 - 1 : 0;
            sub_402940((int)&v25, v20 + 2);
            v25[v20] = v11;
            v25[v20 + 1] = 0;
            continue;
          }
LABEL_37:
          v21 = v26 != 0 ? v26 - 1 : 0;
          sub_402940((int)&v25, v21 + 2);
          v6 = 1;
          v29 = 1;
          v25[v21] = 32;
          v25[v21 + 1] = 0;
LABEL_38:
          v5 = v30;
LABEL_39:
          v7 = sub_437CF0(a1, a2);
          if ( v7 == 34 )
          {
LABEL_40:
            v22 = 0;
            if ( v5 )
              v22 = 38;
            v7 = sub_45CC20(v22);
            goto LABEL_43;
          }
          break;
        case 40:
          if ( (*(_DWORD *)(a1 + 324) & 2) != 0 && v10[1] == 42 )
            goto LABEL_38;
          ++v28;
          goto LABEL_36;
        case 41:
          if ( !v28 )
          {
            v24 = (int *)sub_4156E0(a3);
            sub_408340(v24, (int *)&v25);
            ++*(_DWORD *)(a1 + 4);
            v7 = 0;
            goto LABEL_43;
          }
          --v28;
          goto LABEL_36;
        case 44:
          if ( v28 )
            goto LABEL_36;
          v12 = (int *)sub_4156E0(a3);
          sub_408340(v12, (int *)&v25);
          ++*(_DWORD *)(a1 + 4);
          goto LABEL_38;
        case 47:
          if ( ((*(_BYTE *)(a1 + 324) & 1) == 0 || v10[1] != 42) && ((*(_DWORD *)(a1 + 324) & 4) == 0 || v10[1] != 47) )
            goto LABEL_34;
          goto LABEL_38;
        case 59:
          if ( (*(_DWORD *)(a1 + 324) & 8) == 0 )
            goto LABEL_34;
          goto LABEL_38;
        default:
LABEL_34:
          v6 = 0;
          goto LABEL_35;
      }
      break;
    }
  }
  v8 = *(_BYTE **)(a1 + 4);
  if ( *v8 == 40 )
  {
    v9 = v8 + 1;
    v5 = 1;
    *(_DWORD *)(a1 + 4) = v9;
    v30 = 1;
    if ( *v9 != 41 )
      goto LABEL_39;
    *(_DWORD *)(a1 + 4) = v9 + 1;
  }
  else
  {
    v7 = 0;
    *a4 = 0;
  }
LABEL_43:
  v31 = 5;
  if ( v25 )
  {
    v26 = 0;
    sub_453A20(v25);
  }
  return v7;
}
