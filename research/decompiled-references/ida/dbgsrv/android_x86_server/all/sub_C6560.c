/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6560
// Address: 0x000C6560

//----- (000C6560) --------------------------------------------------------
int __fastcall sub_C6560(char **a1, char a2)
{
  int v2; // edi
  char *v3; // eax
  char *v4; // ecx
  char *v5; // eax
  _BYTE *v6; // esi
  char *v7; // eax
  _DWORD *v8; // ecx
  char *v9; // edi
  char *v10; // esi
  _BYTE *v11; // edx
  int v12; // esi
  char *v13; // edx
  int v14; // edi
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // ecx
  void *v18; // edx
  _BYTE *v19; // esi
  int v20; // edx
  char *v21; // esi
  _BYTE *v22; // ecx
  _BYTE *v23; // ecx
  signed int v24; // esi
  char *v25; // edi
  char *v26; // esi
  char *v27; // eax
  _DWORD *v28; // edx
  int v29; // ecx
  int v30; // edi
  int v31; // esi
  _DWORD *v32; // eax
  _DWORD *v33; // ebx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  char *v39; // esi
  _BYTE *v40; // edx
  signed int v41; // esi
  char *v42; // edi
  char *v43; // eax
  int v44; // eax
  unsigned int v45; // edi
  _DWORD *v46; // esi
  int v47; // ecx
  _DWORD *v48; // eax
  char *v49; // eax
  _DWORD *v51; // edx
  _DWORD *v52; // eax
  const void *v53; // ecx
  _DWORD *v54; // esi
  int v55; // ecx
  _DWORD *v56; // eax
  _DWORD *v57; // edx
  size_t v58; // [esp+8h] [ebp-84h]
  int v59; // [esp+18h] [ebp-74h]
  char *v60; // [esp+18h] [ebp-74h]
  _DWORD *v61; // [esp+18h] [ebp-74h]
  signed int v62; // [esp+18h] [ebp-74h]
  int v63; // [esp+18h] [ebp-74h]
  _BYTE *v64; // [esp+1Ch] [ebp-70h]
  const void *v65; // [esp+1Ch] [ebp-70h]
  char *v66; // [esp+1Ch] [ebp-70h]
  _DWORD *v67; // [esp+20h] [ebp-6Ch]
  int v68; // [esp+28h] [ebp-64h]
  const void *v69; // [esp+28h] [ebp-64h]
  int v70; // [esp+28h] [ebp-64h]
  int v71; // [esp+2Ch] [ebp-60h]
  const void **v72; // [esp+30h] [ebp-5Ch]
  int v73; // [esp+34h] [ebp-58h]
  int v74; // [esp+34h] [ebp-58h]
  const void *v75; // [esp+38h] [ebp-54h]
  const void *v76; // [esp+38h] [ebp-54h]
  _BYTE *v77; // [esp+3Ch] [ebp-50h]
  int v78; // [esp+40h] [ebp-4Ch]
  _BYTE *v80; // [esp+48h] [ebp-44h]
  _BYTE *v81; // [esp+4Ch] [ebp-40h]
  int *v82; // [esp+50h] [ebp-3Ch]
  _BYTE dest[32]; // [esp+54h] [ebp-38h] BYREF
  int v84; // [esp+74h] [ebp-18h] BYREF

  v2 = (int)a1;
  v3 = *a1;
  v4 = a1[1];
  if ( v3 == v4 || *v3 != 73 )
    return 0;
  v5 = v3 + 1;
  *(_DWORD *)v2 = v5;
  v72 = (const void **)(v2 + 292);
  if ( a2 )
    *(_DWORD *)(v2 + 292) = *(_DWORD *)(v2 + 288);
  v73 = (*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 8)) >> 2;
  v64 = (_BYTE *)(v2 + 300);
  v78 = v2 + 332;
  v77 = (_BYTE *)(v2 + 20);
  v67 = (_DWORD *)v2;
  if ( v5 != v4 )
    goto LABEL_8;
  do
  {
    do
    {
      if ( a2 )
      {
        v80 = dest;
        v82 = &v84;
        v6 = *(_BYTE **)(v2 + 288);
        if ( v6 == v64 )
        {
          v14 = (_BYTE *)*v72 - v6;
          v15 = dest;
          if ( *v72 != v6 )
          {
            memcpy(dest, v64, (_BYTE *)*v72 - v6);
            v15 = &dest[v14 & 0xFFFFFFFC];
          }
          v81 = v15;
          *v72 = v6;
          v2 = (int)v67;
        }
        else
        {
          v80 = *(_BYTE **)(v2 + 288);
          v81 = *(_BYTE **)(v2 + 292);
          v82 = *(int **)(v2 + 296);
          *(_DWORD *)(v2 + 288) = v64;
          *(_DWORD *)(v2 + 292) = v64;
          *(_DWORD *)(v2 + 296) = v78;
        }
        v60 = sub_C5A80((char **)v2);
        v16 = v80;
        v17 = *(_BYTE **)(v2 + 288);
        if ( v80 == dest )
        {
          if ( v17 == v64 )
          {
            v18 = *(void **)(v2 + 288);
            v17 = dest;
          }
          else
          {
            free(*(void **)(v2 + 288));
            *(_DWORD *)(v2 + 288) = v64;
            *(_DWORD *)(v2 + 292) = v64;
            *(_DWORD *)(v2 + 296) = v78;
            v17 = v80;
            v16 = v80;
            v18 = v64;
          }
          if ( v81 == v16 )
          {
            v20 = 0;
            v19 = v64;
          }
          else
          {
            memmove(v18, v17, v81 - v16);
            v19 = *(_BYTE **)(v2 + 288);
            v17 = v80;
            v20 = v81 - v80;
          }
          *v72 = &v19[v20];
          if ( !v60 )
          {
LABEL_75:
            if ( v17 != dest )
              free(v17);
            return 0;
          }
        }
        else
        {
          *(_DWORD *)(v2 + 288) = v80;
          if ( v17 == v64 )
          {
            *(_DWORD *)(v2 + 292) = v81;
            *(_DWORD *)(v2 + 296) = v82;
            v80 = dest;
            v17 = dest;
            if ( !v60 )
              goto LABEL_75;
          }
          else
          {
            v80 = v17;
            *(_DWORD *)(v2 + 292) = v81;
            *(_DWORD *)(v2 + 296) = v82;
            if ( !v60 )
              goto LABEL_75;
          }
        }
        v21 = *(char **)(v2 + 12);
        if ( v21 == *(char **)(v2 + 16) )
        {
          v23 = *(_BYTE **)(v2 + 8);
          v24 = v21 - v23;
          v68 = v24 >> 1;
          if ( v77 == v23 )
          {
            v75 = *(const void **)(v2 + 8);
            v25 = (char *)malloc(2 * v24);
            if ( v24 )
              memmove(v25, v75, v24);
          }
          else
          {
            v25 = (char *)realloc(v23, 2 * v24);
          }
          v67[2] = v25;
          v21 = &v25[4 * (v24 >> 2)];
          v67[3] = v21;
          v27 = &v25[4 * v68];
          v2 = (int)v67;
          v67[4] = v27;
          v22 = v64;
        }
        else
        {
          v22 = v64;
        }
        *(_DWORD *)(v2 + 12) = v21 + 4;
        *(_DWORD *)v21 = v60;
        if ( v60[4] == 28 )
        {
          v28 = *(_DWORD **)(v2 + 4464);
          v29 = v28[1];
          v30 = *((_DWORD *)v60 + 2);
          v31 = *((_DWORD *)v60 + 3);
          if ( (unsigned int)(v29 + 16) < 0xFF8 )
          {
            v33 = v28 + 1;
          }
          else
          {
            v61 = v28;
            v32 = operator new[](0x1000u);
            *v32 = v61;
            v33 = v32 + 1;
            v32[1] = 0;
            v67[1116] = v32;
            v29 = 0;
            v28 = v32;
          }
          *v33 = v29 + 16;
          *(_DWORD *)((char *)v28 + v29 + 12) = 33686043;
          *(_DWORD *)((char *)v28 + v29 + 8) = off_13A664;
          *(_DWORD *)((char *)v28 + v29 + 20) = v31;
          *(_DWORD *)((char *)v28 + v29 + 16) = v30;
          v60 = (char *)v28 + v29 + 8;
          if ( v31 )
          {
            v34 = 4 * v31;
            v35 = v30;
            while ( *(_BYTE *)(*(_DWORD *)v35 + 6) == 1 )
            {
              v35 += 4;
              v34 -= 4;
              if ( !v34 )
                goto LABEL_51;
            }
          }
          else
          {
LABEL_51:
            v60[6] = 1;
          }
          if ( v31 )
          {
            v36 = 4 * v31;
            v37 = v30;
            while ( *(_BYTE *)(*(_DWORD *)v37 + 7) == 1 )
            {
              v37 += 4;
              v36 -= 4;
              if ( !v36 )
                goto LABEL_56;
            }
          }
          else
          {
LABEL_56:
            v60[7] = 1;
          }
          v22 = v64;
          if ( v31 )
          {
            v38 = 4 * v31;
            while ( *(_BYTE *)(*(_DWORD *)v30 + 5) == 1 )
            {
              v30 += 4;
              v38 -= 4;
              if ( !v38 )
                goto LABEL_61;
            }
          }
          else
          {
LABEL_61:
            v60[5] = 1;
          }
          v2 = (int)v67;
        }
        v39 = *(char **)(v2 + 292);
        if ( v39 == *(char **)(v2 + 296) )
        {
          v40 = *(_BYTE **)(v2 + 288);
          v41 = v39 - v40;
          v70 = v41 >> 1;
          if ( v22 == v40 )
          {
            v76 = *(const void **)(v2 + 288);
            v42 = (char *)malloc(2 * v41);
            if ( v41 )
              memmove(v42, v76, v41);
          }
          else
          {
            v42 = (char *)realloc(v40, 2 * v41);
          }
          v67[72] = v42;
          v39 = &v42[4 * (v41 >> 2)];
          v67[73] = v39;
          v43 = &v42[4 * v70];
          v2 = (int)v67;
          v67[74] = v43;
        }
        *v72 = v39 + 4;
        *(_DWORD *)v39 = v60;
        if ( v80 != dest )
          free(v80);
      }
      else
      {
        v7 = sub_C5A80((char **)v2);
        if ( !v7 )
          return 0;
        v8 = (_DWORD *)v2;
        v9 = v7;
        v10 = (char *)v8[3];
        if ( v10 == (char *)v8[4] )
        {
          v11 = (_BYTE *)v8[2];
          v12 = v10 - v11;
          v59 = v12 >> 2;
          v71 = v12 >> 1;
          if ( v77 == v11 )
          {
            v69 = (const void *)v8[2];
            v13 = (char *)malloc(2 * v12);
            if ( v12 )
            {
              v58 = v12;
              v26 = v13;
              memmove(v13, v69, v58);
              v13 = v26;
            }
          }
          else
          {
            v13 = (char *)realloc(v11, 2 * v12);
          }
          v8 = v67;
          v67[2] = v13;
          v10 = &v13[4 * v59];
          v67[3] = v10;
          v67[4] = &v13[4 * v71];
        }
        v8[3] = v10 + 4;
        *(_DWORD *)v10 = v9;
        v2 = (int)v8;
      }
      v5 = *(char **)v2;
    }
    while ( *(_DWORD *)v2 == *(_DWORD *)(v2 + 4) );
LABEL_8:
    ;
  }
  while ( *v5 != 69 );
  *(_DWORD *)v2 = v5 + 1;
  v74 = 4 * v73;
  v65 = (const void *)(v74 + *(_DWORD *)(v2 + 8));
  v44 = v2;
  v62 = *(_DWORD *)(v2 + 12) - (_DWORD)v65;
  v45 = (v62 + 15) & 0xFFFFFFF0;
  v46 = *(_DWORD **)(v44 + 4464);
  v47 = v46[1];
  if ( v45 + v47 < 0xFF8 )
  {
    v51 = v46 + 1;
LABEL_80:
    *v51 = v47 + v45;
    v49 = (char *)v46 + v47 + 8;
    goto LABEL_81;
  }
  if ( v45 < 0xFF9 )
  {
    v52 = operator new[](0x1000u);
    *v52 = v46;
    v52[1] = 0;
    v67[1116] = v52;
    v47 = 0;
    v51 = v52 + 1;
    v46 = v52;
    goto LABEL_80;
  }
  v48 = operator new[](v45 | 8);
  *v48 = *v46;
  v48[1] = 0;
  *v46 = v48;
  v49 = (char *)(v48 + 2);
LABEL_81:
  v53 = v65;
  v66 = v49;
  if ( v62 )
  {
    memmove(v49, v53, v62);
    v53 = (const void *)(v67[2] + v74);
  }
  v63 = v62 >> 2;
  v67[3] = v53;
  v54 = (_DWORD *)v67[1116];
  v55 = v54[1];
  if ( (unsigned int)(v55 + 16) < 0xFF8 )
  {
    v57 = v54 + 1;
  }
  else
  {
    v56 = operator new[](0x1000u);
    *v56 = v54;
    v56[1] = 0;
    v67[1116] = v56;
    v55 = 0;
    v57 = v56 + 1;
    v54 = v56;
  }
  *v57 = v55 + 16;
  *(_DWORD *)((char *)v54 + v55 + 12) = 16843038;
  *(_DWORD *)((char *)v54 + v55 + 8) = off_13A69C;
  *(_DWORD *)((char *)v54 + v55 + 16) = v66;
  *(_DWORD *)((char *)v54 + v55 + 20) = v63;
  return (int)v54 + v55 + 8;
}
// 13A664: using guessed type int (__cdecl *off_13A664[5])(int, int);
// 13A69C: using guessed type int (*off_13A69C[3])();
