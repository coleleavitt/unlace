/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DB8BB
// Address: 0x000DB8BB

//----- (000DB8BB) --------------------------------------------------------
int __usercall sub_DB8BB@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  char v3; // al
  char v4; // al
  int *i; // edi
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  int v11; // edx
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  int result; // eax
  unsigned int v15; // edi
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // edi
  unsigned int m; // edi
  unsigned int v23; // esi
  _BYTE *v24; // eax
  unsigned int v25; // eax
  int *n; // edi
  int *j; // edi
  int v28; // eax
  _DWORD *v29; // edx
  int *v30; // edi
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // [esp+0h] [ebp-4Ch]
  int v36; // [esp+0h] [ebp-4Ch]
  _DWORD *v37; // [esp+4h] [ebp-48h]
  int v38; // [esp+4h] [ebp-48h]
  _DWORD *v39; // [esp+8h] [ebp-44h]
  _BYTE *v40; // [esp+8h] [ebp-44h]
  int v41; // [esp+8h] [ebp-44h]
  int k; // [esp+Ch] [ebp-40h]
  _DWORD *v43; // [esp+Ch] [ebp-40h]
  char v44; // [esp+Ch] [ebp-40h]
  int v45; // [esp+Ch] [ebp-40h]
  int v46; // [esp+10h] [ebp-3Ch]
  _DWORD *v47; // [esp+10h] [ebp-3Ch]
  int v48; // [esp+10h] [ebp-3Ch]
  char v49; // [esp+10h] [ebp-3Ch]
  int *v50; // [esp+10h] [ebp-3Ch]
  int v51; // [esp+14h] [ebp-38h]
  __int16 v52; // [esp+14h] [ebp-38h]
  int (__cdecl *v53)(int, int, int); // [esp+14h] [ebp-38h]
  int v54; // [esp+18h] [ebp-34h]
  unsigned int v55; // [esp+18h] [ebp-34h]
  int v56; // [esp+18h] [ebp-34h]
  char *v57; // [esp+18h] [ebp-34h]
  int v59; // [esp+20h] [ebp-2Ch]
  _DWORD *v60; // [esp+20h] [ebp-2Ch]
  unsigned int v61; // [esp+20h] [ebp-2Ch]
  unsigned int v62; // [esp+20h] [ebp-2Ch]
  unsigned int v63; // [esp+20h] [ebp-2Ch]
  unsigned int v64; // [esp+28h] [ebp-24h] BYREF
  _DWORD *v65; // [esp+2Ch] [ebp-20h] BYREF
  void *ptr; // [esp+30h] [ebp-1Ch]

  v3 = *(_BYTE *)(a1 + 16);
  if ( (v3 & 1) != 0 )
    goto LABEL_2;
  v59 = *(_DWORD *)(a1 + 16) >> 11;
  if ( v59 )
    goto LABEL_16;
  if ( (v3 & 2) != 0 )
  {
    for ( i = *(int **)(a1 + 12); *i; ++i )
    {
      v6 = sub_DB6BB((_DWORD *)a1, *i);
      if ( v6 == -1 )
        goto LABEL_9;
      v59 += v6;
    }
  }
  else
  {
    v59 = sub_DB6BB((_DWORD *)a1, *(_DWORD *)(a1 + 12));
    if ( v59 == -1 )
    {
LABEL_9:
      *(_DWORD *)(a1 + 16) = 0;
      *(_WORD *)(a1 + 16) = 2040;
      *(_DWORD *)(a1 + 12) = dword_13E604;
      goto LABEL_32;
    }
  }
  v7 = (v59 & 0x1FFFFF) == v59 ? (v59 << 11) | *(_DWORD *)(a1 + 16) & 0x7FF : *(_DWORD *)(a1 + 16) & 0x7FF;
  *(_DWORD *)(a1 + 16) = v7;
  if ( v59 )
  {
LABEL_16:
    v8 = malloc(4 * v59 + 8);
    v65 = v8;
    if ( v8 )
    {
      v8[1] = 0;
      v9 = malloc(4 * v59 + 8);
      ptr = v9;
      if ( v9 )
        v9[1] = 0;
      if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
      {
        for ( j = *(int **)(a1 + 12); ; ++j )
        {
          v28 = *j;
          if ( !*j )
            break;
          sub_DB7D0(a1, (int *)&v65, v28);
        }
      }
      else
      {
        sub_DB7D0(a1, (int *)&v65, *(_DWORD *)(a1 + 12));
      }
      v29 = v65;
      if ( v65 && v65[1] != v59 )
LABEL_69:
        abort();
      v53 = sub_DB642;
      if ( (*(_BYTE *)(a1 + 16) & 4) == 0 )
      {
        v53 = sub_DACD0;
        if ( (*(_WORD *)(a1 + 16) & 0x7F8) != 0 )
          v53 = sub_DAF76;
      }
      v57 = (char *)ptr;
      if ( ptr )
      {
        v30 = &dword_13E600;
        v31 = 0;
        v41 = v65[1];
        v32 = (int)(v65 + 2);
        v50 = v65 + 2;
        while ( v31 != v41 )
        {
          while ( v30 != &dword_13E600 )
          {
            v35 = v31;
            v37 = v29;
            v33 = ((int (__cdecl *)(int, int, int, int))v53)(a1, *v50, *v30, v32);
            v29 = v37;
            v31 = v35;
            if ( v33 >= 0 )
              break;
            v32 = (int)v30 + v57 - (char *)v37 - 8;
            v30 = *(int **)((char *)v30 + v57 - (char *)v37);
            *(_DWORD *)(v32 + 8) = 0;
          }
          v32 = (int)v57;
          *(_DWORD *)&v57[4 * v31 + 8] = v30;
          v30 = v50++;
          ++v31;
        }
        v46 = 0;
        v12 = nullptr;
        for ( k = 0; k != v41; ++k )
        {
          if ( *(_DWORD *)&v57[4 * k + 8] )
          {
            v29[v46++ + 2] = v29[k + 2];
          }
          else
          {
            *(_DWORD *)&v57[4 * (_DWORD)v12 + 8] = v29[k + 2];
            v12 = (_DWORD *)((char *)v12 + 1);
          }
        }
        v29[1] = v46;
        v10 = ptr;
        *((_DWORD *)v57 + 1) = v12;
        if ( v10[1] + v65[1] != v59 )
          goto LABEL_69;
        sub_DAD80(a1, (int (__cdecl *)(int, int, int, int))v53, (int)v10);
        v47 = ptr;
        v60 = v65;
        v11 = *((_DWORD *)ptr + 1);
        if ( v11 )
        {
          v54 = v65[1];
          v39 = &v65[v11];
          do
          {
            v43 = (_DWORD *)v47[--v11 + 2];
            while ( v54 )
            {
              v36 = v11;
              v38 = v54 - 1;
              v34 = ((int (__cdecl *)(int, _DWORD, _DWORD *, _DWORD *))v53)(a1, v60[v54 + 1], v43, v12);
              v11 = v36;
              if ( v34 <= 0 )
                break;
              v12 = v39;
              --v54;
              v39[v38 + 2] = v60[v38 + 2];
            }
            --v39;
            v12 = v43;
            v60[v11 + 2 + v54] = v43;
          }
          while ( v11 );
          v60[1] += v47[1];
        }
        free(ptr);
      }
      else
      {
        sub_DAD80(a1, (int (__cdecl *)(int, int, int, int))v53, (int)v65);
      }
      v13 = v65;
      *v65 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = v13;
      *(_BYTE *)(a1 + 16) |= 1u;
    }
  }
