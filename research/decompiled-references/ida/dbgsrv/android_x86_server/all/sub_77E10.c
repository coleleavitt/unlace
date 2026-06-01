/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77E10
// Address: 0x00077E10

//----- (00077E10) --------------------------------------------------------
char __cdecl sub_77E10(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // ecx
  int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  unsigned __int8 v11; // al
  char v12; // si
  int v13; // esi
  _DWORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  int v18; // [esp+10h] [ebp-4Ch]
  _DWORD *v19; // [esp+14h] [ebp-48h]
  unsigned int v20; // [esp+18h] [ebp-44h]
  int v21; // [esp+1Ch] [ebp-40h]
  int v22; // [esp+20h] [ebp-3Ch]
  _DWORD *v23; // [esp+24h] [ebp-38h]
  unsigned int v24; // [esp+28h] [ebp-34h]
  int v25; // [esp+30h] [ebp-2Ch]
  int v26; // [esp+38h] [ebp-24h]
  unsigned int v27; // [esp+3Ch] [ebp-20h]
  char v28; // [esp+44h] [ebp-18h]
  int v29; // [esp+48h] [ebp-14h]

  v2 = a1;
  if ( (*(_DWORD *)(a1 + 4156) & 0x3FFFFFFF) == 0 )
    return 0;
  v18 = *(_DWORD *)(a1 + 4156);
  v24 = a2 - *(_DWORD *)(a1 + 4168);
  v25 = a1 + a2 + 25;
  v23 = *(_DWORD **)(a1 + 4152);
  v3 = v23;
  while ( 1 )
  {
    v19 = v3;
    v4 = **(_DWORD **)(v2 + 12);
    v26 = *v3;
    v5 = *(_DWORD *)(v4 + 40 * *v3 + 4);
    v6 = v5;
    if ( v24 < v5 )
      v6 = v24;
    v27 = *(_DWORD *)(v4 + 40 * v26 + 4);
    v7 = v5 - v6 + *(_DWORD *)(v4 + 40 * v26 + 12);
    if ( !*(_DWORD *)(v4 + 40 * v26 + 16) )
      v7 = 0;
    v21 = v7;
    v20 = v6;
    if ( !v6 )
      break;
    v22 = *(_DWORD *)(v4 + 40 * v26) + v5 - v6;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = v25 - v6 - 1;
    v10 = 0;
    v28 = v8;
    while ( 1 )
    {
      v11 = *(_BYTE *)(v22 + v10);
      if ( (v8 & 1) != 0 )
        break;
      v29 = v11;
      v12 = toupper(*(unsigned __int8 *)(v9 + v10));
      v11 = toupper(v29);
      v9 = v25 - v20 - 1;
      LOBYTE(v8) = v28;
      if ( v21 )
        goto LABEL_11;
LABEL_21:
      if ( v12 != v11 )
        goto LABEL_25;
LABEL_22:
      if ( ++v10 >= v20 )
        goto LABEL_23;
    }
    v12 = *(_BYTE *)(v9 + v10);
    if ( !v21 )
      goto LABEL_21;
LABEL_11:
    if ( (v8 & 0x20) != 0 )
    {
      if ( ((unsigned __int8)(v11 ^ v12) & *(_BYTE *)(v21 + v10)) != 0 )
        goto LABEL_25;
      goto LABEL_22;
    }
    if ( v21 == 255 )
    {
      if ( v11 == 0xFF )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v12 == v11 || !*(_BYTE *)(v21 + v10) )
      goto LABEL_22;
LABEL_25:
    v2 = a1;
    v16 = v19;
    v15 = v18;
LABEL_26:
    v3 = v16 + 1;
    v18 = v15;
    if ( v3 == &v23[v15] )
      return 0;
  }
LABEL_23:
  v2 = a1;
  v13 = a2 + *(_DWORD *)(a1 + 4120);
  if ( v24 < v27 )
  {
    v14 = qalloc_or_throw(20);
    v14[2] = v13 - v27;
    v14[3] = v26;
    v14[4] = v20;
    *v14 = a1 + 4124;
    v14[1] = *(_DWORD *)(a1 + 4128);
    **(_DWORD **)(a1 + 4128) = v14;
    *(_DWORD *)(a1 + 4128) = v14;
    ++*(_DWORD *)(a1 + 4132);
    v23 = *(_DWORD **)(a1 + 4152);
    v15 = *(_DWORD *)(a1 + 4156);
    v16 = v19;
    goto LABEL_26;
  }
  **(_DWORD **)(a1 + 4) = v13 - v20;
  return 1;
}
