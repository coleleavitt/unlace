/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D3C0
// Address: 0x0006D3C0

//----- (0006D3C0) --------------------------------------------------------
int __cdecl sub_6D3C0(int a1, int a2, _BYTE *a3)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  char *v6; // eax
  char v7; // dl
  int v8; // ecx
  char *v9; // esi
  char v10; // dl
  _BYTE *v11; // eax
  int v12; // edi
  int v13; // ecx
  char v14; // dl
  _BYTE *v15; // eax
  int v16; // edi
  char v17; // dl
  _BYTE *v18; // eax
  int v19; // edi
  _BYTE *v20; // eax
  int v21; // edi
  _BYTE *v22; // eax
  int v23; // edx
  int v24; // ecx
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // esi
  unsigned int v28; // edi
  int v29; // ecx
  int v30; // ecx
  _DWORD *v31; // eax
  int v32; // ecx
  int v33; // esi
  unsigned int v34; // edi
  int v36; // [esp+8h] [ebp-34h]
  int v37; // [esp+8h] [ebp-34h]
  int v38; // [esp+Ch] [ebp-30h]
  char v39; // [esp+10h] [ebp-2Ch]
  char v40; // [esp+10h] [ebp-2Ch]
  char v41; // [esp+10h] [ebp-2Ch]
  int v42; // [esp+10h] [ebp-2Ch]
  int v43; // [esp+14h] [ebp-28h]
  int v44; // [esp+18h] [ebp-24h] BYREF
  int v45; // [esp+1Ch] [ebp-20h]
  unsigned int v46; // [esp+20h] [ebp-1Ch]
  unsigned int v47; // [esp+28h] [ebp-14h]

  v3 = a1;
  v47 = __readgsdword(0x14u);
  v44 = 0;
  v45 = 0;
  v46 = 0;
  *a3 = 1;
  v43 = 0;
  LOBYTE(v38) = 1;
  v4 = 0;
  while ( 1 )
  {
LABEL_3:
    v36 = v4;
    v5 = sub_6C620(v3);
    if ( v5 )
    {
      if ( v5 == 34 )
      {
        v29 = 38;
        if ( (v38 & 1) != 0 )
          v29 = 0;
        v38 = set_qerrno(v29);
      }
      else
      {
        v38 = v5;
      }
      goto LABEL_71;
    }
    if ( (v38 & 1) != 0 )
      break;
LABEL_7:
    v3 = a1;
    v6 = *(char **)(a1 + 4);
    while ( 2 )
    {
      v7 = *v6++;
      v8 = 0;
      switch ( v7 )
      {
        case 0:
          goto LABEL_49;
        case 9:
        case 10:
        case 32:
          if ( (v36 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 4) = v6;
            continue;
          }
          LOBYTE(v8) = 1;
LABEL_12:
          v9 = v6 - 1;
          v36 = v8;
          goto LABEL_13;
        case 34:
          v9 = v6 - 1;
          while ( 2 )
          {
            if ( v7 )
            {
              *(_DWORD *)(v3 + 4) = v9 + 1;
              v14 = *v9;
              v15 = (_BYTE *)v44;
              v16 = v45;
              if ( v45 )
                v16 = v45 - 1;
              if ( v46 < v16 + 2 )
              {
                v40 = *v9;
                v15 = qvector_reserve((int)&v44, (void *)v44, v16 + 2, 1u);
                v44 = (int)v15;
                v14 = v40;
              }
              v45 = v16 + 2;
              v15[v16] = v14;
              *(_BYTE *)(v44 + v16 + 1) = 0;
              v3 = a1;
              v9 = *(char **)(a1 + 4);
              if ( v14 == 92 )
              {
                v17 = *v9;
                if ( *v9 )
                {
                  v18 = (_BYTE *)v44;
                  v19 = v45 - 1;
                  if ( !v45 )
                    v19 = 0;
                  if ( v46 < v19 + 2 )
                  {
                    v41 = *v9;
                    v18 = qvector_reserve((int)&v44, (void *)v44, v19 + 2, 1u);
                    v44 = (int)v18;
                    v17 = v41;
                  }
                  v45 = v19 + 2;
                  v18[v19] = v17;
                  *(_BYTE *)(v44 + v19 + 1) = 0;
                  v3 = a1;
                  v9 = (char *)(*(_DWORD *)(a1 + 4) + 1);
                  *(_DWORD *)(a1 + 4) = v9;
                  goto LABEL_39;
                }
                v7 = 0;
              }
              else
              {
LABEL_39:
                v7 = *v9;
              }
              if ( v7 == 34 )
                goto LABEL_13;
              continue;
            }
            break;
          }
LABEL_49:
          v20 = (_BYTE *)v44;
          v4 = v45;
          v21 = v45 - 1;
          if ( !v45 )
            v21 = 0;
          if ( v46 < v21 + 2 )
          {
            v20 = qvector_reserve((int)&v44, (void *)v44, v21 + 2, 1u);
            v44 = (int)v20;
          }
          v45 = v21 + 2;
          v20[v21] = 32;
          *(_BYTE *)(v44 + v21 + 1) = 0;
          LOBYTE(v4) = 1;
          v3 = a1;
          goto LABEL_3;
        case 40:
          if ( (*(_BYTE *)(a1 + 276) & 2) != 0 && *v6 == 42 )
            goto LABEL_60;
          ++v43;
          v9 = v6 - 1;
          goto LABEL_13;
        case 41:
          if ( !v43 )
          {
            v30 = *(_DWORD *)(a2 + 4);
            if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v30 + 1) )
            {
              v31 = *(_DWORD **)a2;
            }
            else
            {
              v31 = qvector_reserve(a2, *(void **)a2, v30 + 1, 0xCu);
              *(_DWORD *)a2 = v31;
              v30 = *(_DWORD *)(a2 + 4);
            }
            v32 = 3 * v30;
            v31[v32] = 0;
            v31[v32 + 1] = 0;
            v31[v32 + 2] = 0;
            ++*(_DWORD *)(a2 + 4);
            v37 = v31[v32];
            v33 = v31[v32 + 1];
            v34 = v31[v32 + 2];
            v31[v32] = v44;
            v31[v32 + 1] = v45;
            v31[v32 + 2] = v46;
            v44 = v37;
            v45 = v33;
            v46 = v34;
            ++*(_DWORD *)(a1 + 4);
LABEL_70:
            v38 = 0;
            goto LABEL_71;
          }
          --v43;
          v9 = v6 - 1;
          goto LABEL_13;
        case 44:
          if ( v43 )
          {
            v9 = v6 - 1;
LABEL_13:
            *(_DWORD *)(v3 + 4) = v9 + 1;
            v10 = *v9;
            v11 = (_BYTE *)v44;
            v12 = v45;
            if ( v45 )
              v12 = v45 - 1;
            if ( v46 < v12 + 2 )
            {
              v39 = *v9;
              v11 = qvector_reserve((int)&v44, (void *)v44, v12 + 2, 1u);
              v44 = (int)v11;
              v10 = v39;
            }
            v45 = v12 + 2;
            v11[v12] = v10;
            *(_BYTE *)(v44 + v12 + 1) = 0;
            goto LABEL_7;
          }
          v23 = a2;
          v24 = *(_DWORD *)(a2 + 4);
          if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v24 + 1) )
          {
            v25 = *(_DWORD **)a2;
          }
          else
          {
            v25 = qvector_reserve(a2, *(void **)a2, v24 + 1, 0xCu);
            v23 = a2;
            *(_DWORD *)a2 = v25;
            v24 = *(_DWORD *)(a2 + 4);
          }
          v26 = 3 * v24;
          v25[v26] = 0;
          v25[v26 + 1] = 0;
          v25[v26 + 2] = 0;
          ++*(_DWORD *)(v23 + 4);
          v42 = v25[v26];
          v27 = v25[v26 + 1];
          v28 = v25[v26 + 2];
          v25[v26] = v44;
          v25[v26 + 1] = v45;
          v25[v26 + 2] = v46;
          v44 = v42;
          v45 = v27;
          v46 = v28;
          v3 = a1;
          ++*(_DWORD *)(a1 + 4);
