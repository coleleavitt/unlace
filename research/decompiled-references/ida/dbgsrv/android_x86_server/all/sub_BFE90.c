/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFE90
// Address: 0x000BFE90

//----- (000BFE90) --------------------------------------------------------
int __cdecl sub_BFE90(int a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  _DWORD *v5; // edx
  int v6; // ecx
  int result; // eax
  const char *v8; // esi
  _DWORD *v9; // esi
  int v10; // ecx
  int v11; // eax
  char *v12; // eax
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // edx
  _DWORD *v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  char *v21; // eax
  int v22; // ecx
  _DWORD *v23; // ecx
  int v24; // eax
  _DWORD *v25; // edx
  _DWORD *v26; // edi
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // esi
  _DWORD *v30; // edi
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  char *v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // eax
  _DWORD *v38; // edi
  int v39; // edx
  char *v40; // eax
  int v41; // ecx
  const char *v42; // [esp-10h] [ebp-3Ch]
  int v43; // [esp+4h] [ebp-28h]
  unsigned int v44; // [esp+4h] [ebp-28h]
  char v45; // [esp+8h] [ebp-24h]
  char v46; // [esp+10h] [ebp-1Ch]
  unsigned int v47; // [esp+14h] [ebp-18h]

  v5 = a3;
  v6 = a2;
  result = *(_DWORD *)(a2 + 8);
  if ( a5 )
  {
    v8 = *(const char **)(a1 + 4);
    result = strcmp(v8, *(const char **)(result + 4));
    v5 = a3;
    v6 = a2;
    if ( result )
    {
      v42 = v8;
      v9 = (_DWORD *)a2;
      result = strcmp(v42, *(const char **)(*(_DWORD *)a2 + 4));
      v5 = a3;
      if ( result )
      {
LABEL_4:
        v43 = *(_DWORD *)(a1 + 12);
        v10 = *(_DWORD *)(a1 + 20);
        v11 = v10 >> 8;
        if ( (v10 & 1) != 0 )
          v11 = *(_DWORD *)(*v5 + v11);
        v12 = (char *)v5 + v11;
        v13 = (v10 & 2) == 0;
        v14 = 2;
        if ( !v13 )
          v14 = a4;
        (*(void (__cdecl **)(_DWORD, int, char *, int, _DWORD))(**(_DWORD **)(a1 + 16) + 24))(
          *(_DWORD *)(a1 + 16),
          a2,
          v12,
          v14,
          a5);
        v15 = a2;
        result = v43;
        if ( v43 >= 2 )
        {
          v44 = a1 + 8 * v43 + 16;
          result = *(_DWORD *)(a1 + 8);
          v16 = (_DWORD *)(a1 + 24);
          if ( (result & 2) != 0 || *(_DWORD *)(a2 + 36) == 1 )
          {
            do
            {
              if ( *(_BYTE *)(v15 + 54) )
                break;
              v17 = v16;
              v18 = v16[1];
              v19 = v18 >> 8;
              if ( (v18 & 1) != 0 )
                v19 = *(_DWORD *)(*a3 + v19);
              v20 = *v16;
              v21 = (char *)a3 + v19;
              v13 = (v18 & 2) == 0;
              v22 = a4;
              if ( v13 )
                v22 = 2;
              result = (*(int (__cdecl **)(int, int, char *, int, _DWORD))(*(_DWORD *)v20 + 24))(v20, a2, v21, v22, a5);
              v15 = a2;
              v16 = v17 + 2;
            }
            while ( (unsigned int)(v17 + 2) < v44 );
          }
          else if ( (result & 1) != 0 )
          {
            do
            {
              if ( *(_BYTE *)(v15 + 54) || *(_DWORD *)(v15 + 36) == 1 && *(_DWORD *)(v15 + 24) == 1 )
                break;
              v36 = v16[1];
              v37 = v36 >> 8;
              v38 = v16;
              if ( (v36 & 1) != 0 )
                v37 = *(_DWORD *)(*a3 + v37);
              v39 = *v16;
              v40 = (char *)a3 + v37;
              v13 = (v36 & 2) == 0;
              v41 = a4;
              if ( v13 )
                v41 = 2;
              result = (*(int (__cdecl **)(int, int, char *, int, _DWORD))(*(_DWORD *)v39 + 24))(v39, a2, v40, v41, a5);
              v15 = a2;
              v16 = v38 + 2;
            }
            while ( (unsigned int)(v38 + 2) < v44 );
          }
          else
          {
            do
            {
              if ( *(_BYTE *)(v15 + 54) || *(_DWORD *)(v15 + 36) == 1 )
                break;
              v30 = v16;
              v31 = v16[1];
              v32 = v31 >> 8;
              if ( (v31 & 1) != 0 )
                v32 = *(_DWORD *)(*a3 + v32);
              v33 = *v16;
              v34 = (char *)a3 + v32;
              v13 = (v31 & 2) == 0;
              v35 = a4;
              if ( v13 )
                v35 = 2;
              result = (*(int (__cdecl **)(int, int, char *, int, _DWORD))(*(_DWORD *)v33 + 24))(v33, a2, v34, v35, a5);
              v15 = a2;
              v16 = v30 + 2;
            }
            while ( (unsigned int)(v30 + 2) < v44 );
          }
        }
        return result;
      }
      goto LABEL_20;
    }
LABEL_37:
    if ( *(_DWORD **)(v6 + 4) == v5 && *(_DWORD *)(v6 + 28) != 1 )
    {
      *(_DWORD *)(v6 + 28) = a4;
      return a4;
    }
    return result;
  }
  if ( a1 == result )
    goto LABEL_37;
  result = a1;
  v9 = (_DWORD *)a2;
  if ( a1 != *(_DWORD *)a2 )
    goto LABEL_4;
LABEL_20:
  v23 = v9;
  if ( (_DWORD *)v9[4] == v5 || (_DWORD *)v9[5] == v5 )
  {
    if ( a4 == 1 )
      v9[8] = 1;
  }
  else
  {
    result = a4;
    v9[8] = a4;
    if ( v9[11] != 4 )
    {
      v24 = *(_DWORD *)(a1 + 12);
      if ( v24 <= 0 )
      {
        v45 = 0;
        v25 = a3;
      }
      else
      {
        v47 = a1 + 8 * v24 + 16;
        v46 = 0;
        v45 = 0;
        v25 = a3;
        v26 = (_DWORD *)(a1 + 16);
        while ( 1 )
        {
          *((_WORD *)v23 + 26) = 0;
          v27 = v26[1];
          v28 = v27 >> 8;
          v29 = v25;
          if ( (v27 & 1) != 0 )
            v28 = *(_DWORD *)(*v25 + v28);
          (*(void (__cdecl **)(_DWORD, int, _DWORD *, int, int, _DWORD))(*(_DWORD *)*v26 + 20))(
            *v26,
            a2,
            v25,
            (int)v25 + v28,
            ((v26[1] & 2) == 0) + 1,
            a5);
          v23 = (_DWORD *)a2;
          if ( *(_BYTE *)(a2 + 54) )
            break;
          if ( *(_BYTE *)(a2 + 53) )
          {
            if ( *(_BYTE *)(a2 + 52) )
            {
              if ( *(_DWORD *)(a2 + 24) == 1 )
              {
                v45 = 1;
                goto LABEL_67;
              }
              v25 = v29;
              v45 = 1;
              v46 = 1;
              if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
                goto LABEL_67;
            }
            else
            {
              v46 = 1;
              v25 = v29;
              if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
                goto LABEL_62;
            }
          }
          else
          {
            v25 = v29;
          }
          v26 += 2;
          if ( (unsigned int)v26 >= v47 )
            goto LABEL_62;
        }
        v25 = v29;
LABEL_62:
        v13 = (v45 & 1) == 0;
        v45 = v46;
        if ( !v13 )
          goto LABEL_67;
      }
      v23[5] = v25;
      ++v23[10];
      if ( v23[9] == 1 && v23[6] == 2 )
        *((_BYTE *)v23 + 54) = 1;
LABEL_67:
      result = v45 & 1;
      v23[11] = 4 - result;
    }
  }
  return result;
}