LABEL_32:
  if ( a2 < *(_DWORD *)a1 )
    return 0;
LABEL_2:
  v4 = *(_BYTE *)(a1 + 16);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      v55 = 0;
      v15 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4);
      v48 = *(_DWORD *)(a1 + 12);
      while ( v55 < v15 )
      {
        v61 = (v15 + v55) >> 1;
        v51 = *(_DWORD *)(v48 + 4 * v61 + 8);
        v44 = sub_DB198(v51);
        v16 = (_BYTE *)sub_DAE47(v44, a1);
        v17 = sub_DAECB(v44, v16, (_BYTE *)(v51 + 8), &v64);
        sub_DAECB(v44 & 0xF, nullptr, v17, &v65);
        if ( a2 >= v64 )
        {
          if ( a2 < (unsigned int)v65 + v64 )
            return v51;
          v61 = v15;
          v55 = ((v15 + v55) >> 1) + 1;
        }
        v15 = v61;
      }
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 16);
      if ( (v18 & 0x7F8) != 0 )
      {
        v52 = (unsigned __int16)v18 >> 3;
        v56 = *(_DWORD *)(a1 + 12);
        v49 = (unsigned __int16)v18 >> 3;
        v40 = (_BYTE *)sub_DAE47(v49, a1);
        v63 = 0;
        for ( m = *(_DWORD *)(v56 + 4); v63 < m; m = v23 )
        {
          v23 = (m + v63) >> 1;
          v45 = *(_DWORD *)(v56 + 4 * v23 + 8);
          v24 = sub_DAECB(v49, v40, (_BYTE *)(v45 + 8), &v64);
          sub_DAECB(v52 & 0xF, nullptr, v24, &v65);
          if ( a2 >= v64 )
          {
            if ( a2 < (unsigned int)v65 + v64 )
              return v45;
            v25 = v23 + 1;
            v23 = m;
            v63 = v25;
          }
        }
      }
      else
      {
        v19 = 0;
        v20 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4);
        while ( v19 < v20 )
        {
          v62 = (v20 + v19) >> 1;
          result = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v62 + 8);
          v21 = *(_DWORD *)(result + 8);
          if ( a2 < v21 )
          {
            v20 = (v20 + v19) >> 1;
          }
          else
          {
            if ( a2 < *(_DWORD *)(result + 12) + v21 )
              return result;
            v19 = v62 + 1;
          }
        }
      }
    }
    return 0;
  }
  if ( (v4 & 2) != 0 )
  {
    for ( n = *(int **)(a1 + 12); *n; ++n )
    {
      result = sub_DB098(a1, *n, a2);
      if ( result )
        return result;
    }
    return 0;
  }
  return sub_DB098(a1, *(_DWORD *)(a1 + 12), a2);
}
// 13E600: using guessed type int dword_13E600;
// 13E604: using guessed type int dword_13E604[3];