LABEL_60:
          v4 = v36;
          break;
        case 47:
          v13 = *(_DWORD *)(a1 + 276);
          if ( (v13 & 1) != 0 && *v6 == 42 )
            goto LABEL_60;
          v9 = v6 - 1;
          if ( (v13 & 4) != 0 )
          {
            v4 = v36;
            v36 = 0;
            if ( *v6 == 47 )
              goto LABEL_3;
          }
          else
          {
            v36 = 0;
          }
          goto LABEL_13;
        case 59:
          v4 = v36;
          v9 = v6 - 1;
          v36 = 0;
          if ( (*(_BYTE *)(a1 + 276) & 8) != 0 )
            goto LABEL_3;
          goto LABEL_13;
        default:
          goto LABEL_12;
      }
      break;
    }
  }
  v3 = a1;
  v22 = *(_BYTE **)(a1 + 4);
  if ( *v22 != 40 )
  {
    *a3 = 0;
    goto LABEL_70;
  }
  *(_DWORD *)(a1 + 4) = v22 + 1;
  v38 = 0;
  v4 = v36;
  if ( v22[1] != 41 )
    goto LABEL_3;
  *(_DWORD *)(a1 + 4) = v22 + 2;
LABEL_71:
  if ( v44 )
  {
    v45 = 0;
    qfree((void *)v44);
    v44 = 0;
    v46 = 0;
  }
  return v38;
}
// 6D436: variable 'v4' is possibly undefined
