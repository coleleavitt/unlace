/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D66A0
// Address: 0x000D66A0

//----- (000D66A0) --------------------------------------------------------
char *__fastcall sub_D66A0(char **a1)
{
  char **v1; // esi
  char *v2; // edx
  char *v3; // eax
  int v4; // edi
  char *v5; // ecx
  char *v6; // eax
  char *v7; // edi
  char **v8; // eax
  char *v9; // esi
  char **v10; // edi
  unsigned int v11; // edx
  char *v12; // eax
  bool v13; // zf
  char *result; // eax
  char **v15; // edx
  char *v16; // esi
  int v17; // ecx
  char **v18; // edi
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  char v21; // al
  __int16 v22; // dx
  bool v23; // cf
  char *v24; // edx
  unsigned int v25; // edx
  int v26; // eax
  char *v27; // edi
  int v28; // edx
  char *v29; // eax
  char *v30; // esi
  char *v31; // edi
  unsigned int v32; // edx
  char *v33; // ecx
  char **v34; // edi
  _DWORD *v35; // eax
  _DWORD *v36; // edx
  char *v37; // eax
  char *v38; // edx
  char *v39; // edi
  _DWORD *v40; // eax
  _DWORD *v41; // edx
  int v42; // [esp+4h] [ebp-28h]
  char *v43; // [esp+4h] [ebp-28h]
  char *v44; // [esp+4h] [ebp-28h]
  char *v45; // [esp+4h] [ebp-28h]
  char *v46; // [esp+8h] [ebp-24h]
  char *v47; // [esp+8h] [ebp-24h]
  char *v48; // [esp+8h] [ebp-24h]
  char *v49; // [esp+8h] [ebp-24h]
  char *v50; // [esp+Ch] [ebp-20h]
  char *v51; // [esp+Ch] [ebp-20h]
  char *v52; // [esp+10h] [ebp-1Ch]
  char **v53; // [esp+14h] [ebp-18h]
  char **v54; // [esp+14h] [ebp-18h]

  v1 = a1;
  v2 = *a1;
  v3 = a1[1];
  v4 = 0;
  if ( *a1 == v3 )
    goto LABEL_11;
  if ( *v2 != 85 )
  {
    if ( *v2 == 114 )
    {
      *a1 = ++v2;
      v4 = 4;
    }
LABEL_11:
    if ( v2 != v3 )
    {
      if ( *v2 == 86 )
      {
        *a1 = ++v2;
        v4 |= 2u;
      }
      if ( v2 != v3 && *v2 == 75 )
      {
        *a1 = v2 + 1;
        v4 |= 1u;
      }
    }
    result = sub_C2AF0(a1);
    if ( result )
    {
      if ( v4 )
      {
        v47 = result;
        v15 = v1;
        v16 = v1[1116];
        v17 = *((_DWORD *)v16 + 1);
        v42 = v4;
        if ( (unsigned int)(v17 + 16) < 0xFF8 )
        {
          v20 = v16 + 4;
        }
        else
        {
          v18 = v15;
          v19 = operator new[](0x1000u);
          *v19 = v16;
          v19[1] = 0;
          v18[1116] = (char *)v19;
          v17 = 0;
          v20 = v19 + 1;
          v16 = (char *)v19;
        }
        *v20 = v17 + 16;
        v21 = v47[7];
        v22 = *(_WORD *)(v47 + 5);
        v16[v17 + 12] = 3;
        *(_WORD *)&v16[v17 + 13] = v22;
        v16[v17 + 15] = v21;
        *(_DWORD *)&v16[v17 + 8] = off_13A93C;
        *(_DWORD *)&v16[v17 + 16] = v42;
        *(_DWORD *)&v16[v17 + 20] = v47;
        return &v16[v17 + 8];
      }
      return result;
    }
    return nullptr;
  }
  v5 = v2 + 1;
  *v1 = v2 + 1;
  v46 = v3;
  if ( v3 == v2 + 1 )
    return nullptr;
  v6 = nullptr;
  v7 = nullptr;
  if ( (unsigned __int8)(*v5 - 48) <= 9u )
  {
    v8 = v1;
    v9 = v2 + 2;
    v10 = v8;
    *v8 = v2 + 2;
    v11 = v2[1] - 48;
    v12 = v46;
    if ( v46 == v9 )
    {
      v5 = v9;
    }
    else
    {
      while ( (unsigned __int8)(*v9 - 48) < 0xAu )
      {
        v5 = v9 + 1;
        *v10 = v9 + 1;
        v11 = *v9 + 10 * v11 - 48;
        v12 = v46;
        v13 = v46 == ++v9;
        if ( v13 )
          goto LABEL_26;
      }
      v5 = v9;
      v12 = v46;
    }
LABEL_26:
    v23 = v12 - v5 < v11;
    v6 = nullptr;
    v1 = v10;
    v7 = nullptr;
    if ( !v23 )
    {
      v24 = &v5[v11];
      v6 = v5;
      *v1 = v24;
      v5 = v24;
      v7 = v24;
    }
  }
  if ( v6 == v7 )
    return nullptr;
  v25 = v7 - v6;
  v43 = v6;
  if ( (unsigned int)(v7 - v6) >= 9
    && *v6 == 111
    && v6[1] == 98
    && v6[2] == 106
    && v6[3] == 99
    && v6[4] == 112
    && v6[5] == 114
    && v6[6] == 111
    && v6[7] == 116
    && v6[8] == 111 )
  {
    v26 = v25 - 1;
    if ( v25 > 9 )
      v26 = 9;
    v44 = &v43[v26];
    *v1 = v44;
    v1[1] = v7;
    v50 = v7;
    v13 = v7 == v44;
    v52 = nullptr;
    v27 = nullptr;
    if ( !v13 )
    {
      v52 = nullptr;
      v27 = nullptr;
      if ( (unsigned __int8)(*v44 - 48) <= 9u )
      {
        v53 = v1;
        if ( v44 == v50 )
        {
          v32 = -48;
          v29 = v44;
          v30 = v50;
LABEL_58:
          v45 = v30;
        }
        else
        {
          v28 = 0;
          v29 = v44;
          v30 = v50;
          while ( 1 )
          {
            v31 = v29 + 1;
            *v53 = v29 + 1;
            v32 = v28 + *v29 - 48;
            v29 = v31;
            if ( v30 == v31 )
              break;
            v29 = v31;
            if ( (unsigned __int8)(*v31 - 48) >= 0xAu )
              break;
            v28 = 10 * v32;
            v30 = v50;
            if ( v50 == v31 )
            {
              v32 = v28 - 48;
              goto LABEL_58;
            }
          }
          v45 = v29;
        }
        v52 = nullptr;
        v27 = nullptr;
        v1 = v53;
        if ( v50 - v29 >= v32 )
        {
          v38 = &v45[v32];
          *v53 = v38;
          v52 = v38;
          v27 = v45;
        }
      }
    }
    v1[1] = v46;
    *v1 = v5;
    v49 = v27;
    if ( v27 != v52 )
    {
      v39 = sub_D66A0(v1);
      result = nullptr;
      if ( v39 )
      {
        v54 = v1;
        v16 = v1[1116];
        v17 = *((_DWORD *)v16 + 1);
        if ( (unsigned int)(v17 + 32) < 0xFF8 )
        {
          v41 = v16 + 4;
        }
        else
        {
          v40 = operator new[](0x1000u);
          *v40 = v16;
          v40[1] = 0;
          v54[1116] = (char *)v40;
          v17 = 0;
          v41 = v40 + 1;
          v16 = (char *)v40;
        }
        *v41 = v17 + 32;
        *(_DWORD *)&v16[v17 + 12] = 16843018;
        *(_DWORD *)&v16[v17 + 8] = off_13A8CC;
        *(_DWORD *)&v16[v17 + 16] = v39;
        *(_DWORD *)&v16[v17 + 20] = v49;
        v37 = v52;
LABEL_54:
        *(_DWORD *)&v16[v17 + 24] = v37;
        return &v16[v17 + 8];
      }
      return result;
    }
    return nullptr;
  }
  v33 = sub_D66A0(v1);
  result = nullptr;
  if ( v33 )
  {
    v48 = v33;
    v51 = v7;
    v34 = v1;
    v16 = v1[1116];
    v17 = *((_DWORD *)v16 + 1);
    if ( (unsigned int)(v17 + 32) < 0xFF8 )
    {
      v36 = v16 + 4;
    }
    else
    {
      v35 = operator new[](0x1000u);
      *v35 = v16;
      v35[1] = 0;
      v34[1116] = (char *)v35;
      v17 = 0;
      v36 = v35 + 1;
      v16 = (char *)v35;
    }
    *v36 = v17 + 32;
    *(_DWORD *)&v16[v17 + 12] = 16843010;
    *(_DWORD *)&v16[v17 + 8] = off_13A904;
    *(_DWORD *)&v16[v17 + 16] = v48;
    *(_DWORD *)&v16[v17 + 20] = v43;
    v37 = v51;
    goto LABEL_54;
  }
  return result;
}
// 13A8CC: using guessed type int (*off_13A8CC[3])();
// 13A904: using guessed type int (*off_13A904[3])();
// 13A93C: using guessed type int (__cdecl *off_13A93C[5])(int, int);
