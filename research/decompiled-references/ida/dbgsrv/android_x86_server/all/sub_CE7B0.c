/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CE7B0
// Address: 0x000CE7B0

//----- (000CE7B0) --------------------------------------------------------
char *__fastcall sub_CE7B0(int a1)
{
  char *v2; // eax
  int v3; // ecx
  char *v4; // eax
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  char *v12; // eax
  char *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // edx
  char *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  _DWORD *v21; // [esp+10h] [ebp-1Ch]
  char *v22; // [esp+10h] [ebp-1Ch]
  _DWORD *v23; // [esp+10h] [ebp-1Ch]
  char *v24; // [esp+14h] [ebp-18h]
  char *v25; // [esp+14h] [ebp-18h]
  char *v26; // [esp+14h] [ebp-18h]
  _DWORD *v27; // [esp+18h] [ebp-14h]

  v2 = *(char **)a1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) < 2 || *v2 != 100 )
    return sub_C8090(a1);
  v3 = v2[1];
  if ( v3 == 88 )
  {
    *(_DWORD *)a1 = v2 + 2;
    v12 = sub_C8090(a1);
    v5 = 0;
    if ( !v12 )
      return (char *)v5;
    v25 = v12;
    v13 = sub_C8090(a1);
    if ( !v13 )
      return (char *)v5;
    v22 = v13;
    v14 = sub_CE7B0(a1);
    if ( !v14 )
      return (char *)v5;
    v27 = v14;
    v7 = *(_DWORD **)(a1 + 4464);
    v8 = v7[1];
    if ( (unsigned int)(v8 + 32) < 0xFF8 )
    {
      v16 = v7 + 1;
    }
    else
    {
      v15 = operator new[](0x1000u);
      *v15 = v7;
      v15[1] = 0;
      *(_DWORD *)(a1 + 4464) = v15;
      v8 = 0;
      v16 = v15 + 1;
      v7 = v15;
    }
    *v16 = v8 + 32;
    *(_DWORD *)((char *)v7 + v8 + 12) = 16843052;
    *(_DWORD *)((char *)v7 + v8 + 8) = off_13A2AC;
    *(_DWORD *)((char *)v7 + v8 + 16) = v25;
    *(_DWORD *)((char *)v7 + v8 + 20) = v22;
    *(_DWORD *)((char *)v7 + v8 + 24) = v27;
    return (char *)v7 + v8 + 8;
  }
  if ( v3 == 120 )
  {
    *(_DWORD *)a1 = v2 + 2;
    v17 = sub_C8090(a1);
    v5 = 0;
    if ( !v17 )
      return (char *)v5;
    v26 = v17;
    v18 = sub_CE7B0(a1);
    if ( !v18 )
      return (char *)v5;
    v7 = *(_DWORD **)(a1 + 4464);
    v8 = v7[1];
    v23 = v18;
    if ( (unsigned int)(v8 + 32) < 0xFF8 )
    {
      v20 = v7 + 1;
    }
    else
    {
      v19 = operator new[](0x1000u);
      *v19 = v7;
      v19[1] = 0;
      *(_DWORD *)(a1 + 4464) = v19;
      v8 = 0;
      v20 = v19 + 1;
      v7 = v19;
    }
    *v20 = v8 + 32;
    *(_DWORD *)((char *)v7 + v8 + 12) = 16843051;
    *(_DWORD *)((char *)v7 + v8 + 8) = off_13A274;
    *(_DWORD *)((char *)v7 + v8 + 16) = v26;
    *(_DWORD *)((char *)v7 + v8 + 20) = v23;
    *((_BYTE *)v7 + v8 + 24) = 1;
    return (char *)v7 + v8 + 8;
  }
  if ( v3 != 105 )
    return sub_C8090(a1);
  *(_DWORD *)a1 = v2 + 2;
  v4 = sub_D0EF0((char **)a1);
  v5 = 0;
  if ( !v4 )
    return (char *)v5;
  v24 = v4;
  v6 = sub_CE7B0(a1);
  if ( !v6 )
    return (char *)v5;
  v7 = *(_DWORD **)(a1 + 4464);
  v8 = v7[1];
  v21 = v6;
  if ( (unsigned int)(v8 + 32) < 0xFF8 )
  {
    v10 = v7 + 1;
  }
  else
  {
    v9 = operator new[](0x1000u);
    *v9 = v7;
    v9[1] = 0;
    *(_DWORD *)(a1 + 4464) = v9;
    v8 = 0;
    v10 = v9 + 1;
    v7 = v9;
  }
  *v10 = v8 + 32;
  *(_DWORD *)((char *)v7 + v8 + 12) = 16843051;
  *(_DWORD *)((char *)v7 + v8 + 8) = off_13A274;
  *(_DWORD *)((char *)v7 + v8 + 16) = v24;
  *(_DWORD *)((char *)v7 + v8 + 20) = v21;
  *((_BYTE *)v7 + v8 + 24) = 0;
  return (char *)v7 + v8 + 8;
}
// 13A274: using guessed type int (*off_13A274[3])();
// 13A2AC: using guessed type int (*off_13A2AC[3])();
